// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145510210 FUN_145510210 body=135 status=ok
// SIG undefined FUN_145510210(void)

undefined8 FUN_145510210(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  param_1[4] = param_2;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  param_1[6] = 0x1000;
  uVar1 = 1;
  do {
    uVar3 = uVar1;
    uVar1 = uVar3 * 2;
  } while (uVar1 < 0x80);
  lVar2 = FUN_145511290(param_2,uVar3 << 4);
  *param_1 = lVar2;
  if (lVar2 != 0) {
    param_1[1] = uVar1 - 1;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 7) = 0;
    return 0;
  }
  return 0xfffffc7b;
}



// FUNCTION 1455102a0 FUN_1455102a0 body=158 status=ok
// SIG undefined FUN_1455102a0(void)

void FUN_1455102a0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  lVar1 = param_1[4];
  if (param_1[3] != 0) {
    if (param_1[3] == 0) {
      _wassert(L"idx < ringbuf->len",
               L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_hd.c",0x25d)
      ;
    }
    do {
      puVar2 = *(undefined8 **)(*param_1 + (param_1[2] + uVar3 & param_1[1]) * 8);
      FUN_1455dcd60(puVar2[1]);
      FUN_1455dcd60(*puVar2);
      FUN_1455112a0(lVar1,puVar2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulonglong)param_1[3]);
  }
  FUN_1455112a0(lVar1,*param_1);
  return;
}



// FUNCTION 145510340 FUN_145510340 body=113 status=ok
// SIG undefined FUN_145510340(void)

byte * FUN_145510340(byte *param_1,ulonglong param_2,byte param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = (1 << (param_3 & 0x1f)) + -1;
  bVar2 = ~(byte)iVar3 & *param_1;
  if (param_2 < (ulonglong)(longlong)iVar3) {
    *param_1 = bVar2 | (byte)param_2;
    return (byte *)0x1;
  }
  param_2 = param_2 - (longlong)iVar3;
  *param_1 = (byte)iVar3 | bVar2;
  pbVar1 = param_1;
  while( true ) {
    pbVar1 = pbVar1 + 1;
    bVar2 = (byte)param_2;
    if (param_2 < 0x80) break;
    param_2 = param_2 >> 7;
    *pbVar1 = bVar2 | 0x80;
  }
  *pbVar1 = bVar2;
  return pbVar1 + (1 - (longlong)param_1);
}



// FUNCTION 1455103c0 FUN_1455103c0 body=140 status=ok
// SIG undefined FUN_1455103c0(void)

void FUN_1455103c0(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = 1;
  if (0x1e < param_2) {
    for (uVar1 = param_2 - 0x1f; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
      uVar2 = uVar2 + 1;
    }
    uVar2 = uVar2 + 1;
    if (0x10 < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  local_28[0] = 0x20;
  FUN_145510340(local_28,param_2,5);
  FUN_145511b50(param_1,local_28,uVar2);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 145510460 FUN_145510460 body=257 status=ok
// SIG undefined FUN_145510460(void)

void FUN_145510460(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined1 auStack_68 [32];
  byte local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = FUN_1455dcf00(param_2,param_3);
  uVar4 = 1;
  bVar5 = uVar2 < param_3;
  uVar3 = param_3;
  if (bVar5) {
    uVar3 = uVar2;
  }
  if (0x7e < uVar3) {
    for (uVar2 = uVar3 - 0x7f; 0x7f < uVar2; uVar2 = uVar2 >> 7) {
      uVar4 = uVar4 + 1;
    }
    uVar4 = uVar4 + 1;
    if (0x10 < uVar4) goto LAB_145510554;
  }
  local_48[0] = -bVar5 & 0x80;
  FUN_145510340(local_48,uVar3,7);
  iVar1 = FUN_145511b50(param_1,local_48,uVar4);
  if (iVar1 == 0) {
    if (bVar5) {
      FUN_1455dd000(param_1,param_2,param_3);
    }
    else {
      if (uVar3 != param_3) {
        _wassert(L"enclen == len",
                 L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_hd.c",
                 0x3ec);
      }
      FUN_145511b50(param_1,param_2,param_3);
    }
  }
LAB_145510554:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
}



// FUNCTION 145510570 FUN_145510570 body=249 status=ok
// SIG undefined FUN_145510570(void)

void FUN_145510570(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  sbyte sVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = param_2 + 1;
  uVar4 = 1;
  sVar5 = 6;
  if (param_4 != 0) {
    sVar5 = 4;
  }
  uVar3 = (ulonglong)((1 << sVar5) + -1);
  if (uVar3 <= uVar1) {
    for (uVar3 = uVar1 - uVar3; 0x7f < uVar3; uVar3 = uVar3 >> 7) {
      uVar4 = uVar4 + 1;
    }
    uVar4 = uVar4 + 1;
    if (0x10 < uVar4) goto LAB_14551065c;
  }
  if (param_4 == 0) {
    local_38[0] = 0x40;
  }
  else {
    if (param_4 != 1) {
      if (param_4 == 2) {
        local_38[0] = 0x10;
        goto LAB_145510624;
      }
      _wassert(L"0",L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_hd.c",
               0x3fc);
    }
    local_38[0] = 0;
  }
LAB_145510624:
  FUN_145510340(local_38,uVar1,sVar5);
  iVar2 = FUN_145511b50(param_1,local_38,uVar4);
  if (iVar2 == 0) {
    FUN_145510460(param_1,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x18));
  }
LAB_14551065c:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 145510680 FUN_145510680 body=127 status=ok
// SIG undefined FUN_145510680(void)

void FUN_145510680(undefined8 param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    uVar2 = 0x40;
  }
  else {
    if (param_3 != 1) {
      if (param_3 == 2) {
        uVar2 = 0x10;
        goto LAB_1455106c5;
      }
      _wassert(L"0",L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_hd.c",
               0x3fc);
    }
    uVar2 = 0;
  }
LAB_1455106c5:
  iVar1 = FUN_145511c30(param_1,uVar2);
  if (iVar1 == 0) {
    iVar1 = FUN_145510460(param_1,*param_2,param_2[2]);
    if (iVar1 == 0) {
      FUN_145510460(param_1,param_2[1],param_2[3]);
    }
  }
  return;
}



// FUNCTION 145510700 FUN_145510700 body=777 status=ok
// SIG undefined FUN_145510700(void)

undefined8 FUN_145510700(longlong *param_1,longlong *param_2,longlong param_3,uint param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  uVar11 = 0;
  lVar2 = param_1[4];
  lVar8 = param_1[5];
  uVar12 = *(longlong *)(*param_2 + 0x18) + 0x20 + *(longlong *)(param_2[1] + 0x18);
  uVar13 = param_1[6];
  if (uVar13 < lVar8 + uVar12) {
    do {
      uVar10 = param_1[3];
      if (uVar10 == 0) break;
      uVar13 = uVar10 - 1;
      if (uVar10 <= uVar13) {
        _wassert(L"idx < ringbuf->len",
                 L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_hd.c",
                 0x25d);
        lVar8 = param_1[5];
        uVar10 = param_1[3];
      }
      plVar3 = *(longlong **)(*param_1 + (param_1[2] + uVar13 & param_1[1]) * 8);
      param_1[5] = ((lVar8 - *(longlong *)(plVar3[1] + 0x18)) - *(longlong *)(*plVar3 + 0x18)) +
                   -0x20;
      if (uVar10 == 0) {
        _wassert(L"ringbuf->len > 0",
                 L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_hd.c",
                 0x299);
        uVar10 = param_1[3];
      }
      param_1[3] = uVar10 - 1;
      if (param_3 != 0) {
        uVar13 = (ulonglong)(*(uint *)((longlong)plVar3 + 0x4c) & 0x7f);
        plVar1 = (longlong *)(param_3 + uVar13 * 8);
        for (plVar4 = *(longlong **)(param_3 + uVar13 * 8); plVar4 != (longlong *)0x0;
            plVar4 = (longlong *)plVar4[8]) {
          if (plVar4 == plVar3) {
            *plVar1 = plVar3[8];
            plVar3[8] = 0;
            break;
          }
          plVar1 = plVar4 + 8;
        }
      }
      FUN_1455dcd60(plVar3[1]);
      FUN_1455dcd60(*plVar3);
      FUN_1455112a0(lVar2,plVar3);
      lVar8 = param_1[5];
      uVar13 = param_1[6];
    } while (uVar13 < lVar8 + uVar12);
  }
  if (uVar13 < uVar12) {
    return 0;
  }
  puVar7 = (undefined8 *)FUN_145511290(lVar2,0x50);
  if (puVar7 == (undefined8 *)0x0) {
LAB_145510940:
    uVar9 = 0xfffffc7b;
  }
  else {
    uVar5 = *(undefined4 *)((longlong)param_2 + 4);
    lVar8 = param_2[1];
    uVar6 = *(undefined4 *)((longlong)param_2 + 0xc);
    *(int *)puVar7 = (int)*param_2;
    *(undefined4 *)((longlong)puVar7 + 4) = uVar5;
    *(int *)(puVar7 + 1) = (int)lVar8;
    *(undefined4 *)((longlong)puVar7 + 0xc) = uVar6;
    puVar7[2] = param_2[2];
    puVar7[3] = *(undefined8 *)(*param_2 + 0x10);
    puVar7[5] = *(undefined8 *)(*param_2 + 0x18);
    puVar7[4] = *(undefined8 *)(param_2[1] + 0x10);
    puVar7[6] = *(undefined8 *)(param_2[1] + 0x18);
    *(undefined1 *)(puVar7 + 7) = *(undefined1 *)((longlong)param_2 + 0x14);
    puVar7[8] = 0;
    *(undefined4 *)((longlong)puVar7 + 0x4c) = 0;
    FUN_1455dcd50(*puVar7);
    FUN_1455dcd50(puVar7[1]);
    uVar13 = param_1[1];
    uVar10 = param_1[3] + 1;
    if (uVar13 + 1 < uVar10) {
      uVar13 = 1;
      if (1 < uVar10) {
        do {
          uVar13 = uVar13 * 2;
        } while (uVar13 < uVar10);
      }
      lVar8 = FUN_145511290(lVar2,uVar13 * 8);
      if (lVar8 == 0) {
        FUN_1455dcd60(puVar7[1]);
        FUN_1455dcd60(*puVar7);
        FUN_1455112a0(lVar2,puVar7);
        goto LAB_145510940;
      }
      if (param_1[3] != 0) {
        uVar10 = uVar11;
        if (param_1[3] == 0) {
          _wassert(L"idx < ringbuf->len",
                   L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_hd.c",
                   0x25d);
        }
        do {
          *(undefined8 *)(lVar8 + uVar10 * 8) =
               *(undefined8 *)(*param_1 + (param_1[2] + uVar10 & param_1[1]) * 8);
          uVar10 = uVar10 + 1;
        } while (uVar10 < (ulonglong)param_1[3]);
      }
      FUN_1455112a0(lVar2,*param_1);
      uVar13 = uVar13 - 1;
      *param_1 = lVar8;
      param_1[1] = uVar13;
    }
    else {
      uVar11 = param_1[2];
      lVar8 = *param_1;
    }
    param_1[2] = uVar11 - 1;
    *(undefined8 **)(lVar8 + (uVar11 - 1 & uVar13) * 8) = puVar7;
    param_1[3] = param_1[3] + 1;
    *(int *)(puVar7 + 9) = (int)param_1[7];
    *(int *)(param_1 + 7) = (int)param_1[7] + 1;
    *(uint *)((longlong)puVar7 + 0x4c) = param_4;
    if (param_3 != 0) {
      lVar2 = *(longlong *)(param_3 + (ulonglong)(param_4 & 0x7f) * 8);
      if (lVar2 != 0) {
        puVar7[8] = lVar2;
      }
      *(undefined8 **)(param_3 + (ulonglong)(param_4 & 0x7f) * 8) = puVar7;
    }
    param_1[5] = param_1[5] + uVar12;
    uVar9 = 0;
  }
  return uVar9;
}



// FUNCTION 145510a10 FUN_145510a10 body=415 status=ok
// SIG undefined FUN_145510a10(void)

ulonglong FUN_145510a10(longlong param_1,undefined8 *param_2,uint param_3,int param_4,
                       longlong param_5,uint param_6)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  plVar5 = (longlong *)0x0;
  plVar1 = plVar5;
  for (plVar8 = *(longlong **)(param_5 + (ulonglong)(param_6 & 0x7f) * 8); plVar7 = plVar1,
      plVar8 != (longlong *)0x0; plVar8 = (longlong *)plVar8[8]) {
    if (param_3 == *(uint *)(plVar8 + 2)) {
      if (param_3 == 0xffffffff) {
        if (param_6 == *(uint *)((longlong)plVar8 + 0x4c)) {
          if ((*(size_t *)(*plVar8 + 0x18) == param_2[2]) &&
             (iVar2 = memcmp(*(void **)(*plVar8 + 0x10),(void *)*param_2,param_2[2]), iVar2 == 0))
          goto LAB_145510aa2;
        }
      }
      else {
LAB_145510aa2:
        if ((plVar1 == (longlong *)0x0) && (plVar7 = plVar8, param_4 == 2)) break;
        plVar7 = plVar8;
        if (plVar1 != (longlong *)0x0) {
          plVar7 = plVar1;
        }
        if ((*(size_t *)(plVar8[1] + 0x18) == param_2[3]) &&
           (iVar2 = memcmp(*(void **)(plVar8[1] + 0x10),(void *)param_2[1],param_2[3]), iVar2 == 0))
        {
          plVar5 = (longlong *)&DAT_00000001;
          goto LAB_145510b11;
        }
      }
    }
    plVar1 = plVar7;
  }
  plVar8 = plVar7;
  if (param_3 < 0x3d) {
    if (param_4 == 2) {
      uVar3 = (ulonglong)param_3;
    }
    else {
      lVar4 = (longlong)(int)param_3 << 7;
      uVar6 = param_3;
      do {
        if (*(uint *)(&DAT_149d9b878 + lVar4) != param_3) break;
        if ((*(size_t *)(&DAT_149d9b840 + lVar4) == param_2[3]) &&
           (iVar2 = memcmp(*(void **)((longlong)&PTR_DAT_149d9b838 + lVar4),(void *)param_2[1],
                           param_2[3]), iVar2 == 0)) {
          return (ulonglong)uVar6 | 0x100000000;
        }
        uVar6 = uVar6 + 1;
        lVar4 = lVar4 + 0x80;
      } while (lVar4 < 0x1e01);
      uVar3 = (ulonglong)param_3;
    }
  }
  else {
LAB_145510b11:
    if (plVar8 == (longlong *)0x0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (ulonglong)((*(int *)(param_1 + 0x38) - (int)plVar8[9]) + 0x3c) |
              (longlong)plVar5 << 0x20;
    }
  }
  return uVar3;
}



// FUNCTION 145510bb0 FUN_145510bb0 body=327 status=ok
// SIG undefined FUN_145510bb0(void)

void FUN_145510bb0(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar6 = param_1[5];
  lVar3 = param_1[4];
  if ((ulonglong)param_1[6] < uVar6) {
    do {
      uVar7 = param_1[3];
      if (uVar7 == 0) {
        return;
      }
      uVar1 = uVar7 - 1;
      if (uVar7 <= uVar1) {
        _wassert(L"idx < ringbuf->len",
                 L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_hd.c",
                 0x25d);
        uVar6 = param_1[5];
        uVar7 = param_1[3];
      }
      plVar4 = *(longlong **)(*param_1 + (param_1[2] + uVar1 & param_1[1]) * 8);
      param_1[5] = ((uVar6 - *(longlong *)(*plVar4 + 0x18)) - *(longlong *)(plVar4[1] + 0x18)) +
                   -0x20;
      if (uVar7 == 0) {
        _wassert(L"ringbuf->len > 0",
                 L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_hd.c",
                 0x299);
        uVar7 = param_1[3];
      }
      param_1[3] = uVar7 - 1;
      if (param_2 != 0) {
        uVar6 = (ulonglong)(*(uint *)((longlong)plVar4 + 0x4c) & 0x7f);
        plVar2 = (longlong *)(param_2 + uVar6 * 8);
        for (plVar5 = *(longlong **)(param_2 + uVar6 * 8); plVar5 != (longlong *)0x0;
            plVar5 = (longlong *)plVar5[8]) {
          if (plVar5 == plVar4) {
            *plVar2 = plVar4[8];
            plVar4[8] = 0;
            break;
          }
          plVar2 = plVar5 + 8;
        }
      }
      FUN_1455dcd60(plVar4[1]);
      FUN_1455dcd60(*plVar4);
      FUN_1455112a0(lVar3,plVar4);
      uVar6 = param_1[5];
    } while ((ulonglong)param_1[6] < uVar6);
  }
  return;
}



// FUNCTION 145510d00 FUN_145510d00 body=651 status=ok
// SIG undefined FUN_145510d00(void)

void FUN_145510d00(longlong param_1,undefined8 param_2,longlong *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  longlong lVar13;
  int iVar14;
  undefined1 auStack_b8 [32];
  longlong local_98;
  uint local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  uint local_68;
  undefined1 local_64;
  longlong local_60 [3];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_80 = *(undefined8 *)(param_1 + 0x20);
  uVar8 = param_3[2];
  lVar2 = *param_3;
  uVar10 = 0;
  local_88 = param_2;
  local_60[0] = param_1;
  uVar3 = FUN_14550f5d0(lVar2,uVar8);
  uVar11 = 1;
  if (uVar3 == 0xffffffff) {
    uVar10 = 0x811c9dc5;
    uVar7 = 0;
    if (uVar8 != 0) {
      do {
        pbVar1 = (byte *)(uVar7 + lVar2);
        uVar7 = uVar7 + 1;
        uVar10 = (*pbVar1 ^ uVar10) * 0x1000193;
      } while (uVar7 < uVar8);
    }
LAB_145510dae:
    if ((*(byte *)(param_3 + 4) & 1) != 0) goto LAB_145510dea;
    if (((uVar3 < 0x37) && ((0x40218208100008U >> ((longlong)(int)uVar3 & 0x3fU) & 1) != 0)) ||
       (iVar14 = 0, (ulonglong)(*(longlong *)(param_1 + 0x30) * 3) >> 2 < param_3[3] + 0x20 + uVar8)
       ) {
      iVar14 = 1;
    }
  }
  else {
    if ((int)uVar3 < 0x3d) {
      uVar10 = *(uint *)(&DAT_149d9b87c + (longlong)(int)uVar3 * 0x80);
    }
    if ((uVar3 != 0x16) && ((uVar3 != 0x1f || (0x13 < (ulonglong)param_3[3])))) goto LAB_145510dae;
LAB_145510dea:
    iVar14 = 2;
  }
  local_98 = param_1 + 0x40;
  local_90 = uVar10;
  uVar5 = FUN_145510a10(param_1,param_3,uVar3,iVar14);
  lVar13 = local_60[0];
  uVar12 = local_80;
  iVar9 = (int)uVar5;
  if ((int)((ulonglong)uVar5 >> 0x20) != 0) {
    uVar8 = (longlong)iVar9 + 1;
    if (0x7e < uVar8) {
      for (uVar7 = (longlong)iVar9 - 0x7e; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
        uVar11 = uVar11 + 1;
      }
      uVar11 = uVar11 + 1;
      if (0x10 < uVar11) goto LAB_145510f7e;
    }
    local_60[0] = CONCAT71(local_60[0]._1_7_,0x80);
    FUN_145510340(local_60,uVar8,7);
    FUN_145511b50(local_88,local_60,uVar11);
    goto LAB_145510f7e;
  }
  if (iVar14 == 0) {
    if (iVar9 == -1) {
      iVar4 = FUN_1455dce50(&local_78,lVar2,uVar8,local_80);
      lVar13 = local_60[0];
      if (iVar4 != 0) goto LAB_145510f7e;
    }
    else {
      puVar6 = (undefined8 *)FUN_14550f4f0(local_60,local_60[0],(longlong)iVar9);
      local_78 = *puVar6;
      FUN_1455dcd50();
      uVar12 = local_80;
    }
    iVar4 = FUN_1455dce50(&local_70,param_3[1],param_3[3],uVar12);
    if (iVar4 != 0) {
      FUN_1455dcd60(local_78);
      goto LAB_145510f7e;
    }
    local_64 = 0;
    local_68 = uVar3;
    iVar4 = FUN_145510700(lVar13,&local_78,lVar13 + 0x40,uVar10);
    FUN_1455dcd60(local_70);
    FUN_1455dcd60(local_78);
    if (iVar4 != 0) goto LAB_145510f7e;
  }
  if (iVar9 == -1) {
    FUN_145510680(local_88,param_3,iVar14);
  }
  else {
    FUN_145510570(local_88,(longlong)iVar9,param_3,iVar14);
  }
LAB_145510f7e:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
}



// FUNCTION 145510fb0 FUN_145510fb0 body=130 status=ok
// SIG undefined FUN_145510fb0(void)

int FUN_145510fb0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar4 = param_4 - param_3;
  uVar1 = *(ulonglong *)(param_1 + 0xb8);
  if (uVar1 <= uVar4) {
    param_4 = uVar1 + param_3;
  }
  iVar2 = FUN_1455dd180(param_1 + 0x40,param_2,param_3,param_4 - param_3,uVar1 <= uVar4);
  if (-1 < iVar2) {
    iVar3 = FUN_1455dd260(param_1 + 0x40);
    if (iVar3 != 0) {
      return -0x20b;
    }
    *(longlong *)(param_1 + 0xb8) = *(longlong *)(param_1 + 0xb8) - (longlong)iVar2;
  }
  return iVar2;
}



// FUNCTION 145511040 FUN_145511040 body=88 status=ok
// SIG undefined FUN_145511040(void)

ulonglong FUN_145511040(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar2 = param_4 - param_3;
  if (*(ulonglong *)(param_1 + 0xb8) <= (ulonglong)(param_4 - param_3)) {
    uVar2 = *(ulonglong *)(param_1 + 0xb8);
  }
  uVar1 = FUN_1452e70f0(*(undefined8 *)(param_2 + 0x18),param_3,uVar2);
  *(undefined8 *)(param_2 + 0x18) = uVar1;
  *(longlong *)(param_1 + 0xb8) = *(longlong *)(param_1 + 0xb8) - uVar2;
  return uVar2 & 0xffffffff;
}



// FUNCTION 1455110a0 FUN_1455110a0 body=181 status=ok
// SIG undefined FUN_1455110a0(void)

void FUN_1455110a0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong local_28;
  longlong lStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  lVar1 = *(longlong *)(param_1 + 0x98);
  lVar2 = *(longlong *)(param_1 + 0xa0);
  uStack_14 = CONCAT31(uStack_14._1_3_,*(char *)(param_1 + 0xea) != '\0');
  local_28 = lVar1;
  lStack_20 = lVar2;
  local_18 = FUN_14550f5d0(*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18));
  if ((*(char *)(param_1 + 0xe9) != '\0') &&
     (iVar3 = FUN_145510700(param_1,&local_28,0,0), iVar3 != 0)) {
    return;
  }
  *param_2 = local_28;
  param_2[1] = lStack_20;
  param_2[2] = CONCAT44(uStack_14,local_18);
  *(longlong *)(param_1 + 0xa8) = lVar1;
  *(longlong *)(param_1 + 0xb0) = lVar2;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  return;
}



// FUNCTION 145511160 FUN_145511160 body=216 status=ok
// SIG undefined FUN_145511160(void)

undefined8 FUN_145511160(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  puVar4 = (undefined8 *)FUN_14550f4f0(local_20,param_1,*(undefined8 *)(param_1 + 0xc0));
  uVar2 = *puVar4;
  uStack_30 = puVar4[1];
  local_28._5_3_ = (undefined3)((ulonglong)puVar4[2] >> 0x28);
  local_28._0_5_ = CONCAT14(*(char *)(param_1 + 0xea) != '\0',(int)puVar4[2]);
  local_38 = uVar2;
  FUN_1455dcd50(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  uStack_30 = uVar1;
  if ((*(char *)(param_1 + 0xe9) != '\0') &&
     (iVar3 = FUN_145510700(param_1,&local_38,0,0), iVar3 != 0)) {
    FUN_1455dcd60(uVar2);
    return 0xfffffc7b;
  }
  *param_2 = local_38;
  param_2[1] = uStack_30;
  param_2[2] = local_28;
  *(undefined8 *)(param_1 + 0xa8) = uVar2;
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  return 0;
}



// FUNCTION 145511280 FUN_145511280 body=8 status=ok
// SIG undefined FUN_145511280(void)

undefined * FUN_145511280(void)

{
  return &DAT_14c7450b8;
}



// FUNCTION 145511290 FUN_145511290 body=16 status=ok
// SIG undefined FUN_145511290(void)

void FUN_145511290(undefined8 *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014551129c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[1])(param_2,*param_1);
  return;
}



// FUNCTION 1455112a0 FUN_1455112a0 body=16 status=ok
// SIG undefined FUN_1455112a0(void)

void FUN_1455112a0(undefined8 *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001455112ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[2])(param_2,*param_1);
  return;
}



// FUNCTION 1455112b0 FUN_1455112b0 body=15 status=ok
// SIG undefined FUN_1455112b0(void)

void FUN_1455112b0(code *UNRECOVERED_JUMPTABLE,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001455112bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_3,UNRECOVERED_JUMPTABLE);
  return;
}



// FUNCTION 1455112c0 FUN_1455112c0 body=22 status=ok
// SIG undefined FUN_1455112c0(void)

void FUN_1455112c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001455112d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[3])(param_2,param_3,*param_1);
  return;
}



// FUNCTION 1455112e0 FUN_1455112e0 body=22 status=ok
// SIG undefined FUN_1455112e0(void)

void FUN_1455112e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001455112f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[4])(param_2,param_3,*param_1);
  return;
}



// FUNCTION 145511300 FUN_145511300 body=84 status=ok
// SIG undefined FUN_145511300(void)

undefined8 FUN_145511300(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 3) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 8;
  lVar1 = FUN_1455112c0(param_2,0x100,0x10);
  *param_1 = lVar1;
  if (lVar1 == 0) {
    return 0xfffffc7b;
  }
  param_1[2] = 0;
  return 0;
}



// FUNCTION 145511360 FUN_145511360 body=18 status=ok
// SIG undefined FUN_145511360(void)

void FUN_145511360(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_1455112a0(param_1[1],*param_1);
    return;
  }
  return;
}



// FUNCTION 145511380 FUN_145511380 body=100 status=ok
// SIG undefined FUN_145511380(void)

void FUN_145511380(longlong *param_1,code *param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((int)param_1[3] != 0) {
    do {
      lVar1 = *(longlong *)(*param_1 + 8 + (ulonglong)uVar2 * 0x10);
      if (lVar1 != 0) {
        (*param_2)(lVar1,param_3);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 3));
  }
  return;
}



// FUNCTION 1455113f0 FUN_1455113f0 body=333 status=ok
// SIG undefined FUN_1455113f0(void)

undefined8 FUN_1455113f0(longlong *param_1,int param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  if (param_3 == 0) {
    _wassert(L"data",L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_map.c"
             ,0xde);
  }
  iVar6 = (int)param_1[3];
  if ((ulonglong)(uint)(iVar6 * 3) < param_1[2] * 4 + 4U) {
    iVar6 = iVar6 * 2;
    iVar5 = *(int *)((longlong)param_1 + 0x1c) + 1;
    lVar2 = FUN_1455112c0(param_1[1],iVar6,0x10);
    if (lVar2 == 0) {
      return 0xfffffc7b;
    }
    uVar7 = 0;
    if ((int)param_1[3] != 0) {
      do {
        puVar4 = (undefined4 *)((ulonglong)uVar7 * 0x10 + *param_1);
        if ((*(longlong *)(puVar4 + 2) != 0) &&
           (iVar1 = FUN_1455117b0(lVar2,iVar6,iVar5,*puVar4,puVar4[1],*(longlong *)(puVar4 + 2)),
           iVar1 != 0)) {
          _wassert(L"0 == rv",
                   L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_map.c",
                   0xd0);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(param_1 + 3));
    }
    FUN_1455112a0(param_1[1],*param_1);
    *(int *)(param_1 + 3) = iVar6;
    *(int *)((longlong)param_1 + 0x1c) = iVar5;
    *param_1 = lVar2;
  }
  uVar3 = FUN_1455117b0(*param_1,iVar6,*(undefined4 *)((longlong)param_1 + 0x1c),
                        param_2 * -0x61c88647,param_2,param_3);
  if ((int)uVar3 == 0) {
    param_1[2] = param_1[2] + 1;
  }
  return uVar3;
}



// FUNCTION 145511540 FUN_145511540 body=162 status=ok
// SIG undefined FUN_145511540(void)

undefined8 FUN_145511540(longlong *param_1,uint param_2)

{
  uint *puVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  bVar2 = 0x20 - (char)*(undefined4 *)((longlong)param_1 + 0x1c);
  uVar4 = 0;
  uVar3 = (ulonglong)(param_2 * -0x61c88647 >> (bVar2 & 0x3f));
  puVar1 = (uint *)(uVar3 * 0x10 + *param_1);
  if (*(longlong *)(puVar1 + 2) != 0) {
    uVar5 = (ulonglong)((int)param_1[3] - 1);
    do {
      if ((uVar3 - (*puVar1 >> (bVar2 & 0x3f)) & uVar5) < uVar4) {
        return 0;
      }
      if (puVar1[1] == param_2) {
        return *(undefined8 *)(puVar1 + 2);
      }
      uVar4 = uVar4 + 1;
      uVar3 = uVar3 + 1 & uVar5;
      puVar1 = (uint *)(uVar3 * 0x10 + *param_1);
    } while (*(longlong *)(puVar1 + 2) != 0);
  }
  return 0;
}



// FUNCTION 1455115f0 FUN_1455115f0 body=306 status=ok
// SIG undefined FUN_1455115f0(void)

undefined1 * FUN_1455115f0(longlong *param_1,uint param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  uint *puVar5;
  byte bVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  bVar6 = 0x20 - (char)*(undefined4 *)((longlong)param_1 + 0x1c);
  uVar7 = 0;
  uVar8 = (ulonglong)(param_2 * -0x61c88647 >> (bVar6 & 0x3f));
  puVar5 = (uint *)(uVar8 * 0x10 + *param_1);
  if (*(longlong *)(puVar5 + 2) != 0) {
    uVar9 = (ulonglong)((int)param_1[3] - 1);
    do {
      if ((uVar8 - (*puVar5 >> (bVar6 & 0x3f)) & uVar9) < uVar7) break;
      if (puVar5[1] == param_2) {
        puVar5[0] = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        iVar4 = (int)param_1[3];
        uVar7 = (ulonglong)(iVar4 - 1) & uVar8 + 1;
        puVar5 = (uint *)(uVar7 * 0x10 + *param_1);
        lVar2 = *(longlong *)(puVar5 + 2);
        while ((uVar9 = uVar7, lVar2 != 0 &&
               (((ulonglong)(iVar4 - 1) &
                uVar9 - (*puVar5 >> (0x20U - (char)*(undefined4 *)((longlong)param_1 + 0x1c) & 0x3f)
                        )) != 0))) {
          uVar3 = *(undefined8 *)(puVar5 + 2);
          puVar1 = (undefined8 *)(*param_1 + uVar8 * 0x10);
          *puVar1 = *(undefined8 *)puVar5;
          puVar1[1] = uVar3;
          puVar5[0] = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
          iVar4 = (int)param_1[3];
          uVar7 = (ulonglong)(iVar4 - 1) & uVar9 + 1;
          puVar5 = (uint *)(uVar7 * 0x10 + *param_1);
          lVar2 = *(longlong *)(puVar5 + 2);
          uVar8 = uVar9;
        }
        param_1[2] = param_1[2] + -1;
        return (undefined1 *)0x0;
      }
      uVar7 = uVar7 + 1;
      uVar8 = uVar9 & uVar8 + 1;
      puVar5 = (uint *)(uVar8 * 0x10 + *param_1);
    } while (*(longlong *)(puVar5 + 2) != 0);
  }
  return &DAT_fffffe0b;
}



// FUNCTION 145511730 FUN_145511730 body=5 status=ok
// SIG undefined FUN_145511730(void)

undefined8 FUN_145511730(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// FUNCTION 145511740 FUN_145511740 body=106 status=ok
// SIG undefined FUN_145511740(void)

undefined8 FUN_145511740(longlong *param_1,code *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if ((int)param_1[3] != 0) {
    do {
      lVar1 = *(longlong *)(*param_1 + 8 + (ulonglong)uVar3 * 0x10);
      if ((lVar1 != 0) && (uVar2 = (*param_2)(lVar1,param_3), (int)uVar2 != 0)) {
        return uVar2;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 3));
  }
  return 0;
}



// FUNCTION 1455117b0 FUN_1455117b0 body=210 status=ok
// SIG undefined FUN_1455117b0(void)

undefined1 *
FUN_1455117b0(longlong param_1,int param_2,char param_3,uint param_4,uint param_5,undefined8 param_6
             )

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar7 = 0;
  uVar5 = (ulonglong)(param_4 >> (0x20U - param_3 & 0x3f));
  puVar4 = (uint *)(uVar5 * 0x10 + param_1);
  if (*(longlong *)(puVar4 + 2) != 0) {
    do {
      uVar1 = *puVar4;
      uVar2 = puVar4[1];
      uVar6 = uVar5 - (uVar1 >> (0x20U - param_3 & 0x3f)) & (ulonglong)(param_2 - 1);
      if (uVar6 < uVar7) {
        uVar3 = *(undefined8 *)(puVar4 + 2);
        *(undefined8 *)(puVar4 + 2) = param_6;
        *puVar4 = param_4;
        puVar4[1] = param_5;
        param_6 = uVar3;
        uVar7 = uVar6;
        param_5 = uVar2;
        param_4 = uVar1;
      }
      else if (uVar2 == param_5) {
        return &DAT_fffffe0b;
      }
      uVar7 = uVar7 + 1;
      uVar5 = uVar5 + 1 & (ulonglong)(param_2 - 1);
      puVar4 = (uint *)(uVar5 * 0x10 + param_1);
    } while (*(longlong *)(puVar4 + 2) != 0);
  }
  *puVar4 = param_4;
  puVar4[1] = param_5;
  *(undefined8 *)(puVar4 + 2) = param_6;
  return (undefined1 *)0x0;
}



// FUNCTION 145511890 FUN_145511890 body=22 status=ok
// SIG undefined FUN_145511890(void)

void FUN_145511890(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}



// FUNCTION 1455118b0 FUN_1455118b0 body=40 status=ok
// SIG undefined FUN_1455118b0(void)

void FUN_1455118b0(undefined8 *param_1,undefined8 param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_1455112a0(param_2,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 1455118e0 FUN_1455118e0 body=16 status=ok
// SIG undefined FUN_1455118e0(void)

void FUN_1455118e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  param_1[4] = uVar1;
  param_1[3] = uVar1;
  param_1[2] = uVar1;
  return;
}



// FUNCTION 1455118f0 FUN_1455118f0 body=33 status=ok
// SIG undefined FUN_1455118f0(void)

void FUN_1455118f0(longlong *param_1,longlong param_2,longlong param_3)

{
  param_1[1] = param_2;
  param_1[4] = param_2;
  param_1[3] = param_2;
  param_1[2] = param_2;
  *param_1 = param_2;
  if (param_3 != 0) {
    param_1[1] = param_2 + param_3;
  }
  return;
}



// FUNCTION 145511920 FUN_145511920 body=162 status=ok
// SIG undefined FUN_145511920(void)

undefined1 *
FUN_145511920(longlong *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
             ulonglong param_5,longlong param_6)

{
  undefined1 *puVar1;
  longlong local_res20;
  
  if (((param_4 == 0) || (param_3 < param_4)) || (param_2 < param_5)) {
    puVar1 = &DAT_fffffe0b;
  }
  else {
    puVar1 = (undefined1 *)FUN_145511dd0(&local_res20,param_2,param_6);
    if ((int)puVar1 == 0) {
      *param_1 = local_res20;
      param_1[1] = local_res20;
      param_1[2] = param_6;
      param_1[7] = param_5;
      *(longlong *)(local_res20 + 0x18) = *(longlong *)(local_res20 + 0x18) + param_5;
      *(longlong *)(param_1[1] + 0x20) = *(longlong *)(param_1[1] + 0x20) + param_5;
      puVar1 = (undefined1 *)0x0;
      param_1[3] = param_2;
      param_1[5] = 1;
      param_1[4] = param_3;
      param_1[6] = param_4;
    }
  }
  return puVar1;
}



// FUNCTION 1455119d0 FUN_1455119d0 body=147 status=ok
// SIG undefined FUN_1455119d0(void)

void FUN_1455119d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*param_1;
    while (puVar4 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar4;
      puVar1 = puVar4 + 1;
      uVar3 = param_1[2];
      if (puVar1 != (undefined8 *)0x0) {
        FUN_1455112a0(uVar3,*puVar1);
        *puVar1 = 0;
      }
      FUN_1455112a0(uVar3,puVar4);
      puVar4 = puVar2;
    }
    *param_1 = 0;
  }
  return;
}



// FUNCTION 145511a70 FUN_145511a70 body=224 status=ok
// SIG undefined FUN_145511a70(void)

undefined1 * FUN_145511a70(longlong *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  longlong local_res8;
  
  if (param_2 < (ulonglong)param_1[7]) {
    return &DAT_fffffe0b;
  }
  puVar5 = (undefined1 *)FUN_145511dd0(&local_res8,param_2,param_1[2]);
  if ((int)puVar5 == 0) {
    puVar4 = (undefined8 *)*param_1;
    while (puVar4 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar4;
      puVar1 = puVar4 + 1;
      lVar3 = param_1[2];
      if (puVar1 != (undefined8 *)0x0) {
        FUN_1455112a0(lVar3,*puVar1);
        *puVar1 = 0;
      }
      FUN_1455112a0(lVar3,puVar4);
      puVar4 = puVar2;
    }
    *param_1 = local_res8;
    param_1[1] = local_res8;
    *(longlong *)(local_res8 + 0x18) = *(longlong *)(local_res8 + 0x18) + param_1[7];
    *(longlong *)(param_1[1] + 0x20) = *(longlong *)(param_1[1] + 0x20) + param_1[7];
    puVar5 = (undefined1 *)0x0;
    param_1[3] = param_2;
    param_1[5] = 1;
  }
  return puVar5;
}



// FUNCTION 145511b50 FUN_145511b50 body=221 status=ok
// SIG undefined FUN_145511b50(void)

undefined8 FUN_145511b50(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong local_res10;
  
  while( true ) {
    while( true ) {
      while( true ) {
        if (param_3 == 0) {
          return 0;
        }
        plVar1 = *(longlong **)(param_1 + 8);
        uVar4 = plVar1[2] - plVar1[4];
        if (param_3 <= uVar4) {
          uVar4 = param_3;
        }
        if (uVar4 == 0) break;
        lVar3 = FUN_1452e70f0(plVar1[4],param_2,uVar4);
        param_2 = param_2 + uVar4;
        plVar1[4] = lVar3;
        param_3 = param_3 - uVar4;
      }
      if (*plVar1 == 0) break;
      *(longlong *)(param_1 + 8) = *plVar1;
    }
    if (*(longlong *)(param_1 + 0x20) == *(longlong *)(param_1 + 0x28)) break;
    uVar2 = FUN_145511dd0(&local_res10,*(undefined8 *)(param_1 + 0x18),
                          *(undefined8 *)(param_1 + 0x10));
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 1;
    **(longlong **)(param_1 + 8) = local_res10;
    *(longlong *)(param_1 + 8) = local_res10;
    *(longlong *)(local_res10 + 0x18) =
         *(longlong *)(local_res10 + 0x18) + *(longlong *)(param_1 + 0x38);
    plVar1 = (longlong *)(*(longlong *)(param_1 + 8) + 0x20);
    *plVar1 = *plVar1 + *(longlong *)(param_1 + 0x38);
  }
  return 0xfffffe0a;
}



// FUNCTION 145511c30 FUN_145511c30 body=74 status=ok
// SIG undefined FUN_145511c30(void)

undefined8 FUN_145511c30(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(lVar3 + 0x10) == *(longlong *)(lVar3 + 0x20)) {
    uVar2 = FUN_145511eb0(param_1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    lVar3 = *(longlong *)(param_1 + 8);
  }
  **(undefined1 **)(lVar3 + 0x20) = param_2;
  plVar1 = (longlong *)(*(longlong *)(param_1 + 8) + 0x20);
  *plVar1 = *plVar1 + 1;
  return 0;
}



// FUNCTION 145511c80 FUN_145511c80 body=249 status=ok
// SIG undefined FUN_145511c80(void)

void FUN_145511c80(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  puVar4 = (undefined8 *)*param_1;
  lVar5 = param_1[6];
  if (puVar4 == (undefined8 *)0x0) {
    param_1[1] = 0;
    return;
  }
  do {
    uVar1 = puVar4[1];
    puVar4[4] = uVar1;
    puVar4[3] = uVar1;
    puVar4[5] = uVar1;
    puVar4[3] = puVar4[3] + param_1[7];
    puVar4[4] = puVar4[4] + param_1[7];
    puVar2 = (undefined8 *)*puVar4;
    lVar5 = lVar5 + -1;
    if (lVar5 == 0) {
      *puVar4 = 0;
      while (puVar2 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)*puVar2;
        puVar4 = puVar2 + 1;
        uVar1 = param_1[2];
        if (puVar4 != (undefined8 *)0x0) {
          FUN_1455112a0(uVar1,*puVar4);
          *puVar4 = 0;
        }
        FUN_1455112a0(uVar1,puVar2);
        puVar2 = puVar3;
      }
      param_1[5] = param_1[6];
      param_1[1] = *param_1;
      return;
    }
    puVar4 = puVar2;
  } while (puVar2 != (undefined8 *)0x0);
  param_1[1] = *param_1;
  return;
}



// FUNCTION 145511d80 FUN_145511d80 body=31 status=ok
// SIG undefined FUN_145511d80(void)

undefined8 FUN_145511d80(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = **(longlong **)(param_1 + 8);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x20) != *(longlong *)(lVar1 + 0x18))) {
    return 1;
  }
  return 0;
}



// FUNCTION 145511da0 FUN_145511da0 body=36 status=ok
// SIG undefined FUN_145511da0(void)

longlong FUN_145511da0(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  for (param_1 = (undefined8 *)*param_1; param_1 != (undefined8 *)0x0;
      param_1 = (undefined8 *)*param_1) {
    lVar1 = lVar1 + (param_1[4] - param_1[3]);
  }
  return lVar1;
}



// FUNCTION 145511dd0 FUN_145511dd0 body=211 status=ok
// SIG undefined FUN_145511dd0(void)

undefined8 FUN_145511dd0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar3 = (undefined8 *)FUN_145511290(param_3,0x30);
  *param_1 = (longlong)puVar3;
  if (puVar3 == (undefined8 *)0x0) {
    return 0xfffffc7b;
  }
  *puVar3 = 0;
  lVar1 = *param_1;
  *(undefined8 *)(lVar1 + 8) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  if (param_2 != 0) {
    lVar4 = FUN_1455112e0(param_3,0,param_2);
    if (lVar4 == 0) {
      FUN_1455112a0(param_3,*param_1);
      return 0xfffffc7b;
    }
    lVar2 = *(longlong *)(lVar1 + 8);
    *(longlong *)(lVar1 + 8) = lVar4;
    *(longlong *)(lVar1 + 0x18) = *(longlong *)(lVar1 + 0x18) + (lVar4 - lVar2);
    *(longlong *)(lVar1 + 0x20) = *(longlong *)(lVar1 + 0x20) + (lVar4 - lVar2);
    *(longlong *)(lVar1 + 0x28) = *(longlong *)(lVar1 + 0x28) + (lVar4 - lVar2);
    *(longlong *)(lVar1 + 0x10) = lVar4 + param_2;
  }
  return 0;
}



// FUNCTION 145511eb0 FUN_145511eb0 body=124 status=ok
// SIG undefined FUN_145511eb0(void)

undefined8 FUN_145511eb0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong local_res8 [4];
  
  if (**(longlong **)(param_1 + 8) != 0) {
    *(longlong *)(param_1 + 8) = **(longlong **)(param_1 + 8);
    return 0;
  }
  if (*(longlong *)(param_1 + 0x20) == *(longlong *)(param_1 + 0x28)) {
    return 0xfffffe0a;
  }
  uVar2 = FUN_145511dd0(local_res8,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10));
  if ((int)uVar2 == 0) {
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 1;
    **(longlong **)(param_1 + 8) = local_res8[0];
    *(longlong *)(param_1 + 8) = local_res8[0];
    *(longlong *)(local_res8[0] + 0x18) =
         *(longlong *)(local_res8[0] + 0x18) + *(longlong *)(param_1 + 0x38);
    plVar1 = (longlong *)(*(longlong *)(param_1 + 8) + 0x20);
    *plVar1 = *plVar1 + *(longlong *)(param_1 + 0x38);
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 145511f30 FUN_145511f30 body=64 status=ok
// SIG undefined FUN_145511f30(void)

void FUN_145511f30(longlong param_1,longlong *param_2)

{
  FUN_1452e6ec0(param_1,*param_2 << 8);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)((longlong)param_2 + 0xc);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)((longlong)param_2 + 0xd);
  FUN_1452e6ec0(param_1 + 5,(int)param_2[1]);
  return;
}



// FUNCTION 145511f70 FUN_145511f70 body=78 status=ok
// SIG undefined FUN_145511f70(void)

void FUN_145511f70(ulonglong *param_1,longlong param_2)

{
  uint uVar1;
  
  uVar1 = FUN_1452e6f10(param_2);
  *param_1 = (ulonglong)(uVar1 >> 8);
  *(undefined1 *)((longlong)param_1 + 0xc) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)((longlong)param_1 + 0xd) = *(undefined1 *)(param_2 + 4);
  uVar1 = FUN_1452e6f10(param_2 + 5);
  *(uint *)(param_1 + 1) = uVar1 & 0x7fffffff;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  return;
}



// FUNCTION 145511fc0 FUN_145511fc0 body=23 status=ok
// SIG undefined FUN_145511fc0(void)

void FUN_145511fc0(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined4 param_5)

{
  *(undefined4 *)(param_1 + 1) = param_5;
  *param_1 = param_2;
  *(undefined1 *)((longlong)param_1 + 0xc) = param_3;
  *(undefined1 *)((longlong)param_1 + 0xd) = param_4;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  return;
}



// FUNCTION 145511fe0 FUN_145511fe0 body=12 status=ok
// SIG undefined FUN_145511fe0(void)

byte FUN_145511fe0(byte param_1)

{
  return -((param_1 & 0x20) != 0) & 5;
}



// FUNCTION 145511ff0 FUN_145511ff0 body=241 status=ok
// SIG undefined FUN_145511ff0(void)

undefined8 FUN_145511ff0(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  byte *pbVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = param_1[1];
  if (*param_1 != lVar3) {
    _wassert(L"bufs->head == bufs->cur",
             L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_frame.c",0x156
            );
    lVar3 = param_1[1];
  }
  uVar4 = (ulonglong)(-(uint)((*(byte *)((longlong)param_2 + 0xd) & 0x20) != 0) & 5);
  *(longlong *)(lVar3 + 0x18) = *(longlong *)(lVar3 + 0x18) + uVar4;
  *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar3 + 0x18);
  uVar1 = FUN_14550e8f0(param_3,param_1,param_2[5],param_2[6]);
  pbVar2 = (byte *)(*(longlong *)(lVar3 + 0x18) - uVar4);
  *(byte **)(lVar3 + 0x18) = pbVar2;
  if ((int)uVar1 == -0x1f6) {
    uVar1 = 0xfffffdf5;
  }
  else if ((int)uVar1 == 0) {
    if ((*(byte *)((longlong)param_2 + 0xd) & 0x20) != 0) {
      FUN_1452e6ec0(pbVar2,*(undefined4 *)(param_2 + 3));
      if (*(char *)(param_2 + 4) != '\0') {
        *pbVar2 = *pbVar2 | 0x80;
      }
      pbVar2[4] = *(char *)((longlong)param_2 + 0x1c) - 1;
    }
    param_2[2] = 0;
    uVar1 = FUN_145511da0(param_1);
    *param_2 = uVar1;
    uVar1 = FUN_145513360(param_1,param_2);
  }
  return uVar1;
}



// FUNCTION 1455120f0 FUN_1455120f0 body=116 status=ok
// SIG undefined FUN_1455120f0(void)

undefined8 FUN_1455120f0(longlong param_1,byte *param_2)

{
  uint uVar1;
  
  if ((*(byte *)(param_1 + 0xd) & 0x20) == 0) {
    FUN_1452e7140(param_1 + 0x18);
  }
  else {
    uVar1 = FUN_1452e6f10(param_2);
    FUN_1452e7130(param_1 + 0x18,uVar1 & 0x7fffffff,param_2[4] + 1,(*param_2 & 0x80) != 0);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return 0;
}



// FUNCTION 145512170 FUN_145512170 body=205 status=ok
// SIG undefined FUN_145512170(void)

undefined8 FUN_145512170(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != param_1[1]) {
    _wassert(L"bufs->head == bufs->cur",
             L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_frame.c",0x19d
            );
    lVar3 = *param_1;
  }
  if ((ulonglong)(*(longlong *)(lVar3 + 0x10) - *(longlong *)(lVar3 + 0x20)) < 5) {
    _wassert(L"nghttp2_buf_avail(buf) >= NGHTTP2_PRIORITY_SPECLEN",
             L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_frame.c",0x1a1
            );
  }
  *(longlong *)(lVar3 + 0x18) = *(longlong *)(lVar3 + 0x18) + -9;
  lVar1 = *(longlong *)(lVar3 + 0x18);
  FUN_1452e6ec0(lVar1,*param_2 << 8);
  *(undefined1 *)(lVar1 + 3) = *(undefined1 *)((longlong)param_2 + 0xc);
  *(undefined1 *)(lVar1 + 4) = *(undefined1 *)((longlong)param_2 + 0xd);
  FUN_1452e6ec0(lVar1 + 5,(int)param_2[1]);
  pbVar2 = *(byte **)(lVar3 + 0x20);
  FUN_1452e6ec0(pbVar2,(int)param_2[2]);
  if ((char)param_2[3] != '\0') {
    *pbVar2 = *pbVar2 | 0x80;
  }
  pbVar2[4] = *(char *)((longlong)param_2 + 0x14) - 1;
  *(longlong *)(lVar3 + 0x20) = *(longlong *)(lVar3 + 0x20) + 5;
  return 0;
}



// FUNCTION 145512240 FUN_145512240 body=70 status=ok
// SIG undefined FUN_145512240(void)

void FUN_145512240(longlong param_1,byte *param_2)

{
  uint uVar1;
  
  uVar1 = FUN_1452e6f10(param_2);
  FUN_1452e7130(param_1 + 0x10,uVar1 & 0x7fffffff,param_2[4] + 1,(*param_2 & 0x80) != 0);
  return;
}



// FUNCTION 145512290 FUN_145512290 body=184 status=ok
// SIG undefined FUN_145512290(void)

undefined8 FUN_145512290(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != param_1[1]) {
    _wassert(L"bufs->head == bufs->cur",
             L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_frame.c",0x1b7
            );
    lVar2 = *param_1;
  }
  if ((ulonglong)(*(longlong *)(lVar2 + 0x10) - *(longlong *)(lVar2 + 0x20)) < 4) {
    _wassert(L"nghttp2_buf_avail(buf) >= 4",
             L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_frame.c",0x1bb
            );
  }
  *(longlong *)(lVar2 + 0x18) = *(longlong *)(lVar2 + 0x18) + -9;
  lVar1 = *(longlong *)(lVar2 + 0x18);
  FUN_1452e6ec0(lVar1,*param_2 << 8);
  *(undefined1 *)(lVar1 + 3) = *(undefined1 *)((longlong)param_2 + 0xc);
  *(undefined1 *)(lVar1 + 4) = *(undefined1 *)((longlong)param_2 + 0xd);
  FUN_1452e6ec0(lVar1 + 5,(int)param_2[1]);
  FUN_1452e6ec0(*(undefined8 *)(lVar2 + 0x20),(int)param_2[2]);
  *(longlong *)(lVar2 + 0x20) = *(longlong *)(lVar2 + 0x20) + 4;
  return 0;
}



// FUNCTION 145512350 FUN_145512350 body=26 status=ok
// SIG undefined FUN_145512350(void)

void FUN_145512350(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1452e6f10(param_2);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}



// FUNCTION 145512370 FUN_145512370 body=261 status=ok
// SIG undefined FUN_145512370(void)

undefined8 FUN_145512370(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar4 = *param_1;
  if (lVar4 != param_1[1]) {
    _wassert(L"bufs->head == bufs->cur",
             L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_frame.c",0x1cf
            );
    lVar4 = *param_1;
  }
  if ((ulonglong)(*(longlong *)(lVar4 + 0x10) - *(longlong *)(lVar4 + 0x20)) < *param_2) {
    return 0xfffffdf6;
  }
  *(longlong *)(lVar4 + 0x18) = *(longlong *)(lVar4 + 0x18) + -9;
  lVar3 = *(longlong *)(lVar4 + 0x18);
  FUN_1452e6ec0(lVar3,*param_2 << 8);
  *(undefined1 *)(lVar3 + 3) = *(undefined1 *)((longlong)param_2 + 0xc);
  *(undefined1 *)(lVar3 + 4) = *(undefined1 *)((longlong)param_2 + 0xd);
  FUN_1452e6ec0(lVar3 + 5,(int)param_2[1]);
  uVar1 = param_2[2];
  uVar5 = 0;
  uVar2 = param_2[3];
  lVar3 = *(longlong *)(lVar4 + 0x20);
  if (uVar1 != 0) {
    do {
      FUN_1452e6ea0(lVar3,*(undefined2 *)(uVar2 + uVar5 * 8));
      FUN_1452e6ec0(lVar3 + 2,*(undefined4 *)(uVar2 + 4 + uVar5 * 8));
      uVar5 = uVar5 + 1;
      lVar3 = lVar3 + 6;
    } while (uVar5 < uVar1);
    lVar3 = *(longlong *)(lVar4 + 0x20);
  }
  *(ulonglong *)(lVar4 + 0x20) = lVar3 + uVar1 * 6;
  return 0;
}



// FUNCTION 145512480 FUN_145512480 body=116 status=ok
// SIG undefined FUN_145512480(void)

longlong FUN_145512480(longlong param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if (param_3 != 0) {
    do {
      FUN_1452e6ea0(param_1,*(undefined2 *)(param_2 + uVar1 * 8));
      FUN_1452e6ec0(param_1 + 2,*(undefined4 *)(param_2 + 4 + uVar1 * 8));
      uVar1 = uVar1 + 1;
      param_1 = param_1 + 6;
    } while (uVar1 < param_3);
  }
  return param_3 * 6;
}



// FUNCTION 145512500 FUN_145512500 body=52 status=ok
// SIG undefined FUN_145512500(void)

void FUN_145512500(uint *param_1,longlong param_2)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = FUN_1452e6ef0(param_2);
  *param_1 = (uint)uVar1;
  uVar2 = FUN_1452e6f10(param_2 + 2);
  param_1[1] = uVar2;
  return;
}



// FUNCTION 145512540 FUN_145512540 body=9 status=ok
// SIG undefined FUN_145512540(void)

void FUN_145512540(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



// FUNCTION 145512550 FUN_145512550 body=220 status=ok
// SIG undefined FUN_145512550(void)

undefined8
FUN_145512550(longlong *param_1,ulonglong *param_2,longlong param_3,ulonglong param_4,
             undefined8 param_5)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  param_4 = param_4 / 6;
  *param_2 = param_4;
  if (param_4 == 0) {
    *param_1 = 0;
    return 0;
  }
  lVar4 = FUN_145511290(param_5,param_4 * 8);
  *param_1 = lVar4;
  if (lVar4 != 0) {
    uVar5 = 0;
    if (*param_2 != 0) {
      do {
        lVar4 = param_3 + uVar5 * 6;
        puVar1 = (uint *)(*param_1 + uVar5 * 8);
        uVar2 = FUN_1452e6ef0(lVar4);
        *puVar1 = (uint)uVar2;
        uVar3 = FUN_1452e6f10(lVar4 + 2);
        uVar5 = uVar5 + 1;
        puVar1[1] = uVar3;
      } while (uVar5 < *param_2);
    }
    return 0;
  }
  return 0xfffffc7b;
}



// FUNCTION 145512630 FUN_145512630 body=201 status=ok
// SIG undefined FUN_145512630(void)

ulonglong FUN_145512630(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar5 = param_1[1];
  if (*param_1 != lVar5) {
    _wassert(L"bufs->head == bufs->cur",
             L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_frame.c",0x21e
            );
    lVar5 = param_1[1];
  }
  *(longlong *)(lVar5 + 0x18) = *(longlong *)(lVar5 + 0x18) + 4;
  *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(lVar5 + 0x18);
  uVar1 = FUN_14550e8f0(param_3,param_1,param_2[3],param_2[4]);
  lVar2 = *(longlong *)(lVar5 + 0x18) + -4;
  *(longlong *)(lVar5 + 0x18) = lVar2;
  if (uVar1 == 0xfffffe0a) {
    uVar4 = 0xfffffdf5;
  }
  else if (uVar1 == 0) {
    FUN_1452e6ec0(lVar2,*(undefined4 *)(param_2 + 5));
    param_2[2] = 0;
    uVar3 = FUN_145511da0(param_1);
    *param_2 = uVar3;
    uVar4 = FUN_145513360(param_1,param_2);
  }
  else {
    uVar4 = (ulonglong)uVar1;
  }
  return uVar4;
}



// FUNCTION 145512700 FUN_145512700 body=40 status=ok
// SIG undefined FUN_145512700(void)

void FUN_145512700(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_1452e6f10(param_2);
  *(uint *)(param_1 + 0x28) = uVar1 & 0x7fffffff;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 145512730 FUN_145512730 body=190 status=ok
// SIG undefined FUN_145512730(void)

undefined8 FUN_145512730(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != param_1[1]) {
    _wassert(L"bufs->head == bufs->cur",
             L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_frame.c",0x246
            );
    lVar3 = *param_1;
  }
  if ((ulonglong)(*(longlong *)(lVar3 + 0x10) - *(longlong *)(lVar3 + 0x20)) < 8) {
    _wassert(L"nghttp2_buf_avail(buf) >= 8",
             L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_frame.c",0x24a
            );
  }
  *(longlong *)(lVar3 + 0x18) = *(longlong *)(lVar3 + 0x18) + -9;
  lVar1 = *(longlong *)(lVar3 + 0x18);
  FUN_1452e6ec0(lVar1,*param_2 << 8);
  *(undefined1 *)(lVar1 + 3) = *(undefined1 *)((longlong)param_2 + 0xc);
  *(undefined1 *)(lVar1 + 4) = *(undefined1 *)((longlong)param_2 + 0xd);
  FUN_1452e6ec0(lVar1 + 5,(int)param_2[1]);
  uVar2 = FUN_1452e70f0(*(undefined8 *)(lVar3 + 0x20),param_2 + 2,8);
  *(undefined8 *)(lVar3 + 0x20) = uVar2;
  return 0;
}



// FUNCTION 1455127f0 FUN_1455127f0 body=8 status=ok
// SIG undefined FUN_1455127f0(void)

void FUN_1455127f0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x10) = *param_2;
  return;
}



// FUNCTION 145512800 FUN_145512800 body=204 status=ok
// SIG undefined FUN_145512800(void)

undefined8 FUN_145512800(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != param_1[1]) {
    _wassert(L"bufs->head == bufs->cur",
             L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_frame.c",0x25f
            );
    lVar3 = *param_1;
  }
  *(longlong *)(lVar3 + 0x18) = *(longlong *)(lVar3 + 0x18) + -9;
  lVar1 = *(longlong *)(lVar3 + 0x18);
  FUN_1452e6ec0(lVar1,*param_2 << 8);
  *(undefined1 *)(lVar1 + 3) = *(undefined1 *)((longlong)param_2 + 0xc);
  *(undefined1 *)(lVar1 + 4) = *(undefined1 *)((longlong)param_2 + 0xd);
  FUN_1452e6ec0(lVar1 + 5,(int)param_2[1]);
  FUN_1452e6ec0(*(undefined8 *)(lVar3 + 0x20),(int)param_2[2]);
  *(longlong *)(lVar3 + 0x20) = *(longlong *)(lVar3 + 0x20) + 4;
  FUN_1452e6ec0(*(undefined8 *)(lVar3 + 0x20),*(undefined4 *)((longlong)param_2 + 0x14));
  *(longlong *)(lVar3 + 0x20) = *(longlong *)(lVar3 + 0x20) + 4;
  uVar2 = FUN_145511b50(param_1,param_2[3],param_2[4]);
  if ((int)uVar2 == -0x1f6) {
    uVar2 = 0xfffffdf6;
  }
  return uVar2;
}



// FUNCTION 1455128d0 FUN_1455128d0 body=88 status=ok
// SIG undefined FUN_1455128d0(void)

void FUN_1455128d0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_1452e6f10(param_2);
  *(uint *)(param_1 + 0x10) = uVar1 & 0x7fffffff;
  uVar2 = FUN_1452e6f10(param_2 + 4);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  return;
}



// FUNCTION 145512930 FUN_145512930 body=184 status=ok
// SIG undefined FUN_145512930(void)

undefined8 FUN_145512930(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != param_1[1]) {
    _wassert(L"bufs->head == bufs->cur",
             L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_frame.c",0x2a7
            );
    lVar2 = *param_1;
  }
  if ((ulonglong)(*(longlong *)(lVar2 + 0x10) - *(longlong *)(lVar2 + 0x20)) < 4) {
    _wassert(L"nghttp2_buf_avail(buf) >= 4",
             L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_frame.c",0x2ab
            );
  }
  *(longlong *)(lVar2 + 0x18) = *(longlong *)(lVar2 + 0x18) + -9;
  lVar1 = *(longlong *)(lVar2 + 0x18);
  FUN_1452e6ec0(lVar1,*param_2 << 8);
  *(undefined1 *)(lVar1 + 3) = *(undefined1 *)((longlong)param_2 + 0xc);
  *(undefined1 *)(lVar1 + 4) = *(undefined1 *)((longlong)param_2 + 0xd);
  FUN_1452e6ec0(lVar1 + 5,(int)param_2[1]);
  FUN_1452e6ec0(*(undefined8 *)(lVar2 + 0x20),(int)param_2[2]);
  *(longlong *)(lVar2 + 0x20) = *(longlong *)(lVar2 + 0x20) + 4;
  return 0;
}



// FUNCTION 1455129f0 FUN_1455129f0 body=30 status=ok
// SIG undefined FUN_1455129f0(void)

void FUN_1455129f0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_1452e6f10(param_2);
  *(uint *)(param_1 + 0x10) = uVar1 & 0x7fffffff;
  return;
}



// FUNCTION 145512a10 FUN_145512a10 body=284 status=ok
// SIG undefined FUN_145512a10(void)

undefined8 FUN_145512a10(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  
  lVar1 = *param_1;
  puVar2 = (undefined8 *)param_2[2];
  if ((ulonglong)(*(longlong *)(lVar1 + 0x10) - *(longlong *)(lVar1 + 0x20)) <
      (ulonglong)(puVar2[3] + 2 + puVar2[1])) {
    _wassert(L"nghttp2_buf_avail(buf) >= 2 + altsvc->origin_len + altsvc->field_value_len",
             L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_frame.c",0x2ca
            );
  }
  lVar3 = *(longlong *)(lVar1 + 0x18);
  *(longlong *)(lVar1 + 0x18) = lVar3 + -9;
  FUN_1452e6ec0(lVar3 + -9,*param_2 << 8);
  *(undefined1 *)(lVar3 + -6) = *(undefined1 *)((longlong)param_2 + 0xc);
  *(undefined1 *)(lVar3 + -5) = *(undefined1 *)((longlong)param_2 + 0xd);
  FUN_1452e6ec0(lVar3 + -4,(int)param_2[1]);
  FUN_1452e6ea0(*(undefined8 *)(lVar1 + 0x20),*(undefined2 *)(puVar2 + 1));
  *(longlong *)(lVar1 + 0x20) = *(longlong *)(lVar1 + 0x20) + 2;
  iVar4 = FUN_145511b50(param_1,*puVar2,puVar2[1]);
  if (iVar4 != 0) {
    _wassert(L"rv == 0",
             L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_frame.c",0x2d5
            );
  }
  iVar4 = FUN_145511b50(param_1,puVar2[2],puVar2[3]);
  if (iVar4 != 0) {
    _wassert(L"rv == 0",
             L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_frame.c",0x2d9
            );
  }
  return 0;
}



// FUNCTION 145512b30 FUN_145512b30 body=30 status=ok
// SIG undefined FUN_145512b30(void)

void FUN_145512b30(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  plVar1[3] = (param_3 - (param_2 + param_3)) + param_4;
  plVar1[2] = param_2 + param_3;
  return;
}



// FUNCTION 145512b50 FUN_145512b50 body=259 status=ok
// SIG undefined FUN_145512b50(void)

undefined8 FUN_145512b50(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  lVar1 = *param_1;
  puVar2 = (ulonglong *)param_2[2];
  if (*param_2 <= (ulonglong)(*(longlong *)(lVar1 + 0x10) - *(longlong *)(lVar1 + 0x20))) {
    *(longlong *)(lVar1 + 0x18) = *(longlong *)(lVar1 + 0x18) + -9;
    lVar3 = *(longlong *)(lVar1 + 0x18);
    FUN_1452e6ec0(lVar3,*param_2 << 8);
    *(undefined1 *)(lVar3 + 3) = *(undefined1 *)((longlong)param_2 + 0xc);
    *(undefined1 *)(lVar3 + 4) = *(undefined1 *)((longlong)param_2 + 0xd);
    FUN_1452e6ec0(lVar3 + 5,(int)param_2[1]);
    uVar6 = 0;
    uVar7 = uVar6;
    if (*puVar2 != 0) {
      do {
        uVar4 = puVar2[1];
        FUN_1452e6ea0(*(undefined8 *)(lVar1 + 0x20),*(undefined2 *)(uVar4 + 8 + uVar7));
        *(longlong *)(lVar1 + 0x20) = *(longlong *)(lVar1 + 0x20) + 2;
        uVar5 = FUN_1452e70f0(*(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(uVar4 + uVar7),
                              *(undefined8 *)(uVar4 + 8 + uVar7));
        uVar6 = uVar6 + 1;
        *(undefined8 *)(lVar1 + 0x20) = uVar5;
        uVar7 = uVar7 + 0x10;
      } while (uVar6 < *puVar2);
    }
    if (*(longlong *)(lVar1 + 0x20) - *(longlong *)(lVar1 + 0x18) != *param_2 + 9) {
      _wassert(L"nghttp2_buf_len(buf) == NGHTTP2_FRAME_HDLEN + frame->hd.length",
               L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_frame.c",
               0x322);
    }
    return 0;
  }
  return 0xfffffdf6;
}



// FUNCTION 145512c60 FUN_145512c60 body=314 status=ok
// SIG undefined FUN_145512c60(void)

undefined8 FUN_145512c60(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  lVar6 = 0;
  lVar9 = 0;
  lVar5 = param_2 + param_3;
  if (param_3 == 0) {
    lVar5 = param_2;
  }
  lVar7 = param_2;
  if (param_2 != lVar5) {
    do {
      if (lVar5 - lVar7 < 2) {
        return 0xfffffdf6;
      }
      uVar2 = FUN_1452e6ef0(lVar7);
      uVar2 = uVar2 & 0xffff;
      lVar7 = lVar7 + 2;
      if (uVar2 != 0) {
        if ((ulonglong)(lVar5 - lVar7) < uVar2) {
          return 0xfffffdf6;
        }
        lVar7 = lVar7 + uVar2;
        lVar9 = lVar9 + 1 + uVar2;
        lVar6 = lVar6 + 1;
      }
    } while (lVar7 != lVar5);
    if (lVar6 != 0) {
      puVar3 = (undefined8 *)FUN_145511290(param_4,lVar6 * 0x10 + lVar9);
      if (puVar3 != (undefined8 *)0x0) {
        plVar1[1] = (longlong)puVar3;
        puVar8 = puVar3 + lVar6 * 2;
        *plVar1 = lVar6;
        do {
          uVar2 = FUN_1452e6ef0(param_2);
          uVar2 = uVar2 & 0xffff;
          param_2 = param_2 + 2;
          if (uVar2 != 0) {
            *puVar3 = puVar8;
            puVar3[1] = uVar2;
            puVar4 = (undefined1 *)FUN_1452e70f0(puVar8,param_2,uVar2);
            param_2 = param_2 + uVar2;
            puVar3 = puVar3 + 2;
            *puVar4 = 0;
            puVar8 = (undefined8 *)(puVar4 + 1);
          }
        } while (param_2 != lVar5);
        return 0;
      }
      return 0xfffffc7b;
    }
  }
  plVar1[1] = 0;
  *plVar1 = 0;
  return 0;
}



// FUNCTION 145512da0 FUN_145512da0 body=79 status=ok
// SIG undefined FUN_145512da0(void)

void FUN_145512da0(undefined8 *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  param_1[2] = 0;
  param_1[5] = param_6;
  param_1[6] = param_7;
  *(undefined1 *)((longlong)param_1 + 0xd) = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined4 *)(param_1 + 7) = param_4;
  if (param_5 != (undefined8 *)0x0) {
    param_1[3] = *param_5;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_5 + 1);
    return;
  }
  FUN_1452e7140();
  return;
}



// FUNCTION 145512df0 FUN_145512df0 body=15 status=ok
// SIG undefined FUN_145512df0(void)

void FUN_145512df0(longlong param_1,undefined8 param_2)

{
  FUN_1455112a0(param_2,*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 145512e00 FUN_145512e00 body=38 status=ok
// SIG undefined FUN_145512e00(void)

void FUN_145512e00(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  *param_1 = 5;
  *(undefined2 *)((longlong)param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  param_1[2] = *param_3;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_3 + 1);
  return;
}



// FUNCTION 145512e30 FUN_145512e30 body=3 status=ok
// SIG undefined FUN_145512e30(void)

void FUN_145512e30(void)

{
  return;
}



// FUNCTION 145512e40 FUN_145512e40 body=25 status=ok
// SIG undefined FUN_145512e40(void)

void FUN_145512e40(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = 4;
  *(undefined2 *)((longlong)param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 2) = param_3;
  return;
}



// FUNCTION 145512e60 FUN_145512e60 body=3 status=ok
// SIG undefined FUN_145512e60(void)

void FUN_145512e60(void)

{
  return;
}



// FUNCTION 145512e70 FUN_145512e70 body=15 status=ok
// SIG undefined FUN_145512e70(void)

void FUN_145512e70(longlong param_1,undefined8 param_2)

{
  FUN_1455112a0(param_2,*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 145512e80 FUN_145512e80 body=37 status=ok
// SIG undefined FUN_145512e80(void)

void FUN_145512e80(longlong *param_1,undefined1 param_2,longlong param_3,longlong param_4)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 4;
  *(undefined1 *)((longlong)param_1 + 0xd) = param_2;
  *param_1 = param_4 * 6;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  param_1[2] = param_4;
  param_1[3] = param_3;
  return;
}



// FUNCTION 145512eb0 FUN_145512eb0 body=15 status=ok
// SIG undefined FUN_145512eb0(void)

void FUN_145512eb0(longlong param_1,undefined8 param_2)

{
  FUN_1455112a0(param_2,*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 145512ec0 FUN_145512ec0 body=45 status=ok
// SIG undefined FUN_145512ec0(void)

void FUN_145512ec0(undefined8 *param_1,undefined1 param_2,undefined8 *param_3)

{
  *param_1 = 8;
  *(undefined1 *)((longlong)param_1 + 0xc) = 6;
  *(undefined1 *)((longlong)param_1 + 0xd) = param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  if (param_3 != (undefined8 *)0x0) {
    param_1[2] = *param_3;
    return;
  }
  param_1[2] = 0;
  return;
}



// FUNCTION 145512ef0 FUN_145512ef0 body=3 status=ok
// SIG undefined FUN_145512ef0(void)

void FUN_145512ef0(void)

{
  return;
}



// FUNCTION 145512f00 FUN_145512f00 body=49 status=ok
// SIG undefined FUN_145512f00(void)

void FUN_145512f00(longlong *param_1,undefined4 param_2,undefined4 param_3,longlong param_4,
                  longlong param_5)

{
  *(undefined2 *)((longlong)param_1 + 0xc) = 7;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 2) = param_2;
  *param_1 = param_5 + 8;
  *(undefined4 *)((longlong)param_1 + 0x14) = param_3;
  param_1[3] = param_4;
  param_1[4] = param_5;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}



// FUNCTION 145512f40 FUN_145512f40 body=15 status=ok
// SIG undefined FUN_145512f40(void)

void FUN_145512f40(longlong param_1,undefined8 param_2)

{
  FUN_1455112a0(param_2,*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 145512f50 FUN_145512f50 body=31 status=ok
// SIG undefined FUN_145512f50(void)

void FUN_145512f50(undefined8 *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = 4;
  *(undefined1 *)((longlong)param_1 + 0xc) = 8;
  *(undefined1 *)((longlong)param_1 + 0xd) = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 2) = param_4;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  return;
}



// FUNCTION 145512f70 FUN_145512f70 body=3 status=ok
// SIG undefined FUN_145512f70(void)

void FUN_145512f70(void)

{
  return;
}



// FUNCTION 145512f80 FUN_145512f80 body=3 status=ok
// SIG undefined FUN_145512f80(void)

void FUN_145512f80(void)

{
  return;
}



// FUNCTION 145512f90 FUN_145512f90 body=24 status=ok
// SIG undefined FUN_145512f90(void)

void FUN_145512f90(longlong param_1,undefined8 param_2)

{
  if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
    FUN_1455112a0(param_2,**(undefined8 **)(param_1 + 0x10));
    return;
  }
  return;
}



// FUNCTION 145512fb0 FUN_145512fb0 body=25 status=ok
// SIG undefined FUN_145512fb0(void)

void FUN_145512fb0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1455112a0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8));
    return;
  }
  return;
}



// FUNCTION 145512fd0 FUN_145512fd0 body=27 status=ok
// SIG undefined FUN_145512fd0(void)

longlong FUN_145512fd0(longlong param_1,longlong param_2)

{
  if (param_2 == 0) {
    return 0;
  }
  return param_2 - (ulonglong)((*(byte *)(param_1 + 0xd) & 8) != 0);
}



// FUNCTION 145512ff0 FUN_145512ff0 body=23 status=ok
// SIG undefined FUN_145512ff0(void)

void FUN_145512ff0(undefined8 *param_1,undefined1 param_2,undefined4 param_3)

{
  *(undefined1 *)((longlong)param_1 + 0xd) = param_2;
  *param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 1) = param_3;
  return;
}



// FUNCTION 145513010 FUN_145513010 body=3 status=ok
// SIG undefined FUN_145513010(void)

void FUN_145513010(void)

{
  return;
}



// FUNCTION 145513020 FUN_145513020 body=101 status=ok
// SIG undefined FUN_145513020(void)

void * FUN_145513020(void *param_1,longlong param_2,undefined8 param_3)

{
  size_t _Size;
  void *_Dst;
  
  _Size = param_2 * 8;
  if (_Size != 0) {
    _Dst = (void *)FUN_145511290(param_3,_Size);
    if (_Dst != (void *)0x0) {
      memcpy(_Dst,param_1,_Size);
      return _Dst;
    }
  }
  return (void *)0x0;
}



// FUNCTION 145513090 FUN_145513090 body=375 status=ok
// SIG undefined FUN_145513090(void)

undefined8 FUN_145513090(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  size_t sVar1;
  size_t *psVar2;
  undefined8 uVar3;
  longlong *plVar4;
  size_t *psVar5;
  size_t *_Dst;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = 0;
  if (param_3 == 0) {
    *param_1 = 0;
    return 0;
  }
  if (param_3 != 0) {
    plVar4 = (longlong *)(param_2 + 0x10);
    lVar6 = param_3;
    do {
      if ((*(byte *)(plVar4 + 2) & 2) == 0) {
        lVar7 = lVar7 + 1 + *plVar4;
      }
      if ((*(byte *)(plVar4 + 2) & 4) == 0) {
        lVar7 = lVar7 + 1 + plVar4[1];
      }
      plVar4 = plVar4 + 5;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  psVar2 = (size_t *)FUN_145511290(param_4,param_3 * 0x28 + lVar7);
  *param_1 = psVar2;
  if (psVar2 == (size_t *)0x0) {
    uVar3 = 0xfffffc7b;
  }
  else {
    _Dst = psVar2 + param_3 * 5;
    if (param_3 != 0) {
      psVar5 = (size_t *)(param_2 + 0x10);
      do {
        *(char *)(psVar2 + 4) = (char)psVar5[2];
        if ((psVar5[2] & 2) == 0) {
          if (*psVar5 != 0) {
            memcpy(_Dst,(void *)psVar5[-2],*psVar5);
          }
          *psVar2 = (size_t)_Dst;
          sVar1 = *psVar5;
          psVar2[2] = sVar1;
          *(undefined1 *)(sVar1 + (longlong)_Dst) = 0;
          FUN_1452e6f40(*psVar2,psVar2[2]);
          _Dst = (size_t *)((longlong)_Dst + *psVar5 + 1);
        }
        else {
          *psVar2 = psVar5[-2];
          psVar2[2] = *psVar5;
        }
        if ((psVar5[2] & 4) == 0) {
          if (psVar5[1] != 0) {
            memcpy(_Dst,(void *)psVar5[-1],psVar5[1]);
          }
          psVar2[1] = (size_t)_Dst;
          sVar1 = psVar5[1];
          psVar2[3] = sVar1;
          *(undefined1 *)(sVar1 + (longlong)_Dst) = 0;
          _Dst = (size_t *)((longlong)_Dst + psVar5[1] + 1);
        }
        else {
          psVar2[1] = psVar5[-1];
          psVar2[3] = psVar5[1];
        }
        psVar2 = psVar2 + 5;
        psVar5 = psVar5 + 5;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 145513210 FUN_145513210 body=14 status=ok
// SIG undefined FUN_145513210(void)

void FUN_145513210(undefined8 param_1,undefined8 param_2)

{
  FUN_1455112a0(param_2,param_1);
  return;
}



// FUNCTION 145513220 FUN_145513220 body=87 status=ok
// SIG undefined FUN_145513220(void)

undefined8 FUN_145513220(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  
  uVar3 = 0;
  if (param_2 != 0) {
    puVar2 = (uint *)(param_1 + 4);
    do {
      uVar1 = puVar2[-1];
      if (uVar1 == 2) {
LAB_145513247:
        bVar4 = *puVar2 == 0;
        bVar5 = *puVar2 == 1;
LAB_14551324a:
        if (!bVar4 && !bVar5) {
          return 0;
        }
      }
      else {
        if (uVar1 == 4) {
          bVar4 = *puVar2 < 0x7fffffff;
          bVar5 = *puVar2 == 0x7fffffff;
          goto LAB_14551324a;
        }
        if (uVar1 == 5) {
          bVar4 = *puVar2 - 0x4000 < 0xffbfff;
          bVar5 = *puVar2 - 0x4000 == 0xffbfff;
          goto LAB_14551324a;
        }
        if (uVar1 == 8) goto LAB_145513247;
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 2;
    } while (uVar3 < param_2);
  }
  return 1;
}



// FUNCTION 145513280 FUN_145513280 body=224 status=ok
// SIG undefined FUN_145513280(void)

undefined8 FUN_145513280(longlong *param_1,longlong *param_2,longlong param_3,int param_4)

{
  ulonglong _Size;
  byte *pbVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    _Size = param_3 - 1;
    if ((ulonglong)(*(longlong *)(lVar2 + 0x10) - *(longlong *)(lVar2 + 0x20)) < _Size) {
      _wassert(L"nghttp2_buf_avail(buf) >= padlen - 1",
               L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_frame.c",
               0x474);
    }
    memmove((void *)((longlong)*(void **)(lVar2 + 0x18) + -1),*(void **)(lVar2 + 0x18),9);
    *(longlong *)(lVar2 + 0x18) = *(longlong *)(lVar2 + 0x18) + -1;
    pbVar1 = (byte *)(*(longlong *)(lVar2 + 0x18) + 4);
    *pbVar1 = *pbVar1 | 8;
    FUN_1452e6f10(*(undefined8 *)(lVar2 + 0x18));
    FUN_1452e6ec0();
    if (param_4 == 0) {
      *(char *)(*(longlong *)(lVar2 + 0x18) + 9) = (char)_Size;
      memset(*(void **)(lVar2 + 0x20),0,_Size);
      *(longlong *)(lVar2 + 0x20) = *(longlong *)(lVar2 + 0x20) + _Size;
    }
    *param_2 = *param_2 + param_3;
    *(byte *)((longlong)param_2 + 0xd) = *(byte *)((longlong)param_2 + 0xd) | 8;
  }
  return 0;
}



// FUNCTION 145513360 FUN_145513360 body=277 status=ok
// SIG undefined FUN_145513360(void)

undefined8
FUN_145513360(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uStack_c;
  byte bStack_b;
  
  lVar1 = *param_1;
  uVar6 = *param_2;
  uVar5 = param_2[2];
  lVar2 = *(longlong *)(lVar1 + 0x18);
  uStack_c = (undefined1)param_2[3];
  bStack_b = (byte)((uint)param_2[3] >> 8);
  if (lVar1 != param_1[1]) {
    bStack_b = bStack_b & 0xfb;
  }
  *(longlong *)(lVar1 + 0x18) = lVar2 + -9;
  FUN_1452e6ec0(lVar2 + -9,(*(longlong *)(lVar1 + 0x20) - lVar2) * 0x100,param_3,param_4,uVar6);
  *(undefined1 *)(lVar2 + -6) = uStack_c;
  *(byte *)(lVar2 + -5) = bStack_b;
  FUN_1452e6ec0(lVar2 + -4,uVar5);
  puVar3 = (undefined8 *)param_1[1];
  if ((undefined8 *)*param_1 != puVar3) {
    for (puVar4 = *(undefined8 **)*param_1; puVar4 != puVar3; puVar4 = (undefined8 *)*puVar4) {
      lVar1 = puVar4[3];
      puVar4[3] = lVar1 + -9;
      FUN_1452e6ec0(lVar1 + -9,(int)(puVar4[4] << 8) - (int)(lVar1 << 8),param_3,param_4,uVar6);
      *(undefined2 *)(lVar1 + -6) = 9;
      FUN_1452e6ec0(lVar1 + -4,uVar5);
    }
    lVar1 = puVar4[3];
    puVar4[3] = lVar1 + -9;
    FUN_1452e6ec0(lVar1 + -9,(int)(puVar4[4] << 8) - (int)(lVar1 << 8),param_3,param_4,uVar6);
    *(undefined2 *)(lVar1 + -6) = 0x409;
    FUN_1452e6ec0(lVar1 + -4,uVar5);
  }
  return 0;
}



// FUNCTION 145513480 FUN_145513480 body=34 status=ok
// SIG undefined FUN_145513480(void)

void FUN_145513480(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined1 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  return;
}



// FUNCTION 1455134b0 FUN_1455134b0 body=146 status=ok
// SIG undefined FUN_1455134b0(void)

void FUN_1455134b0(longlong param_1)

{
  char cVar1;
  
  if (param_1 == 0) {
    return;
  }
  cVar1 = *(char *)(param_1 + 0xc);
  switch(cVar1) {
  case '\0':
    FUN_145513010();
    return;
  case '\x01':
    FUN_145512df0();
    return;
  case '\x02':
    FUN_145512e30();
    return;
  case '\x03':
    FUN_145512e60();
    return;
  case '\x04':
    FUN_145512eb0();
    return;
  case '\x05':
    FUN_145512e70();
    return;
  case '\x06':
    FUN_145512ef0();
    return;
  case '\a':
    FUN_145512f40();
    return;
  case '\b':
    FUN_145512f70();
    return;
  }
  if (*(char *)(param_1 + 0x60) == '\0') {
    return;
  }
  if (cVar1 == '\n') {
    FUN_145512f90();
    return;
  }
  if (cVar1 == '\f') {
    FUN_145512fb0();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000145513530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _wassert(L"0",
           L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_outbound_item.c"
           ,0x5d);
  return;
}



// FUNCTION 145513570 FUN_145513570 body=37 status=ok
// SIG undefined FUN_145513570(void)

void FUN_145513570(undefined8 *param_1,undefined8 param_2)

{
  if (param_1[1] != 0) {
    *(undefined8 *)(param_1[1] + 0x88) = param_2;
    param_1[1] = param_2;
    param_1[2] = param_1[2] + 1;
    return;
  }
  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[2] = param_1[2] + 1;
  return;
}



// FUNCTION 1455135a0 FUN_1455135a0 body=41 status=ok
// SIG undefined FUN_1455135a0(void)

void FUN_1455135a0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    *param_1 = *(longlong *)(lVar1 + 0x88);
    *(undefined8 *)(lVar1 + 0x88) = 0;
    if (*param_1 == 0) {
      param_1[1] = 0;
    }
    param_1[2] = param_1[2] + -1;
  }
  return;
}



// FUNCTION 1455135d0 FUN_1455135d0 body=22 status=ok
// SIG undefined FUN_1455135d0(void)

void FUN_1455135d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[1] = param_3;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[4] = param_2;
  return;
}



// FUNCTION 1455135f0 FUN_1455135f0 body=34 status=ok
// SIG undefined FUN_1455135f0(void)

void FUN_1455135f0(undefined8 *param_1)

{
  FUN_1455112a0(param_1[1],*param_1);
  *param_1 = 0;
  return;
}



// FUNCTION 145513620 FUN_145513620 body=158 status=ok
// SIG undefined FUN_145513620(void)

undefined8 FUN_145513620(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = param_1[2];
  if ((ulonglong)param_1[3] <= uVar2) {
    uVar3 = param_1[3] * 2;
    if (uVar3 < 4) {
      uVar3 = 4;
    }
    lVar1 = FUN_1455112e0(param_1[1],*param_1,uVar3 * 8);
    if (lVar1 == 0) {
      return 0xfffffc7b;
    }
    uVar2 = param_1[2];
    param_1[3] = uVar3;
    *param_1 = lVar1;
  }
  *(longlong **)(*param_1 + uVar2 * 8) = param_2;
  *param_2 = param_1[2];
  param_1[2] = param_1[2] + 1;
  FUN_1455137d0(param_1);
  return 0;
}



// FUNCTION 1455136c0 FUN_1455136c0 body=17 status=ok
// SIG undefined FUN_1455136c0(void)

undefined8 FUN_1455136c0(undefined8 *param_1)

{
  if (param_1[2] == 0) {
    return 0;
  }
  return *(undefined8 *)*param_1;
}



// FUNCTION 1455136e0 FUN_1455136e0 body=10 status=ok
// SIG undefined FUN_1455136e0(void)

bool FUN_1455136e0(longlong param_1)

{
  return *(longlong *)(param_1 + 0x10) == 0;
}



// FUNCTION 1455136f0 FUN_1455136f0 body=214 status=ok
// SIG undefined FUN_1455136f0(void)

void FUN_1455136f0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = *param_2;
  if (*(longlong **)(*param_1 + lVar3 * 8) != param_2) {
    _wassert(L"pq->q[item->index] == item",
             L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_pq.c",0x81);
    lVar3 = *param_2;
  }
  lVar1 = param_1[2];
  if (lVar3 == 0) {
    if (lVar1 == 0) {
      return;
    }
    *(undefined8 *)*param_1 = ((undefined8 *)*param_1)[lVar1 + -1];
    **(undefined8 **)*param_1 = 0;
    param_1[2] = param_1[2] + -1;
    lVar3 = 0;
  }
  else {
    if (lVar3 == lVar1 + -1) {
      param_1[2] = lVar1 + -1;
      return;
    }
    *(undefined8 *)(*param_1 + lVar3 * 8) = *(undefined8 *)(*param_1 + -8 + lVar1 * 8);
    **(longlong **)(*param_1 + *param_2 * 8) = *param_2;
    param_1[2] = param_1[2] + -1;
    iVar2 = (*(code *)param_1[4])(param_2,*(undefined8 *)(*param_1 + *param_2 * 8));
    lVar3 = *param_2;
    if (iVar2 == 0) {
      FUN_1455137d0(param_1,lVar3);
      return;
    }
  }
  FUN_145513840(param_1,lVar3);
  return;
}



// FUNCTION 1455137d0 FUN_1455137d0 body=112 status=ok
// SIG undefined FUN_1455137d0(void)

void FUN_1455137d0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  int iVar4;
  ulonglong uVar5;
  
  while( true ) {
    if (param_2 == 0) {
      return;
    }
    uVar5 = param_2 - 1 >> 1;
    iVar4 = (*(code *)param_1[4])
                      (*(undefined8 *)(*param_1 + param_2 * 8),*(undefined8 *)(*param_1 + uVar5 * 8)
                      );
    if (iVar4 == 0) break;
    lVar1 = *param_1;
    puVar2 = *(ulonglong **)(lVar1 + uVar5 * 8);
    puVar3 = *(ulonglong **)(lVar1 + param_2 * 8);
    *(ulonglong **)(lVar1 + uVar5 * 8) = puVar3;
    *puVar3 = uVar5;
    *(ulonglong **)(*param_1 + param_2 * 8) = puVar2;
    *puVar2 = param_2;
    param_2 = uVar5;
  }
  return;
}



// FUNCTION 145513840 FUN_145513840 body=184 status=ok
// SIG undefined FUN_145513840(void)

void FUN_145513840(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  do {
    lVar1 = param_2 * 8;
    uVar5 = param_2 * 2;
    uVar7 = 0;
    uVar6 = param_2;
    lVar8 = lVar1;
    do {
      uVar5 = uVar5 + 1;
      if ((ulonglong)param_1[2] <= uVar5) break;
      iVar4 = (*(code *)param_1[4])
                        (*(undefined8 *)(uVar5 * 8 + *param_1),*(undefined8 *)(lVar8 + *param_1));
      if (iVar4 != 0) {
        uVar6 = uVar5;
        lVar8 = uVar5 * 8;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 2);
    if (uVar6 == param_2) {
      return;
    }
    lVar8 = *param_1;
    puVar2 = *(ulonglong **)(lVar8 + lVar1);
    puVar3 = *(ulonglong **)(lVar8 + uVar6 * 8);
    *(ulonglong **)(lVar8 + lVar1) = puVar3;
    *puVar3 = param_2;
    *(ulonglong **)(*param_1 + uVar6 * 8) = puVar2;
    *puVar2 = uVar6;
    param_2 = uVar6;
  } while( true );
}



// FUNCTION 145513900 FUN_145513900 body=257 status=ok
// SIG undefined FUN_145513900(void)

void FUN_145513900(longlong param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  FUN_1455135d0(param_1 + 8,&LAB_145514640,param_9);
  *(undefined8 *)(param_1 + 0x90) = param_8;
  *(undefined4 *)(param_1 + 0xac) = param_6;
  *(undefined4 *)(param_1 + 0xbc) = param_7;
  *(undefined4 *)(param_1 + 0xc0) = param_5;
  *(undefined4 *)(param_1 + 0xa8) = param_2;
  *(undefined4 *)(param_1 + 0xcc) = param_4;
  *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0xd4) = param_3;
  *(undefined2 *)(param_1 + 0xd5) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined1 *)(param_1 + 0xd7) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0xffff;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  return;
}



// FUNCTION 145513a10 FUN_145513a10 body=9 status=ok
// SIG undefined FUN_145513a10(void)

void FUN_145513a10(longlong param_1)

{
  FUN_1455135f0(param_1 + 8);
  return;
}



// FUNCTION 145513a20 FUN_145513a20 body=7 status=ok
// SIG undefined FUN_145513a20(void)

void FUN_145513a20(longlong param_1,byte param_2)

{
  *(byte *)(param_1 + 0xd5) = *(byte *)(param_1 + 0xd5) | param_2;
  return;
}



// FUNCTION 145513a30 FUN_145513a30 body=93 status=ok
// SIG undefined FUN_145513a30(void)

undefined8 FUN_145513a30(longlong param_1,byte param_2)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x98) == 0) {
    _wassert(L"stream->item",
             L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_stream.c",
             0x1fe);
  }
  *(byte *)(param_1 + 0xd4) = *(byte *)(param_1 + 0xd4) | param_2;
  iVar1 = FUN_1455136e0(param_1 + 8);
  if (iVar1 != 0) {
    FUN_145514680(param_1);
  }
  return 0;
}



// FUNCTION 145513a90 FUN_145513a90 body=102 status=ok
// SIG undefined FUN_145513a90(void)

undefined8 FUN_145513a90(longlong param_1,byte param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x98) == 0) {
    _wassert(L"stream->item",
             L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_stream.c",
             0x209);
  }
  *(byte *)(param_1 + 0xd4) = *(byte *)(param_1 + 0xd4) & ~param_2;
  if ((*(byte *)(param_1 + 0xd4) & 0xc) != 0) {
    return 0;
  }
  uVar1 = FUN_1455147f0(param_1);
  return uVar1;
}



// FUNCTION 145513b00 FUN_145513b00 body=28 status=ok
// SIG undefined FUN_145513b00(void)

undefined8 FUN_145513b00(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x98) != 0) && ((*(byte *)(param_1 + 0xd4) & 0xc) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 145513b20 FUN_145513b20 body=28 status=ok
// SIG undefined FUN_145513b20(void)

undefined8 FUN_145513b20(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x98) != 0) && ((*(byte *)(param_1 + 0xd4) & 4) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 145513b40 FUN_145513b40 body=53 status=ok
// SIG undefined FUN_145513b40(void)

undefined8 FUN_145513b40(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = ((longlong)*(int *)(param_1 + 0xac) - (longlong)param_3) + (longlong)param_2;
  if (lVar1 + 0x80000000U < 0x100000000) {
    *(int *)(param_1 + 0xac) = (int)lVar1;
    return 0;
  }
  return 0xffffffff;
}



// FUNCTION 145513b80 FUN_145513b80 body=53 status=ok
// SIG undefined FUN_145513b80(void)

undefined8 FUN_145513b80(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = ((longlong)*(int *)(param_1 + 0xbc) - (longlong)param_3) + (longlong)param_2;
  if (lVar1 + 0x80000000U < 0x100000000) {
    *(int *)(param_1 + 0xbc) = (int)lVar1;
    return 0;
  }
  return 0xffffffff;
}



// FUNCTION 145513bc0 FUN_145513bc0 body=18 status=ok
// SIG undefined FUN_145513bc0(void)

void FUN_145513bc0(longlong param_1)

{
  *(byte *)(param_1 + 0xd4) = *(byte *)(param_1 + 0xd4) & 0xfe;
  *(undefined4 *)(param_1 + 0xcc) = 2;
  return;
}



// FUNCTION 145513be0 FUN_145513be0 body=28 status=ok
// SIG undefined FUN_145513be0(void)

undefined8 FUN_145513be0(longlong param_1,longlong param_2)

{
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    if (param_1 == param_2) break;
    param_1 = *(longlong *)(param_1 + 0x60);
  }
  return 1;
}



// FUNCTION 145513c00 FUN_145513c00 body=285 status=ok
// SIG undefined FUN_145513c00(void)

undefined8 FUN_145513c00(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  *(undefined4 *)(param_2 + 200) = *(undefined4 *)(param_1 + 200);
  lVar4 = *(longlong *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 0xc0);
  if (lVar4 != 0) {
    do {
      *(longlong *)(lVar4 + 0x60) = param_2;
      if ((*(char *)(lVar4 + 0xd6) != '\0') &&
         (uVar2 = FUN_145514740(param_2,param_1,lVar4), (int)uVar2 != 0)) {
        return uVar2;
      }
      lVar4 = *(longlong *)(lVar4 + 0x78);
    } while (lVar4 != 0);
    lVar4 = param_1;
    lVar6 = param_2;
    if (((*(longlong *)(param_2 + 0x98) != 0) && ((*(byte *)(param_2 + 0xd4) & 0xc) == 0)) ||
       (iVar1 = FUN_1455136e0(param_2 + 8), iVar1 == 0)) {
      do {
        lVar5 = lVar4;
        if (*(char *)(lVar6 + 0xd6) != '\0') break;
        uVar3 = *(longlong *)(lVar6 + 0xa0) * 0x100 + (ulonglong)*(uint *)(lVar6 + 0xc4);
        lVar4 = *(longlong *)(lVar5 + 0x40);
        *(int *)(lVar6 + 0xc4) = (int)(uVar3 % (ulonglong)*(uint *)(lVar6 + 0xc0));
        *(ulonglong *)(lVar6 + 0x48) = uVar3 / *(uint *)(lVar6 + 0xc0) + lVar4;
        *(undefined8 *)(lVar6 + 0x58) = *(undefined8 *)(lVar5 + 0x50);
        *(longlong *)(lVar5 + 0x50) = *(longlong *)(lVar5 + 0x50) + 1;
        uVar2 = FUN_145513620(lVar5 + 8);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        *(undefined1 *)(lVar6 + 0xd6) = 1;
        lVar4 = *(longlong *)(lVar5 + 0x60);
        lVar6 = lVar5;
      } while (*(longlong *)(lVar5 + 0x60) != 0);
    }
    *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(param_1 + 0x68);
  }
  *(longlong *)(param_1 + 0x68) = param_2;
  *(longlong *)(param_2 + 0x60) = param_1;
  return 0;
}



// FUNCTION 145513d20 FUN_145513d20 body=106 status=ok
// SIG undefined FUN_145513d20(void)

void FUN_145513d20(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + *(int *)(param_2 + 0xc0);
  lVar1 = *(longlong *)(param_1 + 0x68);
  if (lVar1 != 0) {
    if (*(longlong *)(param_2 + 0x70) != 0) {
      _wassert(L"stream->sib_prev == NULL",
               L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_stream.c",
               0x28c);
      lVar1 = *(longlong *)(param_1 + 0x68);
    }
    *(longlong *)(param_2 + 0x78) = lVar1;
    if (lVar1 != 0) {
      *(longlong *)(lVar1 + 0x70) = param_2;
    }
  }
  *(longlong *)(param_1 + 0x68) = param_2;
  *(longlong *)(param_2 + 0x60) = param_1;
  return;
}



// FUNCTION 145513d90 FUN_145513d90 body=658 status=ok
// SIG undefined FUN_145513d90(void)

undefined8 FUN_145513d90(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  
  iVar8 = -*(int *)(param_1 + 0xc0);
  for (lVar6 = *(longlong *)(param_1 + 0x68); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x78)) {
    iVar3 = (*(int *)(lVar6 + 0xc0) * *(int *)(param_1 + 0xc0)) / *(int *)(param_1 + 200);
    if (iVar3 < 1) {
      iVar3 = 1;
    }
    iVar8 = iVar8 + iVar3;
    *(int *)(lVar6 + 0xc0) = iVar3;
    if (*(char *)(lVar6 + 0xd6) != '\0') {
      lVar7 = *(longlong *)(param_1 + 0x60);
      FUN_1455136f0(param_1 + 8);
      *(undefined1 *)(lVar6 + 0xd6) = 0;
      lVar2 = lVar6;
      while ((lVar1 = lVar7, lVar1 != 0 && (*(char *)(lVar2 + 0xd6) == '\0'))) {
        uVar4 = *(longlong *)(lVar2 + 0xa0) * 0x100 + (ulonglong)*(uint *)(lVar2 + 0xc4);
        lVar7 = *(longlong *)(lVar1 + 0x40);
        *(int *)(lVar2 + 0xc4) = (int)(uVar4 % (ulonglong)*(uint *)(lVar2 + 0xc0));
        *(ulonglong *)(lVar2 + 0x48) = uVar4 / *(uint *)(lVar2 + 0xc0) + lVar7;
        *(undefined8 *)(lVar2 + 0x58) = *(undefined8 *)(lVar1 + 0x50);
        *(longlong *)(lVar1 + 0x50) = *(longlong *)(lVar1 + 0x50) + 1;
        uVar5 = FUN_145513620(lVar1 + 8);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        *(undefined1 *)(lVar2 + 0xd6) = 1;
        lVar7 = *(longlong *)(lVar1 + 0x60);
        lVar2 = lVar1;
      }
    }
  }
  lVar6 = *(longlong *)(param_1 + 0x60);
  if (lVar6 == 0) {
    _wassert(L"stream->dep_prev",
             L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_stream.c",
             0x308);
    lVar6 = *(longlong *)(param_1 + 0x60);
  }
  *(int *)(lVar6 + 200) = *(int *)(lVar6 + 200) + iVar8;
  if (*(char *)(param_1 + 0xd6) != '\0') {
    FUN_145514680(param_1);
  }
  lVar6 = *(longlong *)(param_1 + 0x70);
  lVar7 = *(longlong *)(param_1 + 0x68);
  if (lVar6 == 0) {
    lVar6 = *(longlong *)(param_1 + 0x60);
    if (lVar6 == 0) {
      _wassert(L"prev",
               L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_stream.c",
               0x2bf);
    }
    if (lVar7 == 0) {
      lVar7 = *(longlong *)(param_1 + 0x78);
      if (lVar7 == 0) {
        *(undefined8 *)(lVar6 + 0x68) = 0;
      }
      else {
        *(undefined8 *)(lVar7 + 0x70) = 0;
        *(longlong *)(lVar6 + 0x68) = lVar7;
        *(longlong *)(lVar7 + 0x60) = lVar6;
      }
      goto LAB_145513ff1;
    }
    *(longlong *)(lVar6 + 0x68) = lVar7;
    *(longlong *)(lVar7 + 0x60) = lVar6;
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    lVar6 = lVar7;
    do {
      *(undefined8 *)(lVar6 + 0x60) = uVar5;
      lVar6 = *(longlong *)(lVar6 + 0x78);
    } while (lVar6 != 0);
    lVar6 = *(longlong *)(param_1 + 0x78);
    if (lVar6 == 0) goto LAB_145513ff1;
    for (lVar2 = *(longlong *)(lVar7 + 0x78); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x78)) {
      lVar7 = lVar2;
    }
  }
  else {
    if (lVar7 == 0) {
      lVar7 = *(longlong *)(param_1 + 0x78);
      *(longlong *)(lVar6 + 0x78) = lVar7;
      if (lVar7 != 0) {
        *(longlong *)(lVar7 + 0x70) = lVar6;
      }
      goto LAB_145513ff1;
    }
    *(longlong *)(lVar6 + 0x78) = lVar7;
    *(longlong *)(lVar7 + 0x70) = lVar6;
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    lVar6 = lVar7;
    do {
      *(undefined8 *)(lVar6 + 0x60) = uVar5;
      lVar6 = *(longlong *)(lVar6 + 0x78);
    } while (lVar6 != 0);
    lVar6 = *(longlong *)(param_1 + 0x78);
    if (lVar6 == 0) goto LAB_145513ff1;
    lVar2 = *(longlong *)(lVar7 + 0x78);
    if (*(longlong *)(lVar7 + 0x78) != 0) {
      do {
        lVar7 = lVar2;
        lVar2 = *(longlong *)(lVar7 + 0x78);
      } while (*(longlong *)(lVar7 + 0x78) != 0);
      *(longlong *)(lVar7 + 0x78) = lVar6;
      *(longlong *)(lVar6 + 0x70) = lVar7;
      goto LAB_145513ff1;
    }
  }
  *(longlong *)(lVar7 + 0x78) = lVar6;
  *(longlong *)(lVar6 + 0x70) = lVar7;
LAB_145513ff1:
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  return 0;
}



// FUNCTION 145514030 FUN_145514030 body=141 status=ok
// SIG undefined FUN_145514030(void)

undefined8 FUN_145514030(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0xd4) & 0xc) != 0) {
    _wassert(L"(stream->flags & NGHTTP2_STREAM_FLAG_DEFERRED_ALL) == 0",
             L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_stream.c",
             0x1e0);
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    _wassert(L"stream->item == NULL",
             L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_stream.c",
             0x1e1);
  }
  *(undefined8 *)(param_1 + 0x98) = param_2;
  uVar1 = FUN_1455147f0(param_1);
  if ((int)uVar1 != 0) {
    *(undefined8 *)(param_1 + 0x98) = 0;
    return uVar1;
  }
  return 0;
}



// FUNCTION 1455140c0 FUN_1455140c0 body=56 status=ok
// SIG undefined FUN_1455140c0(void)

undefined8 FUN_1455140c0(longlong param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0xd4) = *(byte *)(param_1 + 0xd4) & 0xf3;
  *(undefined8 *)(param_1 + 0x98) = 0;
  iVar1 = FUN_1455136e0(param_1 + 8);
  if (iVar1 != 0) {
    FUN_145514680(param_1);
  }
  return 0;
}



// FUNCTION 145514100 FUN_145514100 body=311 status=ok
// SIG undefined FUN_145514100(void)

undefined8 FUN_145514100(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  *(int *)(param_2 + 200) = *(int *)(param_2 + 200) + *(int *)(param_1 + 200);
  lVar7 = *(longlong *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 0xc0);
  *(longlong *)(param_1 + 0x68) = param_2;
  *(longlong *)(param_2 + 0x60) = param_1;
  if (lVar7 != 0) {
    lVar2 = *(longlong *)(param_2 + 0x68);
    if (lVar2 == 0) {
      *(longlong *)(param_2 + 0x68) = lVar7;
      *(longlong *)(lVar7 + 0x60) = param_2;
    }
    else {
      for (lVar3 = *(longlong *)(lVar2 + 0x78); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x78)) {
        lVar2 = lVar3;
      }
      *(longlong *)(lVar2 + 0x78) = lVar7;
      *(longlong *)(lVar7 + 0x70) = lVar2;
    }
    do {
      *(longlong *)(lVar7 + 0x60) = param_2;
      if ((*(char *)(lVar7 + 0xd6) != '\0') &&
         (uVar5 = FUN_145514740(param_2,param_1,lVar7), (int)uVar5 != 0)) {
        return uVar5;
      }
      lVar7 = *(longlong *)(lVar7 + 0x78);
    } while (lVar7 != 0);
  }
  if (((*(longlong *)(param_2 + 0x98) != 0) && ((*(byte *)(param_2 + 0xd4) & 0xc) == 0)) ||
     (iVar4 = FUN_1455136e0(param_2 + 8), iVar4 == 0)) {
    do {
      if (*(char *)(param_2 + 0xd6) != '\0') {
        return 0;
      }
      uVar6 = *(longlong *)(param_2 + 0xa0) * 0x100 + (ulonglong)*(uint *)(param_2 + 0xc4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      *(int *)(param_2 + 0xc4) = (int)(uVar6 % (ulonglong)*(uint *)(param_2 + 0xc0));
      *(ulonglong *)(param_2 + 0x48) = uVar6 / *(uint *)(param_2 + 0xc0) + lVar7;
      *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_1 + 0x50);
      *(longlong *)(param_1 + 0x50) = *(longlong *)(param_1 + 0x50) + 1;
      uVar5 = FUN_145513620(param_1 + 8);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      *(undefined1 *)(param_2 + 0xd6) = 1;
      plVar1 = (longlong *)(param_1 + 0x60);
      param_2 = param_1;
      param_1 = *plVar1;
    } while (*plVar1 != 0);
  }
  return 0;
}



// FUNCTION 145514240 FUN_145514240 body=242 status=ok
// SIG undefined FUN_145514240(void)

undefined8 FUN_145514240(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + *(int *)(param_2 + 0xc0);
  lVar3 = *(longlong *)(param_1 + 0x68);
  if (lVar3 != 0) {
    if (*(longlong *)(param_2 + 0x70) != 0) {
      _wassert(L"stream->sib_prev == NULL",
               L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_stream.c",
               0x28c);
      lVar3 = *(longlong *)(param_1 + 0x68);
    }
    *(longlong *)(param_2 + 0x78) = lVar3;
    if (lVar3 != 0) {
      *(longlong *)(lVar3 + 0x70) = param_2;
    }
  }
  *(longlong *)(param_1 + 0x68) = param_2;
  *(longlong *)(param_2 + 0x60) = param_1;
  if (((*(longlong *)(param_2 + 0x98) != 0) && ((*(byte *)(param_2 + 0xd4) & 0xc) == 0)) ||
     (iVar2 = FUN_1455136e0(param_2 + 8), iVar2 == 0)) {
    do {
      if (*(char *)(param_2 + 0xd6) != '\0') {
        return 0;
      }
      uVar4 = *(longlong *)(param_2 + 0xa0) * 0x100 + (ulonglong)*(uint *)(param_2 + 0xc4);
      lVar3 = *(longlong *)(param_1 + 0x40);
      *(int *)(param_2 + 0xc4) = (int)(uVar4 % (ulonglong)*(uint *)(param_2 + 0xc0));
      *(ulonglong *)(param_2 + 0x48) = uVar4 / *(uint *)(param_2 + 0xc0) + lVar3;
      *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_1 + 0x50);
      *(longlong *)(param_1 + 0x50) = *(longlong *)(param_1 + 0x50) + 1;
      uVar5 = FUN_145513620(param_1 + 8);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      *(undefined1 *)(param_2 + 0xd6) = 1;
      plVar1 = (longlong *)(param_1 + 0x60);
      param_2 = param_1;
      param_1 = *plVar1;
    } while (*plVar1 != 0);
  }
  return 0;
}



// FUNCTION 145514340 FUN_145514340 body=151 status=ok
// SIG undefined FUN_145514340(void)

void FUN_145514340(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x60);
  if (lVar3 == 0) {
    _wassert(L"stream->dep_prev",
             L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_stream.c",
             0x378);
    lVar3 = *(longlong *)(param_1 + 0x60);
  }
  lVar1 = *(longlong *)(param_1 + 0x70);
  lVar2 = *(longlong *)(param_1 + 0x78);
  if (lVar1 == 0) {
    *(longlong *)(lVar3 + 0x68) = lVar2;
    if (lVar2 != 0) {
      *(longlong *)(lVar2 + 0x60) = lVar3;
      *(undefined8 *)(lVar2 + 0x70) = 0;
    }
  }
  else {
    *(longlong *)(lVar1 + 0x78) = lVar2;
    if (lVar2 != 0) {
      *(longlong *)(lVar2 + 0x70) = lVar1;
    }
  }
  *(int *)(lVar3 + 200) = *(int *)(lVar3 + 200) - *(int *)(param_1 + 0xc0);
  if (*(char *)(param_1 + 0xd6) != '\0') {
    FUN_145514680(param_1);
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}



// FUNCTION 1455143e0 FUN_1455143e0 body=37 status=ok
// SIG undefined FUN_1455143e0(void)

undefined8 FUN_1455143e0(longlong param_1)

{
  if ((((*(longlong *)(param_1 + 0x60) == 0) && (*(longlong *)(param_1 + 0x68) == 0)) &&
      (*(longlong *)(param_1 + 0x70) == 0)) && (*(longlong *)(param_1 + 0x78) == 0)) {
    return 0;
  }
  return 1;
}



// FUNCTION 145514410 FUN_145514410 body=188 status=ok
// SIG undefined FUN_145514410(void)

void FUN_145514410(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (*(char *)(param_1 + 0xd6) == '\0') {
    _wassert(L"stream->queued",
             L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_stream.c",0xe3
            );
  }
  lVar1 = *(longlong *)(param_1 + 0x60);
  while (lVar2 = lVar1, lVar2 != 0) {
    FUN_1455136f0(lVar2 + 8);
    uVar3 = *(longlong *)(param_1 + 0xa0) * 0x100 + (ulonglong)*(uint *)(param_1 + 0xc4);
    lVar1 = *(longlong *)(lVar2 + 0x40);
    *(int *)(param_1 + 0xc4) = (int)(uVar3 % (ulonglong)*(uint *)(param_1 + 0xc0));
    *(ulonglong *)(param_1 + 0x48) = uVar3 / *(uint *)(param_1 + 0xc0) + lVar1;
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(lVar2 + 0x50);
    *(longlong *)(lVar2 + 0x50) = *(longlong *)(lVar2 + 0x50) + 1;
    FUN_145513620(lVar2 + 8,param_1);
    *(undefined8 *)(lVar2 + 0xa0) = *(undefined8 *)(param_1 + 0xa0);
    param_1 = lVar2;
    lVar1 = *(longlong *)(lVar2 + 0x60);
  }
  return;
}



// FUNCTION 1455144d0 FUN_1455144d0 body=234 status=ok
// SIG undefined FUN_1455144d0(void)

void FUN_1455144d0(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0xc0);
  uVar3 = (ulonglong)uVar1;
  if (uVar1 != param_2) {
    lVar2 = *(longlong *)(param_1 + 0x60);
    *(uint *)(param_1 + 0xc0) = param_2;
    if ((lVar2 != 0) &&
       (*(int *)(lVar2 + 200) = *(int *)(lVar2 + 200) + (param_2 - uVar1),
       *(char *)(param_1 + 0xd6) != '\0')) {
      FUN_1455136f0(lVar2 + 8);
      uVar4 = *(longlong *)(param_1 + 0xa0) * 0x100;
      uVar4 = uVar4 + ((ulonglong)(*(int *)(param_1 + 0xc4) + uVar1) - uVar4 % uVar3) % uVar3;
      *(int *)(param_1 + 0xc4) = (int)(uVar4 % (ulonglong)*(uint *)(param_1 + 0xc0));
      *(longlong *)(param_1 + 0x48) =
           *(longlong *)(param_1 + 0x48) + (uVar4 / *(uint *)(param_1 + 0xc0) - uVar4 / uVar3);
      if ((ulonglong)(*(longlong *)(lVar2 + 0x40) - *(longlong *)(param_1 + 0x48)) < 0x100000000) {
        *(longlong *)(param_1 + 0x48) = *(longlong *)(lVar2 + 0x40);
      }
      FUN_145513620(lVar2 + 8,param_1);
    }
  }
  return;
}



// FUNCTION 1455145c0 FUN_1455145c0 body=115 status=ok
// SIG undefined FUN_1455145c0(void)

longlong FUN_1455145c0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  while( true ) {
    plVar1 = (longlong *)(param_1 + 0x98);
    lVar2 = *plVar1;
    if ((lVar2 != 0) && ((*(byte *)(param_1 + 0xd4) & 0xc) == 0)) break;
    param_1 = FUN_1455136c0(param_1 + 8);
    if (param_1 == 0) {
      return 0;
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x60);
  if (lVar3 != 0) {
    do {
      *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)(param_1 + 0x48);
      param_1 = *(longlong *)(param_1 + 0x60);
      lVar3 = *(longlong *)(param_1 + 0x60);
    } while (lVar3 != 0);
    lVar2 = *plVar1;
  }
  return lVar2;
}



// FUNCTION 145514680 FUN_145514680 body=190 status=ok
// SIG undefined FUN_145514680(void)

void FUN_145514680(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x60);
  if (*(char *)(param_1 + 0xd6) != '\0') {
    while (lVar1 = lVar2, lVar1 != 0) {
      FUN_1455136f0(lVar1 + 8,param_1);
      if (*(char *)(param_1 + 0xd6) == '\0') {
        _wassert(L"stream->queued",
                 L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_stream.c",
                 0xbd);
      }
      *(undefined1 *)(param_1 + 0xd6) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0xc4) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0xa0) = 0;
      if ((*(longlong *)(lVar1 + 0x98) != 0) && ((*(byte *)(lVar1 + 0xd4) & 0xc) == 0)) {
        return;
      }
      iVar3 = FUN_1455136e0(lVar1 + 8);
      if (iVar3 == 0) {
        return;
      }
      param_1 = lVar1;
      lVar2 = *(longlong *)(lVar1 + 0x60);
    }
  }
  return;
}



// FUNCTION 145514740 FUN_145514740 body=164 status=ok
// SIG undefined FUN_145514740(void)

undefined8 FUN_145514740(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_3 + 0xd6) != '\0') {
    FUN_1455136f0(param_2 + 8);
    *(undefined1 *)(param_3 + 0xd6) = 0;
    while ((param_1 != 0 && (*(char *)(param_3 + 0xd6) == '\0'))) {
      uVar2 = *(longlong *)(param_3 + 0xa0) * 0x100 + (ulonglong)*(uint *)(param_3 + 0xc4);
      lVar1 = *(longlong *)(param_1 + 0x40);
      *(int *)(param_3 + 0xc4) = (int)(uVar2 % (ulonglong)*(uint *)(param_3 + 0xc0));
      *(ulonglong *)(param_3 + 0x48) = uVar2 / *(uint *)(param_3 + 0xc0) + lVar1;
      *(undefined8 *)(param_3 + 0x58) = *(undefined8 *)(param_1 + 0x50);
      *(longlong *)(param_1 + 0x50) = *(longlong *)(param_1 + 0x50) + 1;
      uVar3 = FUN_145513620(param_1 + 8);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      *(undefined1 *)(param_3 + 0xd6) = 1;
      param_3 = param_1;
      param_1 = *(longlong *)(param_1 + 0x60);
    }
  }
  return 0;
}



// FUNCTION 1455147f0 FUN_1455147f0 body=136 status=ok
// SIG undefined FUN_1455147f0(void)

undefined8 FUN_1455147f0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x60);
  while ((lVar2 = lVar1, lVar2 != 0 && (*(char *)(param_1 + 0xd6) == '\0'))) {
    uVar3 = *(longlong *)(param_1 + 0xa0) * 0x100 + (ulonglong)*(uint *)(param_1 + 0xc4);
    lVar1 = *(longlong *)(lVar2 + 0x40);
    *(int *)(param_1 + 0xc4) = (int)(uVar3 % (ulonglong)*(uint *)(param_1 + 0xc0));
    *(ulonglong *)(param_1 + 0x48) = uVar3 / *(uint *)(param_1 + 0xc0) + lVar1;
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(lVar2 + 0x50);
    *(longlong *)(lVar2 + 0x50) = *(longlong *)(lVar2 + 0x50) + 1;
    uVar4 = FUN_145513620(lVar2 + 8);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    *(undefined1 *)(param_1 + 0xd6) = 1;
    lVar1 = *(longlong *)(lVar2 + 0x60);
    param_1 = lVar2;
  }
  return 0;
}



// FUNCTION 145514880 FUN_145514880 body=918 status=ok
// SIG undefined FUN_145514880(void)

/* WARNING: Type propagation algorithm not settling */

undefined1 *
FUN_145514880(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,int param_5)

{
  ulonglong uVar1;
  byte *pbVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  int iVar10;
  byte *pbVar11;
  
  iVar4 = FUN_1452e6da0(*(undefined8 *)(*param_4 + 0x10),*(undefined8 *)(*param_4 + 0x18));
  if (iVar4 == 0) {
    lVar8 = *param_4;
    uVar1 = *(ulonglong *)(lVar8 + 0x18);
    if ((uVar1 != 0) && (**(char **)(lVar8 + 0x10) == ':')) {
      return (undefined1 *)0xfffffded;
    }
    uVar7 = 0;
    if (uVar1 != 0) {
      do {
        if ((byte)(*(char *)(*(longlong *)(lVar8 + 0x10) + uVar7) + 0xbfU) < 0x1a) {
          return (undefined1 *)0xfffffded;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar1);
    }
    goto LAB_1455148f9;
  }
  iVar4 = (int)param_4[2];
  if (iVar4 == 0) {
LAB_145514a46:
    iVar4 = FUN_1452e6e70(*(undefined8 *)(param_4[1] + 0x10),*(undefined8 *)(param_4[1] + 0x18));
LAB_145514a57:
    if (iVar4 != 0) {
LAB_1455149b4:
      if (*(char *)(param_1 + 0x9aa) == '\0') {
        if (*(char *)(param_3 + 0xc) != '\x05') {
          if (**(char **)(*param_4 + 0x10) == ':') {
            if (param_5 != 0) {
              return (undefined1 *)0xfffffded;
            }
            if ((*(byte *)(param_2 + 0xd2) & 0x40) != 0) {
              return (undefined1 *)0xfffffded;
            }
          }
          switch((int)param_4[2]) {
          case 7:
            iVar10 = 0x20;
            iVar4 = FUN_145515030(param_2,param_4,0x20);
            if (iVar4 == 0) {
              return (undefined1 *)0xfffffded;
            }
            if (*(longlong *)(param_4[1] + 0x18) != 3) {
              return (undefined1 *)0xfffffded;
            }
            sVar3 = FUN_145514fb0(*(undefined8 *)(param_4[1] + 0x10),iVar10 + -0x1d);
            *(short *)(param_2 + 0xd0) = sVar3;
            if (sVar3 == -1) {
              return (undefined1 *)0xfffffded;
            }
            if (sVar3 == 0x65) {
              return (undefined1 *)0xfffffded;
            }
            break;
          default:
            if (**(char **)(*param_4 + 0x10) == ':') {
              return (undefined1 *)0xfffffded;
            }
            break;
          case 0x1b:
            sVar3 = *(short *)(param_2 + 0xd0);
            if (sVar3 == 0xcc) {
              if (*(longlong *)(param_2 + 0x30) != -1) {
                return (undefined1 *)0xfffffded;
              }
              if (*(longlong *)(param_4[1] + 0x18) != 1) {
                return (undefined1 *)0xfffffded;
              }
              iVar4 = FUN_145514f30(&DAT_1499b8ba0,*(undefined8 *)(param_4[1] + 0x10),1);
              if (iVar4 == 0) {
                return (undefined1 *)0xfffffded;
              }
              *(undefined8 *)(param_2 + 0x30) = 0;
            }
            else {
              if ((int)sVar3 - 100U < 100) {
                return (undefined1 *)0xfffffded;
              }
              if ((99 < (int)sVar3 - 200U) || ((*(byte *)(param_2 + 0xd2) & 0x80) == 0)) {
                if (*(longlong *)(param_2 + 0x30) != -1) {
                  return (undefined1 *)0xfffffded;
                }
                lVar8 = FUN_145514fb0(*(undefined8 *)(param_4[1] + 0x10),
                                      *(undefined8 *)(param_4[1] + 0x18));
                *(longlong *)(param_2 + 0x30) = lVar8;
                if (lVar8 == -1) {
                  return (undefined1 *)0xfffffded;
                }
                break;
              }
            }
            return &DAT_ffffff96;
          case 0x38:
          case 0x3e:
          case 0x3f:
          case 0x40:
          case 0x41:
            return (undefined1 *)0xfffffded;
          case 0x3d:
            if (*(longlong *)(param_4[1] + 0x18) != 8) {
              return (undefined1 *)0xfffffded;
            }
            iVar4 = FUN_145514f30("trailers",*(undefined8 *)(param_4[1] + 0x10),8);
            if (iVar4 == 0) {
              return (undefined1 *)0xfffffded;
            }
          }
          if (**(char **)(*param_4 + 0x10) != ':') {
            *(ushort *)(param_2 + 0xd2) = *(ushort *)(param_2 + 0xd2) | 0x40;
          }
          return (undefined1 *)0x0;
        }
      }
      else if (*(char *)(param_1 + 0x9a9) != '\0') {
        uVar6 = 1;
        goto LAB_145514bee;
      }
      uVar6 = 0;
LAB_145514bee:
      puVar9 = (undefined1 *)FUN_1455150a0(param_2,param_4,param_5,uVar6);
      return puVar9;
    }
  }
  else {
    if (iVar4 == 1) {
      iVar4 = FUN_1452e6e10(*(undefined8 *)(param_4[1] + 0x10),*(undefined8 *)(param_4[1] + 0x18));
      goto LAB_145514a57;
    }
    if (iVar4 == 3) {
      iVar4 = FUN_1452e6e40(*(undefined8 *)(param_4[1] + 0x10),*(undefined8 *)(param_4[1] + 0x18));
      goto LAB_145514a57;
    }
    if (iVar4 != 5) {
      if (iVar4 == 0x25) goto LAB_145514a46;
      iVar4 = FUN_1452e6de0(*(undefined8 *)(param_4[1] + 0x10),*(undefined8 *)(param_4[1] + 0x18));
      goto LAB_145514a57;
    }
    lVar8 = *(longlong *)(param_4[1] + 0x18);
    pbVar2 = *(byte **)(param_4[1] + 0x10);
    if ((lVar8 != 0) && (((byte)(*pbVar2 + 0xbf) < 0x1a || ((byte)(*pbVar2 + 0x9f) < 0x1a)))) {
      pbVar11 = pbVar2 + lVar8;
      do {
        pbVar2 = pbVar2 + 1;
        if (pbVar2 == pbVar11) goto LAB_1455149b4;
        uVar5 = *pbVar2 - 0x2b;
      } while ((((byte)uVar5 < 0x30) && ((0xffffffc07fedU >> ((ulonglong)uVar5 & 0x3f) & 1) != 0))
              || ((byte)(*pbVar2 + 0x9f) < 0x1a));
    }
  }
  lVar8 = *param_4;
  if (*(longlong *)(lVar8 + 0x18) == 0) {
    _wassert(L"nv->name->len > 0",
             L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_http.c",0x17e)
    ;
    lVar8 = *param_4;
  }
  if (**(char **)(lVar8 + 0x10) == ':') {
    return (undefined1 *)0xfffffded;
  }
LAB_1455148f9:
  *(ushort *)(param_2 + 0xd2) = *(ushort *)(param_2 + 0xd2) | 0x40;
  return &DAT_ffffff97;
}



// FUNCTION 145514c70 FUN_145514c70 body=161 status=ok
// SIG undefined FUN_145514c70(void)

undefined8 FUN_145514c70(longlong param_1,longlong param_2)

{
  ushort uVar1;
  byte bVar2;
  
  uVar1 = *(ushort *)(param_1 + 0xd2);
  bVar2 = (byte)uVar1;
  if (((short)uVar1 < 0) || (-1 < (char)bVar2)) {
    if ((uVar1 & 0x11) == 0 || (bVar2 & 0xe) != 0xe) {
      return 0xffffffff;
    }
    if (((short)uVar1 < 0) && ((bVar2 & 0x81) != 0x81)) {
      return 0xffffffff;
    }
    if (((uVar1 & 0x2800) == 0x2000) && ((uVar1 & 0x1200) != 0x1200)) {
      return 0xffffffff;
    }
  }
  else {
    if (((uVar1 & 10) != 0) || ((uVar1 & 1) == 0)) {
      return 0xffffffff;
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
  }
  if (*(char *)(param_2 + 0xc) == '\x05') {
    *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
    *(ushort *)(param_1 + 0xd2) = uVar1 & 0x780;
  }
  return 0;
}



// FUNCTION 145514d20 FUN_145514d20 body=160 status=ok
// SIG undefined FUN_145514d20(void)

undefined8 FUN_145514d20(longlong param_1)

{
  ushort uVar1;
  short sVar2;
  
  uVar1 = *(ushort *)(param_1 + 0xd2);
  if ((uVar1 & 0x20) == 0) {
    return 0xffffffffffffffff;
  }
  sVar2 = *(short *)(param_1 + 0xd0);
  if ((int)sVar2 - 100U < 100) {
    *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
    *(undefined2 *)(param_1 + 0xd0) = 0xffff;
    *(ushort *)(param_1 + 0xd2) = uVar1 & 0x780 | 0x4000;
    return 0;
  }
  *(ushort *)(param_1 + 0xd2) = uVar1 & 0xbfff;
  if (((((uVar1 & 0xbfff) >> 8 & 1) == 0) && (sVar2 != 0x130)) && (sVar2 != 0xcc)) {
    if ((uVar1 & 0x480) != 0) {
      *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
      return 0;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return 0;
}



// FUNCTION 145514dc0 FUN_145514dc0 body=15 status=ok
// SIG undefined FUN_145514dc0(void)

int FUN_145514dc0(undefined8 param_1,longlong param_2)

{
  return ((*(byte *)(param_2 + 0xd) & 1) != 0) - 1;
}



// FUNCTION 145514dd0 FUN_145514dd0 body=39 status=ok
// SIG undefined FUN_145514dd0(void)

undefined8 FUN_145514dd0(longlong param_1)

{
  if (((*(ushort *)(param_1 + 0xd2) & 0x4000) == 0) &&
     ((*(longlong *)(param_1 + 0x30) == -1 ||
      (*(longlong *)(param_1 + 0x30) == *(longlong *)(param_1 + 0x38))))) {
    return 0;
  }
  return 0xffffffff;
}



// FUNCTION 145514e00 FUN_145514e00 body=49 status=ok
// SIG undefined FUN_145514e00(void)

undefined8 FUN_145514e00(longlong param_1,longlong param_2)

{
  param_2 = *(longlong *)(param_1 + 0x38) + param_2;
  *(longlong *)(param_1 + 0x38) = param_2;
  if (((*(ushort *)(param_1 + 0xd2) & 0x4000) == 0) &&
     ((*(longlong *)(param_1 + 0x30) == -1 || (param_2 <= *(longlong *)(param_1 + 0x30))))) {
    return 0;
  }
  return 0xffffffff;
}



// FUNCTION 145514e40 FUN_145514e40 body=232 status=ok
// SIG undefined FUN_145514e40(void)

void FUN_145514e40(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  if (*(char *)(param_2 + 0xc) == '\x01') {
    puVar4 = *(undefined8 **)(param_2 + 0x28);
    uVar5 = *(ulonglong *)(param_2 + 0x30);
  }
  else {
    if (*(char *)(param_2 + 0xc) != '\x05') {
      return;
    }
    puVar4 = *(undefined8 **)(param_2 + 0x18);
    uVar5 = *(ulonglong *)(param_2 + 0x20);
  }
  uVar3 = 0;
  if (uVar5 != 0) {
    while ((((puVar4[2] != 7 || (piVar1 = (int *)*puVar4, *(char *)((longlong)piVar1 + 6) != 'd'))
            || (*piVar1 != 0x74656d3a)) || ((short)piVar1[1] != 0x6f68))) {
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 5;
      if (uVar5 <= uVar3) {
        return;
      }
    }
    if (puVar4[3] == 7) {
      piVar1 = (int *)puVar4[1];
      if (((*piVar1 == 0x4e4e4f43) && ((short)piVar1[1] == 0x4345)) &&
         (*(char *)((longlong)piVar1 + 6) == 'T')) {
        *(ushort *)(param_1 + 0xd2) = *(ushort *)(param_1 + 0xd2) | 0x80;
        return;
      }
    }
    else if ((puVar4[3] == 4) && (iVar2 = memcmp(&DAT_149c0679c,(void *)puVar4[1],4), iVar2 == 0)) {
      *(ushort *)(param_1 + 0xd2) = *(ushort *)(param_1 + 0xd2) | 0x100;
    }
  }
  return;
}



// FUNCTION 145514f30 FUN_145514f30 body=127 status=ok
// SIG undefined FUN_145514f30(void)

undefined8 FUN_145514f30(longlong param_1,char *param_2,ulonglong param_3)

{
  char cVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  
  if (param_3 != 0) {
    pcVar2 = param_2;
    do {
      cVar3 = pcVar2[param_1 - (longlong)param_2];
      cVar1 = *pcVar2;
      cVar4 = cVar3 + ' ';
      if (0x19 < (byte)(cVar3 + 0xbfU)) {
        cVar4 = cVar3;
      }
      cVar3 = cVar1 + ' ';
      if (0x19 < (byte)(cVar1 + 0xbfU)) {
        cVar3 = cVar1;
      }
      if (cVar4 != cVar3) {
        return 0;
      }
      pcVar2 = pcVar2 + 1;
    } while ((ulonglong)((longlong)pcVar2 - (longlong)param_2) < param_3);
  }
  return 1;
}



// FUNCTION 145514fb0 FUN_145514fb0 body=118 status=ok
// SIG undefined FUN_145514fb0(void)

ulonglong FUN_145514fb0(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar3 = uVar1;
    if (param_2 == 0) {
      return 0;
    }
    while (((byte)(*(byte *)(uVar3 + param_1) - 0x30) < 10 && ((longlong)uVar1 < 0xccccccccccccccd))
          ) {
      lVar2 = (ulonglong)*(byte *)(uVar3 + param_1) - 0x30;
      if (0x7fffffffffffffff - lVar2 < (longlong)(uVar1 * 10)) {
        return 0xffffffffffffffff;
      }
      uVar1 = uVar1 * 10 + lVar2;
      uVar3 = uVar3 + 1;
      if (param_2 <= uVar3) {
        return uVar1;
      }
    }
  }
  return 0xffffffffffffffff;
}



// FUNCTION 145515030 FUN_145515030 body=102 status=ok
// SIG undefined FUN_145515030(void)

undefined8 FUN_145515030(longlong param_1,longlong param_2,ushort param_3)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if ((param_3 & *(ushort *)(param_1 + 0xd2)) == 0) {
    uVar3 = 0;
    uVar2 = *(ulonglong *)(*(longlong *)(param_2 + 8) + 0x18);
    if (uVar2 != 0) {
      do {
        cVar1 = *(char *)(uVar3 + *(longlong *)(*(longlong *)(param_2 + 8) + 0x10));
        if ((cVar1 != ' ') && (cVar1 != '\t')) {
          *(ushort *)(param_1 + 0xd2) = *(ushort *)(param_1 + 0xd2) | param_3;
          return 1;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar2);
    }
  }
  return 0;
}



// FUNCTION 1455150a0 FUN_1455150a0 body=899 status=ok
// SIG undefined FUN_1455150a0(void)

undefined8 FUN_1455150a0(longlong param_1,longlong *param_2,int param_3,int param_4)

{
  char cVar1;
  longlong lVar2;
  int *piVar3;
  char *pcVar4;
  ushort uVar5;
  int iVar6;
  longlong lVar7;
  char cVar8;
  char cVar9;
  char *pcVar10;
  bool bVar11;
  
  if (**(char **)(*param_2 + 0x10) == ':') {
    if (param_3 != 0) {
      return 0xfffffded;
    }
    if ((*(byte *)(param_1 + 0xd2) & 0x40) != 0) {
      return 0xfffffded;
    }
  }
  switch((int)param_2[2]) {
  case 0:
    iVar6 = FUN_145515030(param_1,param_2,1);
    bVar11 = iVar6 == 0;
    break;
  case 1:
    lVar7 = 4;
    iVar6 = FUN_145515030(param_1,param_2);
    if (iVar6 == 0) {
      return 0xfffffded;
    }
    lVar2 = param_2[1];
    if (*(longlong *)(lVar2 + 0x18) == lVar7) {
      if (**(int **)(lVar2 + 0x10) != 0x44414548) goto LAB_145515195;
      uVar5 = 0x100;
    }
    else {
      if (*(longlong *)(lVar2 + 0x18) != 7) goto LAB_145515195;
      piVar3 = *(int **)(lVar2 + 0x10);
      if (*(char *)((longlong)piVar3 + 6) == 'S') {
        if (((*piVar3 != 0x4954504f) || ((short)piVar3[1] != 0x4e4f)) ||
           (*(char *)((longlong)piVar3 + 6) != 'S')) goto LAB_145515195;
        uVar5 = 0x200;
      }
      else {
        if (((*(char *)((longlong)piVar3 + 6) != 'T') || (*piVar3 != 0x4e4e4f43)) ||
           (((short)piVar3[1] != 0x4345 || (*(char *)((longlong)piVar3 + 6) != 'T'))))
        goto LAB_145515195;
        if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
          return 0xfffffded;
        }
        uVar5 = 0x80;
      }
    }
    goto LAB_14551518e;
  default:
    bVar11 = **(char **)(*param_2 + 0x10) == ':';
    break;
  case 3:
    iVar6 = FUN_145515030(param_1,param_2,2);
    if (iVar6 == 0) {
      return 0xfffffded;
    }
    cVar8 = **(char **)(param_2[1] + 0x10);
    if (cVar8 == '/') {
      uVar5 = 0x800;
    }
    else {
      if ((*(longlong *)(param_2[1] + 0x18) != 1) || (cVar8 != '*')) goto LAB_145515195;
      uVar5 = 0x1000;
    }
    goto LAB_14551518e;
  case 5:
    iVar6 = FUN_145515030(param_1,param_2,8);
    if (iVar6 == 0) {
      return 0xfffffded;
    }
    lVar7 = param_2[1];
    if (*(longlong *)(lVar7 + 0x18) == 4) {
      pcVar4 = *(char **)(lVar7 + 0x10);
      pcVar10 = pcVar4;
      do {
        cVar8 = pcVar10[(longlong)&DAT_14997dd78 - (longlong)pcVar4];
        cVar1 = *pcVar10;
        cVar9 = cVar8 + ' ';
        if (0x19 < (byte)(cVar8 + 0xbfU)) {
          cVar9 = cVar8;
        }
        cVar8 = cVar1 + ' ';
        if (0x19 < (byte)(cVar1 + 0xbfU)) {
          cVar8 = cVar1;
        }
        if (cVar9 != cVar8) goto LAB_145515195;
        pcVar10 = pcVar10 + 1;
      } while ((ulonglong)((longlong)pcVar10 - (longlong)pcVar4) < 4);
      uVar5 = 0x2000;
    }
    else {
      if (*(longlong *)(lVar7 + 0x18) != 5) goto LAB_145515195;
      pcVar4 = *(char **)(lVar7 + 0x10);
      pcVar10 = pcVar4;
      do {
        cVar8 = pcVar10[(longlong)"https" - (longlong)pcVar4];
        cVar1 = *pcVar10;
        cVar9 = cVar8 + ' ';
        if (0x19 < (byte)(cVar8 + 0xbfU)) {
          cVar9 = cVar8;
        }
        cVar8 = cVar1 + ' ';
        if (0x19 < (byte)(cVar1 + 0xbfU)) {
          cVar8 = cVar1;
        }
        if (cVar9 != cVar8) goto LAB_145515195;
        pcVar10 = pcVar10 + 1;
      } while ((ulonglong)((longlong)pcVar10 - (longlong)pcVar4) < 5);
      uVar5 = 0x2000;
    }
LAB_14551518e:
    *(ushort *)(param_1 + 0xd2) = *(ushort *)(param_1 + 0xd2) | uVar5;
    goto LAB_145515195;
  case 0x1b:
    if (*(longlong *)(param_1 + 0x30) != -1) {
      return 0xfffffded;
    }
    lVar7 = FUN_145514fb0(*(undefined8 *)(param_2[1] + 0x10),*(undefined8 *)(param_2[1] + 0x18));
    *(longlong *)(param_1 + 0x30) = lVar7;
    bVar11 = lVar7 == -1;
    break;
  case 0x25:
    iVar6 = FUN_145515030(param_1,param_2,0x10);
    bVar11 = iVar6 == 0;
    break;
  case 0x38:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
    goto switchD_145515103_caseD_38;
  case 0x3d:
    if (*(longlong *)(param_2[1] + 0x18) != 8) {
      return 0xfffffded;
    }
    pcVar4 = *(char **)(param_2[1] + 0x10);
    pcVar10 = pcVar4;
    do {
      cVar8 = pcVar10[(longlong)"trailers" - (longlong)pcVar4];
      cVar1 = *pcVar10;
      cVar9 = cVar8 + ' ';
      if (0x19 < (byte)(cVar8 + 0xbfU)) {
        cVar9 = cVar8;
      }
      cVar8 = cVar1 + ' ';
      if (0x19 < (byte)(cVar1 + 0xbfU)) {
        cVar8 = cVar1;
      }
      if (cVar9 != cVar8) {
        return 0xfffffded;
      }
      pcVar10 = pcVar10 + 1;
    } while ((ulonglong)((longlong)pcVar10 - (longlong)pcVar4) < 8);
    goto LAB_145515195;
  case 0x42:
    if (param_4 == 0) {
      return 0xfffffded;
    }
    iVar6 = FUN_145515030(param_1,param_2,0x8000);
    bVar11 = iVar6 == 0;
  }
  if (bVar11) {
switchD_145515103_caseD_38:
    return 0xfffffded;
  }
LAB_145515195:
  if (**(char **)(*param_2 + 0x10) != ':') {
    *(ushort *)(param_1 + 0xd2) = *(ushort *)(param_1 + 0xd2) | 0x40;
  }
  return 0;
}



// FUNCTION 145515490 FUN_145515490 body=71 status=ok
// SIG undefined FUN_145515490(void)

void FUN_145515490(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar4 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar4 == 0; iVar4 = iVar4 + -1) {
    }
  }
  iVar6 = 0;
  iVar4 = iVar4 >> 1;
  uVar5 = 1 << ((byte)iVar4 & 0x1f);
  do {
    uVar3 = uVar5 + iVar6 * 2 << ((byte)iVar4 & 0x1f);
    iVar1 = uVar5 + iVar6;
    if (param_1 < uVar3) {
      iVar1 = iVar6;
    }
    iVar6 = iVar1;
    uVar5 = uVar5 >> 1;
    uVar2 = param_1 - uVar3;
    if (param_1 < uVar3) {
      uVar2 = param_1;
    }
    iVar4 = iVar4 + -1;
    param_1 = uVar2;
  } while (-1 < iVar4);
  return;
}



// FUNCTION 1455154d8 FUN_1455154d8 body=296 status=ok
// SIG undefined FUN_1455154d8(void)

void FUN_1455154d8(undefined8 param_1,uint *param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar5 = *param_2;
  iVar7 = 0;
  if (uVar5 != 0) {
    uVar1 = (int)uVar5 >> 0x1f;
    uVar6 = uVar1 + uVar5 ^ uVar1;
    uVar4 = (0x7fe0 - param_3) * (0x4000 - param_4);
    uVar5 = param_3;
    for (iVar3 = 1; (param_3 = uVar4 >> 0xf, param_3 != 0 && (iVar3 < (int)uVar6));
        iVar3 = iVar3 + 1) {
      uVar5 = uVar5 + 2 + param_3 * 2;
      uVar4 = param_3 * 2 * param_4;
    }
    if (param_3 == 0) {
      iVar7 = uVar6 - iVar3;
      iVar2 = ((int)((0x8000 - uVar1) - uVar5) >> 1) + -1;
      if (iVar7 < iVar2) {
        iVar2 = iVar7;
      }
      iVar7 = uVar5 + uVar1 + 1 + iVar2 * 2;
      param_3 = 0x8000 - iVar7;
      if (1 < param_3) {
        param_3 = 1;
      }
      *param_2 = iVar2 + iVar3 + uVar1 ^ uVar1;
    }
    else {
      param_3 = param_3 + 1;
      iVar7 = uVar5 + (~uVar1 & param_3);
    }
    if (0x8000 < iVar7 + param_3) {
      FUN_144bca940("assertion failed: fl+fs<=32768","../../../third_party/opus/src/celt/laplace.c",
                    0x58);
    }
    if (param_3 == 0) {
      FUN_144bca940("assertion failed: fs>0","../../../third_party/opus/src/celt/laplace.c",0x59);
    }
  }
  FUN_144f355fc(param_1,iVar7,iVar7 + param_3,0xf);
  return;
}



// FUNCTION 145515600 FUN_145515600 body=323 status=ok
// SIG undefined FUN_145515600(void)

int FUN_145515600(undefined8 param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar1 = FUN_144f2f4bc(param_1,0xf);
  uVar3 = 0;
  if (uVar1 < param_2) goto LAB_1455156b1;
  iVar4 = 1;
  uVar3 = ((0x7fe0 - param_2) * (0x4000 - param_3) >> 0xf) + 1;
  if (uVar3 < 2) {
LAB_145515678:
    uVar2 = uVar1 - param_2 >> 1;
    iVar4 = iVar4 + uVar2;
    uVar2 = param_2 + uVar2 * 2;
  }
  else {
    do {
      uVar2 = uVar3 * 2 + param_2;
      if (uVar1 < uVar2) break;
      iVar4 = iVar4 + 1;
      uVar3 = ((uVar3 * 2 + -2) * param_3 >> 0xf) + 1;
      param_2 = uVar2;
    } while (1 < uVar3);
    uVar2 = param_2;
    if (uVar3 < 2) goto LAB_145515678;
  }
  param_2 = uVar3;
  uVar3 = uVar2 + param_2;
  if (uVar1 < uVar3) {
    iVar4 = -iVar4;
    uVar3 = uVar2;
  }
  if (0x7fff < uVar3) {
    FUN_144bca940("assertion failed: fl<32768","../../../third_party/opus/src/celt/laplace.c",0x80);
  }
LAB_1455156b1:
  if (param_2 == 0) {
    FUN_144bca940("assertion failed: fs>0","../../../third_party/opus/src/celt/laplace.c",0x81);
  }
  if (uVar1 < uVar3) {
    FUN_144bca940("assertion failed: fl<=fm","../../../third_party/opus/src/celt/laplace.c",0x82);
  }
  uVar2 = 0x8000;
  if (uVar3 + param_2 < 0x8000) {
    uVar2 = uVar3 + param_2;
  }
  if (uVar2 <= uVar1) {
    FUN_144bca940("assertion failed: fm<IMIN(fl+fs,32768)",
                  "../../../third_party/opus/src/celt/laplace.c",0x83);
  }
  FUN_144f2f4fc(param_1,uVar3,uVar2,0x8000);
  return iVar4;
}



// FUNCTION 145515744 FUN_145515744 body=322 status=ok
// SIG undefined FUN_145515744(void)

void FUN_145515744(longlong param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  if (param_3 < 1) {
    FUN_144bca940("assertion failed: _k>0","../../../third_party/opus/src/celt/cwrs.c",0x1cb);
  }
  if (param_2 < 2) {
    FUN_144bca940("assertion failed: _n>=2","../../../third_party/opus/src/celt/cwrs.c",0x1bc);
  }
  iVar9 = param_2 + -1;
  puVar4 = (uint *)(param_1 + (longlong)iVar9 * 4);
  uVar3 = (int)*puVar4 >> 0x1f;
  uVar8 = *puVar4 >> 0x1f;
  iVar5 = (*puVar4 ^ uVar3) - uVar3;
  iVar6 = param_2 - iVar9;
  do {
    puVar4 = puVar4 + -1;
    iVar9 = iVar9 + -1;
    iVar7 = iVar6 + 1;
    iVar1 = iVar5;
    if (iVar7 < iVar5) {
      iVar1 = iVar7;
    }
    iVar2 = iVar5;
    if (iVar5 < iVar7) {
      iVar2 = iVar7;
    }
    uVar8 = uVar8 + *(int *)((&PTR_DAT_149d9f760)[iVar1] + (longlong)iVar2 * 4);
    uVar3 = (int)*puVar4 >> 0x1f;
    iVar5 = iVar5 + ((*puVar4 ^ uVar3) - uVar3);
    if ((int)*puVar4 < 0) {
      iVar1 = iVar5;
      if (iVar7 < iVar5 + 1) {
        iVar1 = iVar6;
      }
      iVar2 = iVar5;
      if (iVar5 + 1 < iVar7) {
        iVar2 = iVar6;
      }
      uVar8 = uVar8 + *(int *)((&PTR_DAT_149d9f768)[iVar1] + (longlong)iVar2 * 4 + 4);
    }
    iVar6 = iVar7;
  } while (0 < iVar9);
  iVar6 = param_3 + 1;
  iVar5 = iVar6;
  if (param_2 < iVar6) {
    iVar5 = param_2;
  }
  if (iVar6 < param_2) {
    iVar6 = param_2;
  }
  iVar9 = param_3;
  if (param_2 < param_3) {
    iVar9 = param_2;
  }
  if (param_3 < param_2) {
    param_3 = param_2;
  }
  FUN_144f35770(param_4,uVar8,
                *(int *)((&PTR_DAT_149d9f760)[iVar5] + (longlong)iVar6 * 4) +
                *(int *)((&PTR_DAT_149d9f760)[iVar9] + (longlong)param_3 * 4));
  return;
}



// FUNCTION 145515888 FUN_145515888 body=148 status=ok
// SIG undefined FUN_145515888(void)

void FUN_145515888(undefined8 param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = param_3 + 1;
  iVar1 = iVar5;
  if (param_2 < iVar5) {
    iVar1 = param_2;
  }
  if (iVar5 < param_2) {
    iVar5 = param_2;
  }
  iVar2 = param_3;
  if (param_2 < param_3) {
    iVar2 = param_2;
  }
  iVar3 = param_3;
  if (param_3 < param_2) {
    iVar3 = param_2;
  }
  uVar4 = FUN_144f2f5c4(param_4,*(int *)((&PTR_DAT_149d9f760)[iVar1] + (longlong)iVar5 * 4) +
                                *(int *)((&PTR_DAT_149d9f760)[iVar2] + (longlong)iVar3 * 4));
  FUN_14551591c(param_2,param_3,uVar4,param_1);
  return;
}



// FUNCTION 14551591c FUN_14551591c body=499 status=ok
// SIG undefined FUN_14551591c(void)

float FUN_14551591c(int param_1,ulonglong param_2,uint param_3,int *param_4)

{
  undefined *puVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  undefined **ppuVar11;
  short sVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar15 = 0.0;
  uVar7 = (ulonglong)param_1;
  iVar4 = (int)param_2;
  param_2 = param_2 & 0xffffffff;
  if (iVar4 < 1) {
    FUN_144bca940("assertion failed: _k>0","../../../third_party/opus/src/celt/cwrs.c",0x1d5);
  }
  if (param_1 < 2) {
    FUN_144bca940("assertion failed: _n>1","../../../third_party/opus/src/celt/cwrs.c",0x1d6);
  }
  if (2 < param_1) {
    lVar9 = uVar7 << 2;
    ppuVar11 = &PTR_DAT_149d9f760 + uVar7;
    do {
      lVar5 = (longlong)(int)param_2;
      sVar12 = (short)param_2;
      if ((int)param_2 < (int)uVar7) {
        uVar10 = *(uint *)((&PTR_DAT_149d9f768)[lVar5] + lVar9);
        if ((param_3 < *(uint *)((&PTR_DAT_149d9f760)[lVar5] + lVar9)) || (uVar10 <= param_3)) {
          uVar8 = (param_3 < uVar10) - 1;
          param_3 = param_3 - (uVar10 & uVar8);
          do {
            uVar10 = (int)param_2 - 1;
            param_2 = (ulonglong)uVar10;
          } while (param_3 < *(uint *)((&PTR_DAT_149d9f760)[(int)uVar10] + lVar9));
          param_3 = param_3 - *(uint *)((&PTR_DAT_149d9f760)[(int)uVar10] + lVar9);
          uVar3 = (ushort)uVar8;
          sVar2 = uVar3 - (short)uVar10;
          goto LAB_145515a55;
        }
        param_3 = param_3 - *(uint *)((&PTR_DAT_149d9f760)[lVar5] + lVar9);
        iVar6 = 0;
      }
      else {
        puVar1 = *ppuVar11;
        uVar10 = (param_3 < *(uint *)(puVar1 + lVar5 * 4 + 4)) - 1;
        param_3 = param_3 - (uVar10 & *(uint *)(puVar1 + lVar5 * 4 + 4));
        if (param_3 < *(uint *)(puVar1 + lVar9)) {
          param_2 = uVar7 & 0xffffffff;
          do {
            uVar8 = (int)param_2 - 1;
            param_2 = (ulonglong)uVar8;
            uVar8 = *(uint *)((&PTR_DAT_149d9f760)[(int)uVar8] + lVar9);
          } while (param_3 < uVar8);
        }
        else {
          for (uVar8 = *(uint *)(puVar1 + lVar5 * 4); param_3 < uVar8;
              uVar8 = *(uint *)(puVar1 + (longlong)(int)uVar8 * 4)) {
            uVar8 = (int)param_2 - 1;
            param_2 = (ulonglong)uVar8;
          }
        }
        uVar3 = (ushort)uVar10;
        param_3 = param_3 - uVar8;
        sVar2 = uVar3 - (short)param_2;
LAB_145515a55:
        iVar6 = (int)(short)(sVar2 + sVar12 ^ uVar3);
        fVar15 = (float)iVar6 * (float)iVar6 + fVar15;
      }
      iVar4 = (int)param_2;
      *param_4 = iVar6;
      uVar10 = (int)uVar7 - 1;
      uVar7 = (ulonglong)uVar10;
      param_4 = param_4 + 1;
      ppuVar11 = ppuVar11 + -1;
      lVar9 = lVar9 + -4;
    } while (2 < (int)uVar10);
  }
  uVar10 = iVar4 * 2 + 1;
  uVar8 = (param_3 < uVar10) - 1;
  iVar6 = param_3 - (uVar8 & uVar10);
  uVar10 = iVar6 + 1U >> 1;
  if (uVar10 != 0) {
    iVar6 = iVar6 + uVar10 * -2 + 1;
  }
  uVar3 = (ushort)uVar8;
  iVar4 = (int)(short)((uVar3 - (short)uVar10) + (short)iVar4 ^ uVar3);
  *param_4 = iVar4;
  fVar13 = (float)iVar4;
  iVar4 = (int)(short)((short)uVar10 + -(short)iVar6 ^ -(short)iVar6);
  param_4[1] = iVar4;
  fVar14 = (float)iVar4;
  return fVar13 * fVar13 + fVar15 + fVar14 * fVar14;
}



// FUNCTION 145515b10 FUN_145515b10 body=1066 status=ok
// SIG undefined FUN_145515b10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145515b10(void *param_1,uint *param_2,uint param_3,int param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  float *pfVar3;
  longlong lVar4;
  float *pfVar5;
  undefined1 (*_Dst) [16];
  short sVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  void *pvVar10;
  void *pvVar11;
  void *pvVar12;
  void *pvVar13;
  ulonglong uVar14;
  undefined1 (*pauVar15) [16];
  longlong lVar16;
  longlong lVar17;
  uint *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  size_t _Size;
  int iVar21;
  int iVar27;
  int iVar28;
  int iVar29;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  uint uVar31;
  uint uVar38;
  uint uVar40;
  undefined1 in_XMM1 [16];
  undefined1 auVar32 [16];
  uint uVar41;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined1 auVar57 [16];
  undefined1 auVar61 [16];
  undefined8 auStack_d0 [5];
  float local_a8 [2];
  undefined8 local_a0;
  ulonglong local_98;
  short sVar30;
  short sVar36;
  short sVar37;
  short sVar39;
  
  local_98 = DAT_14c707940 ^ (ulonglong)local_a8;
  lVar17 = (longlong)param_4;
  lVar4 = lVar17 * 4;
  uVar19 = lVar4 + 0xc;
  uVar14 = lVar4 + 0x1b;
  if (uVar14 <= uVar19) {
    uVar14 = 0xffffffffffffff0;
  }
  auStack_d0[0] = 0x145515b9c;
  lVar7 = -(uVar14 & 0xfffffffffffffff0);
  uVar14 = lVar4 + 0x1b;
  pfVar5 = (float *)((longlong)local_a8 + lVar7);
  if (uVar14 <= uVar19) {
    uVar14 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_d0 + lVar7) = 0x145515bb9;
  lVar8 = -(uVar14 & 0xfffffffffffffff0);
  uVar14 = lVar4 + 0x1b;
  _Dst = (undefined1 (*) [16])((longlong)local_a8 + lVar8 + lVar7);
  if (uVar14 <= uVar19) {
    uVar14 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_d0 + lVar8 + lVar7) = 0x145515bd6;
  lVar4 = -(uVar14 & 0xfffffffffffffff0);
  _Size = lVar17 * 4;
  local_a0 = (longlong)local_a8 + lVar4 + lVar8 + lVar7;
  *(undefined8 *)((longlong)auStack_d0 + lVar4 + lVar8 + lVar7) = 0x145515bf7;
  memcpy(_Dst,param_1,_Size);
  *(undefined4 *)((longlong)&local_a0 + lVar17 * 4 + lVar8 + lVar7) = 0;
  *(undefined4 *)((longlong)local_a8 + lVar17 * 4 + lVar8 + lVar7 + 4) = 0;
  fVar44 = 0.0;
  fVar47 = 0.0;
  fVar50 = 0.0;
  fVar53 = 0.0;
  *(undefined4 *)((longlong)*_Dst + _Size) = 0;
  lVar16 = local_a0;
  if (0 < param_4) {
    lVar20 = local_a0 - (longlong)_Dst;
    uVar14 = (ulonglong)((param_4 - 1U >> 2) + 1);
    pauVar15 = _Dst;
    do {
      fVar45 = *(float *)*pauVar15;
      fVar48 = *(float *)((longlong)*pauVar15 + 4);
      uVar19 = *(ulonglong *)*pauVar15;
      fVar51 = *(float *)((longlong)*pauVar15 + 8);
      fVar55 = *(float *)((longlong)*pauVar15 + 0xc);
      puVar1 = (undefined8 *)(((longlong)pfVar5 - (longlong)_Dst) + (longlong)pauVar15);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)_Dst) + (longlong)pauVar15);
      *puVar1 = 0;
      puVar1[1] = 0;
      in_XMM1._0_8_ = uVar19 & 0x7fffffff7fffffff;
      in_XMM1._8_4_ = ABS(fVar51);
      in_XMM1._12_4_ = ABS(fVar55);
      *pauVar15 = in_XMM1;
      piVar2 = (int *)(lVar20 + (longlong)pauVar15);
      *piVar2 = -(uint)(fVar45 < 0.0);
      piVar2[1] = -(uint)(fVar48 < 0.0);
      piVar2[2] = -(uint)(fVar51 < 0.0);
      piVar2[3] = -(uint)(fVar55 < 0.0);
      pauVar15 = pauVar15 + 1;
      fVar44 = fVar44 + ABS(fVar45);
      fVar47 = fVar47 + ABS(fVar48);
      fVar50 = fVar50 + in_XMM1._8_4_;
      fVar53 = fVar53 + in_XMM1._12_4_;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  local_a8[0] = 0.0;
  auVar32 = ZEXT816(0);
  fVar45 = fVar44 + fVar50 + fVar47 + fVar53;
  fVar48 = fVar47 + fVar53 + fVar44 + fVar50;
  fVar51 = fVar50 + fVar44 + fVar53 + fVar47;
  fVar44 = fVar53 + fVar47 + fVar50 + fVar44;
  if (param_4 >> 1 < (int)param_3) {
    if ((fVar45 <= 1e-15) || (64.0 <= fVar45)) {
      *(undefined4 *)*_Dst = 0x3f800000;
      lVar20 = 1;
      do {
        *(undefined4 *)((longlong)*_Dst + lVar20 * 4) = 0;
        lVar20 = lVar20 + 1;
      } while (lVar20 < lVar17);
      fVar45 = 1.0;
      fVar48 = 1.0;
      fVar51 = 1.0;
      fVar44 = 1.0;
    }
    fVar47 = 0.0;
    fVar50 = 0.0;
    fVar53 = 0.0;
    fVar55 = 0.0;
    fVar56 = 0.0;
    fVar58 = 0.0;
    fVar59 = 0.0;
    fVar60 = 0.0;
    iVar21 = 0;
    iVar27 = 0;
    iVar28 = 0;
    iVar29 = 0;
    auVar57._4_4_ = fVar48;
    auVar57._0_4_ = fVar45;
    auVar57._8_4_ = fVar51;
    auVar57._12_4_ = fVar44;
    auVar32 = rcpps(in_XMM1,auVar57);
    fVar44 = (float)(int)param_3 + 0.8;
    if (0 < param_4) {
      uVar14 = (ulonglong)((param_4 - 1U >> 2) + 1);
      puVar18 = param_2;
      do {
        pfVar3 = (float *)(((longlong)_Dst - (longlong)param_2) + (longlong)puVar18);
        fVar45 = *pfVar3;
        fVar48 = pfVar3[1];
        fVar51 = pfVar3[2];
        fVar9 = pfVar3[3];
        uVar31 = (uint)(fVar45 * fVar44 * auVar32._0_4_);
        uVar38 = (uint)(fVar48 * fVar44 * auVar32._4_4_);
        uVar40 = (uint)(fVar51 * fVar44 * auVar32._8_4_);
        uVar41 = (uint)(fVar9 * fVar44 * auVar32._12_4_);
        fVar46 = (float)(int)uVar31;
        fVar49 = (float)(int)uVar38;
        fVar52 = (float)(int)uVar40;
        fVar54 = (float)(int)uVar41;
        *puVar18 = uVar31;
        puVar18[1] = uVar38;
        puVar18[2] = uVar40;
        puVar18[3] = uVar41;
        iVar21 = uVar31 + iVar21;
        iVar27 = uVar38 + iVar27;
        iVar28 = uVar40 + iVar28;
        iVar29 = uVar41 + iVar29;
        fVar56 = fVar56 + fVar46 * fVar45;
        fVar58 = fVar58 + fVar49 * fVar48;
        fVar59 = fVar59 + fVar52 * fVar51;
        fVar60 = fVar60 + fVar54 * fVar9;
        pfVar3 = (float *)(((longlong)pfVar5 - (longlong)param_2) + (longlong)puVar18);
        *pfVar3 = fVar46 + fVar46;
        pfVar3[1] = fVar49 + fVar49;
        pfVar3[2] = fVar52 + fVar52;
        pfVar3[3] = fVar54 + fVar54;
        puVar18 = puVar18 + 4;
        fVar47 = fVar47 + fVar46 * fVar46;
        fVar50 = fVar50 + fVar49 * fVar49;
        fVar53 = fVar53 + fVar52 * fVar52;
        fVar55 = fVar55 + fVar54 * fVar54;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    param_3 = param_3 - (iVar29 + iVar27 + iVar28 + iVar21);
    local_a8[0] = fVar58 + fVar60 + fVar56 + fVar59;
    auVar32._4_4_ = fVar47 + fVar53 + fVar50 + fVar55;
    auVar32._0_4_ = fVar50 + fVar55 + fVar47 + fVar53;
    auVar32._8_4_ = fVar55 + fVar50 + fVar53 + fVar47;
    auVar32._12_4_ = fVar53 + fVar47 + fVar55 + fVar50;
  }
  fVar44 = local_a8[0];
  *(undefined4 *)((longlong)&local_a0 + lVar17 * 4 + lVar8 + lVar7) = 0xc2c80000;
  *(undefined4 *)((longlong)local_a8 + lVar17 * 4 + lVar8 + lVar7 + 4) = 0xc2c80000;
  *(undefined4 *)((longlong)*_Dst + _Size) = 0xc2c80000;
  *(undefined4 *)((longlong)&local_a0 + lVar17 * 4 + lVar7) = 0x42c80000;
  *(undefined4 *)((longlong)local_a8 + lVar17 * 4 + lVar7 + 4) = 0x42c80000;
  pfVar5[lVar17] = 100.0;
  if (param_4 + 3 < (int)param_3) {
    fVar50 = (float)(int)param_3;
    fVar47 = *pfVar5;
    *param_2 = *param_2 + param_3;
    param_3 = 0;
    auVar32 = ZEXT416((uint)(fVar50 * fVar50 + auVar32._0_4_ + fVar50 * fVar47));
  }
  if (0 < (int)param_3) {
    uVar14 = (ulonglong)param_3;
    do {
      auVar57 = ZEXT816(0);
      auVar43 = ZEXT816(0);
      auVar42._4_12_ = auVar32._4_12_;
      auVar42._0_4_ = auVar32._0_4_ + 1.0;
      local_a0 = CONCAT44(local_a0._4_4_,auVar42._0_4_);
      if (0 < param_4) {
        uVar19 = (ulonglong)((param_4 - 1U >> 2) + 1);
        pauVar15 = _Dst;
        auVar33 = auVar42;
        auVar24 = _DAT_1499314d0;
        auVar25 = auVar43;
        do {
          pfVar3 = (float *)((longlong)pauVar15 + ((longlong)pfVar5 - (longlong)_Dst));
          pvVar10 = *pauVar15;
          pvVar11 = *pauVar15;
          pvVar12 = *pauVar15;
          pvVar13 = *pauVar15;
          pauVar15 = pauVar15 + 1;
          auVar22._0_4_ = *pfVar3 + auVar42._0_4_;
          auVar22._4_4_ = pfVar3[1] + auVar42._0_4_;
          auVar22._8_4_ = pfVar3[2] + auVar42._0_4_;
          auVar22._12_4_ = pfVar3[3] + auVar42._0_4_;
          auVar43 = rsqrtps(auVar33,auVar22);
          auVar33._0_4_ = auVar43._0_4_ * (*(float *)pvVar10 + local_a8[0]);
          auVar33._4_4_ = auVar43._4_4_ * (*(float *)((longlong)pvVar11 + 4) + local_a8[0]);
          auVar33._8_4_ = auVar43._8_4_ * (*(float *)((longlong)pvVar12 + 8) + local_a8[0]);
          auVar33._12_4_ = auVar43._12_4_ * (*(float *)((longlong)pvVar13 + 0xc) + local_a8[0]);
          auVar23._4_4_ = -(uint)(auVar57._4_4_ < auVar33._4_4_);
          auVar23._0_4_ = -(uint)(auVar57._0_4_ < auVar33._0_4_);
          auVar23._8_4_ = -(uint)(auVar57._8_4_ < auVar33._8_4_);
          auVar23._12_4_ = -(uint)(auVar57._12_4_ < auVar33._12_4_);
          auVar23 = auVar23 & auVar24;
          auVar61._0_4_ = auVar24._0_4_ + 4;
          auVar61._4_4_ = auVar24._4_4_ + 4;
          auVar61._8_4_ = auVar24._8_4_ + 4;
          auVar61._12_4_ = auVar24._12_4_ + 4;
          sVar6 = auVar23._0_2_;
          sVar30 = auVar25._0_2_;
          auVar43._0_2_ = (ushort)(sVar30 < sVar6) * sVar6 | (ushort)(sVar30 >= sVar6) * sVar30;
          sVar6 = auVar23._2_2_;
          sVar30 = auVar25._2_2_;
          auVar43._2_2_ = (ushort)(sVar30 < sVar6) * sVar6 | (ushort)(sVar30 >= sVar6) * sVar30;
          sVar6 = auVar23._4_2_;
          sVar30 = auVar25._4_2_;
          auVar43._4_2_ = (ushort)(sVar30 < sVar6) * sVar6 | (ushort)(sVar30 >= sVar6) * sVar30;
          sVar6 = auVar23._6_2_;
          sVar30 = auVar25._6_2_;
          auVar43._6_2_ = (ushort)(sVar30 < sVar6) * sVar6 | (ushort)(sVar30 >= sVar6) * sVar30;
          sVar6 = auVar23._8_2_;
          sVar30 = auVar25._8_2_;
          auVar43._8_2_ = (ushort)(sVar30 < sVar6) * sVar6 | (ushort)(sVar30 >= sVar6) * sVar30;
          sVar6 = auVar23._10_2_;
          sVar30 = auVar25._10_2_;
          auVar43._10_2_ = (ushort)(sVar30 < sVar6) * sVar6 | (ushort)(sVar30 >= sVar6) * sVar30;
          sVar6 = auVar23._12_2_;
          sVar30 = auVar25._12_2_;
          sVar36 = auVar25._14_2_;
          auVar43._12_2_ = (ushort)(sVar30 < sVar6) * sVar6 | (ushort)(sVar30 >= sVar6) * sVar30;
          sVar6 = auVar23._14_2_;
          auVar43._14_2_ = (ushort)(sVar36 < sVar6) * sVar6 | (ushort)(sVar36 >= sVar6) * sVar36;
          auVar57 = maxps(auVar57,auVar33);
          uVar19 = uVar19 - 1;
          auVar24 = auVar61;
          auVar25 = auVar43;
        } while (uVar19 != 0);
      }
      auVar24._0_8_ = auVar57._8_8_;
      auVar24._8_4_ = auVar57._0_4_;
      auVar24._12_4_ = auVar57._4_4_;
      auVar33 = maxps(auVar57,auVar24);
      auVar25._4_4_ = auVar33._0_4_;
      auVar25._0_4_ = auVar33._4_4_;
      auVar25._8_4_ = auVar33._12_4_;
      auVar25._12_4_ = auVar33._8_4_;
      auVar33 = maxps(auVar33,auVar25);
      auVar34._4_4_ = -(uint)(auVar33._4_4_ == auVar57._4_4_);
      auVar34._0_4_ = -(uint)(auVar33._0_4_ == auVar57._0_4_);
      auVar34._8_4_ = -(uint)(auVar33._8_4_ == auVar57._8_4_);
      auVar34._12_4_ = -(uint)(auVar33._12_4_ == auVar57._12_4_);
      auVar34 = auVar34 & auVar43;
      auVar26._8_8_ = auVar34._8_8_;
      auVar26._0_8_ = auVar26._8_8_;
      sVar6 = auVar34._8_2_;
      sVar30 = auVar34._0_2_;
      auVar35._0_2_ = (ushort)(sVar30 < sVar6) * sVar6 | (ushort)(sVar30 >= sVar6) * sVar30;
      sVar30 = auVar34._10_2_;
      sVar36 = auVar34._2_2_;
      auVar35._2_2_ = (ushort)(sVar36 < sVar30) * sVar30 | (ushort)(sVar36 >= sVar30) * sVar36;
      sVar36 = auVar34._12_2_;
      sVar37 = auVar34._4_2_;
      auVar35._4_2_ = (ushort)(sVar37 < sVar36) * sVar36 | (ushort)(sVar37 >= sVar36) * sVar37;
      sVar37 = auVar34._14_2_;
      sVar39 = auVar34._6_2_;
      auVar35._6_2_ = (ushort)(sVar39 < sVar37) * sVar37 | (ushort)(sVar39 >= sVar37) * sVar39;
      auVar35._8_2_ = sVar6;
      auVar35._10_2_ = sVar30;
      auVar35._12_2_ = sVar36;
      auVar35._14_2_ = sVar37;
      auVar57 = pshuflw(auVar26,auVar35,0x4e);
      sVar6 = auVar57._0_2_;
      sVar30 = auVar57._2_2_;
      lVar17 = (longlong)
               CONCAT22((ushort)((short)auVar35._2_2_ < sVar30) * sVar30 |
                        ((short)auVar35._2_2_ >= sVar30) * auVar35._2_2_,
                        (ushort)((short)auVar35._0_2_ < sVar6) * sVar6 |
                        ((short)auVar35._0_2_ >= sVar6) * auVar35._0_2_);
      fVar44 = fVar44 + *(float *)((longlong)*_Dst + lVar17 * 4);
      local_a8[0] = fVar44;
      auVar32._0_4_ = auVar42._0_4_ + pfVar5[lVar17];
      pfVar5[lVar17] = pfVar5[lVar17] + 2.0;
      param_2[lVar17] = param_2[lVar17] + 1;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  if (0 < param_4) {
    lVar16 = lVar16 - (longlong)param_2;
    uVar14 = (ulonglong)((param_4 - 1U >> 2) + 1);
    do {
      puVar18 = (uint *)(lVar16 + (longlong)param_2);
      uVar31 = puVar18[1];
      uVar38 = puVar18[2];
      uVar40 = puVar18[3];
      *param_2 = *param_2 + *puVar18 ^ *puVar18;
      param_2[1] = param_2[1] + uVar31 ^ uVar31;
      param_2[2] = param_2[2] + uVar38 ^ uVar38;
      param_2[3] = param_2[3] + uVar40 ^ uVar40;
      param_2 = param_2 + 4;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  uVar14 = local_98 ^ (ulonglong)local_a8;
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)auStack_d0 + lVar4 + lVar8 + lVar7) = &UNK_145515f3a;
  FUN_144d8e3a0(uVar14);
}



// FUNCTION 145515f7c FUN_145515f7c body=522 status=ok
// SIG undefined FUN_145515f7c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145515f7c(longlong param_1,undefined2 *param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined2 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  undefined8 auStack_80 [5];
  undefined4 local_58;
  short local_54 [2];
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_48;
  longlong lStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)&local_58;
  uVar3 = (longlong)(*(int *)(param_1 + 0x10c) * 2 + 8) * 2;
  uVar10 = uVar3 + 0xf;
  if (uVar10 <= uVar3) {
    uVar10 = 0xffffffffffffff0;
  }
  auStack_80[0] = 0x145515ff0;
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  uVar7 = *(undefined4 *)(param_1 + 0x20);
  uVar8 = *(undefined4 *)(param_1 + 0x24);
  lVar4 = -(uVar10 & 0xfffffffffffffff0);
  puVar2 = (undefined4 *)((longlong)&local_58 + lVar4);
  local_58 = param_4;
  local_48 = param_3;
  lStack_40 = param_1;
  *puVar2 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)local_54 + lVar4) = uVar6;
  *(undefined4 *)((longlong)&local_50 + lVar4) = uVar7;
  *(undefined4 *)((longlong)&local_4c + lVar4) = uVar8;
  local_50 = *(int *)(param_1 + 0x110);
  while( true ) {
    iVar5 = param_4;
    if (*(int *)(param_1 + 0x10c) <= param_4) {
      iVar5 = *(int *)(param_1 + 0x10c);
    }
    local_4c = iVar5;
    *(undefined8 *)((longlong)auStack_80 + lVar4) = 0x145516030;
    FUN_145516960(param_1,(longlong)&local_48 + lVar4,param_3,iVar5);
    local_54[0] = 0;
    local_54[1] = 0;
    iVar14 = iVar5;
    if (0 < iVar5 * 0x20000) {
      iVar15 = 0;
      do {
        lVar13 = (longlong)iVar15 >> 0x10;
        lVar12 = (longlong)(((longlong)iVar15 & 0xffffU) * 0xc) >> 0x10;
        lVar11 = 0xb - lVar12;
        iVar14 = ((int)*(short *)(&DAT_149d9f9a2 + lVar11 * 8) *
                  (int)*(short *)((longlong)&local_4c + lVar13 * 2 + lVar4) +
                  (int)*(short *)(&DAT_149d9f9a0 + lVar11 * 8) *
                  (int)*(short *)((longlong)&local_4c + lVar13 * 2 + lVar4 + 2) +
                  (int)*(short *)(&DAT_149d9f9a4 + lVar11 * 8) *
                  (int)*(short *)((longlong)&local_50 + lVar13 * 2 + lVar4 + 2) +
                  (int)*(short *)(&DAT_149d9f9a6 + lVar11 * 8) *
                  (int)*(short *)((longlong)&local_50 + lVar13 * 2 + lVar4) +
                  (int)*(short *)(&DAT_149d9f9a6 + lVar12 * 8) *
                  (int)*(short *)((longlong)local_54 + lVar13 * 2 + lVar4 + 2) +
                  (int)*(short *)(&DAT_149d9f9a4 + lVar12 * 8) *
                  (int)*(short *)((longlong)local_54 + lVar13 * 2 + lVar4) +
                  (int)*(short *)(&DAT_149d9f9a2 + lVar12 * 8) *
                  (int)*(short *)((longlong)&local_58 + lVar13 * 2 + lVar4 + 2) +
                  (int)*(short *)(&DAT_149d9f9a0 + lVar12 * 8) *
                  (int)*(short *)((longlong)puVar2 + lVar13 * 2) >> 0xe) + 1 >> 1;
        uVar9 = (undefined2)iVar14;
        if (iVar14 < -0x8000) {
          uVar9 = 0x8000;
        }
        if (0x7fff < iVar14) {
          uVar9 = 0x7fff;
        }
        iVar15 = iVar15 + local_50;
        *param_2 = uVar9;
        param_2 = param_2 + 1;
        param_1 = lStack_40;
        param_3 = local_48;
        param_4 = local_58;
        iVar14 = local_4c;
      } while (iVar15 < iVar5 * 0x20000);
    }
    param_4 = param_4 - iVar14;
    local_58 = param_4;
    param_3 = param_3 + (longlong)iVar14 * 2;
    local_48 = param_3;
    puVar1 = (undefined4 *)((longlong)puVar2 + (longlong)(iVar14 * 2) * 2);
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    if (param_4 < 1) break;
    *puVar2 = *puVar1;
    *(undefined4 *)((longlong)local_54 + lVar4) = uVar6;
    *(undefined4 *)((longlong)&local_50 + lVar4) = uVar7;
    *(undefined4 *)((longlong)&local_4c + lVar4) = uVar8;
  }
  *(undefined4 *)(param_1 + 0x18) = *puVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar6;
  *(undefined4 *)(param_1 + 0x20) = uVar7;
  *(undefined4 *)(param_1 + 0x24) = uVar8;
  uVar10 = local_38 ^ (ulonglong)&local_58;
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)auStack_80 + lVar4) = &UNK_145516186;
  FUN_144d8e3a0(uVar10);
}



// FUNCTION 1455161a0 FUN_1455161a0 body=323 status=ok
// SIG undefined FUN_1455161a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455161a0(longlong param_1,undefined8 param_2,longlong param_3,int param_4)

{
  undefined1 *_Dst;
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  void *_Dst_00;
  ulonglong uVar7;
  int iVar8;
  size_t _Size;
  ulonglong uVar9;
  undefined8 auStack_90 [5];
  int aiStack_68 [8];
  undefined1 local_48 [8];
  undefined8 local_40;
  void *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)local_48;
  iVar8 = *(int *)(param_1 + 0x114);
  uVar7 = (longlong)(*(int *)(param_1 + 0x10c) + iVar8) * 4;
  uVar9 = uVar7 + 0xf;
  if (uVar9 <= uVar7) {
    uVar9 = 0xffffffffffffff0;
  }
  auStack_90[0] = 0x14551620e;
  lVar6 = -(uVar9 & 0xfffffffffffffff0);
  _Dst = local_48 + lVar6;
  local_40 = param_2;
  local_38 = (void *)(param_1 + 0x18);
  *(undefined8 *)((longlong)auStack_90 + lVar6) = 0x145516230;
  memcpy(_Dst,(void *)(param_1 + 0x18),(longlong)iVar8 << 2);
  lVar4 = *(longlong *)(param_1 + 0x128);
  uVar1 = *(undefined4 *)(param_1 + 0x110);
  while( true ) {
    uVar5 = *(undefined8 *)(param_1 + 0x128);
    iVar8 = param_4;
    if (*(int *)(param_1 + 0x10c) <= param_4) {
      iVar8 = *(int *)(param_1 + 0x10c);
    }
    iVar2 = *(int *)(param_1 + 0x114);
    *(int *)((longlong)aiStack_68 + lVar6) = iVar8;
    *(undefined8 *)((longlong)auStack_90 + lVar6) = 0x14551626e;
    FUN_1455dd270(param_1,_Dst + (longlong)iVar2 * 4,param_3,uVar5);
    uVar5 = local_40;
    uVar3 = *(undefined4 *)(param_1 + 0x114);
    *(undefined4 *)((longlong)aiStack_68 + lVar6 + 0x10) = uVar1;
    *(int *)((longlong)aiStack_68 + lVar6 + 8) = iVar8 << 0x10;
    *(undefined4 *)((longlong)aiStack_68 + lVar6) = *(undefined4 *)(param_1 + 0x118);
    *(undefined8 *)((longlong)auStack_90 + lVar6) = 0x14551629d;
    local_40 = FUN_145516300(uVar5,_Dst,lVar4 + 4,uVar3);
    _Dst_00 = local_38;
    param_4 = param_4 - iVar8;
    _Size = (longlong)*(int *)(param_1 + 0x114) << 2;
    param_3 = param_3 + (longlong)iVar8 * 2;
    if (param_4 < 2) break;
    *(undefined8 *)((longlong)auStack_90 + lVar6) = 0x1455162c9;
    memcpy(_Dst,_Dst + (longlong)iVar8 * 4,_Size);
  }
  *(undefined8 *)((longlong)auStack_90 + lVar6) = 0x1455162d7;
  memcpy(_Dst_00,_Dst + (longlong)iVar8 * 4,_Size);
  uVar9 = local_30 ^ (ulonglong)local_48;
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)auStack_90 + lVar6) = &UNK_1455162e3;
  FUN_144d8e3a0(uVar9);
}



// FUNCTION 145516300 FUN_145516300 body=1623 status=ok
// SIG undefined FUN_145516300(void)

undefined2 *
FUN_145516300(undefined2 *param_1,longlong param_2,short *param_3,int param_4,int param_5,
             int param_6,int param_7)

{
  undefined2 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_4 == 0x12) {
    iVar3 = 0;
    if (0 < param_6) {
      do {
        lVar6 = (longlong)iVar3 >> 0x10;
        iVar4 = (int)((ulonglong)(ushort)iVar3 * (longlong)(short)param_5 >> 0x10);
        lVar2 = (longlong)(iVar4 * 9);
        lVar5 = (longlong)((param_5 - iVar4) * 9);
        iVar4 = ((int)((ulonglong)
                       ((longlong)*(int *)(param_2 + 0x44 + lVar6 * 4) *
                       (longlong)param_3[lVar5 + -9]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)param_3[lVar5 + -2] *
                       (longlong)*(int *)(param_2 + 0x28 + lVar6 * 4)) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)param_3[lVar5 + -4] *
                       (longlong)*(int *)(param_2 + 0x30 + lVar6 * 4)) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)*(int *)(param_2 + 0x38 + lVar6 * 4) *
                       (longlong)param_3[lVar5 + -6]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)*(int *)(param_2 + 0x3c + lVar6 * 4) *
                       (longlong)param_3[lVar5 + -7]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)param_3[lVar2 + 8] *
                       (longlong)*(int *)(param_2 + 0x20 + lVar6 * 4)) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)param_3[lVar2 + 7] *
                       (longlong)*(int *)(param_2 + 0x1c + lVar6 * 4)) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)param_3[lVar2 + 6] *
                       (longlong)*(int *)(param_2 + 0x18 + lVar6 * 4)) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)param_3[lVar2 + 5] *
                       (longlong)*(int *)(param_2 + 0x14 + lVar6 * 4)) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)param_3[lVar2 + 4] *
                       (longlong)*(int *)(param_2 + 0x10 + lVar6 * 4)) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)param_3[lVar2 + 3] * (longlong)*(int *)(param_2 + 0xc + lVar6 * 4)
                       ) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)param_3[lVar2 + 2] * (longlong)*(int *)(param_2 + 8 + lVar6 * 4))
                      >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)param_3[lVar2 + 1] * (longlong)*(int *)(param_2 + 4 + lVar6 * 4))
                      >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)param_3[lVar2] * (longlong)*(int *)(param_2 + lVar6 * 4)) >> 0x10)
                 + (int)((ulonglong)
                         ((longlong)*(int *)(param_2 + 0x40 + lVar6 * 4) *
                         (longlong)param_3[lVar5 + -8]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)param_3[lVar5 + -5] *
                       (longlong)*(int *)(param_2 + 0x34 + lVar6 * 4)) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)param_3[lVar5 + -3] *
                       (longlong)*(int *)(param_2 + 0x2c + lVar6 * 4)) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)param_3[lVar5 + -1] *
                       (longlong)*(int *)(param_2 + 0x24 + lVar6 * 4)) >> 0x10) >> 5) + 1 >> 1;
        uVar1 = (undefined2)iVar4;
        if (iVar4 < -0x8000) {
          uVar1 = 0x8000;
        }
        if (0x7fff < iVar4) {
          uVar1 = 0x7fff;
        }
        iVar3 = iVar3 + param_7;
        *param_1 = uVar1;
        param_1 = param_1 + 1;
      } while (iVar3 < param_6);
    }
  }
  else if (param_4 == 0x18) {
    iVar3 = 0;
    if (0 < param_6) {
      do {
        lVar2 = (longlong)iVar3 >> 0x10;
        iVar4 = ((int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x30 + lVar2 * 4) + *(int *)(param_2 + 0x2c + lVar2 * 4)
                        ) * (longlong)param_3[0xb]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x38 + lVar2 * 4) + *(int *)(param_2 + 0x24 + lVar2 * 4)
                        ) * (longlong)param_3[9]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x40 + lVar2 * 4) + *(int *)(param_2 + 0x1c + lVar2 * 4)
                        ) * (longlong)param_3[7]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x48 + lVar2 * 4) + *(int *)(param_2 + 0x14 + lVar2 * 4)
                        ) * (longlong)param_3[5]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x50 + lVar2 * 4) + *(int *)(param_2 + 0xc + lVar2 * 4))
                       * (longlong)param_3[3]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x58 + lVar2 * 4) + *(int *)(param_2 + 4 + lVar2 * 4)) *
                       (longlong)param_3[1]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x34 + lVar2 * 4) + *(int *)(param_2 + 0x28 + lVar2 * 4)
                        ) * (longlong)param_3[10]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x3c + lVar2 * 4) + *(int *)(param_2 + 0x20 + lVar2 * 4)
                        ) * (longlong)param_3[8]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x44 + lVar2 * 4) + *(int *)(param_2 + 0x18 + lVar2 * 4)
                        ) * (longlong)param_3[6]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x4c + lVar2 * 4) + *(int *)(param_2 + 0x10 + lVar2 * 4)
                        ) * (longlong)param_3[4]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x54 + lVar2 * 4) + *(int *)(param_2 + 8 + lVar2 * 4)) *
                       (longlong)param_3[2]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x5c + lVar2 * 4) + *(int *)(param_2 + lVar2 * 4)) *
                       (longlong)*param_3) >> 0x10) >> 5) + 1 >> 1;
        uVar1 = (undefined2)iVar4;
        if (iVar4 < -0x8000) {
          uVar1 = 0x8000;
        }
        if (0x7fff < iVar4) {
          uVar1 = 0x7fff;
        }
        iVar3 = iVar3 + param_7;
        *param_1 = uVar1;
        param_1 = param_1 + 1;
      } while (iVar3 < param_6);
    }
  }
  else if (param_4 == 0x24) {
    iVar3 = 0;
    if (0 < param_6) {
      do {
        lVar2 = (longlong)iVar3 >> 0x10;
        iVar4 = ((int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x50 + lVar2 * 4) + *(int *)(param_2 + 0x3c + lVar2 * 4)
                        ) * (longlong)param_3[0xf]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x58 + lVar2 * 4) + *(int *)(param_2 + 0x34 + lVar2 * 4)
                        ) * (longlong)param_3[0xd]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x60 + lVar2 * 4) + *(int *)(param_2 + 0x2c + lVar2 * 4)
                        ) * (longlong)param_3[0xb]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x68 + lVar2 * 4) + *(int *)(param_2 + 0x24 + lVar2 * 4)
                        ) * (longlong)param_3[9]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x70 + lVar2 * 4) + *(int *)(param_2 + 0x1c + lVar2 * 4)
                        ) * (longlong)param_3[7]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x78 + lVar2 * 4) + *(int *)(param_2 + 0x14 + lVar2 * 4)
                        ) * (longlong)param_3[5]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x80 + lVar2 * 4) + *(int *)(param_2 + 0xc + lVar2 * 4))
                       * (longlong)param_3[3]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x88 + lVar2 * 4) + *(int *)(param_2 + 4 + lVar2 * 4)) *
                       (longlong)param_3[1]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x48 + lVar2 * 4) + *(int *)(param_2 + 0x44 + lVar2 * 4)
                        ) * (longlong)param_3[0x11]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x4c + lVar2 * 4) + *(int *)(param_2 + 0x40 + lVar2 * 4)
                        ) * (longlong)param_3[0x10]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x54 + lVar2 * 4) + *(int *)(param_2 + 0x38 + lVar2 * 4)
                        ) * (longlong)param_3[0xe]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x5c + lVar2 * 4) + *(int *)(param_2 + 0x30 + lVar2 * 4)
                        ) * (longlong)param_3[0xc]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 100 + lVar2 * 4) + *(int *)(param_2 + 0x28 + lVar2 * 4))
                       * (longlong)param_3[10]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x6c + lVar2 * 4) + *(int *)(param_2 + 0x20 + lVar2 * 4)
                        ) * (longlong)param_3[8]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x74 + lVar2 * 4) + *(int *)(param_2 + 0x18 + lVar2 * 4)
                        ) * (longlong)param_3[6]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x7c + lVar2 * 4) + *(int *)(param_2 + 0x10 + lVar2 * 4)
                        ) * (longlong)param_3[4]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x84 + lVar2 * 4) + *(int *)(param_2 + 8 + lVar2 * 4)) *
                       (longlong)param_3[2]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x8c + lVar2 * 4) + *(int *)(param_2 + lVar2 * 4)) *
                       (longlong)*param_3) >> 0x10) >> 5) + 1 >> 1;
        uVar1 = (undefined2)iVar4;
        if (iVar4 < -0x8000) {
          uVar1 = 0x8000;
        }
        if (0x7fff < iVar4) {
          uVar1 = 0x7fff;
        }
        iVar3 = iVar3 + param_7;
        *param_1 = uVar1;
        param_1 = param_1 + 1;
      } while (iVar3 < param_6);
    }
  }
  else {
    FUN_144bca940("assertion failed: 0",
                  "../../../third_party/opus/src/silk/resampler_private_down_FIR.c",0x8b);
  }
  return param_1;
}



// FUNCTION 145516958 thunk_FUN_145516960 body=5 status=ok
// SIG undefined thunk_FUN_145516960(void)

void thunk_FUN_145516960(int *param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (0 < param_4) {
    lVar7 = 0;
    do {
      iVar6 = *(short *)(param_3 + lVar7 * 2) * 0x400;
      iVar3 = (int)((ulonglong)((longlong)(iVar6 - *param_1) * 0x6d2) >> 0x10);
      iVar4 = *param_1 + iVar3;
      *param_1 = iVar3 + iVar6;
      iVar2 = (int)((ulonglong)((longlong)(iVar4 - param_1[1]) * 0x3a8a) >> 0x10);
      iVar5 = param_1[1] + iVar2;
      iVar3 = param_1[2];
      param_1[1] = iVar4 + iVar2;
      iVar2 = iVar5 - iVar3;
      iVar2 = (int)((ulonglong)((longlong)iVar2 * -0x6755) >> 0x10) + iVar2;
      param_1[2] = iVar5 + iVar2;
      iVar3 = (iVar3 + iVar2 >> 9) + 1 >> 1;
      uVar1 = (undefined2)iVar3;
      if (iVar3 < -0x8000) {
        uVar1 = 0x8000;
      }
      if (0x7fff < iVar3) {
        uVar1 = 0x7fff;
      }
      *(undefined2 *)(param_2 + lVar7 * 4) = uVar1;
      iVar3 = (int)((ulonglong)((longlong)(iVar6 - param_1[3]) * 0x1ac6) >> 0x10);
      iVar4 = param_1[3] + iVar3;
      param_1[3] = iVar3 + iVar6;
      iVar2 = (int)((ulonglong)((longlong)(iVar4 - param_1[4]) * 0x64a9) >> 0x10);
      iVar5 = param_1[4] + iVar2;
      iVar3 = param_1[5];
      param_1[4] = iVar4 + iVar2;
      iVar2 = iVar5 - iVar3;
      iVar2 = (int)((ulonglong)((longlong)iVar2 * -0x270a) >> 0x10) + iVar2;
      param_1[5] = iVar5 + iVar2;
      iVar3 = (iVar3 + iVar2 >> 9) + 1 >> 1;
      uVar1 = (undefined2)iVar3;
      if (iVar3 < -0x8000) {
        uVar1 = 0x8000;
      }
      if (0x7fff < iVar3) {
        uVar1 = 0x7fff;
      }
      *(undefined2 *)(param_2 + 2 + lVar7 * 4) = uVar1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < param_4);
  }
  return;
}



// FUNCTION 145516960 FUN_145516960 body=369 status=ok
// SIG undefined FUN_145516960(void)

void FUN_145516960(int *param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (0 < param_4) {
    lVar7 = 0;
    do {
      iVar6 = *(short *)(param_3 + lVar7 * 2) * 0x400;
      iVar3 = (int)((ulonglong)((longlong)(iVar6 - *param_1) * 0x6d2) >> 0x10);
      iVar4 = *param_1 + iVar3;
      *param_1 = iVar3 + iVar6;
      iVar2 = (int)((ulonglong)((longlong)(iVar4 - param_1[1]) * 0x3a8a) >> 0x10);
      iVar5 = param_1[1] + iVar2;
      iVar3 = param_1[2];
      param_1[1] = iVar4 + iVar2;
      iVar2 = iVar5 - iVar3;
      iVar2 = (int)((ulonglong)((longlong)iVar2 * -0x6755) >> 0x10) + iVar2;
      param_1[2] = iVar5 + iVar2;
      iVar3 = (iVar3 + iVar2 >> 9) + 1 >> 1;
      uVar1 = (undefined2)iVar3;
      if (iVar3 < -0x8000) {
        uVar1 = 0x8000;
      }
      if (0x7fff < iVar3) {
        uVar1 = 0x7fff;
      }
      *(undefined2 *)(param_2 + lVar7 * 4) = uVar1;
      iVar3 = (int)((ulonglong)((longlong)(iVar6 - param_1[3]) * 0x1ac6) >> 0x10);
      iVar4 = param_1[3] + iVar3;
      param_1[3] = iVar3 + iVar6;
      iVar2 = (int)((ulonglong)((longlong)(iVar4 - param_1[4]) * 0x64a9) >> 0x10);
      iVar5 = param_1[4] + iVar2;
      iVar3 = param_1[5];
      param_1[4] = iVar4 + iVar2;
      iVar2 = iVar5 - iVar3;
      iVar2 = (int)((ulonglong)((longlong)iVar2 * -0x270a) >> 0x10) + iVar2;
      param_1[5] = iVar5 + iVar2;
      iVar3 = (iVar3 + iVar2 >> 9) + 1 >> 1;
      uVar1 = (undefined2)iVar3;
      if (iVar3 < -0x8000) {
        uVar1 = 0x8000;
      }
      if (0x7fff < iVar3) {
        uVar1 = 0x7fff;
      }
      *(undefined2 *)(param_2 + 2 + lVar7 * 4) = uVar1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < param_4);
  }
  return;
}



// FUNCTION 145516ad4 FUN_145516ad4 body=53 status=ok
// SIG undefined FUN_145516ad4(void)

void FUN_145516ad4(longlong param_1)

{
  *(int *)(param_1 + 0x1064) = *(int *)(param_1 + 0x918) << 7;
  *(undefined4 *)(param_1 + 0x10ac) = 0x10000;
  *(undefined4 *)(param_1 + 0x10b0) = 0x10000;
  *(undefined4 *)(param_1 + 0x10bc) = 0x14;
  *(undefined4 *)(param_1 + 0x10b8) = 2;
  return;
}



// FUNCTION 145516b0c FUN_145516b0c body=124 status=ok
// SIG undefined FUN_145516b0c(void)

void FUN_145516b0c(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (*(int *)(param_1 + 0x90c) != *(int *)(param_1 + 0x10b4)) {
    *(int *)(param_1 + 0x1064) = *(int *)(param_1 + 0x918) << 7;
    *(undefined4 *)(param_1 + 0x10ac) = 0x10000;
    *(undefined4 *)(param_1 + 0x10b0) = 0x10000;
    *(undefined4 *)(param_1 + 0x10b4) = *(undefined4 *)(param_1 + 0x90c);
    *(undefined4 *)(param_1 + 0x10bc) = 0x14;
    *(undefined4 *)(param_1 + 0x10b8) = 2;
  }
  if (param_4 != 0) {
    FUN_145516f18();
    *(int *)(param_1 + 0x1058) = *(int *)(param_1 + 0x1058) + 1;
    return;
  }
  FUN_145516d30();
  return;
}



// FUNCTION 145516b88 FUN_145516b88 body=424 status=ok
// SIG undefined FUN_145516b88(void)

void FUN_145516b88(longlong param_1,longlong param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined4 uVar9;
  int local_res8 [2];
  int local_res20 [2];
  
  if (*(int *)(param_1 + 0x1058) == 0) {
    if (*(int *)(param_1 + 0x1094) != 0) {
      FUN_1455dd844(local_res8,local_res20,param_2,param_3);
      iVar3 = *(int *)(param_1 + 0x10a4);
      if (iVar3 < local_res20[0]) {
        *(int *)(param_1 + 0x10a0) =
             *(int *)(param_1 + 0x10a0) >> ((char)local_res20[0] - (char)iVar3 & 0x1fU);
      }
      else if (local_res20[0] < iVar3) {
        local_res8[0] = local_res8[0] >> ((char)iVar3 - (char)local_res20[0] & 0x1fU);
      }
      uVar2 = *(uint *)(param_1 + 0x10a0);
      if ((int)uVar2 < local_res8[0]) {
        if (uVar2 == 0) {
          iVar3 = 0x20;
        }
        else {
          iVar3 = 0x1f;
          if (uVar2 != 0) {
            for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
            }
          }
          iVar3 = 0x1f - iVar3;
        }
        iVar6 = uVar2 << ((byte)(iVar3 + -1) & 0x1f);
        *(int *)(param_1 + 0x10a0) = iVar6;
        iVar5 = 0x18 - (iVar3 + -1);
        iVar3 = 0;
        if (0 < iVar5) {
          iVar3 = iVar5;
        }
        local_res8[0] = local_res8[0] >> ((byte)iVar3 & 0x1f);
        iVar3 = 1;
        if (1 < local_res8[0]) {
          iVar3 = local_res8[0];
        }
        uVar2 = iVar6 / iVar3;
        if ((int)uVar2 < 1) {
          iVar3 = 0;
        }
        else {
          iVar3 = 0x1f;
          if (uVar2 != 0) {
            for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
            }
          }
          uVar8 = 0x1f - iVar3;
          iVar3 = 0x18 - uVar8;
          if (iVar3 != 0) {
            if (iVar3 < 0) {
              bVar1 = -(byte)iVar3 & 0x1f;
              uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
            }
            else {
              bVar1 = (byte)iVar3 & 0x1f;
              uVar2 = uVar2 >> bVar1 | uVar2 << 0x20 - bVar1;
            }
          }
          iVar3 = (int)((-(uint)((uVar8 & 1) != 0) & 0xffffcb7a) + 0xb486) >>
                  ((byte)((int)uVar8 >> 1) & 0x1f);
          iVar3 = (int)((ulonglong)(uVar2 & 0x7f) * (longlong)iVar3 * 0xd5 >> 0x10) + iVar3;
        }
        uVar2 = iVar3 * 0x10;
        if (0 < param_3) {
          lVar7 = 0;
          do {
            uVar4 = (ulonglong)uVar2;
            uVar2 = uVar2 + ((iVar3 * -0x10 + 0x10000) / param_3) * 4;
            *(short *)(param_2 + lVar7 * 2) =
                 (short)((longlong)*(short *)(param_2 + lVar7 * 2) * uVar4 >> 0x10);
            if (0x10000 < (int)uVar2) break;
            lVar7 = lVar7 + 1;
          } while (lVar7 < param_3);
        }
      }
    }
    uVar9 = 0;
  }
  else {
    FUN_1455dd844(param_1 + 0x10a0,param_1 + 0x10a4,param_2,param_3);
    uVar9 = 1;
  }
  *(undefined4 *)(param_1 + 0x1094) = uVar9;
  return;
}



// FUNCTION 145516d30 FUN_145516d30 body=487 status=ok
// SIG undefined FUN_145516d30(void)

void FUN_145516d30(longlong param_1,longlong param_2)

{
  short sVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  
  iVar7 = 0;
  *(int *)(param_1 + 0x105c) = (int)*(char *)(param_1 + 0xae5);
  if (*(char *)(param_1 + 0xae5) == '\x02') {
    uVar4 = (ulonglong)*(int *)(param_1 + 0x914);
    lVar8 = 5;
    iVar6 = 0;
    if (0 < *(int *)(param_2 + -4 + uVar4 * 4)) {
      do {
        if (iVar6 == (int)uVar4) break;
        iVar9 = 0;
        psVar5 = (short *)(param_2 + ((longlong)(((int)uVar4 - iVar6) * 5) + 0x2b) * 2);
        lVar3 = lVar8;
        do {
          sVar1 = *psVar5;
          psVar5 = psVar5 + 1;
          iVar9 = iVar9 + sVar1;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
        uVar2 = *(uint *)(param_1 + 0x914);
        uVar4 = (ulonglong)uVar2;
        if (iVar7 < iVar9) {
          lVar3 = (longlong)((short)((short)uVar2 - (short)iVar6) * 5 + -5);
          *(undefined8 *)(param_1 + 0x1068) = *(undefined8 *)(param_2 + 0x60 + lVar3 * 2);
          *(undefined2 *)(param_1 + 0x1070) = *(undefined2 *)(param_2 + 0x68 + lVar3 * 2);
          *(int *)(param_1 + 0x1064) =
               *(int *)(param_2 + -4 + (longlong)(int)(uVar2 - iVar6) * 4) << 8;
          iVar7 = iVar9;
        }
        iVar6 = iVar6 + 1;
      } while (*(int *)(param_1 + 0x91c) * iVar6 < *(int *)(param_2 + -4 + (longlong)(int)uVar2 * 4)
              );
    }
    psVar5 = (short *)(param_1 + 0x1068);
    psVar5[0] = 0;
    psVar5[1] = 0;
    psVar5[2] = 0;
    psVar5[3] = 0;
    *(undefined2 *)(param_1 + 0x1070) = 0;
    *(short *)(param_1 + 0x106c) = (short)iVar7;
    if (iVar7 < 0x2ccd) {
      iVar6 = 1;
      if (1 < iVar7) {
        iVar6 = iVar7;
      }
      do {
        *psVar5 = (short)((int)*psVar5 * (int)(short)(0xb33400 / (longlong)iVar6) >> 10);
        psVar5 = psVar5 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    else if (0x3ccd < iVar7) {
      iVar6 = 1;
      if (1 < iVar7) {
        iVar6 = iVar7;
      }
      do {
        *psVar5 = (short)((int)*psVar5 * (int)(short)(0xf334000 / (longlong)iVar6) >> 0xe);
        psVar5 = psVar5 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  else {
    *(int *)(param_1 + 0x1064) = *(short *)(param_1 + 0x90c) * 0x1200;
    *(undefined8 *)(param_1 + 0x1068) = 0;
    *(undefined2 *)(param_1 + 0x1070) = 0;
  }
  memcpy((void *)(param_1 + 0x1072),(void *)(param_2 + 0x40),(longlong)*(int *)(param_1 + 0x924) * 2
        );
  *(undefined2 *)(param_1 + 0x10a8) = *(undefined2 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x10ac) =
       *(undefined8 *)(param_2 + 8 + (longlong)*(int *)(param_1 + 0x914) * 4);
  *(undefined4 *)(param_1 + 0x10bc) = *(undefined4 *)(param_1 + 0x91c);
  *(undefined4 *)(param_1 + 0x10b8) = *(undefined4 *)(param_1 + 0x914);
  return;
}



// FUNCTION 145516f18 FUN_145516f18 body=2329 status=ok
// SIG undefined FUN_145516f18(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145516f18(longlong param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  void *_Src;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  uint uVar12;
  ulonglong uVar13;
  byte bVar14;
  undefined2 uVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  undefined4 *puVar21;
  uint uVar22;
  short sVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  longlong lVar27;
  short *psVar28;
  int *piVar29;
  longlong lVar30;
  int iVar31;
  int *piVar32;
  longlong lVar33;
  ushort uVar34;
  uint uVar35;
  int *piVar36;
  undefined8 *puVar37;
  undefined8 auStack_110 [5];
  int aiStack_e8 [4];
  uint local_d8;
  int local_d4;
  short local_d0;
  uint local_cc;
  int local_c8;
  undefined8 local_c0;
  int local_b8;
  ulonglong local_b0;
  longlong local_a8;
  int local_a0;
  byte local_9c [4];
  int local_98;
  byte local_94 [4];
  int local_90;
  undefined8 *local_88;
  int *local_80;
  int *local_78;
  short local_70;
  short local_6e;
  short local_6c;
  short local_6a;
  short local_68;
  short local_66;
  short local_64;
  short local_62;
  short local_60;
  short local_5e;
  short local_5c [6];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)&local_d8;
  local_80 = param_3;
  local_d4 = param_4;
  uVar13 = (longlong)(*(int *)(param_1 + 0x918) + *(int *)(param_1 + 0x920)) * 4;
  local_78 = param_2;
  uVar17 = uVar13 + 0xf;
  if (uVar17 <= uVar13) {
    uVar17 = 0xffffffffffffff0;
  }
  auStack_110[0] = 0x145516f8f;
  lVar6 = -(uVar17 & 0xfffffffffffffff0);
  uVar13 = (longlong)*(int *)(param_1 + 0x920) * 2;
  uVar17 = uVar13 + 0xf;
  local_a8 = (longlong)&local_d8 + lVar6;
  if (uVar17 <= uVar13) {
    uVar17 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_110 + lVar6) = 0x145516fb9;
  lVar7 = -(uVar17 & 0xfffffffffffffff0);
  lVar30 = 0;
  local_b0 = (longlong)&local_d8 + lVar7 + lVar6;
  local_90 = *(int *)(param_1 + 0x10b0) >> 6;
  local_c0 = CONCAT44(local_90,*(int *)(param_1 + 0x10ac) >> 6);
  if (*(int *)(param_1 + 0x948) != 0) {
    *(undefined8 *)((longlong)auStack_110 + lVar7 + lVar6) = 0x145516ffc;
    memset((void *)(param_1 + 0x1072),0,0x20);
  }
  iVar25 = *(int *)(param_1 + 0x91c);
  iVar19 = *(int *)(param_1 + 0x914);
  uVar13 = (longlong)(iVar25 * 2) * 2;
  uVar17 = uVar13 + 0xf;
  if (uVar17 <= uVar13) {
    uVar17 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_110 + lVar7 + lVar6) = 0x145517027;
  lVar8 = -(uVar17 & 0xfffffffffffffff0);
  iVar19 = (iVar19 + -2) * iVar25;
  lVar4 = (longlong)&local_d8 + lVar8 + lVar7 + lVar6;
  lVar33 = lVar4;
  do {
    lVar27 = 0;
    if (0 < iVar25) {
      iVar24 = *(int *)((longlong)&local_c0 + lVar30 * 4);
      iVar31 = iVar19;
      do {
        lVar18 = (longlong)*(int *)(param_1 + 4 + (longlong)iVar31 * 4) * (longlong)iVar24;
        iVar16 = (int)((ulonglong)lVar18 >> 0x10) >> 8;
        if (iVar16 < 0x8000) {
          uVar15 = (undefined2)((ulonglong)lVar18 >> 0x18);
          if (iVar16 < -0x8000) {
            uVar15 = 0x8000;
          }
        }
        else {
          uVar15 = 0x7fff;
        }
        *(undefined2 *)(lVar33 + lVar27 * 2) = uVar15;
        iVar31 = iVar31 + 1;
        lVar27 = lVar27 + 1;
      } while (lVar27 < iVar25);
    }
    lVar18 = (longlong)iVar25 * 2;
    lVar27 = 0;
    lVar33 = lVar33 + lVar18;
    iVar19 = iVar19 + iVar25;
    lVar30 = lVar30 + 1;
  } while (lVar30 < 2);
  *(undefined8 *)((longlong)auStack_110 + lVar8 + lVar7 + lVar6) = 0x1455170b7;
  FUN_1455dd844(&local_98,local_9c,lVar4,iVar25);
  *(undefined8 *)((longlong)auStack_110 + lVar8 + lVar7 + lVar6) = 0x1455170cb;
  FUN_1455dd844(&local_a0,local_94,lVar4 + lVar18,iVar25);
  iVar25 = *(int *)(param_1 + 0x10b8);
  if (local_98 >> (local_94[0] & 0x1f) < local_a0 >> (local_9c[0] & 0x1f)) {
    iVar25 = iVar25 + -1;
  }
  uVar35 = (uint)*(ushort *)(param_1 + 0x109c);
  local_d8 = (uint)*(ushort *)(param_1 + 0x109c);
  iVar25 = iVar25 * *(int *)(param_1 + 0x10bc) + -0x80;
  if (iVar25 < 0) {
    iVar25 = 0;
  }
  local_88 = (undefined8 *)(longlong)iVar25;
  iVar25 = *(int *)(param_1 + 0x1058);
  if (1 < iVar25) {
    iVar25 = 1;
  }
  lVar30 = (longlong)iVar25;
  local_d0 = *(short *)(&DAT_149d9fa00 + lVar30 * 2);
  if (*(int *)(param_1 + 0x105c) == 2) {
    sVar23 = *(short *)(&DAT_149d9fa04 + lVar30 * 2);
  }
  else {
    sVar23 = *(short *)(&UNK_149d9fa08 + lVar30 * 2);
  }
  uVar5 = *(undefined4 *)(param_1 + 0x924);
  _Src = (void *)(param_1 + 0x1072);
  uVar17 = (ulonglong)(uint)(int)sVar23;
  local_c0 = uVar17;
  *(undefined8 *)((longlong)auStack_110 + lVar8 + lVar7 + lVar6) = 0x145517173;
  FUN_1455dd478(_Src,uVar5,0xfd71);
  iVar25 = *(int *)(param_1 + 0x924);
  *(undefined8 *)((longlong)auStack_110 + lVar8 + lVar7 + lVar6) = 0x145517189;
  memcpy(&local_70,_Src,(longlong)iVar25 * 2);
  if (*(int *)(param_1 + 0x1058) == 0) {
    uVar35 = 0x4000;
    local_d8 = 0x4000;
    if (*(int *)(param_1 + 0x105c) == 2) {
      do {
        uVar34 = (short)uVar35 - *(short *)(param_1 + 0x1068 + lVar27 * 2);
        uVar35 = (uint)uVar34;
        lVar27 = lVar27 + 1;
      } while (lVar27 < 5);
      if ((short)uVar34 < 0xccd) {
        uVar34 = 0xccd;
      }
      uVar35 = (int)(short)uVar34 * (int)*(short *)(param_1 + 0x10a8) >> 0xe;
      local_d8 = uVar35;
      local_c0 = uVar17;
    }
    else {
      uVar5 = *(undefined4 *)(param_1 + 0x924);
      *(undefined8 *)((longlong)auStack_110 + lVar8 + lVar7 + lVar6) = 0x1455171f8;
      iVar25 = FUN_1455dd4d0(_Src,uVar5);
      if (0x8000000 < iVar25) {
        iVar25 = 0x8000000;
      }
      if (iVar25 < 0x400000) {
        iVar25 = 0x400000;
      }
      uVar17 = (ulonglong)
               (uint)((int)((ulonglong)((longlong)(iVar25 << 3) * (longlong)sVar23) >> 0x10) >> 0xe)
      ;
      local_c0 = uVar17;
    }
  }
  local_cc = *(uint *)(param_1 + 0x1098);
  iVar25 = *(int *)(param_1 + 0x924);
  iVar19 = *(int *)(param_1 + 0x920);
  iVar24 = (*(int *)(param_1 + 0x1064) >> 7) + 1 >> 1;
  iVar31 = ((iVar19 - iVar25) - iVar24) + -2;
  local_c8 = iVar19;
  local_b8 = iVar24;
  if (iVar31 < 1) {
    *(undefined8 *)((longlong)auStack_110 + lVar8 + lVar7 + lVar6) = 0x14551727d;
    FUN_144bca940("assertion failed: idx > 0","../../../third_party/opus/src/silk/PLC.c",0x126);
    iVar25 = *(int *)(param_1 + 0x924);
    iVar19 = *(int *)(param_1 + 0x920);
  }
  lVar30 = local_b0 + (longlong)iVar31 * 2;
  *(int *)((longlong)aiStack_e8 + lVar8 + lVar7 + lVar6 + 8) = local_d4;
  *(int *)((longlong)aiStack_e8 + lVar8 + lVar7 + lVar6) = iVar25;
  *(undefined8 *)((longlong)auStack_110 + lVar8 + lVar7 + lVar6) = 0x1455172b9;
  FUN_1455dd2cc(lVar30,param_1 + 0x544 + (longlong)iVar31 * 2,&local_70,iVar19 - iVar31);
  uVar22 = *(uint *)(param_1 + 0x10b0);
  uVar12 = (uVar22 ^ (int)uVar22 >> 0x1f) - ((int)uVar22 >> 0x1f);
  if (uVar12 == 0) {
    iVar25 = 0x20;
  }
  else {
    iVar25 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar25 == 0; iVar25 = iVar25 + -1) {
      }
    }
    iVar25 = 0x1f - iVar25;
  }
  iVar19 = uVar22 << ((byte)(iVar25 + -1) & 0x1f);
  iVar16 = 0xf - (iVar25 + -1);
  lVar30 = 0x1fffffff / (longlong)(iVar19 >> 0x10);
  iVar25 = (int)lVar30;
  iVar25 = (int)((ulonglong)
                 ((longlong)
                  ((int)((ulonglong)((longlong)(short)lVar30 * (longlong)iVar19) >> 0x10) * -8) *
                 (longlong)iVar25) >> 0x10) + iVar25 * 0x10000;
  if (iVar16 < 1) {
    bVar14 = -(byte)iVar16;
    iVar26 = -0x80000000 >> (bVar14 & 0x1f);
    iVar20 = 0x7fffffff >> (bVar14 & 0x1f);
    iVar16 = iVar25;
    if (iVar25 < iVar20) {
      iVar16 = iVar20;
    }
    iVar19 = iVar25;
    if (iVar25 < iVar26) {
      iVar19 = iVar26;
    }
    if (iVar26 < iVar25) {
      iVar16 = iVar26;
    }
    if (iVar20 < iVar25) {
      iVar19 = iVar20;
    }
    if (iVar20 < iVar26) {
      iVar19 = iVar16;
    }
    iVar19 = iVar19 << (bVar14 & 0x1f);
  }
  else if (iVar16 < 0x20) {
    iVar19 = iVar25 >> ((byte)iVar16 & 0x1f);
  }
  else {
    iVar19 = 0;
  }
  iVar25 = *(int *)(param_1 + 0x920);
  iVar16 = 0x3fffffff;
  if (iVar19 < 0x3fffffff) {
    iVar16 = iVar19;
  }
  iVar31 = *(int *)(param_1 + 0x924) + iVar31;
  if (iVar31 < iVar25) {
    puVar21 = (undefined4 *)(local_a8 + (longlong)iVar31 * 4);
    psVar28 = (short *)(local_b0 + (longlong)iVar31 * 2);
    do {
      sVar23 = *psVar28;
      iVar31 = iVar31 + 1;
      psVar28 = psVar28 + 1;
      *puVar21 = (int)((ulonglong)((longlong)sVar23 * (longlong)iVar16) >> 0x10);
      puVar21 = puVar21 + 1;
      iVar25 = *(int *)(param_1 + 0x920);
    } while (iVar31 < iVar25);
  }
  local_d4 = 0;
  if (0 < *(int *)(param_1 + 0x914)) {
    uVar13 = (ulonglong)local_c8;
    local_b0 = uVar13;
    local_c8 = (int)local_d0;
    do {
      iVar25 = 0;
      piVar29 = (int *)(local_a8 + ((longlong)((int)uVar13 - iVar24) + 2) * 4);
      if (0 < *(int *)(param_1 + 0x91c)) {
        uVar17 = local_b0;
        uVar22 = local_cc;
        do {
          piVar36 = piVar29 + -4;
          uVar13 = (ulonglong)((int)uVar13 + 1);
          iVar25 = iVar25 + 1;
          piVar1 = piVar29 + -3;
          uVar22 = uVar22 * 0xbb38435 + 0x3619636b;
          piVar32 = piVar29 + -2;
          piVar2 = piVar29 + -1;
          iVar19 = *piVar29;
          piVar29 = piVar29 + 1;
          *(int *)(local_a8 + uVar17 * 4) =
               ((int)((ulonglong)((longlong)*piVar36 * (longlong)*(short *)(param_1 + 0x1070)) >>
                     0x10) +
                (int)((ulonglong)((longlong)*piVar1 * (longlong)*(short *)(param_1 + 0x106e)) >>
                     0x10) +
                (int)((ulonglong)((longlong)*piVar32 * (longlong)*(short *)(param_1 + 0x106c)) >>
                     0x10) +
                (int)((ulonglong)((longlong)*piVar2 * (longlong)*(short *)(param_1 + 0x106a)) >>
                     0x10) +
                (int)((ulonglong)((longlong)*(short *)(param_1 + 0x1068) * (longlong)iVar19) >> 0x10
                     ) + 2) * 4 +
               (int)((ulonglong)
                     ((longlong)
                      *(int *)(param_1 + 4 + ((ulonglong)(uVar22 >> 0x19) + (longlong)local_88) * 4)
                     * (longlong)(short)uVar35) >> 0x10) * 4;
          uVar17 = uVar17 + 1;
        } while (iVar25 < *(int *)(param_1 + 0x91c));
        local_cc = uVar22;
        local_b0 = uVar17;
        uVar17 = local_c0;
      }
      lVar30 = 0;
      do {
        *(short *)(param_1 + 0x1068 + lVar30 * 2) =
             (short)((int)*(short *)(param_1 + 0x1068 + lVar30 * 2) * (int)local_d0 >> 0xf);
        lVar30 = lVar30 + 1;
      } while (lVar30 < 5);
      if (*(char *)(param_1 + 0xae5) != '\0') {
        uVar35 = (int)(short)uVar35 * (int)(short)uVar17 >> 0xf;
      }
      iVar19 = (int)((ulonglong)((longlong)*(int *)(param_1 + 0x1064) * 0x28f) >> 0x10) +
               *(int *)(param_1 + 0x1064);
      *(int *)(param_1 + 0x1064) = iVar19;
      iVar25 = *(short *)(param_1 + 0x90c) * 0x1200;
      if (iVar19 < iVar25) {
        iVar25 = iVar19;
      }
      local_d4 = local_d4 + 1;
      *(int *)(param_1 + 0x1064) = iVar25;
      iVar24 = (iVar25 >> 7) + 1 >> 1;
    } while (local_d4 < *(int *)(param_1 + 0x914));
    iVar25 = *(int *)(param_1 + 0x920);
    local_d8 = uVar35;
    local_b8 = iVar24;
  }
  iVar19 = 0;
  uVar11 = *(undefined8 *)(param_1 + 0x50c);
  puVar37 = (undefined8 *)(local_a8 + ((longlong)iVar25 + -0x10) * 4);
  *puVar37 = *(undefined8 *)(param_1 + 0x504);
  puVar37[1] = uVar11;
  local_88 = puVar37;
  uVar11 = *(undefined8 *)(param_1 + 0x51c);
  puVar37[2] = *(undefined8 *)(param_1 + 0x514);
  puVar37[3] = uVar11;
  uVar5 = *(undefined4 *)(param_1 + 0x528);
  uVar9 = *(undefined4 *)(param_1 + 0x52c);
  uVar10 = *(undefined4 *)(param_1 + 0x530);
  *(undefined4 *)(puVar37 + 4) = *(undefined4 *)(param_1 + 0x524);
  *(undefined4 *)((longlong)puVar37 + 0x24) = uVar5;
  *(undefined4 *)(puVar37 + 5) = uVar9;
  *(undefined4 *)((longlong)puVar37 + 0x2c) = uVar10;
  uVar5 = *(undefined4 *)(param_1 + 0x538);
  uVar9 = *(undefined4 *)(param_1 + 0x53c);
  uVar10 = *(undefined4 *)(param_1 + 0x540);
  *(undefined4 *)(puVar37 + 6) = *(undefined4 *)(param_1 + 0x534);
  *(undefined4 *)((longlong)puVar37 + 0x34) = uVar5;
  *(undefined4 *)(puVar37 + 7) = uVar9;
  *(undefined4 *)((longlong)puVar37 + 0x3c) = uVar10;
  if (*(int *)(param_1 + 0x924) < 10) {
    *(undefined8 *)((longlong)auStack_110 + lVar8 + lVar7 + lVar6) = 0x1455175ff;
    FUN_144bca940("assertion failed: psDec->LPC_order >= 10",
                  "../../../third_party/opus/src/silk/PLC.c",0x15e);
  }
  iVar25 = *(int *)(param_1 + 0x918);
  if (0 < iVar25) {
    piVar29 = (int *)((longlong)puVar37 + 0x1c);
    piVar36 = local_80;
    do {
      piVar1 = piVar29 + 1;
      iVar24 = 10;
      iVar25 = *(int *)(param_1 + 0x924);
      local_80 = piVar1;
      uVar35 = (int)((ulonglong)((longlong)piVar29[-1] * (longlong)local_5e) >> 0x10) +
               (int)((ulonglong)((longlong)piVar29[2] * (longlong)local_64) >> 0x10) +
               (int)((ulonglong)((longlong)piVar29[3] * (longlong)local_66) >> 0x10) +
               (int)((ulonglong)((longlong)piVar29[4] * (longlong)local_68) >> 0x10) +
               (int)((ulonglong)((longlong)piVar29[5] * (longlong)local_6a) >> 0x10) +
               (int)((ulonglong)((longlong)piVar29[6] * (longlong)local_6c) >> 0x10) +
               (int)((ulonglong)((longlong)piVar29[7] * (longlong)local_6e) >> 0x10) +
               (int)((ulonglong)((longlong)piVar29[8] * (longlong)local_70) >> 0x10) +
               (int)((ulonglong)((longlong)local_60 * (longlong)*piVar29) >> 0x10) +
               (int)((ulonglong)((longlong)local_62 * (longlong)*piVar1) >> 0x10) + (iVar25 >> 1);
      if (10 < iVar25) {
        psVar28 = local_5c;
        piVar32 = piVar29 + -2;
        do {
          iVar31 = *piVar32;
          iVar24 = iVar24 + 1;
          sVar23 = *psVar28;
          piVar32 = piVar32 + -1;
          psVar28 = psVar28 + 1;
          uVar35 = uVar35 + (int)((ulonglong)((longlong)iVar31 * (longlong)sVar23) >> 0x10);
        } while (iVar24 < iVar25);
      }
      uVar22 = uVar35;
      if ((int)uVar35 < -0x8000000) {
        uVar22 = 0xf8000000;
      }
      uVar12 = piVar29[9];
      if (0x7ffffff < (int)uVar35) {
        uVar22 = 0x7ffffff;
      }
      if ((int)(uVar22 * 0x10 + uVar12) < 0) {
        if ((int)(uVar12 | uVar22 << 4) < 0) goto LAB_145517760;
        iVar25 = 0x7fffffff;
      }
      else if ((uVar12 & (uVar22 & 0xf8000000) << 4) == 0) {
LAB_145517760:
        iVar25 = uVar22 * 0x10 + uVar12;
      }
      else {
        iVar25 = -0x80000000;
      }
      piVar29[9] = iVar25;
      iVar24 = ((int)((ulonglong)((longlong)iVar25 * (longlong)local_90) >> 0x10) >> 7) + 1 >> 1;
      iVar25 = 0x7fff;
      if ((iVar24 < 0x8000) && (iVar25 = iVar24, iVar24 < -0x8000)) {
        iVar25 = -0x8000;
      }
      *(short *)piVar36 = (short)iVar25;
      iVar19 = iVar19 + 1;
      iVar25 = *(int *)(param_1 + 0x918);
      piVar36 = (int *)((longlong)piVar36 + 2);
      piVar29 = piVar1;
      puVar37 = local_88;
      uVar35 = local_d8;
      iVar24 = local_b8;
    } while (iVar19 < iVar25);
  }
  lVar30 = (longlong)iVar25;
  puVar3 = (undefined8 *)((longlong)puVar37 + lVar30 * 4);
  uVar11 = puVar3[1];
  *(undefined8 *)(param_1 + 0x504) = *puVar3;
  *(undefined8 *)(param_1 + 0x50c) = uVar11;
  puVar3 = (undefined8 *)((longlong)puVar37 + lVar30 * 4 + 0x10);
  uVar11 = puVar3[1];
  *(undefined8 *)(param_1 + 0x514) = *puVar3;
  *(undefined8 *)(param_1 + 0x51c) = uVar11;
  puVar21 = (undefined4 *)((longlong)puVar37 + lVar30 * 4 + 0x20);
  uVar5 = puVar21[1];
  uVar9 = puVar21[2];
  uVar10 = puVar21[3];
  *(undefined4 *)(param_1 + 0x524) = *puVar21;
  *(undefined4 *)(param_1 + 0x528) = uVar5;
  *(undefined4 *)(param_1 + 0x52c) = uVar9;
  *(undefined4 *)(param_1 + 0x530) = uVar10;
  puVar21 = (undefined4 *)((longlong)puVar37 + lVar30 * 4 + 0x30);
  uVar5 = puVar21[1];
  uVar9 = puVar21[2];
  uVar10 = puVar21[3];
  *(undefined4 *)(param_1 + 0x534) = *puVar21;
  *(undefined4 *)(param_1 + 0x538) = uVar5;
  *(undefined4 *)(param_1 + 0x53c) = uVar9;
  *(undefined4 *)(param_1 + 0x540) = uVar10;
  *(uint *)(param_1 + 0x1098) = local_cc;
  *(short *)(param_1 + 0x109c) = (short)uVar35;
  *local_78 = iVar24;
  local_78[1] = iVar24;
  local_78[2] = iVar24;
  local_78[3] = iVar24;
  uVar17 = local_50 ^ (ulonglong)&local_d8;
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)auStack_110 + lVar8 + lVar7 + lVar6) = &UNK_145517831;
  FUN_144d8e3a0(uVar17);
}



// FUNCTION 145517848 FUN_145517848 body=79 status=ok
// SIG undefined FUN_145517848(void)

void FUN_145517848(longlong param_1)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x924);
  iVar4 = 0;
  iVar3 = 0;
  if (0 < iVar1) {
    puVar2 = (undefined2 *)(param_1 + 0xfec);
    do {
      iVar3 = iVar3 + (int)(0x7fff / (longlong)(iVar1 + 1));
      iVar4 = iVar4 + 1;
      *puVar2 = (short)iVar3;
      puVar2 = puVar2 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x924));
  }
  *(undefined4 *)(param_1 + 0x104c) = 0;
  *(undefined4 *)(param_1 + 0x1050) = 0x307880;
  return;
}



// FUNCTION 145517898 FUN_145517898 body=1671 status=ok
// SIG undefined FUN_145517898(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145517898(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  short sVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  short *psVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  void *_Src;
  uint uVar19;
  uint uVar20;
  int *piVar22;
  longlong lVar23;
  uint uVar24;
  uint *puVar25;
  int iVar26;
  int iVar27;
  longlong lVar28;
  ulonglong uVar29;
  undefined8 *puVar30;
  undefined8 uStack_a0;
  undefined1 auStack_98 [32];
  void *local_78 [2];
  short local_68;
  short sStack_66;
  short sStack_64;
  short sStack_62;
  short sStack_60;
  short sStack_5e;
  short sStack_5c;
  short sStack_5a;
  short local_58;
  short sStack_56;
  short sStack_54;
  short sStack_52;
  short sStack_50;
  short sStack_4e;
  short sStack_4c;
  short sStack_4a;
  undefined8 local_48;
  undefined4 auStack_40 [2];
  ulonglong uVar21;
  
  puVar18 = auStack_98;
  local_48 = DAT_14c707940 ^ (ulonglong)local_78;
  _Src = (void *)(param_1 + 0xaec);
  lVar28 = (longlong)param_4;
  local_78[0] = _Src;
  if (*(int *)(param_1 + 0x90c) != *(int *)(param_1 + 0x1054)) {
    uStack_a0 = 0x1455178ec;
    FUN_145517848();
    *(undefined4 *)(param_1 + 0x1054) = *(undefined4 *)(param_1 + 0x90c);
  }
  uVar17 = 0;
  uVar20 = 0;
  if (*(int *)(param_1 + 0x1058) == 0) {
    if (*(int *)(param_1 + 0x105c) == 0) {
      if (0 < *(int *)(param_1 + 0x924)) {
        psVar15 = (short *)(param_1 + 0xfec);
        uVar12 = uVar17;
        do {
          uVar24 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar24;
          *psVar15 = *psVar15 +
                     (short)((ulonglong)
                             (uint)((int)*(short *)((param_1 - (longlong)_Src) + 0x428 +
                                                   (longlong)psVar15) - (int)*psVar15) * 0x3fdc >>
                            0x10);
          psVar15 = psVar15 + 1;
        } while ((int)uVar24 < *(int *)(param_1 + 0x924));
      }
      iVar14 = *(int *)(param_1 + 0x914);
      uVar24 = uVar20;
      if (0 < iVar14) {
        puVar25 = (uint *)(param_2 + 0x10);
        uVar12 = uVar17;
        uVar21 = uVar17;
        uVar29 = uVar17;
        do {
          uVar10 = *puVar25;
          uVar13 = (uint)uVar12;
          puVar25 = puVar25 + 1;
          uVar24 = (uint)uVar21;
          if ((int)uVar10 <= (int)uVar13) {
            uVar24 = (uint)uVar29;
          }
          uVar19 = (uint)uVar21 + 1;
          uVar21 = (ulonglong)uVar19;
          uVar29 = (ulonglong)uVar24;
          if ((int)uVar10 <= (int)uVar13) {
            uVar10 = uVar13;
          }
          uVar12 = (ulonglong)uVar10;
        } while ((int)uVar19 < iVar14);
      }
      uStack_a0 = 0x1455179b1;
      memmove((void *)((longlong)_Src + (longlong)*(int *)(param_1 + 0x91c) * 4),_Src,
              (longlong)((iVar14 + -1) * *(int *)(param_1 + 0x91c)) << 2);
      uStack_a0 = 0x1455179d4;
      memcpy(_Src,(void *)(param_1 + ((longlong)(int)(*(int *)(param_1 + 0x91c) * uVar24) + 1) * 4),
             (longlong)*(int *)(param_1 + 0x91c) << 2);
      if (0 < *(int *)(param_1 + 0x914)) {
        iVar14 = *(int *)(param_1 + 0x104c);
        piVar22 = (int *)(param_2 + 0x10);
        uVar12 = uVar17;
        do {
          iVar14 = iVar14 + (int)((ulonglong)((longlong)(*piVar22 - iVar14) * 0x121a) >> 0x10);
          *(int *)(param_1 + 0x104c) = iVar14;
          if (*piVar22 < (int)((ulonglong)((longlong)iVar14 * 0xb53c) >> 0x10)) {
            iVar14 = *piVar22;
            *(int *)(param_1 + 0x104c) = iVar14;
          }
          uVar24 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar24;
          piVar22 = piVar22 + 1;
        } while ((int)uVar24 < *(int *)(param_1 + 0x914));
      }
    }
    if (*(int *)(param_1 + 0x1058) == 0) {
      uStack_a0 = 0x145517f13;
      memset((void *)(param_1 + 0x100c),0,(longlong)*(int *)(param_1 + 0x924) << 2);
      goto LAB_145517f13;
    }
  }
  uVar12 = lVar28 * 4 + 0x4f;
  if (uVar12 <= lVar28 * 4 + 0x40U) {
    uVar12 = 0xffffffffffffff0;
  }
  uStack_a0 = 0x145517a62;
  lVar5 = -(uVar12 & 0xfffffffffffffff0);
  puVar18 = auStack_98 + lVar5;
  puVar30 = (undefined8 *)((longlong)local_78 + lVar5);
  iVar14 = (int)((ulonglong)
                 ((longlong)*(int *)(param_1 + 0x10b0) * (longlong)*(short *)(param_1 + 0x109c)) >>
                0x10);
  if ((iVar14 < 0x200000) && (iVar9 = *(int *)(param_1 + 0x104c), iVar9 < 0x800001)) {
    uVar24 = (int)((ulonglong)((longlong)iVar9 * (longlong)iVar9) >> 0x10) +
             (int)((ulonglong)((longlong)iVar14 * (longlong)iVar14) >> 0x10) * -0x20;
    if (0 < (int)uVar24) {
      iVar14 = 0x1f;
      if (uVar24 != 0) {
        for (; uVar24 >> iVar14 == 0; iVar14 = iVar14 + -1) {
        }
      }
      uVar20 = 0x1f - iVar14;
      iVar14 = 0x18 - uVar20;
      if (iVar14 != 0) {
        if (iVar14 < 0) {
          bVar4 = -(byte)iVar14 & 0x1f;
          uVar24 = uVar24 << bVar4 | uVar24 >> 0x20 - bVar4;
        }
        else {
          bVar4 = (byte)iVar14 & 0x1f;
          uVar24 = uVar24 >> bVar4 | uVar24 << 0x20 - bVar4;
        }
      }
      iVar14 = (int)((-(uint)((uVar20 & 1) != 0) & 0xffffcb7a) + 0xb486) >>
               ((byte)((int)uVar20 >> 1) & 0x1f);
      uVar20 = (int)((ulonglong)(uVar24 & 0x7f) * (longlong)iVar14 * 0xd5 >> 0x10) + iVar14;
    }
    iVar14 = uVar20 << 8;
  }
  else {
    uVar24 = (int)*(short *)(param_1 + 0x104e) * (int)*(short *)(param_1 + 0x104e) +
             (iVar14 >> 0x10) * (iVar14 >> 0x10) * -0x20;
    if (0 < (int)uVar24) {
      iVar14 = 0x1f;
      if (uVar24 != 0) {
        for (; uVar24 >> iVar14 == 0; iVar14 = iVar14 + -1) {
        }
      }
      uVar20 = 0x1f - iVar14;
      iVar14 = 0x18 - uVar20;
      if (iVar14 != 0) {
        if (iVar14 < 0) {
          bVar4 = -(byte)iVar14 & 0x1f;
          uVar24 = uVar24 << bVar4 | uVar24 >> 0x20 - bVar4;
        }
        else {
          bVar4 = (byte)iVar14 & 0x1f;
          uVar24 = uVar24 >> bVar4 | uVar24 << 0x20 - bVar4;
        }
      }
      iVar14 = (int)((-(uint)((uVar20 & 1) != 0) & 0xffffcb7a) + 0xb486) >>
               ((byte)((int)uVar20 >> 1) & 0x1f);
      uVar20 = (int)((ulonglong)(uVar24 & 0x7f) * (longlong)iVar14 * 0xd5 >> 0x10) + iVar14;
    }
    iVar14 = uVar20 << 0x10;
  }
  iVar9 = 0xff;
  if (param_4 < 0xff) {
    do {
      iVar9 = iVar9 >> 1;
    } while (param_4 < iVar9);
  }
  iVar11 = *(int *)(param_1 + 0x1050);
  if (0 < lVar28) {
    puVar16 = (undefined4 *)(&stack0xffffffffffffffc8 + lVar5);
    lVar23 = lVar28;
    do {
      iVar11 = iVar11 * 0xbb38435 + 0x3619636b;
      *puVar16 = *(undefined4 *)((longlong)_Src + ((longlong)iVar11 >> 0x18 & (longlong)iVar9) * 4);
      puVar16 = puVar16 + 1;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
  }
  *(int *)(param_1 + 0x1050) = iVar11;
  uVar2 = *(undefined4 *)(param_1 + 0x1060);
  uVar3 = *(undefined4 *)(param_1 + 0x924);
  local_78[1] = puVar30;
  *(undefined8 *)(auStack_98 + lVar5 + -8) = 0x145517c25;
  FUN_1455dd964(&local_68,param_1 + 0xfec,uVar3,uVar2);
  uVar7 = *(undefined8 *)(param_1 + 0x1014);
  *puVar30 = *(undefined8 *)(param_1 + 0x100c);
  *(undefined8 *)((longlong)local_78 + lVar5 + 8) = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 0x1024);
  *(undefined8 *)((longlong)&local_68 + lVar5) = *(undefined8 *)(param_1 + 0x101c);
  *(undefined8 *)((longlong)&sStack_60 + lVar5) = uVar7;
  uVar2 = *(undefined4 *)(param_1 + 0x1030);
  uVar3 = *(undefined4 *)(param_1 + 0x1034);
  uVar6 = *(undefined4 *)(param_1 + 0x1038);
  *(undefined4 *)((longlong)&local_58 + lVar5) = *(undefined4 *)(param_1 + 0x102c);
  *(undefined4 *)((longlong)&sStack_54 + lVar5) = uVar2;
  *(undefined4 *)((longlong)&sStack_50 + lVar5) = uVar3;
  *(undefined4 *)((longlong)&sStack_4c + lVar5) = uVar6;
  uVar2 = *(undefined4 *)(param_1 + 0x1040);
  uVar3 = *(undefined4 *)(param_1 + 0x1044);
  uVar6 = *(undefined4 *)(param_1 + 0x1048);
  *(undefined4 *)((longlong)auStack_40 + lVar5 + -8) = *(undefined4 *)(param_1 + 0x103c);
  *(undefined4 *)((longlong)auStack_40 + lVar5 + -4) = uVar2;
  *(undefined4 *)((longlong)auStack_40 + lVar5) = uVar3;
  *(undefined4 *)((longlong)auStack_40 + lVar5 + 4) = uVar6;
  if ((*(int *)(param_1 + 0x924) != 10) && (*(int *)(param_1 + 0x924) != 0x10)) {
    *(undefined8 *)(auStack_98 + lVar5 + -8) = 0x145517c7d;
    FUN_144bca940("assertion failed: psDec->LPC_order == 10 || psDec->LPC_order == 16",
                  "../../../third_party/opus/src/silk/CNG.c",0x99);
  }
  if (0 < lVar28) {
    piVar22 = (int *)((longlong)&sStack_54 + lVar5);
    do {
      uVar20 = (int)((ulonglong)((longlong)piVar22[-3] * (longlong)sStack_56) >> 0x10) +
               (int)((ulonglong)((longlong)piVar22[-2] * (longlong)local_58) >> 0x10) +
               (int)((ulonglong)((longlong)piVar22[-1] * (longlong)sStack_5a) >> 0x10) +
               (int)((ulonglong)((longlong)piVar22[1] * (longlong)sStack_5e) >> 0x10) +
               (int)((ulonglong)((longlong)piVar22[2] * (longlong)sStack_60) >> 0x10) +
               (int)((ulonglong)((longlong)piVar22[3] * (longlong)sStack_62) >> 0x10) +
               (int)((ulonglong)((longlong)piVar22[4] * (longlong)sStack_64) >> 0x10) +
               (int)((ulonglong)((longlong)piVar22[5] * (longlong)sStack_66) >> 0x10) +
               (int)((ulonglong)((longlong)piVar22[6] * (longlong)local_68) >> 0x10) +
               (int)((ulonglong)((longlong)sStack_5c * (longlong)*piVar22) >> 0x10) +
               (*(int *)(param_1 + 0x924) >> 1);
      if (*(int *)(param_1 + 0x924) == 0x10) {
        uVar20 = (int)((ulonglong)((longlong)piVar22[-7] * (longlong)sStack_4e) >> 0x10) +
                 (int)((ulonglong)((longlong)piVar22[-9] * (longlong)sStack_4a) >> 0x10) + uVar20 +
                 (int)((ulonglong)((longlong)piVar22[-8] * (longlong)sStack_4c) >> 0x10) +
                 (int)((ulonglong)((longlong)piVar22[-6] * (longlong)sStack_50) >> 0x10) +
                 (int)((ulonglong)((longlong)piVar22[-5] * (longlong)sStack_52) >> 0x10) +
                 (int)((ulonglong)((longlong)piVar22[-4] * (longlong)sStack_54) >> 0x10);
      }
      uVar24 = piVar22[7];
      uVar10 = uVar20;
      if ((int)uVar20 < -0x8000000) {
        uVar10 = 0xf8000000;
      }
      if (0x7ffffff < (int)uVar20) {
        uVar10 = 0x7ffffff;
      }
      if ((int)(uVar10 * 0x10 + uVar24) < 0) {
        if ((int)(uVar24 | uVar10 << 4) < 0) goto LAB_145517e27;
        iVar9 = 0x7fffffff;
      }
      else if ((uVar24 & (uVar10 & 0xf8000000) << 4) == 0) {
LAB_145517e27:
        iVar9 = uVar10 * 0x10 + uVar24;
      }
      else {
        iVar9 = -0x80000000;
      }
      piVar22[7] = iVar9;
      iVar11 = ((int)((ulonglong)((longlong)iVar9 * (longlong)(iVar14 >> 6)) >> 0x10) >> 7) + 1 >> 1
      ;
      iVar9 = 0x7fff;
      if ((iVar11 < 0x8000) && (iVar9 = iVar11, iVar11 < -0x8000)) {
        iVar9 = -0x8000;
      }
      sVar8 = *(short *)(param_3 + uVar17 * 2);
      iVar26 = 0x7fff;
      iVar27 = 0x7fff;
      if (iVar9 + sVar8 < 0x8000) {
        if ((iVar11 < 0x8000) && (iVar26 = iVar11, iVar11 < -0x8000)) {
          iVar26 = -0x8000;
        }
        if (iVar26 + sVar8 < -0x8000) {
          sVar8 = -0x8000;
        }
        else {
          if ((iVar11 < 0x8000) && (iVar27 = iVar11, iVar11 < -0x8000)) {
            iVar27 = -0x8000;
          }
          sVar8 = (short)iVar27 + sVar8;
        }
      }
      else {
        sVar8 = 0x7fff;
      }
      *(short *)(param_3 + uVar17 * 2) = sVar8;
      piVar22 = piVar22 + 1;
      uVar17 = uVar17 + 1;
      _Src = local_78[0];
      puVar30 = local_78[1];
    } while ((longlong)uVar17 < lVar28);
  }
  puVar1 = (undefined8 *)((longlong)puVar30 + lVar28 * 4);
  uVar7 = puVar1[1];
  *(undefined8 *)((longlong)_Src + 0x520) = *puVar1;
  *(undefined8 *)((longlong)_Src + 0x528) = uVar7;
  puVar1 = (undefined8 *)((longlong)puVar30 + lVar28 * 4 + 0x10);
  uVar7 = puVar1[1];
  *(undefined8 *)((longlong)_Src + 0x530) = *puVar1;
  *(undefined8 *)((longlong)_Src + 0x538) = uVar7;
  puVar16 = (undefined4 *)((longlong)puVar30 + lVar28 * 4 + 0x20);
  uVar2 = puVar16[1];
  uVar3 = puVar16[2];
  uVar6 = puVar16[3];
  *(undefined4 *)((longlong)_Src + 0x540) = *puVar16;
  *(undefined4 *)((longlong)_Src + 0x544) = uVar2;
  *(undefined4 *)((longlong)_Src + 0x548) = uVar3;
  *(undefined4 *)((longlong)_Src + 0x54c) = uVar6;
  puVar30 = (undefined8 *)((longlong)puVar30 + lVar28 * 4 + 0x30);
  uVar7 = puVar30[1];
  *(undefined8 *)((longlong)_Src + 0x550) = *puVar30;
  *(undefined8 *)((longlong)_Src + 0x558) = uVar7;
LAB_145517f13:
  uVar17 = local_48 ^ (ulonglong)local_78;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar18 + -8) = &UNK_145517f1f;
  FUN_144d8e3a0(uVar17);
}



// FUNCTION 145517f38 FUN_145517f38 body=612 status=ok
// SIG undefined FUN_145517f38(void)

void FUN_145517f38(longlong param_1,void *param_2,int param_3)

{
  void *_Src;
  short sVar1;
  undefined *puVar2;
  longlong lVar3;
  char cVar4;
  short *psVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  char *pcVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStack_a8 [32];
  int local_88;
  short local_78 [16];
  short local_58 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar8 = 0;
  iVar7 = 0;
  local_88 = *(int *)(param_1 + 0x914);
  FUN_145519a40((longlong)param_2 + 0x10,param_1 + 0xac8,param_1 + 0x908,param_3 == 2);
  FUN_1455ddce4(local_78,param_1 + 0xad0,*(undefined8 *)(param_1 + 0xac0));
  _Src = (void *)((longlong)param_2 + 0x40);
  FUN_1455dd964(_Src,local_78,*(undefined4 *)(param_1 + 0x924),*(undefined4 *)(param_1 + 0x1060));
  if (*(int *)(param_1 + 0x948) == 1) {
    *(undefined1 *)(param_1 + 0xae7) = 4;
    cVar4 = '\x04';
  }
  else {
    cVar4 = *(char *)(param_1 + 0xae7);
  }
  uVar10 = *(uint *)(param_1 + 0x924);
  if (cVar4 < '\x04') {
    if (0 < (int)uVar10) {
      uVar6 = (ulonglong)uVar10;
      uVar11 = uVar8;
      do {
        sVar1 = *(short *)((param_1 - (longlong)local_78) + 0x928 +
                          (longlong)((longlong)local_78 + uVar11));
        *(short *)((longlong)local_58 + uVar11) =
             (short)(((int)*(short *)((longlong)local_78 + uVar11) - (int)sVar1) * (int)cVar4 >> 2)
             + sVar1;
        uVar11 = uVar11 + 2;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    FUN_1455dd964((longlong)param_2 + 0x20,local_58,(longlong)(int)uVar10,
                  *(undefined4 *)(param_1 + 0x1060));
  }
  else {
    memcpy((void *)((longlong)param_2 + 0x20),_Src,(longlong)(int)uVar10 * 2);
  }
  memcpy((void *)(param_1 + 0x928),local_78,(longlong)*(int *)(param_1 + 0x924) * 2);
  if (*(int *)(param_1 + 0x1058) != 0) {
    FUN_1455dd478((longlong)param_2 + 0x20,*(undefined4 *)(param_1 + 0x924),0xf852);
    FUN_1455dd478(_Src,*(undefined4 *)(param_1 + 0x924),0xf852);
  }
  if (*(char *)(param_1 + 0xae5) == '\x02') {
    local_88 = *(int *)(param_1 + 0x914);
    FUN_1455ddbc8(*(undefined2 *)(param_1 + 0xae2),*(undefined1 *)(param_1 + 0xae4),param_2,
                  *(undefined4 *)(param_1 + 0x90c));
    puVar2 = (&PTR_DAT_149da0a88)[*(char *)(param_1 + 0xae8)];
    if (0 < *(int *)(param_1 + 0x914)) {
      pcVar9 = (char *)(param_1 + 0xacc);
      psVar5 = (short *)((longlong)param_2 + 0x60);
      uVar11 = uVar8;
      do {
        cVar4 = *pcVar9;
        uVar6 = uVar8;
        do {
          lVar3 = uVar6 + (longlong)cVar4 * 5;
          uVar6 = uVar6 + 1;
          *psVar5 = (short)(char)puVar2[lVar3] << 7;
          psVar5 = psVar5 + 1;
        } while ((longlong)uVar6 < 5);
        uVar10 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
        pcVar9 = pcVar9 + 1;
      } while ((int)uVar10 < *(int *)(param_1 + 0x914));
    }
    iVar7 = (int)(short)(&DAT_149d32c0c)[*(char *)(param_1 + 0xae9)];
  }
  else {
    memset(param_2,0,(longlong)*(int *)(param_1 + 0x914) << 2);
    memset((void *)((longlong)param_2 + 0x60),0,(longlong)(*(int *)(param_1 + 0x914) * 5) * 2);
    *(undefined1 *)(param_1 + 0xae8) = 0;
  }
  *(int *)((longlong)param_2 + 0x88) = iVar7;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_a8);
}



// FUNCTION 1455181b4 FUN_1455181b4 body=2542 status=ok
// SIG undefined FUN_1455181b4(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455181b4(uint *param_1,uint *param_2,undefined2 *param_3,short *param_4,undefined4 param_5
                  )

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined8 *puVar5;
  longlong lVar6;
  short sVar7;
  short sVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int *piVar20;
  int iVar21;
  longlong lVar22;
  undefined4 *puVar23;
  undefined8 *puVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  uint *puVar30;
  uint *puVar31;
  int iVar32;
  uint *_Src;
  longlong lVar33;
  longlong lVar34;
  char cVar35;
  undefined2 *puVar36;
  undefined8 auStack_110 [5];
  uint auStack_e8 [4];
  uint local_d8 [2];
  uint *local_d0;
  longlong local_c8;
  int local_c0 [2];
  uint *local_b8;
  longlong local_b0;
  uint *local_a8;
  int local_a0 [2];
  longlong local_98;
  uint *puStack_90;
  undefined8 *local_88;
  undefined2 *puStack_80;
  longlong local_78;
  uint *puStack_70;
  undefined2 *local_68;
  short sStack_60;
  short sStack_5e;
  short sStack_5c;
  short sStack_5a;
  short local_58;
  short sStack_56;
  short local_54;
  short local_52;
  short local_50;
  short local_4e;
  short local_4c;
  short local_4a;
  short local_48;
  short local_46;
  short local_44;
  short local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)local_d8;
  local_68 = param_3;
  uVar19 = (longlong)(int)param_1[0x248] * 2;
  local_d0 = param_2;
  uVar18 = uVar19 + 0xf;
  if (uVar18 <= uVar19) {
    uVar18 = 0xffffffffffffff0;
  }
  auStack_110[0] = 0x145518224;
  uVar13 = param_1[0x246];
  lVar9 = -(uVar18 & 0xfffffffffffffff0);
  local_78 = (longlong)local_d8 + lVar9;
  uVar19 = (longlong)(int)(uVar13 + param_1[0x248]) * 4;
  uVar18 = uVar19 + 0xf;
  if (uVar18 <= uVar19) {
    uVar18 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_110 + lVar9) = 0x145518257;
  uVar29 = param_1[0x247];
  lVar10 = -(uVar18 & 0xfffffffffffffff0);
  local_98 = (longlong)local_d8 + lVar10 + lVar9;
  uVar19 = (longlong)(int)uVar29 * 4;
  uVar18 = uVar19 + 0xf;
  if (uVar18 <= uVar19) {
    uVar18 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_110 + lVar10 + lVar9) = 0x145518289;
  lVar11 = -(uVar18 & 0xfffffffffffffff0);
  lVar6 = (longlong)(int)uVar29 * 4;
  uVar18 = lVar6 + 0x4f;
  puVar31 = (uint *)((longlong)local_d8 + lVar11 + lVar10 + lVar9);
  puStack_70 = puVar31;
  if (uVar18 <= lVar6 + 0x40U) {
    uVar18 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_110 + lVar11 + lVar10 + lVar9) = 0x1455182b5;
  lVar6 = -(uVar18 & 0xfffffffffffffff0);
  iVar28 = 0;
  puVar24 = (undefined8 *)((longlong)local_d8 + lVar6 + lVar11 + lVar10 + lVar9);
  local_88 = puVar24;
  sVar7 = *(short *)(&DAT_149d32c78 +
                    ((longlong)*(char *)((longlong)param_1 + 0xae6) +
                    ((longlong)*(char *)((longlong)param_1 + 0xae5) >> 1) * 2) * 2);
  iVar16 = (int)*(char *)((longlong)param_1 + 0xaea);
  local_d8[0]._0_1_ = *(char *)((longlong)param_1 + 0xae7);
  puVar30 = param_1;
  if (0 < (int)uVar13) {
    do {
      puVar30 = puVar30 + 1;
      sVar8 = *param_4;
      uVar13 = sVar8 * 0x4000;
      *puVar30 = uVar13;
      iVar16 = iVar16 * 0xbb38435 + 0x3619636b;
      iVar27 = (int)sVar8 << 0xe;
      if (iVar27 < 1) {
        if (iVar27 < 0) {
          uVar13 = uVar13 + 0x500;
        }
      }
      else {
        uVar13 = uVar13 - 0x500;
      }
      uVar13 = uVar13 + sVar7 * 0x10;
      *puVar30 = uVar13;
      if (iVar16 < 0) {
        *puVar30 = -uVar13;
      }
      iVar28 = iVar28 + 1;
      iVar16 = iVar16 + *param_4;
      param_4 = param_4 + 1;
    } while (iVar28 < (int)param_1[0x246]);
  }
  uVar12 = *(undefined8 *)(param_1 + 0x143);
  iVar16 = 0;
  puStack_80 = param_3;
  local_c0[0] = 0;
  *puVar24 = *(undefined8 *)(param_1 + 0x141);
  *(undefined8 *)((longlong)&local_d0 + lVar6 + lVar11 + lVar10 + lVar9) = uVar12;
  local_b8 = param_1 + 1;
  uVar12 = *(undefined8 *)(param_1 + 0x147);
  *(undefined8 *)((longlong)local_c0 + lVar6 + lVar11 + lVar10 + lVar9 + -8) =
       *(undefined8 *)(param_1 + 0x145);
  *(undefined8 *)((longlong)local_c0 + lVar6 + lVar11 + lVar10 + lVar9) = uVar12;
  uVar12 = *(undefined8 *)(param_1 + 0x14b);
  *(undefined8 *)((longlong)&local_b8 + lVar6 + lVar11 + lVar10 + lVar9) =
       *(undefined8 *)(param_1 + 0x149);
  *(undefined8 *)((longlong)&local_b0 + lVar6 + lVar11 + lVar10 + lVar9) = uVar12;
  uVar12 = *(undefined8 *)(param_1 + 0x14f);
  *(undefined8 *)((longlong)local_a0 + lVar6 + lVar11 + lVar10 + lVar9 + -8) =
       *(undefined8 *)(param_1 + 0x14d);
  *(undefined8 *)((longlong)local_a0 + lVar6 + lVar11 + lVar10 + lVar9) = uVar12;
  if (0 < (int)param_1[0x245]) {
    local_d8[1] = param_1[0x248];
    local_c8 = (longlong)(int)local_d8[1];
    local_b0 = 0;
    puVar30 = param_2;
    local_a8 = param_2;
    do {
      uVar13 = param_1[0x249];
      _Src = puVar30 + (((longlong)iVar16 >> 1) + 1) * 8;
      puStack_90 = puVar31;
      *(undefined8 *)((longlong)auStack_110 + lVar6 + lVar11 + lVar10 + lVar9) = 0x1455183e3;
      memcpy(&sStack_60,_Src,(longlong)(int)uVar13 * 2);
      uVar13 = param_2[4];
      cVar35 = *(char *)((longlong)param_1 + 0xae5);
      local_a0[0] = (int)uVar13 >> 6;
      uVar29 = (uVar13 ^ (int)uVar13 >> 0x1f) - ((int)uVar13 >> 0x1f);
      if (uVar29 == 0) {
        iVar28 = 0x1f;
      }
      else {
        iVar28 = 0x1f;
        if (uVar29 != 0) {
          for (; uVar29 >> iVar28 == 0; iVar28 = iVar28 + -1) {
          }
        }
        iVar28 = 0x1e - iVar28;
      }
      iVar25 = uVar13 << ((byte)iVar28 & 0x1f);
      lVar22 = 0x1fffffff / (longlong)(iVar25 >> 0x10);
      iVar27 = (int)lVar22;
      iVar28 = 0xe - iVar28;
      iVar27 = (int)((ulonglong)
                     ((longlong)
                      ((int)((ulonglong)((longlong)(short)lVar22 * (longlong)iVar25) >> 0x10) * -8)
                     * (longlong)iVar27) >> 0x10) + iVar27 * 0x10000;
      if (iVar28 < 1) {
        bVar15 = -(byte)iVar28;
        iVar26 = -0x80000000 >> (bVar15 & 0x1f);
        iVar21 = 0x7fffffff >> (bVar15 & 0x1f);
        iVar25 = iVar27;
        if (iVar27 < iVar21) {
          iVar25 = iVar21;
        }
        iVar28 = iVar27;
        if (iVar27 < iVar26) {
          iVar28 = iVar26;
        }
        if (iVar26 < iVar27) {
          iVar25 = iVar26;
        }
        if (iVar21 < iVar27) {
          iVar28 = iVar21;
        }
        if (iVar21 < iVar26) {
          iVar28 = iVar25;
        }
        iVar28 = iVar28 << (bVar15 & 0x1f);
      }
      else if (iVar28 < 0x20) {
        iVar28 = iVar27 >> ((byte)iVar28 & 0x1f);
      }
      else {
        iVar28 = 0;
      }
      uVar17 = *param_1;
      if (uVar13 == uVar17) {
        iVar27 = 0x10000;
      }
      else {
        uVar14 = (uVar17 ^ (int)uVar17 >> 0x1f) - ((int)uVar17 >> 0x1f);
        if (uVar14 == 0) {
          iVar27 = 0x1f;
        }
        else {
          iVar27 = 0x1f;
          if (uVar14 != 0) {
            for (; uVar14 >> iVar27 == 0; iVar27 = iVar27 + -1) {
            }
          }
          iVar27 = 0x1e - iVar27;
        }
        iVar25 = uVar17 << ((byte)iVar27 & 0x1f);
        if (uVar29 == 0) {
          iVar21 = 0x1f;
        }
        else {
          iVar21 = 0x1f;
          if (uVar29 != 0) {
            for (; uVar29 >> iVar21 == 0; iVar21 = iVar21 + -1) {
            }
          }
          iVar21 = 0x1e - iVar21;
        }
        iVar32 = uVar13 << ((byte)iVar21 & 0x1f);
        lVar22 = (longlong)(short)(0x1fffffff / (longlong)(iVar32 >> 0x10));
        iVar26 = (int)((ulonglong)(iVar25 * lVar22) >> 0x10);
        iVar27 = (iVar27 - iVar21) + 0xd;
        iVar26 = iVar26 + (int)((ulonglong)
                                ((iVar25 + (int)((ulonglong)((longlong)iVar26 * (longlong)iVar32) >>
                                                0x20) * -8) * lVar22) >> 0x10);
        if (iVar27 < 0) {
          bVar15 = -(byte)iVar27;
          iVar32 = -0x80000000 >> (bVar15 & 0x1f);
          iVar21 = 0x7fffffff >> (bVar15 & 0x1f);
          iVar25 = iVar26;
          if (iVar26 < iVar21) {
            iVar25 = iVar21;
          }
          iVar27 = iVar26;
          if (iVar26 < iVar32) {
            iVar27 = iVar32;
          }
          if (iVar32 < iVar26) {
            iVar25 = iVar32;
          }
          if (iVar21 < iVar26) {
            iVar27 = iVar21;
          }
          if (iVar21 < iVar32) {
            iVar27 = iVar25;
          }
          iVar27 = iVar27 << (bVar15 & 0x1f);
        }
        else if (iVar27 < 0x20) {
          iVar27 = iVar26 >> ((byte)iVar27 & 0x1f);
        }
        else {
          iVar27 = 0;
        }
        lVar22 = 0;
        do {
          *(int *)((longlong)puVar24 + lVar22 * 4) =
               (int)((ulonglong)
                     ((longlong)*(int *)((longlong)puVar24 + lVar22 * 4) * (longlong)iVar27) >> 0x10
                    );
          lVar22 = lVar22 + 1;
        } while (lVar22 < 0x10);
        uVar13 = local_a8[4];
        puVar30 = local_d0;
      }
      *param_1 = uVar13;
      if ((((param_1[0x416] != 0) && (param_1[0x417] == 2)) &&
          (*(char *)((longlong)param_1 + 0xae5) != '\x02')) && (iVar16 < 2)) {
        cVar35 = '\x02';
        *(undefined8 *)((longlong)puVar30 + local_b0 + 0x60) = 0;
        *(undefined2 *)((longlong)puVar30 + local_b0 + 0x68) = 0;
        *(undefined2 *)((longlong)puVar30 + local_b0 + 100) = 0x1000;
        *local_a8 = param_1[0x241];
      }
      if (cVar35 == '\x02') {
        uVar29 = *local_a8;
        if ((iVar16 == 0) || ((iVar16 == 2 && ((char)local_d8[0] < '\x04')))) {
          uVar13 = param_1[0x248];
          iVar27 = ((uVar13 - uVar29) - param_1[0x249]) + -2;
          if (iVar27 < 1) {
            *(undefined8 *)((longlong)auStack_110 + lVar6 + lVar11 + lVar10 + lVar9) = 0x145518790;
            FUN_144bca940("assertion failed: start_idx > 0",
                          "../../../third_party/opus/src/silk/decode_core.c",0x90);
            uVar13 = param_1[0x248];
          }
          puVar36 = local_68;
          if (iVar16 == 2) {
            uVar17 = param_1[0x247];
            *(undefined8 *)((longlong)auStack_110 + lVar6 + lVar11 + lVar10 + lVar9) = 0x1455187c1;
            memcpy((void *)((longlong)param_1 + ((longlong)(int)uVar13 + 0x2a2) * 2),puVar36,
                   (longlong)(int)(uVar17 * 2) * 2);
          }
          uVar13 = param_1[0x247];
          lVar22 = local_78 + (longlong)iVar27 * 2;
          *(undefined4 *)((longlong)auStack_e8 + lVar6 + lVar11 + lVar10 + lVar9 + 8) = param_5;
          *(uint *)((longlong)auStack_e8 + lVar6 + lVar11 + lVar10 + lVar9) = param_1[0x249];
          *(undefined8 *)((longlong)auStack_110 + lVar6 + lVar11 + lVar10 + lVar9) = 0x14551880b;
          FUN_1455dd2cc(lVar22,(longlong)param_1 +
                               ((longlong)(int)(uVar13 * iVar16 + iVar27) + 0x2a2) * 2,_Src);
          if (iVar16 == 0) {
            iVar28 = (int)((ulonglong)((longlong)iVar28 * (longlong)(short)local_d0[0x22]) >> 0x10)
                     << 2;
          }
          iVar27 = 0;
          lVar22 = (longlong)(int)(uVar29 + 2);
          if (0 < (int)(uVar29 + 2)) {
            puVar23 = (undefined4 *)(local_98 + (local_c8 + -1) * 4);
            do {
              iVar25 = param_1[0x248] - iVar27;
              iVar27 = iVar27 + 1;
              *puVar23 = (int)((ulonglong)
                               ((longlong)*(short *)(local_78 + -2 + (longlong)iVar25 * 2) *
                               (longlong)iVar28) >> 0x10);
              puVar23 = puVar23 + -1;
              lVar22 = lVar22 + -1;
              puVar24 = local_88;
            } while (lVar22 != 0);
          }
        }
        else if ((iVar27 != 0x10000) &&
                (lVar22 = (longlong)(int)(uVar29 + 2), 0 < (int)(uVar29 + 2))) {
          piVar20 = (int *)(local_98 + (local_c8 + -1) * 4);
          do {
            *piVar20 = (int)((ulonglong)((longlong)*piVar20 * (longlong)iVar27) >> 0x10);
            piVar20 = piVar20 + -1;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
        }
        iVar28 = 0;
        uVar13 = param_1[0x247];
        piVar20 = (int *)(local_98 + ((longlong)(int)(local_d8[1] - uVar29) + 2) * 4);
        puVar31 = puStack_90;
        if (0 < (int)uVar13) {
          puVar30 = puStack_70;
          do {
            piVar1 = piVar20 + -4;
            local_d8[1] = local_d8[1] + 1;
            iVar28 = iVar28 + 1;
            piVar2 = piVar20 + -3;
            piVar3 = piVar20 + -2;
            piVar4 = piVar20 + -1;
            iVar27 = *piVar20;
            piVar20 = piVar20 + 1;
            uVar13 = *(int *)(((longlong)local_b8 - (longlong)puStack_70) + (longlong)puVar30) +
                     ((int)((ulonglong)
                            ((longlong)*(short *)((longlong)local_d0 + local_b0 + 0x60) *
                            (longlong)iVar27) >> 0x10) + 2 +
                     (int)((ulonglong)
                           ((longlong)*piVar1 *
                           (longlong)*(short *)((longlong)local_d0 + local_b0 + 0x68)) >> 0x10) +
                     (int)((ulonglong)
                           ((longlong)*piVar2 *
                           (longlong)*(short *)((longlong)local_d0 + local_b0 + 0x66)) >> 0x10) +
                     (int)((ulonglong)
                           ((longlong)*piVar3 *
                           (longlong)*(short *)((longlong)local_d0 + local_b0 + 100)) >> 0x10) +
                     (int)((ulonglong)
                           ((longlong)*piVar4 *
                           (longlong)*(short *)((longlong)local_d0 + local_b0 + 0x62)) >> 0x10)) * 2
            ;
            *puVar30 = uVar13;
            *(uint *)(local_98 + local_c8 * 4) = uVar13 * 2;
            puVar30 = puVar30 + 1;
            uVar13 = param_1[0x247];
            local_c8 = local_c8 + 1;
          } while (iVar28 < (int)uVar13);
          puVar24 = local_88;
        }
      }
      else {
        uVar13 = param_1[0x247];
        puVar31 = local_b8;
      }
      iVar28 = 0;
      if (0 < (int)uVar13) {
        lVar33 = (longlong)local_a0[0];
        piVar20 = (int *)(puVar24 + 7);
        puVar31 = (uint *)((longlong)puVar31 - (longlong)puVar24);
        lVar22 = (longlong)sStack_60;
        lVar34 = (longlong)sStack_5e;
        puStack_90 = puVar31;
        puVar36 = puStack_80;
        do {
          uVar13 = param_1[0x249];
          if ((uVar13 != 10) && (uVar13 != 0x10)) {
            *(undefined8 *)((longlong)auStack_110 + lVar6 + lVar11 + lVar10 + lVar9) = 0x1455188e2;
            FUN_144bca940("assertion failed: psDec->LPC_order == 10 || psDec->LPC_order == 16",
                          "../../../third_party/opus/src/silk/decode_core.c",199);
            uVar13 = param_1[0x249];
            puVar31 = puStack_90;
          }
          uVar29 = (int)((ulonglong)((longlong)piVar20[-8] * (longlong)local_4e) >> 0x10) +
                   (int)((ulonglong)((longlong)piVar20[-7] * (longlong)local_50) >> 0x10) +
                   (int)((ulonglong)((longlong)piVar20[-6] * (longlong)local_52) >> 0x10) +
                   (int)((ulonglong)((longlong)piVar20[-5] * (longlong)local_54) >> 0x10) +
                   (int)((ulonglong)((longlong)piVar20[-4] * (longlong)sStack_56) >> 0x10) +
                   (int)((ulonglong)((longlong)piVar20[-3] * (longlong)local_58) >> 0x10) +
                   (int)((ulonglong)((longlong)piVar20[-2] * (longlong)sStack_5a) >> 0x10) +
                   (int)((ulonglong)((longlong)piVar20[-1] * (longlong)sStack_5c) >> 0x10) +
                   (int)((ulonglong)(piVar20[1] * lVar22) >> 0x10) +
                   (int)((ulonglong)(*piVar20 * lVar34) >> 0x10) + ((int)uVar13 >> 1);
          if (uVar13 == 0x10) {
            uVar29 = (int)((ulonglong)((longlong)piVar20[-0xc] * (longlong)local_46) >> 0x10) +
                     (int)((ulonglong)((longlong)piVar20[-0xe] * (longlong)local_42) >> 0x10) +
                     uVar29 + (int)((ulonglong)((longlong)piVar20[-0xd] * (longlong)local_44) >>
                                   0x10) +
                     (int)((ulonglong)((longlong)piVar20[-0xb] * (longlong)local_48) >> 0x10) +
                     (int)((ulonglong)((longlong)piVar20[-10] * (longlong)local_4a) >> 0x10) +
                     (int)((ulonglong)((longlong)piVar20[-9] * (longlong)local_4c) >> 0x10);
          }
          uVar13 = *(uint *)((longlong)(puVar31 + -0xe) + (longlong)piVar20);
          uVar17 = uVar29;
          if ((int)uVar29 < -0x8000000) {
            uVar17 = 0xf8000000;
          }
          if (0x7ffffff < (int)uVar29) {
            uVar17 = 0x7ffffff;
          }
          if ((int)(uVar17 * 0x10 + uVar13) < 0) {
            if ((int)(uVar13 | uVar17 << 4) < 0) goto LAB_145518a94;
            iVar16 = 0x7fffffff;
          }
          else if ((uVar13 & (uVar17 & 0xf8000000) << 4) == 0) {
LAB_145518a94:
            iVar16 = uVar17 * 0x10 + uVar13;
          }
          else {
            iVar16 = -0x80000000;
          }
          piVar20[2] = iVar16;
          iVar27 = ((int)((ulonglong)(iVar16 * lVar33) >> 0x10) >> 7) + 1 >> 1;
          iVar16 = 0x7fff;
          if ((iVar27 < 0x8000) && (iVar16 = iVar27, iVar27 < -0x8000)) {
            iVar16 = -0x8000;
          }
          *puVar36 = (short)iVar16;
          iVar28 = iVar28 + 1;
          uVar13 = param_1[0x247];
          puVar36 = puVar36 + 1;
          piVar20 = piVar20 + 1;
          puVar24 = local_88;
          iVar16 = local_c0[0];
        } while (iVar28 < (int)uVar13);
      }
      puVar31 = puStack_70;
      puVar30 = local_d0;
      iVar16 = iVar16 + 1;
      local_b0 = local_b0 + 10;
      param_2 = local_a8 + 1;
      lVar22 = (longlong)(int)uVar13;
      local_c0[0] = iVar16;
      local_a8 = param_2;
      puVar5 = (undefined8 *)((longlong)puVar24 + lVar22 * 4);
      uVar12 = puVar5[1];
      *puVar24 = *puVar5;
      puVar24[1] = uVar12;
      puVar5 = (undefined8 *)((longlong)puVar24 + lVar22 * 4 + 0x10);
      uVar12 = puVar5[1];
      puVar24[2] = *puVar5;
      puVar24[3] = uVar12;
      puVar5 = (undefined8 *)((longlong)puVar24 + lVar22 * 4 + 0x20);
      uVar12 = puVar5[1];
      puVar24[4] = *puVar5;
      puVar24[5] = uVar12;
      puVar5 = (undefined8 *)((longlong)puVar24 + lVar22 * 4 + 0x30);
      uVar12 = puVar5[1];
      puVar24[6] = *puVar5;
      puVar24[7] = uVar12;
      local_b8 = local_b8 + (int)param_1[0x247];
      puStack_80 = puStack_80 + (int)param_1[0x247];
    } while (iVar16 < (int)param_1[0x245]);
  }
  uVar12 = puVar24[1];
  *(undefined8 *)(param_1 + 0x141) = *puVar24;
  *(undefined8 *)(param_1 + 0x143) = uVar12;
  uVar12 = puVar24[3];
  *(undefined8 *)(param_1 + 0x145) = puVar24[2];
  *(undefined8 *)(param_1 + 0x147) = uVar12;
  uVar13 = *(uint *)((longlong)puVar24 + 0x24);
  uVar29 = *(uint *)(puVar24 + 5);
  uVar17 = *(uint *)((longlong)puVar24 + 0x2c);
  param_1[0x149] = *(uint *)(puVar24 + 4);
  param_1[0x14a] = uVar13;
  param_1[0x14b] = uVar29;
  param_1[0x14c] = uVar17;
  uVar13 = *(uint *)((longlong)puVar24 + 0x34);
  uVar29 = *(uint *)(puVar24 + 7);
  uVar17 = *(uint *)((longlong)puVar24 + 0x3c);
  param_1[0x14d] = *(uint *)(puVar24 + 6);
  param_1[0x14e] = uVar13;
  param_1[0x14f] = uVar29;
  param_1[0x150] = uVar17;
  uVar18 = local_40 ^ (ulonglong)local_d8;
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)auStack_110 + lVar6 + lVar11 + lVar10 + lVar9) = &UNK_145518ba2;
  FUN_144d8e3a0(uVar18);
}



// FUNCTION 145518bbc FUN_145518bbc body=212 status=ok
// SIG undefined FUN_145518bbc(void)

void FUN_145518bbc(short *param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  
  iVar2 = 0;
  pbVar4 = (byte *)((longlong)((*(short *)(param_3 + 2) * param_4) / 2) +
                   *(longlong *)(param_3 + 0x28));
  if (0 < *(short *)(param_3 + 2)) {
    puVar5 = (undefined1 *)(param_2 + 1);
    do {
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      *param_1 = (ushort)(bVar1 >> 1 & 7) * 9;
      puVar5[-1] = *(undefined1 *)
                    ((longlong)(int)((*(short *)(param_3 + 2) + -1) * (bVar1 & 1) + iVar2) +
                    *(longlong *)(param_3 + 0x20));
      param_1[1] = (ushort)(bVar1 >> 5) * 9;
      iVar3 = (bVar1 >> 4 & 1) * (*(short *)(param_3 + 2) + -1) + iVar2;
      iVar2 = iVar2 + 2;
      *puVar5 = *(undefined1 *)((longlong)iVar3 + 1 + *(longlong *)(param_3 + 0x20));
      puVar5 = puVar5 + 2;
      param_1 = param_1 + 2;
    } while (iVar2 < *(short *)(param_3 + 2));
  }
  return;
}



// FUNCTION 145518c90 FUN_145518c90 body=206 status=ok
// SIG undefined FUN_145518c90(void)

void FUN_145518c90(undefined8 param_1,longlong param_2,int param_3,short param_4,short param_5,
                  longlong param_6)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_28;
  undefined1 local_27;
  
  local_27 = 0;
  lVar4 = (longlong)(param_3 + 8) >> 4;
  if (0 < lVar4) {
    lVar3 = 0;
    do {
      uVar2 = *(uint *)(param_6 + lVar3 * 4);
      if (0 < (int)uVar2) {
        uVar2 = uVar2 & 0x1f;
        uVar1 = 6;
        if (uVar2 < 6) {
          uVar1 = uVar2;
        }
        lVar5 = 0;
        local_28 = (&DAT_149da10c0)
                   [(ulonglong)uVar1 + (longlong)((short)(param_4 * 2 + param_5) * 7)];
        do {
          if (*(char *)(lVar5 + param_2) != '\0') {
            FUN_144f356e4(param_1,((int)*(char *)(lVar5 + param_2) >> 7) + 1,&local_28,8);
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 < 0x10);
      }
      param_2 = param_2 + 0x10;
      lVar3 = lVar3 + 1;
    } while (lVar3 < lVar4);
  }
  return;
}



// FUNCTION 145518d60 FUN_145518d60 body=233 status=ok
// SIG undefined FUN_145518d60(void)

void FUN_145518d60(undefined8 param_1,longlong param_2,int param_3,short param_4,short param_5,
                  longlong param_6)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_38;
  undefined1 local_37;
  
  local_37 = 0;
  lVar5 = (longlong)(param_3 + 8) >> 4;
  lVar6 = 0;
  if (0 < lVar5) {
    do {
      uVar3 = *(uint *)(param_6 + lVar6 * 4);
      if (0 < (int)uVar3) {
        uVar3 = uVar3 & 0x1f;
        uVar1 = 6;
        if (uVar3 < 6) {
          uVar1 = uVar3;
        }
        local_38 = (&DAT_149da10c0)
                   [(ulonglong)uVar1 + (longlong)((short)(param_4 * 2 + param_5) * 7)];
        lVar4 = 0;
        do {
          if (0 < *(short *)(param_2 + lVar4 * 2)) {
            sVar2 = FUN_144f2f574(param_1,&local_38,8);
            *(short *)(param_2 + lVar4 * 2) = *(short *)(param_2 + lVar4 * 2) * (sVar2 * 2 + -1);
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 < 0x10);
      }
      param_2 = param_2 + 0x20;
      lVar6 = lVar6 + 1;
    } while (lVar6 < lVar5);
  }
  return;
}



// FUNCTION 145518e4c FUN_145518e4c body=652 status=ok
// SIG undefined FUN_145518e4c(void)

void FUN_145518e4c(undefined8 param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  undefined1 auStack_98 [32];
  int local_78 [6];
  int local_60 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = 0;
  piVar4 = local_78 + 6;
  do {
    lVar2 = lVar3 + 4;
    piVar1 = (int *)((longlong)param_2 + lVar3);
    lVar3 = lVar3 + 8;
    *piVar4 = *(int *)((longlong)param_2 + lVar2) + *piVar1;
    piVar4 = piVar4 + 1;
  } while (lVar3 < 0x40);
  lVar3 = 0;
  do {
    local_78[lVar3 + 2] = local_78[lVar3 * 2 + 7] + local_78[lVar3 * 2 + 6];
    lVar3 = lVar3 + 1;
  } while (lVar3 < 4);
  lVar3 = 0;
  do {
    local_78[lVar3] = local_78[lVar3 * 2 + 3] + local_78[lVar3 * 2 + 2];
    lVar3 = lVar3 + 1;
  } while (lVar3 < 2);
  if (0 < local_78[1] + local_78[0]) {
    FUN_144f356e4(param_1,local_78[0],
                  &DAT_149da1010 + (byte)(&DAT_149da10a8)[local_78[1] + local_78[0]],8);
  }
  if (0 < local_78[0]) {
    FUN_144f356e4(param_1,local_78[2],&DAT_149da0f70 + (byte)(&DAT_149da10a8)[local_78[0]],8);
  }
  if (0 < local_78[2]) {
    FUN_144f356e4(param_1,local_60[0],&DAT_149da0ed0 + (byte)(&DAT_149da10a8)[local_78[2]],8);
  }
  if (0 < local_60[0]) {
    FUN_144f356e4(param_1,*param_2,&DAT_149da0e30 + (byte)(&DAT_149da10a8)[local_60[0]],8);
  }
  if (0 < local_60[1]) {
    FUN_144f356e4(param_1,param_2[2],&DAT_149da0e30 + (byte)(&DAT_149da10a8)[local_60[1]],8);
  }
  if (0 < local_78[3]) {
    FUN_144f356e4(param_1,local_60[2],&DAT_149da0ed0 + (byte)(&DAT_149da10a8)[local_78[3]],8);
  }
  if (0 < local_60[2]) {
    FUN_144f356e4(param_1,param_2[4],&DAT_149da0e30 + (byte)(&DAT_149da10a8)[local_60[2]],8);
  }
  if (0 < local_60[3]) {
    FUN_144f356e4(param_1,param_2[6],&DAT_149da0e30 + (byte)(&DAT_149da10a8)[local_60[3]],8);
  }
  if (0 < local_78[1]) {
    FUN_144f356e4(param_1,local_78[4],&DAT_149da0f70 + (byte)(&DAT_149da10a8)[local_78[1]],8);
  }
  if (0 < local_78[4]) {
    FUN_144f356e4(param_1,local_60[4],&DAT_149da0ed0 + (byte)(&DAT_149da10a8)[local_78[4]],8);
  }
  if (0 < local_60[4]) {
    FUN_144f356e4(param_1,param_2[8],&DAT_149da0e30 + (byte)(&DAT_149da10a8)[local_60[4]],8);
  }
  if (0 < local_60[5]) {
    FUN_144f356e4(param_1,param_2[10],&DAT_149da0e30 + (byte)(&DAT_149da10a8)[local_60[5]],8);
  }
  if (0 < local_78[5]) {
    FUN_144f356e4(param_1,local_60[6],&DAT_149da0ed0 + (byte)(&DAT_149da10a8)[local_78[5]],8);
  }
  if (0 < local_60[6]) {
    FUN_144f356e4(param_1,param_2[0xc],&DAT_149da0e30 + (byte)(&DAT_149da10a8)[local_60[6]],8);
  }
  if (0 < local_60[7]) {
    FUN_144f356e4(param_1,param_2[0xe],&DAT_149da0e30 + (byte)(&DAT_149da10a8)[local_60[7]],8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
}



// FUNCTION 1455190f0 FUN_1455190f0 body=875 status=ok
// SIG undefined FUN_1455190f0(void)

void FUN_1455190f0(short *param_1,undefined8 param_2,int param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  
  if (param_3 < 1) {
    sVar5 = 0;
    sVar1 = 0;
  }
  else {
    sVar1 = FUN_144f2f574(param_2,&DAT_149da1010 + (byte)(&DAT_149da10a8)[param_3],8);
    sVar5 = (short)param_3 - sVar1;
  }
  if (sVar1 < 1) {
    sVar1 = 0;
    sVar2 = 0;
  }
  else {
    sVar2 = FUN_144f2f574(param_2,&DAT_149da0f70 + (byte)(&DAT_149da10a8)[sVar1],8);
    sVar1 = sVar1 - sVar2;
  }
  if (sVar2 < 1) {
    sVar2 = 0;
    sVar3 = 0;
  }
  else {
    sVar3 = FUN_144f2f574(param_2,&DAT_149da0ed0 + (byte)(&DAT_149da10a8)[sVar2],8);
    sVar2 = sVar2 - sVar3;
  }
  if (sVar3 < 1) {
    sVar3 = 0;
    sVar4 = 0;
  }
  else {
    sVar4 = FUN_144f2f574(param_2,&DAT_149da0e30 + (byte)(&DAT_149da10a8)[sVar3],8);
    sVar3 = sVar3 - sVar4;
  }
  *param_1 = sVar4;
  param_1[1] = sVar3;
  if (sVar2 < 1) {
    sVar2 = 0;
    sVar3 = 0;
  }
  else {
    sVar3 = FUN_144f2f574(param_2,&DAT_149da0e30 + (byte)(&DAT_149da10a8)[sVar2],8);
    sVar2 = sVar2 - sVar3;
  }
  param_1[2] = sVar3;
  param_1[3] = sVar2;
  if (sVar1 < 1) {
    sVar1 = 0;
    sVar2 = 0;
  }
  else {
    sVar2 = FUN_144f2f574(param_2,&DAT_149da0ed0 + (byte)(&DAT_149da10a8)[sVar1],8);
    sVar1 = sVar1 - sVar2;
  }
  if (sVar2 < 1) {
    sVar2 = 0;
    sVar3 = 0;
  }
  else {
    sVar3 = FUN_144f2f574(param_2,&DAT_149da0e30 + (byte)(&DAT_149da10a8)[sVar2],8);
    sVar2 = sVar2 - sVar3;
  }
  param_1[4] = sVar3;
  param_1[5] = sVar2;
  if (sVar1 < 1) {
    sVar1 = 0;
    sVar2 = 0;
  }
  else {
    sVar2 = FUN_144f2f574(param_2,&DAT_149da0e30 + (byte)(&DAT_149da10a8)[sVar1],8);
    sVar1 = sVar1 - sVar2;
  }
  param_1[6] = sVar2;
  param_1[7] = sVar1;
  if (sVar5 < 1) {
    sVar5 = 0;
    sVar1 = 0;
  }
  else {
    sVar1 = FUN_144f2f574(param_2,&DAT_149da0f70 + (byte)(&DAT_149da10a8)[sVar5],8);
    sVar5 = sVar5 - sVar1;
  }
  if (sVar1 < 1) {
    sVar1 = 0;
    sVar2 = 0;
  }
  else {
    sVar2 = FUN_144f2f574(param_2,&DAT_149da0ed0 + (byte)(&DAT_149da10a8)[sVar1],8);
    sVar1 = sVar1 - sVar2;
  }
  if (sVar2 < 1) {
    sVar2 = 0;
    sVar3 = 0;
  }
  else {
    sVar3 = FUN_144f2f574(param_2,&DAT_149da0e30 + (byte)(&DAT_149da10a8)[sVar2],8);
    sVar2 = sVar2 - sVar3;
  }
  param_1[8] = sVar3;
  param_1[9] = sVar2;
  if (sVar1 < 1) {
    sVar1 = 0;
    sVar2 = 0;
  }
  else {
    sVar2 = FUN_144f2f574(param_2,&DAT_149da0e30 + (byte)(&DAT_149da10a8)[sVar1],8);
    sVar1 = sVar1 - sVar2;
  }
  param_1[10] = sVar2;
  param_1[0xb] = sVar1;
  if (sVar5 < 1) {
    sVar5 = 0;
    sVar1 = 0;
  }
  else {
    sVar1 = FUN_144f2f574(param_2,&DAT_149da0ed0 + (byte)(&DAT_149da10a8)[sVar5],8);
    sVar5 = sVar5 - sVar1;
  }
  if (sVar1 < 1) {
    sVar1 = 0;
    sVar2 = 0;
  }
  else {
    sVar2 = FUN_144f2f574(param_2,&DAT_149da0e30 + (byte)(&DAT_149da10a8)[sVar1],8);
    sVar1 = sVar1 - sVar2;
  }
  param_1[0xc] = sVar2;
  param_1[0xd] = sVar1;
  if (sVar5 < 1) {
    sVar5 = 0;
    sVar1 = 0;
  }
  else {
    sVar1 = FUN_144f2f574(param_2,&DAT_149da0e30 + (byte)(&DAT_149da10a8)[sVar5],8);
    sVar5 = sVar5 - sVar1;
  }
  param_1[0xe] = sVar1;
  param_1[0xf] = sVar5;
  return;
}



// FUNCTION 14551945c FUN_14551945c body=258 status=ok
// SIG undefined FUN_14551945c(void)

int FUN_14551945c(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar1 = (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
  if (uVar1 == 0) {
    iVar7 = 0x20;
  }
  else {
    iVar7 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    iVar7 = 0x1f - iVar7;
  }
  iVar8 = param_1 << ((byte)(iVar7 + -1) & 0x1f);
  uVar1 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
  if (uVar1 == 0) {
    iVar5 = 0x20;
  }
  else {
    iVar5 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar5 = 0x1f - iVar5;
  }
  iVar4 = param_2 << ((byte)(iVar5 + -1) & 0x1f);
  lVar3 = (longlong)(short)(0x1fffffff / (longlong)(iVar4 >> 0x10));
  iVar6 = (int)((ulonglong)(iVar8 * lVar3) >> 0x10);
  iVar6 = iVar6 + (int)((ulonglong)
                        ((iVar8 + (int)((ulonglong)((longlong)iVar6 * (longlong)iVar4) >> 0x20) * -8
                         ) * lVar3) >> 0x10);
  iVar7 = (((iVar7 + -1) - (iVar5 + -1)) - param_3) + 0x1d;
  if (iVar7 < 0) {
    bVar2 = -(byte)iVar7;
    iVar4 = -0x80000000 >> (bVar2 & 0x1f);
    iVar5 = 0x7fffffff >> (bVar2 & 0x1f);
    iVar8 = iVar6;
    if (iVar6 < iVar5) {
      iVar8 = iVar5;
    }
    if (iVar4 < iVar6) {
      iVar8 = iVar4;
    }
    iVar7 = iVar6;
    if (iVar6 < iVar4) {
      iVar7 = iVar4;
    }
    if (iVar5 < iVar6) {
      iVar7 = iVar5;
    }
    if (iVar5 < iVar4) {
      iVar7 = iVar8;
    }
    iVar7 = iVar7 << (bVar2 & 0x1f);
  }
  else if (iVar7 < 0x20) {
    iVar7 = iVar6 >> ((byte)iVar7 & 0x1f);
  }
  else {
    iVar7 = 0;
  }
  return iVar7;
}



// FUNCTION 145519560 FUN_145519560 body=608 status=ok
// SIG undefined FUN_145519560(void)

int FUN_145519560(int *param_1,undefined8 param_2,undefined8 param_3,int *param_4,undefined4 param_5
                 ,int param_6)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint local_res20 [2];
  uint local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  longlong local_48;
  
  FUN_1455dd844(local_res20,&local_50,param_2,param_5);
  FUN_1455dd844(&local_58,&local_54,param_3,param_5);
  uVar5 = local_54;
  if ((int)local_54 < (int)local_50) {
    uVar5 = local_50;
  }
  iVar8 = uVar5 + (uVar5 & 1);
  local_58 = (int)local_58 >> ((char)iVar8 - (char)local_54 & 0x1fU);
  uVar5 = (int)local_res20[0] >> ((char)iVar8 - (char)local_50 & 0x1fU);
  local_res20[0] = 1;
  if (1 < (int)uVar5) {
    local_res20[0] = uVar5;
  }
  local_4c = FUN_1455dde38(param_2,param_3,iVar8,param_5);
  iVar2 = FUN_14551945c(local_4c,local_res20[0],0xd);
  iVar7 = iVar2;
  if (iVar2 < -0x4000) {
    iVar7 = -0x4000;
  }
  if (0x4000 < iVar2) {
    iVar7 = 0x4000;
  }
  local_48 = (longlong)(short)iVar7;
  uVar5 = (uint)((ulonglong)(iVar7 * local_48) >> 0x10);
  uVar6 = (int)uVar5 >> 0x1f;
  iVar2 = (uVar5 ^ uVar6) - uVar6;
  if (iVar2 < param_6) {
    iVar2 = param_6;
  }
  if ((int)local_res20[0] < 1) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0x1f;
    if (local_res20[0] != 0) {
      for (; local_res20[0] >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    uVar6 = 0x1f - iVar3;
    iVar3 = 0x18 - uVar6;
    uVar5 = local_res20[0];
    if (iVar3 != 0) {
      if (iVar3 < 0) {
        bVar4 = -(byte)iVar3 & 0x1f;
        uVar5 = local_res20[0] << bVar4 | local_res20[0] >> 0x20 - bVar4;
      }
      else {
        bVar4 = (byte)iVar3 & 0x1f;
        uVar5 = local_res20[0] >> bVar4 | local_res20[0] << 0x20 - bVar4;
      }
    }
    iVar3 = (int)((-(uint)((uVar6 & 1) != 0) & 0xffffcb7a) + 0xb486) >>
            ((byte)((int)uVar6 >> 1) & 0x1f);
    iVar3 = (int)((ulonglong)(uVar5 & 0x7f) * (longlong)iVar3 * 0xd5 >> 0x10) + iVar3;
  }
  bVar4 = (byte)(iVar8 >> 1);
  local_58 = (int)((ulonglong)
                   ((longlong)(short)((ulonglong)(iVar7 * local_48) >> 0x10) *
                   (longlong)(int)local_res20[0]) >> 0x10) * 0x40 +
             (int)((ulonglong)(local_4c * local_48) >> 0x10) * -0x10 + local_58;
  iVar8 = (int)((ulonglong)
                ((longlong)((iVar3 << (bVar4 & 0x1f)) - *param_4) * (longlong)(short)iVar2) >> 0x10)
          + *param_4;
  *param_4 = iVar8;
  if ((int)local_58 < 1) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0x1f;
    if (local_58 != 0) {
      for (; local_58 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    uVar6 = 0x1f - iVar3;
    iVar3 = 0x18 - uVar6;
    uVar5 = local_58;
    if (iVar3 != 0) {
      if (iVar3 < 0) {
        bVar1 = -(byte)iVar3 & 0x1f;
        uVar5 = local_58 << bVar1 | local_58 >> 0x20 - bVar1;
      }
      else {
        bVar1 = (byte)iVar3 & 0x1f;
        uVar5 = local_58 >> bVar1 | local_58 << 0x20 - bVar1;
      }
    }
    iVar3 = (int)((-(uint)((uVar6 & 1) != 0) & 0xffffcb7a) + 0xb486) >>
            ((byte)((int)uVar6 >> 1) & 0x1f);
    iVar3 = (int)((ulonglong)(uVar5 & 0x7f) * (longlong)iVar3 * 0xd5 >> 0x10) + iVar3;
  }
  iVar3 = (int)((ulonglong)
                ((longlong)((iVar3 << (bVar4 & 0x1f)) - param_4[1]) * (longlong)(short)iVar2) >>
               0x10) + param_4[1];
  param_4[1] = iVar3;
  iVar2 = 1;
  if (1 < iVar8) {
    iVar2 = iVar8;
  }
  iVar2 = FUN_14551945c(iVar3,iVar2,0xe);
  iVar8 = 0x7fff;
  if ((iVar2 < 0x8000) && (iVar8 = 0, -1 < iVar2)) {
    iVar8 = iVar2;
  }
  *param_1 = iVar8;
  return iVar7;
}



// FUNCTION 1455197c0 FUN_1455197c0 body=257 status=ok
// SIG undefined FUN_1455197c0(void)

void FUN_1455197c0(int *param_1,char *param_2)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar4 = 0;
  lVar9 = 2;
  piVar8 = param_1;
  do {
    cVar5 = *param_2;
    iVar7 = 0;
    iVar11 = 0x7fffffff;
    do {
      iVar12 = 0;
      sVar1 = (&DAT_149d32c20)[iVar7];
      sVar2 = (&DAT_149d32c22)[iVar7];
      iVar10 = iVar4;
      iVar13 = iVar11;
      do {
        iVar4 = (int)(short)((short)iVar12 * 2 + 1) *
                (int)(short)((ulonglong)(uint)((int)sVar2 - (int)sVar1) * 0x199a >> 0x10) +
                (int)sVar1;
        iVar11 = *piVar8 - iVar4;
        if (*piVar8 - iVar4 < 1) {
          iVar11 = iVar4 - *piVar8;
        }
        if (iVar13 <= iVar11) goto LAB_145519867;
        param_2[1] = (char)iVar12;
        iVar12 = iVar12 + 1;
        cVar5 = (char)iVar7;
        *param_2 = cVar5;
        iVar10 = iVar4;
        iVar13 = iVar11;
      } while (iVar12 < 5);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0xf);
LAB_145519867:
    iVar4 = iVar10;
    lVar3 = (longlong)(int)cVar5;
    cVar6 = (char)((ulonglong)(lVar3 * 0x55555556) >> 0x20) +
            (char)((lVar3 / 3 + (lVar3 >> 0x3f) & 0xffffffffU) >> 0x1f);
    param_2[2] = cVar6;
    *param_2 = cVar5 + cVar6 * -3;
    param_2 = param_2 + 3;
    *piVar8 = iVar4;
    piVar8 = piVar8 + 1;
    lVar9 = lVar9 + -1;
    if (lVar9 == 0) {
      *param_1 = *param_1 - param_1[1];
      return;
    }
  } while( true );
}



// FUNCTION 1455198c4 FUN_1455198c4 body=378 status=ok
// SIG undefined FUN_1455198c4(void)

void FUN_1455198c4(char *param_1,longlong param_2,char *param_3,int param_4,int param_5)

{
  short sVar1;
  undefined4 uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  lVar7 = 0;
  if (0 < (longlong)param_5) {
    do {
      sVar1 = FUN_144f39688(*(undefined4 *)(param_2 + lVar7 * 4));
      cVar4 = (char)((ulonglong)((longlong)(short)(sVar1 + -0x82a) * 0x8cb) >> 0x10);
      param_1[lVar7] = cVar4;
      if (cVar4 < *param_3) {
        cVar4 = cVar4 + '\x01';
      }
      cVar3 = '?';
      if ((cVar4 < '@') && (cVar3 = cVar4, cVar4 < '\0')) {
        cVar3 = '\0';
      }
      param_1[lVar7] = cVar3;
      if ((lVar7 == 0) && (param_4 == 0)) {
        iVar5 = *param_3 + -4;
        if (iVar5 < 0x40) {
          if (cVar3 < '@') {
            iVar6 = (int)cVar3;
            if (cVar3 < iVar5) {
              iVar6 = iVar5;
            }
          }
          else {
            iVar6 = 0x3f;
          }
        }
        else {
          iVar6 = iVar5;
          if ((cVar3 <= iVar5) && (iVar6 = (int)cVar3, cVar3 < '?')) {
            iVar6 = 0x3f;
          }
        }
        cVar4 = (char)iVar6;
        *param_1 = cVar4;
        *param_3 = cVar4;
      }
      else {
        cVar3 = cVar3 - *param_3;
        param_1[lVar7] = cVar3;
        iVar5 = *param_3 + 8;
        if (iVar5 < cVar3) {
          cVar3 = (char)((cVar3 - iVar5) + 1 >> 1) + (char)iVar5;
          param_1[lVar7] = cVar3;
        }
        if (cVar3 < '%') {
          if (cVar3 < -4) {
            cVar3 = -4;
          }
        }
        else {
          cVar3 = '$';
        }
        param_1[lVar7] = cVar3;
        if (iVar5 < cVar3) {
          cVar3 = (cVar3 * '\x02' - (char)iVar5) + *param_3;
          cVar4 = '?';
          if (cVar3 < '?') {
            cVar4 = cVar3;
          }
        }
        else {
          cVar4 = *param_3 + cVar3;
        }
        *param_3 = cVar4;
        param_1[lVar7] = param_1[lVar7] + '\x04';
        cVar4 = *param_3;
      }
      iVar6 = (int)((ulonglong)((longlong)cVar4 * 0x1d1c71) >> 0x10) + 0x82a;
      iVar5 = 0xf7f;
      if (iVar6 < 0xf7f) {
        iVar5 = iVar6;
      }
      uVar2 = FUN_144f396e4(iVar5);
      *(undefined4 *)(param_2 + lVar7 * 4) = uVar2;
      lVar7 = lVar7 + 1;
    } while (lVar7 < param_5);
  }
  return;
}



// FUNCTION 145519a40 FUN_145519a40 body=228 status=ok
// SIG undefined FUN_145519a40(void)

void FUN_145519a40(longlong param_1,char *param_2,char *param_3,int param_4,int param_5)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  lVar6 = 0;
  if (0 < (longlong)param_5) {
    do {
      if ((lVar6 == 0) && (param_4 == 0)) {
        cVar1 = (char)(*param_3 + -0x10);
        if (*param_3 + -0x10 < (int)*param_2) {
          cVar1 = *param_2;
        }
      }
      else {
        uVar2 = (int)param_2[lVar6] - 4;
        if (*param_3 + 8 < (int)uVar2) {
          uVar2 = (uint)(byte)((char)uVar2 * '\x02' - (char)(*param_3 + 8));
        }
        cVar1 = (char)uVar2 + *param_3;
      }
      if (cVar1 < '@') {
        if (cVar1 < '\0') {
          cVar1 = '\0';
        }
      }
      else {
        cVar1 = '?';
      }
      *param_3 = cVar1;
      iVar5 = (int)((ulonglong)((longlong)cVar1 * 0x1d1c71) >> 0x10) + 0x82a;
      iVar4 = 0xf7f;
      if (iVar5 < 0xf7f) {
        iVar4 = iVar5;
      }
      uVar3 = FUN_144f396e4(iVar4);
      *(undefined4 *)(param_1 + lVar6 * 4) = uVar3;
      lVar6 = lVar6 + 1;
    } while (lVar6 < param_5);
  }
  return;
}



// FUNCTION 145519b24 FUN_145519b24 body=31 status=ok
// SIG undefined FUN_145519b24(void)

ulonglong FUN_145519b24(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = 0;
  uVar2 = uVar1;
  if (0 < param_2) {
    do {
      uVar3 = uVar2 + 1;
      uVar1 = (ulonglong)(uint)((int)uVar1 * 0x100 + (int)*(char *)(uVar2 + param_1));
      uVar2 = uVar3;
    } while ((longlong)uVar3 < (longlong)param_2);
  }
  return uVar1;
}



// FUNCTION 145519b44 FUN_145519b44 body=156 status=ok
// SIG undefined FUN_145519b44(void)

void FUN_145519b44(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [8];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    iVar4 = iVar1 * -0x400 + 0x40000;
    iVar3 = iVar4 >> 0x10;
    FUN_145519bec(local_40,local_48,iVar3,iVar4 + iVar3 * -0x10000);
    iVar1 = iVar1 + iVar2;
    iVar2 = 0x100;
    if ((iVar1 < 0x101) && (iVar2 = 0, -1 < iVar1)) {
      iVar2 = iVar1;
    }
    *(int *)(param_1 + 8) = iVar2;
    local_58 = param_2;
    local_50 = param_3;
    FUN_1455dde6c(param_2,local_40,local_48,param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
}



// FUNCTION 145519bec FUN_145519bec body=351 status=ok
// SIG undefined FUN_145519bec(void)

void FUN_145519bec(undefined8 *param_1,undefined8 *param_2,int param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_3 < 4) {
    lVar6 = (longlong)param_3;
    lVar1 = lVar6 * 0xc;
    if (0 < param_4) {
      lVar3 = (longlong)(short)param_4;
      lVar5 = (longlong)param_1 + lVar6 * -0xc + -0x149d32c80;
      piVar4 = (int *)(&DAT_149d32c80 + lVar1);
      lVar1 = 3;
      if (param_4 < 0x8000) {
        do {
          *(int *)((longlong)piVar4 + lVar5) =
               (int)((ulonglong)((piVar4[3] - *piVar4) * lVar3) >> 0x10) + *piVar4;
          piVar4 = piVar4 + 1;
          lVar1 = lVar1 + -1;
        } while (lVar1 != 0);
        lVar1 = 2;
        piVar4 = (int *)(&DAT_149d32cc0 + lVar6 * 8);
        do {
          *(int *)((longlong)(param_2 + (-0x293a6598 - lVar6)) + (longlong)piVar4) =
               (int)((ulonglong)((piVar4[2] - *piVar4) * lVar3) >> 0x10) + *piVar4;
          piVar4 = piVar4 + 1;
          lVar1 = lVar1 + -1;
        } while (lVar1 != 0);
        return;
      }
      do {
        *(int *)(lVar5 + (longlong)piVar4) =
             (int)((ulonglong)((piVar4[3] - *piVar4) * lVar3) >> 0x10) + piVar4[3];
        piVar4 = piVar4 + 1;
        lVar1 = lVar1 + -1;
      } while (lVar1 != 0);
      lVar1 = 2;
      piVar4 = (int *)(&DAT_149d32cc0 + lVar6 * 8);
      do {
        *(int *)((longlong)(param_2 + (-0x293a6598 - lVar6)) + (longlong)piVar4) =
             (int)((ulonglong)((piVar4[2] - *piVar4) * lVar3) >> 0x10) + piVar4[2];
        piVar4 = piVar4 + 1;
        lVar1 = lVar1 + -1;
      } while (lVar1 != 0);
      return;
    }
    *param_1 = *(undefined8 *)(&DAT_149d32c80 + lVar1);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(&DAT_149d32c88 + lVar1);
    uVar2 = *(undefined8 *)(&DAT_149d32cc0 + lVar6 * 8);
  }
  else {
    *param_1 = 0xaa4fada0552b622;
    *(undefined4 *)(param_1 + 1) = 0x552b622;
    uVar2 = 0x36bdf0a021da4ed;
  }
  *param_2 = uVar2;
  return;
}



// FUNCTION 145519d4c FUN_145519d4c body=2139 status=ok
// SIG undefined FUN_145519d4c(void)

void FUN_145519d4c(longlong param_1,float *param_2,longlong param_3,longlong param_4)

{
  float *pfVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  float *pfVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_5c8 [32];
  int local_5a8;
  int local_598;
  int local_594;
  longlong local_590;
  float *local_588;
  longlong local_580;
  float local_578 [28];
  undefined1 local_508 [112];
  undefined1 local_498 [960];
  ulonglong local_d8;
  
  local_d8 = DAT_14c707940 ^ (ulonglong)auStack_5c8;
  fVar21 = -0.25;
  local_590 = param_4 + (longlong)*(int *)(param_1 + 0x11f8) * -4;
  fVar20 = (float)*(int *)(param_1 + 0x127c) * 0.0078125;
  fVar18 = (float)(*(int *)(param_1 + 0x126c) + *(int *)(param_1 + 0x1268)) * 0.5 * 3.0517578e-05;
  param_2[0xae] = fVar18;
  local_588 = param_2;
  local_580 = param_3;
  dVar14 = exp((double)((fVar20 - 20.0) * -0.25));
  iVar11 = 0;
  fVar17 = (float)(1.0 / (dVar14 + 1.0));
  param_2[0xaf] = fVar17;
  if (*(int *)(param_1 + 0x1244) == 0) {
    fVar16 = 1.0 - (float)*(int *)(&DAT_000011b4 + param_1) * 0.00390625;
    fVar20 = fVar20 - (fVar18 * 0.5 + 0.5) * (fVar17 + fVar17) * fVar16 * fVar16;
  }
  fVar17 = 0.0;
  if (*(char *)(param_1 + 0x12ad) == '\x02') {
    fVar18 = *(float *)(param_1 + 0x2764) + *(float *)(param_1 + 0x2764);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x11e0) * 2;
    iVar3 = (*(short *)(param_1 + 0x11e4) * 5) / 2;
    fVar16 = 0.0;
    fVar18 = (6.0 - (float)*(int *)(param_1 + 0x127c) * 0.4 * 0.0078125) * (1.0 - fVar18);
    if (0 < iVar3) {
      lVar9 = local_580;
      fVar19 = 0.0;
      iVar10 = iVar11;
      do {
        dVar14 = (double)FUN_1455de204(lVar9,iVar4);
        dVar14 = log10((double)((float)dVar14 + (float)iVar4));
        if (0 < iVar10) {
          fVar16 = fVar16 + ABS((float)(dVar14 * 3.32192809488736) - fVar19);
        }
        lVar9 = lVar9 + (longlong)iVar4 * 4;
        iVar10 = iVar10 + 1;
        param_2 = local_588;
        fVar19 = (float)(dVar14 * 3.32192809488736);
      } while (iVar10 < iVar3);
    }
    if (fVar16 <= (float)(iVar3 + -1) * 0.6) {
      *(undefined1 *)(param_1 + 0x12ae) = 1;
      goto LAB_145519fc5;
    }
  }
  *(undefined1 *)(param_1 + 0x12ae) = 0;
LAB_145519fc5:
  fVar16 = param_2[0xb0];
  iVar4 = *(int *)(param_1 + 0x11e4);
  local_594 = 0;
  fVar19 = (float)*(int *)(param_1 + 0x1240) * 1.5258789e-05 + param_2[0xaf] * 0.01;
  if (0 < iVar4) {
    local_580 = 0;
    local_598 = 0;
    pfVar7 = param_2;
    do {
      lVar2 = local_580;
      iVar4 = *(int *)(param_1 + 0x11e0) * 3;
      iVar3 = (*(int *)(&DAT_000011fc + param_1) + *(int *)(param_1 + 0x11e0) * -3) / 2;
      local_588 = pfVar7;
      FUN_1455de448(local_498,local_590,1,iVar3);
      memcpy(local_498 + (longlong)iVar3 * 4,(void *)(local_590 + (longlong)iVar3 * 4),
             (longlong)iVar4 << 2);
      lVar9 = local_590;
      lVar6 = (longlong)(iVar3 + iVar4);
      FUN_1455de448(local_498 + lVar6 * 4,local_590 + lVar6 * 4,2,iVar3);
      local_590 = lVar9 + (longlong)*(int *)(param_1 + 0x11ec) * 4;
      if (*(int *)(param_1 + 0x1240) < 1) {
        FUN_1455de188(local_578,local_498,*(undefined4 *)(&DAT_000011fc + param_1),
                      *(int *)(param_1 + 0x121c) + 1);
      }
      else {
        local_5a8 = *(int *)(param_1 + 0x121c);
        FUN_1455de2a4(local_578,local_498,fVar19,*(undefined4 *)(&DAT_000011fc + param_1));
      }
      local_578[0] = local_578[0] + local_578[0] * 3e-05 + 1.0;
      fVar12 = (float)FUN_1455ddfe4(local_508,local_578,*(undefined4 *)(param_1 + 0x121c));
      pfVar1 = param_2 + (longlong)local_598 + 0x3d;
      FUN_1455de100(pfVar1,local_508,*(undefined4 *)(param_1 + 0x121c));
      dVar14 = sqrt((double)fVar12);
      *pfVar7 = (float)dVar14;
      if (0 < *(int *)(param_1 + 0x1240)) {
        fVar13 = -fVar19;
        fVar12 = *(float *)((longlong)param_2 +
                           (longlong)*(int *)(param_1 + 0x121c) * 4 + lVar2 + 0xf0);
        iVar4 = *(int *)(param_1 + 0x121c) + -2;
        lVar9 = (longlong)iVar4;
        if (-1 < iVar4) {
          do {
            fVar12 = fVar12 * fVar13 + *(float *)((longlong)param_2 + lVar9 * 4 + lVar2 + 0xf4);
            lVar9 = lVar9 + -1;
          } while (-1 < lVar9);
        }
        *pfVar7 = (1.0 / (1.0 - fVar12 * fVar13)) * (float)dVar14;
      }
      FUN_1455ddfb0(pfVar1,*(undefined4 *)(param_1 + 0x121c),
                    0.94 / (fVar16 * 0.001 * fVar16 * 0.001 + 1.0));
      iVar4 = *(int *)(param_1 + 0x121c);
      iVar3 = iVar11;
      iVar10 = iVar11;
      if (*(int *)(param_1 + 0x1240) < 1) {
        do {
          fVar12 = -1.0;
          if (iVar4 < 1) break;
          pfVar7 = (float *)((longlong)param_2 + lVar2 + 0xf4);
          iVar8 = iVar11;
          do {
            iVar5 = iVar8;
            fVar13 = ABS(*pfVar7);
            if (ABS(*pfVar7) <= fVar12) {
              iVar5 = iVar3;
              fVar13 = fVar12;
            }
            fVar12 = fVar13;
            iVar8 = iVar8 + 1;
            pfVar7 = pfVar7 + 1;
            iVar3 = iVar5;
          } while (iVar8 < iVar4);
          if (fVar12 <= 3.999) break;
          FUN_1455ddfb0((longlong)param_2 + lVar2 + 0xf4,iVar4,
                        0.99 - (((float)iVar10 * 0.1 + 0.8) * (fVar12 - 3.999)) /
                               ((float)(iVar5 + 1) * fVar12));
          iVar10 = iVar10 + 1;
        } while (iVar10 < 10);
      }
      else {
        FUN_14551a5ec(pfVar1);
        local_580 = lVar2;
        local_588 = pfVar7;
      }
      pfVar7 = local_588 + 1;
      local_598 = local_598 + 0x18;
      local_594 = local_594 + 1;
      iVar4 = *(int *)(param_1 + 0x11e4);
      local_580 = local_580 + 0x60;
      local_588 = pfVar7;
    } while (local_594 < iVar4);
  }
  dVar14 = pow(2.0,(double)((fVar20 + fVar18) * -0.16));
  dVar15 = pow(2.0,0.3199999928474426);
  pfVar7 = param_2;
  iVar3 = iVar11;
  if (0 < iVar4) {
    do {
      iVar3 = iVar3 + 1;
      *pfVar7 = (float)dVar14 * *pfVar7 + (float)dVar15;
      iVar4 = *(int *)(param_1 + 0x11e4);
      pfVar7 = pfVar7 + 1;
    } while (iVar3 < iVar4);
  }
  iVar3 = *(int *)(&DAT_000011b4 + param_1);
  fVar18 = (((float)*(int *)(param_1 + 0x1268) * 3.0517578e-05 - 1.0) * 0.5 + 1.0) * 4.0 *
           (float)iVar3 * 0.00390625;
  if (*(char *)(param_1 + 0x12ad) == '\x02') {
    if (0 < iVar4) {
      pfVar7 = param_2 + 0x9d;
      iVar3 = iVar11;
      do {
        iVar3 = iVar3 + 1;
        fVar20 = 3.0 / (float)(int)pfVar7[-100] + 0.2 / (float)*(int *)(param_1 + 0x11e0);
        *pfVar7 = fVar20 - 1.0;
        pfVar7[4] = (1.0 - fVar20) - fVar18 * fVar20;
        pfVar7 = pfVar7 + 1;
        iVar4 = *(int *)(param_1 + 0x11e4);
      } while (iVar3 < iVar4);
      iVar3 = *(int *)(&DAT_000011b4 + param_1);
    }
    fVar21 = -0.25 - (float)iVar3 * 0.2625 * 0.00390625;
  }
  else {
    iVar3 = 1;
    fVar20 = 1.3 / (float)*(int *)(param_1 + 0x11e0);
    param_2[0x9d] = fVar20 - 1.0;
    param_2[0xa1] = (1.0 - fVar20) - fVar18 * fVar20 * 0.6;
    iVar4 = *(int *)(param_1 + 0x11e4);
    if (1 < iVar4) {
      pfVar7 = param_2 + 0xa2;
      do {
        iVar3 = iVar3 + 1;
        pfVar7[-4] = param_2[0x9d];
        *pfVar7 = param_2[0xa1];
        pfVar7 = pfVar7 + 1;
        iVar4 = *(int *)(param_1 + 0x11e4);
      } while (iVar3 < iVar4);
    }
  }
  if (*(char *)(param_1 + 0x12ad) == '\x02') {
    dVar14 = sqrt((double)*(float *)(param_1 + 0x2764));
    fVar17 = (float)dVar14 * ((1.0 - (1.0 - param_2[0xaf]) * param_2[0xae]) * 0.2 + 0.3);
  }
  if (0 < iVar4) {
    param_2 = param_2 + 0xa5;
    do {
      iVar11 = iVar11 + 1;
      fVar18 = (fVar17 - *(float *)(param_1 + 0x1c1c)) * 0.4 + *(float *)(param_1 + 0x1c1c);
      *(float *)(param_1 + 0x1c1c) = fVar18;
      param_2[4] = fVar18;
      fVar18 = (fVar21 - *(float *)(param_1 + 0x1c20)) * 0.4 + *(float *)(param_1 + 0x1c20);
      *(float *)(param_1 + 0x1c20) = fVar18;
      *param_2 = fVar18;
      param_2 = param_2 + 1;
    } while (iVar11 < *(int *)(param_1 + 0x11e4));
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_d8 ^ (ulonglong)auStack_5c8);
}



// FUNCTION 14551a5ec FUN_14551a5ec body=569 status=ok
// SIG undefined FUN_14551a5ec(void)

void FUN_14551a5ec(float *param_1,float param_2,float param_3,int param_4)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  iVar3 = 0;
  lVar8 = (longlong)param_4;
  lVar6 = (longlong)(param_4 + -1);
  if (0 < param_4 + -1) {
    pfVar4 = param_1 + lVar6 + -1;
    do {
      lVar6 = lVar6 + -1;
      *pfVar4 = *pfVar4 - param_2 * pfVar4[1];
      pfVar4 = pfVar4 + -1;
    } while (0 < lVar6);
  }
  fVar13 = 1.0 - param_2 * param_2;
  fVar11 = fVar13 / (param_2 * *param_1 + 1.0);
  if (0 < param_4) {
    lVar6 = 0;
    do {
      param_1[lVar6] = fVar11 * param_1[lVar6];
      lVar6 = lVar6 + 1;
    } while (lVar6 < lVar8);
  }
  iVar7 = 0;
  do {
    fVar12 = -1.0;
    iVar5 = 0;
    pfVar4 = param_1;
    iVar9 = iVar3;
    if (0 < param_4) {
      do {
        iVar3 = iVar5;
        fVar2 = ABS(*pfVar4);
        if (ABS(*pfVar4) <= fVar12) {
          iVar3 = iVar9;
          fVar2 = fVar12;
        }
        fVar12 = fVar2;
        iVar5 = iVar5 + 1;
        pfVar4 = pfVar4 + 1;
        iVar9 = iVar3;
      } while (iVar5 < param_4);
    }
    if (fVar12 <= param_3) {
      return;
    }
    if (1 < lVar8) {
      fVar2 = *param_1;
      lVar6 = lVar8 + -1;
      pfVar4 = param_1;
      do {
        pfVar1 = pfVar4 + 1;
        fVar10 = *pfVar1 * param_2 + fVar2;
        fVar2 = *pfVar1;
        *pfVar4 = fVar10;
        lVar6 = lVar6 + -1;
        pfVar4 = pfVar1;
      } while (lVar6 != 0);
    }
    lVar6 = 0;
    if (0 < param_4) {
      do {
        param_1[lVar6] = (1.0 / fVar11) * param_1[lVar6];
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar8);
    }
    FUN_1455ddfb0(param_1,param_4,
                  0.99 - (((float)iVar7 * 0.1 + 0.8) * (fVar12 - param_3)) /
                         ((float)(iVar3 + 1) * fVar12));
    lVar6 = lVar8 + -1;
    if (0 < lVar6) {
      pfVar4 = param_1 + lVar8 + -2;
      do {
        lVar6 = lVar6 + -1;
        *pfVar4 = *pfVar4 - param_2 * pfVar4[1];
        pfVar4 = pfVar4 + -1;
      } while (0 < lVar6);
    }
    lVar6 = 0;
    fVar11 = fVar13 / (param_2 * *param_1 + 1.0);
    if (0 < param_4) {
      do {
        param_1[lVar6] = fVar11 * param_1[lVar6];
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar8);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 10);
  return;
}



// FUNCTION 14551a828 FUN_14551a828 body=800 status=ok
// SIG undefined FUN_14551a828(void)

void FUN_14551a828(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  void *_Src;
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_788 [32];
  longlong local_768;
  undefined4 local_760;
  float local_758;
  float local_750;
  undefined4 local_748;
  undefined4 local_740;
  undefined4 local_738;
  undefined4 local_730;
  float local_728 [20];
  undefined1 local_6d8 [64];
  undefined1 local_698 [64];
  undefined1 local_658 [1536];
  ulonglong local_58;
  undefined8 extraout_XMM0_Qb;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_788;
  iVar1 = *(int *)(param_1 + 0x11f0);
  iVar5 = *(int *)(param_1 + 0x11f4);
  iVar3 = *(int *)(param_1 + 0x11c4);
  iVar6 = *(int *)(param_1 + 0x11e8) + iVar1 + iVar5;
  if (iVar6 < iVar3) {
    FUN_144bca940("assertion failed: buf_len >= psEnc->sCmn.pitch_LPC_win_length",
                  "../../../third_party/opus/src/silk/float/find_pitch_lags_FLP.c",0x3b);
    iVar1 = *(int *)(param_1 + 0x11f0);
    iVar3 = *(int *)(param_1 + 0x11c4);
    iVar5 = *(int *)(param_1 + 0x11f4);
  }
  param_4 = param_4 + (longlong)iVar1 * -4;
  lVar4 = ((longlong)iVar6 - (longlong)iVar3) * 4 + param_4;
  FUN_1455de448(local_658,lVar4,1,iVar5);
  lVar2 = (longlong)*(int *)(param_1 + 0x11f4) * 4;
  _Src = (void *)(lVar4 + lVar2);
  memcpy(local_658 + lVar2,_Src,
         (longlong)(*(int *)(param_1 + 0x11c4) + *(int *)(param_1 + 0x11f4) * -2) << 2);
  lVar4 = (longlong)(*(int *)(param_1 + 0x11c4) + *(int *)(param_1 + 0x11f4) * -2);
  FUN_1455de448(local_658 + lVar2 + lVar4 * 4,(void *)((longlong)_Src + lVar4 * 4),2);
  FUN_1455de188(local_728,local_658,*(undefined4 *)(param_1 + 0x11c4),*(int *)(param_1 + 0x1228) + 1
               );
  local_728[0] = local_728[0] + local_728[0] * 0.001 + 1.0;
  auVar7._0_8_ = FUN_1455ddfe4(local_698,local_728,*(undefined4 *)(param_1 + 0x1228));
  auVar7._8_8_ = extraout_XMM0_Qb;
  if ((float)auVar7._0_8_ <= 1.0) {
    auVar8._4_12_ = auVar7._4_12_;
    auVar8._0_4_ = 0x3f800000;
    auVar7._0_8_ = auVar8._0_8_;
  }
  *(float *)(param_2 + 0x2c0) = local_728[0] / (float)auVar7._0_8_;
  FUN_1455de100(local_6d8,local_698,*(undefined4 *)(param_1 + 0x1228));
  FUN_1455ddfb0(local_6d8,*(undefined4 *)(param_1 + 0x1228),0x3f7d70a4);
  local_768 = CONCAT44(local_768._4_4_,*(undefined4 *)(param_1 + 0x1228));
  FUN_1455dfa30(param_3,local_6d8,param_4,iVar6);
  if ((*(char *)(param_1 + 0x12ad) == '\0') || (*(int *)(param_1 + 0x1238) != 0)) {
    *(undefined8 *)(param_2 + 0xe4) = 0;
    *(undefined8 *)(param_2 + 0xec) = 0;
    *(undefined2 *)(param_1 + 0x12aa) = 0;
    *(undefined1 *)(param_1 + 0x12ac) = 0;
    *(undefined4 *)(param_1 + 0x2764) = 0;
  }
  else {
    local_768 = param_1 + 0x2764;
    local_730 = param_5;
    local_738 = *(undefined4 *)(param_1 + 0x11e4);
    local_740 = *(undefined4 *)(param_1 + 0x1224);
    local_748 = *(undefined4 *)(param_1 + 0x11e0);
    local_760 = *(undefined4 *)(param_1 + 0x11c0);
    local_758 = (float)*(int *)(param_1 + 0x122c) * 1.5258789e-05;
    local_750 = (((0.6 - (float)*(int *)(param_1 + 0x1228) * 0.004) -
                 (float)*(int *)(&DAT_000011b4 + param_1) * 0.1 * 0.00390625) -
                (float)(int)((char)(&DAT_000011bd)[param_1] >> 1) * 0.15) -
                (float)*(int *)(param_1 + 0x1278) * 0.1 * 3.0517578e-05;
    iVar1 = FUN_1455de598(param_3,param_2 + 0xe4,param_1 + 0x12aa,param_1 + 0x12ac);
    *(char *)(param_1 + 0x12ad) = '\x02' - (iVar1 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_788);
}



// FUNCTION 14551ab5c FUN_14551ab5c body=792 status=ok
// SIG undefined FUN_14551ab5c(void)

void FUN_14551ab5c(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined4 param_5)

{
  int *piVar1;
  double dVar2;
  float *pfVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  float fVar9;
  undefined1 auStack_8a8 [32];
  float *local_888;
  undefined1 *local_880;
  undefined1 *local_878;
  int local_870;
  undefined4 local_868;
  undefined4 local_860;
  float local_858 [4];
  undefined1 local_848 [80];
  undefined1 local_7f8 [400];
  undefined1 local_668 [1536];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_8a8;
  uVar4 = *(uint *)(param_1 + 0x11e4);
  if (0 < (int)uVar4) {
    pfVar3 = local_858;
    uVar5 = (ulonglong)uVar4;
    do {
      *pfVar3 = 1.0 / *(float *)((param_2 - (longlong)local_858) + (longlong)pfVar3);
      pfVar3 = pfVar3 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  iVar6 = *(int *)(param_1 + 0x1220);
  if (*(char *)(param_1 + 0x12ad) == '\x02') {
    piVar1 = (int *)(param_2 + 0xe4);
    if (*(int *)(param_1 + 0x11f0) - iVar6 < *piVar1 + 2) {
      FUN_144bca940("assertion failed: psEnc->sCmn.ltp_mem_length - psEnc->sCmn.predictLPCOrder >= psEncCtrl->pitchL[ 0 ] + LTP_ORDER / 2"
                    ,"../../../third_party/opus/src/silk/float/find_pred_coefs_FLP.c",0x3e);
      uVar4 = *(uint *)(param_1 + 0x11e4);
    }
    local_880 = (undefined1 *)CONCAT44(local_880._4_4_,uVar4);
    local_888 = (float *)CONCAT44(local_888._4_4_,*(undefined4 *)(param_1 + 0x11ec));
    FUN_1455e0238(local_7f8,local_848,param_3,piVar1);
    local_860 = *(undefined4 *)(param_1 + 0x13f4);
    local_888 = (float *)(param_2 + 0x2c4);
    local_868 = *(undefined4 *)(param_1 + 0x11e4);
    local_870 = *(undefined4 *)(param_1 + 0x11ec);
    local_878 = local_848;
    local_880 = local_7f8;
    FUN_14551b1a4(param_2 + 0x90,param_1 + 0x1294,param_1 + 0x12b0,param_1 + 0x1230);
    FUN_1455dff60(param_1,param_2,param_5);
    local_870 = *(int *)(param_1 + 0x1220);
    local_878 = (undefined1 *)CONCAT44(local_878._4_4_,*(undefined4 *)(param_1 + 0x11e4));
    local_880 = (undefined1 *)CONCAT44(local_880._4_4_,*(undefined4 *)(param_1 + 0x11ec));
    local_888 = local_858;
    FUN_1455e0374(local_668,param_4 + (longlong)local_870 * -4,param_2 + 0x90,piVar1);
  }
  else {
    puVar8 = local_668;
    iVar7 = 0;
    param_4 = param_4 + (longlong)iVar6 * -4;
    if (0 < (int)uVar4) {
      pfVar3 = local_858;
      iVar6 = *(int *)(param_1 + 0x11ec) + iVar6;
      do {
        FUN_1455dfedc(puVar8,param_4,*pfVar3,iVar6);
        pfVar3 = pfVar3 + 1;
        iVar7 = iVar7 + 1;
        uVar4 = *(uint *)(param_1 + 0x11e4);
        iVar6 = *(int *)(param_1 + 0x1220) + *(int *)(param_1 + 0x11ec);
        param_4 = param_4 + (longlong)*(int *)(param_1 + 0x11ec) * 4;
        puVar8 = puVar8 + (longlong)iVar6 * 4;
      } while (iVar7 < (int)uVar4);
    }
    memset((void *)(param_2 + 0x90),0,(longlong)(int)(uVar4 * 5) << 2);
    *(undefined4 *)(param_2 + 0x2c4) = 0;
    *(undefined4 *)(param_1 + 0x1230) = 0;
  }
  if (*(int *)(param_1 + 0x1238) == 0) {
    dVar2 = pow(2.0,(double)(*(float *)(param_2 + 0x2c4) / 3.0));
    fVar9 = ((float)dVar2 / 10000.0) / (*(float *)(param_2 + 700) * 0.75 + 0.25);
  }
  else {
    fVar9 = 0.01;
  }
  FUN_1455dffd0(param_1,&local_68,local_668,fVar9);
  FUN_14551b3d8(param_1,param_2 + 0x10,&local_68,(undefined4 *)(param_1 + 0x1194));
  local_878 = (undefined1 *)CONCAT44(local_878._4_4_,*(undefined4 *)(param_1 + 0x1220));
  local_880 = (undefined1 *)CONCAT44(local_880._4_4_,*(undefined4 *)(param_1 + 0x11e4));
  local_888 = (float *)CONCAT44(local_888._4_4_,*(undefined4 *)(param_1 + 0x11ec));
  FUN_1455e0488(param_2 + 0x2c8,local_668,param_2 + 0x10,param_2);
  *(undefined4 *)(param_1 + 0x1194) = local_68;
  *(undefined4 *)(param_1 + 0x1198) = uStack_64;
  *(undefined4 *)(param_1 + 0x119c) = uStack_60;
  *(undefined4 *)(param_1 + 0x11a0) = uStack_5c;
  *(undefined4 *)(param_1 + 0x11a4) = local_58;
  *(undefined4 *)(param_1 + 0x11a8) = uStack_54;
  *(undefined4 *)(&DAT_000011ac + param_1) = uStack_50;
  *(undefined4 *)(param_1 + 0x11b0) = uStack_4c;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_8a8);
}



// FUNCTION 14551ae88 FUN_14551ae88 body=773 status=ok
// SIG undefined FUN_14551ae88(void)

void FUN_14551ae88(longlong param_1,float *param_2,int param_3)

{
  uint uVar1;
  float *pfVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  int local_68 [4];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar5 = 0;
  if (*(char *)(param_1 + 0x12ad) == '\x02') {
    dVar8 = exp((double)-((param_2[0xb1] - 12.0) * 0.25));
    iVar3 = 0;
    pfVar2 = param_2;
    if (0 < *(int *)(param_1 + 0x11e4)) {
      do {
        iVar3 = iVar3 + 1;
        *pfVar2 = (1.0 - (float)(1.0 / (dVar8 + 1.0)) * 0.5) * *pfVar2;
        pfVar2 = pfVar2 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x11e4));
    }
  }
  dVar8 = pow(2.0,(double)((21.0 - (float)*(int *)(param_1 + 0x127c) * 0.0078125) * 0.33));
  uVar1 = *(uint *)(param_1 + 0x11e4);
  iVar7 = 0;
  iVar3 = *(int *)(param_1 + 0x11ec);
  pfVar2 = param_2;
  if (0 < (int)uVar1) {
    do {
      dVar9 = sqrt((double)((float)(dVar8 / (double)iVar3) * pfVar2[0xb2] + *pfVar2 * *pfVar2));
      iVar7 = iVar7 + 1;
      fVar10 = (float)dVar9;
      if (32767.0 <= fVar10) {
        fVar10 = 32767.0;
      }
      *pfVar2 = fVar10;
      uVar1 = *(uint *)(param_1 + 0x11e4);
      pfVar2 = pfVar2 + 1;
    } while (iVar7 < (int)uVar1);
    if (0 < (int)uVar1) {
      uVar6 = (ulonglong)uVar1;
      piVar4 = local_68;
      do {
        *piVar4 = (int)(*(float *)(((longlong)param_2 - (longlong)local_68) + (longlong)piVar4) *
                       65536.0);
        piVar4 = piVar4 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  memcpy(param_2 + 0xb6,local_68,(longlong)(int)uVar1 << 2);
  *(undefined1 *)(param_2 + 0xba) = *(undefined1 *)(param_1 + 0x1c18);
  local_78 = *(undefined4 *)(param_1 + 0x11e4);
  FUN_1455198c4(param_1 + 0x1290,local_68,(undefined1 *)(param_1 + 0x1c18),param_3 == 2);
  if (0 < *(int *)(param_1 + 0x11e4)) {
    pfVar2 = param_2;
    do {
      iVar5 = iVar5 + 1;
      *pfVar2 = (float)*(int *)(((longlong)local_68 - (longlong)param_2) + (longlong)pfVar2) *
                1.5258789e-05;
      pfVar2 = pfVar2 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x11e4));
  }
  if (*(char *)(param_1 + 0x12ad) == '\x02') {
    *(bool *)(param_1 + 0x12ae) =
         (float)*(int *)(param_1 + 0x1278) * 3.0517578e-05 + param_2[0xb1] <= 1.0;
  }
  param_2[0xad] =
       ((((1.2 - (float)*(int *)(param_1 + 0x1214) * 0.05) -
         (float)*(int *)(&DAT_000011b4 + param_1) * 0.2 * 0.00390625) - param_2[0xae] * 0.1) -
       param_2[0xaf] * 0.2) +
       (float)(int)*(short *)(&DAT_149d32c78 +
                             ((longlong)*(char *)(param_1 + 0x12ae) +
                             ((longlong)*(char *)(param_1 + 0x12ad) >> 1) * 2) * 2) * 0.0009765625 *
       0.8;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_98);
}



// FUNCTION 14551b1a4 FUN_14551b1a4 body=341 status=ok
// SIG undefined FUN_14551b1a4(void)

void FUN_14551b1a4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  float *param_5,longlong param_6,longlong param_7,undefined4 param_8,int param_9,
                  undefined4 param_10)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_2a8 [32];
  float *local_288;
  int *local_280;
  int *local_278;
  undefined4 local_270;
  int local_268;
  undefined4 local_260;
  float local_258 [4];
  int local_248 [20];
  int local_1f8 [100];
  short local_68 [20];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  lVar2 = 0;
  lVar1 = lVar2;
  if (0 < param_9 * 0x19) {
    do {
      local_258[0] = *(float *)(param_6 + lVar1 * 4) * 131072.0;
      local_1f8[lVar1] = (int)ROUND(local_258[0]);
      lVar1 = lVar1 + 1;
    } while (lVar1 < param_9 * 0x19);
  }
  lVar3 = (longlong)(param_9 * 5);
  lVar1 = lVar2;
  if (0 < param_9 * 5) {
    do {
      local_258[0] = *(float *)(param_7 + lVar1 * 4) * 131072.0;
      local_248[lVar1] = (int)ROUND(local_258[0]);
      lVar1 = lVar1 + 1;
    } while (lVar1 < lVar3);
  }
  local_260 = param_10;
  local_268 = param_9;
  local_270 = param_8;
  local_278 = local_248;
  local_280 = local_1f8;
  local_288 = local_258;
  FUN_1455e0b4c(local_68,param_2,param_3,param_4);
  if (0 < lVar3) {
    do {
      *(float *)(param_1 + lVar2 * 4) = (float)(int)local_68[lVar2] * 6.1035156e-05;
      lVar2 = lVar2 + 1;
    } while (lVar2 < lVar3);
  }
  *param_5 = (float)(int)local_258[0] * 0.0078125;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_2a8);
}



// FUNCTION 14551b30c FUN_14551b30c body=95 status=ok
// SIG undefined FUN_14551b30c(void)

void FUN_14551b30c(float param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  float local_68;
  int local_58 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = 0;
  if (0 < param_3) {
    do {
      param_1 = *(float *)(param_2 + lVar1 * 4) * 65536.0;
      local_58[lVar1] = (int)ROUND(param_1);
      lVar1 = lVar1 + 1;
      local_68 = param_1;
    } while (lVar1 < param_3);
  }
  FUN_1455e05f8(param_1,local_58);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_88);
}



// FUNCTION 14551b374 FUN_14551b374 body=93 status=ok
// SIG undefined FUN_14551b374(void)

void FUN_14551b374(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  short local_48 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1455dd964(local_48,param_2,param_3);
  lVar1 = 0;
  if (0 < param_3) {
    do {
      *(float *)(param_1 + lVar1 * 4) = (float)(int)local_48[lVar1] * 0.00024414062;
      lVar1 = lVar1 + 1;
    } while (lVar1 < param_3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
}



// FUNCTION 14551b3d8 FUN_14551b3d8 body=139 status=ok
// SIG undefined FUN_14551b3d8(void)

void FUN_14551b3d8(longlong param_1,float *param_2)

{
  int iVar1;
  float *pfVar2;
  short *psVar3;
  int iVar4;
  short *psVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  short local_68 [32];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1455e3aa4(param_1,local_68);
  iVar1 = *(int *)(param_1 + 0x1220);
  psVar5 = local_68;
  lVar6 = 2;
  do {
    iVar4 = 0;
    pfVar2 = param_2;
    psVar3 = psVar5;
    if (0 < iVar1) {
      do {
        iVar4 = iVar4 + 1;
        *pfVar2 = (float)(int)*psVar3 * 0.00024414062;
        iVar1 = *(int *)(param_1 + 0x1220);
        pfVar2 = pfVar2 + 1;
        psVar3 = psVar3 + 1;
      } while (iVar4 < iVar1);
    }
    param_2 = param_2 + 0x10;
    psVar5 = psVar5 + 0x10;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_88);
}



// FUNCTION 14551b46c FUN_14551b46c body=893 status=ok
// SIG undefined FUN_14551b46c(void)

void FUN_14551b46c(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  longlong lVar9;
  undefined2 *puVar10;
  longlong lVar11;
  uint auStack_6a4 [4];
  int aiStack_694 [4];
  int aiStack_684 [105];
  undefined *puStack_4e0;
  undefined1 auStack_4d8 [32];
  undefined8 local_4b8;
  undefined2 *local_4b0;
  undefined2 *local_4a8;
  undefined2 *local_4a0;
  undefined1 *local_498;
  undefined1 *local_490;
  undefined1 *local_488;
  int *local_480;
  longlong local_478;
  int local_470;
  int local_468;
  float local_458;
  float local_450;
  undefined8 local_448;
  int local_440 [4];
  undefined1 local_430 [16];
  undefined1 local_420 [16];
  undefined1 local_410 [16];
  undefined2 local_400 [20];
  undefined2 local_3d8 [32];
  undefined2 local_398 [96];
  undefined2 local_2d8 [320];
  ulonglong local_58;
  
  local_4b0 = local_3d8;
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_4d8;
  iVar3 = *(int *)(param_1 + 0x11e4);
  lVar8 = (longlong)iVar3;
  local_448 = param_5;
  if (0 < iVar3) {
    iVar4 = *(int *)(param_1 + 0x121c);
    pfVar6 = (float *)(param_2 + 0xf4);
    puVar5 = local_398;
    lVar9 = lVar8;
    do {
      pfVar7 = pfVar6;
      puVar10 = puVar5;
      lVar11 = (longlong)iVar4;
      if (0 < (longlong)iVar4) {
        do {
          *puVar10 = (short)(int)ROUND(*pfVar7 * 8192.0);
          lVar11 = lVar11 + -1;
          pfVar7 = pfVar7 + 1;
          puVar10 = puVar10 + 1;
        } while (lVar11 != 0);
      }
      puVar5 = puVar5 + 0x18;
      pfVar6 = pfVar6 + 0x18;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    lVar9 = lVar8;
    pfVar6 = (float *)(param_2 + 0x274);
    do {
      local_450 = pfVar6[4] * 16384.0;
      fVar1 = pfVar6[8];
      fVar2 = pfVar6[0xc];
      *(uint *)((longlong)pfVar6 + ((longlong)auStack_6a4 - param_2)) =
           (int)ROUND(local_450) << 0x10 | (int)ROUND(*pfVar6 * 16384.0) & 0xffffU;
      *(int *)((longlong)pfVar6 + ((longlong)aiStack_694 - param_2)) = (int)ROUND(fVar1 * 16384.0);
      *(int *)((longlong)pfVar6 + ((longlong)aiStack_684 - param_2)) = (int)ROUND(fVar2 * 16384.0);
      lVar9 = lVar9 + -1;
      pfVar6 = pfVar6 + 1;
    } while (lVar9 != 0);
  }
  local_458 = *(float *)(param_2 + 0x2b4) * 1024.0;
  local_470 = (int)ROUND(local_458);
  if (0 < iVar3 * 5) {
    lVar9 = 0;
    pfVar6 = (float *)(param_2 + 0x90);
    do {
      local_458 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      local_458 = local_458 * 16384.0;
      local_400[lVar9] = (short)(int)ROUND(local_458);
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar3 * 5);
  }
  iVar3 = *(int *)(param_1 + 0x1220);
  pfVar6 = (float *)(param_2 + 0x10);
  lVar9 = 2;
  puVar5 = local_4b0;
  do {
    pfVar7 = pfVar6;
    puVar10 = puVar5;
    lVar11 = (longlong)iVar3;
    if (0 < (longlong)iVar3) {
      do {
        local_458 = *pfVar7 * 4096.0;
        *puVar10 = (short)(int)ROUND(local_458);
        lVar11 = lVar11 + -1;
        pfVar7 = pfVar7 + 1;
        puVar10 = puVar10 + 1;
      } while (lVar11 != 0);
    }
    puVar5 = puVar5 + 0x10;
    pfVar6 = pfVar6 + 0x10;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  if (0 < lVar8) {
    lVar9 = 0;
    do {
      local_458 = *(float *)(param_2 + lVar9 * 4) * 65536.0;
      local_440[lVar9] = (int)ROUND(local_458);
      lVar9 = lVar9 + 1;
    } while (lVar9 < lVar8);
  }
  if (*(char *)(param_3 + 0x1d) == '\x02') {
    local_468 = (int)(short)(&DAT_149d32c0c)[*(char *)(param_3 + 0x21)];
  }
  else {
    local_468 = 0;
  }
  iVar3 = *(int *)(param_1 + 0x11e8);
  if (0 < (longlong)iVar3) {
    lVar8 = 0;
    do {
      local_458 = *(float *)(param_6 + lVar8 * 4);
      local_2d8[lVar8] = (short)(int)ROUND(local_458);
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar3);
  }
  if ((*(int *)(param_1 + 0x1214) < 2) && (*(int *)(param_1 + 0x1240) < 1)) {
    local_478 = param_2 + 0xe4;
    local_480 = local_440;
    local_488 = local_430;
    local_490 = local_420;
    local_498 = local_410;
    local_4a0 = local_398;
    local_4a8 = local_400;
    local_4b8 = local_448;
    puStack_4e0 = (undefined *)0x14551b766;
    FUN_1455e157c(param_1,param_4,param_3,local_2d8);
  }
  else {
    local_478 = param_2 + 0xe4;
    local_480 = local_440;
    local_488 = local_430;
    local_490 = local_420;
    local_498 = local_410;
    local_4a0 = local_398;
    local_4a8 = local_400;
    local_4b8 = local_448;
    puStack_4e0 = (undefined *)0x14551b7da;
    FUN_1455e1e0c(param_1,param_4,param_3,local_2d8);
  }
                    /* WARNING: Subroutine does not return */
  puStack_4e0 = &UNK_14551b7e9;
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_4d8);
}



// FUNCTION 14551b800 FUN_14551b800 body=249 status=ok
// SIG undefined FUN_14551b800(void)

void FUN_14551b800(longlong param_1,longlong param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  
  iVar3 = *(int *)(param_2 + 0x6c);
  if (iVar3 < 1000) {
    iVar4 = (int)(0x7fff / (longlong)((iVar3 >> 4) + 1));
    *(int *)(param_2 + 0x6c) = iVar3 + 1;
  }
  else {
    iVar4 = 0;
  }
  piVar7 = (int *)(param_2 + 0x4c);
  lVar5 = 4;
  do {
    iVar6 = *(int *)((param_1 - param_2) + -0x4c + (longlong)piVar7) + piVar7[4];
    iVar3 = piVar7[-4];
    if (iVar6 < 0) {
      iVar6 = 0x7fffffff;
    }
    iVar2 = (int)(0x7fffffff / (longlong)iVar6);
    if (iVar3 << 3 < iVar6) {
      iVar3 = 0x80;
    }
    else if (iVar6 < iVar3) {
      iVar3 = 0x400;
    }
    else {
      iVar3 = (int)((ulonglong)
                    ((longlong)(int)((ulonglong)((longlong)iVar2 * (longlong)iVar3) >> 0x10) << 0xb)
                   >> 0x10);
    }
    sVar1 = (short)iVar4;
    if (iVar4 < iVar3) {
      sVar1 = (short)iVar3;
    }
    iVar3 = (int)((ulonglong)((longlong)sVar1 * (longlong)(iVar2 - *piVar7)) >> 0x10) + *piVar7;
    *piVar7 = iVar3;
    iVar6 = (int)(0x7fffffff / (longlong)iVar3);
    iVar3 = 0xffffff;
    if (iVar6 < 0xffffff) {
      iVar3 = iVar6;
    }
    piVar7[-4] = iVar3;
    piVar7 = piVar7 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}



// FUNCTION 14551b8fc FUN_14551b8fc body=140 status=ok
// SIG undefined FUN_14551b8fc(void)

undefined8 FUN_14551b8fc(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  
  memset(param_1,0,0x70);
  iVar3 = 1;
  piVar4 = (int *)((longlong)param_1 + 0x5c);
  lVar5 = 4;
  lVar6 = lVar5;
  do {
    iVar1 = (int)(0x32 / (longlong)iVar3);
    iVar2 = 1;
    if (1 < iVar1) {
      iVar2 = iVar1;
    }
    iVar3 = iVar3 + 1;
    *piVar4 = iVar2;
    piVar4 = piVar4 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  piVar4 = (int *)((longlong)param_1 + 0x3c);
  do {
    *piVar4 = piVar4[8] * 100;
    piVar4[4] = (int)(0x7fffffff / (longlong)(piVar4[8] * 100));
    piVar4 = piVar4 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0xf;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x640000006400;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x640000006400;
  return 0;
}



// FUNCTION 14551b988 FUN_14551b988 body=1492 status=ok
// SIG undefined FUN_14551b988(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14551b988(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  short *psVar2;
  byte bVar3;
  longlong lVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  short *psVar11;
  uint *puVar12;
  ulonglong uVar13;
  int *piVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar20;
  uint uVar21;
  int iVar22;
  undefined8 auStack_d0 [5];
  uint auStack_a8 [3];
  short sStack_9a;
  int local_98;
  int local_94;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined4 local_78;
  int local_74;
  int local_70;
  int local_6c;
  uint local_68 [4];
  int local_58 [4];
  ulonglong local_48;
  ulonglong uVar19;
  
  local_48 = DAT_14c707940 ^ (ulonglong)&local_98;
  lVar1 = param_1 + 0x24;
  uVar16 = *(uint *)(param_1 + 0x11e8);
  local_90 = param_1;
  local_88 = param_2;
  local_80 = lVar1;
  if (0x140 < (int)uVar16) {
    auStack_d0[0] = 0x14551b9f2;
    FUN_144bca940("assertion failed: MAX_FRAME_LENGTH >= psEncC->frame_length",
                  "../../../third_party/opus/src/silk/VAD.c",0x68);
    uVar16 = *(uint *)(param_1 + 0x11e8);
  }
  if (0x200 < (int)uVar16) {
    auStack_d0[0] = 0x14551ba15;
    FUN_144bca940("assertion failed: psEncC->frame_length <= 512",
                  "../../../third_party/opus/src/silk/VAD.c",0x69);
    uVar16 = *(uint *)(param_1 + 0x11e8);
  }
  if (uVar16 != (uVar16 & 0xfffffff8)) {
    auStack_d0[0] = 0x14551ba39;
    FUN_144bca940("assertion failed: psEncC->frame_length == 8 * silk_RSHIFT( psEncC->frame_length, 3 )"
                  ,"../../../third_party/opus/src/silk/VAD.c",0x6a);
    uVar16 = *(uint *)(param_1 + 0x11e8);
  }
  lVar10 = local_88;
  uVar13 = 0;
  iVar22 = (int)uVar16 >> 2;
  iVar20 = (int)uVar16 >> 3;
  iVar6 = 0;
  local_78 = 0;
  local_74 = iVar20 + iVar22;
  local_70 = local_74 + iVar20;
  local_6c = local_70 + iVar22;
  uVar15 = (longlong)(local_6c + ((int)uVar16 >> 1)) * 2;
  uVar8 = uVar15 + 0xf;
  if (uVar8 <= uVar15) {
    uVar8 = 0xffffffffffffff0;
  }
  auStack_d0[0] = 0x14551ba93;
  lVar4 = -(uVar8 & 0xfffffffffffffff0);
  lVar9 = (longlong)local_6c;
  psVar2 = (short *)((longlong)&local_98 + lVar4);
  *(uint *)((longlong)auStack_a8 + lVar4) = uVar16;
  *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x14551bab5;
  FUN_1455e439c(lVar10,lVar1,psVar2,psVar2 + lVar9);
  lVar10 = (longlong)local_70;
  *(int *)((longlong)auStack_a8 + lVar4) = (int)uVar16 >> 1;
  *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x14551bad1;
  FUN_1455e439c(psVar2,param_1 + 0x2c,psVar2,psVar2 + lVar10);
  *(int *)((longlong)auStack_a8 + lVar4) = iVar22;
  *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x14551baef;
  FUN_1455e439c(psVar2,param_1 + 0x34,psVar2,psVar2 + (iVar20 + iVar22));
  lVar10 = (longlong)iVar20 + -1;
  psVar2[lVar10] = psVar2[lVar10] >> 1;
  sVar5 = psVar2[lVar10];
  for (; 0 < lVar10; lVar10 = lVar10 + -1) {
    psVar11 = (short *)((longlong)&sStack_9a + lVar10 * 2 + lVar4);
    *psVar11 = *psVar11 >> 1;
    psVar2[lVar10] = psVar2[lVar10] - *(short *)((longlong)&sStack_9a + lVar10 * 2 + lVar4);
  }
  *psVar2 = *psVar2 - *(short *)(param_1 + 0x5c);
  lVar10 = local_90;
  *(short *)(param_1 + 0x5c) = sVar5;
  puVar12 = (uint *)(param_1 + 0x3c);
  local_98 = 4;
  do {
    iVar20 = *(int *)(param_1 + 0x11e8);
    uVar16 = *puVar12;
    *(uint *)((longlong)&local_80 + -lVar1 + (longlong)puVar12) = uVar16;
    iVar22 = 3;
    if (local_98 < 3) {
      iVar22 = local_98;
    }
    iVar20 = (iVar20 >> ((byte)iVar22 & 0x1f)) >> 2;
    uVar8 = uVar13;
    uVar15 = uVar13;
    do {
      uVar18 = 0;
      if (0 < iVar20) {
        psVar11 = psVar2 + (longlong)*(int *)((longlong)puVar12 + ((longlong)&local_90 - lVar1)) +
                           (longlong)(int)uVar8;
        uVar19 = uVar13;
        lVar9 = (longlong)iVar20;
        do {
          sVar5 = *psVar11;
          psVar11 = psVar11 + 1;
          uVar18 = (int)uVar19 + ((int)sVar5 >> 3) * ((int)sVar5 >> 3);
          uVar19 = (ulonglong)uVar18;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      uVar21 = uVar18;
      if (2 < (int)uVar15) {
        uVar21 = (int)uVar18 >> 1;
      }
      uVar16 = uVar16 + uVar21;
      if ((int)uVar16 < 0) {
        uVar16 = 0x7fffffff;
      }
      uVar8 = (ulonglong)(uint)((int)uVar8 + iVar20);
      uVar21 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar21;
      *(uint *)((longlong)&local_80 + -lVar1 + (longlong)puVar12) = uVar16;
      lVar9 = local_80;
    } while ((int)uVar21 < 4);
    local_98 = local_98 + -1;
    *puVar12 = uVar18;
    puVar12 = puVar12 + 1;
    param_1 = local_90;
  } while (0 < local_98);
  *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x14551bc01;
  FUN_14551b800(local_68,lVar9);
  local_94 = 0;
  local_98 = 0;
  lVar9 = lVar9 - (longlong)local_68;
  local_88 = 4;
  local_90 = lVar9;
  uVar8 = uVar13;
  do {
    uVar16 = *(uint *)((longlong)local_68 + uVar8);
    iVar20 = *(int *)(lVar9 + 0x3c + (longlong)((longlong)local_68 + uVar8));
    uVar18 = uVar16 - iVar20;
    if ((int)uVar18 < 1) {
      *(undefined4 *)((longlong)local_58 + uVar8) = 0x100;
    }
    else {
      if ((uVar16 & 0xff800000) == 0) {
        iVar22 = (int)(uVar16 << 8) / (iVar20 + 1);
        uVar15 = (longlong)(int)(uVar16 << 8) % (longlong)(iVar20 + 1);
      }
      else {
        iVar20 = (iVar20 >> 8) + 1;
        iVar22 = (int)uVar16 / iVar20;
        uVar15 = (longlong)(int)uVar16 % (longlong)iVar20;
      }
      *(int *)((longlong)local_58 + uVar8) = iVar22;
      *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x14551bc6c;
      sVar5 = FUN_144f39688(iVar22,uVar15 & 0xffffffff);
      sVar5 = sVar5 + -0x400;
      local_94 = local_94 + (int)sVar5 * (int)sVar5;
      if ((int)uVar18 < 0x100000) {
        iVar20 = 0x1f;
        if (uVar18 != 0) {
          for (; uVar18 >> iVar20 == 0; iVar20 = iVar20 + -1) {
          }
        }
        uVar16 = 0x1f - iVar20;
        iVar20 = 0x18 - uVar16;
        if (iVar20 != 0) {
          if (iVar20 < 0) {
            bVar3 = -(byte)iVar20 & 0x1f;
            uVar18 = uVar18 << bVar3 | uVar18 >> 0x20 - bVar3;
          }
          else {
            bVar3 = (byte)iVar20 & 0x1f;
            uVar18 = uVar18 >> bVar3 | uVar18 << 0x20 - bVar3;
          }
        }
        iVar20 = (int)((-(uint)((uVar16 & 1) != 0) & 0xffffcb7a) + 0xb486) >>
                 ((byte)((int)uVar16 >> 1) & 0x1f);
        sVar5 = (short)((ulonglong)
                        ((longlong)sVar5 *
                        (longlong)
                        (((int)((ulonglong)(uVar18 & 0x7f) * (longlong)iVar20 * 0xd5 >> 0x10) +
                         iVar20) * 0x40)) >> 0x10);
      }
      local_98 = local_98 +
                 (int)((ulonglong)
                       ((longlong)*(int *)((longlong)&DAT_149da12b0 + uVar8) * (longlong)sVar5) >>
                      0x10);
    }
    uVar8 = uVar8 + 4;
    local_88 = local_88 + -1;
  } while (local_88 != 0);
  uVar16 = (int)(local_94 + (local_94 >> 0x1f & 3U)) >> 2;
  if ((int)uVar16 < 1) {
    sVar5 = 0;
  }
  else {
    iVar20 = 0x1f;
    if (uVar16 != 0) {
      for (; uVar16 >> iVar20 == 0; iVar20 = iVar20 + -1) {
      }
    }
    uVar18 = 0x1f - iVar20;
    iVar20 = 0x18 - uVar18;
    if (iVar20 != 0) {
      if (iVar20 < 0) {
        bVar3 = -(byte)iVar20 & 0x1f;
        uVar16 = uVar16 << bVar3 | uVar16 >> 0x20 - bVar3;
      }
      else {
        bVar3 = (byte)iVar20 & 0x1f;
        uVar16 = uVar16 >> bVar3 | uVar16 << 0x20 - bVar3;
      }
    }
    iVar20 = (int)((-(uint)((uVar18 & 1) != 0) & 0xffffcb7a) + 0xb486) >>
             ((byte)((int)uVar18 >> 1) & 0x1f);
    sVar5 = (short)((ulonglong)(uVar16 & 0x7f) * (longlong)iVar20 * 0xd5 >> 0x10) + (short)iVar20;
  }
  *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x14551bdbd;
  iVar22 = FUN_1455e44b8((int)((ulonglong)((longlong)(short)(sVar5 * 3) * 45000) >> 0x10) + -0x80);
  iVar20 = local_98;
  uVar15 = (ulonglong)iVar22;
  *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x14551bdc8;
  iVar20 = FUN_1455e44b8(iVar20);
  lVar1 = local_80;
  iVar17 = 1;
  *(int *)(lVar10 + 0x1278) = iVar20 * 2 + -0x8000;
  uVar8 = uVar13;
  do {
    puVar12 = local_68 + uVar13;
    lVar9 = uVar13 * 4;
    uVar13 = uVar13 + 1;
    iVar20 = ((int)(*puVar12 - *(int *)(&stack0xffffffffffffffd4 + local_90 + lVar9)) >> 4) * iVar17
    ;
    iVar17 = iVar17 + 1;
    uVar16 = (int)uVar8 + iVar20;
    uVar8 = (ulonglong)uVar16;
  } while ((longlong)uVar13 < 4);
  iVar20 = *(int *)(lVar10 + 0x11e0);
  iVar17 = *(int *)(lVar10 + 0x11e8);
  uVar18 = (int)uVar16 >> 1;
  if (iVar17 != iVar20 * 0x14) {
    uVar18 = uVar16;
  }
  if ((int)uVar18 < 1) {
    uVar15 = (ulonglong)(uint)(iVar22 >> 1);
  }
  else if ((int)uVar18 < 0x4000) {
    uVar16 = uVar18 << 0x10;
    if (0 < (int)(uVar18 << 0x10)) {
      iVar6 = 0x1f;
      if (uVar16 != 0) {
        for (; uVar16 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      uVar18 = 0x1f - iVar6;
      iVar6 = 0x18 - uVar18;
      if (iVar6 != 0) {
        if (iVar6 < 0) {
          bVar3 = -(byte)iVar6 & 0x1f;
          uVar16 = uVar16 << bVar3 | uVar16 >> 0x20 - bVar3;
        }
        else {
          bVar3 = (byte)iVar6 & 0x1f;
          uVar16 = uVar16 >> bVar3 | uVar16 << 0x20 - bVar3;
        }
      }
      iVar6 = (int)((-(uint)((uVar18 & 1) != 0) & 0xffffcb7a) + 0xb486) >>
              ((byte)((int)uVar18 >> 1) & 0x1f);
      iVar6 = (int)((ulonglong)(uVar16 & 0x7f) * (longlong)iVar6 * 0xd5 >> 0x10) + iVar6;
    }
    uVar15 = (longlong)(short)iVar22 * (longlong)(iVar6 + 0x8000) >> 0x10;
  }
  iVar22 = (int)uVar15 >> 7;
  iVar6 = 0xff;
  if (iVar22 < 0xff) {
    iVar6 = iVar22;
  }
  *(int *)(&DAT_000011b4 + lVar10) = iVar6;
  lVar9 = (longlong)(short)((longlong)(short)uVar15 * (uVar15 & 0xffffffff) >> 0x10) << 0xc;
  sVar5 = (short)((ulonglong)lVar9 >> 0x10);
  if (iVar17 == iVar20 * 10) {
    sVar5 = (short)((int)((ulonglong)lVar9 >> 0x10) >> 1);
  }
  lVar10 = lVar10 - local_80;
  lVar9 = 4;
  piVar14 = (int *)(local_80 + 0x28);
  do {
    *piVar14 = (int)((ulonglong)
                     ((longlong)
                      (*(int *)(((longlong)&local_80 - lVar1) + (longlong)piVar14) - *piVar14) *
                     (longlong)sVar5) >> 0x10) + *piVar14;
    *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x14551bf27;
    iVar6 = FUN_144f39688();
    *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x14551bf3d;
    uVar7 = FUN_1455e44b8(iVar6 * 3 + -0x1400 >> 4);
    *(undefined4 *)(lVar10 + 0x1240 + (longlong)piVar14) = uVar7;
    piVar14 = piVar14 + 1;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  uVar8 = local_48 ^ (ulonglong)&local_98;
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)auStack_d0 + lVar4) = &UNK_14551bf5c;
  FUN_144d8e3a0(uVar8);
}



// FUNCTION 14551bf74 FUN_14551bf74 body=382 status=ok
// SIG undefined FUN_14551bf74(void)

int FUN_14551bf74(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = *(int *)(param_1 + 0x11e0);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x20);
  }
  iVar2 = *(int *)(param_1 + 0x11cc);
  iVar1 = (short)iVar3 * 1000;
  if (iVar1 == 0) {
    iVar3 = *(int *)(param_1 + 0x11dc);
    if (iVar2 <= *(int *)(param_1 + 0x11dc)) {
      iVar3 = iVar2;
    }
    return iVar3 / 1000;
  }
  if (((iVar2 < iVar1) || (*(int *)(param_1 + 0x11d4) < iVar1)) ||
     (iVar1 < *(int *)(param_1 + 0x11d8))) {
    if (*(int *)(param_1 + 0x11d4) <= iVar2) {
      iVar2 = *(int *)(param_1 + 0x11d4);
    }
    if (iVar2 <= *(int *)(param_1 + 0x11d8)) {
      iVar2 = *(int *)(param_1 + 0x11d8);
    }
    return iVar2 / 1000;
  }
  if (0xff < *(int *)(param_1 + 0x18)) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if ((*(int *)(param_1 + 0x11b8) == 0) && (*(int *)(param_2 + 0x40) == 0)) {
    return iVar3;
  }
  if (*(int *)(param_1 + 0x11dc) < iVar1) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      *(undefined4 *)(param_1 + 0x18) = 0x100;
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    if (*(int *)(param_2 + 0x40) != 0) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
      if (iVar3 != 0x10) {
        return 8;
      }
      return 0xc;
    }
    if (0 < *(int *)(param_1 + 0x18)) {
      *(undefined4 *)(param_1 + 0x1c) = 0xfffffffe;
      return iVar3;
    }
LAB_14551c04f:
    *(undefined4 *)(param_2 + 0x58) = 1;
    *(int *)(param_2 + 0x38) =
         *(int *)(param_2 + 0x38) - (*(int *)(param_2 + 0x38) * 5) / (*(int *)(param_2 + 0x18) + 5);
  }
  else {
    if (iVar1 < *(int *)(param_1 + 0x11dc)) {
      if (*(int *)(param_2 + 0x40) == 0) {
        if (*(int *)(param_1 + 0x1c) == 0) goto LAB_14551c04f;
      }
      else {
        *(undefined4 *)(param_1 + 0x18) = 0;
        bVar4 = iVar3 == 8;
        iVar3 = 0x10;
        if (bVar4) {
          iVar3 = 0xc;
        }
        *(undefined8 *)(param_1 + 0x10) = 0;
      }
    }
    else if (-1 < *(int *)(param_1 + 0x1c)) {
      return iVar3;
    }
    *(undefined4 *)(param_1 + 0x1c) = 1;
  }
  return iVar3;
}



// FUNCTION 14551c100 FUN_14551c100 body=241 status=ok
// SIG undefined FUN_14551c100(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14551c100(longlong param_1,undefined8 param_2,ulonglong param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ulonglong uVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  uVar20 = FUN_14551c7a0();
  fVar19 = fRam000000014c732a74;
  fVar18 = _DAT_14c732a70;
  fVar17 = fRam000000014c732a6c;
  fVar16 = _DAT_14c732a68;
  if ((uVar20 & 1) != 0) {
    lVar21 = 0x30;
    if (param_4 == 1) {
      lVar21 = 0x20;
    }
    fVar4 = *(float *)(&DAT_14c732a40 + lVar21);
    fVar5 = *(float *)(lVar21 + 0x14c732a44);
    fVar6 = *(float *)(lVar21 + 0x14c732a48);
    fVar7 = *(float *)(lVar21 + 0x14c732a4c);
    uVar20 = 0;
    param_3 = (param_3 & 0xfffffffffffffff0) + param_3;
    if (param_3 != 0) {
      do {
        pfVar2 = (float *)(param_1 + 0x10 + uVar20 * 4);
        pfVar3 = (float *)(param_1 + 0x50 + uVar20 * 4);
        pfVar1 = (float *)(param_1 + uVar20 * 4);
        fVar8 = *pfVar1;
        fVar9 = pfVar1[1];
        fVar10 = pfVar1[2];
        fVar11 = pfVar1[3];
        pfVar1 = (float *)(param_1 + 0x40 + uVar20 * 4);
        fVar12 = *pfVar1;
        fVar13 = pfVar1[1];
        fVar14 = pfVar1[2];
        fVar15 = pfVar1[3];
        fVar22 = *pfVar2 * fVar16 - *pfVar3 * fVar4;
        fVar23 = pfVar2[1] * fVar17 - pfVar3[1] * fVar5;
        fVar24 = pfVar2[2] * fVar18 - pfVar3[2] * fVar6;
        fVar25 = pfVar2[3] * fVar19 - pfVar3[3] * fVar7;
        fVar26 = *pfVar3 * fVar16 + *pfVar2 * fVar4;
        fVar27 = pfVar3[1] * fVar17 + pfVar2[1] * fVar5;
        fVar28 = pfVar3[2] * fVar18 + pfVar2[2] * fVar6;
        fVar29 = pfVar3[3] * fVar19 + pfVar2[3] * fVar7;
        pfVar1 = (float *)(param_1 + uVar20 * 4);
        *pfVar1 = fVar8 + fVar22;
        pfVar1[1] = fVar9 + fVar23;
        pfVar1[2] = fVar10 + fVar24;
        pfVar1[3] = fVar11 + fVar25;
        pfVar1 = (float *)(param_1 + 0x40 + uVar20 * 4);
        *pfVar1 = fVar12 + fVar26;
        pfVar1[1] = fVar13 + fVar27;
        pfVar1[2] = fVar14 + fVar28;
        pfVar1[3] = fVar15 + fVar29;
        pfVar1 = (float *)(param_1 + 0x10 + uVar20 * 4);
        *pfVar1 = fVar8 - fVar22;
        pfVar1[1] = fVar9 - fVar23;
        pfVar1[2] = fVar10 - fVar24;
        pfVar1[3] = fVar11 - fVar25;
        pfVar1 = (float *)(param_1 + 0x50 + uVar20 * 4);
        *pfVar1 = fVar12 - fVar26;
        pfVar1[1] = fVar13 - fVar27;
        pfVar1[2] = fVar14 - fVar28;
        pfVar1[3] = fVar15 - fVar29;
        uVar20 = uVar20 + 0x18 & 0xffffffffffffffe8;
      } while (uVar20 < param_3);
    }
    return 8;
  }
  return 4;
}



// FUNCTION 14551c200 FUN_14551c200 body=691 status=ok
// SIG undefined FUN_14551c200(void)

void FUN_14551c200(longlong param_1,ulonglong param_2,ulonglong param_3,int param_4)

{
  undefined *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined *puVar17;
  longlong lVar18;
  undefined *puVar19;
  undefined *puVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  
  puVar1 = &DAT_14c732a40 + param_2 * 8;
  uVar23 = param_2 * 3;
  lVar24 = (param_2 & 0xfffffffffffffff0) + param_2;
  puVar20 = &DAT_14c732a40 + param_2 * 0x10;
  lVar2 = param_1 + lVar24 * 4;
  uVar25 = (~(uVar23 | 3) & 0xfffffffffffffff0) + ~(uVar23 | 3);
  lVar3 = param_1 + ((param_2 * 2 & 0xfffffffffffffff0) + param_2 * 2) * 4;
  lVar22 = (uVar23 & 0xfffffffffffffff0) + uVar23;
  lVar4 = param_1 + lVar22 * 4;
  puVar17 = puVar20;
  lVar18 = lVar4;
  puVar19 = puVar1;
  if (param_4 == 0) {
    lVar24 = lVar22;
    puVar17 = puVar20 + param_2 * 8;
    lVar18 = lVar2;
    puVar19 = puVar1 + param_2 * 4;
  }
  uVar21 = 0;
  lVar24 = param_1 + lVar24 * 4;
  uVar23 = uVar21;
  if (param_3 != 0) {
    do {
      pfVar5 = (float *)(puVar1 + uVar23 * 4 + (param_2 >> 1) * 4);
      fVar50 = *pfVar5;
      fVar51 = pfVar5[1];
      fVar52 = pfVar5[2];
      fVar53 = pfVar5[3];
      pfVar5 = (float *)(puVar19 + uVar23 * 4);
      fVar30 = *pfVar5;
      fVar31 = pfVar5[1];
      fVar32 = pfVar5[2];
      fVar33 = pfVar5[3];
      pfVar5 = (float *)(lVar2 + uVar21 * 4);
      pfVar8 = (float *)(lVar2 + 0x40 + uVar21 * 4);
      pfVar6 = (float *)(lVar4 + uVar21 * 4);
      pfVar9 = (float *)(lVar4 + 0x40 + uVar21 * 4);
      pfVar7 = (float *)(puVar20 + uVar23 * 4 + param_2 * 4);
      fVar13 = *pfVar7;
      fVar14 = pfVar7[1];
      fVar15 = pfVar7[2];
      fVar16 = pfVar7[3];
      pfVar12 = (float *)(lVar3 + uVar21 * 4);
      pfVar10 = (float *)(lVar3 + 0x40 + uVar21 * 4);
      pfVar7 = (float *)(param_1 + uVar21 * 4);
      pfVar11 = (float *)(param_1 + 0x40 + uVar21 * 4);
      fVar58 = fVar50 * *pfVar5 - fVar30 * *pfVar8;
      fVar59 = fVar51 * pfVar5[1] - fVar31 * pfVar8[1];
      fVar60 = fVar52 * pfVar5[2] - fVar32 * pfVar8[2];
      fVar61 = fVar53 * pfVar5[3] - fVar33 * pfVar8[3];
      fVar54 = fVar50 * *pfVar8 + fVar30 * *pfVar5;
      fVar55 = fVar51 * pfVar8[1] + fVar31 * pfVar5[1];
      fVar56 = fVar52 * pfVar8[2] + fVar32 * pfVar5[2];
      fVar57 = fVar53 * pfVar8[3] + fVar33 * pfVar5[3];
      fVar34 = *pfVar11 + fVar54;
      fVar35 = pfVar11[1] + fVar55;
      fVar36 = pfVar11[2] + fVar56;
      fVar37 = pfVar11[3] + fVar57;
      fVar26 = fVar50 * *pfVar6 - fVar30 * *pfVar9;
      fVar27 = fVar51 * pfVar6[1] - fVar31 * pfVar9[1];
      fVar28 = fVar52 * pfVar6[2] - fVar32 * pfVar9[2];
      fVar29 = fVar53 * pfVar6[3] - fVar33 * pfVar9[3];
      fVar54 = *pfVar11 - fVar54;
      fVar55 = pfVar11[1] - fVar55;
      fVar56 = pfVar11[2] - fVar56;
      fVar57 = pfVar11[3] - fVar57;
      fVar46 = fVar50 * *pfVar9 + fVar30 * *pfVar6;
      fVar47 = fVar51 * pfVar9[1] + fVar31 * pfVar6[1];
      fVar48 = fVar52 * pfVar9[2] + fVar32 * pfVar6[2];
      fVar49 = fVar53 * pfVar9[3] + fVar33 * pfVar6[3];
      fVar42 = *pfVar12 + fVar26;
      fVar43 = pfVar12[1] + fVar27;
      fVar44 = pfVar12[2] + fVar28;
      fVar45 = pfVar12[3] + fVar29;
      fVar26 = *pfVar12 - fVar26;
      fVar27 = pfVar12[1] - fVar27;
      fVar28 = pfVar12[2] - fVar28;
      fVar29 = pfVar12[3] - fVar29;
      fVar30 = *pfVar10 + fVar46;
      fVar31 = pfVar10[1] + fVar47;
      fVar32 = pfVar10[2] + fVar48;
      fVar33 = pfVar10[3] + fVar49;
      fVar46 = *pfVar10 - fVar46;
      fVar47 = pfVar10[1] - fVar47;
      fVar48 = pfVar10[2] - fVar48;
      fVar49 = pfVar10[3] - fVar49;
      pfVar5 = (float *)(puVar17 + uVar23 * 4);
      fVar50 = *pfVar5;
      fVar51 = pfVar5[1];
      fVar52 = pfVar5[2];
      fVar53 = pfVar5[3];
      fVar38 = fVar42 * fVar13 - fVar30 * fVar50;
      fVar39 = fVar43 * fVar14 - fVar31 * fVar51;
      fVar40 = fVar44 * fVar15 - fVar32 * fVar52;
      fVar41 = fVar45 * fVar16 - fVar33 * fVar53;
      fVar42 = fVar42 * fVar50 + fVar30 * fVar13;
      fVar43 = fVar43 * fVar51 + fVar31 * fVar14;
      fVar44 = fVar44 * fVar52 + fVar32 * fVar15;
      fVar45 = fVar45 * fVar53 + fVar33 * fVar16;
      fVar30 = *pfVar7 + fVar58;
      fVar31 = pfVar7[1] + fVar59;
      fVar32 = pfVar7[2] + fVar60;
      fVar33 = pfVar7[3] + fVar61;
      fVar58 = *pfVar7 - fVar58;
      fVar59 = pfVar7[1] - fVar59;
      fVar60 = pfVar7[2] - fVar60;
      fVar61 = pfVar7[3] - fVar61;
      pfVar5 = (float *)(param_1 + uVar21 * 4);
      *pfVar5 = fVar30 + fVar38;
      pfVar5[1] = fVar31 + fVar39;
      pfVar5[2] = fVar32 + fVar40;
      pfVar5[3] = fVar33 + fVar41;
      pfVar5 = (float *)(param_1 + 0x40 + uVar21 * 4);
      *pfVar5 = fVar34 + fVar42;
      pfVar5[1] = fVar35 + fVar43;
      pfVar5[2] = fVar36 + fVar44;
      pfVar5[3] = fVar37 + fVar45;
      pfVar5 = (float *)(lVar3 + uVar21 * 4);
      *pfVar5 = fVar30 - fVar38;
      pfVar5[1] = fVar31 - fVar39;
      pfVar5[2] = fVar32 - fVar40;
      pfVar5[3] = fVar33 - fVar41;
      pfVar5 = (float *)(lVar3 + 0x40 + uVar21 * 4);
      *pfVar5 = fVar34 - fVar42;
      pfVar5[1] = fVar35 - fVar43;
      pfVar5[2] = fVar36 - fVar44;
      pfVar5[3] = fVar37 - fVar45;
      fVar30 = fVar50 * fVar46 - fVar13 * fVar26;
      fVar31 = fVar51 * fVar47 - fVar14 * fVar27;
      fVar32 = fVar52 * fVar48 - fVar15 * fVar28;
      fVar33 = fVar53 * fVar49 - fVar16 * fVar29;
      fVar50 = fVar13 * fVar46 + fVar50 * fVar26;
      fVar51 = fVar14 * fVar47 + fVar51 * fVar27;
      fVar52 = fVar15 * fVar48 + fVar52 * fVar28;
      fVar53 = fVar16 * fVar49 + fVar53 * fVar29;
      pfVar5 = (float *)(lVar18 + 0x40 + uVar21 * 4);
      *pfVar5 = fVar54 + fVar30;
      pfVar5[1] = fVar55 + fVar31;
      pfVar5[2] = fVar56 + fVar32;
      pfVar5[3] = fVar57 + fVar33;
      pfVar5 = (float *)(lVar18 + uVar21 * 4);
      *pfVar5 = fVar58 + fVar50;
      pfVar5[1] = fVar59 + fVar51;
      pfVar5[2] = fVar60 + fVar52;
      pfVar5[3] = fVar61 + fVar53;
      pfVar5 = (float *)(lVar24 + uVar21 * 4);
      *pfVar5 = fVar58 - fVar50;
      pfVar5[1] = fVar59 - fVar51;
      pfVar5[2] = fVar60 - fVar52;
      pfVar5[3] = fVar61 - fVar53;
      pfVar5 = (float *)(lVar24 + 0x40 + uVar21 * 4);
      *pfVar5 = fVar54 - fVar30;
      pfVar5[1] = fVar55 - fVar31;
      pfVar5[2] = fVar56 - fVar32;
      pfVar5[3] = fVar57 - fVar33;
      uVar21 = uVar21 - uVar25 & uVar25;
      uVar23 = uVar23 + 4 & param_2 - 1;
    } while (uVar21 < param_3);
  }
  return;
}



// FUNCTION 14551c4c0 FUN_14551c4c0 body=342 status=ok
// SIG undefined FUN_14551c4c0(void)

void FUN_14551c4c0(longlong param_1,longlong param_2,longlong param_3,float *param_4,
                  ulonglong param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  ulonglong uVar34;
  longlong lVar35;
  float *pfVar36;
  ulonglong uVar37;
  longlong lVar38;
  longlong lVar39;
  
  uVar37 = 0;
  uVar34 = param_5 >> 1;
  if (param_5 >> 2 != 0) {
    param_3 = param_3 - (longlong)param_4;
    pfVar36 = param_4 + (uVar34 - 4);
    do {
      pfVar1 = (float *)(param_3 + (longlong)param_4);
      fVar10 = *pfVar1;
      fVar11 = pfVar1[1];
      fVar12 = pfVar1[2];
      fVar13 = pfVar1[3];
      fVar14 = *param_4;
      fVar15 = param_4[1];
      fVar16 = param_4[2];
      fVar17 = param_4[3];
      lVar35 = uVar34 - uVar37;
      pfVar1 = (float *)(param_2 + uVar37 * 8);
      fVar18 = *pfVar1;
      fVar19 = pfVar1[1];
      fVar20 = pfVar1[2];
      fVar21 = pfVar1[3];
      lVar38 = (uVar37 & 0xfffffffffffffff0) + uVar37;
      pfVar1 = (float *)(param_3 + (longlong)pfVar36);
      fVar22 = *pfVar1;
      fVar23 = pfVar1[1];
      fVar24 = pfVar1[2];
      fVar25 = pfVar1[3];
      param_4 = param_4 + 4;
      fVar26 = *pfVar36;
      fVar27 = pfVar36[1];
      fVar28 = pfVar36[2];
      fVar29 = pfVar36[3];
      pfVar36 = pfVar36 + -4;
      pfVar1 = (float *)(param_2 + -0x20 + lVar35 * 8);
      fVar30 = *pfVar1;
      fVar31 = pfVar1[1];
      fVar32 = pfVar1[2];
      fVar33 = pfVar1[3];
      pfVar1 = (float *)(param_2 + 0x10 + uVar37 * 8);
      fVar2 = *pfVar1;
      fVar6 = pfVar1[2];
      lVar39 = param_2 + 0x10 + uVar37 * 8;
      fVar4 = *(float *)(lVar39 + 4);
      fVar8 = *(float *)(lVar39 + 0xc);
      pfVar1 = (float *)(param_2 + -0x10 + lVar35 * 8);
      fVar3 = *pfVar1;
      fVar7 = pfVar1[2];
      lVar39 = param_2 + -0x10 + lVar35 * 8;
      fVar5 = *(float *)(lVar39 + 4);
      fVar9 = *(float *)(lVar39 + 0xc);
      lVar39 = ((lVar35 - 4U & 0xfffffffffffffff0) - uVar37) + uVar34;
      uVar37 = uVar37 + 4;
      pfVar1 = (float *)(param_1 + lVar38 * 4);
      *pfVar1 = fVar10 * fVar18 - fVar14 * fVar9;
      pfVar1[1] = fVar11 * fVar20 - fVar15 * fVar5;
      pfVar1[2] = fVar12 * fVar2 - fVar16 * fVar33;
      pfVar1[3] = fVar13 * fVar6 - fVar17 * fVar31;
      pfVar1 = (float *)(param_1 + 0x40 + lVar38 * 4);
      *pfVar1 = fVar10 * fVar9 + fVar14 * fVar18;
      pfVar1[1] = fVar11 * fVar5 + fVar15 * fVar20;
      pfVar1[2] = fVar12 * fVar33 + fVar16 * fVar2;
      pfVar1[3] = fVar13 * fVar31 + fVar17 * fVar6;
      pfVar1 = (float *)(param_1 + 0x30 + lVar39 * 4);
      *pfVar1 = fVar22 * fVar8 + fVar26 * fVar30;
      pfVar1[1] = fVar23 * fVar4 + fVar27 * fVar32;
      pfVar1[2] = fVar24 * fVar21 + fVar28 * fVar3;
      pfVar1[3] = fVar25 * fVar19 + fVar29 * fVar7;
      pfVar1 = (float *)(param_1 + -0x10 + lVar39 * 4);
      *pfVar1 = fVar22 * fVar30 - fVar26 * fVar8;
      pfVar1[1] = fVar23 * fVar32 - fVar27 * fVar4;
      pfVar1[2] = fVar24 * fVar3 - fVar28 * fVar21;
      pfVar1[3] = fVar25 * fVar7 - fVar29 * fVar19;
    } while (uVar37 < param_5 >> 2);
  }
  return;
}



// FUNCTION 14551c620 FUN_14551c620 body=377 status=ok
// SIG undefined FUN_14551c620(void)

void FUN_14551c620(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  float *param_5,ulonglong param_6)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  ulonglong uVar34;
  longlong lVar35;
  ulonglong uVar36;
  float *pfVar37;
  float *pfVar38;
  longlong lVar39;
  
  uVar36 = 0;
  uVar34 = param_6 >> 1;
  if (param_6 >> 2 != 0) {
    param_4 = param_4 - (longlong)param_5;
    pfVar37 = (float *)(param_2 + -0x20 + uVar34 * 4);
    pfVar38 = param_5 + (uVar34 - 4);
    do {
      fVar2 = *pfVar38;
      fVar3 = pfVar38[1];
      fVar4 = pfVar38[2];
      fVar5 = pfVar38[3];
      pfVar1 = (float *)((longlong)pfVar38 + param_4);
      fVar6 = *pfVar1;
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      fVar10 = *param_5;
      fVar11 = param_5[1];
      fVar12 = param_5[2];
      fVar13 = param_5[3];
      lVar39 = (uVar36 & 0xfffffffffffffff0) + uVar36;
      pfVar1 = (float *)((longlong)param_5 + param_4);
      fVar14 = *pfVar1;
      fVar15 = pfVar1[1];
      fVar16 = pfVar1[2];
      fVar17 = pfVar1[3];
      param_5 = param_5 + 4;
      pfVar1 = (float *)(param_3 + 0x40 + lVar39 * 4);
      fVar18 = *pfVar1;
      fVar19 = pfVar1[1];
      fVar20 = pfVar1[2];
      fVar21 = pfVar1[3];
      lVar35 = (((uVar34 - uVar36) - 4 & 0xfffffffffffffff0) - uVar36) + uVar34;
      pfVar38 = pfVar38 + -4;
      pfVar1 = (float *)(param_3 + lVar39 * 4);
      fVar22 = *pfVar1;
      fVar23 = pfVar1[1];
      fVar24 = pfVar1[2];
      fVar25 = pfVar1[3];
      pfVar1 = (float *)(param_3 + -0x10 + lVar35 * 4);
      fVar26 = *pfVar1;
      fVar27 = pfVar1[1];
      fVar28 = pfVar1[2];
      fVar29 = pfVar1[3];
      pfVar1 = (float *)(param_3 + 0x30 + lVar35 * 4);
      fVar30 = *pfVar1;
      fVar31 = pfVar1[1];
      fVar32 = pfVar1[2];
      fVar33 = pfVar1[3];
      pfVar1 = (float *)(param_1 + uVar36 * 8);
      *pfVar1 = fVar10 * fVar22 + fVar18 * fVar14;
      pfVar1[1] = fVar5 * fVar33 - fVar29 * fVar9;
      pfVar1[2] = fVar11 * fVar23 + fVar19 * fVar15;
      pfVar1[3] = fVar4 * fVar32 - fVar28 * fVar8;
      pfVar1 = (float *)(param_1 + 0x10 + uVar36 * 8);
      *pfVar1 = fVar12 * fVar24 + fVar20 * fVar16;
      pfVar1[1] = fVar3 * fVar31 - fVar27 * fVar7;
      pfVar1[2] = fVar13 * fVar25 + fVar21 * fVar17;
      pfVar1[3] = fVar2 * fVar30 - fVar26 * fVar6;
      uVar36 = uVar36 + 4;
      *pfVar37 = fVar30 * fVar6 + fVar2 * fVar26;
      pfVar37[1] = fVar13 * fVar21 - fVar25 * fVar17;
      pfVar37[2] = fVar31 * fVar7 + fVar3 * fVar27;
      pfVar37[3] = fVar12 * fVar20 - fVar24 * fVar16;
      pfVar37[4] = fVar32 * fVar8 + fVar4 * fVar28;
      pfVar37[5] = fVar11 * fVar19 - fVar23 * fVar15;
      pfVar37[6] = fVar33 * fVar9 + fVar5 * fVar29;
      pfVar37[7] = fVar10 * fVar18 - fVar22 * fVar14;
      pfVar37 = pfVar37 + -8;
    } while (uVar36 < param_6 >> 2);
  }
  return;
}



// FUNCTION 14551c7a0 FUN_14551c7a0 body=597 status=ok
// SIG undefined FUN_14551c7a0(void)

ulonglong FUN_14551c7a0(longlong param_1,longlong param_2,ulonglong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  
  uVar10 = 0;
  if (param_3 != 0) {
    for (; (param_3 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
    }
  }
  param_3 = param_3 >> 2;
  lVar17 = (param_3 & 0xfffffffffffffff0) + param_3;
  lVar15 = (param_3 * 2 & 0xfffffffffffffff0) + param_3 * 2;
  lVar1 = param_1 + lVar17 * 4;
  lVar2 = param_1 + lVar15 * 4;
  lVar15 = param_2 + lVar15 * 4;
  lVar13 = (param_3 * 3 & 0xfffffffffffffff0) + param_3 * 3;
  lVar11 = lVar17;
  if (param_4 != 1) {
    lVar11 = lVar13;
  }
  lVar3 = param_1 + lVar13 * 4;
  if (param_4 != 1) {
    lVar13 = lVar17;
  }
  uVar16 = 0;
  lVar11 = param_2 + lVar11 * 4;
  lVar13 = param_2 + lVar13 * 4;
  if (param_3 != 0) {
    do {
      uVar12 = (ulonglong)((ushort)(&DAT_14c734c40)[uVar16] >> (9U - (char)uVar10 & 0x3f));
      lVar14 = (uVar16 & 0xfffffffffffffff0) + uVar16;
      lVar17 = (uVar12 & 0xfffffffffffffff0) + uVar12;
      uVar16 = uVar16 + 4;
      pfVar8 = (float *)(lVar11 + lVar17 * 4);
      pfVar9 = (float *)(lVar15 + lVar17 * 4);
      pfVar6 = (float *)(lVar15 + 0x40 + lVar17 * 4);
      pfVar7 = (float *)(lVar11 + 0x40 + lVar17 * 4);
      pfVar4 = (float *)(lVar13 + lVar17 * 4);
      pfVar5 = (float *)(param_2 + lVar17 * 4);
      fVar34 = *pfVar4 - *pfVar8;
      fVar35 = pfVar4[1] - pfVar8[1];
      fVar36 = pfVar4[2] - pfVar8[2];
      fVar37 = pfVar4[3] - pfVar8[3];
      fVar22 = *pfVar4 + *pfVar8;
      fVar23 = pfVar4[1] + pfVar8[1];
      fVar24 = pfVar4[2] + pfVar8[2];
      fVar25 = pfVar4[3] + pfVar8[3];
      fVar18 = *pfVar9 + *pfVar5;
      fVar19 = pfVar9[1] + pfVar5[1];
      fVar20 = pfVar9[2] + pfVar5[2];
      fVar21 = pfVar9[3] + pfVar5[3];
      fVar42 = *pfVar5 - *pfVar9;
      fVar43 = pfVar5[1] - pfVar9[1];
      fVar44 = pfVar5[2] - pfVar9[2];
      fVar45 = pfVar5[3] - pfVar9[3];
      pfVar4 = (float *)(lVar13 + 0x40 + lVar17 * 4);
      pfVar5 = (float *)(param_2 + 0x40 + lVar17 * 4);
      fVar26 = *pfVar4 + *pfVar7;
      fVar27 = pfVar4[1] + pfVar7[1];
      fVar28 = pfVar4[2] + pfVar7[2];
      fVar29 = pfVar4[3] + pfVar7[3];
      fVar30 = *pfVar4 - *pfVar7;
      fVar31 = pfVar4[1] - pfVar7[1];
      fVar32 = pfVar4[2] - pfVar7[2];
      fVar33 = pfVar4[3] - pfVar7[3];
      fVar38 = *pfVar6 + *pfVar5;
      fVar39 = pfVar6[1] + pfVar5[1];
      fVar40 = pfVar6[2] + pfVar5[2];
      fVar41 = pfVar6[3] + pfVar5[3];
      fVar46 = *pfVar5 - *pfVar6;
      fVar47 = pfVar5[1] - pfVar6[1];
      fVar48 = pfVar5[2] - pfVar6[2];
      fVar49 = pfVar5[3] - pfVar6[3];
      pfVar4 = (float *)(param_1 + lVar14 * 4);
      *pfVar4 = fVar18 + fVar22;
      pfVar4[1] = fVar42 + fVar30;
      pfVar4[2] = fVar18 - fVar22;
      pfVar4[3] = fVar42 - fVar30;
      pfVar4 = (float *)(param_1 + 0x40 + lVar14 * 4);
      *pfVar4 = fVar38 + fVar26;
      pfVar4[1] = fVar46 - fVar34;
      pfVar4[2] = fVar38 - fVar26;
      pfVar4[3] = fVar46 + fVar34;
      pfVar4 = (float *)(lVar2 + lVar14 * 4);
      *pfVar4 = fVar19 + fVar23;
      pfVar4[1] = fVar43 + fVar31;
      pfVar4[2] = fVar19 - fVar23;
      pfVar4[3] = fVar43 - fVar31;
      pfVar4 = (float *)(lVar2 + 0x40 + lVar14 * 4);
      *pfVar4 = fVar39 + fVar27;
      pfVar4[1] = fVar47 - fVar35;
      pfVar4[2] = fVar39 - fVar27;
      pfVar4[3] = fVar47 + fVar35;
      pfVar4 = (float *)(lVar1 + lVar14 * 4);
      *pfVar4 = fVar20 + fVar24;
      pfVar4[1] = fVar44 + fVar32;
      pfVar4[2] = fVar20 - fVar24;
      pfVar4[3] = fVar44 - fVar32;
      pfVar4 = (float *)(lVar1 + 0x40 + lVar14 * 4);
      *pfVar4 = fVar40 + fVar28;
      pfVar4[1] = fVar48 - fVar36;
      pfVar4[2] = fVar40 - fVar28;
      pfVar4[3] = fVar48 + fVar36;
      pfVar4 = (float *)(lVar3 + lVar14 * 4);
      *pfVar4 = fVar21 + fVar25;
      pfVar4[1] = fVar45 + fVar33;
      pfVar4[2] = fVar21 - fVar25;
      pfVar4[3] = fVar45 - fVar33;
      pfVar4 = (float *)(lVar3 + 0x40 + lVar14 * 4);
      *pfVar4 = fVar41 + fVar29;
      pfVar4[1] = fVar49 - fVar37;
      pfVar4[2] = fVar41 - fVar29;
      pfVar4[3] = fVar49 + fVar37;
    } while (uVar16 < param_3);
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 14551ca00 FUN_14551ca00 body=969 status=ok
// SIG undefined FUN_14551ca00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14551ca00(longlong param_1,longlong param_2,ulonglong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
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
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  ushort uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  longlong lVar45;
  undefined8 uVar46;
  ulonglong uVar47;
  longlong lVar48;
  longlong lVar49;
  longlong lVar50;
  ulonglong uVar51;
  longlong lVar52;
  longlong lVar53;
  longlong lVar54;
  ulonglong uVar55;
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  
  uVar51 = param_3 >> 2;
  uVar20 = 0;
  for (uVar55 = param_3; (uVar55 & 1) == 0; uVar55 = uVar55 >> 1 | 0x8000000000000000) {
    uVar20 = uVar20 + 1;
  }
  lVar52 = (uVar51 & 0xfffffffffffffff0) + uVar51;
  lVar54 = (uVar51 * 2 & 0xfffffffffffffff0) + uVar51 * 2;
  lVar45 = param_1 + lVar54 * 4;
  lVar1 = param_1 + lVar52 * 4;
  lVar48 = (uVar51 * 3 & 0xfffffffffffffff0) + uVar51 * 3;
  lVar2 = param_1 + lVar48 * 4;
  lVar54 = param_2 + lVar54 * 4;
  lVar49 = lVar48;
  if (param_4 != 1) {
    lVar49 = lVar52;
    lVar52 = lVar48;
  }
  uVar55 = 0;
  lVar52 = param_2 + lVar52 * 4;
  lVar49 = param_2 + lVar49 * 4;
  if (uVar51 != 0) {
    do {
      uVar47 = (ulonglong)
               ((ushort)(&DAT_14c734c40)[uVar55] >> ((ulonglong)(ushort)(9 - uVar20) & 0x3f));
      lVar53 = (uVar55 & 0xfffffffffffffff0) + uVar55;
      lVar50 = (uVar47 & 0xfffffffffffffff0) + uVar47;
      uVar55 = uVar55 + 8;
      lVar48 = lVar50 + (param_3 >> 3 & 0xfffffffffffffff0) + (param_3 >> 3);
      auVar4 = *(undefined1 (*) [16])(lVar54 + lVar50 * 4);
      auVar5 = *(undefined1 (*) [16])(lVar54 + lVar48 * 4);
      auVar77._16_16_ = auVar5;
      auVar77._0_16_ = auVar4;
      auVar6 = *(undefined1 (*) [16])(lVar54 + 0x40 + lVar50 * 4);
      auVar7 = *(undefined1 (*) [16])(lVar54 + 0x40 + lVar48 * 4);
      auVar76._16_16_ = auVar7;
      auVar76._0_16_ = auVar6;
      auVar8 = *(undefined1 (*) [16])(lVar52 + 0x40 + lVar50 * 4);
      auVar9 = *(undefined1 (*) [16])(lVar52 + 0x40 + lVar48 * 4);
      auVar67._16_16_ = auVar9;
      auVar67._0_16_ = auVar8;
      auVar10 = *(undefined1 (*) [16])(lVar52 + lVar50 * 4);
      auVar11 = *(undefined1 (*) [16])(lVar52 + lVar48 * 4);
      auVar66._16_16_ = auVar11;
      auVar66._0_16_ = auVar10;
      auVar12 = *(undefined1 (*) [16])(param_2 + lVar50 * 4);
      auVar13 = *(undefined1 (*) [16])(param_2 + lVar48 * 4);
      auVar75._16_16_ = auVar13;
      auVar75._0_16_ = auVar12;
      auVar14 = *(undefined1 (*) [16])(param_2 + 0x40 + lVar50 * 4);
      auVar15 = *(undefined1 (*) [16])(param_2 + 0x40 + lVar48 * 4);
      auVar73._16_16_ = auVar15;
      auVar73._0_16_ = auVar14;
      auVar16 = *(undefined1 (*) [16])(lVar49 + lVar50 * 4);
      auVar17 = *(undefined1 (*) [16])(lVar49 + lVar48 * 4);
      auVar60._16_16_ = auVar17;
      auVar60._0_16_ = auVar16;
      auVar18 = *(undefined1 (*) [16])(lVar49 + 0x40 + lVar50 * 4);
      auVar19 = *(undefined1 (*) [16])(lVar49 + 0x40 + lVar48 * 4);
      auVar56._16_16_ = auVar19;
      auVar56._0_16_ = auVar18;
      auVar65._0_4_ = auVar18._0_4_ + auVar8._0_4_;
      auVar65._4_4_ = auVar18._4_4_ + auVar8._4_4_;
      auVar65._8_4_ = auVar18._8_4_ + auVar8._8_4_;
      auVar65._12_4_ = auVar18._12_4_ + auVar8._12_4_;
      auVar65._16_4_ = auVar19._0_4_ + auVar9._0_4_;
      auVar65._20_4_ = auVar19._4_4_ + auVar9._4_4_;
      auVar65._24_4_ = auVar19._8_4_ + auVar9._8_4_;
      auVar65._28_4_ = auVar19._12_4_ + auVar9._12_4_;
      auVar63._0_4_ = auVar16._0_4_ + auVar10._0_4_;
      auVar63._4_4_ = auVar16._4_4_ + auVar10._4_4_;
      auVar63._8_4_ = auVar16._8_4_ + auVar10._8_4_;
      auVar63._12_4_ = auVar16._12_4_ + auVar10._12_4_;
      auVar63._16_4_ = auVar17._0_4_ + auVar11._0_4_;
      auVar63._20_4_ = auVar17._4_4_ + auVar11._4_4_;
      auVar63._24_4_ = auVar17._8_4_ + auVar11._8_4_;
      auVar63._28_4_ = auVar17._12_4_ + auVar11._12_4_;
      auVar60 = vsubps_avx(auVar60,auVar66);
      auVar56 = vsubps_avx(auVar56,auVar67);
      auVar59._0_4_ = auVar14._0_4_ + auVar6._0_4_;
      auVar59._4_4_ = auVar14._4_4_ + auVar6._4_4_;
      auVar59._8_4_ = auVar14._8_4_ + auVar6._8_4_;
      auVar59._12_4_ = auVar14._12_4_ + auVar6._12_4_;
      auVar59._16_4_ = auVar15._0_4_ + auVar7._0_4_;
      auVar59._20_4_ = auVar15._4_4_ + auVar7._4_4_;
      auVar59._24_4_ = auVar15._8_4_ + auVar7._8_4_;
      auVar59._28_4_ = auVar15._12_4_ + auVar7._12_4_;
      auVar74._0_4_ = auVar59._0_4_ + auVar65._0_4_;
      auVar74._4_4_ = auVar59._4_4_ + auVar65._4_4_;
      auVar74._8_4_ = auVar59._8_4_ + auVar65._8_4_;
      auVar74._12_4_ = auVar59._12_4_ + auVar65._12_4_;
      auVar74._16_4_ = auVar59._16_4_ + auVar65._16_4_;
      auVar74._20_4_ = auVar59._20_4_ + auVar65._20_4_;
      auVar74._24_4_ = auVar59._24_4_ + auVar65._24_4_;
      auVar74._28_4_ = auVar59._28_4_ + auVar65._28_4_;
      auVar59 = vsubps_avx(auVar59,auVar65);
      auVar65 = vsubps_avx(auVar73,auVar76);
      auVar66 = vsubps_avx(auVar65,auVar60);
      auVar57._0_4_ = auVar12._0_4_ + auVar4._0_4_;
      auVar57._4_4_ = auVar12._4_4_ + auVar4._4_4_;
      auVar57._8_4_ = auVar12._8_4_ + auVar4._8_4_;
      auVar57._12_4_ = auVar12._12_4_ + auVar4._12_4_;
      auVar57._16_4_ = auVar13._0_4_ + auVar5._0_4_;
      auVar57._20_4_ = auVar13._4_4_ + auVar5._4_4_;
      auVar57._24_4_ = auVar13._8_4_ + auVar5._8_4_;
      auVar57._28_4_ = auVar13._12_4_ + auVar5._12_4_;
      auVar72._0_4_ = auVar57._0_4_ + auVar63._0_4_;
      auVar72._4_4_ = auVar57._4_4_ + auVar63._4_4_;
      auVar72._8_4_ = auVar57._8_4_ + auVar63._8_4_;
      auVar72._12_4_ = auVar57._12_4_ + auVar63._12_4_;
      auVar72._16_4_ = auVar57._16_4_ + auVar63._16_4_;
      auVar72._20_4_ = auVar57._20_4_ + auVar63._20_4_;
      auVar72._24_4_ = auVar57._24_4_ + auVar63._24_4_;
      auVar72._28_4_ = auVar57._28_4_ + auVar63._28_4_;
      auVar57 = vsubps_avx(auVar57,auVar63);
      auVar67 = vunpckhps_avx(auVar72,auVar57);
      auVar63 = vsubps_avx(auVar75,auVar77);
      auVar64._0_4_ = auVar63._0_4_ + auVar56._0_4_;
      auVar64._4_4_ = auVar63._4_4_ + auVar56._4_4_;
      auVar64._8_4_ = auVar63._8_4_ + auVar56._8_4_;
      auVar64._12_4_ = auVar63._12_4_ + auVar56._12_4_;
      auVar64._16_4_ = auVar63._16_4_ + auVar56._16_4_;
      auVar64._20_4_ = auVar63._20_4_ + auVar56._20_4_;
      auVar64._24_4_ = auVar63._24_4_ + auVar56._24_4_;
      auVar64._28_4_ = auVar63._28_4_ + auVar56._28_4_;
      auVar56 = vsubps_avx(auVar63,auVar56);
      auVar61._0_4_ = auVar65._0_4_ + auVar60._0_4_;
      auVar61._4_4_ = auVar65._4_4_ + auVar60._4_4_;
      auVar61._8_4_ = auVar65._8_4_ + auVar60._8_4_;
      auVar61._12_4_ = auVar65._12_4_ + auVar60._12_4_;
      auVar61._16_4_ = auVar65._16_4_ + auVar60._16_4_;
      auVar61._20_4_ = auVar65._20_4_ + auVar60._20_4_;
      auVar61._24_4_ = auVar65._24_4_ + auVar60._24_4_;
      auVar61._28_4_ = auVar65._28_4_ + auVar60._28_4_;
      auVar65 = vunpcklps_avx(auVar64,auVar56);
      auVar57 = vunpcklps_avx(auVar72,auVar57);
      auVar60 = vunpckhps_avx(auVar64,auVar56);
      auVar56 = vunpcklps_avx(auVar57,auVar65);
      *(undefined1 (*) [32])(param_1 + lVar53 * 4) = auVar56;
      auVar63 = vunpcklps_avx(auVar66,auVar61);
      auVar56 = vunpckhps_avx(auVar57,auVar65);
      auVar65 = vunpcklps_avx(auVar74,auVar59);
      auVar57 = vunpcklps_avx(auVar65,auVar63);
      *(undefined1 (*) [32])(param_1 + 0x40 + lVar53 * 4) = auVar57;
      *(undefined1 (*) [32])(lVar45 + lVar53 * 4) = auVar56;
      auVar56 = vunpckhps_avx(auVar65,auVar63);
      *(undefined1 (*) [32])(lVar45 + 0x40 + lVar53 * 4) = auVar56;
      auVar56 = vunpckhps_avx(auVar74,auVar59);
      auVar59 = vunpckhps_avx(auVar66,auVar61);
      auVar65 = vunpcklps_avx(auVar56,auVar59);
      *(undefined1 (*) [32])(lVar1 + 0x40 + lVar53 * 4) = auVar65;
      auVar65 = vunpcklps_avx(auVar67,auVar60);
      *(undefined1 (*) [32])(lVar1 + lVar53 * 4) = auVar65;
      auVar60 = vunpckhps_avx(auVar67,auVar60);
      auVar56 = vunpckhps_avx(auVar56,auVar59);
      *(undefined1 (*) [32])(lVar2 + lVar53 * 4) = auVar60;
      *(undefined1 (*) [32])(lVar2 + 0x40 + lVar53 * 4) = auVar56;
    } while (uVar55 < uVar51);
  }
  fVar44 = fRam000000014c732a74;
  fVar43 = _DAT_14c732a70;
  fVar42 = fRam000000014c732a6c;
  fVar41 = _DAT_14c732a68;
  uVar55 = 0;
  if ((uVar20 & 1) == 0) {
    FUN_14551d420(param_1,param_3,param_4);
    uVar46 = 0x10;
  }
  else {
    fVar68 = -_DAT_14c732a68;
    fVar69 = -fRam000000014c732a6c;
    fVar70 = -_DAT_14c732a70;
    fVar71 = -fRam000000014c732a74;
    lVar45 = 0x30;
    if (param_4 == 1) {
      lVar45 = 0x20;
    }
    fVar21 = *(float *)(&DAT_14c732a40 + lVar45);
    fVar22 = *(float *)(lVar45 + 0x14c732a44);
    fVar23 = *(float *)(lVar45 + 0x14c732a48);
    fVar24 = *(float *)(lVar45 + 0x14c732a4c);
    param_3 = (param_3 & 0xfffffffffffffff0) + param_3;
    if (param_3 != 0) {
      do {
        pfVar3 = (float *)(param_1 + 0x50 + uVar55 * 4);
        fVar25 = *pfVar3;
        fVar26 = pfVar3[1];
        fVar27 = pfVar3[2];
        fVar28 = pfVar3[3];
        pfVar3 = (float *)(param_1 + 0x10 + uVar55 * 4);
        fVar29 = *pfVar3;
        fVar30 = pfVar3[1];
        fVar31 = pfVar3[2];
        fVar32 = pfVar3[3];
        pfVar3 = (float *)(param_1 + 0x40 + uVar55 * 4);
        fVar33 = *pfVar3;
        fVar34 = pfVar3[1];
        fVar35 = pfVar3[2];
        fVar36 = pfVar3[3];
        pfVar3 = (float *)(param_1 + uVar55 * 4);
        fVar37 = *pfVar3;
        fVar38 = pfVar3[1];
        fVar39 = pfVar3[2];
        fVar40 = pfVar3[3];
        auVar58._0_4_ = fVar29 * fVar41;
        auVar58._4_4_ = fVar30 * fVar42;
        auVar58._8_4_ = fVar31 * fVar43;
        auVar58._12_4_ = fVar32 * fVar44;
        auVar58._16_4_ = fVar29 * fVar68;
        auVar58._20_4_ = fVar30 * fVar69;
        auVar58._24_4_ = fVar31 * fVar70;
        auVar58._28_4_ = fVar32 * fVar71;
        pfVar3 = (float *)(param_1 + 0x40 + uVar55 * 4);
        *pfVar3 = fVar25 * fVar41 + fVar29 * fVar21 + fVar33;
        pfVar3[1] = fVar26 * fVar42 + fVar30 * fVar22 + fVar34;
        pfVar3[2] = fVar27 * fVar43 + fVar31 * fVar23 + fVar35;
        pfVar3[3] = fVar28 * fVar44 + fVar32 * fVar24 + fVar36;
        pfVar3[4] = fVar25 * fVar68 + fVar29 * -fVar21 + fVar33;
        pfVar3[5] = fVar26 * fVar69 + fVar30 * -fVar22 + fVar34;
        pfVar3[6] = fVar27 * fVar70 + fVar31 * -fVar23 + fVar35;
        pfVar3[7] = fVar28 * fVar71 + fVar32 * -fVar24 + fVar36;
        auVar62._0_4_ = fVar25 * fVar21;
        auVar62._4_4_ = fVar26 * fVar22;
        auVar62._8_4_ = fVar27 * fVar23;
        auVar62._12_4_ = fVar28 * fVar24;
        auVar62._16_4_ = fVar25 * -fVar21;
        auVar62._20_4_ = fVar26 * -fVar22;
        auVar62._24_4_ = fVar27 * -fVar23;
        auVar62._28_4_ = fVar28 * -fVar24;
        auVar60 = vsubps_avx(auVar58,auVar62);
        pfVar3 = (float *)(param_1 + uVar55 * 4);
        *pfVar3 = auVar60._0_4_ + fVar37;
        pfVar3[1] = auVar60._4_4_ + fVar38;
        pfVar3[2] = auVar60._8_4_ + fVar39;
        pfVar3[3] = auVar60._12_4_ + fVar40;
        pfVar3[4] = auVar60._16_4_ + fVar37;
        pfVar3[5] = auVar60._20_4_ + fVar38;
        pfVar3[6] = auVar60._24_4_ + fVar39;
        pfVar3[7] = auVar60._28_4_ + fVar40;
        uVar55 = uVar55 + 0x18 & 0xffffffffffffffe8;
      } while (uVar55 < param_3);
    }
    uVar46 = 8;
  }
  return uVar46;
}



// FUNCTION 14551cdd0 FUN_14551cdd0 body=694 status=ok
// SIG undefined FUN_14551cdd0(void)

void FUN_14551cdd0(longlong param_1,ulonglong param_2,ulonglong param_3,int param_4)

{
  undefined *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float *pfVar5;
  float *pfVar6;
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  longlong lVar25;
  undefined *puVar26;
  undefined *puVar27;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  undefined *puVar32;
  longlong lVar33;
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  float fVar46;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auVar47 [32];
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auVar63 [32];
  
  puVar1 = &DAT_14c732a40 + param_2 * 8;
  puVar32 = &DAT_14c732a40 + param_2 * 0x10;
  lVar33 = (param_2 & 0xfffffffffffffff0) + param_2;
  uVar30 = param_2 * 3;
  lVar2 = param_1 + lVar33 * 4;
  uVar31 = (~(uVar30 | 7) & 0xfffffffffffffff0) + ~(uVar30 | 7);
  lVar3 = param_1 + ((param_2 * 2 & 0xfffffffffffffff0) + param_2 * 2) * 4;
  lVar29 = (uVar30 & 0xfffffffffffffff0) + uVar30;
  lVar4 = param_1 + lVar29 * 4;
  lVar25 = lVar4;
  puVar26 = puVar1;
  puVar27 = puVar32;
  if (param_4 == 0) {
    lVar33 = lVar29;
    lVar25 = lVar2;
    puVar26 = puVar1 + param_2 * 4;
    puVar27 = puVar32 + param_2 * 8;
  }
  uVar28 = 0;
  lVar33 = param_1 + lVar33 * 4;
  uVar30 = uVar28;
  if (param_3 != 0) {
    do {
      pfVar5 = (float *)(puVar1 + uVar30 * 4 + (param_2 >> 1) * 4);
      fVar46 = *pfVar5;
      fVar48 = pfVar5[1];
      fVar49 = pfVar5[2];
      fVar50 = pfVar5[3];
      fVar51 = pfVar5[4];
      fVar52 = pfVar5[5];
      fVar53 = pfVar5[6];
      fVar54 = pfVar5[7];
      pfVar5 = (float *)(puVar26 + uVar30 * 4);
      fVar55 = *pfVar5;
      fVar56 = pfVar5[1];
      fVar57 = pfVar5[2];
      fVar58 = pfVar5[3];
      fVar59 = pfVar5[4];
      fVar60 = pfVar5[5];
      fVar61 = pfVar5[6];
      fVar62 = pfVar5[7];
      pfVar5 = (float *)(lVar2 + 0x40 + uVar28 * 4);
      auVar38._0_4_ = fVar55 * *pfVar5;
      auVar38._4_4_ = fVar56 * pfVar5[1];
      auVar38._8_4_ = fVar57 * pfVar5[2];
      auVar38._12_4_ = fVar58 * pfVar5[3];
      auVar38._16_4_ = fVar59 * pfVar5[4];
      auVar38._20_4_ = fVar60 * pfVar5[5];
      auVar38._24_4_ = fVar61 * pfVar5[6];
      auVar38._28_4_ = fVar62 * pfVar5[7];
      pfVar5 = (float *)(lVar2 + uVar28 * 4);
      auVar34._0_4_ = fVar46 * *pfVar5;
      auVar34._4_4_ = fVar48 * pfVar5[1];
      auVar34._8_4_ = fVar49 * pfVar5[2];
      auVar34._12_4_ = fVar50 * pfVar5[3];
      auVar34._16_4_ = fVar51 * pfVar5[4];
      auVar34._20_4_ = fVar52 * pfVar5[5];
      auVar34._24_4_ = fVar53 * pfVar5[6];
      auVar34._28_4_ = fVar54 * pfVar5[7];
      pfVar5 = (float *)(puVar32 + uVar30 * 4 + param_2 * 4);
      fVar9 = *pfVar5;
      fVar10 = pfVar5[1];
      fVar11 = pfVar5[2];
      fVar12 = pfVar5[3];
      fVar13 = pfVar5[4];
      fVar14 = pfVar5[5];
      fVar15 = pfVar5[6];
      fVar16 = pfVar5[7];
      pfVar5 = (float *)(puVar27 + uVar30 * 4);
      fVar17 = *pfVar5;
      fVar18 = pfVar5[1];
      fVar19 = pfVar5[2];
      fVar20 = pfVar5[3];
      fVar21 = pfVar5[4];
      fVar22 = pfVar5[5];
      fVar23 = pfVar5[6];
      fVar24 = pfVar5[7];
      auVar7 = *(undefined1 (*) [32])(param_1 + uVar28 * 4);
      auVar8 = *(undefined1 (*) [32])(param_1 + 0x40 + uVar28 * 4);
      auVar38 = vsubps_avx(auVar34,auVar38);
      pfVar5 = (float *)(lVar2 + uVar28 * 4);
      pfVar6 = (float *)(lVar2 + 0x40 + uVar28 * 4);
      auVar63._0_4_ = fVar55 * *pfVar5 + fVar46 * *pfVar6;
      auVar63._4_4_ = fVar56 * pfVar5[1] + fVar48 * pfVar6[1];
      auVar63._8_4_ = fVar57 * pfVar5[2] + fVar49 * pfVar6[2];
      auVar63._12_4_ = fVar58 * pfVar5[3] + fVar50 * pfVar6[3];
      auVar63._16_4_ = fVar59 * pfVar5[4] + fVar51 * pfVar6[4];
      auVar63._20_4_ = fVar60 * pfVar5[5] + fVar52 * pfVar6[5];
      auVar63._24_4_ = fVar61 * pfVar5[6] + fVar53 * pfVar6[6];
      auVar63._28_4_ = fVar62 * pfVar5[7] + fVar54 * pfVar6[7];
      pfVar5 = (float *)(lVar4 + 0x40 + uVar28 * 4);
      auVar39._0_4_ = fVar55 * *pfVar5;
      auVar39._4_4_ = fVar56 * pfVar5[1];
      auVar39._8_4_ = fVar57 * pfVar5[2];
      auVar39._12_4_ = fVar58 * pfVar5[3];
      auVar39._16_4_ = fVar59 * pfVar5[4];
      auVar39._20_4_ = fVar60 * pfVar5[5];
      auVar39._24_4_ = fVar61 * pfVar5[6];
      auVar39._28_4_ = fVar62 * pfVar5[7];
      pfVar5 = (float *)(lVar4 + uVar28 * 4);
      auVar35._0_4_ = fVar46 * *pfVar5;
      auVar35._4_4_ = fVar48 * pfVar5[1];
      auVar35._8_4_ = fVar49 * pfVar5[2];
      auVar35._12_4_ = fVar50 * pfVar5[3];
      auVar35._16_4_ = fVar51 * pfVar5[4];
      auVar35._20_4_ = fVar52 * pfVar5[5];
      auVar35._24_4_ = fVar53 * pfVar5[6];
      auVar35._28_4_ = fVar54 * pfVar5[7];
      auVar36 = vsubps_avx(auVar35,auVar39);
      pfVar5 = (float *)(lVar4 + uVar28 * 4);
      pfVar6 = (float *)(lVar4 + 0x40 + uVar28 * 4);
      auVar42._0_4_ = fVar55 * *pfVar5 + fVar46 * *pfVar6;
      auVar42._4_4_ = fVar56 * pfVar5[1] + fVar48 * pfVar6[1];
      auVar42._8_4_ = fVar57 * pfVar5[2] + fVar49 * pfVar6[2];
      auVar42._12_4_ = fVar58 * pfVar5[3] + fVar50 * pfVar6[3];
      auVar42._16_4_ = fVar59 * pfVar5[4] + fVar51 * pfVar6[4];
      auVar42._20_4_ = fVar60 * pfVar5[5] + fVar52 * pfVar6[5];
      auVar42._24_4_ = fVar61 * pfVar5[6] + fVar53 * pfVar6[6];
      auVar42._28_4_ = fVar62 * pfVar5[7] + fVar54 * pfVar6[7];
      auVar34 = *(undefined1 (*) [32])(lVar3 + uVar28 * 4);
      auVar35 = *(undefined1 (*) [32])(lVar3 + 0x40 + uVar28 * 4);
      fVar46 = auVar42._0_4_ + auVar35._0_4_;
      fVar48 = auVar42._4_4_ + auVar35._4_4_;
      fVar49 = auVar42._8_4_ + auVar35._8_4_;
      fVar50 = auVar42._12_4_ + auVar35._12_4_;
      fVar51 = auVar42._16_4_ + auVar35._16_4_;
      fVar52 = auVar42._20_4_ + auVar35._20_4_;
      fVar53 = auVar42._24_4_ + auVar35._24_4_;
      fVar54 = auVar42._28_4_ + auVar35._28_4_;
      fVar55 = auVar36._0_4_ + auVar34._0_4_;
      fVar56 = auVar36._4_4_ + auVar34._4_4_;
      fVar57 = auVar36._8_4_ + auVar34._8_4_;
      fVar58 = auVar36._12_4_ + auVar34._12_4_;
      fVar59 = auVar36._16_4_ + auVar34._16_4_;
      fVar60 = auVar36._20_4_ + auVar34._20_4_;
      fVar61 = auVar36._24_4_ + auVar34._24_4_;
      fVar62 = auVar36._28_4_ + auVar34._28_4_;
      auVar34 = vsubps_avx(auVar34,auVar36);
      auVar35 = vsubps_avx(auVar35,auVar42);
      auVar40._0_4_ = fVar46 * fVar17;
      auVar40._4_4_ = fVar48 * fVar18;
      auVar40._8_4_ = fVar49 * fVar19;
      auVar40._12_4_ = fVar50 * fVar20;
      auVar40._16_4_ = fVar51 * fVar21;
      auVar40._20_4_ = fVar52 * fVar22;
      auVar40._24_4_ = fVar53 * fVar23;
      auVar40._28_4_ = fVar54 * fVar24;
      auVar43._0_4_ = auVar38._0_4_ + auVar7._0_4_;
      auVar43._4_4_ = auVar38._4_4_ + auVar7._4_4_;
      auVar43._8_4_ = auVar38._8_4_ + auVar7._8_4_;
      auVar43._12_4_ = auVar38._12_4_ + auVar7._12_4_;
      auVar43._16_4_ = auVar38._16_4_ + auVar7._16_4_;
      auVar43._20_4_ = auVar38._20_4_ + auVar7._20_4_;
      auVar43._24_4_ = auVar38._24_4_ + auVar7._24_4_;
      auVar43._28_4_ = auVar38._28_4_ + auVar7._28_4_;
      auVar44._0_4_ = auVar63._0_4_ + auVar8._0_4_;
      auVar44._4_4_ = auVar63._4_4_ + auVar8._4_4_;
      auVar44._8_4_ = auVar63._8_4_ + auVar8._8_4_;
      auVar44._12_4_ = auVar63._12_4_ + auVar8._12_4_;
      auVar44._16_4_ = auVar63._16_4_ + auVar8._16_4_;
      auVar44._20_4_ = auVar63._20_4_ + auVar8._20_4_;
      auVar44._24_4_ = auVar63._24_4_ + auVar8._24_4_;
      auVar44._28_4_ = auVar63._28_4_ + auVar8._28_4_;
      auVar36._0_4_ = fVar9 * fVar55;
      auVar36._4_4_ = fVar10 * fVar56;
      auVar36._8_4_ = fVar11 * fVar57;
      auVar36._12_4_ = fVar12 * fVar58;
      auVar36._16_4_ = fVar13 * fVar59;
      auVar36._20_4_ = fVar14 * fVar60;
      auVar36._24_4_ = fVar15 * fVar61;
      auVar36._28_4_ = fVar16 * fVar62;
      auVar36 = vsubps_avx(auVar36,auVar40);
      auVar47._0_4_ = fVar55 * fVar17 + fVar9 * fVar46;
      auVar47._4_4_ = fVar56 * fVar18 + fVar10 * fVar48;
      auVar47._8_4_ = fVar57 * fVar19 + fVar11 * fVar49;
      auVar47._12_4_ = fVar58 * fVar20 + fVar12 * fVar50;
      auVar47._16_4_ = fVar59 * fVar21 + fVar13 * fVar51;
      auVar47._20_4_ = fVar60 * fVar22 + fVar14 * fVar52;
      auVar47._24_4_ = fVar61 * fVar23 + fVar15 * fVar53;
      auVar47._28_4_ = fVar62 * fVar24 + fVar16 * fVar54;
      pfVar5 = (float *)(param_1 + uVar28 * 4);
      *pfVar5 = auVar43._0_4_ + auVar36._0_4_;
      pfVar5[1] = auVar43._4_4_ + auVar36._4_4_;
      pfVar5[2] = auVar43._8_4_ + auVar36._8_4_;
      pfVar5[3] = auVar43._12_4_ + auVar36._12_4_;
      pfVar5[4] = auVar43._16_4_ + auVar36._16_4_;
      pfVar5[5] = auVar43._20_4_ + auVar36._20_4_;
      pfVar5[6] = auVar43._24_4_ + auVar36._24_4_;
      pfVar5[7] = auVar43._28_4_ + auVar36._28_4_;
      pfVar5 = (float *)(param_1 + 0x40 + uVar28 * 4);
      *pfVar5 = auVar44._0_4_ + auVar47._0_4_;
      pfVar5[1] = auVar44._4_4_ + auVar47._4_4_;
      pfVar5[2] = auVar44._8_4_ + auVar47._8_4_;
      pfVar5[3] = auVar44._12_4_ + auVar47._12_4_;
      pfVar5[4] = auVar44._16_4_ + auVar47._16_4_;
      pfVar5[5] = auVar44._20_4_ + auVar47._20_4_;
      pfVar5[6] = auVar44._24_4_ + auVar47._24_4_;
      pfVar5[7] = auVar44._28_4_ + auVar47._28_4_;
      auVar37 = vsubps_avx(auVar44,auVar47);
      *(undefined1 (*) [32])(lVar3 + 0x40 + uVar28 * 4) = auVar37;
      auVar36 = vsubps_avx(auVar43,auVar36);
      *(undefined1 (*) [32])(lVar3 + uVar28 * 4) = auVar36;
      auVar41._0_4_ = auVar35._0_4_ * fVar17;
      auVar41._4_4_ = auVar35._4_4_ * fVar18;
      auVar41._8_4_ = auVar35._8_4_ * fVar19;
      auVar41._12_4_ = auVar35._12_4_ * fVar20;
      auVar41._16_4_ = auVar35._16_4_ * fVar21;
      auVar41._20_4_ = auVar35._20_4_ * fVar22;
      auVar41._24_4_ = auVar35._24_4_ * fVar23;
      auVar41._28_4_ = auVar35._28_4_ * fVar24;
      auVar37._0_4_ = fVar9 * auVar34._0_4_;
      auVar37._4_4_ = fVar10 * auVar34._4_4_;
      auVar37._8_4_ = fVar11 * auVar34._8_4_;
      auVar37._12_4_ = fVar12 * auVar34._12_4_;
      auVar37._16_4_ = fVar13 * auVar34._16_4_;
      auVar37._20_4_ = fVar14 * auVar34._20_4_;
      auVar37._24_4_ = fVar15 * auVar34._24_4_;
      auVar37._28_4_ = fVar16 * auVar34._28_4_;
      auVar36 = vsubps_avx(auVar41,auVar37);
      auVar45._0_4_ = auVar34._0_4_ * fVar17 + fVar9 * auVar35._0_4_;
      auVar45._4_4_ = auVar34._4_4_ * fVar18 + fVar10 * auVar35._4_4_;
      auVar45._8_4_ = auVar34._8_4_ * fVar19 + fVar11 * auVar35._8_4_;
      auVar45._12_4_ = auVar34._12_4_ * fVar20 + fVar12 * auVar35._12_4_;
      auVar45._16_4_ = auVar34._16_4_ * fVar21 + fVar13 * auVar35._16_4_;
      auVar45._20_4_ = auVar34._20_4_ * fVar22 + fVar14 * auVar35._20_4_;
      auVar45._24_4_ = auVar34._24_4_ * fVar23 + fVar15 * auVar35._24_4_;
      auVar45._28_4_ = auVar34._28_4_ * fVar24 + fVar16 * auVar35._28_4_;
      auVar8 = vsubps_avx(auVar8,auVar63);
      auVar7 = vsubps_avx(auVar7,auVar38);
      pfVar5 = (float *)(lVar25 + uVar28 * 4);
      *pfVar5 = auVar7._0_4_ + auVar45._0_4_;
      pfVar5[1] = auVar7._4_4_ + auVar45._4_4_;
      pfVar5[2] = auVar7._8_4_ + auVar45._8_4_;
      pfVar5[3] = auVar7._12_4_ + auVar45._12_4_;
      pfVar5[4] = auVar7._16_4_ + auVar45._16_4_;
      pfVar5[5] = auVar7._20_4_ + auVar45._20_4_;
      pfVar5[6] = auVar7._24_4_ + auVar45._24_4_;
      pfVar5[7] = auVar7._28_4_ + auVar45._28_4_;
      pfVar5 = (float *)(lVar25 + 0x40 + uVar28 * 4);
      *pfVar5 = auVar36._0_4_ + auVar8._0_4_;
      pfVar5[1] = auVar36._4_4_ + auVar8._4_4_;
      pfVar5[2] = auVar36._8_4_ + auVar8._8_4_;
      pfVar5[3] = auVar36._12_4_ + auVar8._12_4_;
      pfVar5[4] = auVar36._16_4_ + auVar8._16_4_;
      pfVar5[5] = auVar36._20_4_ + auVar8._20_4_;
      pfVar5[6] = auVar36._24_4_ + auVar8._24_4_;
      pfVar5[7] = auVar36._28_4_ + auVar8._28_4_;
      auVar7 = vsubps_avx(auVar7,auVar45);
      *(undefined1 (*) [32])(lVar33 + uVar28 * 4) = auVar7;
      auVar7 = vsubps_avx(auVar8,auVar36);
      *(undefined1 (*) [32])(lVar33 + 0x40 + uVar28 * 4) = auVar7;
      uVar28 = uVar28 - uVar31 & uVar31;
      uVar30 = uVar30 + 8 & param_2 - 1;
    } while (uVar28 < param_3);
  }
  return;
}



// FUNCTION 14551d090 FUN_14551d090 body=432 status=ok
// SIG undefined FUN_14551d090(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14551d090(longlong param_1,longlong param_2,longlong param_3,float *param_4,
                  ulonglong param_5)

{
  float *pfVar1;
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [32];
  ulonglong uVar37;
  longlong lVar38;
  float *pfVar39;
  ulonglong uVar40;
  longlong lVar41;
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  
  auVar36 = _DAT_1499d7800;
  uVar40 = 0;
  uVar37 = param_5 >> 1;
  if (param_5 >> 2 != 0) {
    param_3 = param_3 - (longlong)param_4;
    pfVar39 = param_4 + (uVar37 - 8);
    do {
      auVar42 = *(undefined1 (*) [32])(param_2 + uVar40 * 8);
      auVar2 = vperm2f128_avx(auVar42,*(undefined1 (*) [32])(param_2 + 0x20 + uVar40 * 8),0x31);
      auVar44 = vperm2f128_avx(auVar42,*(undefined1 (*) [32])(param_2 + 0x20 + uVar40 * 8),0x20);
      pfVar1 = (float *)(param_3 + (longlong)param_4);
      fVar4 = *pfVar1;
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      fVar8 = pfVar1[4];
      fVar9 = pfVar1[5];
      fVar10 = pfVar1[6];
      fVar11 = pfVar1[7];
      fVar12 = *param_4;
      fVar13 = param_4[1];
      fVar14 = param_4[2];
      fVar15 = param_4[3];
      fVar16 = param_4[4];
      fVar17 = param_4[5];
      fVar18 = param_4[6];
      fVar19 = param_4[7];
      pfVar1 = (float *)(param_3 + (longlong)pfVar39);
      fVar20 = *pfVar1;
      fVar21 = pfVar1[1];
      fVar22 = pfVar1[2];
      fVar23 = pfVar1[3];
      fVar24 = pfVar1[4];
      fVar25 = pfVar1[5];
      fVar26 = pfVar1[6];
      fVar27 = pfVar1[7];
      fVar28 = *pfVar39;
      fVar29 = pfVar39[1];
      fVar30 = pfVar39[2];
      fVar31 = pfVar39[3];
      fVar32 = pfVar39[4];
      fVar33 = pfVar39[5];
      fVar34 = pfVar39[6];
      fVar35 = pfVar39[7];
      auVar43 = vshufps_avx(auVar44,auVar2,0x88);
      param_4 = param_4 + 8;
      pfVar39 = pfVar39 + -8;
      lVar41 = (uVar40 & 0xfffffffffffffff0) + uVar40;
      lVar38 = uVar37 - uVar40;
      auVar42 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar38 * 8);
      auVar3 = vperm2f128_avx(auVar42,*(undefined1 (*) [32])(param_2 + -0x20 + lVar38 * 8),0x20);
      auVar45 = vperm2f128_avx(auVar42,*(undefined1 (*) [32])(param_2 + -0x20 + lVar38 * 8),0x31);
      auVar42 = vshufps_avx(auVar3,auVar45,0xdd);
      auVar3 = vshufps_avx(auVar3,auVar45,0x88);
      auVar45 = vpermps_avx2(auVar36,auVar42);
      auVar42 = vshufps_avx(auVar44,auVar2,0xdd);
      auVar2 = vpermps_avx2(auVar36,auVar42);
      auVar42._0_4_ = auVar43._0_4_ * fVar4;
      auVar42._4_4_ = auVar43._4_4_ * fVar5;
      auVar42._8_4_ = auVar43._8_4_ * fVar6;
      auVar42._12_4_ = auVar43._12_4_ * fVar7;
      auVar42._16_4_ = auVar43._16_4_ * fVar8;
      auVar42._20_4_ = auVar43._20_4_ * fVar9;
      auVar42._24_4_ = auVar43._24_4_ * fVar10;
      auVar42._28_4_ = auVar43._28_4_ * fVar11;
      auVar44._0_4_ = auVar45._0_4_ * fVar12;
      auVar44._4_4_ = auVar45._4_4_ * fVar13;
      auVar44._8_4_ = auVar45._8_4_ * fVar14;
      auVar44._12_4_ = auVar45._12_4_ * fVar15;
      auVar44._16_4_ = auVar45._16_4_ * fVar16;
      auVar44._20_4_ = auVar45._20_4_ * fVar17;
      auVar44._24_4_ = auVar45._24_4_ * fVar18;
      auVar44._28_4_ = auVar45._28_4_ * fVar19;
      auVar42 = vsubps_avx(auVar42,auVar44);
      *(undefined1 (*) [32])(param_1 + lVar41 * 4) = auVar42;
      pfVar1 = (float *)(param_1 + 0x40 + lVar41 * 4);
      *pfVar1 = auVar43._0_4_ * fVar12 + auVar45._0_4_ * fVar4;
      pfVar1[1] = auVar43._4_4_ * fVar13 + auVar45._4_4_ * fVar5;
      pfVar1[2] = auVar43._8_4_ * fVar14 + auVar45._8_4_ * fVar6;
      pfVar1[3] = auVar43._12_4_ * fVar15 + auVar45._12_4_ * fVar7;
      pfVar1[4] = auVar43._16_4_ * fVar16 + auVar45._16_4_ * fVar8;
      pfVar1[5] = auVar43._20_4_ * fVar17 + auVar45._20_4_ * fVar9;
      pfVar1[6] = auVar43._24_4_ * fVar18 + auVar45._24_4_ * fVar10;
      pfVar1[7] = auVar43._28_4_ * fVar19 + auVar45._28_4_ * fVar11;
      auVar43._0_4_ = auVar2._0_4_ * fVar28;
      auVar43._4_4_ = auVar2._4_4_ * fVar29;
      auVar43._8_4_ = auVar2._8_4_ * fVar30;
      auVar43._12_4_ = auVar2._12_4_ * fVar31;
      auVar43._16_4_ = auVar2._16_4_ * fVar32;
      auVar43._20_4_ = auVar2._20_4_ * fVar33;
      auVar43._24_4_ = auVar2._24_4_ * fVar34;
      auVar43._28_4_ = auVar2._28_4_ * fVar35;
      lVar38 = (lVar38 - 8U & 0xfffffffffffffff0) - uVar40;
      uVar40 = uVar40 + 8;
      lVar38 = lVar38 + uVar37;
      auVar45._0_4_ = auVar3._0_4_ * fVar20;
      auVar45._4_4_ = auVar3._4_4_ * fVar21;
      auVar45._8_4_ = auVar3._8_4_ * fVar22;
      auVar45._12_4_ = auVar3._12_4_ * fVar23;
      auVar45._16_4_ = auVar3._16_4_ * fVar24;
      auVar45._20_4_ = auVar3._20_4_ * fVar25;
      auVar45._24_4_ = auVar3._24_4_ * fVar26;
      auVar45._28_4_ = auVar3._28_4_ * fVar27;
      auVar42 = vsubps_avx(auVar45,auVar43);
      *(undefined1 (*) [32])(param_1 + -0x20 + lVar38 * 4) = auVar42;
      pfVar1 = (float *)(param_1 + 0x20 + lVar38 * 4);
      *pfVar1 = auVar3._0_4_ * fVar28 + auVar2._0_4_ * fVar20;
      pfVar1[1] = auVar3._4_4_ * fVar29 + auVar2._4_4_ * fVar21;
      pfVar1[2] = auVar3._8_4_ * fVar30 + auVar2._8_4_ * fVar22;
      pfVar1[3] = auVar3._12_4_ * fVar31 + auVar2._12_4_ * fVar23;
      pfVar1[4] = auVar3._16_4_ * fVar32 + auVar2._16_4_ * fVar24;
      pfVar1[5] = auVar3._20_4_ * fVar33 + auVar2._20_4_ * fVar25;
      pfVar1[6] = auVar3._24_4_ * fVar34 + auVar2._24_4_ * fVar26;
      pfVar1[7] = auVar3._28_4_ * fVar35 + auVar2._28_4_ * fVar27;
    } while (uVar40 < param_5 >> 2);
  }
  return;
}



// FUNCTION 14551d240 FUN_14551d240 body=470 status=ok
// SIG undefined FUN_14551d240(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14551d240(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  float *param_5,ulonglong param_6)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined1 auVar66 [32];
  ulonglong uVar67;
  undefined1 (*pauVar68) [32];
  float *pfVar69;
  longlong lVar70;
  ulonglong uVar71;
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  
  auVar66 = _DAT_1499d7800;
  uVar71 = 0;
  uVar67 = param_6 >> 1;
  if (param_6 >> 2 != 0) {
    param_4 = param_4 - (longlong)param_5;
    pfVar69 = param_5 + (uVar67 - 8);
    pauVar68 = (undefined1 (*) [32])(param_2 + -0x40 + uVar67 * 4);
    do {
      pfVar1 = (float *)((longlong)pfVar69 + param_4);
      fVar2 = *pfVar1;
      fVar3 = pfVar1[1];
      fVar4 = pfVar1[2];
      fVar5 = pfVar1[3];
      fVar6 = pfVar1[4];
      fVar7 = pfVar1[5];
      fVar8 = pfVar1[6];
      fVar9 = pfVar1[7];
      fVar10 = *pfVar69;
      fVar11 = pfVar69[1];
      fVar12 = pfVar69[2];
      fVar13 = pfVar69[3];
      fVar14 = pfVar69[4];
      fVar15 = pfVar69[5];
      fVar16 = pfVar69[6];
      fVar17 = pfVar69[7];
      pfVar1 = (float *)((longlong)param_5 + param_4);
      fVar18 = *pfVar1;
      fVar19 = pfVar1[1];
      fVar20 = pfVar1[2];
      fVar21 = pfVar1[3];
      fVar22 = pfVar1[4];
      fVar23 = pfVar1[5];
      fVar24 = pfVar1[6];
      fVar25 = pfVar1[7];
      fVar26 = *param_5;
      fVar27 = param_5[1];
      fVar28 = param_5[2];
      fVar29 = param_5[3];
      fVar30 = param_5[4];
      fVar31 = param_5[5];
      fVar32 = param_5[6];
      fVar33 = param_5[7];
      param_5 = param_5 + 8;
      lVar70 = (uVar71 & 0xfffffffffffffff0) + uVar71;
      pfVar69 = pfVar69 + -8;
      pfVar1 = (float *)(param_3 + lVar70 * 4);
      fVar34 = *pfVar1;
      fVar35 = pfVar1[1];
      fVar36 = pfVar1[2];
      fVar37 = pfVar1[3];
      fVar38 = pfVar1[4];
      fVar39 = pfVar1[5];
      fVar40 = pfVar1[6];
      fVar41 = pfVar1[7];
      pfVar1 = (float *)(param_3 + 0x40 + lVar70 * 4);
      fVar42 = *pfVar1;
      fVar43 = pfVar1[1];
      fVar44 = pfVar1[2];
      fVar45 = pfVar1[3];
      fVar46 = pfVar1[4];
      fVar47 = pfVar1[5];
      fVar48 = pfVar1[6];
      fVar49 = pfVar1[7];
      lVar70 = (((uVar67 - uVar71) - 8 & 0xfffffffffffffff0) - uVar71) + uVar67;
      pfVar1 = (float *)(param_3 + -0x20 + lVar70 * 4);
      fVar50 = *pfVar1;
      fVar51 = pfVar1[1];
      fVar52 = pfVar1[2];
      fVar53 = pfVar1[3];
      fVar54 = pfVar1[4];
      fVar55 = pfVar1[5];
      fVar56 = pfVar1[6];
      fVar57 = pfVar1[7];
      pfVar1 = (float *)(param_3 + 0x20 + lVar70 * 4);
      fVar58 = *pfVar1;
      fVar59 = pfVar1[1];
      fVar60 = pfVar1[2];
      fVar61 = pfVar1[3];
      fVar62 = pfVar1[4];
      fVar63 = pfVar1[5];
      fVar64 = pfVar1[6];
      fVar65 = pfVar1[7];
      auVar72._0_4_ = fVar58 * fVar10;
      auVar72._4_4_ = fVar59 * fVar11;
      auVar72._8_4_ = fVar60 * fVar12;
      auVar72._12_4_ = fVar61 * fVar13;
      auVar72._16_4_ = fVar62 * fVar14;
      auVar72._20_4_ = fVar63 * fVar15;
      auVar72._24_4_ = fVar64 * fVar16;
      auVar72._28_4_ = fVar65 * fVar17;
      auVar74._0_4_ = fVar50 * fVar2;
      auVar74._4_4_ = fVar51 * fVar3;
      auVar74._8_4_ = fVar52 * fVar4;
      auVar74._12_4_ = fVar53 * fVar5;
      auVar74._16_4_ = fVar54 * fVar6;
      auVar74._20_4_ = fVar55 * fVar7;
      auVar74._24_4_ = fVar56 * fVar8;
      auVar74._28_4_ = fVar57 * fVar9;
      auVar72 = vsubps_avx(auVar72,auVar74);
      auVar72 = vpermps_avx2(auVar66,auVar72);
      auVar75._0_4_ = fVar26 * fVar34 + fVar42 * fVar18;
      auVar75._4_4_ = fVar27 * fVar35 + fVar43 * fVar19;
      auVar75._8_4_ = fVar28 * fVar36 + fVar44 * fVar20;
      auVar75._12_4_ = fVar29 * fVar37 + fVar45 * fVar21;
      auVar75._16_4_ = fVar30 * fVar38 + fVar46 * fVar22;
      auVar75._20_4_ = fVar31 * fVar39 + fVar47 * fVar23;
      auVar75._24_4_ = fVar32 * fVar40 + fVar48 * fVar24;
      auVar75._28_4_ = fVar33 * fVar41 + fVar49 * fVar25;
      auVar73 = vunpcklps_avx(auVar75,auVar72);
      auVar72 = vunpckhps_avx(auVar75,auVar72);
      auVar74 = vperm2f128_avx(auVar73,auVar72,0x20);
      *(undefined1 (*) [32])(param_1 + uVar71 * 8) = auVar74;
      auVar72 = vperm2f128_avx(auVar73,auVar72,0x31);
      *(undefined1 (*) [32])(param_1 + 0x20 + uVar71 * 8) = auVar72;
      auVar73._0_4_ = fVar34 * fVar18;
      auVar73._4_4_ = fVar35 * fVar19;
      auVar73._8_4_ = fVar36 * fVar20;
      auVar73._12_4_ = fVar37 * fVar21;
      auVar73._16_4_ = fVar38 * fVar22;
      auVar73._20_4_ = fVar39 * fVar23;
      auVar73._24_4_ = fVar40 * fVar24;
      auVar73._28_4_ = fVar41 * fVar25;
      auVar77._0_4_ = fVar42 * fVar26;
      auVar77._4_4_ = fVar43 * fVar27;
      auVar77._8_4_ = fVar44 * fVar28;
      auVar77._12_4_ = fVar45 * fVar29;
      auVar77._16_4_ = fVar46 * fVar30;
      auVar77._20_4_ = fVar47 * fVar31;
      auVar77._24_4_ = fVar48 * fVar32;
      auVar77._28_4_ = fVar49 * fVar33;
      auVar72 = vsubps_avx(auVar77,auVar73);
      auVar72 = vpermps_avx2(auVar66,auVar72);
      auVar76._0_4_ = fVar58 * fVar2 + fVar50 * fVar10;
      auVar76._4_4_ = fVar59 * fVar3 + fVar51 * fVar11;
      auVar76._8_4_ = fVar60 * fVar4 + fVar52 * fVar12;
      auVar76._12_4_ = fVar61 * fVar5 + fVar53 * fVar13;
      auVar76._16_4_ = fVar62 * fVar6 + fVar54 * fVar14;
      auVar76._20_4_ = fVar63 * fVar7 + fVar55 * fVar15;
      auVar76._24_4_ = fVar64 * fVar8 + fVar56 * fVar16;
      auVar76._28_4_ = fVar65 * fVar9 + fVar57 * fVar17;
      auVar73 = vunpcklps_avx(auVar76,auVar72);
      auVar72 = vunpckhps_avx(auVar76,auVar72);
      auVar74 = vperm2f128_avx(auVar73,auVar72,0x20);
      auVar72 = vperm2f128_avx(auVar73,auVar72,0x31);
      uVar71 = uVar71 + 8;
      *pauVar68 = auVar74;
      pauVar68[1] = auVar72;
      pauVar68 = pauVar68 + -2;
    } while (uVar71 < param_6 >> 2);
  }
  return;
}



// FUNCTION 14551d420 FUN_14551d420 body=487 status=ok
// SIG undefined FUN_14551d420(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14551d420(longlong param_1,ulonglong param_2,int param_3)

{
  undefined1 (*pauVar1) [16];
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  longlong lVar23;
  ulonglong uVar24;
  bool bVar25;
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  float fVar31;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  float fVar41;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar42 [32];
  undefined1 auVar50 [32];
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auVar55 [32];
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  
  fVar22 = fRam000000014c732a74;
  fVar21 = _DAT_14c732a70;
  fVar20 = fRam000000014c732a6c;
  fVar19 = _DAT_14c732a68;
  bVar25 = param_3 != 1;
  lVar23 = 0x30;
  if (!bVar25) {
    lVar23 = 0x20;
  }
  fVar60 = -_DAT_14c732a68;
  fVar61 = -fRam000000014c732a6c;
  fVar62 = -_DAT_14c732a70;
  fVar63 = -fRam000000014c732a74;
  fVar3 = *(float *)(&DAT_14c732a40 + lVar23);
  fVar4 = *(float *)(lVar23 + 0x14c732a44);
  fVar5 = *(float *)(lVar23 + 0x14c732a48);
  fVar6 = *(float *)(lVar23 + 0x14c732a4c);
  lVar23 = 0x60;
  if (!bVar25) {
    lVar23 = 0x40;
  }
  fVar56 = -fVar3;
  fVar57 = -fVar4;
  fVar58 = -fVar5;
  fVar59 = -fVar6;
  local_c0 = (float)DAT_14c732a90;
  fStack_bc = DAT_14c732a90._4_4_;
  fStack_b8 = DAT_14c732a90._8_4_;
  fStack_b4 = DAT_14c732a90._12_4_;
  pauVar1 = (undefined1 (*) [16])(&DAT_14c732a40 + lVar23);
  fVar51 = *(float *)*pauVar1;
  fVar52 = *(float *)(lVar23 + 0x14c732a44);
  fVar53 = *(float *)(lVar23 + 0x14c732a48);
  fVar54 = *(float *)(lVar23 + 0x14c732a4c);
  if (bVar25) {
    auVar55._16_4_ = -local_c0;
    auVar55._0_16_ = *pauVar1;
    auVar55._20_4_ = -fStack_bc;
    auVar55._24_4_ = -fStack_b8;
    auVar55._28_4_ = -fStack_b4;
  }
  else {
    auVar55._16_16_ = _DAT_14c732a90;
    auVar55._0_16_ = *pauVar1;
    fVar51 = -fVar51;
    fVar52 = -fVar52;
    fVar53 = -fVar53;
    fVar54 = -fVar54;
  }
  uVar24 = 0;
  param_2 = (param_2 & 0xfffffffffffffff0) + param_2;
  if (param_2 != 0) {
    do {
      pfVar2 = (float *)(param_1 + 0x30 + uVar24 * 4);
      fVar37 = *pfVar2;
      fVar38 = pfVar2[1];
      fVar39 = pfVar2[2];
      fVar40 = pfVar2[3];
      pfVar2 = (float *)(param_1 + 0x70 + uVar24 * 4);
      fVar7 = *pfVar2;
      fVar8 = pfVar2[1];
      fVar9 = pfVar2[2];
      fVar10 = pfVar2[3];
      pfVar2 = (float *)(param_1 + 0x10 + uVar24 * 4);
      fVar11 = *pfVar2;
      fVar12 = pfVar2[1];
      fVar13 = pfVar2[2];
      fVar14 = pfVar2[3];
      pfVar2 = (float *)(param_1 + 0x50 + uVar24 * 4);
      fVar15 = *pfVar2;
      fVar16 = pfVar2[1];
      fVar17 = pfVar2[2];
      fVar18 = pfVar2[3];
      auVar29._0_4_ = fVar3 * fVar7;
      auVar29._4_4_ = fVar4 * fVar8;
      auVar29._8_4_ = fVar5 * fVar9;
      auVar29._12_4_ = fVar6 * fVar10;
      auVar29._16_4_ = fVar56 * fVar7;
      auVar29._20_4_ = fVar57 * fVar8;
      auVar29._24_4_ = fVar58 * fVar9;
      auVar29._28_4_ = fVar59 * fVar10;
      auVar26._0_4_ = fVar19 * fVar37;
      auVar26._4_4_ = fVar20 * fVar38;
      auVar26._8_4_ = fVar21 * fVar39;
      auVar26._12_4_ = fVar22 * fVar40;
      auVar26._16_4_ = fVar60 * fVar37;
      auVar26._20_4_ = fVar61 * fVar38;
      auVar26._24_4_ = fVar62 * fVar39;
      auVar26._28_4_ = fVar63 * fVar40;
      auVar26 = vsubps_avx(auVar26,auVar29);
      pfVar2 = (float *)(param_1 + 0x20 + uVar24 * 4);
      fVar41 = auVar26._0_4_ + *pfVar2;
      fVar43 = auVar26._4_4_ + pfVar2[1];
      fVar44 = auVar26._8_4_ + pfVar2[2];
      fVar45 = auVar26._12_4_ + pfVar2[3];
      fVar46 = auVar26._16_4_ + *pfVar2;
      fVar47 = auVar26._20_4_ + pfVar2[1];
      fVar48 = auVar26._24_4_ + pfVar2[2];
      fVar49 = auVar26._28_4_ + pfVar2[3];
      pfVar2 = (float *)(param_1 + 0x60 + uVar24 * 4);
      fVar31 = fVar19 * fVar7 + fVar3 * fVar37 + *pfVar2;
      fVar34 = fVar20 * fVar8 + fVar4 * fVar38 + pfVar2[1];
      fVar35 = fVar21 * fVar9 + fVar5 * fVar39 + pfVar2[2];
      fVar36 = fVar22 * fVar10 + fVar6 * fVar40 + pfVar2[3];
      fVar37 = fVar60 * fVar7 + fVar56 * fVar37 + *pfVar2;
      fVar38 = fVar61 * fVar8 + fVar57 * fVar38 + pfVar2[1];
      fVar39 = fVar62 * fVar9 + fVar58 * fVar39 + pfVar2[2];
      fVar40 = fVar63 * fVar10 + fVar59 * fVar40 + pfVar2[3];
      auVar30._0_4_ = auVar55._0_4_ * fVar31;
      auVar30._4_4_ = auVar55._4_4_ * fVar34;
      auVar30._8_4_ = auVar55._8_4_ * fVar35;
      auVar30._12_4_ = auVar55._12_4_ * fVar36;
      auVar30._16_4_ = auVar55._16_4_ * fVar37;
      auVar30._20_4_ = auVar55._20_4_ * fVar38;
      auVar30._24_4_ = auVar55._24_4_ * fVar39;
      auVar30._28_4_ = auVar55._28_4_ * fVar40;
      auVar27._0_4_ = local_c0 * fVar41;
      auVar27._4_4_ = fStack_bc * fVar43;
      auVar27._8_4_ = fStack_b8 * fVar44;
      auVar27._12_4_ = fStack_b4 * fVar45;
      auVar27._16_4_ = fVar51 * fVar46;
      auVar27._20_4_ = fVar52 * fVar47;
      auVar27._24_4_ = fVar53 * fVar48;
      auVar27._28_4_ = fVar54 * fVar49;
      auVar26 = vsubps_avx(auVar27,auVar30);
      auVar50._0_4_ = local_c0 * fVar31 + auVar55._0_4_ * fVar41;
      auVar50._4_4_ = fStack_bc * fVar34 + auVar55._4_4_ * fVar43;
      auVar50._8_4_ = fStack_b8 * fVar35 + auVar55._8_4_ * fVar44;
      auVar50._12_4_ = fStack_b4 * fVar36 + auVar55._12_4_ * fVar45;
      auVar50._16_4_ = fVar51 * fVar37 + auVar55._16_4_ * fVar46;
      auVar50._20_4_ = fVar52 * fVar38 + auVar55._20_4_ * fVar47;
      auVar50._24_4_ = fVar53 * fVar39 + auVar55._24_4_ * fVar48;
      auVar50._28_4_ = fVar54 * fVar40 + auVar55._28_4_ * fVar49;
      pfVar2 = (float *)(param_1 + uVar24 * 4);
      auVar28._0_4_ = fVar19 * fVar11;
      auVar28._4_4_ = fVar20 * fVar12;
      auVar28._8_4_ = fVar21 * fVar13;
      auVar28._12_4_ = fVar22 * fVar14;
      auVar28._16_4_ = fVar60 * fVar11;
      auVar28._20_4_ = fVar61 * fVar12;
      auVar28._24_4_ = fVar62 * fVar13;
      auVar28._28_4_ = fVar63 * fVar14;
      auVar32._0_4_ = fVar3 * fVar15;
      auVar32._4_4_ = fVar4 * fVar16;
      auVar32._8_4_ = fVar5 * fVar17;
      auVar32._12_4_ = fVar6 * fVar18;
      auVar32._16_4_ = fVar56 * fVar15;
      auVar32._20_4_ = fVar57 * fVar16;
      auVar32._24_4_ = fVar58 * fVar17;
      auVar32._28_4_ = fVar59 * fVar18;
      auVar27 = vsubps_avx(auVar28,auVar32);
      auVar42._0_4_ = auVar27._0_4_ + *pfVar2;
      auVar42._4_4_ = auVar27._4_4_ + pfVar2[1];
      auVar42._8_4_ = auVar27._8_4_ + pfVar2[2];
      auVar42._12_4_ = auVar27._12_4_ + pfVar2[3];
      auVar42._16_4_ = auVar27._16_4_ + *pfVar2;
      auVar42._20_4_ = auVar27._20_4_ + pfVar2[1];
      auVar42._24_4_ = auVar27._24_4_ + pfVar2[2];
      auVar42._28_4_ = auVar27._28_4_ + pfVar2[3];
      pfVar2 = (float *)(param_1 + 0x40 + uVar24 * 4);
      auVar33._0_4_ = fVar19 * fVar15 + fVar3 * fVar11 + *pfVar2;
      auVar33._4_4_ = fVar20 * fVar16 + fVar4 * fVar12 + pfVar2[1];
      auVar33._8_4_ = fVar21 * fVar17 + fVar5 * fVar13 + pfVar2[2];
      auVar33._12_4_ = fVar22 * fVar18 + fVar6 * fVar14 + pfVar2[3];
      auVar33._16_4_ = fVar60 * fVar15 + fVar56 * fVar11 + *pfVar2;
      auVar33._20_4_ = fVar61 * fVar16 + fVar57 * fVar12 + pfVar2[1];
      auVar33._24_4_ = fVar62 * fVar17 + fVar58 * fVar13 + pfVar2[2];
      auVar33._28_4_ = fVar63 * fVar18 + fVar59 * fVar14 + pfVar2[3];
      pfVar2 = (float *)(param_1 + 0x40 + uVar24 * 4);
      *pfVar2 = auVar33._0_4_ + auVar50._0_4_;
      pfVar2[1] = auVar33._4_4_ + auVar50._4_4_;
      pfVar2[2] = auVar33._8_4_ + auVar50._8_4_;
      pfVar2[3] = auVar33._12_4_ + auVar50._12_4_;
      pfVar2[4] = auVar33._16_4_ + auVar50._16_4_;
      pfVar2[5] = auVar33._20_4_ + auVar50._20_4_;
      pfVar2[6] = auVar33._24_4_ + auVar50._24_4_;
      pfVar2[7] = auVar33._28_4_ + auVar50._28_4_;
      pfVar2 = (float *)(param_1 + uVar24 * 4);
      *pfVar2 = auVar42._0_4_ + auVar26._0_4_;
      pfVar2[1] = auVar42._4_4_ + auVar26._4_4_;
      pfVar2[2] = auVar42._8_4_ + auVar26._8_4_;
      pfVar2[3] = auVar42._12_4_ + auVar26._12_4_;
      pfVar2[4] = auVar42._16_4_ + auVar26._16_4_;
      pfVar2[5] = auVar42._20_4_ + auVar26._20_4_;
      pfVar2[6] = auVar42._24_4_ + auVar26._24_4_;
      pfVar2[7] = auVar42._28_4_ + auVar26._28_4_;
      auVar27 = vsubps_avx(auVar33,auVar50);
      *(undefined1 (*) [32])(param_1 + 0x60 + uVar24 * 4) = auVar27;
      auVar26 = vsubps_avx(auVar42,auVar26);
      *(undefined1 (*) [32])(param_1 + 0x20 + uVar24 * 4) = auVar26;
      uVar24 = uVar24 + 0x20;
    } while (uVar24 < param_2);
  }
  return;
}



// FUNCTION 14551d610 FUN_14551d610 body=218 status=ok
// SIG undefined FUN_14551d610(void)

undefined8 * FUN_14551d610(undefined8 param_1)

{
  undefined8 *puVar1;
  FILE *pFVar2;
  wchar_t *_Filename;
  undefined8 local_res10 [3];
  undefined1 local_218 [528];
  
  puVar1 = (undefined8 *)FUN_144f62b20(local_218,param_1);
  if (*(int *)(puVar1 + 1) == 0) {
    _Filename = (wchar_t *)0x0;
  }
  else {
    _Filename = (wchar_t *)*puVar1;
  }
  pFVar2 = _wfopen(_Filename,L"rb");
  FUN_144f62d80(local_218);
  if (pFVar2 == (FILE *)0x0) {
    return (undefined8 *)0x0;
  }
  local_res10[0] = 0x28;
  puVar1 = (undefined8 *)(*DAT_14c787670)(0,local_res10,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar1,"hkSeekableStreamReader");
  }
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1453044e0(puVar1);
    puVar1[3] = pFVar2;
    *puVar1 = hkStdioStreamReader::vftable;
    *(undefined1 *)(puVar1 + 4) = 1;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14551d6f0 FUN_14551d6f0 body=46 status=ok
// SIG undefined FUN_14551d6f0(void)

void FUN_14551d6f0(longlong param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  
  sVar1 = fread(param_2,1,param_3,*(FILE **)(param_1 + 0x18));
  if ((int)sVar1 == 0) {
    *(char *)(param_1 + 0x20) = (char)sVar1;
  }
  return;
}



// FUNCTION 14551d720 FUN_14551d720 body=10 status=ok
// SIG undefined FUN_14551d720(void)

undefined1 * FUN_14551d720(longlong param_1,undefined1 *param_2)

{
  *param_2 = *(undefined1 *)(param_1 + 0x20);
  return param_2;
}



// FUNCTION 14551d730 FUN_14551d730 body=95 status=ok
// SIG undefined FUN_14551d730(void)

longlong FUN_14551d730(longlong param_1,void *param_2,size_t param_3)

{
  FILE *_File;
  int extraout_EAX;
  int iVar1;
  size_t sVar2;
  
  _File = *(FILE **)(param_1 + 0x18);
  sVar2 = fread(param_2,1,param_3,_File);
  extraout_EAX = (int)sVar2;
  iVar1 = fseek(_File,-extraout_EAX,1);
  if ((iVar1 < 0) || (extraout_EAX == 0)) {
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return (longlong)extraout_EAX;
}



// FUNCTION 14551d790 FUN_14551d790 body=83 status=ok
// SIG undefined FUN_14551d790(void)

undefined4 * FUN_14551d790(longlong param_1,undefined4 *param_2,long param_3,int param_4)

{
  int iVar1;
  
  iVar1 = fseek(*(FILE **)(param_1 + 0x18),param_3,param_4);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x20) = 1;
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  *(undefined1 *)(param_1 + 0x20) = 0;
  return param_2;
}



// FUNCTION 14551d7f0 FUN_14551d7f0 body=21 status=ok
// SIG undefined FUN_14551d7f0(void)

longlong FUN_14551d7f0(longlong param_1)

{
  long lVar1;
  
  lVar1 = ftell(*(FILE **)(param_1 + 0x18));
  return (longlong)lVar1;
}



// FUNCTION 14551d810 FUN_14551d810 body=115 status=ok
// SIG undefined FUN_14551d810(void)

undefined8 * FUN_14551d810(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkStdioStreamReader::vftable;
  if ((FILE *)param_1[3] != (FILE *)0x0) {
    fclose((FILE *)param_1[3]);
  }
  FUN_145304500(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14551d890 FUN_14551d890 body=678 status=ok
// SIG undefined FUN_14551d890(void)

LPCWSTR FUN_14551d890(undefined8 param_1,DWORD param_2,uint param_3)

{
  char cVar1;
  DWORD DVar2;
  undefined8 *puVar3;
  HANDLE pvVar4;
  LPCWSTR pWVar5;
  undefined8 uVar6;
  longlong lVar7;
  LPCWSTR lpFileName;
  undefined8 local_res8;
  undefined4 local_res18 [2];
  undefined8 local_res20;
  undefined8 local_2c8;
  code *local_2c0;
  undefined8 *local_2b8;
  code *local_2b0;
  ulonglong *local_2a8;
  code *local_2a0;
  undefined8 *local_298;
  ulonglong local_290;
  ulonglong local_288;
  undefined1 local_280 [80];
  undefined1 local_230 [536];
  
  lpFileName = (LPCWSTR)0x0;
  local_res8 = param_1;
  puVar3 = (undefined8 *)FUN_144f62b20(local_230,param_1);
  pWVar5 = lpFileName;
  if (*(int *)(puVar3 + 1) != 0) {
    pWVar5 = (LPCWSTR)*puVar3;
  }
  pvVar4 = CreateFileW(pWVar5,0x40000000,param_3 & 0xff,(LPSECURITY_ATTRIBUTES)0x0,param_2,0x80,
                       (HANDLE)0x0);
  FUN_144f62d80(local_230);
  if (pvVar4 == (HANDLE)0xffffffffffffffff) {
    DVar2 = GetLastError();
    if ((DVar2 == 3) || (DVar2 == 0)) {
      puVar3 = (undefined8 *)FUN_144f62b20(local_230,local_res8);
      if (*(int *)(puVar3 + 1) != 0) {
        lpFileName = (LPCWSTR)*puVar3;
      }
      DVar2 = GetFullPathNameW(lpFileName,0,(LPWSTR)0x0,(LPWSTR *)0x0);
      FUN_144f62d80(local_230);
      if ((0x103 < DVar2) && ((DAT_14c7ff078 != '\0' || (cVar1 = FUN_144bdbf80(), cVar1 != '\0'))))
      {
        cVar1 = FUN_144bdbf80();
        if (cVar1 == '\0') {
          local_res18[0] = 0x104;
          local_290 = (ulonglong)DVar2;
          uVar6 = FUN_144bdc640(local_280);
          local_2c8 = 3;
          local_2c0 = FUN_144f50c70;
          local_2b8 = &local_res8;
          local_2b0 = FUN_144f50b20;
          local_2a8 = &local_290;
          local_2a0 = FUN_144f50970;
          local_298 = (undefined8 *)local_res18;
          lVar7 = FUN_144bdc480(uVar6,
                                "Failed to open a file at {}. This is likely because the absolute path is too long. Its length would be {}, which must be less than MAX_PATH ({})."
                                ,&local_2c8,0);
          *(char **)(lVar7 + 0x38) =
               "..\\..\\Platform\\Windows\\Common\\Base\\hkWin32StreamWriter.cpp";
          *(undefined8 *)(lVar7 + 0x40) = 0x35;
          FUN_144bdc690(local_280);
        }
        else {
          local_res20 = CONCAT44(local_res20._4_4_,0x104);
          local_288 = (ulonglong)DVar2;
          uVar6 = FUN_144bdc810(local_230,&DAT_14c7ff028,1);
          local_2c8 = 3;
          local_2c0 = FUN_144f50c70;
          local_2b8 = &local_res8;
          local_2b0 = FUN_144f50b20;
          local_2a8 = &local_288;
          local_2a0 = FUN_144f50970;
          local_298 = &local_res20;
          lVar7 = FUN_144bdc480(uVar6,
                                "Failed to open a file at {}. This is likely because the absolute path is too long. Its length would be {}, which must be less than MAX_PATH ({})."
                                ,&local_2c8,0);
          *(char **)(lVar7 + 0x38) =
               "..\\..\\Platform\\Windows\\Common\\Base\\hkWin32StreamWriter.cpp";
          *(undefined8 *)(lVar7 + 0x40) = 0x35;
          FUN_144bdc8a0(local_230);
        }
      }
    }
    lpFileName = (LPCWSTR)0x0;
  }
  else {
    local_res20 = 0x20;
    pWVar5 = (LPCWSTR)(*DAT_14c787670)(0,&local_res20,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(pWVar5,"hkStreamWriter");
    }
    if (pWVar5 != (LPCWSTR)0x0) {
      FUN_144bdf130(pWVar5);
      *(HANDLE *)(pWVar5 + 0xc) = pvVar4;
      *(undefined ***)pWVar5 = hkWin32StreamWriter::vftable;
      lpFileName = pWVar5;
    }
  }
  return lpFileName;
}



// FUNCTION 14551db40 FUN_14551db40 body=86 status=ok
// SIG undefined FUN_14551db40(void)

DWORD FUN_14551db40(longlong param_1,LPCVOID param_2,longlong param_3)

{
  DWORD local_res8 [8];
  
  if ((*(HANDLE *)(param_1 + 0x18) == (HANDLE)0xffffffffffffffff) || (param_3 == 0)) {
    local_res8[0] = 0;
  }
  else {
    WriteFile(*(HANDLE *)(param_1 + 0x18),param_2,(DWORD)param_3,local_res8,(LPOVERLAPPED)0x0);
    if ((local_res8[0] == 0) && (*(HANDLE *)(param_1 + 0x18) != (HANDLE)0xffffffffffffffff)) {
      CloseHandle(*(HANDLE *)(param_1 + 0x18));
      return local_res8[0];
    }
  }
  return local_res8[0];
}



// FUNCTION 14551dba0 FUN_14551dba0 body=18 status=ok
// SIG undefined FUN_14551dba0(void)

void FUN_14551dba0(longlong param_1)

{
  if (*(HANDLE *)(param_1 + 0x18) != (HANDLE)0xffffffffffffffff) {
                    /* WARNING: Could not recover jumptable at 0x00014551dbaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FlushFileBuffers(*(HANDLE *)(param_1 + 0x18));
    return;
  }
  return;
}



// FUNCTION 14551dbc0 FUN_14551dbc0 body=14 status=ok
// SIG undefined FUN_14551dbc0(void)

undefined8 FUN_14551dbc0(longlong param_1,undefined8 param_2)

{
  *(bool *)param_2 = *(longlong *)(param_1 + 0x18) != -1;
  return param_2;
}



// FUNCTION 14551dbd0 FUN_14551dbd0 body=7 status=ok
// SIG undefined FUN_14551dbd0(void)

undefined1 * FUN_14551dbd0(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 1;
  return param_2;
}



// FUNCTION 14551dbe0 FUN_14551dbe0 body=51 status=ok
// SIG undefined FUN_14551dbe0(void)

undefined4 * FUN_14551dbe0(longlong param_1,undefined4 *param_2,LONG param_3,DWORD param_4)

{
  DWORD DVar1;
  undefined4 uVar2;
  
  DVar1 = SetFilePointer(*(HANDLE *)(param_1 + 0x18),param_3,(PLONG)0x0,param_4);
  uVar2 = 0;
  if (DVar1 == 0xffffffff) {
    uVar2 = 0x80040200;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14551dc20 FUN_14551dc20 body=42 status=ok
// SIG undefined FUN_14551dc20(void)

DWORD FUN_14551dc20(longlong param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  
  DVar1 = SetFilePointer(*(HANDLE *)(param_1 + 0x18),0,(PLONG)0x0,1);
  DVar2 = 0xffffffff;
  if (DVar1 != 0xffffffff) {
    DVar2 = DVar1;
  }
  return DVar2;
}



// FUNCTION 14551dc50 FUN_14551dc50 body=116 status=ok
// SIG undefined FUN_14551dc50(void)

undefined8 * FUN_14551dc50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkWin32StreamWriter::vftable;
  if ((HANDLE)param_1[3] != (HANDLE)0xffffffffffffffff) {
    CloseHandle((HANDLE)param_1[3]);
  }
  FUN_144bdf150(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14551dcd0 FUN_14551dcd0 body=56 status=ok
// SIG undefined FUN_14551dcd0(void)

void FUN_14551dcd0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    FUN_144b3d910(param_2);
  }
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_144b3f230();
  }
  return;
}



// FUNCTION 14551dd10 FUN_14551dd10 body=84 status=ok
// SIG undefined FUN_14551dd10(void)

undefined8 FUN_14551dd10(longlong *param_1)

{
  longlong lVar1;
  undefined1 local_28 [8];
  undefined8 uStack_20;
  undefined1 local_18 [24];
  
  param_1 = (longlong *)*param_1;
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,local_28);
    return uStack_20;
  }
  lVar1 = FUN_144beec10(local_18,param_1,&DAT_14c6dc390);
  return *(undefined8 *)(lVar1 + 8);
}



// FUNCTION 14551dd70 FUN_14551dd70 body=188 status=ok
// SIG undefined FUN_14551dd70(void)

void FUN_14551dd70(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  undefined4 local_38 [8];
  undefined8 local_18 [2];
  
  uVar5 = 0;
  uVar7 = 0;
  lVar6 = 0;
  do {
    uVar2 = uVar7 >> 1;
    uVar7 = uVar7 + 2;
    lVar1 = (ulonglong)uVar2 * 8;
    *(undefined4 *)((longlong)local_38 + lVar6 + 0x10) = *(undefined4 *)(lVar1 + param_2);
    *(int *)((longlong)local_38 + lVar6 + 0x14) =
         (int)((ulonglong)*(undefined8 *)(lVar1 + param_2) >> 0x20);
    *(undefined4 *)((longlong)local_38 + lVar6) = *(undefined4 *)(lVar1 + param_3);
    *(int *)((longlong)local_38 + lVar6 + 4) =
         (int)((ulonglong)*(undefined8 *)(lVar1 + param_3) >> 0x20);
    lVar6 = lVar6 + 8;
  } while ((int)uVar7 < 4);
  FUN_14551e6d0(local_38 + 4,local_38,local_18,0,4);
  puVar4 = local_18;
  do {
    uVar3 = *puVar4;
    puVar4 = puVar4 + 1;
    uVar7 = uVar5 >> 1;
    uVar5 = uVar5 + 2;
    *(undefined8 *)(param_1 + (ulonglong)uVar7 * 8) = uVar3;
  } while ((int)uVar5 < 4);
  return;
}



// FUNCTION 14551de30 FUN_14551de30 body=743 status=ok
// SIG undefined FUN_14551de30(void)

void FUN_14551de30(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong *puVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong local_res10;
  ulonglong local_res20;
  ulonglong local_78 [4];
  ulonglong local_58;
  ulonglong uStack_50;
  
  if (*param_2 == 0 && param_2[1] == 0) {
    uVar9 = param_3[1];
    *param_1 = *param_3;
    param_1[1] = uVar9;
    return;
  }
  if (param_3[1] == 0 && *param_3 == 0) {
    uVar9 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar9;
    return;
  }
  uVar13 = 0;
  uVar7 = 0;
  puVar6 = param_2;
  do {
    uVar9 = *puVar6;
    uVar8 = (uint)uVar9;
    iVar2 = (*(code *)PTR_FUN_14c6da350)((-uVar8 & uVar8) - 1);
    uVar8 = (uint)(uVar9 >> 0x20);
    iVar3 = (*(code *)PTR_FUN_14c6da350)((-uVar8 & uVar8) - 1);
    if (iVar2 < 0x20) {
      uVar13 = uVar13 + iVar2;
      break;
    }
    uVar13 = uVar13 + iVar3 + 0x20;
    if (iVar3 + 0x20 != 0x40) break;
    uVar7 = uVar7 + 1;
    puVar6 = puVar6 + 1;
  } while (uVar7 < 2);
  uVar7 = 0;
  uVar8 = 0;
  puVar6 = param_3;
  do {
    uVar9 = *puVar6;
    uVar5 = (uint)uVar9;
    iVar2 = (*(code *)PTR_FUN_14c6da350)((-uVar5 & uVar5) - 1);
    uVar5 = (uint)(uVar9 >> 0x20);
    iVar3 = (*(code *)PTR_FUN_14c6da350)((-uVar5 & uVar5) - 1);
    if (iVar2 < 0x20) {
      uVar7 = uVar7 + iVar2;
      break;
    }
    uVar7 = uVar7 + iVar3 + 0x20;
    if (iVar3 + 0x20 != 0x40) break;
    uVar8 = uVar8 + 1;
    puVar6 = puVar6 + 1;
  } while (uVar8 < 2);
  if ((int)uVar13 < (int)uVar7) {
    uVar7 = uVar13;
  }
  bVar11 = (byte)uVar13 & 0x3f;
  local_res20 = *param_2 >> bVar11 | param_2[1] << 0x40 - bVar11;
  local_res10 = param_2[1] >> ((byte)uVar13 & 0x3f);
  bVar11 = (byte)uVar7;
  uVar9 = *param_3 >> (bVar11 & 0x3f) | param_3[1] << 0x40 - (bVar11 & 0x3f);
  uVar14 = param_3[1] >> (bVar11 & 0x3f);
  local_78[0] = uVar9;
  local_78[1] = uVar14;
  do {
    iVar2 = 0;
    puVar6 = local_78;
    uVar13 = 0;
    local_78[0] = uVar9;
    do {
      uVar10 = *puVar6;
      uVar8 = (uint)uVar10;
      iVar3 = (*(code *)PTR_FUN_14c6da350)((-uVar8 & uVar8) - 1);
      uVar8 = (uint)(uVar10 >> 0x20);
      iVar4 = (*(code *)PTR_FUN_14c6da350)((-uVar8 & uVar8) - 1);
      if (iVar3 < 0x20) {
        bVar12 = (char)iVar2 + (char)iVar3;
        break;
      }
      iVar2 = iVar2 + iVar4 + 0x20;
      bVar12 = (byte)iVar2;
      if (iVar4 + 0x20 != 0x40) break;
      uVar13 = uVar13 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar13 < 2);
    uVar10 = uVar9 >> (bVar12 & 0x3f) | uVar14 << 0x40 - (bVar12 & 0x3f);
    uVar14 = uVar14 >> (bVar12 & 0x3f);
    uVar9 = uVar10 - local_res20;
    local_58 = uVar9;
    local_78[1] = (uVar14 - local_res10) - (ulonglong)(uVar10 < local_res20);
    uStack_50 = local_78[1];
    local_78[2] = ~uVar9 + 1;
    local_78[3] = ~local_78[1] + (ulonglong)(0xfffffffffffffffe < ~uVar9);
    if ((longlong)local_78[1] < 0) {
      local_res10 = uVar14;
      local_res20 = uVar10;
      uVar9 = local_78[2];
      local_78[1] = local_78[3];
    }
    auVar1._8_4_ = (int)local_78[1];
    auVar1._0_8_ = uVar9;
    auVar1._12_4_ = (int)(local_78[1] >> 0x20);
    local_78[0] = uVar9;
    uVar14 = auVar1._8_8_;
    if (uVar14 == 0 && uVar9 == 0) {
      if (uVar7 < 0x40) {
        param_1[1] = local_res10 << (bVar11 & 0x3f) | local_res20 >> 0x40 - (bVar11 & 0x3f);
        *param_1 = local_res20 << (bVar11 & 0x3f);
        return;
      }
      *param_1 = 0;
      param_1[1] = local_res20 << (bVar11 - 0x40 & 0x3f);
      return;
    }
  } while( true );
}



// FUNCTION 14551e120 FUN_14551e120 body=59 status=ok
// SIG undefined FUN_14551e120(void)

void FUN_14551e120(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *param_2;
  *param_1 = ~uVar1 + 1;
  uVar2 = param_2[1];
  uVar3 = (ulonglong)(0xfffffffffffffffe < ~uVar1);
  param_1[1] = ~uVar2 + uVar3;
  uVar1 = param_2[2];
  uVar2 = (ulonglong)CARRY8(~uVar2,uVar3);
  param_1[2] = ~uVar1 + uVar2;
  param_1[3] = ~param_2[3] + (ulonglong)CARRY8(~uVar1,uVar2);
  return;
}



// FUNCTION 14551e160 FUN_14551e160 body=46 status=ok
// SIG undefined FUN_14551e160(void)

void FUN_14551e160(longlong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *param_2;
  uVar2 = *param_3;
  *param_1 = uVar1 + *param_3;
  uVar3 = param_2[1];
  uVar4 = (ulonglong)CARRY8(uVar1,uVar2);
  uVar1 = param_3[1];
  uVar5 = uVar3 + param_3[1];
  param_1[1] = uVar5 + uVar4;
  uVar2 = param_2[2];
  uVar3 = (ulonglong)(CARRY8(uVar3,uVar1) || CARRY8(uVar5,uVar4));
  uVar1 = param_3[2];
  uVar4 = uVar2 + param_3[2];
  param_1[2] = uVar4 + uVar3;
  param_1[3] = param_2[3] + param_3[3] + (ulonglong)(CARRY8(uVar2,uVar1) || CARRY8(uVar4,uVar3));
  return;
}



// FUNCTION 14551e190 FUN_14551e190 body=277 status=ok
// SIG undefined FUN_14551e190(void)

void FUN_14551e190(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  
  uVar1 = param_2[1];
  uVar2 = param_3[1];
  uVar18 = (longlong)uVar1 >> 0x3f;
  uVar21 = (uVar18 ^ *param_2) - uVar18;
  uVar16 = ((uVar1 ^ uVar18) - uVar18) - (ulonglong)((uVar18 ^ *param_2) < uVar18);
  uVar18 = (longlong)uVar2 >> 0x3f;
  uVar15 = (uVar18 ^ *param_3) - uVar18;
  uVar17 = ((uVar2 ^ uVar18) - uVar18) - (ulonglong)((uVar18 ^ *param_3) < uVar18);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar15;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar21;
  uVar12 = SUB168(auVar3 * auVar7,8);
  uVar11 = SUB168(auVar3 * auVar7,0);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar17;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar21;
  uVar13 = SUB168(auVar4 * auVar8,8);
  uVar18 = SUB168(auVar4 * auVar8,0);
  uVar20 = uVar12 + uVar18;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar17;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar16;
  uVar21 = SUB168(auVar5 * auVar9,0);
  uVar18 = (ulonglong)CARRY8(uVar12,uVar18);
  uVar17 = uVar13 + uVar21;
  uVar19 = uVar17 + uVar18;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar15;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar16;
  uVar14 = SUB168(auVar6 * auVar10,8);
  uVar12 = SUB168(auVar6 * auVar10,0);
  uVar16 = uVar12 + uVar20;
  uVar12 = (ulonglong)CARRY8(uVar12,uVar20);
  uVar15 = uVar14 + uVar19;
  uVar20 = uVar15 + uVar12;
  uVar18 = SUB168(auVar5 * auVar9,8) + (ulonglong)(CARRY8(uVar13,uVar21) || CARRY8(uVar17,uVar18)) +
           (ulonglong)(CARRY8(uVar14,uVar19) || CARRY8(uVar15,uVar12));
  if ((char)((byte)(uVar2 >> 0x38) ^ (byte)(uVar1 >> 0x38)) < '\0') {
    uVar11 = ~uVar11;
    uVar16 = ~uVar16;
    uVar20 = ~uVar20;
    *param_1 = uVar11 + 1;
    uVar1 = (ulonglong)(0xfffffffffffffffe < uVar11);
    param_1[1] = uVar16 + uVar1;
    uVar1 = (ulonglong)CARRY8(uVar16,uVar1);
    param_1[2] = uVar20 + uVar1;
    param_1[3] = ~uVar18 + (ulonglong)CARRY8(uVar20,uVar1);
  }
  else {
    *param_1 = uVar11;
    param_1[1] = uVar16;
    param_1[2] = uVar20;
    param_1[3] = uVar18;
  }
  return;
}



// FUNCTION 14551e2b0 FUN_14551e2b0 body=260 status=ok
// SIG undefined FUN_14551e2b0(void)

void FUN_14551e2b0(ulonglong *param_1,ulonglong *param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong local_res10;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  ulonglong uStack_10;
  
  uVar1 = (longlong)param_2[1] >> 0x3f;
  local_38 = (uVar1 ^ *param_2) - uVar1;
  local_30 = ((param_2[1] ^ uVar1) - uVar1) - (ulonglong)((uVar1 ^ *param_2) < uVar1);
  local_res10 = -param_3;
  if (-param_3 < 0) {
    local_res10 = param_3;
  }
  FUN_14551e420(&local_38,&local_res10,&local_28,2,1,4);
  if ((char)((byte)(param_2[1] >> 0x38) ^ (byte)((ulonglong)param_3 >> 0x38)) < '\0') {
    *param_1 = ~local_28 + 1;
    uVar1 = (ulonglong)(0xfffffffffffffffe < ~local_28);
    param_1[1] = ~uStack_20 + uVar1;
    uVar1 = (ulonglong)CARRY8(~uStack_20,uVar1);
    param_1[2] = ~local_18 + uVar1;
    param_1[3] = ~uStack_10 + (ulonglong)CARRY8(~local_18,uVar1);
    return;
  }
  *param_1 = local_28;
  param_1[1] = uStack_20;
  param_1[2] = local_18;
  param_1[3] = uStack_10;
  return;
}



// FUNCTION 14551e3c0 FUN_14551e3c0 body=75 status=ok
// SIG undefined FUN_14551e3c0(void)

void FUN_14551e3c0(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  longlong local_10;
  
  FUN_14551e190(&local_28);
  uVar1 = *param_1;
  *param_1 = uVar1 + local_28;
  uVar2 = param_1[1];
  uVar3 = (ulonglong)CARRY8(uVar1,local_28);
  uVar4 = uVar2 + local_20;
  param_1[1] = uVar4 + uVar3;
  uVar1 = param_1[2];
  uVar2 = (ulonglong)(CARRY8(uVar2,local_20) || CARRY8(uVar4,uVar3));
  uVar3 = uVar1 + local_18;
  param_1[2] = uVar3 + uVar2;
  param_1[3] = param_1[3] + local_10 + (ulonglong)(CARRY8(uVar1,local_18) || CARRY8(uVar3,uVar2));
  return;
}



// FUNCTION 14551e410 thunk_FUN_14551ed00 body=5 status=ok
// SIG undefined thunk_FUN_14551ed00(void)

int thunk_FUN_14551ed00(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong auStack_88 [4];
  ulonglong auStack_68 [4];
  undefined4 auStack_48 [8];
  undefined4 auStack_28 [8];
  
  if ((longlong)param_1[3] < 0) {
    auStack_88[0] = ~*param_1 + 1;
    uVar6 = (ulonglong)(0xfffffffffffffffe < ~*param_1);
    auStack_88[1] = ~param_1[1] + uVar6;
    uVar6 = (ulonglong)CARRY8(~param_1[1],uVar6);
    auStack_88[2] = ~param_1[2] + uVar6;
    auStack_88[3] = ~param_1[3] + (ulonglong)CARRY8(~param_1[2],uVar6);
  }
  else {
    auStack_88[0] = *param_1;
    auStack_88[1] = param_1[1];
    auStack_88[2] = param_1[2];
    auStack_88[3] = param_1[3];
  }
  if ((longlong)param_2[3] < 0) {
    auStack_68[0] = ~*param_2 + 1;
    uVar6 = (ulonglong)(0xfffffffffffffffe < ~*param_2);
    auStack_68[1] = ~param_2[1] + uVar6;
    uVar6 = (ulonglong)CARRY8(~param_2[1],uVar6);
    auStack_68[2] = ~param_2[2] + uVar6;
    auStack_68[3] = ~param_2[3] + (ulonglong)CARRY8(~param_2[2],uVar6);
  }
  else {
    auStack_68[0] = *param_2;
    auStack_68[1] = param_2[1];
    auStack_68[2] = param_2[2];
    auStack_68[3] = param_2[3];
  }
  uVar6 = 0;
  lVar4 = 0;
  do {
    uVar1 = uVar6 >> 1;
    uVar5 = (int)uVar6 + 2;
    uVar6 = (ulonglong)uVar5;
    *(int *)((longlong)auStack_28 + lVar4) = (int)auStack_88[uVar1];
    *(int *)((longlong)auStack_28 + lVar4 + 4) = (int)(auStack_88[uVar1] >> 0x20);
    *(int *)((longlong)auStack_48 + lVar4) = (int)auStack_68[uVar1];
    *(int *)((longlong)auStack_48 + lVar4 + 4) = (int)(auStack_68[uVar1] >> 0x20);
    lVar4 = lVar4 + 8;
  } while ((int)uVar5 < 8);
  FUN_14551e6d0(auStack_28,auStack_48,auStack_68,0,8);
  iVar2 = -1;
  if ((longlong)param_1[3] < 0) {
    iVar3 = -1;
  }
  else {
    uVar5 = 0;
    do {
      if (*param_1 != 0) {
        iVar3 = 1;
        goto LAB_14551ee6a;
      }
      uVar5 = uVar5 + 1;
      param_1 = param_1 + 1;
    } while (uVar5 < 4);
    iVar3 = 0;
  }
LAB_14551ee6a:
  if (-1 < (longlong)param_2[3]) {
    uVar5 = 0;
    do {
      if (*param_2 != 0) {
        iVar2 = 1;
        goto LAB_14551ee8d;
      }
      uVar5 = uVar5 + 1;
      param_2 = param_2 + 1;
    } while (uVar5 < 4);
    iVar2 = 0;
  }
LAB_14551ee8d:
  return iVar2 * iVar3 * (int)auStack_68[0];
}



// FUNCTION 14551e420 FUN_14551e420 body=455 status=ok
// SIG undefined FUN_14551e420(void)

void FUN_14551e420(ulonglong *param_1,ulonglong *param_2,longlong param_3,uint param_4,uint param_5,
                  uint param_6)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  bool bVar17;
  bool bVar18;
  ulonglong local_c8 [18];
  
  FUN_144bfb550(param_3,0);
  uVar15 = 0;
  if (param_4 != 0) {
    do {
      uVar13 = *param_1;
      bVar17 = false;
      uVar12 = 0;
      local_c8[0] = 0;
      local_c8[1] = 0;
      local_c8[2] = 0;
      local_c8[3] = 0;
      uVar14 = (uint)uVar15;
      uVar11 = param_6 - uVar14;
      local_c8[4] = 0;
      local_c8[5] = 0;
      local_c8[6] = 0;
      local_c8[7] = 0;
      local_c8[8] = 0;
      local_c8[9] = 0;
      uVar6 = uVar11;
      if (param_5 < uVar11) {
        uVar6 = param_5;
      }
      local_c8[10] = 0;
      local_c8[0xb] = 0;
      uVar16 = 0;
      local_c8[0xc] = 0;
      local_c8[0xd] = 0;
      local_c8[0xe] = 0;
      local_c8[0xf] = 0;
      local_c8[0x10] = 0;
      local_c8[0x11] = 0;
      puVar8 = param_2;
      uVar9 = uVar12;
      if (uVar6 != 0) {
        do {
          auVar4._8_8_ = 0;
          auVar4._0_8_ = *puVar8;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar13;
          uVar9 = SUB168(auVar4 * auVar5,8);
          uVar7 = SUB168(auVar4 * auVar5,0);
          uVar2 = (ulonglong)bVar17;
          uVar3 = uVar7 + uVar12;
          bVar17 = CARRY8(uVar7,uVar12) || CARRY8(uVar3,uVar2);
          local_c8[uVar16 + uVar14] = uVar3 + uVar2;
          uVar16 = uVar16 + 1;
          puVar8 = puVar8 + 1;
          uVar12 = uVar9;
        } while (uVar16 < uVar6);
      }
      local_c8[uVar6 + uVar14] = uVar9 + bVar17;
      bVar18 = false;
      local_c8[uVar6 + uVar14 + 1] = (ulonglong)CARRY8(uVar9,(ulonglong)bVar17);
      if (uVar14 < param_6) {
        uVar13 = (ulonglong)uVar11;
        puVar8 = local_c8 + uVar15;
        plVar10 = (longlong *)(uVar15 * 8 + param_3);
        do {
          puVar1 = (ulonglong *)((param_3 - (longlong)local_c8) + (longlong)puVar8);
          uVar15 = (ulonglong)bVar18;
          uVar12 = *puVar8 + *puVar1;
          bVar18 = CARRY8(*puVar8,*puVar1) || CARRY8(uVar12,uVar15);
          puVar8 = puVar8 + 1;
          *plVar10 = uVar12 + uVar15;
          uVar13 = uVar13 - 1;
          plVar10 = plVar10 + 1;
        } while (uVar13 != 0);
      }
      uVar15 = (ulonglong)(uVar14 + 1);
      param_1 = param_1 + 1;
    } while (uVar14 + 1 < param_4);
  }
  return;
}



// FUNCTION 14551e5f0 FUN_14551e5f0 body=222 status=ok
// SIG undefined FUN_14551e5f0(void)

int FUN_14551e5f0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  
  iVar7 = 0;
  lVar6 = (longlong)(param_2 + -1);
  if (param_2 + -1 < 0) {
    return 0;
  }
  do {
    uVar1 = *(ulonglong *)(param_1 + lVar6 * 8);
    uVar4 = (uint)uVar1 | (uint)(uVar1 >> 1) & 0x7fffffff;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    iVar2 = (*(code *)PTR_FUN_14c6da350)(uVar4 >> 0x10 | uVar4);
    uVar4 = (uint)(uVar1 >> 0x20);
    uVar4 = uVar4 | uVar4 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    iVar3 = (*(code *)PTR_FUN_14c6da350)(uVar4 >> 0x10 | uVar4);
    iVar5 = 0x20 - iVar3;
    if (0x1f < 0x20 - iVar3) {
      iVar5 = 0x40 - iVar2;
    }
    iVar7 = iVar7 + iVar5;
  } while ((iVar5 == 0x40) && (lVar6 = lVar6 + -1, -1 < lVar6));
  return iVar7;
}



// FUNCTION 14551e6d0 FUN_14551e6d0 body=1576 status=ok
// SIG undefined FUN_14551e6d0(void)

void FUN_14551e6d0(int *param_1,uint *param_2,longlong param_3,undefined4 *param_4,uint param_5)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint *puVar21;
  byte bVar22;
  byte bVar23;
  int *piVar24;
  ulonglong uVar25;
  undefined4 *puVar26;
  uint uVar27;
  ulonglong uVar28;
  undefined4 uVar29;
  longlong lVar30;
  longlong lVar31;
  uint *puVar32;
  uint uVar33;
  uint uVar34;
  longlong lVar35;
  ulonglong uVar36;
  uint uVar37;
  uint uVar38;
  ulonglong uVar39;
  uint local_108 [4];
  undefined8 local_f8;
  undefined8 local_f0;
  uint local_e8 [18];
  uint auStack_a0 [24];
  
  uVar25 = (ulonglong)param_5;
  lVar30 = (longlong)(int)param_5;
  lVar35 = lVar30 + -1;
  uVar37 = param_5;
  if (param_1[lVar30 + -1] == 0) {
    piVar24 = param_1 + lVar30 + -1;
    lVar17 = lVar30;
    uVar18 = uVar25;
    do {
      uVar37 = (uint)uVar18;
      if (lVar17 < 1) break;
      piVar24 = piVar24 + -1;
      uVar37 = uVar37 - 1;
      uVar18 = (ulonglong)uVar37;
      lVar17 = lVar17 + -1;
    } while (*piVar24 == 0);
  }
  uVar38 = param_5;
  if (param_2[lVar35] == 0) {
    puVar21 = param_2 + lVar30 + -1;
    do {
      if (lVar30 < 1) break;
      puVar21 = puVar21 + -1;
      uVar38 = uVar38 - 1;
      lVar30 = lVar30 + -1;
    } while (*puVar21 == 0);
  }
  if (uVar38 != 0) {
    local_108[1] = uVar37;
    local_108[2] = uVar38;
    if ((int)uVar37 < (int)uVar38) {
      FUN_144bfb550(param_3,0);
      if ((param_4 != (undefined4 *)0x0) && (0 < (int)param_5)) {
        lVar35 = (longlong)param_4 - (longlong)param_1;
        do {
          *(int *)(lVar35 + (longlong)param_1) = *param_1;
          param_1 = param_1 + 1;
          uVar25 = uVar25 - 1;
        } while (uVar25 != 0);
      }
    }
    else if (uVar38 == 1) {
      uVar25 = 0;
      uVar29 = 0;
      lVar30 = (longlong)(int)(uVar37 - 1);
      if (-1 < (int)(uVar37 - 1)) {
        uVar38 = *param_2;
        puVar26 = (undefined4 *)(param_3 + lVar30 * 4);
        do {
          uVar18 = (ulonglong)*(uint *)(((longlong)param_1 - param_3) + (longlong)puVar26) +
                   (uVar25 << 0x20);
          uVar25 = uVar18 % (ulonglong)uVar38;
          uVar29 = (undefined4)uVar25;
          lVar30 = lVar30 + -1;
          *puVar26 = (int)(uVar18 / uVar38);
          puVar26 = puVar26 + -1;
        } while (-1 < lVar30);
      }
      FUN_144bfb550(param_3 + (longlong)(int)uVar37 * 4,0,(longlong)(int)(param_5 - uVar37));
      if (param_4 != (undefined4 *)0x0) {
        FUN_144bfb550(param_4 + 1,0,lVar35);
        *param_4 = uVar29;
      }
    }
    else {
      lVar35 = (longlong)(int)uVar38 + -1;
      local_f0 = lVar35 * 4;
      puVar21 = param_2 + lVar35;
      uVar27 = *puVar21 | *puVar21 >> 1;
      uVar27 = uVar27 | uVar27 >> 2;
      uVar27 = uVar27 | uVar27 >> 4;
      uVar27 = uVar27 | uVar27 >> 8;
      local_108[0] = (*(code *)PTR_FUN_14c6da350)(uVar27 >> 0x10 | uVar27);
      uVar27 = 0x20 - local_108[0];
      local_f8 = (longlong)(int)uVar37 * 4;
      bVar22 = (byte)uVar27;
      if (uVar27 == 0) {
        FUN_144bfbed0(local_e8,param_1);
        *(undefined4 *)((longlong)local_e8 + local_f8) = 0;
        FUN_144bfbed0(auStack_a0 + 2,param_2,(longlong)(int)uVar38 * 4);
      }
      else {
        lVar30 = (longlong)(int)uVar37 + -1;
        uVar34 = param_1[lVar30];
        bVar23 = (byte)local_108[0];
        local_e8[(int)uVar37] = uVar34 >> (bVar23 & 0x1f);
        if (0 < lVar30) {
          puVar32 = (uint *)(param_1 + lVar30);
          do {
            lVar30 = lVar30 + -1;
            uVar37 = uVar34 << (bVar22 & 0x1f);
            uVar34 = puVar32[-1];
            *(uint *)((longlong)puVar32 + ((longlong)local_e8 - (longlong)param_1)) =
                 puVar32[-1] >> (bVar23 & 0x1f) | uVar37;
            puVar32 = puVar32 + -1;
            uVar37 = local_108[1];
          } while (0 < lVar30);
        }
        local_e8[0] = *param_1 << (bVar22 & 0x1f);
        if (0 < lVar35) {
          uVar34 = *puVar21;
          do {
            lVar35 = lVar35 + -1;
            uVar33 = uVar34 << (bVar22 & 0x1f);
            uVar34 = puVar21[-1];
            *(uint *)((longlong)puVar21 + (longlong)auStack_a0 + (8 - (longlong)param_2)) =
                 puVar21[-1] >> (bVar23 & 0x1f) | uVar33;
            puVar21 = puVar21 + -1;
          } while (0 < lVar35);
        }
        auStack_a0[2] = *param_2 << (bVar22 & 0x1f);
      }
      uVar25 = 0;
      lVar35 = (longlong)(int)uVar38;
      if (-1 < (int)(uVar37 - uVar38)) {
        uVar36 = (ulonglong)(int)(uVar37 - uVar38);
        local_f0 = (ulonglong)*(uint *)((longlong)auStack_a0 + local_f0 + 8);
        puVar21 = local_e8 + uVar36;
        lVar30 = uVar36 * -4 + 0x50;
        uVar18 = local_f0;
        uVar39 = uVar36;
        do {
          lVar17 = lVar35 + uVar39;
          uVar19 = CONCAT44(local_e8[lVar17],*(undefined4 *)((longlong)&local_f0 + lVar17 * 4 + 4));
          uVar20 = uVar19 / uVar18;
          uVar19 = uVar19 % uVar18;
          lVar31 = uVar19 << 0x20;
          do {
            if ((uVar20 < 0x100000000) &&
               (uVar28 = (ulonglong)*(uint *)((longlong)&local_f0 + lVar17 * 4) + lVar31,
               auStack_a0[lVar35] * uVar20 < uVar28 || auStack_a0[lVar35] * uVar20 - uVar28 == 0))
            break;
            uVar20 = uVar20 - 1;
            uVar19 = uVar19 + uVar18;
            lVar31 = lVar31 + (local_f0 << 0x20);
          } while (uVar19 < 0x100000000);
          uVar18 = uVar25;
          puVar32 = puVar21;
          uVar19 = uVar25;
          if (0 < lVar35) {
            do {
              uVar19 = uVar19 + 1;
              uVar28 = *(uint *)(lVar30 + (longlong)puVar32) * uVar20;
              lVar17 = ((ulonglong)*puVar32 - (uVar28 & 0xffffffff)) - uVar18;
              *puVar32 = (uint)lVar17;
              uVar18 = (uVar28 >> 0x20) - (lVar17 >> 0x20);
              puVar32 = puVar32 + 1;
            } while ((longlong)uVar19 < lVar35);
          }
          *(int *)((param_3 - (longlong)local_e8) + (longlong)puVar21) = (int)uVar20;
          uVar37 = local_e8[lVar35 + uVar39];
          local_e8[lVar35 + uVar39] = (uint)(uVar37 - uVar18);
          if ((longlong)(uVar37 - uVar18) < 0) {
            *(int *)((param_3 - (longlong)local_e8) + (longlong)puVar21) = (int)uVar20 + -1;
            uVar18 = uVar25;
            puVar32 = puVar21;
            uVar19 = uVar25;
            if (0 < lVar35) {
              do {
                uVar19 = uVar19 + 1;
                lVar17 = uVar18 + *(uint *)((longlong)puVar32 + lVar30) + (ulonglong)*puVar32;
                *puVar32 = (uint)lVar17;
                uVar18 = lVar17 >> 0x20;
                puVar32 = puVar32 + 1;
              } while ((longlong)uVar19 < lVar35);
            }
            local_e8[lVar35 + uVar39] = (int)uVar18 + local_e8[lVar35 + uVar39];
          }
          uVar39 = uVar39 - 1;
          puVar21 = puVar21 + -1;
          lVar30 = lVar30 + 4;
          uVar34 = (int)uVar36 - 1;
          uVar36 = (ulonglong)uVar34;
          uVar18 = local_f0;
          uVar38 = local_108[2];
          uVar37 = local_108[1];
        } while (-1 < (int)uVar34);
      }
      FUN_144bfb550(param_3 + ((longlong)(int)uVar37 - (longlong)(int)uVar38) * 4 + 4,0,
                    (longlong)(int)((uVar38 - uVar37) + -1 + param_5));
      if (param_4 != (undefined4 *)0x0) {
        if (uVar27 == 0) {
          if (0 < (int)uVar38) {
            memcpy(param_4,local_e8,(ulonglong)uVar38 << 2);
          }
        }
        else {
          if ((0 < (int)uVar38) && (0xf < uVar38)) {
            uVar37 = uVar38 & 0x8000000f;
            if ((int)uVar37 < 0) {
              uVar37 = (uVar37 - 1 | 0xfffffff0) + 1;
            }
            puVar21 = param_4 + 8;
            uVar18 = uVar25;
            do {
              puVar1 = (uint *)((longlong)local_108 + -(longlong)param_4 + (longlong)puVar21);
              uVar34 = puVar1[1];
              uVar33 = puVar1[2];
              uVar3 = puVar1[3];
              uVar25 = (ulonglong)((int)uVar25 + 0x10);
              uVar18 = uVar18 + 0x10;
              piVar24 = (int *)((longlong)local_108 + -(longlong)param_4 + 4 + (longlong)puVar21);
              iVar4 = piVar24[1];
              iVar5 = piVar24[2];
              iVar6 = piVar24[3];
              puVar32 = (uint *)((longlong)&local_f8 + -(longlong)param_4 + (longlong)puVar21);
              uVar7 = *puVar32;
              uVar8 = puVar32[1];
              uVar9 = puVar32[2];
              uVar10 = puVar32[3];
              puVar32 = puVar21 + 0x10;
              uVar39 = (ulonglong)uVar27;
              piVar2 = (int *)(&stack0xfffffffffffffecc + -(longlong)param_4 + (longlong)puVar32);
              iVar11 = *piVar2;
              iVar12 = piVar2[1];
              iVar13 = piVar2[2];
              iVar14 = piVar2[3];
              puVar21[-8] = *puVar1 >> uVar39 | *piVar24 << local_108[0];
              puVar21[-7] = uVar34 >> uVar39 | iVar4 << local_108[0];
              puVar21[-6] = uVar33 >> uVar39 | iVar5 << local_108[0];
              puVar21[-5] = uVar3 >> uVar39 | iVar6 << local_108[0];
              piVar24 = (int *)(&stack0xfffffffffffffedc + -(longlong)param_4 + (longlong)puVar32);
              iVar4 = *piVar24;
              iVar5 = piVar24[1];
              iVar6 = piVar24[2];
              iVar15 = piVar24[3];
              puVar1 = (uint *)(&stack0xfffffffffffffed8 + -(longlong)param_4 + (longlong)puVar32);
              uVar34 = *puVar1;
              uVar33 = puVar1[1];
              uVar3 = puVar1[2];
              uVar16 = puVar1[3];
              puVar21[-4] = uVar7 >> uVar39 | iVar11 << local_108[0];
              puVar21[-3] = uVar8 >> uVar39 | iVar12 << local_108[0];
              puVar21[-2] = uVar9 >> uVar39 | iVar13 << local_108[0];
              puVar21[-1] = uVar10 >> uVar39 | iVar14 << local_108[0];
              piVar24 = (int *)(&stack0xfffffffffffffeec + -(longlong)param_4 + (longlong)puVar32);
              iVar11 = *piVar24;
              iVar12 = piVar24[1];
              iVar13 = piVar24[2];
              iVar14 = piVar24[3];
              uVar39 = (ulonglong)uVar27;
              puVar1 = (uint *)(&stack0xfffffffffffffee8 + -(longlong)param_4 + (longlong)puVar32);
              uVar7 = *puVar1;
              uVar8 = puVar1[1];
              uVar9 = puVar1[2];
              uVar10 = puVar1[3];
              *puVar21 = iVar4 << local_108[0] | uVar34 >> uVar39;
              puVar21[1] = iVar5 << local_108[0] | uVar33 >> uVar39;
              puVar21[2] = iVar6 << local_108[0] | uVar3 >> uVar39;
              puVar21[3] = iVar15 << local_108[0] | uVar16 >> uVar39;
              puVar21[4] = iVar11 << local_108[0] | uVar7 >> uVar39;
              puVar21[5] = iVar12 << local_108[0] | uVar8 >> uVar39;
              puVar21[6] = iVar13 << local_108[0] | uVar9 >> uVar39;
              puVar21[7] = iVar14 << local_108[0] | uVar10 >> uVar39;
              puVar21 = puVar32;
            } while ((longlong)uVar18 < (longlong)(int)(uVar38 - uVar37));
          }
          for (lVar30 = (longlong)(int)uVar25; lVar30 < lVar35; lVar30 = lVar30 + 1) {
            param_4[lVar30] =
                 local_e8[lVar30 + 1] << ((byte)local_108[0] & 0x1f) |
                 local_e8[lVar30] >> (bVar22 & 0x1f);
          }
        }
        FUN_144bfb550(param_4 + (int)uVar38,0,(longlong)(int)(param_5 - uVar38));
      }
    }
  }
  return;
}



// FUNCTION 14551ed00 FUN_14551ed00 body=424 status=ok
// SIG undefined FUN_14551ed00(void)

int FUN_14551ed00(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong local_88 [4];
  ulonglong local_68 [4];
  undefined4 local_48 [8];
  undefined4 local_28 [8];
  
  if ((longlong)param_1[3] < 0) {
    local_88[0] = ~*param_1 + 1;
    uVar6 = (ulonglong)(0xfffffffffffffffe < ~*param_1);
    local_88[1] = ~param_1[1] + uVar6;
    uVar6 = (ulonglong)CARRY8(~param_1[1],uVar6);
    local_88[2] = ~param_1[2] + uVar6;
    local_88[3] = ~param_1[3] + (ulonglong)CARRY8(~param_1[2],uVar6);
  }
  else {
    local_88[0] = *param_1;
    local_88[1] = param_1[1];
    local_88[2] = param_1[2];
    local_88[3] = param_1[3];
  }
  if ((longlong)param_2[3] < 0) {
    local_68[0] = ~*param_2 + 1;
    uVar6 = (ulonglong)(0xfffffffffffffffe < ~*param_2);
    local_68[1] = ~param_2[1] + uVar6;
    uVar6 = (ulonglong)CARRY8(~param_2[1],uVar6);
    local_68[2] = ~param_2[2] + uVar6;
    local_68[3] = ~param_2[3] + (ulonglong)CARRY8(~param_2[2],uVar6);
  }
  else {
    local_68[0] = *param_2;
    local_68[1] = param_2[1];
    local_68[2] = param_2[2];
    local_68[3] = param_2[3];
  }
  uVar6 = 0;
  lVar4 = 0;
  do {
    uVar1 = uVar6 >> 1;
    uVar5 = (int)uVar6 + 2;
    uVar6 = (ulonglong)uVar5;
    *(int *)((longlong)local_28 + lVar4) = (int)local_88[uVar1];
    *(int *)((longlong)local_28 + lVar4 + 4) = (int)(local_88[uVar1] >> 0x20);
    *(int *)((longlong)local_48 + lVar4) = (int)local_68[uVar1];
    *(int *)((longlong)local_48 + lVar4 + 4) = (int)(local_68[uVar1] >> 0x20);
    lVar4 = lVar4 + 8;
  } while ((int)uVar5 < 8);
  FUN_14551e6d0(local_28,local_48,local_68,0,8);
  iVar2 = -1;
  if ((longlong)param_1[3] < 0) {
    iVar3 = -1;
  }
  else {
    uVar5 = 0;
    do {
      if (*param_1 != 0) {
        iVar3 = 1;
        goto LAB_14551ee6a;
      }
      uVar5 = uVar5 + 1;
      param_1 = param_1 + 1;
    } while (uVar5 < 4);
    iVar3 = 0;
  }
LAB_14551ee6a:
  if (-1 < (longlong)param_2[3]) {
    uVar5 = 0;
    do {
      if (*param_2 != 0) {
        iVar2 = 1;
        goto LAB_14551ee8d;
      }
      uVar5 = uVar5 + 1;
      param_2 = param_2 + 1;
    } while (uVar5 < 4);
    iVar2 = 0;
  }
LAB_14551ee8d:
  return iVar2 * iVar3 * (int)local_68[0];
}



// FUNCTION 14551eeb0 FUN_14551eeb0 body=4206 status=ok
// SIG undefined FUN_14551eeb0(void)

void FUN_14551eeb0(double *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  undefined4 *param_4)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  undefined1 auVar24 [12];
  undefined1 auVar25 [12];
  undefined1 auVar26 [12];
  undefined1 auVar27 [12];
  undefined1 auVar28 [12];
  undefined1 auVar29 [12];
  undefined1 auVar30 [12];
  undefined1 auVar31 [12];
  undefined1 auVar32 [12];
  undefined1 auVar33 [12];
  undefined1 auVar34 [12];
  undefined1 auVar35 [12];
  undefined1 auVar36 [12];
  undefined1 auVar37 [12];
  undefined1 auVar38 [12];
  undefined1 auVar39 [12];
  undefined1 auVar40 [12];
  undefined1 auVar41 [12];
  undefined1 auVar42 [12];
  undefined1 auVar43 [12];
  undefined1 auVar44 [12];
  undefined1 auVar45 [12];
  undefined1 auVar46 [12];
  undefined1 auVar47 [12];
  undefined1 auVar48 [12];
  undefined1 auVar49 [12];
  undefined1 auVar50 [12];
  undefined1 auVar51 [12];
  undefined1 auVar52 [12];
  undefined1 auVar53 [12];
  undefined1 auVar54 [12];
  undefined1 auVar55 [12];
  ulonglong uVar56;
  uint uVar61;
  uint uVar65;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  uint uVar66;
  uint uVar68;
  undefined1 auVar59 [16];
  uint uVar62;
  uint uVar63;
  uint uVar69;
  double dVar64;
  undefined1 auVar60 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  double dVar79;
  undefined1 auVar80 [16];
  longlong lVar91;
  undefined1 auVar81 [16];
  longlong lVar92;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  double dVar93;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  double dVar94;
  double dVar95;
  undefined1 auVar96 [16];
  double dVar97;
  double dVar98;
  uint uVar103;
  uint uVar104;
  uint uVar106;
  uint uVar107;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  double dVar105;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  uint uVar111;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  double dVar112;
  uint uVar114;
  uint uVar115;
  undefined1 auVar113 [16];
  double dVar116;
  double dVar117;
  undefined1 auVar118 [16];
  longlong lVar120;
  undefined1 auVar119 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  double dVar123;
  uint uVar127;
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  uint uVar129;
  uint uVar130;
  uint uVar133;
  double dVar131;
  double dVar132;
  undefined1 auVar128 [16];
  uint uVar137;
  uint uVar138;
  uint uVar140;
  double dVar139;
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  double dVar141;
  uint uVar148;
  undefined1 auVar142 [16];
  double dVar147;
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  double dVar149;
  undefined1 auVar150 [16];
  double dVar154;
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined8 unaff_XMM15_Qb;
  undefined1 auVar155 [16];
  double dVar158;
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined4 uStack_458;
  uint uStack_454;
  undefined4 uStack_418;
  uint uStack_414;
  double local_400;
  double local_3f0;
  double local_3d0;
  double local_320;
  uint uVar67;
  uint uVar70;
  uint uVar88;
  undefined4 uVar89;
  undefined4 uVar90;
  double dVar146;
  
  auVar1 = *(undefined1 (*) [16])(param_1 + 2);
  dVar149 = auVar1._0_8_;
  auVar77 = param_2[1];
  uVar61 = auVar77._4_4_;
  dVar94 = auVar77._0_8_;
  uVar63 = auVar77._12_4_;
  auVar78 = *param_2;
  dVar112 = auVar78._0_8_;
  uVar3 = auVar78._8_4_;
  uVar5 = auVar78._12_4_;
  auVar57 = param_3[1];
  uVar62 = auVar57._4_4_;
  dVar116 = auVar57._0_8_;
  uVar6 = auVar57._12_4_;
  auVar58 = *param_3;
  uVar2 = auVar58._0_4_;
  dVar123 = auVar58._0_8_;
  uVar4 = auVar58._8_4_;
  uVar7 = auVar58._12_4_;
  auVar71._0_12_ = ZEXT412(0) << 0x20;
  auVar71._12_4_ = *(uint *)((longlong)param_1 + 0xc) & 0x7ff00000;
  uVar88 = auVar1._4_4_ & 0x7ff00000;
  auVar39._4_8_ = 0;
  auVar39._0_4_ = uVar88;
  auVar80._0_12_ = auVar39 << 0x20;
  auVar80._12_4_ = auVar1._12_4_ & 0x7ff00000;
  lVar91 = auVar80._8_8_ + -0x340000000000000;
  uVar148 = (uint)((ulonglong)(auVar71._8_8_ + -0x340000000000000) >> 0x20);
  uVar88 = (uint)(((ulonglong)uVar88 << 0x20) + -0x340000000000000 >> 0x20);
  uVar103 = (uint)((ulonglong)lVar91 >> 0x20);
  uVar65 = (int)uVar103 >> 0x1f;
  uVar88 = ~((int)uVar88 >> 0x1f) & uVar88;
  dVar141 = (double)((ulonglong)uVar88 << 0x20);
  lVar91 = CONCAT44(~uVar65 & (uint)lVar91,uVar88);
  local_320 = (double)(lVar91 << 0x20);
  auVar48._8_4_ = ~uVar65 & uVar103;
  auVar48._0_8_ = lVar91;
  uVar111 = auVar78._4_4_;
  auVar40._4_8_ = 0;
  auVar40._0_4_ = uVar111 & 0x7ff00000;
  auVar72._0_12_ = auVar40 << 0x20;
  auVar72._12_4_ = uVar5 & 0x7ff00000;
  lVar91 = auVar72._8_8_ + -0x340000000000000;
  uVar89 = auVar77._8_4_;
  auVar41._4_8_ = 0;
  auVar41._0_4_ = uVar61 & 0x7ff00000;
  auVar81._0_12_ = auVar41 << 0x20;
  auVar81._12_4_ = uVar63 & 0x7ff00000;
  lVar92 = auVar81._8_8_ + -0x340000000000000;
  uVar129 = (uint)(((ulonglong)(uVar111 & 0x7ff00000) << 0x20) + -0x340000000000000 >> 0x20);
  uVar133 = (uint)((ulonglong)lVar91 >> 0x20);
  uVar106 = (int)uVar133 >> 0x1f;
  uVar103 = (uint)(((ulonglong)(uVar61 & 0x7ff00000) << 0x20) + -0x340000000000000 >> 0x20);
  uVar107 = (uint)((ulonglong)lVar92 >> 0x20);
  uVar65 = (int)uVar107 >> 0x1f;
  uVar129 = ~((int)uVar129 >> 0x1f) & uVar129;
  uVar130 = ~uVar106 & (uint)lVar91;
  local_3f0 = (double)(CONCAT44(uVar130,uVar129) << 0x20);
  uVar133 = ~uVar106 & uVar133;
  auVar49._8_4_ = uVar133;
  auVar49._0_8_ = CONCAT44(uVar130,uVar129);
  uVar103 = ~((int)uVar103 >> 0x1f) & uVar103;
  uVar104 = ~uVar65 & (uint)lVar92;
  auVar50._4_4_ = uVar104;
  auVar50._0_4_ = uVar103;
  uVar107 = ~uVar65 & uVar107;
  auVar50._8_4_ = uVar107;
  uVar127 = auVar58._4_4_;
  auVar42._4_8_ = 0;
  auVar42._0_4_ = uVar127 & 0x7ff00000;
  auVar73._0_12_ = auVar42 << 0x20;
  auVar73._12_4_ = uVar7 & 0x7ff00000;
  lVar91 = auVar73._8_8_ + -0x340000000000000;
  uVar90 = auVar57._8_4_;
  auVar43._4_8_ = 0;
  auVar43._0_4_ = uVar62 & 0x7ff00000;
  auVar82._0_12_ = auVar43 << 0x20;
  auVar82._12_4_ = uVar6 & 0x7ff00000;
  lVar92 = auVar82._8_8_ + -0x340000000000000;
  uVar137 = (uint)(((ulonglong)(uVar127 & 0x7ff00000) << 0x20) + -0x340000000000000 >> 0x20);
  uVar140 = (uint)((ulonglong)lVar91 >> 0x20);
  uVar114 = (int)uVar140 >> 0x1f;
  uVar65 = (uint)(((ulonglong)(uVar62 & 0x7ff00000) << 0x20) + -0x340000000000000 >> 0x20);
  uVar115 = (uint)((ulonglong)lVar92 >> 0x20);
  uVar106 = (int)uVar115 >> 0x1f;
  uVar137 = ~((int)uVar137 >> 0x1f) & uVar137;
  uVar138 = ~uVar114 & (uint)lVar91;
  local_400 = (double)(CONCAT44(uVar138,uVar137) << 0x20);
  uVar140 = ~uVar114 & uVar140;
  auVar51._8_4_ = uVar140;
  auVar51._0_8_ = CONCAT44(uVar138,uVar137);
  auVar8._4_8_ = lVar91;
  auVar8._0_4_ = auVar1._4_4_;
  auVar74._0_8_ = auVar8._0_8_ << 0x20;
  auVar74._8_4_ = auVar1._8_4_;
  auVar74._12_4_ = auVar1._12_4_;
  uVar65 = ~((int)uVar65 >> 0x1f) & uVar65;
  uVar114 = ~uVar106 & (uint)lVar92;
  lVar91 = CONCAT44(uVar114,uVar65);
  uVar115 = ~uVar106 & uVar115;
  auVar52._8_4_ = uVar115;
  auVar52._0_8_ = lVar91;
  auVar9._4_8_ = dVar141;
  auVar9._0_4_ = uVar61;
  auVar57._0_8_ = auVar9._0_8_ << 0x20;
  auVar57._8_4_ = uVar89;
  auVar57._12_4_ = uVar63;
  dVar64 = auVar57._8_8_;
  auVar10._4_8_ = unaff_XMM15_Qb;
  auVar10._0_4_ = uVar63;
  auVar155._0_8_ = auVar10._0_8_ << 0x20;
  auVar155._8_4_ = uVar3;
  auVar155._12_4_ = uVar5;
  auVar11._4_8_ = auVar77._8_8_;
  auVar11._0_4_ = uVar111;
  auVar96._0_8_ = auVar11._0_8_ << 0x20;
  auVar96._8_4_ = auVar78._0_4_;
  auVar96._12_4_ = uVar111;
  dVar131 = auVar49._4_8_;
  auVar12._4_8_ = dVar94;
  auVar12._0_4_ = uVar103;
  auVar75._0_8_ = auVar12._0_8_ << 0x20;
  auVar75._8_4_ = uVar104;
  auVar75._12_4_ = uVar107;
  auVar13._4_8_ = auVar78._8_8_;
  auVar13._0_4_ = uVar133;
  auVar108._0_8_ = auVar13._0_8_ << 0x20;
  auVar108._8_4_ = uVar130;
  auVar108._12_4_ = uVar133;
  dVar147 = auVar58._8_8_;
  auVar14._4_8_ = auVar50._4_8_;
  auVar14._0_4_ = uVar129;
  auVar76._0_8_ = auVar14._0_8_ << 0x20;
  auVar76._8_4_ = 0;
  auVar76._12_4_ = uVar129;
  auVar15._4_8_ = (ulonglong)uVar129 << 0x20;
  auVar15._0_4_ = uVar62;
  auVar58._0_8_ = auVar15._0_8_ << 0x20;
  auVar58._8_4_ = uVar90;
  auVar58._12_4_ = uVar6;
  dVar117 = auVar58._8_8_;
  auVar16._4_8_ = dVar147;
  auVar16._0_4_ = uVar6;
  auVar124._0_8_ = auVar16._0_8_ << 0x20;
  auVar124._8_4_ = uVar4;
  auVar124._12_4_ = uVar7;
  auVar17._4_8_ = (ulonglong)uVar103 << 0x20;
  auVar17._0_4_ = uVar127;
  auVar83._0_8_ = auVar17._0_8_ << 0x20;
  auVar83._8_4_ = uVar2;
  auVar83._12_4_ = uVar127;
  dVar139 = auVar51._4_8_;
  auVar18._4_8_ = dVar116;
  auVar18._0_4_ = uVar65;
  auVar99._0_8_ = auVar18._0_8_ << 0x20;
  auVar99._8_4_ = uVar114;
  auVar99._12_4_ = uVar115;
  dVar98 = auVar52._4_8_;
  auVar19._4_8_ = auVar1._8_8_;
  auVar19._0_4_ = uVar140;
  auVar150._0_8_ = auVar19._0_8_ << 0x20;
  auVar150._8_4_ = uVar138;
  auVar150._12_4_ = uVar140;
  auVar20._4_8_ = dVar139;
  auVar20._0_4_ = uVar103;
  auVar134._0_8_ = auVar20._0_8_ << 0x20;
  auVar134._8_4_ = 0;
  auVar134._12_4_ = uVar129;
  dVar95 = auVar134._8_8_;
  dVar146 = auVar48._4_8_;
  auVar21._4_8_ = dVar146;
  auVar21._0_4_ = uVar65;
  auVar142._0_8_ = auVar21._0_8_ << 0x20;
  auVar142._8_4_ = 0;
  auVar142._12_4_ = uVar137;
  auVar22._4_8_ = dVar98;
  auVar22._0_4_ = uVar61;
  auVar113._0_8_ = auVar22._0_8_ << 0x20;
  auVar113._8_4_ = auVar78._0_4_;
  auVar113._12_4_ = uVar111;
  dVar97 = auVar124._8_8_;
  auVar109._8_4_ = uVar3;
  auVar109._0_8_ = auVar77._8_8_;
  auVar109._12_4_ = uVar5;
  auVar100._8_4_ = uVar2;
  auVar100._0_8_ = dVar97;
  auVar100._12_4_ = uVar127;
  dVar105 = auVar100._8_8_ * auVar113._8_8_;
  uVar106 = (uint)((ulonglong)(dVar97 * dVar64) >> 0x20) & 0x7ff00000;
  auVar44._4_8_ = 0;
  auVar44._0_4_ = uVar106;
  auVar118._0_12_ = auVar44 << 0x20;
  auVar118._12_4_ = (uint)((ulonglong)dVar105 >> 0x20) & 0x7ff00000;
  lVar120 = auVar118._8_8_ + -0x340000000000000;
  uVar106 = (uint)(((ulonglong)uVar106 << 0x20) + -0x340000000000000 >> 0x20);
  uVar67 = (uint)((ulonglong)lVar120 >> 0x20);
  uVar66 = (int)uVar67 >> 0x1f;
  auVar84._8_4_ = uVar2;
  auVar84._0_8_ = dVar117;
  auVar84._12_4_ = uVar127;
  dVar79 = dVar117 * auVar155._8_8_;
  dVar93 = auVar84._8_8_ * auVar96._8_8_;
  uVar114 = (uint)((ulonglong)dVar79 >> 0x20) & 0x7ff00000;
  auVar78._8_4_ = SUB84(dVar93,0);
  uVar70 = (uint)((ulonglong)dVar93 >> 0x20);
  auVar45._4_8_ = 0;
  auVar45._0_4_ = uVar114;
  auVar77._0_12_ = auVar45 << 0x20;
  auVar77._12_4_ = uVar70 & 0x7ff00000;
  lVar92 = auVar77._8_8_ + -0x340000000000000;
  dVar132 = dVar116 * dVar64;
  uVar114 = (uint)(((ulonglong)uVar114 << 0x20) + -0x340000000000000 >> 0x20);
  uVar69 = (uint)((ulonglong)lVar92 >> 0x20);
  uVar68 = (int)uVar69 >> 0x1f;
  uVar114 = ~((int)uVar114 >> 0x1f) & uVar114;
  auVar53._4_4_ = ~uVar68 & (uint)lVar92;
  auVar53._0_4_ = uVar114;
  auVar53._8_4_ = ~uVar68 & uVar69;
  auVar78._0_8_ = -dVar79;
  auVar78._12_4_ = uVar70 ^ 0x80000000;
  dVar93 = auVar78._0_8_ + dVar97 * dVar64;
  auVar59._0_8_ = -(dVar147 * dVar94);
  auVar59._8_4_ = SUB84(dVar132,0);
  auVar59._12_4_ = (undefined4)((ulonglong)-dVar132 >> 0x20);
  uVar68 = (uint)((ulonglong)dVar93 >> 0x20) & 0x7ff00000;
  auVar46._4_8_ = 0;
  auVar46._0_4_ = uVar68;
  auVar85._0_12_ = auVar46 << 0x20;
  auVar85._12_4_ = (uint)((ulonglong)(auVar78._8_8_ + dVar105) >> 0x20) & 0x7ff00000;
  dVar158 = ABS(auVar96._8_8_);
  lVar92 = auVar85._8_8_ + -0x340000000000000;
  uVar68 = (uint)(((ulonglong)uVar68 << 0x20) + -0x340000000000000 >> 0x20);
  uVar70 = (uint)((ulonglong)lVar92 >> 0x20);
  uVar69 = (int)uVar70 >> 0x1f;
  uVar106 = ~((int)uVar106 >> 0x1f) & uVar106;
  auVar54._4_4_ = ~uVar66 & (uint)lVar120;
  auVar54._0_4_ = uVar106;
  auVar54._8_4_ = ~uVar66 & uVar67;
  dVar154 = (double)((ulonglong)uVar137 << 0x20) * dVar95;
  dVar105 = ABS(auVar83._8_8_) * dVar95;
  uVar68 = ~((int)uVar68 >> 0x1f) & uVar68;
  auVar55._4_4_ = ~uVar69 & (uint)lVar92;
  auVar55._0_4_ = uVar68;
  auVar55._8_4_ = ~uVar69 & uVar70;
  dVar79 = auVar76._8_8_ *
           (double)CONCAT44((uint)((ulonglong)((longlong)dVar123 << 1) >> 0x21),uVar2);
  auVar23._4_8_ = dVar154;
  auVar23._0_4_ = uVar111;
  auVar151._0_8_ = auVar23._0_8_ << 0x20;
  auVar151._8_4_ = uVar3;
  auVar151._12_4_ = uVar5;
  auVar24._4_8_ = dVar158;
  auVar24._0_4_ = uVar107;
  auVar156._0_8_ = auVar24._0_8_ << 0x20;
  auVar156._8_4_ = uVar104;
  auVar156._12_4_ = uVar107;
  auVar25._4_8_ = dVar79;
  auVar25._0_4_ = uVar129;
  auVar86._0_8_ = auVar25._0_8_ << 0x20;
  auVar86._8_4_ = uVar130;
  auVar86._12_4_ = uVar133;
  dVar97 = ABS(dVar64) * auVar150._8_8_ + auVar150._8_8_ * auVar75._8_8_ +
           ABS(dVar97) * auVar75._8_8_ + (double)((ulonglong)uVar106 << 0x20) +
           (double)((ulonglong)uVar68 << 0x20) +
           auVar108._8_8_ * auVar99._8_8_ + auVar99._8_8_ * ABS(auVar155._8_8_) +
           auVar108._8_8_ *
           (double)CONCAT44((uint)((ulonglong)((longlong)dVar117 << 1) >> 0x21),uVar90) +
           (double)((ulonglong)uVar114 << 0x20);
  auVar26._4_8_ =
       ABS(auVar113._8_8_) * (double)((ulonglong)uVar137 << 0x20) + dVar154 + dVar105 +
       auVar54._4_8_ + auVar55._4_8_ +
       auVar76._8_8_ * auVar142._8_8_ + auVar142._8_8_ * dVar158 + dVar79 + auVar53._4_8_;
  auVar26._0_4_ = uVar6;
  auVar101._0_8_ = auVar26._0_8_ << 0x20;
  auVar101._8_4_ = uVar90;
  auVar101._12_4_ = uVar6;
  auVar47._4_8_ = (ulonglong)(~((int)uVar148 >> 0x1f) & uVar148) << 0x20;
  auVar47._0_4_ = uVar88;
  local_3d0 = (double)(auVar47._0_8_ << 0x20);
  auVar27._4_8_ = dVar95;
  auVar27._0_4_ = uVar111;
  auVar135._0_8_ = auVar27._0_8_ << 0x20;
  auVar135._8_4_ = uVar89;
  auVar135._12_4_ = uVar63;
  auVar28._4_8_ = dVar94 * dVar117;
  auVar28._0_4_ = uVar61;
  auVar110._0_8_ = auVar28._0_8_ << 0x20;
  auVar110._8_4_ = uVar3;
  auVar110._12_4_ = uVar5;
  auVar29._4_8_ = lVar120;
  auVar29._0_4_ = uVar127;
  auVar119._0_8_ = auVar29._0_8_ << 0x20;
  auVar119._8_4_ = uVar90;
  auVar119._12_4_ = uVar6;
  dVar64 = auVar119._8_8_;
  auVar30._4_8_ = dVar132;
  auVar30._0_4_ = uVar62;
  auVar128._0_8_ = auVar30._0_8_ << 0x20;
  auVar128._8_4_ = uVar4;
  auVar128._12_4_ = uVar7;
  auVar31._4_8_ = dVar105;
  auVar31._0_4_ = uVar65;
  auVar125._0_8_ = auVar31._0_8_ << 0x20;
  auVar125._8_4_ = uVar138;
  auVar125._12_4_ = uVar140;
  auVar87._8_4_ = uVar4;
  auVar87._0_8_ = dVar64;
  auVar87._12_4_ = uVar7;
  auVar102._8_4_ = uVar89;
  auVar102._0_8_ = dVar112;
  auVar102._12_4_ = uVar63;
  uVar61 = (uint)(((ulonglong)((uint)((ulonglong)(dVar64 * dVar112) >> 0x20) & 0x7ff00000) << 0x20)
                  + -0x340000000000000 >> 0x20);
  dVar79 = dVar123 * auVar135._8_8_;
  dVar147 = dVar147 * auVar151._8_8_;
  uStack_458 = SUB84(dVar116 * dVar112,0);
  uStack_454 = (uint)((ulonglong)(dVar116 * dVar112) >> 0x20);
  auVar143._0_8_ = -dVar79;
  auVar143._8_4_ = SUB84(dVar147,0);
  auVar143._12_4_ = (uint)((ulonglong)dVar147 >> 0x20) ^ 0x80000000;
  auVar152._0_8_ = -(auVar101._8_8_ * dVar94);
  auVar152._8_4_ = uStack_458;
  auVar152._12_4_ = uStack_454 ^ 0x80000000;
  uVar62 = (uint)(((ulonglong)((uint)((ulonglong)dVar79 >> 0x20) & 0x7ff00000) << 0x20) +
                  -0x340000000000000 >> 0x20);
  dVar154 = auVar143._0_8_ + dVar64 * dVar112;
  uVar63 = (uint)(((ulonglong)((uint)((ulonglong)dVar154 >> 0x20) & 0x7ff00000) << 0x20) +
                  -0x340000000000000 >> 0x20);
  dVar98 = ABS(dVar112) * dVar98 + dVar98 * (double)((ulonglong)uVar129 << 0x20) +
           ABS(dVar64) * (double)((ulonglong)uVar129 << 0x20) +
           (double)((ulonglong)(~((int)uVar61 >> 0x1f) & uVar61) << 0x20) +
           (double)((ulonglong)(~((int)uVar63 >> 0x1f) & uVar63) << 0x20) +
           (double)((ulonglong)uVar137 << 0x20) * auVar156._8_8_ +
           ABS(auVar135._8_8_) * (double)((ulonglong)uVar137 << 0x20) +
           auVar156._8_8_ * ABS(dVar123) +
           (double)((ulonglong)(~((int)uVar62 >> 0x1f) & uVar62) << 0x20);
  auVar32._4_8_ = ABS(auVar151._8_8_) * auVar125._8_8_;
  auVar32._0_4_ = uVar107;
  auVar136._0_8_ = auVar32._0_8_ << 0x20;
  auVar136._8_4_ = 0;
  auVar136._12_4_ = uVar103;
  auVar77 = *param_2;
  auVar33._4_8_ = auVar86._8_8_ * ABS(auVar128._8_8_);
  auVar33._0_4_ = auVar77._4_4_;
  auVar157._0_8_ = auVar33._0_8_ << 0x20;
  auVar157._8_4_ = auVar77._8_4_;
  auVar157._12_4_ = auVar77._12_4_;
  auVar78 = *param_3;
  dVar95 = auVar78._0_8_;
  auVar34._4_8_ = auVar143._8_8_ + auVar87._8_8_ * auVar110._8_8_;
  auVar34._0_4_ = uVar115;
  auVar144._0_8_ = auVar34._0_8_ << 0x20;
  auVar144._8_4_ = 0;
  auVar144._12_4_ = uVar65;
  auVar35._4_8_ = auVar125._8_8_;
  auVar35._0_4_ = auVar78._4_4_;
  auVar126._0_8_ = auVar35._0_8_ << 0x20;
  auVar126._8_4_ = auVar78._8_4_;
  auVar126._12_4_ = auVar78._12_4_;
  dVar105 = auVar126._8_8_ * auVar77._0_8_;
  uVar61 = (uint)(((ulonglong)((uint)((ulonglong)dVar105 >> 0x20) & 0x7ff00000) << 0x20) +
                  -0x340000000000000 >> 0x20);
  dVar64 = SUB168(param_3[1],8) * *(double *)*param_2;
  dVar79 = dVar95 * auVar157._8_8_;
  dVar105 = -dVar79 + dVar105;
  uVar62 = (uint)(((ulonglong)((uint)((ulonglong)dVar79 >> 0x20) & 0x7ff00000) << 0x20) +
                  -0x340000000000000 >> 0x20);
  uStack_418 = SUB84(dVar64,0);
  uStack_414 = (uint)((ulonglong)dVar64 >> 0x20);
  auVar60._0_8_ = -(*(double *)(*param_3 + 8) * SUB168(param_2[1],8));
  auVar60._8_4_ = uStack_418;
  auVar60._12_4_ = uStack_414 ^ 0x80000000;
  uVar63 = (uint)(((ulonglong)((uint)((ulonglong)dVar105 >> 0x20) & 0x7ff00000) << 0x20) +
                  -0x340000000000000 >> 0x20);
  auVar78 = *param_3;
  dVar158 = auVar78._0_8_;
  auVar36._4_8_ = (double)(lVar91 << 0x20) * auVar136._8_8_;
  auVar36._0_4_ = auVar78._4_4_;
  auVar121._0_8_ = auVar36._0_8_ << 0x20;
  auVar121._8_4_ = auVar78._8_4_;
  auVar121._12_4_ = auVar78._12_4_;
  auVar57 = *param_2;
  dVar112 = auVar57._0_8_;
  dVar147 = dVar139 * ABS(auVar77._0_8_) + dVar139 * local_3f0 + local_3f0 * ABS(auVar126._8_8_) +
            (double)((ulonglong)(~((int)uVar61 >> 0x1f) & uVar61) << 0x20) +
            (double)((ulonglong)(~((int)uVar63 >> 0x1f) & uVar63) << 0x20) +
            local_400 * dVar131 + ABS(auVar157._8_8_) * local_400 + ABS(dVar95) * dVar131 +
            (double)((ulonglong)(~((int)uVar62 >> 0x1f) & uVar62) << 0x20);
  auVar37._4_8_ = auVar144._8_8_;
  auVar37._0_4_ = auVar57._4_4_;
  auVar145._0_8_ = auVar37._0_8_ << 0x20;
  auVar145._8_4_ = auVar57._8_4_;
  auVar145._12_4_ = auVar57._12_4_;
  dVar79 = *(double *)param_3[1] * dVar112;
  dVar132 = auVar121._8_8_ * dVar112;
  dVar64 = dVar158 * auVar145._8_8_;
  auVar153._0_8_ = -(auVar78._8_8_ * *(double *)param_2[1]);
  auVar153._8_4_ = SUB84(dVar79,0);
  auVar153._12_4_ = (uint)((ulonglong)dVar79 >> 0x20) ^ 0x80000000;
  uVar61 = (uint)(((ulonglong)((uint)((ulonglong)dVar132 >> 0x20) & 0x7ff00000) << 0x20) +
                  -0x340000000000000 >> 0x20);
  uVar62 = (uint)(((ulonglong)((uint)((ulonglong)dVar64 >> 0x20) & 0x7ff00000) << 0x20) +
                  -0x340000000000000 >> 0x20);
  dVar132 = -dVar64 + dVar132;
  dVar79 = 0.0;
  uVar63 = (uint)(((ulonglong)((uint)((ulonglong)dVar132 >> 0x20) & 0x7ff00000) << 0x20) +
                  -0x340000000000000 >> 0x20);
  auVar38._4_8_ = ABS(*(double *)(param_3[1] + 8)) * auVar50._4_8_;
  auVar38._0_4_ = *(undefined4 *)((longlong)param_1 + 4);
  auVar122._0_8_ = auVar38._0_8_ << 0x20;
  auVar122._8_4_ = *(undefined4 *)(param_1 + 1);
  auVar122._12_4_ = *(uint *)((longlong)param_1 + 0xc);
  dVar64 = (double)CONCAT44((uint)((ulonglong)((longlong)dVar112 << 1) >> 0x21),auVar57._0_4_) *
           dVar139 + dVar139 * local_3f0 + ABS(auVar121._8_8_) * local_3f0 +
           (double)((ulonglong)(~((int)uVar61 >> 0x1f) & uVar61) << 0x20) +
           (double)((ulonglong)(~((int)uVar63 >> 0x1f) & uVar63) << 0x20) +
           dVar131 * local_400 + ABS(auVar145._8_8_) * local_400 + ABS(dVar158) * dVar131 +
           (double)((ulonglong)(~((int)uVar62 >> 0x1f) & uVar62) << 0x20);
  uVar61 = (uint)(((ulonglong)((uint)((ulonglong)(dVar149 * dVar93) >> 0x20) & 0x7ff00000) << 0x20)
                  + -0x340000000000000 >> 0x20);
  dVar112 = auVar74._8_8_ * (auVar59._0_8_ + auVar109._8_8_ * dVar116) +
            auVar122._8_8_ * (auVar59._8_8_ + dVar94 * dVar117) + dVar149 * dVar93;
  dVar117 = (double)(((ulonglong)dVar112 & 0x7ff0000000000000) + 0xfcc0000000000000);
  if (((ulonglong)dVar112 & 0x7ff0000000000000) < 0x340000000000000) {
    dVar117 = dVar79;
  }
  dVar117 = dVar141 * dVar97 + dVar97 * ABS(dVar149) + dVar141 * ABS(dVar93) +
            (double)((ulonglong)(~((int)uVar61 >> 0x1f) & uVar61) << 0x20) + dVar117;
  uVar61 = (uint)(((ulonglong)((uint)((ulonglong)(dVar154 * dVar149) >> 0x20) & 0x7ff00000) << 0x20)
                  + -0x340000000000000 >> 0x20);
  dVar97 = *param_1 * (auVar152._0_8_ + auVar102._8_8_ * dVar116) +
           auVar1._8_8_ * (auVar152._8_8_ + dVar94 * dVar123) + dVar154 * dVar149;
  dVar94 = dVar105 * param_1[3];
  dVar93 = (double)(((ulonglong)dVar97 & 0x7ff0000000000000) + 0xfcc0000000000000);
  if (((ulonglong)dVar97 & 0x7ff0000000000000) < 0x340000000000000) {
    dVar93 = dVar79;
  }
  dVar93 = ABS(dVar149) * dVar98 + local_3d0 * dVar98 + ABS(dVar154) * local_3d0 +
           (double)((ulonglong)(~((int)uVar61 >> 0x1f) & uVar61) << 0x20) + dVar93;
  uVar61 = (uint)(((ulonglong)((uint)((ulonglong)dVar94 >> 0x20) & 0x7ff00000) << 0x20) +
                  -0x340000000000000 >> 0x20);
  dVar94 = (auVar60._0_8_ + auVar77._8_8_ * SUB168(param_3[1],8)) * *param_1 +
           (auVar60._8_8_ + SUB168(param_2[1],8) * dVar95) * param_1[1] + dVar94;
  dVar95 = dVar132 * param_1[2];
  dVar98 = (double)(((ulonglong)dVar94 & 0x7ff0000000000000) + 0xfcc0000000000000);
  if (((ulonglong)dVar94 & 0x7ff0000000000000) < 0x340000000000000) {
    dVar98 = dVar79;
  }
  dVar98 = ABS(param_1[3]) * dVar147 + dVar146 * dVar147 + ABS(dVar105) * dVar146 +
           (double)((ulonglong)(~((int)uVar61 >> 0x1f) & uVar61) << 0x20) + dVar98;
  uVar61 = (uint)(((ulonglong)((uint)((ulonglong)dVar95 >> 0x20) & 0x7ff00000) << 0x20) +
                  -0x340000000000000 >> 0x20);
  dVar95 = *param_1 * (auVar153._0_8_ + auVar57._8_8_ * *(double *)param_3[1]) +
           param_1[1] * (auVar153._8_8_ + *(double *)param_2[1] * dVar158) + dVar95;
  uVar56 = (ulonglong)dVar95 & 0x7ff0000000000000;
  dVar105 = (double)(uVar56 + 0xfcc0000000000000);
  if (uVar56 < 0x340000000000000) {
    dVar105 = dVar79;
  }
  dVar105 = local_320 * dVar64 + dVar64 * ABS(param_1[2]) + local_320 * ABS(dVar132) +
            (double)((ulonglong)(~((int)uVar61 >> 0x1f) & uVar61) << 0x20) + dVar105;
  *param_4 = SUB84(dVar112,0);
  param_4[1] = (uint)((ulonglong)dVar112 >> 0x20) ^ 0x80000000;
  param_4[2] = SUB84(dVar97,0);
  param_4[3] = (uint)((ulonglong)dVar97 >> 0x20) ^ 0x80000000;
  param_4[4] = SUB84(dVar94,0);
  param_4[5] = (uint)((ulonglong)dVar94 >> 0x20) ^ 0x80000000;
  *(double *)(param_4 + 6) = dVar95;
  *(double *)(param_4 + 8) = dVar117 + dVar117;
  *(double *)(param_4 + 10) = dVar93 + dVar93;
  *(double *)(param_4 + 0xc) = dVar98 + dVar98;
  *(double *)(param_4 + 0xe) = dVar105 + dVar105;
  return;
}



// FUNCTION 14551ff20 FUN_14551ff20 body=1512 status=ok
// SIG undefined FUN_14551ff20(void)

void FUN_14551ff20(undefined1 (*param_1) [16],longlong param_2,longlong param_3,longlong param_4,
                  undefined8 *param_5)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar14;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  ulonglong local_208;
  longlong local_200;
  ulonglong local_1f8;
  longlong local_1f0;
  ulonglong local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  undefined1 local_118 [32];
  undefined1 local_f8 [192];
  undefined1 auVar13 [16];
  
  auVar1 = *param_1;
  iVar11 = auVar1._4_4_ >> 0x1f;
  auVar13._0_8_ = CONCAT44(iVar11,iVar11);
  auVar13._8_4_ = auVar1._12_4_ >> 0x1f;
  auVar13._12_4_ = auVar13._8_4_;
  uVar12 = auVar13._0_8_ << 0x32 | auVar1._0_8_ >> 0xe;
  uVar14 = auVar13._8_8_ << 0x32 | auVar1._8_8_ >> 0xe;
  iVar11 = SUB164(param_1[1],4) >> 0x1f;
  uVar4 = CONCAT44(iVar11,iVar11) << 0x32 | SUB168(param_1[1],0) >> 0xe;
  auVar1 = param_1[4];
  iVar11 = auVar1._4_4_ >> 0x1f;
  auVar6._0_8_ = CONCAT44(iVar11,iVar11);
  auVar6._8_4_ = auVar1._12_4_ >> 0x1f;
  auVar6._12_4_ = auVar6._8_4_;
  uVar5 = auVar6._0_8_ << 0x32 | auVar1._0_8_ >> 0xe;
  uVar7 = auVar6._8_8_ << 0x32 | auVar1._8_8_ >> 0xe;
  iVar11 = SUB164(param_1[5],4) >> 0x1f;
  uVar3 = CONCAT44(iVar11,iVar11) << 0x32 | SUB168(param_1[5],0) >> 0xe;
  auVar1 = param_1[8];
  iVar11 = auVar1._4_4_ >> 0x1f;
  auVar9._0_8_ = CONCAT44(iVar11,iVar11);
  auVar9._8_4_ = auVar1._12_4_ >> 0x1f;
  auVar9._12_4_ = auVar9._8_4_;
  uVar8 = auVar9._0_8_ << 0x32 | auVar1._0_8_ >> 0xe;
  uVar10 = auVar9._8_8_ << 0x32 | auVar1._8_8_ >> 0xe;
  iVar11 = SUB164(param_1[9],4) >> 0x1f;
  uVar2 = CONCAT44(iVar11,iVar11) << 0x32 | SUB168(param_1[9],0) >> 0xe;
  local_158 = uVar3 * uVar14 - uVar7 * uVar4;
  local_150 = (SUB168(SEXT816((longlong)uVar3) * SEXT816((longlong)uVar14),8) -
              SUB168(SEXT816((longlong)uVar7) * SEXT816((longlong)uVar4),8)) -
              (ulonglong)(uVar3 * uVar14 < uVar7 * uVar4);
  local_148 = uVar5 * uVar4 - uVar3 * uVar12;
  local_140 = (SUB168(SEXT816((longlong)uVar5) * SEXT816((longlong)uVar4),8) -
              SUB168(SEXT816((longlong)uVar3) * SEXT816((longlong)uVar12),8)) -
              (ulonglong)(uVar5 * uVar4 < uVar3 * uVar12);
  local_138 = uVar7 * uVar12 - uVar5 * uVar14;
  local_130 = (SUB168(SEXT816((longlong)uVar7) * SEXT816((longlong)uVar12),8) -
              SUB168(SEXT816((longlong)uVar5) * SEXT816((longlong)uVar14),8)) -
              (ulonglong)(uVar7 * uVar12 < uVar5 * uVar14);
  local_1d8 = uVar2 * uVar7 - uVar10 * uVar3;
  local_1d0 = (SUB168(SEXT816((longlong)uVar2) * SEXT816((longlong)uVar7),8) -
              SUB168(SEXT816((longlong)uVar10) * SEXT816((longlong)uVar3),8)) -
              (ulonglong)(uVar2 * uVar7 < uVar10 * uVar3);
  local_1c8 = uVar8 * uVar3 - uVar2 * uVar5;
  local_1c0 = (SUB168(SEXT816((longlong)uVar8) * SEXT816((longlong)uVar3),8) -
              SUB168(SEXT816((longlong)uVar2) * SEXT816((longlong)uVar5),8)) -
              (ulonglong)(uVar8 * uVar3 < uVar2 * uVar5);
  local_1b8 = uVar10 * uVar5 - uVar8 * uVar7;
  local_1b0 = (SUB168(SEXT816((longlong)uVar10) * SEXT816((longlong)uVar5),8) -
              SUB168(SEXT816((longlong)uVar8) * SEXT816((longlong)uVar7),8)) -
              (ulonglong)(uVar10 * uVar5 < uVar8 * uVar7);
  local_198 = uVar4 * uVar10 - uVar14 * uVar2;
  local_190 = (SUB168(SEXT816((longlong)uVar4) * SEXT816((longlong)uVar10),8) -
              SUB168(SEXT816((longlong)uVar14) * SEXT816((longlong)uVar2),8)) -
              (ulonglong)(uVar4 * uVar10 < uVar14 * uVar2);
  local_188 = uVar12 * uVar2 - uVar4 * uVar8;
  local_180 = (SUB168(SEXT816((longlong)uVar12) * SEXT816((longlong)uVar2),8) -
              SUB168(SEXT816((longlong)uVar4) * SEXT816((longlong)uVar8),8)) -
              (ulonglong)(uVar12 * uVar2 < uVar4 * uVar8);
  local_178 = uVar14 * uVar8 - uVar12 * uVar10;
  local_170 = (SUB168(SEXT816((longlong)uVar14) * SEXT816((longlong)uVar8),8) -
              SUB168(SEXT816((longlong)uVar12) * SEXT816((longlong)uVar10),8)) -
              (ulonglong)(uVar14 * uVar8 < uVar12 * uVar10);
  uVar2 = *(ulonglong *)(param_1[1] + 8) >> 0xb;
  local_208 = *(ulonglong *)(param_1[1] + 8) & 0x7ff | uVar2 << 0xb;
  local_200 = (longlong)(*(longlong *)param_1[1] << 0x35 | uVar2) >> 0x35;
  uVar2 = *(ulonglong *)(param_1[5] + 8) >> 0xb;
  local_1f8 = *(ulonglong *)(param_1[5] + 8) & 0x7ff | uVar2 << 0xb;
  local_1f0 = (longlong)(*(longlong *)param_1[5] << 0x35 | uVar2) >> 0x35;
  uVar2 = *(ulonglong *)(param_1[9] + 8) >> 0xb;
  local_1e8 = *(ulonglong *)(param_1[9] + 8) & 0x7ff | uVar2 << 0xb;
  local_1e0 = (longlong)(*(longlong *)param_1[9] << 0x35 | uVar2) >> 0x35;
  if (param_2 != 0) {
    FUN_14551e190(&local_228,&local_208,&local_1d8);
    FUN_14551e3c0(&local_228,&local_1f8,&local_198);
    FUN_14551e3c0(&local_228,&local_1e8,&local_158);
    FUN_14551e120(param_2,&local_228);
  }
  if (param_3 != 0) {
    FUN_14551e190(&local_228,&local_208,&local_1c8);
    FUN_14551e3c0(&local_228,&local_1f8,&local_188);
    FUN_14551e3c0(&local_228,&local_1e8,&local_148);
    FUN_14551e120(param_3,&local_228);
  }
  if (param_4 != 0) {
    FUN_14551e190(&local_228,&local_208,&local_1b8);
    FUN_14551e3c0(&local_228,&local_1f8,&local_178);
    FUN_14551e3c0(&local_228,&local_1e8,&local_138);
    FUN_14551e120(param_4,&local_228);
  }
  if (param_5 != (undefined8 *)0x0) {
    FUN_14551e2b0(&local_228,&local_1d8,uVar12);
    FUN_14551e2b0(local_118,&local_1c8,uVar14);
    FUN_14551e2b0(local_f8,&local_1b8,uVar4);
    FUN_14551e160(&local_228,&local_228,local_118);
    FUN_14551e160(&local_228,&local_228,local_f8);
    *param_5 = local_228;
    param_5[1] = uStack_220;
    param_5[2] = local_218;
    param_5[3] = uStack_210;
  }
  return;
}



// FUNCTION 145520510 FUN_145520510 body=545 status=ok
// SIG undefined FUN_145520510(void)

ulonglong FUN_145520510(longlong *param_1,undefined1 (*param_2) [16])

{
  float *pfVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  byte bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  ulonglong local_res8;
  ulonglong local_res10;
  
  auVar2 = *param_2;
  uVar16 = (ulonglong)
           ((auVar2._8_4_ >> 3 | auVar2._8_4_ << 0x1d) ^
            (auVar2._4_4_ >> 0x10 | auVar2._4_4_ << 0x10) ^ auVar2._0_4_) & 0xfffffffe;
  local_res8 = uVar16;
  iVar13 = FUN_144f61e10(param_1 + 2,&local_res8);
  uVar3 = *(uint *)(param_1 + 1);
  if (*(int *)((longlong)param_1 + 0x1c) < iVar13) {
    iVar13 = uVar3 + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar13) {
      FUN_144bdedb0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar13);
    }
    puVar15 = (undefined4 *)((longlong)(int)param_1[1] * 0x10 + *param_1);
    if (puVar15 != (undefined4 *)0x0) {
      uVar14 = *(undefined4 *)(*param_2 + 4);
      uVar8 = *(undefined4 *)(*param_2 + 8);
      uVar9 = *(undefined4 *)(*param_2 + 0xc);
      *puVar15 = *(undefined4 *)*param_2;
      puVar15[1] = uVar14;
      puVar15[2] = uVar8;
      puVar15[3] = uVar9;
    }
    *(int *)(param_1 + 1) = iVar13;
    iVar13 = (int)param_1[5] + 1;
    lVar10 = param_1[5];
    if ((int)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) < iVar13) {
      FUN_145520740(param_1 + 4,&PTR_vftable_14c6e47a0,(longlong)iVar13);
    }
    lVar11 = param_1[5];
    lVar5 = param_1[4];
    *(int *)(param_1 + 5) = iVar13;
    *(uint *)(lVar5 + (longlong)(int)lVar11 * 8) = uVar3;
    *(undefined4 *)(lVar5 + 4 + (longlong)(int)lVar11 * 8) = 0xffffffff;
    local_res8 = (longlong)(int)lVar10;
    local_res10 = uVar16;
    FUN_144f5fe30(param_1 + 2,&PTR_vftable_14c6e47a0,&local_res10,&local_res8);
    return (ulonglong)uVar3;
  }
  lVar11 = param_1[4];
  lVar5 = (longlong)*(int *)(param_1[2] + 8 + (longlong)iVar13 * 0x10) * 8;
  uVar16 = (ulonglong)*(int *)(lVar5 + lVar11);
  pfVar1 = (float *)(*param_1 + uVar16 * 0x10);
  auVar2._4_4_ = -(uint)(pfVar1[1] == *(float *)(*param_2 + 4));
  auVar2._0_4_ = -(uint)(*pfVar1 == *(float *)*param_2);
  auVar2._8_4_ = -(uint)(pfVar1[2] == *(float *)(*param_2 + 8));
  auVar2._12_4_ = -(uint)(pfVar1[3] == *(float *)(*param_2 + 0xc));
  uVar14 = movmskps(*(int *)(lVar5 + lVar11) * 2,auVar2);
  bVar7 = (byte)uVar14;
  lVar10 = lVar5;
  while( true ) {
    if ((bVar7 & 7) == 7) {
      return uVar16 & 0xffffffff;
    }
    iVar13 = *(int *)(lVar10 + lVar11 + 4);
    if (iVar13 < 0) break;
    iVar4 = *(int *)(lVar11 + (longlong)iVar13 * 8);
    uVar16 = (ulonglong)iVar4;
    lVar10 = (longlong)iVar13 * 8;
    pfVar1 = (float *)(*param_1 + uVar16 * 0x10);
    auVar6._4_4_ = -(uint)(pfVar1[1] == *(float *)(*param_2 + 4));
    auVar6._0_4_ = -(uint)(*pfVar1 == *(float *)*param_2);
    auVar6._8_4_ = -(uint)(pfVar1[2] == *(float *)(*param_2 + 8));
    auVar6._12_4_ = -(uint)(pfVar1[3] == *(float *)(*param_2 + 0xc));
    uVar14 = movmskps(iVar4 * 2,auVar6);
    bVar7 = (byte)uVar14;
  }
  iVar13 = uVar3 + 1;
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar13) {
    FUN_144bdedb0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar13);
  }
  puVar15 = (undefined4 *)((longlong)(int)param_1[1] * 0x10 + *param_1);
  if (puVar15 != (undefined4 *)0x0) {
    uVar14 = *(undefined4 *)(*param_2 + 4);
    uVar8 = *(undefined4 *)(*param_2 + 8);
    uVar9 = *(undefined4 *)(*param_2 + 0xc);
    *puVar15 = *(undefined4 *)*param_2;
    puVar15[1] = uVar14;
    puVar15[2] = uVar8;
    puVar15[3] = uVar9;
  }
  *(int *)(param_1 + 1) = iVar13;
  lVar10 = param_1[5];
  iVar13 = (int)param_1[5] + 1;
  if ((int)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) < iVar13) {
    FUN_145520740(param_1 + 4,&PTR_vftable_14c6e47a0,(longlong)iVar13);
  }
  lVar12 = param_1[5];
  lVar11 = param_1[4];
  *(int *)(param_1 + 5) = iVar13;
  *(uint *)(lVar11 + (longlong)(int)lVar12 * 8) = uVar3;
  *(undefined4 *)(lVar11 + (longlong)(int)lVar12 * 8 + 4) = *(undefined4 *)(lVar11 + 4 + lVar5);
  *(int *)(lVar11 + 4 + lVar5) = (int)lVar10;
  return (ulonglong)uVar3;
}



// FUNCTION 145520740 FUN_145520740 body=247 status=ok
// SIG undefined FUN_145520740(void)

void FUN_145520740(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar5 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar1 = uVar5 * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar3 * 8,&local_res8);
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
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar5 * 8);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 145520840 FUN_145520840 body=59 status=ok
// SIG undefined FUN_145520840(void)

undefined8 * FUN_145520840(undefined8 *param_1)

{
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkgpGeneralizedWindingNumber::vftable;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  return param_1;
}



// FUNCTION 145520880 FUN_145520880 body=306 status=ok
// SIG undefined FUN_145520880(void)

void FUN_145520880(longlong param_1,longlong *param_2,longlong param_3)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auVar6 [16];
  int iVar7;
  undefined8 *puVar8;
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if ((param_3 != 0) && (param_2 != (longlong *)0x0)) {
    lVar4 = *param_2;
    pfVar1 = (float *)(lVar4 + 0x80 + (longlong)param_2);
    pfVar2 = (float *)(lVar4 + 0x90 + (longlong)param_2);
    auVar11._4_4_ = -(uint)(pfVar1[1] <= pfVar2[1]);
    auVar11._0_4_ = -(uint)(*pfVar1 <= *pfVar2);
    auVar11._8_4_ = -(uint)(pfVar1[2] <= pfVar2[2]);
    auVar11._12_4_ = -(uint)(pfVar1[3] <= pfVar2[3]);
    iVar7 = movmskps((int)lVar4,auVar11);
    if (iVar7 != 0) {
      *(longlong **)(param_1 + 0x18) = param_2;
      *(longlong *)(param_1 + 0x28) = param_3;
      iVar7 = (int)param_2[1];
      if ((int)(*(uint *)(param_1 + 0x3c) & 0x7fffffff) < iVar7) {
        FUN_145520c70(param_1 + 0x30,&PTR_vftable_14c6e47a0,(longlong)iVar7);
      }
      iVar3 = *(int *)(param_1 + 0x38);
      if (iVar3 < iVar7) {
        lVar4 = *(longlong *)(param_1 + 0x30);
        *(int *)(param_1 + 0x38) = iVar7;
        for (puVar8 = (undefined8 *)((longlong)iVar3 * 0x20 + *(longlong *)(param_1 + 0x30));
            puVar8 != (undefined8 *)((longlong)iVar7 * 0x20 + lVar4); puVar8 = puVar8 + 4) {
          if (puVar8 != (undefined8 *)0x0) {
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar8[2] = 0;
            puVar8[3] = 0;
          }
        }
      }
      else if (iVar7 < iVar3) {
        *(int *)(param_1 + 0x38) = iVar7;
      }
      FUN_145520a60(param_1,1);
      pauVar9 = *(undefined1 (**) [16])(param_1 + 0x30);
      pauVar10 = pauVar9 + (longlong)*(int *)(param_1 + 0x38) * 2;
      for (; pauVar9 != pauVar10; pauVar9 = pauVar9 + 2) {
        fVar5 = SUB164(*pauVar9,0xc);
        if (0.0 < fVar5) {
          auVar6._4_4_ = fVar5;
          auVar6._0_4_ = fVar5;
          auVar6._8_4_ = fVar5;
          auVar6._12_4_ = fVar5;
          auVar11 = divps(*pauVar9,auVar6);
          auVar12._0_12_ = auVar11._0_12_;
          auVar12._12_4_ = uRam000000014c6dacac;
          *pauVar9 = auVar12;
        }
      }
    }
  }
  return;
}



// FUNCTION 1455209c0 FUN_1455209c0 body=159 status=ok
// SIG undefined FUN_1455209c0(void)

undefined8 * FUN_1455209c0(undefined8 *param_1,uint param_2)

{
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[6],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x3c) & 0x7fffffff) << 5);
  }
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 145520a60 FUN_145520a60 body=518 status=ok
// SIG undefined FUN_145520a60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145520a60(longlong param_1,int param_2)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  float *pfVar5;
  int *piVar6;
  float *pfVar7;
  longlong lVar8;
  int *piVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auVar12 [12];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 local_58 [8];
  float fStack_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  lVar10 = 4;
  lVar8 = (longlong)param_2 * 0x80 + *plVar2;
  bVar1 = *(byte *)((longlong)plVar2 + lVar8 + 0x74);
  piVar9 = (int *)((longlong)plVar2 + lVar8 + 0x60);
  pfVar7 = (float *)((longlong)param_2 * 0x20 + *(longlong *)(param_1 + 0x30));
  do {
    iVar4 = *piVar9;
    if ((*(byte *)((longlong)plVar2 + lVar8 + 0x74) & 1) == 0) {
      bVar11 = iVar4 == 0;
    }
    else {
      bVar11 = iVar4 == -1;
    }
    if (!bVar11) {
      if ((bVar1 & 1) == 0) {
        FUN_145520a60(param_1,iVar4);
        pfVar5 = (float *)((longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x30));
        fVar20 = pfVar5[1];
        fVar21 = pfVar5[2];
        fVar22 = pfVar5[3];
        *pfVar7 = *pfVar5 + *pfVar7;
        pfVar7[1] = fVar20 + pfVar7[1];
        pfVar7[2] = fVar21 + pfVar7[2];
        pfVar7[3] = fVar22 + pfVar7[3];
        fVar20 = pfVar5[5];
        fVar21 = pfVar5[6];
        fVar22 = pfVar5[7];
        pfVar7[4] = pfVar5[4] + pfVar7[4];
        pfVar7[5] = fVar20 + pfVar7[5];
        pfVar7[6] = fVar21 + pfVar7[6];
        pfVar7[7] = fVar22 + pfVar7[7];
      }
      else {
        lVar3 = *(longlong *)(param_1 + 0x28);
        fVar20 = 0.0;
        fVar21 = 0.0;
        fVar22 = 0.0;
        if (lVar3 == 0) {
          iVar4 = (**(code **)(**(longlong **)(param_1 + 0x20) + 8))
                            (*(longlong **)(param_1 + 0x20),iVar4,&local_48,local_58,&local_38);
          fVar17 = 0.0;
          fVar18 = 0.0;
          fVar19 = 0.0;
          fVar14 = 0.0;
          if (iVar4 == 0) {
            auVar12 = local_58._0_12_;
            goto LAB_145520b78;
          }
          if (iVar4 == 1) {
            fVar17 = (float)local_58._0_4_;
            fVar18 = (float)local_58._4_4_;
            fVar19 = fStack_50;
            fVar20 = local_48;
            fVar21 = fStack_44;
            fVar22 = fStack_40;
            goto LAB_145520bad;
          }
        }
        else {
          piVar6 = (int *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar3 + 0x28));
          pfVar5 = (float *)(*(longlong *)(lVar3 + 0x18) + (longlong)*piVar6 * 0x10);
          local_48 = *pfVar5;
          fStack_44 = pfVar5[1];
          fStack_40 = pfVar5[2];
          fStack_3c = pfVar5[3];
          _local_58 = *(undefined1 (*) [16])
                       (*(longlong *)(lVar3 + 0x18) + (longlong)piVar6[1] * 0x10);
          auVar12 = local_58._0_12_;
          pfVar5 = (float *)(*(longlong *)(lVar3 + 0x18) + (longlong)piVar6[2] * 0x10);
          local_38 = *pfVar5;
          fStack_34 = pfVar5[1];
          fStack_30 = pfVar5[2];
          fStack_2c = pfVar5[3];
LAB_145520b78:
          fVar20 = auVar12._0_4_ - local_48;
          fVar21 = auVar12._4_4_ - fStack_44;
          fVar22 = auVar12._8_4_ - fStack_40;
          fVar17 = ((fStack_30 - fStack_40) * fVar21 - fVar22 * (fStack_34 - fStack_44)) *
                   _DAT_14c6dad90;
          fVar18 = ((local_38 - local_48) * fVar22 - fVar20 * (fStack_30 - fStack_40)) *
                   fRam000000014c6dad94;
          fVar19 = ((fStack_34 - fStack_44) * fVar20 - fVar21 * (local_38 - local_48)) *
                   fRam000000014c6dad98;
          fVar20 = (auVar12._0_4_ + local_48 + local_38) * _DAT_14c6dada0;
          fVar21 = (auVar12._4_4_ + fStack_44 + fStack_34) * fRam000000014c6dada4;
          fVar22 = (auVar12._8_4_ + fStack_40 + fStack_30) * fRam000000014c6dada8;
LAB_145520bad:
          fVar14 = fVar17 * fVar17;
          fVar15 = fVar18 * fVar18;
          fVar16 = fVar19 * fVar19;
          auVar13._0_4_ = fVar15 + fVar14 + fVar16;
          auVar13._4_4_ = fVar15 + fVar14 + fVar16;
          auVar13._8_4_ = fVar15 + fVar14 + fVar16;
          auVar13._12_4_ = fVar15 + fVar14 + fVar16;
          auVar13 = sqrtps(auVar13,auVar13);
          fVar14 = auVar13._12_4_;
        }
        pfVar7[4] = fVar17 + pfVar7[4];
        pfVar7[5] = fVar18 + pfVar7[5];
        pfVar7[6] = fVar19 + pfVar7[6];
        pfVar7[7] = fVar14 + pfVar7[7];
        *pfVar7 = fVar20 * fVar14 + *pfVar7;
        pfVar7[1] = fVar21 * fVar14 + pfVar7[1];
        pfVar7[2] = fVar22 * fVar14 + pfVar7[2];
        pfVar7[3] = fVar14 + pfVar7[3];
      }
    }
    piVar9 = piVar9 + 1;
    lVar10 = lVar10 + -1;
    if (lVar10 == 0) {
      return;
    }
  } while( true );
}



// FUNCTION 145520c70 FUN_145520c70 body=274 status=ok
// SIG undefined FUN_145520c70(void)

void FUN_145520c70(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong local_res8;
  
  uVar11 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar10 = uVar11 * 2;
  uVar8 = param_3;
  if (param_3 < uVar10) {
    uVar8 = uVar10;
  }
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar5 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,uVar8 * 0x20,&local_res8);
  uVar10 = (ulonglong)*(uint *)(param_1 + 1);
  puVar7 = (undefined4 *)*param_1;
  puVar6 = puVar5;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar6 != (undefined4 *)0x0) {
        uVar1 = puVar7[1];
        uVar2 = puVar7[2];
        uVar3 = puVar7[3];
        *puVar6 = *puVar7;
        puVar6[1] = uVar1;
        puVar6[2] = uVar2;
        puVar6[3] = uVar3;
        uVar4 = *(undefined8 *)(puVar7 + 6);
        *(undefined8 *)(puVar6 + 4) = *(undefined8 *)(puVar7 + 4);
        *(undefined8 *)(puVar6 + 6) = uVar4;
      }
      puVar6 = puVar6 + 8;
      puVar7 = puVar7 + 8;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uVar10 = uVar8 * 0x20 + 0x20;
  uVar9 = uVar8;
  if (uVar10 <= local_res8) {
    local_res8 = local_res8 - 0x20;
    uVar9 = uVar8 + 1;
    if (uVar10 <= local_res8) {
      uVar9 = uVar9 + (local_res8 + uVar8 * -0x20 >> 5);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar11 << 5);
  }
  *param_1 = puVar5;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  return;
}



// FUNCTION 145520d90 FUN_145520d90 body=257 status=ok
// SIG undefined FUN_145520d90(void)

undefined8 * FUN_145520d90(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = hkConcurrency::vftable;
  lVar1 = param_1[8];
  lVar3 = lVar1 + (longlong)*(int *)(param_1 + 9) * 8;
  while (lVar3 != lVar1) {
    lVar2 = *(longlong *)(lVar3 + -8);
    lVar3 = lVar3 + -8;
    if (lVar2 != 0) {
      FUN_144b49690(lVar2);
      (*DAT_14c787678)(0,lVar2,0);
    }
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x4c)) && (param_1[8] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[8],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x4c) & 0x7fffffff) << 3);
  }
  param_1[8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 145520ea0 FUN_145520ea0 body=23 status=ok
// SIG undefined FUN_145520ea0(void)

undefined8 FUN_145520ea0(undefined8 param_1)

{
  FUN_145520f20();
  return param_1;
}



// FUNCTION 145520ec0 FUN_145520ec0 body=95 status=ok
// SIG undefined FUN_145520ec0(void)

undefined4 * FUN_145520ec0(undefined4 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    FUN_144b3d910(lVar1);
  }
  lVar2 = *param_2;
  *param_2 = 0;
  if (lVar2 != 0) {
    FUN_144b3f230();
  }
  if (lVar1 != 0) {
    FUN_144b3f230(lVar1);
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 145520f20 FUN_145520f20 body=273 status=ok
// SIG undefined FUN_145520f20(void)

undefined4 * FUN_145520f20(undefined4 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint *puVar4;
  undefined8 local_res8;
  
  if (*param_2 == 0) {
    local_res8 = 0x60;
    puVar3 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar3,"hkReferencedObject");
    }
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      puVar3[2] = 1;
      puVar4 = (uint *)((longlong)puVar3 + 0x1c);
      puVar3[1] = 0xffffffff;
      *puVar3 = hkConcurrency::vftable;
      uVar2 = 0;
      *(undefined4 *)(puVar3 + 3) = 0;
      puVar4[0] = 0;
      puVar4[1] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x2c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x34) = 0;
      do {
        uVar2 = uVar2 + 1;
        *puVar4 = uVar2;
        puVar4 = puVar4 + 1;
      } while (uVar2 < 8);
      *(undefined4 *)(puVar3 + 7) = 0xf;
      *(undefined4 *)(puVar3 + 3) = 0;
      puVar3[8] = 0;
      *(undefined4 *)(puVar3 + 9) = 0;
      *(undefined4 *)((longlong)puVar3 + 0x4c) = 0x80000000;
      puVar3[10] = 0;
      *(undefined4 *)(puVar3 + 0xb) = 0;
      *(undefined1 *)((longlong)puVar3 + 0x5c) = 1;
    }
    puVar1 = (undefined8 *)*param_2;
    if ((puVar3 != puVar1) && (*param_2 = (longlong)puVar3, puVar1 != (undefined8 *)0x0)) {
      FUN_144b3f230();
    }
    *param_1 = 0;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 145521040 FUN_145521040 body=64 status=ok
// SIG undefined FUN_145521040(void)

undefined8 * FUN_145521040(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_145521550(param_1,&PTR_vftable_14c6e47a0,0x20);
  if ((*(int *)(param_1 + 1) < 1) || (1 < *(int *)(param_1 + 1))) {
    *(undefined4 *)(param_1 + 1) = 1;
  }
  return param_1;
}



// FUNCTION 145521080 FUN_145521080 body=53 status=ok
// SIG undefined FUN_145521080(void)

void FUN_145521080(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar2 = (int)param_1[1];
  if (2 < iVar2) {
    lVar3 = *param_1;
    puVar1 = (undefined4 *)(lVar3 + -0x10 + (longlong)iVar2 * 0x10);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    *(undefined4 *)(lVar3 + 0x10) = uVar4;
    *(undefined4 *)(lVar3 + 0x14) = uVar5;
    *(undefined4 *)(lVar3 + 0x18) = uVar6;
    *(undefined4 *)(lVar3 + 0x1c) = uVar7;
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
    FUN_145521260(uVar4,1);
    return;
  }
  if ((iVar2 < 1) || (1 < iVar2)) {
    *(undefined4 *)(param_1 + 1) = 1;
  }
  return;
}



// FUNCTION 1455210c0 FUN_1455210c0 body=16 status=ok
// SIG undefined FUN_1455210c0(void)

void FUN_1455210c0(longlong param_1)

{
  if ((*(int *)(param_1 + 8) < 1) || (1 < *(int *)(param_1 + 8))) {
    *(undefined4 *)(param_1 + 8) = 1;
  }
  return;
}



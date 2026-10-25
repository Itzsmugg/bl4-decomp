// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14949097c FUN_14949097c body=555 status=ok
// SIG undefined FUN_14949097c(void)

undefined8 * FUN_14949097c(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  FUN_14485c47a(&local_40,param_3);
  local_38 = local_40;
  iVar3 = FUN_1494dbe5c((longlong *)(param_1 + 0xa0),
                        (uint)((ulonglong)local_40 >> 0x20) ^ (uint)local_40);
  if (iVar3 != -1) {
    lVar4 = (longlong)iVar3 * 0x60 + *(longlong *)(param_1 + 0xa0);
    if (((longlong *)(lVar4 + 8) != (longlong *)0x0 && lVar4 != 0) &&
       (*(int *)(lVar4 + 0x10) != *(int *)(lVar4 + 0x3c))) {
      uVar2 = (uint)((ulonglong)param_4 >> 0x10);
      uVar6 = (uint)param_4 & 0xffff;
      lVar5 = lVar4 + 0x40;
      if (*(longlong *)(lVar4 + 0x48) != 0) {
        lVar5 = *(longlong *)(lVar4 + 0x48);
      }
      iVar3 = *(int *)(lVar5 + (ulonglong)
                               (*(int *)(lVar4 + 0x50) - 1U &
                               (int)((ulonglong)param_4 >> 0x20) + ((uint)param_4 << 0x10 | uVar6) +
                               (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
      if (iVar3 != -1) {
        lVar4 = *(longlong *)(lVar4 + 8);
        do {
          lVar5 = lVar4 + (longlong)iVar3 * 0x1c;
          if (*(longlong *)(lVar4 + (longlong)iVar3 * 0x1c) == param_4) {
            if ((lVar5 + 8U & 0xfffffffffffffff7) != 0) {
              if (*(int *)(param_1 + 0x58) == *(int *)(param_1 + 0x84)) goto LAB_149490acf;
              lVar4 = *(longlong *)(lVar5 + 0xc);
              uVar2 = (uint)((ulonglong)lVar4 >> 0x10);
              uVar6 = (uint)lVar4 & 0xffff;
              bVar1 = *(byte *)(lVar5 + 8);
              lVar5 = param_1 + 0x88;
              if (*(longlong *)(param_1 + 0x90) != 0) {
                lVar5 = *(longlong *)(param_1 + 0x90);
              }
              iVar3 = *(int *)(lVar5 + (ulonglong)
                                       (*(int *)(param_1 + 0x98) - 1U &
                                       ((uint)(bVar1 >> 2) +
                                        (int)((ulonglong)lVar4 >> 0x20) +
                                        ((uint)lVar4 << 0x10 | uVar6) +
                                        (uVar2 << 0x13 | uVar2 & 0xffff) +
                                        (uint)bVar1 * 0x40 + (uVar6 >> 4) + 0x9e3779b9 ^ (uint)bVar1
                                       )) * 4);
              if (iVar3 == -1) goto LAB_149490acf;
              lVar5 = *(longlong *)(param_1 + 0x50);
              goto LAB_149490b82;
            }
            break;
          }
          iVar3 = *(int *)(lVar5 + 0x14);
        } while (iVar3 != -1);
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  FUN_141215e22(param_2);
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
  while (iVar3 = *(int *)(lVar7 + 0x78), iVar3 != -1) {
LAB_149490b82:
    lVar8 = (longlong)iVar3 * 0x80;
    lVar7 = lVar5 + lVar8;
    if ((*(byte *)(lVar5 + lVar8) == bVar1) && (*(longlong *)(lVar5 + 4 + lVar8) == lVar4))
    goto LAB_149490ad2;
  }
LAB_149490acf:
  lVar7 = 0;
LAB_149490ad2:
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1401fa0f0(param_2,*(undefined8 *)(lVar7 + 0x48),*(undefined8 *)(lVar7 + 0x50));
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 149490bae FUN_149490bae body=47 status=ok
// SIG undefined FUN_149490bae(void)

void FUN_149490bae(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x20) = param_2;
  return;
}



// FUNCTION 149490bde FUN_149490bde body=65 status=ok
// SIG undefined FUN_149490bde(void)

undefined4 FUN_149490bde(longlong param_1,int *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((param_2[1] == 0x20) && (plVar1 = *(longlong **)(param_1 + 8), plVar1 != (longlong *)0x0)) {
    plVar2 = (longlong *)plVar1[8];
    iVar3 = (**(code **)(*plVar1 + 0x90))();
    iVar3 = *(int *)(*(longlong *)(*plVar2 + (longlong)iVar3 * 8) + 0x18);
    uVar4 = CONCAT31((int3)((uint)iVar3 >> 8),iVar3 == *param_2);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 149490c20 FUN_149490c20 body=224 status=ok
// SIG undefined FUN_149490c20(void)

void FUN_149490c20(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  
  iVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
  lVar3 = *(longlong *)(**(longlong **)(*(longlong *)(param_1 + 8) + 0x40) + (longlong)iVar5 * 8);
  uVar1 = *(uint *)(param_2 + 4);
  lVar8 = *(longlong *)(param_2 + 0x18);
  iVar5 = *(int *)(param_2 + 0x10);
  iVar2 = *(int *)(param_2 + 0x14);
  uVar11 = *(undefined8 *)(DAT_14ca8c040 + 0x18);
  lVar6 = FUN_14793c26a(lVar3 + 0x380,*(undefined8 *)(param_1 + 0x10));
  if (lVar6 != 0) {
    uVar11 = *(undefined8 *)(lVar6 + 0x18);
  }
  if (0 < (int)uVar1) {
    puVar7 = (undefined8 *)(lVar8 + iVar5 + 0x10);
    lVar8 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + 0x10);
      puVar10 = (undefined4 *)(lVar4 + 0x48 + lVar8);
      if (*(char *)(param_2 + 8) != '\0') {
        puVar10 = (undefined4 *)(lVar3 + 0xec);
      }
      *(undefined4 *)(puVar7 + -2) = *puVar10;
      uVar9 = 0;
      if (*(char *)(param_2 + 8) == '\0') {
        uVar9 = *(undefined4 *)(lVar4 + 0x10 + lVar8);
      }
      *(undefined4 *)((longlong)puVar7 + -0xc) = uVar9;
      *puVar7 = uVar11;
      *(uint *)(puVar7 + -1) = (uint)(lVar6 != 0);
      lVar8 = lVar8 + 0xf8;
      puVar7 = (undefined8 *)((longlong)puVar7 + (longlong)iVar2);
    } while ((ulonglong)uVar1 * 0xf8 - lVar8 != 0);
  }
  return;
}



// FUNCTION 149490d08 FUN_149490d08 body=32 status=ok
// SIG undefined FUN_149490d08(void)

undefined8 FUN_149490d08(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Write Skinned Mesh");
  return param_2;
}



// FUNCTION 149490d36 FUN_149490d36 body=1120 status=ok
// SIG undefined FUN_149490d36(void)

longlong * FUN_149490d36(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  undefined1 local_120;
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined8 local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined8 local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1446ddc76(&local_78,"Position",1);
  FUN_1400b22c2(local_88,"WritePosition");
  uVar4 = DAT_14cc1d7f0;
  FUN_1400b22c2(local_98,"ReadNumVertices");
  local_120 = 1;
  local_128 = local_98;
  FUN_149466350(&local_70,local_78,local_88,uVar4);
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_149482fea(param_2,0);
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = local_70;
  puVar2[1] = 0;
  puVar2[1] = local_68;
  local_68 = 0;
  *(undefined4 *)(puVar2 + 2) = (undefined4)local_60;
  *(undefined4 *)((longlong)puVar2 + 0x14) = local_60._4_4_;
  local_60 = 0;
  puVar2[3] = 0;
  puVar2[3] = local_58;
  local_58 = 0;
  *(undefined4 *)(puVar2 + 4) = (undefined4)local_50;
  *(undefined4 *)((longlong)puVar2 + 0x24) = local_50._4_4_;
  local_50 = 0;
  *(undefined1 *)((longlong)puVar2 + 0x2c) = local_44;
  *(undefined4 *)(puVar2 + 5) = local_48;
  FUN_14946649a(&local_70);
  FUN_1446ddc76(&local_a0,"TangentX",1);
  FUN_1400b22c2(local_b0,"WriteTangentX");
  uVar4 = DAT_14cc1d7f0;
  FUN_1400b22c2(local_c0,"ReadNumVertices");
  local_120 = 1;
  local_128 = local_c0;
  FUN_149466350(&local_70,local_a0,local_b0,uVar4);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar5 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar5) = local_70;
  *(undefined8 *)(lVar3 + 8 + lVar5) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar5) = local_68;
  local_68 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar5) = (undefined4)local_60;
  *(undefined4 *)(lVar3 + 0x14 + lVar5) = local_60._4_4_;
  local_60 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar5) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar5) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar5) = (undefined4)local_50;
  *(undefined4 *)(lVar3 + 0x24 + lVar5) = local_50._4_4_;
  local_50 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar5) = local_44;
  *(undefined4 *)(lVar3 + 0x28 + lVar5) = local_48;
  FUN_14946649a();
  FUN_1446ddc76(&local_c8,"TangentZ",1);
  FUN_1400b22c2(local_d8,"WriteTangentZ");
  uVar4 = DAT_14cc1d7f0;
  FUN_1400b22c2(local_e8,"ReadNumVertices");
  local_120 = 1;
  local_128 = local_e8;
  FUN_149466350(&local_70,local_c8,local_d8,uVar4);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar5 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar5) = local_70;
  *(undefined8 *)(lVar3 + 8 + lVar5) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar5) = local_68;
  local_68 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar5) = (undefined4)local_60;
  *(undefined4 *)(lVar3 + 0x14 + lVar5) = local_60._4_4_;
  local_60 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar5) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar5) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar5) = (undefined4)local_50;
  *(undefined4 *)(lVar3 + 0x24 + lVar5) = local_50._4_4_;
  local_50 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar5) = local_44;
  *(undefined4 *)(lVar3 + 0x28 + lVar5) = local_48;
  FUN_14946649a();
  FUN_1446ddc76(&local_f0,"Color",1);
  FUN_1400b22c2(local_100,"WriteColor");
  uVar4 = DAT_14cc1d7f0;
  FUN_1400b22c2(local_110,"ReadNumVertices");
  local_120 = 1;
  local_128 = local_110;
  FUN_149466350(&local_70,local_f0,local_100,uVar4);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar5 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar5) = local_70;
  *(undefined8 *)(lVar3 + 8 + lVar5) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar5) = local_68;
  local_68 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar5) = (undefined4)local_60;
  *(undefined4 *)(lVar3 + 0x14 + lVar5) = local_60._4_4_;
  local_60 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar5) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar5) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar5) = (undefined4)local_50;
  *(undefined4 *)(lVar3 + 0x24 + lVar5) = local_50._4_4_;
  local_50 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar5) = local_44;
  *(undefined4 *)(lVar3 + 0x28 + lVar5) = local_48;
  FUN_14946649a();
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149491198 FUN_149491198 body=49 status=ok
// SIG undefined FUN_149491198(void)

longlong * FUN_149491198(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_144a745da();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 1494911ca FUN_1494911ca body=108 status=ok
// SIG undefined FUN_1494911ca(void)

void FUN_1494911ca(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_28,L"ReadNumVertices");
  uVar1 = FUN_149459122(uVar1,local_28);
  FUN_1494593ba(uVar1,2,0,0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149491238 FUN_149491238 body=407 status=ok
// SIG undefined FUN_149491238(void)

void FUN_149491238(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_38,L"WritePosition");
  uVar1 = FUN_149459122(uVar1,local_38);
  local_78 = 0;
  uVar1 = FUN_149459206(uVar1,2,0,0);
  local_78 = 0;
  FUN_149459206(uVar1,3,3,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_48,L"WriteTangentX");
  uVar1 = FUN_149459122(uVar1,local_48);
  local_78 = 0;
  uVar1 = FUN_149459206(uVar1,2,0,0);
  local_78 = 0;
  FUN_149459206(uVar1,3,4,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_58,L"WriteTangentZ");
  uVar1 = FUN_149459122(uVar1,local_58);
  local_78 = 0;
  uVar1 = FUN_149459206(uVar1,2,0,0);
  local_78 = 0;
  FUN_149459206(uVar1,3,4,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_68,L"WriteColor");
  uVar1 = FUN_149459122(uVar1,local_68);
  local_78 = 0;
  uVar1 = FUN_149459206(uVar1,2,0,0);
  local_78 = 0;
  FUN_149459206(uVar1,3,4,0);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494913d8 FUN_1494913d8 body=43 status=ok
// SIG undefined FUN_1494913d8(void)

void FUN_1494913d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14743cff1(L"/Plugin/Optimus/Private/DataInterfaceSkinnedMeshWrite.ush",0);
  FUN_1407c8a86(uVar1,0x14,param_2);
  return;
}



// FUNCTION 149491404 FUN_149491404 body=438 status=ok
// SIG undefined FUN_149491404(void)

void FUN_149491404(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  void *_Src;
  int iVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined2 *local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  longlong local_b0 [2];
  longlong **local_a0;
  undefined1 *local_98;
  longlong *local_90;
  undefined2 **local_88;
  undefined1 local_80 [64];
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_140056680(local_b0,L"DataInterfaceName");
  local_e8 = (void *)0x0;
  local_e0 = *(int *)(param_3 + 1);
  lVar3 = (longlong)local_e0;
  _Src = (void *)*param_3;
  if (lVar3 == 0) {
    local_dc = 0;
  }
  else {
    FUN_1446dd670(&local_e8,local_e0,0);
    memcpy(local_e8,_Src,lVar3 * 2);
  }
  FUN_14146ec20(&local_d8,&local_e8);
  local_a0 = &local_90;
  local_98 = local_80;
  local_90 = local_b0;
  local_88 = &local_d8;
  FUN_1481b8c1c(local_80);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if (local_b0[0] != 0) {
    FUN_1400020a8();
  }
  local_d8 = (undefined2 *)0x0;
  uStack_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_14743cfee(L"/Plugin/Optimus/Private/DataInterfaceSkinnedMeshWrite.ush",0,&local_d8,0);
  puVar2 = local_d8;
  if ((int)uStack_d0 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140a69a60(&local_90,puVar2,local_80);
  iVar1 = (int)local_88 + -1;
  if ((int)local_88 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_2,local_90,iVar1);
  if (local_90 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_38 = 0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  FUN_140b40bda(local_80);
  if ((local_30 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494915bc FUN_1494915bc body=131 status=ok
// SIG undefined FUN_1494915bc(void)

longlong FUN_1494915bc(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = FUN_14949163f();
  if (*param_2 != 0) {
    lVar4 = FUN_144a745da();
    lVar1 = *param_2;
    if (lVar1 != 0) {
      lVar5 = 0;
      if ((lVar4 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_149491622;
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        lVar5 = lVar1;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar1);
        }
        goto LAB_149491622;
      }
    }
  }
  lVar5 = 0;
LAB_149491622:
  *(longlong *)(lVar3 + 0x28) = lVar5;
  *(undefined8 *)(lVar3 + 0x30) = param_4;
  return lVar3;
}



// FUNCTION 14949163f FUN_14949163f body=148 status=ok
// SIG undefined FUN_14949163f(void)

undefined8 FUN_14949163f(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145ba6656();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494916ea FUN_1494916ea body=94 status=ok
// SIG undefined FUN_1494916ea(void)

void FUN_1494916ea(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *puVar3 = &PTR_FUN_14bd05ef0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar1 + 0x8a8);
  }
  puVar3[1] = uVar4;
  puVar3[2] = uVar2;
  puVar3[3] = param_1 + 0x38;
  return;
}



// FUNCTION 149491748 FUN_149491748 body=82 status=ok
// SIG undefined FUN_149491748(void)

undefined4 FUN_149491748(longlong param_1,int *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  
  if (((param_2[1] == 0x20) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(), cVar2 == '\0')) {
    plVar1 = (longlong *)(*(longlong **)(param_1 + 8))[8];
    iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
    iVar3 = *(int *)(*(longlong *)(*plVar1 + (longlong)iVar3 * 8) + 0x18);
    return CONCAT31((int3)((uint)iVar3 >> 8),iVar3 == *param_2);
  }
  return 0;
}



// FUNCTION 14949179a FUN_14949179a body=591 status=ok
// SIG undefined FUN_14949179a(void)

void FUN_14949179a(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  byte bVar4;
  bool bVar5;
  undefined1 auStack_68 [32];
  bool *local_48;
  uint3 local_40;
  longlong local_38;
  bool local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
  iVar1 = **(int **)(param_1 + 0x18);
  if (iVar2 != iVar1) {
    **(int **)(param_1 + 0x18) = iVar2;
  }
  bVar5 = (*(byte *)(param_1 + 0x10) & 1) != 0;
  if (bVar5) {
    local_48 = (bool *)0x14bd053b0;
    local_38 = FUN_147d1cefe(param_2,*(undefined8 *)(param_1 + 8),iVar2,iVar2 != iVar1);
    *(longlong *)(param_1 + 0x20) = local_38;
  }
  else {
    local_38 = FUN_144735dd8(param_2,DAT_14ca8c050 + 0x10,0);
  }
  local_40 = 0xd;
  local_48 = &local_29;
  local_29 = bVar5;
  uVar3 = FUN_144a23c98(param_2 + 0x198,param_2 + 0x70,local_38 + 8);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  bVar4 = 0x3f;
  if (*(longlong *)(&DAT_14ca814b0 + (ulonglong)DAT_14ca85550 * 0x3c) == DAT_14ca81490) {
    bVar4 = 0x23;
  }
  bVar5 = (*(byte *)(param_1 + 0x10) & 6) == 0;
  if (bVar5) {
    local_38 = FUN_144735dd8(param_2,DAT_14ca8c050 + 0x10,0);
  }
  else {
    local_38 = FUN_147d1d380(param_2,*(undefined8 *)(param_1 + 8),iVar2,L"OptimusSkinnedMeshTangent"
                            );
    *(longlong *)(param_1 + 0x30) = local_38;
  }
  local_40 = (uint3)bVar4;
  local_29 = !bVar5;
  local_48 = &local_29;
  uVar3 = FUN_144a23c98(param_2 + 0x198,param_2 + 0x70,local_38 + 8);
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  bVar5 = (*(byte *)(param_1 + 0x10) & 8) != 0;
  if (bVar5) {
    local_38 = FUN_147d1d5fc(param_2,*(undefined8 *)(param_1 + 8),iVar2,L"OptimusSkinnedMeshColor");
    *(longlong *)(param_1 + 0x40) = local_38;
    local_40._0_2_ = 0x25;
  }
  else {
    local_38 = FUN_144735dd8(param_2,DAT_14ca8c050 + 0x10,0);
    local_40._0_2_ = 1;
  }
  local_40 = (uint3)(ushort)local_40;
  local_48 = &local_29;
  local_29 = bVar5;
  uVar3 = FUN_144a23c98(param_2 + 0x198,param_2 + 0x70,local_38 + 8);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  FUN_147d1d848(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_1 + 8),iVar2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494919ea FUN_1494919ea body=168 status=ok
// SIG undefined FUN_1494919ea(void)

void FUN_1494919ea(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  
  iVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
  iVar1 = *(int *)(param_2 + 4);
  if (0 < (longlong)iVar1) {
    puVar6 = (undefined4 *)((longlong)*(int *)(param_2 + 0x10) + *(longlong *)(param_2 + 0x18));
    iVar2 = *(int *)(param_2 + 0x14);
    lVar3 = *(longlong *)(**(longlong **)(*(longlong *)(param_1 + 8) + 0x40) + (longlong)iVar5 * 8);
    lVar9 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + 0x10);
      puVar8 = (undefined4 *)(lVar4 + 0x48 + lVar9);
      if (*(char *)(param_2 + 8) != '\0') {
        puVar8 = (undefined4 *)(lVar3 + 0xec);
      }
      *puVar6 = *puVar8;
      uVar7 = 0;
      if (*(char *)(param_2 + 8) == '\0') {
        uVar7 = *(undefined4 *)(lVar4 + 0x10 + lVar9);
      }
      puVar6[1] = uVar7;
      *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(puVar6 + 4) = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(puVar6 + 6) = *(undefined8 *)(param_1 + 0x48);
      lVar9 = lVar9 + 0xf8;
      puVar6 = (undefined4 *)((longlong)puVar6 + (longlong)iVar2);
    } while ((longlong)iVar1 * 0xf8 - lVar9 != 0);
  }
  return;
}



// FUNCTION 149491a92 FUN_149491a92 body=32 status=ok
// SIG undefined FUN_149491a92(void)

undefined8 FUN_149491a92(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Skin Weights as Vertex Mask");
  return param_2;
}



// FUNCTION 149491ab2 FUN_149491ab2 body=301 status=ok
// SIG undefined FUN_149491ab2(void)

longlong * FUN_149491ab2(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined1 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1446ddc76(&local_68,&DAT_149f633e0,1);
  FUN_1400b22c2(local_78,"ReadMask");
  uVar2 = DAT_14cc1d7f0;
  FUN_1400b22c2(local_88,"ReadNumVertices");
  local_90 = 1;
  local_98 = local_88;
  FUN_149466350(&local_60,local_68,local_78,uVar2);
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_149482fea(param_2,0);
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = local_60;
  puVar1[1] = 0;
  puVar1[1] = local_58;
  local_58 = 0;
  *(undefined4 *)(puVar1 + 2) = (undefined4)local_50;
  *(undefined4 *)((longlong)puVar1 + 0x14) = local_50._4_4_;
  local_50 = 0;
  puVar1[3] = 0;
  puVar1[3] = local_48;
  local_48 = 0;
  *(undefined4 *)(puVar1 + 4) = (undefined4)local_40;
  *(undefined4 *)((longlong)puVar1 + 0x24) = local_40._4_4_;
  local_40 = 0;
  *(undefined1 *)((longlong)puVar1 + 0x2c) = local_34;
  *(undefined4 *)(puVar1 + 5) = local_38;
  FUN_14946649a(&local_60);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149491be0 FUN_149491be0 body=1553 status=ok
// SIG undefined FUN_149491be0(void)

/* WARNING: Removing unreachable block (ram,0x000149491ff2) */
/* WARNING: Removing unreachable block (ram,0x000149491e32) */
/* WARNING: Removing unreachable block (ram,0x000149491d52) */
/* WARNING: Removing unreachable block (ram,0x000149491f12) */
/* WARNING: Removing unreachable block (ram,0x0001494920d2) */

longlong * FUN_149491be0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140f4f540();
  puVar6 = (undefined8 *)FUN_144a63fc8();
  FUN_140f4f5a6(&DAT_14cc1c7d8,&local_30,*puVar6);
  FUN_140f4f540();
  uVar7 = FUN_144a63fc8();
  FUN_1494921f2(&local_40,uVar7);
  FUN_140f4f540();
  puVar6 = (undefined8 *)FUN_144a7452c();
  FUN_140f4f5a6(&DAT_14cc1c7d8,&local_50,*puVar6);
  FUN_140f4f540();
  puVar6 = (undefined8 *)FUN_144a5ab96();
  FUN_140f4f5a6(&DAT_14cc1c7d8,&local_60,*puVar6);
  FUN_1446f470e(&local_98,L"SkinWeightProfile",1);
  local_a8 = local_30;
  local_a0 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  FUN_140e6511c(&local_90,&local_a8);
  iVar4 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
    FUN_14948307e(param_2,iVar4);
  }
  lVar5 = *param_2;
  lVar8 = (longlong)iVar4 * 0x38;
  *(undefined8 *)(lVar5 + lVar8) = local_98;
  *(undefined8 *)(lVar5 + 8 + lVar8) = local_90;
  *(undefined8 *)(lVar5 + 0x10 + lVar8) = local_88;
  puVar3 = (undefined4 *)(lVar5 + 0x18 + lVar8);
  *puVar3 = local_80;
  puVar3[1] = uStack_7c;
  puVar3[2] = uStack_78;
  puVar3[3] = uStack_74;
  *(undefined8 *)(lVar5 + 0x28 + lVar8) = 0;
  *(undefined8 *)(lVar5 + 0x28 + lVar8) = local_70;
  *(undefined4 *)(lVar5 + 0x30 + lVar8) = (undefined4)local_68;
  *(undefined4 *)(lVar5 + 0x34 + lVar8) = local_68._4_4_;
  local_68 = 0;
  local_70 = 0;
  FUN_1446f470e(&local_98,L"BoneNames",1);
  local_b8 = local_40;
  local_b0 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  FUN_140e6511c(&local_90,&local_b8);
  iVar4 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
    FUN_14948307e(param_2,iVar4);
  }
  lVar5 = *param_2;
  lVar8 = (longlong)iVar4 * 0x38;
  *(undefined8 *)(lVar5 + lVar8) = local_98;
  *(undefined8 *)(lVar5 + 8 + lVar8) = local_90;
  *(undefined8 *)(lVar5 + 0x10 + lVar8) = local_88;
  puVar3 = (undefined4 *)(lVar5 + 0x18 + lVar8);
  *puVar3 = local_80;
  puVar3[1] = uStack_7c;
  puVar3[2] = uStack_78;
  puVar3[3] = uStack_74;
  *(undefined8 *)(lVar5 + 0x28 + lVar8) = 0;
  *(undefined8 *)(lVar5 + 0x28 + lVar8) = local_70;
  *(undefined4 *)(lVar5 + 0x30 + lVar8) = (undefined4)local_68;
  *(undefined4 *)(lVar5 + 0x34 + lVar8) = local_68._4_4_;
  local_68 = 0;
  local_70 = 0;
  FUN_1446f470e(&local_98,L"ExpandTowardsRoot",1);
  local_c8 = local_50;
  local_c0 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  FUN_140e6511c(&local_90,&local_c8);
  iVar4 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
    FUN_14948307e(param_2,iVar4);
  }
  lVar5 = *param_2;
  lVar8 = (longlong)iVar4 * 0x38;
  *(undefined8 *)(lVar5 + lVar8) = local_98;
  *(undefined8 *)(lVar5 + 8 + lVar8) = local_90;
  *(undefined8 *)(lVar5 + 0x10 + lVar8) = local_88;
  puVar3 = (undefined4 *)(lVar5 + 0x18 + lVar8);
  *puVar3 = local_80;
  puVar3[1] = uStack_7c;
  puVar3[2] = uStack_78;
  puVar3[3] = uStack_74;
  *(undefined8 *)(lVar5 + 0x28 + lVar8) = 0;
  *(undefined8 *)(lVar5 + 0x28 + lVar8) = local_70;
  *(undefined4 *)(lVar5 + 0x30 + lVar8) = (undefined4)local_68;
  *(undefined4 *)(lVar5 + 0x34 + lVar8) = local_68._4_4_;
  local_68 = 0;
  local_70 = 0;
  FUN_1446f470e(&local_98,L"ExpandTowardsLeaf",1);
  local_d8 = local_50;
  local_d0 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  FUN_140e6511c(&local_90,&local_d8);
  iVar4 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
    FUN_14948307e(param_2,iVar4);
  }
  lVar5 = *param_2;
  lVar8 = (longlong)iVar4 * 0x38;
  *(undefined8 *)(lVar5 + lVar8) = local_98;
  *(undefined8 *)(lVar5 + 8 + lVar8) = local_90;
  *(undefined8 *)(lVar5 + 0x10 + lVar8) = local_88;
  puVar3 = (undefined4 *)(lVar5 + 0x18 + lVar8);
  *puVar3 = local_80;
  puVar3[1] = uStack_7c;
  puVar3[2] = uStack_78;
  puVar3[3] = uStack_74;
  *(undefined8 *)(lVar5 + 0x28 + lVar8) = 0;
  *(undefined8 *)(lVar5 + 0x28 + lVar8) = local_70;
  *(undefined4 *)(lVar5 + 0x30 + lVar8) = (undefined4)local_68;
  *(undefined4 *)(lVar5 + 0x34 + lVar8) = local_68._4_4_;
  local_68 = 0;
  local_70 = 0;
  FUN_1446f470e(&local_98,L"bDebugDrawIncludedBones",1);
  local_e8 = local_60;
  local_e0 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
  }
  FUN_140e6511c(&local_90,&local_e8);
  iVar4 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
    FUN_14948307e(param_2,iVar4);
  }
  lVar5 = *param_2;
  lVar8 = (longlong)iVar4 * 0x38;
  *(undefined8 *)(lVar5 + lVar8) = local_98;
  *(undefined8 *)(lVar5 + 8 + lVar8) = local_90;
  *(undefined8 *)(lVar5 + 0x10 + lVar8) = local_88;
  puVar3 = (undefined4 *)(lVar5 + 0x18 + lVar8);
  *puVar3 = local_80;
  puVar3[1] = uStack_7c;
  puVar3[2] = uStack_78;
  puVar3[3] = uStack_74;
  *(undefined8 *)(lVar5 + 0x28 + lVar8) = 0;
  *(undefined8 *)(lVar5 + 0x28 + lVar8) = local_70;
  *(undefined4 *)(lVar5 + 0x30 + lVar8) = (undefined4)local_68;
  *(undefined4 *)(lVar5 + 0x34 + lVar8) = local_68._4_4_;
  local_68 = 0;
  local_70 = 0;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
      }
    }
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1494921f2 FUN_1494921f2 body=175 status=ok
// SIG undefined FUN_1494921f2(void)

undefined8 * FUN_1494921f2(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140f4f5a6(&DAT_14cc1c7d8,&local_30,*param_2);
  if (local_30 != (undefined8 *)0x0) {
    FUN_1457dd16c(&local_38,*local_30);
    FUN_140f4f5a6(&DAT_14cc1c7d8,param_1,local_38);
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if (local_30 == (undefined8 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494922a2 FUN_1494922a2 body=49 status=ok
// SIG undefined FUN_1494922a2(void)

longlong * FUN_1494922a2(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_144a74fb4();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 1494922d4 FUN_1494922d4 body=464 status=ok
// SIG undefined FUN_1494922d4(void)

void FUN_1494922d4(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x58) != 3) {
    FUN_1446efa72((longlong *)(param_1 + 0x50),0,3,0x10);
    *(undefined4 *)(param_1 + 0x58) = 3;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x50);
  *puVar1 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  puVar1[2] = lVar3;
  *puVar1 = &PTR_FUN_14bcfe220;
  puVar1[3] = 0;
  FUN_14485c47a(puVar1 + 3,param_2);
  puVar1[4] = FUN_1494924a4;
  *(undefined4 *)(puVar1 + 5) = 0;
  if (*(int *)(param_1 + 0x68) != 3) {
    FUN_1446efa72((longlong *)(param_1 + 0x60),0,3,0x10);
    *(undefined4 *)(param_1 + 0x68) = 3;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x60);
  *puVar1 = &PTR_LAB_14bcfe300;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  puVar1[2] = lVar3;
  *puVar1 = &PTR_FUN_14bcfe290;
  puVar1[3] = 0;
  FUN_14485c47a(puVar1 + 3,param_2);
  puVar1[4] = FUN_1494927fe;
  *(undefined4 *)(puVar1 + 5) = 0;
  if (*(int *)(param_1 + 0x78) != 3) {
    FUN_1446efa72((longlong *)(param_1 + 0x70),0,3,0x10);
    *(undefined4 *)(param_1 + 0x78) = 3;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x70);
  *puVar1 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  puVar1[2] = lVar3;
  *puVar1 = &PTR_FUN_14bcfe220;
  puVar1[3] = 0;
  FUN_14485c47a(puVar1 + 3,param_2);
  puVar1[4] = FUN_149492892;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



// FUNCTION 1494924a4 FUN_1494924a4 body=856 status=ok
// SIG undefined FUN_1494924a4(void)

void FUN_1494924a4(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 *local_a8;
  int local_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  iVar1 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar1 != 0) {
    lVar9 = *(longlong *)(param_1 + 0x50);
    lVar10 = 0;
    do {
      lVar11 = *(longlong *)(lVar9 + lVar10);
      if (lVar11 != **(longlong **)(param_1 + 0x50)) {
        FUN_1494e7262(lVar11,&local_c8);
        local_d0 = *(undefined8 *)(lVar11 + 0x18);
        local_a8 = &local_d0;
        FUN_1494d5bf6(&local_98,&local_9c,&local_a8);
        lVar5 = local_98 + (longlong)local_9c * 0x20;
        plVar8 = (longlong *)(lVar5 + 8);
        if (plVar8 != &local_c8) {
          if (*plVar8 != 0) {
            FUN_1400020a8();
          }
          *plVar8 = local_c8;
          local_c8 = 0;
          *(undefined4 *)(lVar5 + 0x10) = (undefined4)local_c0;
          *(undefined4 *)(lVar5 + 0x14) = local_c0._4_4_;
          local_c0 = 0;
        }
        if (local_c8 != 0) {
          FUN_1400020a8();
        }
        uVar3 = uStack_b0;
        lVar5 = (longlong)(int)uStack_b0;
        uVar4 = (int)uStack_b0 + 1;
        uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar4);
        if (uStack_b0._4_4_ < uVar4) {
          FUN_149482de0(&local_b8,uVar3 & 0xffffffff);
        }
        *(longlong *)(local_b8 + lVar5 * 8) = lVar11;
      }
      lVar11 = local_b8;
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar1 * 8 != lVar10);
    lVar9 = (longlong)(int)uStack_b0;
    if (lVar9 != 0) {
      lVar10 = 0;
      do {
        FUN_1445288d0(param_1,*(undefined8 *)(lVar11 + lVar10));
        lVar10 = lVar10 + 8;
      } while (lVar9 * 8 != lVar10);
    }
  }
  FUN_1494a04ea(param_1,*(undefined8 *)(param_1 + 0x130),1);
  FUN_1494a09f8(param_1,*(undefined8 *)(param_1 + 0x130),1);
  if ((longlong)*(int *)(param_1 + 0x58) == 0) {
LAB_149492550:
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    local_50 = 0;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1494ced2c(&local_98);
    if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  plVar12 = *(longlong **)(param_1 + 0x50);
  plVar8 = plVar12 + *(int *)(param_1 + 0x58);
LAB_1494926a9:
  if ((int)uStack_90 != local_64) {
    lVar9 = *plVar12;
    lVar10 = *(longlong *)(lVar9 + 0x18);
    uVar4 = (uint)((ulonglong)lVar10 >> 0x10);
    uVar7 = (uint)lVar10 & 0xffff;
    puVar6 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar6 = local_60;
    }
    iVar1 = *(int *)(puVar6 + (ulonglong)
                              (local_50 - 1U &
                              (int)((ulonglong)lVar10 >> 0x20) + ((uint)lVar10 << 0x10 | uVar7) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar7 >> 4)) * 4);
    while (iVar1 != -1) {
      lVar11 = local_98 + (longlong)iVar1 * 0x20;
      if (*(longlong *)(local_98 + (longlong)iVar1 * 0x20) == lVar10) {
        if (((lVar11 + 8U & 0xfffffffffffffff7) != 0) &&
           (iVar1 = *(int *)(lVar11 + 0x10), (longlong)iVar1 != 0)) {
          local_d8 = *(longlong *)(lVar11 + 8);
          lVar10 = 0;
          goto LAB_14949276a;
        }
        break;
      }
      iVar1 = *(int *)(lVar11 + 0x18);
    }
  }
  goto LAB_1494926b6;
LAB_14949276a:
  do {
    uVar2 = *(undefined8 *)(local_d8 + lVar10);
    lVar11 = *(longlong *)(param_1 + 0x20);
    if (lVar11 == 0) {
LAB_14949279c:
      lVar11 = 0;
    }
    else {
      lVar5 = FUN_141155906();
      if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) goto LAB_14949279c;
    }
    FUN_149494c80(lVar11,lVar9,uVar2);
    lVar10 = lVar10 + 8;
  } while ((longlong)iVar1 * 8 != lVar10);
LAB_1494926b6:
  plVar12 = plVar12 + 1;
  if (plVar12 == plVar8) goto LAB_149492550;
  goto LAB_1494926a9;
}



// FUNCTION 1494927fe FUN_1494927fe body=147 status=ok
// SIG undefined FUN_1494927fe(void)

void FUN_1494927fe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  longlong local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = param_2;
  FUN_1400021e4(&local_30,&local_50);
  local_40 = local_50;
  local_38 = local_48 + -1;
  if (local_48 == 0) {
    local_38 = 0;
  }
  uVar1 = FUN_1494a0ce0(param_1);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  FUN_149494b6e(param_1,uVar1,param_3);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149492892 FUN_149492892 body=126 status=ok
// SIG undefined FUN_149492892(void)

void FUN_149492892(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0x130);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x318))(plVar1,local_40);
    FUN_140233b1a(local_30,local_40);
    FUN_1458d0f32(param_1,local_30);
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149492912 FUN_149492912 body=192 status=ok
// SIG undefined FUN_149492912(void)

void FUN_149492912(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_30,L"ReadNumVertices");
  uVar1 = FUN_149459122(uVar1,local_30);
  FUN_1494593ba(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_40,L"ReadMask");
  uVar1 = FUN_149459122(uVar1,local_40);
  uVar1 = FUN_1494593ba(uVar1,3,0,0);
  local_48 = 0;
  FUN_149459206(uVar1,2,0,0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494929dc FUN_1494929dc body=151 status=ok
// SIG undefined FUN_1494929dc(void)

void FUN_1494929dc(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_1494d4d9c();
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  lVar3 = param_1[2];
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x7b;
  *(int *)(lVar2 + 0x14 + lVar4) = (int)lVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cc1d760;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x30;
  return;
}



// FUNCTION 149492a74 FUN_149492a74 body=253 status=ok
// SIG undefined FUN_149492a74(void)

void FUN_149492a74(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140056680(local_28,L"ENABLE_DEFORMER_BONES");
  FUN_14588e9a8(param_2,local_28,2);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_28,L"GPUSKIN_UNLIMITED_BONE_INFLUENCE");
  FUN_14588e9a8(param_2,local_28,2);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_28,L"GPUSKIN_BONE_INDEX_UINT16");
  FUN_14588e9a8(param_2,local_28,2);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_28,L"GPUSKIN_BONE_WEIGHTS_UINT16");
  FUN_14588e9a8(param_2,local_28,2);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149492b72 FUN_149492b72 body=43 status=ok
// SIG undefined FUN_149492b72(void)

void FUN_149492b72(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14743cff1(L"/Plugin/Optimus/Private/DataInterfaceSkinWeightsAsVertexMask.ush",0);
  FUN_1407c8a86(uVar1,0x14,param_2);
  return;
}



// FUNCTION 149492ba6 FUN_149492ba6 body=438 status=ok
// SIG undefined FUN_149492ba6(void)

void FUN_149492ba6(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  void *_Src;
  int iVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined2 *local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  longlong local_b0 [2];
  longlong **local_a0;
  undefined1 *local_98;
  longlong *local_90;
  undefined2 **local_88;
  undefined1 local_80 [64];
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_140056680(local_b0,L"DataInterfaceName");
  local_e8 = (void *)0x0;
  local_e0 = *(int *)(param_3 + 1);
  lVar3 = (longlong)local_e0;
  _Src = (void *)*param_3;
  if (lVar3 == 0) {
    local_dc = 0;
  }
  else {
    FUN_1446dd670(&local_e8,local_e0,0);
    memcpy(local_e8,_Src,lVar3 * 2);
  }
  FUN_14146ec20(&local_d8,&local_e8);
  local_a0 = &local_90;
  local_98 = local_80;
  local_90 = local_b0;
  local_88 = &local_d8;
  FUN_1481b8c1c(local_80);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if (local_b0[0] != 0) {
    FUN_1400020a8();
  }
  local_d8 = (undefined2 *)0x0;
  uStack_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_14743cfee(L"/Plugin/Optimus/Private/DataInterfaceSkinWeightsAsVertexMask.ush",0,&local_d8,0);
  puVar2 = local_d8;
  if ((int)uStack_d0 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140a69a60(&local_90,puVar2,local_80);
  iVar1 = (int)local_88 + -1;
  if ((int)local_88 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_2,local_90,iVar1);
  if (local_90 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_38 = 0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  FUN_140b40bda(local_80);
  if ((local_30 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149492d5e FUN_149492d5e body=120 status=ok
// SIG undefined FUN_149492d5e(void)

undefined8 FUN_149492d5e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = FUN_149492dd6(DAT_14c951640);
  if (*param_2 != 0) {
    lVar4 = FUN_144a74fb4();
    lVar1 = *param_2;
    if (lVar1 != 0) {
      lVar5 = 0;
      if ((lVar4 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_149492dc0;
      if (*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar5 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30) {
          lVar5 = lVar1;
        }
        goto LAB_149492dc0;
      }
    }
  }
  lVar5 = 0;
LAB_149492dc0:
  FUN_149492e6c(uVar3,param_1,lVar5);
  return uVar3;
}



// FUNCTION 149492dd6 FUN_149492dd6 body=148 status=ok
// SIG undefined FUN_149492dd6(void)

undefined8 FUN_149492dd6(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145ba3d34();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149492e6c FUN_149492e6c body=109 status=ok
// SIG undefined FUN_149492e6c(void)

void FUN_149492e6c(longlong param_1,longlong param_2,longlong param_3)

{
  FUN_14485c47a(param_1 + 0xd0);
  if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_3);
  }
  *(longlong *)(param_1 + 0x30) = param_3;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x28);
  FUN_1406fa324(param_1 + 0x40,param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x44);
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x4c);
  return;
}



// FUNCTION 149492eda FUN_149492eda body=50 status=ok
// SIG undefined FUN_149492eda(void)

void FUN_149492eda(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0xa0) = param_2;
  return;
}



// FUNCTION 149492f0c FUN_149492f0c body=2600 status=ok
// SIG undefined FUN_149492f0c(void)

undefined8 * FUN_149492f0c(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  undefined ***pppuVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined1 auStack_1c8 [32];
  code **local_1a8;
  undefined4 local_1a0;
  longlong *local_190;
  longlong *local_188;
  longlong *local_180;
  longlong *local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  longlong local_160;
  ulonglong local_158;
  longlong local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8 [2];
  code *local_c8;
  ulonglong uStack_c0;
  undefined ***local_b8;
  undefined **local_a8;
  undefined *local_a0;
  byte local_78;
  char local_70;
  byte bStack_6f;
  undefined2 uStack_6e;
  undefined4 uStack_6c;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  puVar5 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  *puVar5 = &PTR_FUN_14bd1adb0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  if ((*(longlong *)(param_1 + 0x30) == 0) ||
     (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x8a8) == 0)) goto LAB_1494930f2;
  lVar6 = FUN_14479d2ce();
  if (lVar6 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 200);
    FUN_1446f470e(&local_f0,L"SkinWeightProfile",1);
    FUN_14949097c(uVar2,&local_c8,lVar6,local_f0);
    FUN_1446f470e(&local_f8,L"Value",1);
    FUN_14688f02c(&local_c8,&local_70,local_f8);
    if ((&DAT_14bcfe218)[local_68] == '\x01') {
      *(ulonglong *)(param_1 + 0x38) =
           CONCAT44(uStack_6c,CONCAT22(uStack_6e,CONCAT11(bStack_6f,local_70)));
    }
    FUN_1401f9f5c(&local_c8);
    uVar2 = *(undefined8 *)(param_1 + 200);
    FUN_1446f470e(&local_100,L"BoneNames",1);
    FUN_14949097c(uVar2,&local_70,lVar6,local_100);
    FUN_1446f470e(&local_108,L"Value",1);
    FUN_14688f21c(&local_70,&local_c8,local_108);
    if ((&DAT_14bd1e096)[local_78] == '\x01') {
      local_118 = 0;
      uStack_110 = 0;
      FUN_1406089a0(&local_118,*(undefined4 *)(uStack_c0 + 8),1);
      if (0 < (int)uStack_110) {
        uVar10 = 0;
        do {
          FUN_14688f684(&local_c8,local_d8,uVar10 & 0xffffffff);
          *(undefined8 *)(local_118 + uVar10 * 8) = local_d8[0];
          uVar10 = uVar10 + 1;
        } while ((longlong)uVar10 < (longlong)(int)uStack_110);
      }
      if ((((int)uStack_110 != *(int *)(param_1 + 0x48)) ||
          (cVar3 = FUN_14000b9e1(local_118,*(longlong *)(param_1 + 0x40)), cVar3 == '\0')) &&
         (*(undefined1 *)(param_1 + 0x60) = 0, (longlong *)(param_1 + 0x40) != &local_118)) {
        if (*(longlong *)(param_1 + 0x40) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x40) = local_118;
        local_118 = 0;
        *(int *)(param_1 + 0x48) = (int)uStack_110;
        *(undefined4 *)(param_1 + 0x4c) = uStack_110._4_4_;
        uStack_110 = 0;
      }
      if (local_118 != 0) {
        FUN_1400020a8();
      }
    }
    FUN_1401f9f5c(&local_70);
    uVar2 = *(undefined8 *)(param_1 + 200);
    FUN_1446f470e(&local_120,L"ExpandTowardsRoot",1);
    FUN_14949097c(uVar2,&local_c8,lVar6,local_120);
    FUN_1446f470e(&local_128,L"Value",1);
    FUN_14688ee7c(&local_c8,&local_70,local_128);
    if (((&DAT_14bd1e096)[(byte)uStack_6c] == '\x01') &&
       (iVar4 = CONCAT22(uStack_6e,CONCAT11(bStack_6f,local_70)), *(int *)(param_1 + 0x50) != iVar4)
       ) {
      *(undefined1 *)(param_1 + 0x60) = 0;
      *(int *)(param_1 + 0x50) = iVar4;
    }
    FUN_1401f9f5c(&local_c8);
    uVar2 = *(undefined8 *)(param_1 + 200);
    FUN_1446f470e(&local_130,L"ExpandTowardsLeaf",1);
    FUN_14949097c(uVar2,&local_c8,lVar6,local_130);
    FUN_1446f470e(&local_138,L"Value",1);
    FUN_14688ee7c(&local_c8,&local_70,local_138);
    if (((&DAT_14bd1e096)[(byte)uStack_6c] == '\x01') &&
       (iVar4 = CONCAT22(uStack_6e,CONCAT11(bStack_6f,local_70)), *(int *)(param_1 + 0x54) != iVar4)
       ) {
      *(undefined1 *)(param_1 + 0x60) = 0;
      *(int *)(param_1 + 0x54) = iVar4;
    }
    FUN_1401f9f5c(&local_c8);
    uVar2 = *(undefined8 *)(param_1 + 200);
    FUN_1446f470e(&local_140,L"bDebugDrawIncludedBones",1);
    FUN_14949097c(uVar2,&local_c8,lVar6,local_140);
    FUN_1446f470e(&local_148,L"Value",1);
    FUN_14688eda2(&local_c8,&local_70,local_148);
    if (((&DAT_14bd1e096)[bStack_6f] == '\x01') && (*(char *)(param_1 + 0x58) != local_70)) {
      *(char *)(param_1 + 0x58) = local_70;
    }
    FUN_1401f9f5c();
  }
  iVar4 = *(int *)(param_1 + 0x50);
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  *(int *)(param_1 + 0x50) = iVar4;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x54)) {
    iVar4 = *(int *)(param_1 + 0x54);
  }
  *(int *)(param_1 + 0x54) = iVar4;
  plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x8a8);
  iVar4 = (**(code **)(*plVar9 + 0x90))(plVar9);
  plVar1 = (longlong *)plVar9[8];
  if (*(longlong *)(param_1 + 0x38) == 0) {
LAB_14949312b:
    puVar16 = puVar5 + 3;
    if (*(char *)(param_1 + 0x60) == '\0') {
      *(undefined1 *)(param_1 + 0x60) = 1;
      local_190 = (longlong *)(param_1 + 0x68);
      local_180 = plVar1;
      local_178 = plVar9;
      local_170 = puVar5 + 3;
      local_168 = puVar5;
      local_160 = (longlong)iVar4;
      FUN_1402226aa();
      local_188 = (longlong *)(param_1 + 0xb8);
      iVar4 = *(int *)(param_1 + 0xc4);
      FUN_145c9df52(*(undefined8 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xc0));
      *(undefined4 *)(param_1 + 0xc0) = 0;
      if ((iVar4 < 0) && (*(int *)(param_1 + 0xc4) != 0)) {
        FUN_1494d544a(local_188);
      }
      plVar9 = (longlong *)FUN_144a7954a(*(undefined8 *)(param_1 + 0x30));
      lVar6 = (**(code **)(*plVar9 + 0x310))(plVar9);
      local_c8 = (code *)0x0;
      uStack_c0 = 0;
      FUN_149493936();
      if ((longlong)*(int *)(param_1 + 0x48) != 0) {
        lVar7 = *(longlong *)(param_1 + 0x40);
        lVar15 = (longlong)*(int *)(param_1 + 0x48) * 8 + lVar7;
        do {
          uVar10 = FUN_144a750a0(lVar6);
          local_70 = (char)uVar10;
          bStack_6f = (byte)(uVar10 >> 8);
          uStack_6e = (undefined2)(uVar10 >> 0x10);
          if ((int)uVar10 != -1) {
            iVar4 = 0;
            while( true ) {
              iVar11 = -iVar4;
              if (-iVar4 < 0) {
                iVar11 = iVar4;
              }
              if ((*(int *)(param_1 + 0x50) < iVar11) ||
                 ((local_c8[(longlong)(int)uVar10 * 8 + 4] == (code)0x1 &&
                  (*(int *)(local_c8 + (longlong)(int)uVar10 * 8) <= iVar4)))) break;
              FUN_1447cbafe(local_190,&local_118,&local_70,0);
              lVar14 = (longlong)CONCAT22(uStack_6e,CONCAT11(bStack_6f,local_70));
              *(int *)(local_c8 + lVar14 * 8) = iVar4;
              local_c8[lVar14 * 8 + 4] = (code)0x1;
              iVar11 = CONCAT22(uStack_6e,CONCAT11(bStack_6f,local_70));
              if (((longlong)iVar11 < 0) || (*(int *)(lVar6 + 0x28) <= iVar11)) break;
              iVar4 = iVar4 + -1;
              uVar12 = *(uint *)(*(longlong *)(lVar6 + 0x20) + 8 + (longlong)iVar11 * 0xc);
              uVar10 = (ulonglong)uVar12;
              local_70 = (char)uVar12;
              bStack_6f = (byte)(uVar12 >> 8);
              uStack_6e = (undefined2)(uVar12 >> 0x10);
              if (uVar12 == 0xffffffff) break;
            }
          }
          lVar7 = lVar7 + 8;
        } while (lVar7 != lVar15);
      }
      local_70 = '\0';
      bStack_6f = 0;
      uStack_6e = 0;
      if (0 < *(int *)(lVar6 + 0x28)) {
        iVar4 = 0;
        plVar9 = local_190;
        do {
          if ((((-1 < iVar4) && (lVar7 = (longlong)iVar4, local_c8[lVar7 * 8 + 4] == (code)0x0)) &&
              (lVar15 = (longlong)*(int *)(*(longlong *)(lVar6 + 0x20) + 8 + lVar7 * 0xc),
              lVar15 != -1)) && (local_c8[lVar15 * 8 + 4] == (code)0x1)) {
            iVar4 = *(int *)(local_c8 + lVar15 * 8);
            if (iVar4 < 0) {
              if (-iVar4 < *(int *)(param_1 + 0x50)) {
                iVar4 = iVar4 + -1;
                goto LAB_149493319;
              }
            }
            else if (iVar4 < *(int *)(param_1 + 0x54)) {
              iVar4 = iVar4 + 1;
LAB_149493319:
              *(int *)(local_c8 + lVar7 * 8) = iVar4;
              local_c8[lVar7 * 8 + 4] = (code)0x1;
              FUN_1447cbafe(plVar9,&local_118,&local_70,0);
              plVar9 = local_190;
            }
          }
          iVar4 = CONCAT22(uStack_6e,CONCAT11(bStack_6f,local_70)) + 1;
          local_70 = (char)iVar4;
          bStack_6f = (byte)((uint)iVar4 >> 8);
          uStack_6e = (undefined2)((uint)iVar4 >> 0x10);
        } while (iVar4 < *(int *)(lVar6 + 0x28));
      }
      if (0 < (int)local_180[1]) {
        uVar10 = 0;
        do {
          lVar6 = *(longlong *)(*local_180 + local_160 * 8);
          iVar4 = *(int *)(param_1 + 0xc0);
          *(uint *)(param_1 + 0xc0) = iVar4 + 1U;
          local_158 = uVar10;
          if (*(uint *)(param_1 + 0xc4) < iVar4 + 1U) {
            FUN_1494d59da(local_188,iVar4);
          }
          lVar7 = *local_188;
          puVar5 = (undefined8 *)(lVar7 + (longlong)iVar4 * 0x10);
          *puVar5 = 0;
          puVar5[1] = 0;
          if (0 < *(int *)(lVar6 + 0x18)) {
            plVar9 = (longlong *)(lVar7 + (longlong)iVar4 * 0x10);
            lVar7 = 0;
            local_150 = lVar6;
            do {
              lVar6 = local_150;
              iVar4 = (int)plVar9[1];
              *(uint *)(plVar9 + 1) = iVar4 + 1U;
              if (*(uint *)((longlong)plVar9 + 0xc) < iVar4 + 1U) {
                FUN_1474396d0(plVar9,iVar4);
              }
              plVar1 = (longlong *)(*plVar9 + (longlong)iVar4 * 0x10);
              puVar5 = (undefined8 *)(*plVar9 + (longlong)iVar4 * 0x10);
              *puVar5 = 0;
              puVar5[1] = 0;
              lVar6 = *(longlong *)(lVar6 + 0x10);
              iVar4 = *(int *)(lVar6 + 0x40 + lVar7 * 0xf8);
              local_70 = '\0';
              bStack_6f = 0;
              uStack_6e = 0;
              FUN_146f37e98(plVar1,&local_70,iVar4);
              if (0 < (longlong)iVar4) {
                lVar15 = 0;
                do {
                  if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c)) {
                    lVar14 = *(longlong *)(param_1 + 0xa8);
                    if (*(longlong *)(param_1 + 0xa8) == 0) {
                      lVar14 = param_1 + 0xa0;
                    }
                    uVar12 = (uint)*(ushort *)
                                    (*(longlong *)(lVar6 + lVar7 * 0xf8 + 0x38) + lVar15 * 2);
                    iVar11 = *(int *)(lVar14 + (ulonglong)(*(int *)(param_1 + 0xb0) - 1U & uVar12) *
                                               4);
                    if (iVar11 != -1) {
                      do {
                        if (*(uint *)(*local_190 + (longlong)iVar11 * 0xc) == uVar12) {
                          *(undefined4 *)(*plVar1 + lVar15 * 4) = 1;
                          break;
                        }
                        iVar11 = *(int *)(*local_190 + (longlong)iVar11 * 0xc + 4);
                      } while (iVar11 != -1);
                    }
                  }
                  lVar15 = lVar15 + 1;
                } while (lVar15 != iVar4);
              }
              lVar7 = lVar7 + 1;
            } while (lVar7 < *(int *)(local_150 + 0x18));
          }
          uVar12 = (int)local_158 + 1;
          uVar10 = (ulonglong)uVar12;
        } while ((int)uVar12 < (int)local_180[1]);
      }
      FUN_1494d547a(local_c8,uStack_c0 & 0xffffffff);
      plVar9 = local_178;
      puVar5 = local_168;
      puVar16 = local_170;
      if (local_c8 != (code *)0x0) {
        FUN_1400020a8();
        plVar9 = local_178;
        puVar5 = local_168;
        puVar16 = local_170;
      }
    }
    puVar5[1] = plVar9;
    puVar5[2] = *(undefined8 *)(param_1 + 0x38);
    FUN_1494939ee(puVar16,param_1 + 0xb8);
  }
  else {
    puVar16 = (undefined8 *)(param_1 + 0x38);
    lVar6 = *(longlong *)(*plVar1 + (longlong)iVar4 * 8) + 0x298;
    cVar3 = FUN_14793dad4(lVar6,puVar16);
    if (cVar3 != '\0') {
      local_c8 = (code *)*puVar16;
      uStack_c0 = 0;
      lVar7 = FUN_1433f2764(lVar6);
      if (lVar7 != 0) goto LAB_14949312b;
    }
    cVar3 = FUN_14793dad4(lVar6,puVar16);
    if (cVar3 != '\0') {
      uVar2 = *(undefined8 *)(param_1 + 0x38);
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xb0);
      if (lVar6 == 0) {
        lVar6 = FUN_1448abda6(*(longlong *)(param_1 + 0x30));
      }
      lVar6 = FUN_140a2dd74(lVar6);
      if (lVar6 != 0) {
        local_b8 = (undefined ***)0x0;
        local_a8 = &PTR_LAB_14bcfe370;
        local_a0 = &DAT_14452f20a;
        local_c8 = FUN_149483e0a;
        uVar8 = FUN_144a7954a(*(undefined8 *)(param_1 + 0x30));
        local_e0 = 0;
        local_1a0 = 0xffffffff;
        local_1a8 = &local_c8;
        local_e8 = uVar2;
        FUN_1433f28d2(lVar6,&local_e8,uVar8,param_1);
        if (local_c8 != (code *)0x0) {
          pppuVar13 = local_b8;
          if (local_b8 == (undefined ***)0x0) {
            pppuVar13 = &local_a8;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
    }
  }
LAB_1494930f2:
  if ((local_60 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar5;
}



// FUNCTION 149493936 FUN_149493936 body=182 status=ok
// SIG undefined FUN_149493936(void)

void FUN_149493936(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1[1];
  if (iVar3 < (int)param_2) {
    *(uint *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar3) < param_2 - iVar3) {
      FUN_1494d58b8(param_1,iVar3);
    }
    FUN_1494d5496((longlong)iVar3 * 8 + *param_1,param_2 - iVar3);
    return;
  }
  if (-1 < (int)param_2) {
    iVar2 = iVar3 - param_2;
    if (iVar2 == 0 || iVar3 < (int)param_2) {
      return;
    }
    _Dst = (void *)((ulonglong)param_2 * 8 + *param_1);
    FUN_1494d547a(_Dst,iVar2);
    iVar1 = (int)param_1[1] - iVar3;
    if (iVar1 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar2 * 8),(longlong)iVar1 << 3);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - iVar2;
    FUN_1494d593e(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1494939ee FUN_1494939ee body=95 status=ok
// SIG undefined FUN_1494939ee(void)

undefined8 * FUN_1494939ee(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145c9df52(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1494d5a60(param_1,iVar1);
      FUN_1494d5ac2(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 149493a4e FUN_149493a4e body=207 status=ok
// SIG undefined FUN_149493a4e(void)

bool FUN_149493a4e(longlong param_1,int *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2[1] == 0x30) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
    lVar1 = *(longlong *)(**(longlong **)(*(longlong *)(param_1 + 8) + 0x40) + (longlong)iVar3 * 8);
    if (*(int *)(lVar1 + 0x18) == *param_2) {
      lVar4 = lVar1 + 0x138;
      if (*(longlong *)(lVar1 + 0x2a0) != 0) {
        lVar4 = *(longlong *)(lVar1 + 0x2a0);
      }
      cVar2 = FUN_14793dad4(lVar1 + 0x298,(undefined8 *)(param_1 + 0x10));
      if (cVar2 != '\0') {
        local_38 = *(undefined8 *)(param_1 + 0x10);
        local_30 = 0;
        lVar4 = FUN_1433f2764(lVar1 + 0x298);
      }
      if (lVar4 != 0) {
        bVar5 = *(int *)(param_1 + 0x20) != 0;
        goto LAB_149493afd;
      }
    }
  }
  bVar5 = false;
LAB_149493afd:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149493b1e FUN_149493b1e body=681 status=ok
// SIG undefined FUN_149493b1e(void)

void FUN_149493b1e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong *local_88;
  longlong local_80;
  uint local_78;
  undefined8 local_74;
  undefined8 local_68;
  longlong local_60;
  wchar_t *local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b0 = param_2;
  iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
  local_b8 = (longlong)iVar3;
  lVar5 = *(longlong *)(**(longlong **)(*(longlong *)(param_1 + 8) + 0x40) + local_b8 * 8);
  local_c0 = (longlong *)(param_1 + 0x28);
  uVar2 = *(uint *)(lVar5 + 0x18);
  iVar3 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar3 + uVar2;
  if ((uint)(*(int *)(param_1 + 0x34) - iVar3) < uVar2) {
    FUN_1471a5e98(local_c0);
  }
  memset((void *)((longlong)iVar3 * 8 + *(longlong *)(param_1 + 0x28)),0,(longlong)(int)uVar2 << 3);
  local_88 = (longlong *)(param_1 + 0x38);
  uVar2 = *(uint *)(lVar5 + 0x18);
  iVar3 = *(int *)(param_1 + 0x40);
  *(uint *)(param_1 + 0x40) = iVar3 + uVar2;
  if ((uint)(*(int *)(param_1 + 0x44) - iVar3) < uVar2) {
    FUN_1471b0eda(local_88);
  }
  memset((void *)((longlong)iVar3 * 8 + *local_88),0,(longlong)(int)uVar2 << 3);
  if (0 < *(int *)(lVar5 + 0x18)) {
    local_90 = local_b0 + 0x188;
    lVar1 = local_b0 + 0x70;
    local_a8 = local_b0 + 0x198;
    lVar8 = 0x20;
    local_b8 = local_b8 << 4;
    lVar9 = 0;
    lVar7 = 0;
    local_a0 = lVar5;
    local_98 = param_1;
    do {
      uVar2 = *(uint *)(*(longlong *)(local_a0 + 0x10) + lVar8 * 2);
      local_80 = *(longlong *)(*(longlong *)(local_98 + 0x18) + local_b8);
      local_49 = 0;
      local_58 = L"BoneIsSelectedBuffer";
      local_78 = 4;
      if (DAT_14ca84e48 < 4) {
        local_78 = DAT_14ca84e48;
      }
      local_68 = 0;
      local_78 = local_78 + (local_78 == 0);
      uVar4 = DAT_14ca84e48;
      if (uVar2 < DAT_14ca84e48) {
        uVar4 = uVar2;
      }
      local_74 = CONCAT44(0x10109,uVar4 + (uVar4 == 0));
      local_c8 = &local_49;
      lVar5 = FUN_144738de6(local_90,lVar1,&local_58,&local_78);
      uVar4 = local_78 >> 8;
      local_78 = local_78 & 0xffffff00;
      local_74 = 0xffffffff00000000;
      local_68 = 0;
      if ((*(byte *)(lVar5 + 0x68) & 0x80) != 0) {
        local_78 = CONCAT31((int3)uVar4,0x1c);
      }
      local_60 = lVar5;
      uVar6 = FUN_14475683e(local_a8,lVar1,lVar5 + 8,&local_78);
      *(longlong *)(*local_c0 + lVar7 * 8) = lVar5;
      *(undefined8 *)(*local_88 + lVar7 * 8) = uVar6;
      local_c8 = (undefined1 *)((ulonglong)local_c8 & 0xffffffffffffff00);
      FUN_1447759b4(local_b0,lVar5,*(undefined8 *)(local_80 + lVar9),(longlong)(int)uVar2 << 2);
      lVar7 = lVar7 + 1;
      lVar9 = lVar9 + 0x10;
      lVar8 = lVar8 + 0x7c;
    } while (lVar7 < *(int *)(local_a0 + 0x18));
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149493dc8 FUN_149493dc8 body=431 status=ok
// SIG undefined FUN_149493dc8(void)

void FUN_149493dc8(longlong param_1,int *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  uint *puVar4;
  char cVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 auStack_a8 [44];
  int local_7c;
  longlong local_78;
  longlong local_70;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_7c = (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
  local_78 = *(longlong *)
              (**(longlong **)(*(longlong *)(param_1 + 8) + 0x40) + (longlong)local_7c * 8);
  local_70 = param_1;
  FUN_149493f78(&local_68,*(undefined8 *)(param_2 + 2));
  if (0 < *param_2) {
    lVar2 = local_78 + 0x138;
    lVar3 = local_78 + 0x298;
    puVar1 = (undefined8 *)(local_70 + 0x10);
    uVar14 = 0;
    do {
      lVar9 = FUN_147d1cbd0(*(undefined8 *)(local_70 + 8),local_7c,uVar14 & 0xffffffff,0);
      lVar10 = *(longlong *)(local_78 + 0x2a0);
      if (*(longlong *)(local_78 + 0x2a0) == 0) {
        lVar10 = lVar2;
      }
      cVar7 = FUN_14793dad4(lVar3);
      if (cVar7 != '\0') {
        local_58 = *puVar1;
        local_50 = 0;
        lVar10 = FUN_1433f2764(lVar3);
      }
      lVar6 = *(longlong *)(lVar10 + 0x18);
      iVar8 = FUN_144b26f16();
      if (iVar8 == 1) {
        lVar12 = *(longlong *)(lVar10 + 0x60);
      }
      else {
        lVar12 = 0;
      }
      uVar11 = local_68;
      if (lVar12 == 0) {
        uVar11 = 0;
      }
      uVar13 = local_68;
      if (iVar8 == 1) {
        uVar13 = uVar11;
      }
      if (lVar6 == 0) {
        uVar13 = 0;
      }
      if (lVar9 == 0) {
        uVar13 = 0;
      }
      cVar7 = *(char *)(lVar10 + 0x28);
      cVar5 = *(char *)(lVar10 + 0x29);
      puVar4 = (uint *)(*(longlong *)(param_2 + 4) + uVar14 * 4);
      *puVar4 = *puVar4 | uVar13;
      uVar11 = 0;
      if (iVar8 == 1) {
        uVar11 = local_64;
      }
      puVar4 = (uint *)(*(longlong *)(param_2 + 4) + uVar14 * 4);
      *puVar4 = *puVar4 | uVar11;
      uVar11 = 0;
      if (cVar7 != '\0') {
        uVar11 = local_60;
      }
      puVar4 = (uint *)(*(longlong *)(param_2 + 4) + uVar14 * 4);
      *puVar4 = *puVar4 | uVar11;
      uVar11 = 0;
      if (cVar5 != '\0') {
        uVar11 = local_5c;
      }
      puVar4 = (uint *)(*(longlong *)(param_2 + 4) + uVar14 * 4);
      *puVar4 = *puVar4 | uVar11;
      uVar14 = uVar14 + 1;
    } while ((longlong)uVar14 < (longlong)*param_2);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149493f78 FUN_149493f78 body=1115 status=ok
// SIG undefined FUN_149493f78(void)

undefined8 * FUN_149493f78(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc1cf50) && (FUN_144b3d300(&DAT_14cc1cf50), DAT_14cc1cf50 == -1)) {
    FUN_140056680(&DAT_14cc1cf40,L"ENABLE_DEFORMER_BONES");
    atexit((_func_5014 *)&LAB_14452e94d);
    _Init_thread_footer(&DAT_14cc1cf50);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc1cf58) && (FUN_144b3d300(&DAT_14cc1cf58), DAT_14cc1cf58 == -1)) {
    puVar3 = DAT_14cc1cf40;
    if (DAT_14cc1cf48 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    iVar1 = DAT_14cc1cf48 + -1;
    if (DAT_14cc1cf48 == 0) {
      iVar1 = 0;
    }
    DAT_14cc1cf54 = FUN_144a49b4a(iVar1,puVar3);
    _Init_thread_footer(&DAT_14cc1cf58);
  }
  uVar2 = FUN_149457ca6(param_2,&DAT_14cc1cf40,DAT_14cc1cf54,1);
  *(undefined4 *)param_1 = uVar2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc1cf70) && (FUN_144b3d300(&DAT_14cc1cf70), DAT_14cc1cf70 == -1)) {
    FUN_140056680(&DAT_14cc1cf60,L"GPUSKIN_UNLIMITED_BONE_INFLUENCE");
    atexit((_func_5014 *)&LAB_14452e95e);
    _Init_thread_footer(&DAT_14cc1cf70);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc1cf78) && (FUN_144b3d300(&DAT_14cc1cf78), DAT_14cc1cf78 == -1)) {
    puVar3 = DAT_14cc1cf60;
    if (DAT_14cc1cf68 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    iVar1 = DAT_14cc1cf68 + -1;
    if (DAT_14cc1cf68 == 0) {
      iVar1 = 0;
    }
    DAT_14cc1cf74 = FUN_144a49b4a(iVar1,puVar3);
    _Init_thread_footer(&DAT_14cc1cf78);
  }
  uVar2 = FUN_149457ca6(param_2,&DAT_14cc1cf60,DAT_14cc1cf74,1);
  *(undefined4 *)((longlong)param_1 + 4) = uVar2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc1cf90) && (FUN_144b3d300(&DAT_14cc1cf90), DAT_14cc1cf90 == -1)) {
    FUN_140056680(&DAT_14cc1cf80,L"GPUSKIN_BONE_INDEX_UINT16");
    atexit((_func_5014 *)&LAB_14452e96f);
    _Init_thread_footer(&DAT_14cc1cf90);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc1cf98) && (FUN_144b3d300(&DAT_14cc1cf98), DAT_14cc1cf98 == -1)) {
    puVar3 = DAT_14cc1cf80;
    if (DAT_14cc1cf88 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    iVar1 = DAT_14cc1cf88 + -1;
    if (DAT_14cc1cf88 == 0) {
      iVar1 = 0;
    }
    DAT_14cc1cf94 = FUN_144a49b4a(iVar1,puVar3);
    _Init_thread_footer(&DAT_14cc1cf98);
  }
  uVar2 = FUN_149457ca6(param_2,&DAT_14cc1cf80,DAT_14cc1cf94,1);
  *(undefined4 *)(param_1 + 1) = uVar2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc1cfb0) && (FUN_144b3d300(&DAT_14cc1cfb0), DAT_14cc1cfb0 == -1)) {
    FUN_140056680(&DAT_14cc1cfa0,L"GPUSKIN_BONE_WEIGHTS_UINT16");
    atexit((_func_5014 *)&LAB_14452e980);
    _Init_thread_footer(&DAT_14cc1cfb0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc1cfb8) && (FUN_144b3d300(&DAT_14cc1cfb8), DAT_14cc1cfb8 == -1)) {
    puVar3 = DAT_14cc1cfa0;
    if (DAT_14cc1cfa8 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    iVar1 = DAT_14cc1cfa8 + -1;
    if (DAT_14cc1cfa8 == 0) {
      iVar1 = 0;
    }
    DAT_14cc1cfb4 = FUN_144a49b4a(iVar1,puVar3);
    _Init_thread_footer(&DAT_14cc1cfb8);
  }
  uVar2 = FUN_149457ca6(param_2,&DAT_14cc1cfa0,DAT_14cc1cfb4,1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  return param_1;
}



// FUNCTION 1494943d4 FUN_1494943d4 body=345 status=ok
// SIG undefined FUN_1494943d4(void)

void FUN_1494943d4(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 *puVar11;
  
  iVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
  if (0 < *(int *)(param_2 + 4)) {
    lVar2 = *(longlong *)(DAT_14ca8c040 + 0x18);
    puVar11 = (undefined4 *)((longlong)*(int *)(param_2 + 0x10) + *(longlong *)(param_2 + 0x18));
    iVar1 = *(int *)(param_2 + 0x14);
    lVar3 = *(longlong *)(**(longlong **)(*(longlong *)(param_1 + 8) + 0x40) + (longlong)iVar5 * 8);
    lVar9 = 2;
    lVar10 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + 0x10);
      lVar7 = *(longlong *)(lVar3 + 0x2a0);
      if (*(longlong *)(lVar3 + 0x2a0) == 0) {
        lVar7 = lVar3 + 0x138;
      }
      lVar8 = *(longlong *)(lVar7 + 0x18);
      iVar5 = FUN_144b26f16(lVar7);
      if (iVar5 == 1) {
        lVar6 = *(longlong *)(lVar7 + 0x60);
      }
      else {
        lVar6 = 0;
      }
      *puVar11 = *(undefined4 *)(lVar4 + 0x38 + lVar9 * 8);
      puVar11[1] = *(undefined4 *)(lVar4 + lVar9 * 8);
      iVar5 = *(int *)(lVar7 + 0x24);
      puVar11[2] = iVar5;
      puVar11[3] = iVar5 * *(int *)(lVar4 + lVar9 * 8) *
                   ((uint)*(byte *)(lVar7 + 0x28) + (uint)*(byte *)(lVar7 + 0x29) + 2) >> 2;
      puVar11[4] = ((uint)*(byte *)(lVar7 + 0x28) + (uint)*(byte *)(lVar7 + 0x29) + 2) *
                   *(int *)(lVar7 + 0x24);
      puVar11[5] = *(ushort *)(lVar7 + 0x28) + 0x101;
      if (lVar8 == 0) {
        lVar8 = lVar2;
      }
      *(longlong *)(puVar11 + 6) = lVar8;
      if (lVar6 == 0) {
        lVar6 = lVar2;
      }
      *(longlong *)(puVar11 + 8) = lVar6;
      *(undefined8 *)(puVar11 + 10) = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + lVar10 * 8);
      lVar10 = lVar10 + 1;
      puVar11 = (undefined4 *)((longlong)puVar11 + (longlong)iVar1);
      lVar9 = lVar9 + 0x1f;
    } while (lVar10 < *(int *)(param_2 + 4));
  }
  return;
}



// FUNCTION 149494532 FUN_149494532 body=318 status=ok
// SIG undefined FUN_149494532(void)

void FUN_149494532(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_a8 [40];
  longlong local_80 [2];
  undefined1 local_70 [16];
  undefined1 local_60 [32];
  longlong local_40;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_30 = *param_2;
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_149494672(param_1,&local_30);
  if (*(longlong *)(param_1 + 0x130) != 0) {
    lVar2 = FUN_145ba439a();
    lVar4 = *(longlong *)(param_1 + 0x130);
    if (lVar4 != 0) {
      if ((((lVar2 != 0) && (lVar1 = *(longlong *)(lVar4 + 0x10), lVar1 != 0)) &&
          (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30)) {
        FUN_140f4f540();
        puVar3 = (undefined8 *)FUN_144a64e42();
        FUN_140f4f5a6(&DAT_14cc1c7d8,local_70,*puVar3);
        FUN_140e6511c(local_60,local_70);
        FUN_140056680(local_80,L"EmptyName");
        FUN_14946b9a8(lVar4,local_80,0,local_60);
        if (local_80[0] != 0) {
          FUN_1400020a8();
        }
        if (local_40 != 0) {
          FUN_1400020a8();
        }
        lVar4 = *(longlong *)(param_1 + 0x130);
      }
      goto LAB_149494589;
    }
  }
  lVar4 = 0;
LAB_149494589:
  FUN_144757f48(lVar4,8);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149494672 FUN_149494672 body=178 status=ok
// SIG undefined FUN_149494672(void)

void FUN_149494672(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *param_2;
  if (((lVar3 == 0) || (lVar2 = FUN_140fc6edc(), lVar2 == 0)) ||
     (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) {
    lVar4 = 0;
  }
  else {
    lVar1 = *param_2;
    lVar4 = 0;
    if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30) {
      lVar4 = lVar1;
    }
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
      lVar4 = lVar1;
    }
  }
  *(longlong *)(param_1 + 0x128) = lVar4;
  lVar3 = FUN_1494a0283(param_1,lVar4);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  *(longlong *)(param_1 + 0x130) = lVar3;
  FUN_144757f48(lVar3,8);
                    /* WARNING: Could not recover jumptable at 0x0001494946e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x130) + 0x338))();
  return;
}



// FUNCTION 149494724 FUN_149494724 body=125 status=ok
// SIG undefined FUN_149494724(void)

void FUN_149494724(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  (**(code **)(**(longlong **)(param_1 + 0x130) + 0x368))();
  if (*(longlong *)(param_1 + 0x130) != 0) {
    lVar3 = FUN_145ba439a();
    plVar1 = *(longlong **)(param_1 + 0x130);
    if (plVar1 != (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
      if ((lVar3 == 0) || (lVar2 = plVar1[2], lVar2 == 0)) goto LAB_14949474c;
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        plVar4 = (longlong *)0x0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30) {
          plVar4 = plVar1;
        }
        goto LAB_14949474c;
      }
    }
  }
  plVar4 = (longlong *)0x0;
LAB_14949474c:
                    /* WARNING: Could not recover jumptable at 0x00014949475f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x368))(plVar4,param_2);
  return;
}



// FUNCTION 1494947ba FUN_1494947ba body=332 status=ok
// SIG undefined FUN_1494947ba(void)

longlong * FUN_1494947ba(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140f4f540();
  FUN_140f4f5a6(&DAT_14cc1c7d8,param_2,*param_1);
  if (*param_2 != 0) goto LAB_149494804;
  lVar5 = FUN_144a6654a(param_1 + 1);
  if (lVar5 == 0) goto LAB_149494804;
  lVar5 = FUN_1401fe4bc(param_1 + 1);
  if (lVar5 == 0) {
LAB_149494856:
    lVar5 = 0;
  }
  else {
    lVar6 = FUN_1446f4bba();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        != lVar6 + 0x30)) goto LAB_149494856;
  }
  cVar4 = FUN_1494a9d2c(&DAT_14cc1c7d8,lVar5);
  if (cVar4 != '\0') {
    FUN_140f4f5a6(&DAT_14cc1c7d8,&local_30,*param_1);
    plVar1 = local_28;
    *param_2 = local_30;
    local_30 = 0;
    plVar3 = (longlong *)param_2[1];
    if (local_28 != plVar3) {
      local_28 = (longlong *)0x0;
      param_2[1] = (longlong)plVar1;
      if (plVar3 == (longlong *)0x0) goto LAB_149494804;
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
    plVar3 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
LAB_149494804:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149494908 FUN_149494908 body=612 status=ok
// SIG undefined FUN_149494908(void)

void FUN_149494908(undefined8 param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined8 *local_90;
  longlong *local_88;
  longlong local_80;
  undefined8 *local_78;
  longlong *plStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_80 = param_2;
  if (param_2 != 0) {
    FUN_1494947ba(param_3,&local_78);
    FUN_1494947ba(param_2 + 0x70,&local_90);
    puVar4 = local_78;
    puVar3 = local_90;
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_88 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar1 = (int *)((longlong)local_88 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_88 + 0x10))(local_88);
        }
      }
    }
    plVar6 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_70 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if (puVar3 != puVar4) {
      puVar4 = (undefined8 *)FUN_14001cc68(0x28,0x10);
      local_78 = (undefined8 *)0x0;
      plStack_70 = (longlong *)0x0;
      FUN_14945e0fa(puVar4);
      *puVar4 = &PTR_FUN_14bcfe1b0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      FUN_1494603c2(puVar4,L"Set Pin Type");
      FUN_1494e7262(local_80,&local_78);
      puVar3 = local_78;
      lVar8 = (longlong)(int)plStack_70;
      if (lVar8 != 0) {
        lVar7 = 0;
        do {
          local_90 = *(undefined8 **)((longlong)puVar3 + lVar7);
          if (*(char *)(local_80 + 0x29) == '\x01') {
            FUN_1494acaf2(puVar4,local_a0,&local_90,&local_80);
            plVar6 = local_98;
          }
          else {
            FUN_1494acaf2(puVar4,local_b0,&local_80,&local_90);
            plVar6 = local_a8;
          }
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))();
            }
          }
          lVar7 = lVar7 + 8;
        } while (lVar8 * 8 != lVar7);
      }
      if (local_78 != (undefined8 *)0x0) {
        FUN_1400020a8(local_78);
      }
      FUN_1494ad282(puVar4,local_c0,&local_80,param_3);
      if (local_b8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_b8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_b8 + 0x10))();
        }
      }
      uVar5 = FUN_1494bd5e0(param_1);
      local_78 = puVar4;
      plStack_70 = (longlong *)FUN_14001cc68(0x18,0x10);
      plStack_70[1] = (longlong)&DAT_100000001;
      *plStack_70 = (longlong)&PTR_LAB_14bcfe3d0;
      plStack_70[2] = (longlong)puVar4;
      FUN_1494a7e7c(uVar5,&local_78);
    }
  }
  if (*(longlong *)(param_3 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149494b6e FUN_149494b6e body=92 status=ok
// SIG undefined FUN_149494b6e(void)

void FUN_149494b6e(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_10 = param_3;
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x18) != param_3)) {
    uVar1 = FUN_1494bd5e0();
    FUN_1494bea14(uVar1,&local_18,&local_10);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149494bcc FUN_149494bcc body=121 status=ok
// SIG undefined FUN_149494bcc(void)

longlong * FUN_149494bcc(longlong param_1,longlong *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x50);
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar5);
      if (*(char *)(lVar4 + 0x29) == param_3) {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_149482de0(param_2,iVar2);
        }
        *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar4;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return param_2;
}



// FUNCTION 149494c46 FUN_149494c46 body=57 status=ok
// SIG undefined FUN_149494c46(void)

longlong FUN_149494c46(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar2 = FUN_141155906();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 149494c80 FUN_149494c80 body=495 status=ok
// SIG undefined FUN_149494c80(void)

undefined4 FUN_149494c80(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  longlong local_88;
  int local_80;
  undefined8 *local_78;
  undefined8 *puStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_3 == 0 || param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    cVar2 = FUN_1494e72da(param_2,param_3,0);
    if (cVar2 != '\0') {
      lVar7 = param_2;
      if (*(char *)(param_2 + 0x29) == '\x01') {
        lVar7 = param_3;
        param_3 = param_2;
      }
      FUN_1494cb946(param_1,&local_88,param_3);
      puVar4 = (undefined8 *)FUN_14001cc68(0x28,0x10);
      local_78 = (undefined8 *)0x0;
      puStack_70 = (undefined8 *)0x0;
      FUN_14945e0fa(puVar4);
      lVar5 = local_88;
      *puVar4 = &PTR_FUN_14bcfe1b0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      if ((longlong)local_80 != 0) {
        lVar8 = 0;
        do {
          FUN_1494cb9ce(puVar4,local_98,
                        (longlong)*(int *)(lVar5 + lVar8) * 8 + *(longlong *)(param_1 + 0x48));
          if (local_90 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_90 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_90 + 0x10))();
            }
          }
          lVar8 = lVar8 + 4;
        } while ((longlong)local_80 * 4 != lVar8);
      }
      lVar5 = FUN_14001cc68(0x40,0x10);
      FUN_14946237e(lVar5,lVar7,param_3,0);
      FUN_144a787a6(puVar4 + 1,lVar5 + 8);
      FUN_14945e160(puVar4,local_a8,lVar5);
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_a0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_a0 + 0x10))();
        }
      }
      uVar6 = FUN_1494c9ad6(param_1);
      local_78 = puVar4;
      puStack_70 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      puStack_70[1] = &DAT_100000001;
      *puStack_70 = &PTR_LAB_14bcfe3d0;
      puStack_70[2] = puVar4;
      uVar3 = FUN_1494a7e7c(uVar6,&local_78);
      if (local_88 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 149494e74 FUN_149494e74 body=393 status=ok
// SIG undefined FUN_149494e74(void)

void FUN_149494e74(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  (**(code **)(*param_1 + 0xf8))(param_1,param_2 == 2);
  lVar3 = param_1[4];
  if (lVar3 == 0) {
    return;
  }
  lVar1 = FUN_141155906();
  lVar3 = *(longlong *)(lVar3 + 0x10);
  if (*(int *)(lVar3 + 0x38) < *(int *)(lVar1 + 0x38)) {
    return;
  }
  if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30) {
    return;
  }
  lVar3 = param_1[4];
  if (lVar3 == 0) {
LAB_149494ee7:
    lVar3 = 0;
  }
  else {
    lVar1 = FUN_141155906();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        != lVar1 + 0x30)) goto LAB_149494ee7;
  }
  plVar2 = (longlong *)(**(code **)(*(longlong *)(lVar3 + 0x28) + 0x18))(lVar3 + 0x28);
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
  if (lVar3 == 0) {
    return;
  }
  lVar1 = FUN_1458f36a4();
  if (*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) {
    return;
  }
  if (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30) {
    return;
  }
  lVar1 = param_1[0x23];
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x20) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(longlong *)(*(longlong *)(lVar1 + 0x20) + 0x20);
    }
    if (lVar4 == lVar3) {
      return;
    }
    lVar3 = (**(code **)(*(longlong *)(lVar3 + 0x30) + 0x40))
                      (lVar3 + 0x30,*(undefined8 *)(lVar1 + 0x18));
    if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar3);
    }
    param_1[0x23] = lVar3;
    return;
  }
  if (param_1[0x24] == 0) {
    return;
  }
  lVar3 = (**(code **)(*(longlong *)(lVar3 + 0x30) + 0x40))(lVar3 + 0x30);
  if ((lVar3 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[0x23] = lVar3;
    if (lVar3 == 0) goto LAB_149494fd0;
  }
  else {
    FUN_1456cec3c(lVar3);
    param_1[0x23] = lVar3;
  }
  (**(code **)(*param_1 + 0x2c0))(param_1);
LAB_149494fd0:
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  return;
}



// FUNCTION 149494ffe FUN_149494ffe body=317 status=ok
// SIG undefined FUN_149494ffe(void)

void FUN_149494ffe(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_60;
  int local_58;
  undefined1 local_50 [16];
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 == 0) goto LAB_1494950e2;
  lVar2 = *(longlong *)(lVar1 + 0x30);
  if (lVar2 == 0) {
LAB_14949503e:
    uVar4 = 0;
  }
  else {
    lVar3 = FUN_14590aaa4();
    if (((lVar3 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
        lVar3 + 0x30)) goto LAB_14949503e;
    uVar4 = *(undefined8 *)(lVar1 + 0x30);
  }
  FUN_1414d7078(uVar4,local_50);
  FUN_140ba791a(local_50,&local_40);
  local_68 = &DAT_149dfb77a;
  if (local_38 != 0) {
    local_68 = local_40;
  }
  FUN_1400021e4(*(longlong *)(param_1 + 0x118) + 0x28,&local_60);
  puVar5 = &DAT_149dfb77a;
  if (local_58 != 0) {
    puVar5 = local_60;
  }
  FUN_140047918(param_2,
                L"%sCustomProperties ComponentSourceBinding BindingName=%s ComponentType=%s\n",
                L"                                                                                                                                                                                                                                                               "
                + (0xff - (longlong)param_3),puVar5);
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1494950e2:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14949513c FUN_14949513c body=346 status=ok
// SIG undefined FUN_14949513c(void)

void FUN_14949513c(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = param_2;
  cVar1 = FUN_140988638(&local_48,L"ComponentSourceBinding",1);
  if (cVar1 != '\0') {
    local_50 = 0;
    cVar1 = FUN_140e134ac(local_48,L"BindingName=");
    if (cVar1 != '\0') {
      local_68 = 0;
      uStack_60 = 0;
      local_88 = 0;
      cVar1 = FUN_14063337c(local_48,L"ComponentType=",&local_68,1);
      if (cVar1 != '\0') {
        local_78 = 0;
        uStack_70 = 0;
        local_40 = local_68;
        local_38 = (int)uStack_60 + -1;
        if ((int)uStack_60 == 0) {
          local_38 = 0;
        }
        FUN_1468fe3e4(&local_78);
        uVar2 = FUN_144a797b2();
        lVar3 = FUN_140be8491(uVar2,&local_78,0);
        if (lVar3 != 0) {
          lVar4 = FUN_144a797b2();
          if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
            *(undefined8 *)(param_1 + 0x120) = local_50;
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(lVar3);
            }
            *(longlong *)(param_1 + 0x128) = lVar3;
          }
        }
      }
      if (local_68 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149495298 FUN_149495298 body=118 status=ok
// SIG undefined FUN_149495298(void)

void FUN_149495298(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x118) = param_2;
  FUN_145715fae(local_30,param_2 + 0x28);
  FUN_1458d0f32(param_1,local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149495310 FUN_149495310 body=120 status=ok
// SIG undefined FUN_149495310(void)

undefined8 * FUN_149495310(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc1c410) {
    FUN_144b3d300(&DAT_14cc1c410);
    if (DAT_14cc1c410 == -1) {
      FUN_1446ddc76(&DAT_14cc1c408,"Component",1);
      _Init_thread_footer(&DAT_14cc1c410);
    }
  }
  *param_2 = DAT_14cc1c408;
  return param_2;
}



// FUNCTION 149495388 FUN_149495388 body=468 status=ok
// SIG undefined FUN_149495388(void)

void FUN_149495388(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  void *_Src;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_138 [32];
  undefined4 *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  void *local_90;
  int local_88;
  undefined4 local_84;
  undefined1 local_80 [16];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  void *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_140f4f540();
  uVar4 = FUN_1411c55ba();
  FUN_14949555e(&DAT_14cc1c7d8,local_80,uVar4);
  FUN_140e6511c(&local_70,local_80);
  cVar3 = FUN_14945fc10(&local_70);
  if (((cVar3 != '\0') && (lVar1 = *(longlong *)(param_1 + 0x118), lVar1 != 0)) &&
     (lVar2 = *(longlong *)(lVar1 + 0x30), lVar2 != 0)) {
    lVar5 = FUN_14590aaa4();
    _Src = local_50;
    if (((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       ((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
         lVar5 + 0x30 && (*(longlong *)(lVar1 + 0x30) != 0)))) {
      local_b0 = local_70;
      uStack_ac = uStack_6c;
      uStack_a8 = uStack_68;
      uStack_a4 = uStack_64;
      local_a0 = local_60;
      uStack_9c = uStack_5c;
      uStack_98 = uStack_58;
      uStack_94 = uStack_54;
      local_90 = (void *)0x0;
      local_88 = local_48;
      if ((longlong)local_48 == 0) {
        local_84 = 0;
      }
      else {
        FUN_1446dd670(&local_90,local_48,0);
        memcpy(local_90,_Src,(longlong)local_48 * 2);
      }
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      FUN_140e6507e(&local_f8);
      plVar6 = (longlong *)FUN_14948712a(*(undefined8 *)(param_1 + 0x118));
      (**(code **)(*plVar6 + 0x2a8))(plVar6,&local_100);
      local_110 = 0;
      uStack_108 = 0;
      local_118 = &local_b0;
      FUN_149495630(param_1,local_100,2,&local_f8);
      FUN_14121c54c(&local_f8);
    }
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14949555e FUN_14949555e body=208 status=ok
// SIG undefined FUN_14949555e(void)

undefined8 FUN_14949555e(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *(undefined2 **)(param_3 + 0x18);
  FUN_1400021e4(&local_40,&local_50);
  puVar1 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar1 = local_50;
  }
  FUN_140002266(&local_40,&DAT_14bd1047e,puVar1);
  puVar1 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar1 = local_40;
  }
  FUN_1446f470e(&local_30,puVar1,1);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140f4f5a6(param_1,param_2,local_30);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149495630 FUN_149495630 body=309 status=ok
// SIG undefined FUN_149495630(void)

undefined8
FUN_149495630(longlong param_1,undefined8 param_2,undefined4 param_3,int *param_4,longlong param_5,
             undefined8 param_6,longlong param_7)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [64];
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = param_7;
  if (param_7 == 0) {
    lVar2 = param_1;
  }
  uVar1 = FUN_1494be28e(lVar2);
  FUN_14945f130(local_78,param_5);
  FUN_149482cae(local_b8,param_4);
  FUN_1494e76f4(uVar1,param_3,local_b8,local_78);
  if (param_4[4] == 0 && *param_4 == 0) {
    lVar2 = FUN_149466e92(param_5);
    if ((*(byte *)(lVar2 + 0x49) & 2) != 0) {
      lVar2 = FUN_149466e92(param_5);
      lVar2 = FUN_14479d2ce(lVar2 + 0x2c);
      if (lVar2 != 0) {
        lVar3 = FUN_1446f4bba();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          FUN_1494be0c8(param_1,lVar2,uVar1);
        }
      }
    }
  }
  FUN_1494be346(param_1,uVar1,param_7,param_6);
  if (*(longlong *)(param_5 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149495766 FUN_149495766 body=567 status=ok
// SIG undefined FUN_149495766(void)

void FUN_149495766(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = param_3;
  if (*(longlong *)(param_1 + 0x120) == 0) goto LAB_149495946;
  plVar3 = (longlong *)(**(code **)(*(longlong *)(param_2 + 0x28) + 0x18))(param_2 + 0x28);
  if ((plVar3 == (longlong *)0x0) || (lVar4 = (**(code **)(*plVar3 + 8))(plVar3), lVar4 == 0)) {
LAB_1494957c0:
    lVar4 = 0;
  }
  else {
    lVar10 = FUN_1458f36a4();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar10 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
        != lVar10 + 0x30)) goto LAB_1494957c0;
  }
  plVar3 = (longlong *)(param_1 + 0x120);
  lVar10 = (longlong)*(int *)(*(longlong *)(lVar4 + 0x120) + 0x30);
  if (lVar10 != 0) {
    lVar2 = *(longlong *)(*(longlong *)(lVar4 + 0x120) + 0x28);
    lVar9 = 0;
    do {
      lVar7 = *(longlong *)(lVar2 + lVar9);
      if (*(longlong *)(lVar7 + 0x28) == *plVar3) {
        lVar5 = *(longlong *)(lVar7 + 0x30);
        if ((((lVar5 == 0) || (lVar6 = FUN_14590aaa4(), lVar6 == 0)) ||
            (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
            lVar6 + 0x30)) {
          lVar7 = 0;
        }
        else {
          lVar7 = *(longlong *)(lVar7 + 0x30);
        }
        lVar5 = *(longlong *)(param_1 + 0x128);
        if (((lVar5 == 0) || (lVar6 = FUN_14590aaa4(), lVar6 == 0)) ||
           ((*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38) ||
            (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
             lVar6 + 0x30)))) {
          lVar5 = 0;
        }
        else {
          lVar5 = *(longlong *)(param_1 + 0x128);
        }
        if (lVar7 == lVar5) goto LAB_149495946;
      }
      lVar9 = lVar9 + 8;
    } while (lVar10 * 8 != lVar9);
  }
  do {
    lVar10 = (longlong)*(int *)(*(longlong *)(lVar4 + 0x120) + 0x30);
    if (lVar10 == 0) break;
    lVar2 = *(longlong *)(*(longlong *)(lVar4 + 0x120) + 0x28);
    lVar9 = 0;
    bVar8 = false;
    do {
      if (*(longlong *)(*(longlong *)(lVar2 + lVar9) + 0x28) == *plVar3) {
        *(int *)(param_1 + 0x124) = (int)((ulonglong)*plVar3 >> 0x20) + 1;
        bVar8 = true;
      }
      lVar9 = lVar9 + 8;
    } while (lVar10 * 8 != lVar9);
  } while (bVar8);
  lVar4 = *(longlong *)(param_1 + 0x128);
  if (((lVar4 == 0) || (lVar10 = FUN_14590aaa4(), lVar10 == 0)) ||
     ((*(int *)(lVar4 + 0x38) < *(int *)(lVar10 + 0x38) ||
      (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
       lVar10 + 0x30)))) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x128);
  }
  local_60 = *(longlong *)(lVar4 + 0x110);
  if (local_60 == 0) {
    FUN_140aa6c08(lVar4);
    local_60 = *(longlong *)(lVar4 + 0x110);
  }
  FUN_14949599e(local_68,local_58,&local_60,plVar3);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_50 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_50 + 0x10))();
    }
  }
LAB_149495946:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14949599e FUN_14949599e body=242 status=ok
// SIG undefined FUN_14949599e(void)

longlong * FUN_14949599e(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)FUN_14001cc68(0x40,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14bd1d540;
  plVar1 = plVar6 + 2;
  FUN_14945e38c(plVar1,*param_3,*param_4);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar6 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  iVar4 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar4 + 1U) {
    FUN_14947b622((longlong *)(param_1 + 0x18),iVar4);
  }
  lVar5 = *(longlong *)(param_1 + 0x18);
  *(longlong **)(lVar5 + (longlong)iVar4 * 0x10) = plVar1;
  *(longlong **)(lVar5 + 8 + (longlong)iVar4 * 0x10) = plVar6;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  return param_2;
}



// FUNCTION 149495a94 FUN_149495a94 body=2496 status=ok
// SIG undefined FUN_149495a94(void)

longlong *
FUN_149495a94(longlong *param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
             undefined8 param_5,undefined8 param_6,longlong param_7,longlong *param_8,
             longlong *param_9)

{
  void **ppvVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *_Src;
  wchar_t *pwVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_218 [32];
  longlong *local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  longlong *local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  void *local_198;
  ulonglong uStack_190;
  longlong local_188;
  ulonglong uStack_180;
  longlong *local_170;
  undefined4 local_168;
  wchar_t *local_160;
  longlong local_158;
  undefined1 *puStack_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  wchar_t *local_130;
  undefined8 local_128;
  undefined1 *local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  longlong *local_108;
  int local_100;
  int local_d4;
  longlong local_c8;
  undefined4 local_c0;
  wchar_t local_b8 [8];
  undefined1 local_a8 [16];
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_160 = local_b8;
  local_98 = 0;
  local_90 = 0;
  local_b8[0] = L'\0';
  local_b8[1] = L'\0';
  local_b8[2] = L'\0';
  local_b8[3] = L'\0';
  local_b8[4] = L'\0';
  local_b8[5] = L'\0';
  local_b8[6] = L'\0';
  local_b8[7] = L'\0';
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_1e0 = param_4;
  local_1d0 = param_2;
  local_1c8 = param_1;
  local_1c0 = param_3;
  if ((longlong)(int)param_1[-0x16] != 0) {
    plVar11 = (longlong *)param_1[-0x17];
    plVar10 = plVar11 + (int)param_1[-0x16];
    do {
      lVar15 = *plVar11;
      if (*(char *)(lVar15 + 0x28) == '\x01') {
        iVar13 = *(int *)(lVar15 + 0xa8);
        if ((longlong)iVar13 != 0) {
          lVar15 = *(longlong *)(lVar15 + 0xa0);
          lVar14 = 0;
          do {
            FUN_144528dba(&local_160,&local_108,*(undefined8 *)(lVar15 + lVar14));
            if (local_108 != (longlong *)0x0) goto LAB_149495d7a;
            lVar14 = lVar14 + 8;
          } while ((longlong)iVar13 * 8 != lVar14);
        }
      }
      else {
        FUN_144528dba(&local_160,&local_108);
        if (local_108 != (longlong *)0x0) {
LAB_149495d7a:
          plVar11 = local_108;
          (**(code **)(*local_108 + 8))(local_108);
          plVar10 = local_1d0;
          *local_1d0 = (longlong)plVar11;
          (**(code **)(*plVar11 + 8))(plVar11);
          *(int *)(plVar10 + 1) = local_100;
          *(undefined1 *)(plVar10 + 2) = 1;
          (**(code **)(*plVar11 + 0x10))(plVar11);
          if (local_108 != (longlong *)0x0) {
            (**(code **)(*local_108 + 0x10))();
          }
          goto LAB_149495dc1;
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar10);
  }
  plVar10 = local_1c8;
  uVar9 = (**(code **)(*local_1c8 + 0x20))(local_1c8);
  FUN_1494e6b56(uVar9,&local_108,local_1e0);
  if (local_100 - local_d4 == 1) {
    local_1d8 = plVar10 + -0x21;
    local_1e0 = (longlong *)FUN_149496455(local_1c0);
    local_188 = 0;
    uStack_180 = 0;
    if ((longlong)(int)plVar10[-0x16] != 0) {
      plVar11 = (longlong *)plVar10[-0x17];
      plVar10 = plVar11 + (int)plVar10[-0x16];
      iVar13 = 0;
      do {
        lVar15 = *plVar11;
        if (*(char *)(lVar15 + 0x28) == '\x01') {
          iVar8 = *(int *)(lVar15 + 0xa8);
          if ((longlong)iVar8 != 0) {
            lVar14 = *(longlong *)(lVar15 + 0xa0);
            lVar12 = 0;
            do {
              uVar9 = *(undefined8 *)(lVar14 + lVar12);
              if (iVar13 == 0) {
                local_158 = 0;
                puStack_150 = (undefined1 *)0x0;
              }
              else {
                local_198 = *(void **)(lVar15 + 0x18);
                FUN_1400021e4(&local_198,&local_158);
              }
              local_1e8 = param_8;
              local_1f0 = &local_188;
              local_1f8 = local_1e0;
              FUN_1494964ea(&local_130,uVar9,&local_158,param_5);
              if (local_158 != 0) {
                FUN_1400020a8();
              }
              pwVar7 = local_130;
              if (local_130 != (wchar_t *)0x0) {
                (**(code **)(*(longlong *)local_130 + 8))(local_130);
                plVar10 = local_1d0;
                uVar2 = (int)local_128;
                *local_1d0 = (longlong)pwVar7;
                (**(code **)(*(longlong *)pwVar7 + 8))(pwVar7);
                *(undefined4 *)(plVar10 + 1) = uVar2;
                *(undefined1 *)(plVar10 + 2) = 1;
                (**(code **)(*(longlong *)pwVar7 + 0x10))(pwVar7);
                if (local_130 != (wchar_t *)0x0) {
                  (**(code **)(*(longlong *)local_130 + 0x10))();
                }
                goto LAB_14949623f;
              }
              lVar12 = lVar12 + 8;
            } while ((longlong)iVar8 * 8 != lVar12);
          }
          iVar13 = iVar13 + 1;
        }
        else if (*(char *)(lVar15 + 0x29) == '\x02') {
          local_1e8 = param_9;
          local_1f0 = param_8;
          local_1f8 = &local_188;
          FUN_149497456(local_1d8,lVar15,param_6,local_1e0);
        }
        plVar11 = plVar11 + 1;
      } while (plVar11 != plVar10);
    }
    if (param_7 != 0) {
      FUN_149498dbe(&local_108,&local_130);
      local_1f8 = param_8;
      FUN_149498b32(local_1d8,*(longlong *)local_130,param_7,local_1e0);
      if (local_130 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    local_198 = (void *)0x0;
    uStack_190 = 0;
    FUN_144a8b2a0(&local_130,&local_188,&DAT_149e01f72);
    iVar13 = (int)local_128 + -1;
    if ((int)local_128 == 0) {
      iVar13 = 0;
    }
    FUN_1400020e8(&local_198,local_130,iVar13);
    if (local_130 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    thunk_FUN_14047a987(&local_198,&DAT_14a370a31,2);
    (**(code **)(*local_1d8 + 0x310))(local_1d8,&local_130);
    iVar13 = (int)local_128 + -1;
    if ((int)local_128 == 0) {
      iVar13 = 0;
    }
    FUN_1400020e8(&local_198,local_130,iVar13);
    if (local_130 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    _Src = local_198;
    plVar10 = local_1e0;
    ppvVar1 = (void **)(local_1e0 + 0x13);
    if (ppvVar1 != &local_198) {
      iVar13 = (int)uStack_190;
      lVar15 = (longlong)(int)uStack_190;
      *(int *)(local_1e0 + 0x14) = (int)uStack_190;
      if ((int)uStack_190 == 0 && *(int *)((longlong)local_1e0 + 0xa4) == 0) {
        *(undefined4 *)((longlong)local_1e0 + 0xa4) = 0;
      }
      else {
        FUN_1446dd670(ppvVar1,uStack_190 & 0xffffffff);
        if (iVar13 != 0) {
          memcpy(*ppvVar1,_Src,lVar15 * 2);
          plVar10 = local_1e0;
        }
      }
    }
    (**(code **)(*local_1d8 + 0x300))(local_1d8,&local_130);
    if ((wchar_t **)(plVar10 + 5) == &local_130) {
      if (local_130 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (plVar10[5] != 0) {
        FUN_1400020a8();
      }
      local_1e0[5] = (longlong)local_130;
      local_130 = (wchar_t *)0x0;
      *(int *)(local_1e0 + 6) = (int)local_128;
      *(uint *)((longlong)local_1e0 + 0x34) = local_128._4_4_;
    }
    plVar11 = local_1d8;
    (**(code **)(*local_1d8 + 0x308))(local_1d8,&local_130);
    plVar10 = local_1e0;
    *(int *)(local_1e0 + 8) = (int)local_128;
    local_1e0[7] = (longlong)local_130;
    (**(code **)(*plVar11 + 0x318))(plVar11,&local_130);
    if ((wchar_t **)(plVar10 + 0xd) == &local_130) {
      if (local_130 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (plVar10[0xd] != 0) {
        FUN_1400020a8();
      }
      local_1e0[0xd] = (longlong)local_130;
      local_130 = (wchar_t *)0x0;
      *(int *)(local_1e0 + 0xe) = (int)local_128;
      *(uint *)((longlong)local_1e0 + 0x74) = local_128._4_4_;
    }
    local_158 = 0x100000000;
    local_148 = 0xffffffff;
    local_140 = 0;
    iVar13 = 0;
    puStack_150 = local_a8;
    if (local_90 != 0) {
      FUN_1449c0562(&local_158);
      iVar13 = local_90;
    }
    local_118 = local_148;
    uVar9 = local_118;
    local_110 = local_140;
    local_10c = local_13c;
    local_128 = local_158;
    local_120 = puStack_150;
    local_118._4_4_ = (int)((ulonglong)local_148 >> 0x20);
    local_130 = local_b8;
    if ((local_118._4_4_ != iVar13) || (puStack_150 != local_a8)) {
      local_1c8 = local_1e0 + 0xb;
      local_1c0 = CONCAT44(local_1c0._4_4_,iVar13);
      iVar8 = local_118._4_4_;
      local_118 = uVar9;
      do {
        lVar15 = *(longlong *)local_130;
        lVar14 = (longlong)iVar8;
        if (*(longlong *)(lVar15 + lVar14 * 0x18) != *(longlong *)(lVar15 + 8 + lVar14 * 0x18)) {
          FUN_1400021e4(lVar15 + lVar14 * 0x18 + 8,&local_1a8);
          FUN_1400021e4(lVar15 + lVar14 * 0x18,&local_1b8);
          uVar4 = local_1a8;
          uVar9 = local_1b8;
          local_1b8 = 0;
          uVar2 = (undefined4)local_1b0;
          uVar3 = local_1b0._4_4_;
          local_1b0 = 0;
          local_1a8 = 0;
          uVar5 = (undefined4)local_1a0;
          uVar6 = local_1a0._4_4_;
          local_1a0 = 0;
          iVar13 = (int)local_1e0[0xc];
          *(uint *)(local_1e0 + 0xc) = iVar13 + 1U;
          if (*(uint *)((longlong)local_1e0 + 100) < iVar13 + 1U) {
            FUN_1494d47ce(local_1c8,iVar13);
          }
          lVar15 = *local_1c8;
          lVar14 = (longlong)iVar13 * 0x20;
          *(undefined8 *)(lVar15 + lVar14) = uVar9;
          *(undefined4 *)(lVar15 + 8 + lVar14) = uVar2;
          *(undefined4 *)(lVar15 + 0xc + lVar14) = uVar3;
          *(undefined8 *)(lVar15 + 0x10 + lVar14) = uVar4;
          *(undefined4 *)(lVar15 + 0x18 + lVar14) = uVar5;
          *(undefined4 *)(lVar15 + 0x1c + lVar14) = uVar6;
          iVar13 = (int)local_1c0;
        }
        local_118 = CONCAT44(local_118._4_4_,(uint)local_118 & ~local_128._4_4_);
        FUN_1449c0562(&local_128);
        iVar8 = local_118._4_4_;
        uVar9 = local_118;
      } while (local_130 != local_b8 || (local_120 != local_a8 || local_118._4_4_ != iVar13));
    }
    local_118 = uVar9;
    plVar10 = local_1d0;
    *local_1d0 = (longlong)local_1e0;
    *(undefined1 *)(local_1d0 + 2) = 0;
    if (local_198 != (void *)0x0) {
      FUN_1400020a8();
    }
LAB_14949623f:
    FUN_1447a1747(local_188,uStack_180 & 0xffffffff);
    if (local_188 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_130 = L"ZeroOrMultiplePrimaryBindings";
    local_128._0_4_ = 0x1d;
    FUN_1446e940c(&local_158,&local_130);
    local_130 = L"OptimusKernelBase";
    local_128 = CONCAT44(local_128._4_4_,0x11);
    FUN_1446e940c(&local_188,&local_130);
    FUN_140208bae(&local_170,&local_188,&local_158,
                  L"Primary Group has zero or more than one Component Bindings");
    plVar10 = local_1d0;
    *local_1d0 = (longlong)local_170;
    if (local_170 == (longlong *)0x0) {
      *(undefined4 *)(local_1d0 + 1) = local_168;
      *(undefined1 *)(local_1d0 + 2) = 1;
    }
    else {
      (**(code **)(*local_170 + 8))();
      *(undefined4 *)(plVar10 + 1) = local_168;
      *(undefined1 *)(plVar10 + 2) = 1;
      if (local_170 != (longlong *)0x0) {
        (**(code **)(*local_170 + 0x10))();
      }
    }
  }
  local_c0 = 0;
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_1494d6142(&local_108);
LAB_149495dc1:
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(local_b8);
  if ((local_60 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar10;
}



// FUNCTION 149496455 FUN_149496455 body=148 status=ok
// SIG undefined FUN_149496455(void)

undefined8 FUN_149496455(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145ba3f08();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494964ea FUN_1494964ea body=3947 status=ok
// SIG undefined FUN_1494964ea(void)

/* WARNING: Removing unreachable block (ram,0x000149496970) */
/* WARNING: Removing unreachable block (ram,0x000149496b99) */

undefined8 *
FUN_1494964ea(undefined8 *param_1,ulonglong param_2,undefined8 *param_3,longlong *param_4,
             longlong param_5,longlong *param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  wchar_t **ppwVar3;
  void *_Src;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  wchar_t *pwVar16;
  wchar_t *pwVar17;
  longlong lVar18;
  undefined2 *puVar19;
  wchar_t *pwVar20;
  wchar_t *pwVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  wchar_t *pwVar25;
  undefined1 auStack_228 [32];
  wchar_t **local_208;
  wchar_t *local_200;
  wchar_t *local_1f8;
  wchar_t *local_1f0;
  undefined8 *local_1e0;
  undefined8 *local_1d8;
  wchar_t *local_1d0;
  char *local_1c8;
  wchar_t *local_1c0;
  undefined1 local_1b4 [4];
  undefined4 *local_1b0;
  wchar_t **local_1a8;
  undefined4 local_1a0 [2];
  longlong *local_198 [2];
  longlong *local_188;
  int local_180;
  wchar_t *local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong local_158;
  undefined8 uStack_150;
  wchar_t **local_148;
  undefined8 uStack_140;
  longlong local_138;
  undefined8 uStack_130;
  undefined1 local_128;
  undefined1 local_11c [4];
  longlong *local_118;
  int local_110;
  undefined4 local_10c;
  undefined4 *local_108;
  wchar_t **local_100;
  longlong *local_f8 [2];
  wchar_t *local_e8;
  ulonglong uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined5 uStack_c0;
  undefined3 local_bb;
  undefined5 uStack_b8;
  undefined3 uStack_b3;
  undefined2 uStack_b0;
  undefined3 uStack_ae;
  undefined8 local_a8;
  undefined8 uStack_a0;
  wchar_t *local_98;
  undefined8 uStack_90;
  longlong *local_88;
  undefined5 uStack_80;
  undefined3 uStack_7b;
  undefined5 uStack_78;
  undefined3 uStack_73;
  undefined5 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_228;
  uStack_b8 = 0;
  uStack_b3 = 0;
  uStack_b0 = 0;
  uStack_ae = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_bb = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_1e0 = param_1;
  uVar10 = FUN_1457dd0f4(2);
  uStack_b8 = (undefined5)uVar10;
  uStack_b3 = (undefined3)((ulonglong)uVar10 >> 0x28);
  uStack_b0 = 0;
  FUN_149458fce(&local_d8);
  lVar24 = param_2 + 0x70;
  FUN_1494947ba(lVar24,&local_98);
  plVar12 = uStack_90;
  local_1c8 = *(char **)(local_98 + 0xc);
  if (uStack_90 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_90 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*uStack_90)(uStack_90);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  if ((int)param_4[1] != *(int *)((longlong)param_4 + 0x34)) {
    uVar6 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    plVar12 = param_4 + 7;
    if ((longlong *)param_4[8] != (longlong *)0x0) {
      plVar12 = (longlong *)param_4[8];
    }
    iVar7 = *(int *)((longlong)plVar12 +
                    (ulonglong)((int)param_4[9] - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar7 != -1) {
LAB_149496ce7:
      lVar18 = *param_4 + (longlong)iVar7 * 0x20;
      if (*(ulonglong *)(*param_4 + (longlong)iVar7 * 0x20) != param_2) goto code_r0x000149496cf8;
      if ((lVar18 + 8U & 0xfffffffffffffff7) != 0) {
        uVar10 = *(undefined8 *)(lVar18 + 0x10);
        lVar24 = FUN_1494e64f0(uVar10);
        pwVar20 = *(wchar_t **)(lVar18 + 8);
        cVar5 = (**(code **)(*(longlong *)pwVar20 + 0x2b0))(pwVar20);
        if ((cVar5 != '\0') || (*(int *)(param_3 + 1) < 2)) {
          iVar7 = -1;
          local_1d8 = param_3;
          if (lVar24 != 0) {
            uVar11 = FUN_145a964a0();
            lVar18 = FUN_144718840(lVar24,uVar11);
            if (lVar18 == 0) {
              uVar11 = FUN_1459f6dfa();
              plVar12 = (longlong *)FUN_144718840(lVar24,uVar11);
              if (plVar12 == (longlong *)0x0) {
                uVar11 = FUN_1459f755a();
                plVar12 = (longlong *)FUN_144718840(lVar24,uVar11);
                if (plVar12 == (longlong *)0x0) {
                  lVar18 = FUN_145ba6f7a();
                  if (((*(int *)(lVar18 + 0x38) <= *(int *)(*(longlong *)(lVar24 + 0x10) + 0x38)) &&
                      (pwVar20 != (wchar_t *)0x0)) &&
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar24 + 0x10) + 0x30) +
                       (longlong)*(int *)(lVar18 + 0x38) * 8) == lVar18 + 0x30)) {
                    lVar24 = FUN_145ba540e();
                    if ((*(int *)(lVar24 + 0x38) <= *(int *)(*(longlong *)(pwVar20 + 8) + 0x38)) &&
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(pwVar20 + 8) + 0x30) +
                         (longlong)*(int *)(lVar24 + 0x38) * 8) == lVar24 + 0x30)) {
                      iVar7 = FUN_1494996c8(uVar10);
                    }
                  }
                }
                else if (pwVar20 != (wchar_t *)0x0) {
                  lVar24 = FUN_145ba5066();
                  if ((*(int *)(lVar24 + 0x38) <= *(int *)(*(longlong *)(pwVar20 + 8) + 0x38)) &&
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(pwVar20 + 8) + 0x30) +
                       (longlong)*(int *)(lVar24 + 0x38) * 8) == lVar24 + 0x30)) {
                    (**(code **)(*plVar12 + 0x10))(plVar12,&local_98);
                    iVar7 = FUN_149472dc0(pwVar20,&local_98);
                  }
                }
              }
              else if (pwVar20 != (wchar_t *)0x0) {
                lVar24 = FUN_140fc6edc();
                if ((*(int *)(lVar24 + 0x38) <= *(int *)(*(longlong *)(pwVar20 + 8) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(pwVar20 + 8) + 0x30) +
                     (longlong)*(int *)(lVar24 + 0x38) * 8) == lVar24 + 0x30)) {
                  iVar7 = (**(code **)(*plVar12 + 0x18))(plVar12,uVar10);
                }
              }
            }
            else {
              if (pwVar20 != (wchar_t *)0x0) {
                lVar24 = FUN_14599bc42();
                if ((*(int *)(lVar24 + 0x38) <= *(int *)(*(longlong *)(pwVar20 + 8) + 0x38)) &&
                   (iVar7 = 1,
                   *(longlong *)
                    (*(longlong *)(*(longlong *)(pwVar20 + 8) + 0x30) +
                    (longlong)*(int *)(lVar24 + 0x38) * 8) == lVar24 + 0x30)) goto LAB_149496f8d;
              }
              iVar7 = -1;
            }
          }
LAB_149496f8d:
          local_e8 = (wchar_t *)0x0;
          uStack_e0 = 0;
          (**(code **)(*(longlong *)pwVar20 + 0x2c8))(pwVar20,&local_e8);
          local_118 = (longlong *)0x0;
          local_110 = *(int *)(local_e8 + ((longlong)iVar7 * 5 + 1) * 4);
          lVar24 = (longlong)local_110;
          _Src = *(void **)(local_e8 + (longlong)iVar7 * 0x14);
          if (lVar24 == 0) {
            local_10c = 0;
            iVar8 = 0;
          }
          else {
            FUN_1446dd670(&local_118,local_110,0);
            memcpy(local_118,_Src,lVar24 * 2);
            iVar8 = local_110;
          }
          iVar22 = iVar8 + -1;
          if (iVar8 == 0) {
            iVar22 = 0;
          }
          local_138 = 0;
          uStack_130 = 0;
          local_148 = (wchar_t **)0x0;
          uStack_140 = (undefined5 *)0x0;
          local_128 = 0;
          FUN_1402980a2(&local_148,local_118,iVar22);
          local_128 = 1;
          uStack_70 = 0;
          local_88 = (longlong *)0x0;
          uStack_80 = 0;
          uStack_7b = 0;
          local_98 = (wchar_t *)0x0;
          uStack_90 = (longlong *)0x0;
          uStack_78 = SUB85(local_1c8,0);
          uStack_73 = (undefined3)((ulonglong)local_1c8 >> 0x28);
          FUN_149458fce();
          uVar14 = uStack_130;
          lVar24 = (longlong)(int)uStack_130;
          uVar6 = (int)uStack_130 + 1;
          uStack_130 = CONCAT44(uStack_130._4_4_,uVar6);
          if (uStack_130._4_4_ < uVar6) {
            FUN_14945d6f6(&local_138,uVar14 & 0xffffffff);
          }
          FUN_14945b490(lVar24 * 0x30 + local_138,&local_98);
          iVar8 = *(int *)(param_2 + 0x30);
          if ((iVar8 != 0) || (iVar8 = 0, *(int *)(param_2 + 0x40) != 0)) {
            iVar22 = 0;
            while( true ) {
              uVar14 = uStack_130;
              iVar9 = 1;
              if (iVar8 != 1) {
                if (iVar8 == 0) {
                  iVar9 = *(int *)(param_2 + 0x40);
                }
                else {
                  iVar9 = 0;
                }
              }
              if (iVar9 <= iVar22) break;
              lVar24 = (longlong)(int)uStack_130;
              uVar6 = (int)uStack_130 + 1;
              uStack_130 = CONCAT44(uStack_130._4_4_,uVar6);
              if (uStack_130._4_4_ < uVar6) {
                FUN_14945d6f6(&local_138,uVar14 & 0xffffffff);
              }
              FUN_14945b490(lVar24 * 0x30 + local_138,&local_d8);
              iVar22 = iVar22 + 1;
              iVar8 = *(int *)(param_2 + 0x30);
            }
          }
          local_158 = 0;
          uStack_150 = 0;
          local_170 = (longlong *)CONCAT44(local_170._4_4_,iVar7);
          local_a8 = *(undefined4 **)(param_2 + 0x18);
          local_178 = pwVar20;
          FUN_1400021e4(&local_a8,&local_188);
          puVar4 = local_1d8;
          puVar15 = local_1e0;
          plVar12 = local_188;
          if (local_180 == 0) {
            plVar12 = (longlong *)&DAT_149dfb77a;
          }
          FUN_140002266(&local_a8,L"Read%s",plVar12);
          local_168 = (undefined4)local_a8;
          uStack_164 = local_a8._4_4_;
          uStack_160 = (int)uStack_a0;
          uStack_15c = uStack_a0._4_4_;
          local_a8 = (undefined4 *)0x0;
          uStack_a0 = (wchar_t **)0x0;
          if (local_188 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          FUN_144a787a6(&local_158,puVar4);
          local_1a0[0] = *(undefined4 *)(param_5 + 0x80);
          local_a8 = local_1a0;
          uStack_a0 = &local_178;
          FUN_1494d6354(param_7,&local_188);
          iVar7 = *(int *)(param_5 + 0x80);
          *(uint *)(param_5 + 0x80) = iVar7 + 1U;
          if (*(uint *)(param_5 + 0x84) < iVar7 + 1U) {
            FUN_1494835ac((longlong *)(param_5 + 0x78),iVar7);
          }
          FUN_1494998b6((longlong)iVar7 * 0x28 + *(longlong *)(param_5 + 0x78),&local_148);
          if (local_158 != 0) {
            FUN_1400020a8();
          }
          if (CONCAT44(uStack_164,local_168) != 0) {
            FUN_1400020a8();
          }
          if (local_88 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          if (local_98 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          FUN_14945b34e(&local_148);
          if (local_118 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          FUN_141161157(local_e8,uStack_e0 & 0xffffffff);
          pwVar20 = local_e8;
          goto joined_r0x000149497374;
        }
        FUN_1494e66cc(param_2,&local_188);
        FUN_145715fae(local_f8,&local_188);
        local_98 = L"SecondaryGroupOnlySupportsDataInterfaceUnifiedDispatch";
        uStack_90._0_4_ = 0x36;
        FUN_1446e940c(local_1a0,&local_98);
        local_98 = L"OptimusKernelBase";
        uStack_90 = (longlong *)CONCAT44(uStack_90._4_4_,0x11);
        FUN_1446e940c(local_11c,&local_98);
        FUN_140208bae(&local_118,local_11c,local_1a0,
                      L"Cannot connect Secondary group input binding pin \'{0}\' to a data interface that does not support unified dispatch, consider inserting a kernel inbetween"
                     );
        FUN_14023409e(&local_108,&local_118,1);
        local_98 = (wchar_t *)CONCAT44(local_98._4_4_,4);
        FUN_14023423e(&local_88,local_f8);
        uStack_140 = &uStack_78;
        local_148 = &local_98;
        FUN_14010d304(&local_178);
        local_a8 = local_108;
        uStack_a0 = local_100;
        if (local_100 != (wchar_t **)0x0) {
          LOCK();
          *(int *)(local_100 + 1) = *(int *)(local_100 + 1) + 1;
          UNLOCK();
        }
        FUN_14010c016(&local_e8,&local_a8,&local_178);
        FUN_14007f2db(local_178,(ulonglong)local_170 & 0xffffffff);
        puVar15 = local_1e0;
        if (local_178 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        if (local_88 != (longlong *)0x0) {
          (**(code **)(*local_88 + 0x10))();
        }
        if (local_100 != (wchar_t **)0x0) {
          LOCK();
          ppwVar3 = local_100 + 1;
          *(int *)ppwVar3 = *(int *)ppwVar3 + -1;
          UNLOCK();
          if (*(int *)ppwVar3 == 0) {
            (**(code **)*local_100)(local_100);
            LOCK();
            piVar2 = (int *)((longlong)local_100 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_100 + 8))(local_100);
            }
          }
        }
        if (local_f8[0] != (longlong *)0x0) {
          (**(code **)(*local_f8[0] + 0x10))();
        }
        FUN_14023423e(puVar15,&local_e8);
        if (local_e8 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_e8 + 0x10))();
        }
        if (local_118 != (longlong *)0x0) {
          (**(code **)(*local_118 + 0x10))();
        }
        goto LAB_149496c13;
      }
    }
  }
LAB_1494965f2:
  local_e8 = (wchar_t *)0x0;
  uStack_e0 = 0;
  if ((*(int *)(param_2 + 0x30) == 0) && (*(int *)(param_2 + 0x40) == 0)) {
    if (*local_1c8 == '\x04') {
      FUN_1494e66cc(param_2,local_1a0);
      FUN_145715fae(local_198,local_1a0);
      local_98 = L"DisconnectedStructPinUnsupported";
      uStack_90._0_4_ = 0x20;
      FUN_1446e940c(local_11c,&local_98);
      local_98 = L"OptimusKernelBase";
      uStack_90 = (longlong *)CONCAT44(uStack_90._4_4_,0x11);
      FUN_1446e940c(local_1b4,&local_98);
      FUN_140208bae(&local_188,local_1b4,local_11c,
                    L"Disconnected struct type pin \'{0}\' is not supported");
      FUN_14023409e(&local_1b0,&local_188,1);
      local_98 = (wchar_t *)CONCAT44(local_98._4_4_,4);
      FUN_14023423e(&local_88,local_198);
      uStack_140 = &uStack_78;
      local_148 = &local_98;
      FUN_14010d304(&local_178);
      local_a8 = local_1b0;
      uStack_a0 = local_1a8;
      if (local_1a8 != (wchar_t **)0x0) {
        LOCK();
        *(int *)(local_1a8 + 1) = *(int *)(local_1a8 + 1) + 1;
        UNLOCK();
      }
      FUN_14010c016(&local_118,&local_a8,&local_178);
      FUN_14007f2db(local_178,(ulonglong)local_170 & 0xffffffff);
      puVar15 = local_1e0;
      if (local_178 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (local_88 != (longlong *)0x0) {
        (**(code **)(*local_88 + 0x10))();
      }
      if (local_1a8 != (wchar_t **)0x0) {
        LOCK();
        ppwVar3 = local_1a8 + 1;
        *(int *)ppwVar3 = *(int *)ppwVar3 + -1;
        UNLOCK();
        if (*(int *)ppwVar3 == 0) {
          (**(code **)*local_1a8)(local_1a8);
          LOCK();
          piVar2 = (int *)((longlong)local_1a8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_1a8 + 8))(local_1a8);
          }
        }
      }
      if (local_198[0] != (longlong *)0x0) {
        (**(code **)(*local_198[0] + 0x10))();
      }
      FUN_14023423e(puVar15,&local_118);
      if (local_118 != (longlong *)0x0) {
        (**(code **)(*local_118 + 0x10))();
      }
      if (local_188 != (longlong *)0x0) {
        (**(code **)(*local_188 + 0x10))();
      }
      if (local_e8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_149496c13;
    }
    FUN_1494947ba(lVar24,&local_98);
    FUN_149458e5e(*(longlong *)(local_98 + 0xc),&local_178);
    if (uStack_90 != (longlong *)0x0) {
      LOCK();
      plVar12 = uStack_90 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*uStack_90)(uStack_90);
        LOCK();
        piVar2 = (int *)((longlong)uStack_90 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*uStack_90 + 0x10))(uStack_90);
        }
      }
    }
    pwVar20 = local_178;
    iVar7 = (int)local_170;
  }
  else {
    FUN_1494947ba(lVar24,&local_178);
    FUN_149458e5e(*(longlong *)(local_178 + 0xc),&local_98);
    pwVar20 = local_98;
    plVar12 = local_170;
    local_1d0 = (wchar_t *)CONCAT44(local_1d0._4_4_,(int)uStack_90);
    local_98 = (wchar_t *)0x0;
    uStack_90 = (longlong *)0x0;
    if (local_170 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_170 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_170)(local_170);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    local_98 = (wchar_t *)0x0;
    uStack_90 = (longlong *)0x0;
    FUN_14949979e(&local_178,param_2 + 0x30);
    pwVar17 = local_178;
    lVar24 = (longlong)(int)local_170;
    if (lVar24 == 0) {
      uVar14 = 0;
    }
    else {
      local_1c0 = pwVar20;
      lVar18 = 0;
      local_1d8 = param_3;
      do {
        puVar19 = &DAT_149dfb77a;
        if (*(int *)((longlong)pwVar17 + lVar18 + 8) != 0) {
          puVar19 = *(undefined2 **)((longlong)pwVar17 + lVar18);
        }
        FUN_140002266(&local_a8,L"uint %s",puVar19);
        puVar13 = (undefined4 *)&DAT_149dfb77a;
        if ((int)uStack_a0 != 0) {
          puVar13 = local_a8;
        }
        FUN_140056680(&local_148,puVar13);
        uVar14 = (ulonglong)uStack_90;
        lVar23 = (longlong)(int)uStack_90;
        uVar6 = (int)uStack_90 + 1;
        uStack_90 = (longlong *)CONCAT44(uStack_90._4_4_,uVar6);
        if (uStack_90._4_4_ < uVar6) {
          FUN_1447a1bd6(&local_98,uVar14 & 0xffffffff);
        }
        pwVar20 = local_98 + lVar23 * 8;
        pwVar20[0] = L'\0';
        pwVar20[1] = L'\0';
        pwVar20[2] = L'\0';
        pwVar20[3] = L'\0';
        *(wchar_t ***)(local_98 + lVar23 * 8) = local_148;
        *(int *)(local_98 + lVar23 * 8 + 4) = (int)uStack_140;
        *(undefined4 *)(local_98 + lVar23 * 8 + 6) = uStack_140._4_4_;
        uStack_140 = (undefined5 *)0x0;
        local_148 = (wchar_t **)0x0;
        if (local_a8 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
        lVar18 = lVar18 + 0x10;
      } while (lVar24 * 0x10 != lVar18);
      uVar14 = (ulonglong)local_170 & 0xffffffff;
      param_3 = local_1d8;
      pwVar20 = local_1c0;
    }
    FUN_1447a1747(local_178,uVar14);
    iVar7 = (int)local_1d0;
    if (local_178 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    FUN_144a8b2a0(&local_178,&local_98,&DAT_149e19f34);
    pwVar17 = local_178;
    if ((int)local_170 == 0) {
      pwVar17 = L"";
    }
    FUN_14020fad6(&local_e8,pwVar17);
    if (local_178 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    FUN_1447a1747(local_98,(ulonglong)uStack_90 & 0xffffffff);
    if (local_98 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  local_98 = (wchar_t *)0x0;
  uStack_90 = (longlong *)0x0;
  if (*(int *)(param_3 + 1) < 2) {
    local_1d0 = (wchar_t *)0x0;
    pwVar17 = L"";
    pwVar25 = L"";
  }
  else {
    FUN_140002266(&local_178,L"namespace %s { ",*param_3);
    local_1d0 = local_178;
    pwVar17 = local_178;
    if ((int)local_170 == 0) {
      pwVar17 = L"";
    }
    FUN_14020fad6(&local_98,&DAT_14a386cd2);
    pwVar25 = L"";
    if ((int)uStack_90 != 0) {
      pwVar25 = local_98;
    }
  }
  pwVar21 = pwVar20;
  if (iVar7 == 0) {
    pwVar21 = L"";
  }
  pwVar16 = L"";
  if ((int)uStack_e0 != 0) {
    pwVar16 = local_e8;
  }
  local_178 = *(wchar_t **)(param_2 + 0x18);
  local_1c0 = pwVar20;
  FUN_1400021e4(&local_178,&local_148);
  local_208 = (wchar_t **)&DAT_149dfb77a;
  if ((int)uStack_140 != 0) {
    local_208 = local_148;
  }
  local_118 = (longlong *)0x0;
  FUN_149458322(local_1c8,&local_a8);
  puVar13 = (undefined4 *)&DAT_149dfb77a;
  if ((int)uStack_a0 != 0) {
    puVar13 = local_a8;
  }
  local_200 = pwVar16;
  local_1f8 = pwVar21;
  local_1f0 = pwVar25;
  FUN_140002266(&local_178,L"%s%s Read%s(%s) { return %s; }%s",pwVar17,puVar13);
  iVar7 = (int)param_6[1];
  *(uint *)(param_6 + 1) = iVar7 + 1U;
  if (*(uint *)((longlong)param_6 + 0xc) < iVar7 + 1U) {
    FUN_1447a1bd6(param_6,iVar7);
  }
  pwVar20 = local_1c0;
  pwVar17 = local_1d0;
  puVar15 = local_1e0;
  lVar24 = *param_6;
  lVar18 = (longlong)iVar7 * 0x10;
  *(undefined8 *)(lVar24 + lVar18) = 0;
  *(wchar_t **)(lVar24 + lVar18) = local_178;
  *(int *)(lVar24 + 8 + lVar18) = (int)local_170;
  *(undefined4 *)(lVar24 + 0xc + lVar18) = local_170._4_4_;
  local_170 = (longlong *)0x0;
  local_178 = (wchar_t *)0x0;
  if (local_a8 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_148 != (wchar_t **)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (pwVar17 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar17);
  }
  if (local_e8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
joined_r0x000149497374:
  if (pwVar20 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar20);
  }
  *puVar15 = 0;
  *(undefined4 *)(puVar15 + 1) = 0;
LAB_149496c13:
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return puVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x000149496cf8:
  iVar7 = *(int *)(lVar18 + 0x18);
  if (iVar7 == -1) goto LAB_1494965f2;
  goto LAB_149496ce7;
}



// FUNCTION 149497456 FUN_149497456 body=5851 status=ok
// SIG undefined FUN_149497456(void)

/* WARNING: Removing unreachable block (ram,0x000149497b6d) */
/* WARNING: Removing unreachable block (ram,0x000149497749) */
/* WARNING: Removing unreachable block (ram,0x0001494986da) */
/* WARNING: Removing unreachable block (ram,0x00014949808e) */
/* WARNING: Removing unreachable block (ram,0x00014949833b) */
/* WARNING: Removing unreachable block (ram,0x000149497b7f) */
/* WARNING: Removing unreachable block (ram,0x0001494984a6) */
/* WARNING: Removing unreachable block (ram,0x000149497611) */

void FUN_149497456(longlong *param_1,ulonglong param_2,longlong *param_3,longlong param_4,
                  longlong *param_5,undefined8 param_6,undefined8 param_7)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  void *pvVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong **pplVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong **pplVar14;
  longlong lVar15;
  longlong lVar16;
  undefined2 *puVar17;
  undefined8 *puVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined1 auStack_208 [32];
  longlong **local_1e8;
  longlong **local_1e0;
  longlong *local_1d8;
  longlong local_1d0;
  longlong *local_1c8;
  ulonglong local_1c0;
  longlong local_1b8;
  undefined8 *local_1b0;
  longlong *local_1a4;
  undefined4 local_19c;
  undefined8 *local_198;
  undefined8 uStack_190;
  longlong local_188;
  undefined8 uStack_180;
  longlong local_178;
  undefined8 uStack_170;
  void *local_168;
  uint local_160;
  undefined4 local_15c;
  longlong *local_158;
  ulonglong uStack_150;
  longlong *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined5 uStack_130;
  undefined3 uStack_12b;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined5 uStack_120;
  undefined3 uStack_11b;
  longlong **local_118;
  longlong **pplStack_110;
  longlong local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  undefined2 *local_e8;
  uint local_e0;
  undefined4 local_dc;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong *local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  int local_b0;
  longlong local_a8 [3];
  undefined5 uStack_90;
  undefined3 local_8b;
  undefined5 uStack_88;
  undefined3 uStack_83;
  undefined2 uStack_80;
  undefined3 uStack_7e;
  longlong **local_78;
  undefined8 **ppuStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  uStack_88 = 0;
  uStack_83 = 0;
  uStack_80 = 0;
  uStack_7e = 0;
  local_a8[2] = 0;
  uStack_90 = 0;
  local_8b = 0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  uVar8 = FUN_1457dd0f4(2);
  uStack_88 = (undefined5)uVar8;
  uStack_83 = (undefined3)((ulonglong)uVar8 >> 0x28);
  uStack_80 = 0;
  FUN_149458fce(local_a8);
  FUN_14949979e(&local_b8,param_2 + 0x30);
  FUN_1494947ba(param_2 + 0x70,&local_148);
  pplVar11 = uStack_140;
  local_1b8 = local_148[3];
  if (uStack_140 != (longlong **)0x0) {
    LOCK();
    pplVar14 = uStack_140 + 1;
    *(int *)pplVar14 = *(int *)pplVar14 + -1;
    UNLOCK();
    if (*(int *)pplVar14 == 0) {
      (*(code *)**uStack_140)(uStack_140);
      LOCK();
      piVar1 = (int *)((longlong)pplVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (*(code *)(*pplVar11)[2])(pplVar11);
      }
    }
  }
  lVar21 = local_b8;
  local_1c0 = param_2;
  if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
    uVar6 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    plVar9 = param_3 + 7;
    if ((longlong *)param_3[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_3[8];
    }
    iVar7 = *(int *)((longlong)plVar9 +
                    (ulonglong)((int)param_3[9] - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar7 != -1) {
      do {
        lVar15 = *param_3 + (longlong)iVar7 * 0x20;
        if (*(ulonglong *)(*param_3 + (longlong)iVar7 * 0x20) == param_2) {
          puVar12 = (undefined8 *)(lVar15 + 8);
          if (puVar12 != (undefined8 *)0x0 && lVar15 != 0) {
            local_c8 = (longlong *)0x0;
            uStack_c0 = 0;
            local_1d0 = param_4;
            local_1b0 = puVar12;
            if ((longlong)*(int *)(lVar15 + 0x10) != 0) {
              lVar21 = *(longlong *)(lVar15 + 8);
              local_1c8 = (longlong *)((longlong)*(int *)(lVar15 + 0x10) << 4);
              plVar9 = (longlong *)0x0;
              local_1d8 = param_1;
              goto LAB_1494978ee;
            }
            local_d8 = 0;
            uStack_d0 = 0;
            goto LAB_149498523;
          }
          break;
        }
        iVar7 = *(int *)(lVar15 + 0x18);
      } while (iVar7 != -1);
    }
  }
  local_148 = (longlong *)0x0;
  uStack_140 = (longlong **)0x0;
  lVar15 = (longlong)local_b0;
  if (lVar15 != 0) {
    lVar16 = 0;
    do {
      puVar17 = &DAT_149dfb77a;
      if (*(int *)(lVar21 + 8 + lVar16) != 0) {
        puVar17 = *(undefined2 **)(lVar21 + lVar16);
      }
      FUN_140002266(&local_118,L"uint %s",puVar17);
      pplVar11 = (longlong **)&DAT_149dfb77a;
      if ((int)pplStack_110 != 0) {
        pplVar11 = local_118;
      }
      FUN_140056680(&local_198,pplVar11);
      pplVar11 = uStack_140;
      lVar20 = (longlong)(int)uStack_140;
      uVar6 = (int)uStack_140 + 1;
      uStack_140 = (longlong **)CONCAT44(uStack_140._4_4_,uVar6);
      if (uStack_140._4_4_ < uVar6) {
        FUN_1447a1bd6(&local_148,(ulonglong)pplVar11 & 0xffffffff);
      }
      local_148[lVar20 * 2] = 0;
      local_148[lVar20 * 2] = (longlong)local_198;
      *(int *)(local_148 + lVar20 * 2 + 1) = (int)uStack_190;
      *(undefined4 *)((longlong)local_148 + lVar20 * 0x10 + 0xc) = uStack_190._4_4_;
      uStack_190 = 0;
      local_198 = (undefined8 *)0x0;
      if (local_118 != (longlong **)0x0) {
        FUN_1400020a8();
      }
      lVar16 = lVar16 + 0x10;
    } while (lVar15 * 0x10 != lVar16);
  }
  local_d8 = 0;
  FUN_149458322(local_1b8,&local_118);
  pplVar11 = (longlong **)&DAT_149dfb77a;
  if ((int)pplStack_110 != 0) {
    pplVar11 = local_118;
  }
  FUN_144a8b2a0(&local_78,&local_148,&DAT_149e19f34);
  pplVar14 = (longlong **)&DAT_149dfb77a;
  if ((int)ppuStack_70 != 0) {
    pplVar14 = local_78;
  }
  local_198 = *(undefined8 **)(local_1c0 + 0x18);
  FUN_1400021e4(&local_198,&local_c8);
  plVar9 = (longlong *)&DAT_149dfb77a;
  if ((int)uStack_c0 != 0) {
    plVar9 = local_c8;
  }
  local_1e8 = pplVar11;
  FUN_140002266(&local_198,L"void Write%s(%s, %s Value) { }",plVar9,pplVar14);
  iVar7 = (int)param_5[1];
  *(uint *)(param_5 + 1) = iVar7 + 1U;
  if (*(uint *)((longlong)param_5 + 0xc) < iVar7 + 1U) {
    FUN_1447a1bd6(param_5,iVar7);
  }
  lVar21 = *param_5;
  lVar15 = (longlong)iVar7 * 0x10;
  *(undefined8 *)(lVar21 + lVar15) = 0;
  *(undefined8 **)(lVar21 + lVar15) = local_198;
  *(int *)(lVar21 + 8 + lVar15) = (int)uStack_190;
  *(undefined4 *)(lVar21 + 0xc + lVar15) = uStack_190._4_4_;
  uStack_190 = 0;
  local_198 = (undefined8 *)0x0;
  if (local_c8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (longlong **)0x0) {
    FUN_1400020a8();
  }
  if (local_118 != (longlong **)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_148,(ulonglong)uStack_140 & 0xffffffff);
  plVar9 = local_148;
  goto LAB_1494977a0;
LAB_1494989fa:
  iVar19 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
LAB_1494989fd:
  if (iVar19 == 0) {
LAB_149497f2a:
    iVar7 = (int)((ulonglong)((longlong)plVar13 - (longlong)local_158) >> 3) * -0x33333333;
    goto LAB_149497f37;
  }
LAB_149497f1f:
  plVar13 = plVar13 + 5;
  if (plVar13 == local_158 + (longlong)(int)uStack_150 * 5) goto LAB_149497f37;
  goto LAB_149497eb4;
LAB_1494978ee:
  do {
    lVar16 = *(longlong *)(lVar21 + 8 + (longlong)plVar9);
    if (lVar16 == 0) {
      lVar20 = 0;
    }
    else {
      lVar20 = FUN_1494e64f0(lVar16);
    }
    plVar13 = *(longlong **)(lVar21 + (longlong)plVar9);
    local_198 = (undefined8 *)0x0;
    uStack_190 = 0;
    (**(code **)(*plVar13 + 0x2d0))(plVar13,&local_198);
    if (lVar20 == 0) {
      if (plVar13 != (longlong *)0x0) {
        lVar16 = FUN_14599bc42();
        if ((*(int *)(lVar16 + 0x38) <= *(int *)(plVar13[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar13[2] + 0x30) + (longlong)*(int *)(lVar16 + 0x38) * 8)
            == lVar16 + 0x30)) {
          uStack_140 = (void *)0x0;
          uVar6 = *(uint *)(local_198 + 1);
          pvVar4 = (void *)*local_198;
          local_138 = (longlong **)CONCAT44(local_138._4_4_,uVar6);
          if ((longlong)(int)uVar6 == 0) {
            local_138 = (longlong **)(ulonglong)uVar6;
            local_148 = plVar13;
          }
          else {
            local_148 = plVar13;
            FUN_1446dd670(&uStack_140,uVar6,0);
            memcpy(uStack_140,pvVar4,(longlong)(int)uVar6 * 2);
          }
          FUN_140056680(&uStack_130,L"RawBuffer");
          uVar23 = uStack_c0;
          lVar16 = (longlong)(int)uStack_c0;
          uVar6 = (int)uStack_c0 + 1;
          uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar6);
          if (uStack_c0._4_4_ < uVar6) {
            FUN_14452f248(&local_c8,uVar23 & 0xffffffff);
          }
          local_c8[lVar16 * 5] = (longlong)local_148;
          local_c8[lVar16 * 5 + 1] = 0;
          local_c8[lVar16 * 5 + 1] = (longlong)uStack_140;
          uStack_140 = (longlong **)0x0;
          *(undefined4 *)(local_c8 + lVar16 * 5 + 2) = (undefined4)local_138;
          *(undefined4 *)((longlong)local_c8 + lVar16 * 0x28 + 0x14) = local_138._4_4_;
          local_138 = (longlong **)0x0;
          local_c8[lVar16 * 5 + 3] = 0;
          local_c8[lVar16 * 5 + 3] = CONCAT35(uStack_12b,uStack_130);
          uStack_130 = 0;
          uStack_12b = 0;
          *(undefined4 *)(local_c8 + lVar16 * 5 + 4) = uStack_128;
          *(undefined4 *)((longlong)local_c8 + lVar16 * 0x28 + 0x24) = uStack_124;
          uStack_128 = 0;
          uStack_124 = 0;
          pplVar11 = uStack_140;
          goto LAB_149497bb2;
        }
      }
    }
    else {
      uVar8 = FUN_1459f6dfa();
      plVar10 = (longlong *)FUN_144718840(lVar20,uVar8);
      if (plVar10 == (longlong *)0x0) goto LAB_149497bbc;
      iVar7 = (**(code **)(*plVar10 + 0x18))(plVar10,lVar16);
      local_118 = (longlong **)0x0;
      pplStack_110 = (longlong **)0x0;
      (**(code **)(*plVar13 + 0x2d0))(plVar13,&local_118);
      local_78 = (longlong **)0x0;
      uVar6 = *(uint *)(local_118 + (longlong)iVar7 * 5 + 1);
      plVar10 = local_118[(longlong)iVar7 * 5];
      ppuStack_70 = (undefined8 **)CONCAT44(ppuStack_70._4_4_,uVar6);
      if ((longlong)(int)uVar6 == 0) {
        ppuStack_70 = (undefined8 **)(ulonglong)uVar6;
        local_138 = (longlong **)0x0;
LAB_149497a7c:
        uStack_140 = (void *)0x0;
        local_138 = (longlong **)((ulonglong)local_138 & 0xffffffff);
        local_148 = plVar13;
      }
      else {
        FUN_1446dd670(&local_78,uVar6,0);
        memcpy(local_78,plVar10,(longlong)(int)uVar6 * 2);
        pplVar11 = local_78;
        lVar20 = (longlong)(int)ppuStack_70;
        uStack_140 = (void *)0x0;
        local_138 = (longlong **)CONCAT44(local_138._4_4_,(int)ppuStack_70);
        if (lVar20 == 0) goto LAB_149497a7c;
        local_148 = plVar13;
        FUN_1446dd670(&uStack_140,(ulonglong)ppuStack_70 & 0xffffffff,0);
        memcpy(uStack_140,pplVar11,lVar20 * 2);
      }
      local_d8 = *(longlong *)(lVar16 + 0x18);
      FUN_1400021e4(&local_d8,&uStack_130);
      uVar23 = uStack_c0;
      lVar16 = (longlong)(int)uStack_c0;
      uVar6 = (int)uStack_c0 + 1;
      uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar6);
      if (uStack_c0._4_4_ < uVar6) {
        FUN_14452f248(&local_c8,uVar23 & 0xffffffff);
      }
      local_c8[lVar16 * 5] = (longlong)local_148;
      local_c8[lVar16 * 5 + 1] = 0;
      local_c8[lVar16 * 5 + 1] = (longlong)uStack_140;
      *(undefined4 *)(local_c8 + lVar16 * 5 + 2) = (undefined4)local_138;
      *(undefined4 *)((longlong)local_c8 + lVar16 * 0x28 + 0x14) = local_138._4_4_;
      local_c8[lVar16 * 5 + 3] = 0;
      local_c8[lVar16 * 5 + 3] = CONCAT35(uStack_12b,uStack_130);
      *(undefined4 *)(local_c8 + lVar16 * 5 + 4) = uStack_128;
      *(undefined4 *)((longlong)local_c8 + lVar16 * 0x28 + 0x24) = uStack_124;
      uStack_124 = 0;
      uStack_128 = 0;
      uStack_12b = 0;
      uStack_130 = 0;
      local_138 = (longlong **)0x0;
      uStack_140 = (longlong **)0x0;
      if (local_78 != (longlong **)0x0) {
        FUN_1400020a8();
      }
      FUN_141161157(local_118,(ulonglong)pplStack_110 & 0xffffffff);
      pplVar11 = local_118;
LAB_149497bb2:
      if (pplVar11 != (longlong **)0x0) {
        FUN_1400020a8();
      }
    }
LAB_149497bbc:
    FUN_141161157(local_198,uStack_190 & 0xffffffff);
    if (local_198 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    param_2 = local_1c0;
    plVar9 = plVar9 + 2;
  } while (local_1c8 != plVar9);
  local_d8 = 0;
  uStack_d0 = 0;
  param_4 = local_1d0;
  param_1 = local_1d8;
  if (0 < (int)uStack_c0) {
    local_1c8 = (longlong *)(local_1d0 + 0x88);
    lVar21 = 0;
    do {
      plVar9 = local_c8;
      local_e8 = (undefined2 *)0x0;
      local_e0 = *(uint *)(local_c8 + lVar21 * 5 + 2);
      lVar16 = (longlong)(int)local_e0;
      pvVar4 = (void *)local_c8[lVar21 * 5 + 1];
      if (lVar16 == 0) {
        local_dc = 0;
        local_108 = 0;
        uStack_100 = 0;
        local_118 = (longlong **)0x0;
        pplStack_110 = (longlong **)0x0;
      }
      else {
        FUN_1446dd670(&local_e8,local_e0,0);
        memcpy(local_e8,pvVar4,lVar16 * 2);
        puVar17 = local_e8;
        lVar16 = (longlong)(int)local_e0;
        local_118 = (longlong **)0x0;
        local_108 = 0;
        uStack_100 = 0;
        local_f8 = 0;
        pplStack_110 = (longlong **)(ulonglong)local_e0;
        if (lVar16 != 0) {
          FUN_1446dd670(&local_118,local_e0,0);
          memcpy(local_118,puVar17,lVar16 * 2);
        }
      }
      local_f8 = 0;
      uStack_120 = 0;
      local_138 = (longlong **)0x0;
      uStack_130 = 0;
      uStack_12b = 0;
      local_148 = (longlong *)0x0;
      uStack_140 = (longlong **)0x0;
      uStack_128 = (undefined4)local_1b8;
      uStack_124 = (undefined4)((ulonglong)local_1b8 >> 0x20);
      FUN_149458fce(&local_148);
      if (0 < local_b0) {
        iVar7 = 0;
        do {
          uVar23 = uStack_100;
          lVar16 = (longlong)(int)uStack_100;
          uVar6 = (int)uStack_100 + 1;
          uStack_100 = CONCAT44(uStack_100._4_4_,uVar6);
          if (uStack_100._4_4_ < uVar6) {
            FUN_14945d6f6(&local_108,uVar23 & 0xffffffff);
          }
          FUN_14945b490(lVar16 * 0x30 + local_108,local_a8);
          iVar7 = iVar7 + 1;
        } while (iVar7 < local_b0);
      }
      uVar23 = uStack_100;
      lVar16 = (longlong)(int)uStack_100;
      uVar6 = (int)uStack_100 + 1;
      uStack_100 = CONCAT44(uStack_100._4_4_,uVar6);
      if (uStack_100._4_4_ < uVar6) {
        FUN_14945d6f6(&local_108,uVar23 & 0xffffffff);
      }
      plVar9 = plVar9 + lVar21 * 5;
      FUN_14945b490(lVar16 * 0x30 + local_108,&local_148);
      local_158 = (longlong *)0x0;
      uStack_150 = 0;
      (**(code **)(*(longlong *)*plVar9 + 0x2d0))((longlong *)*plVar9,&local_158);
      puVar17 = local_e8;
      local_168 = (void *)0x0;
      lVar16 = (longlong)(int)local_e0;
      local_160 = local_e0;
      if (lVar16 == 0) {
        local_15c = 0;
      }
      else {
        FUN_1446dd670(&local_168,local_e0,0);
        memcpy(local_168,puVar17,lVar16 * 2);
      }
      iVar7 = -1;
      if ((longlong)(int)uStack_150 != 0) {
        plVar13 = local_158;
LAB_149497eb4:
        if (local_160 != *(uint *)(plVar13 + 1)) {
          if (*(uint *)(plVar13 + 1) + local_160 == 1) goto LAB_149497f2a;
          goto LAB_149497f1f;
        }
        if (1 < (int)local_160) {
          lVar16 = 0;
          do {
            uVar2 = *(ushort *)((longlong)local_168 + lVar16);
            uVar3 = *(ushort *)(*plVar13 + lVar16);
            if (uVar2 == uVar3) {
              if (uVar2 == 0) break;
            }
            else {
              if (0x7f < (uVar3 | uVar2)) {
                iVar19 = (uint)uVar2 - (uint)uVar3;
                goto LAB_1494989fd;
              }
              if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3]) goto LAB_1494989fa;
            }
            lVar16 = lVar16 + 2;
          } while( true );
        }
        goto LAB_149497f2a;
      }
LAB_149497f37:
      if (local_168 != (void *)0x0) {
        FUN_1400020a8();
      }
      if ((int)uStack_c0 < 2) {
        local_198 = *(undefined8 **)(param_2 + 0x18);
        FUN_1400021e4(&local_198,&local_78);
        pplVar11 = (longlong **)&DAT_149dfb77a;
        if ((int)ppuStack_70 != 0) {
          pplVar11 = local_78;
        }
        FUN_140002266(&local_198,L"Write%s",pplVar11);
        puVar12 = local_198;
        iVar19 = (int)uStack_190;
      }
      else {
        puVar17 = &DAT_149dfb77a;
        if ((int)plVar9[4] != 0) {
          puVar17 = (undefined2 *)plVar9[3];
        }
        local_198 = *(undefined8 **)(param_2 + 0x18);
        FUN_1400021e4(&local_198,&local_78);
        pplVar11 = (longlong **)&DAT_149dfb77a;
        if ((int)ppuStack_70 != 0) {
          pplVar11 = local_78;
        }
        local_1e8 = (longlong **)CONCAT44(local_1e8._4_4_,(int)lVar21);
        FUN_140002266(&local_198,L"Write%sTo%s%d",pplVar11,puVar17);
        puVar12 = local_198;
        iVar19 = (int)uStack_190;
        local_198 = (undefined8 *)0x0;
        uStack_190 = 0;
        if (local_78 != (longlong **)0x0) {
          FUN_1400020a8();
        }
        FUN_144a8b2a0(&local_78,&local_b8,&DAT_149e19f34);
        pplVar11 = (longlong **)&DAT_149dfb77a;
        if ((int)ppuStack_70 != 0) {
          pplVar11 = local_78;
        }
        puVar18 = puVar12;
        if (iVar19 == 0) {
          puVar18 = (undefined8 *)&DAT_149dfb77a;
        }
        FUN_140002266(&local_198,L"    %s(%s, Value)",puVar18,pplVar11);
        lVar16 = (longlong)(int)uStack_d0;
        uVar6 = (int)uStack_d0 + 1;
        uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar6);
        if (uStack_d0._4_4_ < uVar6) {
          FUN_1447a1bd6(&local_d8);
        }
        lVar16 = lVar16 * 0x10;
        *(undefined8 *)(local_d8 + lVar16) = 0;
        *(undefined8 **)(local_d8 + lVar16) = local_198;
        *(int *)(local_d8 + 8 + lVar16) = (int)uStack_190;
        *(undefined4 *)(local_d8 + 0xc + lVar16) = uStack_190._4_4_;
      }
      uStack_190 = 0;
      local_198 = (undefined8 *)0x0;
      if (local_78 != (longlong **)0x0) {
        FUN_1400020a8();
      }
      local_178 = 0;
      uStack_170 = 0;
      local_188 = 0;
      uStack_180 = 0;
      local_198 = (undefined8 *)*plVar9;
      uStack_190 = CONCAT44(uStack_190._4_4_,iVar7);
      iVar7 = iVar19 + -1;
      if (iVar19 == 0) {
        iVar7 = 0;
      }
      FUN_1402980a2(&local_188,puVar12,iVar7);
      param_4 = local_1d0;
      local_19c = *(undefined4 *)(local_1d0 + 0x90);
      local_78 = (longlong **)&local_19c;
      ppuStack_70 = &local_198;
      FUN_1494d6354(param_7,&local_1a4);
      iVar7 = *(int *)(param_4 + 0x90);
      *(uint *)(param_4 + 0x90) = iVar7 + 1U;
      if (*(uint *)(param_4 + 0x94) < iVar7 + 1U) {
        FUN_1494835ac(local_1c8,iVar7);
      }
      FUN_1494998b6((longlong)iVar7 * 0x28 + *local_1c8,&local_118);
      if (local_178 != 0) {
        FUN_1400020a8();
      }
      if (local_188 != 0) {
        FUN_1400020a8();
      }
      if (puVar12 != (undefined8 *)0x0) {
        FUN_1400020a8(puVar12);
      }
      FUN_141161157(local_158,uStack_150 & 0xffffffff);
      if (local_158 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_138 != (longlong **)0x0) {
        FUN_1400020a8();
      }
      if (local_148 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      FUN_14945b34e(&local_118);
      if (local_e8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar16 = local_b8;
      lVar21 = lVar21 + 1;
    } while (lVar21 < (int)uStack_c0);
    param_1 = local_1d8;
    if ((int)uStack_d0 != 0) {
      local_148 = (longlong *)0x0;
      uStack_140 = (longlong **)0x0;
      lVar21 = (longlong)local_b0;
      if (lVar21 != 0) {
        lVar20 = 0;
        puVar12 = local_198;
        uVar23 = uStack_190;
        do {
          uStack_190 = uVar23;
          local_198 = puVar12;
          puVar17 = &DAT_149dfb77a;
          if (*(int *)(lVar16 + 8 + lVar20) != 0) {
            puVar17 = *(undefined2 **)(lVar16 + lVar20);
          }
          FUN_140002266(&local_198,L"uint %s",puVar17);
          pplVar11 = uStack_140;
          lVar22 = (longlong)(int)uStack_140;
          uVar6 = (int)uStack_140 + 1;
          uStack_140 = (longlong **)CONCAT44(uStack_140._4_4_,uVar6);
          if (uStack_140._4_4_ < uVar6) {
            FUN_1447a1bd6(&local_148,(ulonglong)pplVar11 & 0xffffffff);
          }
          local_148[lVar22 * 2] = 0;
          local_148[lVar22 * 2] = (longlong)local_198;
          local_198 = (undefined8 *)0x0;
          puVar12 = local_198;
          *(int *)(local_148 + lVar22 * 2 + 1) = (int)uStack_190;
          *(undefined4 *)((longlong)local_148 + lVar22 * 0x10 + 0xc) = uStack_190._4_4_;
          uStack_190 = 0;
          uVar23 = uStack_190;
          uStack_190 = 0;
          local_198 = (undefined8 *)0x0;
          lVar20 = lVar20 + 0x10;
        } while (lVar21 * 0x10 != lVar20);
      }
      FUN_144a8b2a0(&local_118,&local_d8,&DAT_14a9c3c40);
      pplVar11 = (longlong **)&DAT_149dfb77a;
      if ((int)pplStack_110 != 0) {
        pplVar11 = local_118;
      }
      local_1a4 = (longlong *)0x0;
      FUN_149458322(local_1b8,&local_78);
      param_2 = local_1c0;
      pplVar14 = (longlong **)&DAT_149dfb77a;
      if ((int)ppuStack_70 != 0) {
        pplVar14 = local_78;
      }
      FUN_144a8b2a0(&local_e8,&local_148,&DAT_149e19f34);
      puVar17 = &DAT_149dfb77a;
      if (local_e0 != 0) {
        puVar17 = local_e8;
      }
      local_198 = *(undefined8 **)(param_2 + 0x18);
      FUN_1400021e4(&local_198,&local_158);
      plVar9 = (longlong *)&DAT_149dfb77a;
      if ((int)uStack_150 != 0) {
        plVar9 = local_158;
      }
      local_1e8 = pplVar14;
      local_1e0 = pplVar11;
      FUN_140002266(&local_198,L"void Write%s(%s, %s Value)\n{\n%s;\n}",plVar9,puVar17);
      iVar7 = (int)param_5[1];
      *(uint *)(param_5 + 1) = iVar7 + 1U;
      if (*(uint *)((longlong)param_5 + 0xc) < iVar7 + 1U) {
        FUN_1447a1bd6(param_5,iVar7);
      }
      param_4 = local_1d0;
      param_1 = local_1d8;
      lVar21 = *param_5;
      lVar16 = (longlong)iVar7 * 0x10;
      *(undefined8 *)(lVar21 + lVar16) = 0;
      *(undefined8 **)(lVar21 + lVar16) = local_198;
      *(int *)(lVar21 + 8 + lVar16) = (int)uStack_190;
      *(undefined4 *)(lVar21 + 0xc + lVar16) = uStack_190._4_4_;
      uStack_190 = 0;
      local_198 = (undefined8 *)0x0;
      if (local_158 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_e8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_78 != (longlong **)0x0) {
        FUN_1400020a8();
      }
      if (local_118 != (longlong **)0x0) {
        FUN_1400020a8();
      }
      FUN_1447a1747(local_148,(ulonglong)uStack_140 & 0xffffffff);
      if (local_148 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_149498523:
  plVar9 = param_1 + 0x21;
  cVar5 = (**(code **)(param_1[0x21] + 0x30))(plVar9,param_2);
  if ((((cVar5 != '\0') || (cVar5 = (**(code **)(*plVar9 + 0x38))(plVar9,param_2), cVar5 != '\0'))
      && (0 < *(int *)(lVar15 + 0x10))) &&
     (plVar13 = *(longlong **)*local_1b0, plVar13 != (longlong *)0x0)) {
    lVar21 = FUN_14599bc42();
    if ((*(int *)(lVar21 + 0x38) <= *(int *)(plVar13[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar13[2] + 0x30) + (longlong)*(int *)(lVar21 + 0x38) * 8) ==
        lVar21 + 0x30)) {
      cVar5 = (**(code **)(*plVar9 + 0x30))(plVar9,param_2);
      if (cVar5 != '\0') {
        local_78 = (longlong **)0x0;
        ppuStack_70 = (undefined8 **)0x0;
        local_1d8 = plVar9;
        (**(code **)(*plVar13 + 0x2d0))(plVar13);
        uVar23 = 1;
        do {
          local_198 = *(undefined8 **)(param_2 + 0x18);
          FUN_1400021e4(&local_198,&local_148);
          FUN_1494995da(&local_e8,uVar23 & 0xffffffff,&local_148);
          if (local_148 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          FUN_1494998b6(&local_198,local_78 + uVar23 * 5);
          if (0 < (int)uStack_180) {
            lVar21 = 0;
            lVar15 = 0;
            do {
              FUN_149458fce(local_188 + lVar21);
              lVar15 = lVar15 + 1;
              lVar21 = lVar21 + 0x30;
            } while (lVar15 < (int)uStack_180);
          }
          uStack_128 = 0;
          uStack_124 = 0;
          uStack_120 = 0;
          uStack_11b = 0;
          local_138 = (longlong **)0x0;
          uStack_130 = 0;
          uStack_12b = 0;
          uStack_140 = (longlong **)CONCAT44(uStack_140._4_4_,(int)uVar23);
          iVar7 = local_e0 - 1;
          if (local_e0 == 0) {
            iVar7 = 0;
          }
          local_148 = plVar13;
          FUN_1402980a2(&local_138,local_e8,iVar7);
          lVar21 = local_1d0;
          local_1a4 = (longlong *)CONCAT44(local_1a4._4_4_,*(undefined4 *)(local_1d0 + 0x90));
          local_118 = &local_1a4;
          pplStack_110 = &local_148;
          FUN_1494d6354(param_7,&local_158,&local_118);
          iVar7 = *(int *)(lVar21 + 0x90);
          *(uint *)(lVar21 + 0x90) = iVar7 + 1U;
          if (*(uint *)(lVar21 + 0x94) < iVar7 + 1U) {
            FUN_1494835ac((longlong *)(param_4 + 0x88),iVar7);
          }
          FUN_1494998b6((longlong)iVar7 * 0x28 + *(longlong *)(param_4 + 0x88),&local_198);
          if (CONCAT44(uStack_124,uStack_128) != 0) {
            FUN_1400020a8();
          }
          if (local_138 != (longlong **)0x0) {
            FUN_1400020a8();
          }
          FUN_14945b34e(&local_198);
          if (local_e8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          uVar23 = uVar23 + 1;
        } while (uVar23 != 4);
        FUN_141161157(local_78,(ulonglong)ppuStack_70 & 0xffffffff);
        plVar9 = local_1d8;
        if (local_78 != (longlong **)0x0) {
          FUN_1400020a8();
          plVar9 = local_1d8;
        }
      }
      cVar5 = (**(code **)(*plVar9 + 0x38))(plVar9,param_2);
      if (cVar5 != '\0') {
        local_78 = (longlong **)0x0;
        ppuStack_70 = (undefined8 **)0x0;
        (**(code **)(*plVar13 + 0x2c8))(plVar13,&local_78);
        FUN_1494998b6(&local_198,local_78 + 10);
        if (0 < (int)uStack_180) {
          lVar15 = 0;
          lVar21 = 0;
          do {
            FUN_149458fce(local_188 + lVar15);
            lVar21 = lVar21 + 1;
            lVar15 = lVar15 + 0x30;
          } while (lVar21 < (int)uStack_180);
        }
        uStack_128 = 0;
        uStack_124 = 0;
        uStack_120 = 0;
        uStack_11b = 0;
        uStack_140 = (longlong **)CONCAT44(uStack_140._4_4_,2);
        local_118 = *(longlong ***)(param_2 + 0x18);
        local_148 = plVar13;
        FUN_1400021e4(&local_118,&local_e8);
        puVar17 = local_e8;
        if (local_e0 == 0) {
          puVar17 = &DAT_149dfb77a;
        }
        FUN_140002266(&local_118,L"Read%s",puVar17);
        local_138 = local_118;
        uStack_130 = SUB85(pplStack_110,0);
        uStack_12b = (undefined3)((ulonglong)pplStack_110 >> 0x28);
        local_118 = (longlong **)0x0;
        pplStack_110 = (longlong **)0x0;
        if (local_e8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        lVar21 = local_1d0;
        plVar9 = (longlong *)(local_1d0 + 0x78);
        local_118 = &local_158;
        local_158 = (longlong *)CONCAT44(local_158._4_4_,*(undefined4 *)(local_1d0 + 0x80));
        pplStack_110 = &local_148;
        FUN_1494d6354(param_6,&local_e8);
        iVar7 = *(int *)(lVar21 + 0x80);
        *(uint *)(lVar21 + 0x80) = iVar7 + 1U;
        if (*(uint *)(lVar21 + 0x84) < iVar7 + 1U) {
          FUN_1494835ac(plVar9,iVar7);
        }
        FUN_1494998b6((longlong)iVar7 * 0x28 + *plVar9,&local_198);
        if (CONCAT44(uStack_124,uStack_128) != 0) {
          FUN_1400020a8();
        }
        if (local_138 != (longlong **)0x0) {
          FUN_1400020a8();
        }
        FUN_14945b34e(&local_198);
        FUN_141161157(local_78,(ulonglong)ppuStack_70 & 0xffffffff);
        if (local_78 != (longlong **)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  FUN_1447a1747(local_d8,uStack_d0 & 0xffffffff);
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  FUN_14452f20b(local_c8,uStack_c0 & 0xffffffff);
  plVar9 = local_c8;
LAB_1494977a0:
  if (plVar9 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_b8,local_b0);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if (local_a8[2] != 0) {
    FUN_1400020a8();
  }
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149498b32 FUN_149498b32 body=651 status=ok
// SIG undefined FUN_149498b32(void)

void FUN_149498b32(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_108 [36];
  undefined4 local_e4;
  longlong *local_e0;
  undefined4 local_d8;
  longlong local_d0 [5];
  int local_a8;
  longlong local_a0;
  int local_98;
  longlong local_88;
  undefined8 uStack_80;
  undefined4 *local_78;
  longlong **local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar2 = FUN_1459f6d0e();
  plVar3 = (longlong *)FUN_144718840(param_3,uVar2);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*(longlong *)(param_1 + 0x108) + 0x18))(param_1 + 0x108,&local_e0);
    FUN_149499958(&local_e0,local_d0 + 4);
    (**(code **)(*plVar3 + 0x10))(plVar3,local_d0 + 4);
    if (local_d0[4] != 0) {
      FUN_1400020a8();
    }
    if (local_d0[0] != 0) {
      FUN_1400020a8();
    }
    (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
  }
  local_88 = 0;
  uStack_80 = 0;
  (**(code **)(*param_3 + 0x2c8))(param_3,&local_88);
  if (0 < (int)uStack_80) {
    plVar3 = local_d0 + 4;
    lVar6 = 0;
    do {
      FUN_1494998b6(plVar3,lVar6 * 0x28 + local_88);
      if ((longlong)local_98 != 0) {
        lVar5 = (longlong)local_98 * 0x30;
        lVar4 = local_a0;
        do {
          *(undefined2 *)(lVar4 + 0x28) = 0;
          FUN_149458fce(lVar4);
          lVar4 = lVar4 + 0x30;
          lVar5 = lVar5 + -0x30;
        } while (lVar5 != 0);
      }
      local_d0[2] = 0;
      local_d0[3] = 0;
      local_d0[0] = 0;
      local_d0[1] = 0;
      local_d8 = (undefined4)lVar6;
      iVar1 = local_a8 + -1;
      if (local_a8 == 0) {
        iVar1 = 0;
      }
      local_e0 = param_3;
      FUN_1402980a2(local_d0,local_d0[4],iVar1);
      if (local_d0[2] != 0) {
        FUN_1400020a8();
      }
      local_d0[2] = 0;
      local_d0[3] = 0;
      local_e4 = *(undefined4 *)(param_4 + 0x80);
      local_78 = &local_e4;
      local_70 = &local_e0;
      FUN_1494d6354(param_5,local_64,&local_78);
      iVar1 = *(int *)(param_4 + 0x80);
      *(uint *)(param_4 + 0x80) = iVar1 + 1U;
      if (*(uint *)(param_4 + 0x84) < iVar1 + 1U) {
        FUN_1494835ac((longlong *)(param_4 + 0x78),iVar1);
      }
      FUN_1494998b6((longlong)iVar1 * 0x28 + *(longlong *)(param_4 + 0x78),plVar3);
      if (local_d0[2] != 0) {
        FUN_1400020a8();
      }
      if (local_d0[0] != 0) {
        FUN_1400020a8();
      }
      FUN_14945b34e(plVar3);
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)uStack_80);
  }
  FUN_141161157(local_88);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149498dbe FUN_149498dbe body=323 status=ok
// SIG undefined FUN_149498dbe(void)

longlong * FUN_149498dbe(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (iVar2 != 0) {
    FUN_1494d6178(param_2);
  }
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar3 = (longlong)iStack_54;
      lVar1 = *local_70;
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1494d61d8(param_2,iVar2);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = *(undefined8 *)(lVar3 * 0x10 + lVar1);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149498f04 FUN_149498f04 body=1477 status=ok
// SIG undefined FUN_149498f04(void)

longlong * FUN_149498f04(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  undefined8 uVar9;
  wchar_t *pwVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_158 [32];
  longlong local_138;
  ulonglong uStack_130;
  undefined1 local_128 [4];
  undefined1 local_124 [4];
  longlong *local_120 [2];
  undefined8 local_110;
  longlong *local_108;
  undefined1 local_100 [8];
  longlong *local_f8 [2];
  longlong *local_e8 [2];
  longlong local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  wchar_t **local_b8;
  ulonglong *local_b0;
  longlong local_a8;
  undefined4 local_a0;
  wchar_t *local_98;
  undefined4 local_90;
  longlong local_88;
  longlong local_78;
  wchar_t *local_68;
  undefined4 local_60;
  longlong *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  (**(code **)(*(longlong *)(param_1 + 0x108) + 0x18))(param_1 + 0x108,&local_98);
  cVar8 = FUN_1494994ca(&local_98);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (cVar8 == '\0') {
    local_98 = L"NoExecutionDomain";
    local_90 = 0x11;
    FUN_1446e940c(&local_68,&local_98);
    local_98 = L"OptimusKernelBase";
    local_90 = 0x11;
    FUN_1446e940c(&local_a8,&local_98);
    FUN_140208bae(&local_98,&local_a8,&local_68,
                  L"Kernel has undefined Execution Domain, please use the Details panel to select a valid domain"
                 );
    FUN_14023423e(param_2,&local_98);
    if (local_98 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_98 + 0x10))();
    }
    goto LAB_149498ff7;
  }
  FUN_149499536(&local_98,param_3);
  local_138 = 0;
  uStack_130 = 0;
  if ((longlong)*(int *)(param_1 + 0x58) == 0) {
LAB_149499049:
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
  }
  else {
    plVar11 = *(longlong **)(param_1 + 0x50);
    plVar3 = plVar11 + *(int *)(param_1 + 0x58);
    do {
      lVar5 = *plVar11;
      if (*(char *)(lVar5 + 0x28) == '\x01') {
        uVar9 = FUN_14949959a(&local_138);
        FUN_1445296a4(&local_98,param_2,uVar9,lVar5);
        if (*param_2 != 0) goto LAB_149499057;
        iVar4 = *(int *)(lVar5 + 0xa8);
        if ((longlong)iVar4 != 0) {
          lVar5 = *(longlong *)(lVar5 + 0xa0);
          lVar12 = 0;
          do {
            lVar6 = *(longlong *)(lVar5 + lVar12);
            FUN_1445296a4(&local_98,param_2,uVar9,lVar6);
            if (*param_2 != 0) goto LAB_149499057;
            FUN_1494947ba(lVar6 + 0x70,&local_d8);
            if (local_d8 == 0) {
              FUN_1494e66cc(lVar6,local_100);
              FUN_145715fae(local_f8,local_100);
              local_68 = L"InvalidPinType";
              local_60 = 0xe;
              FUN_1446e940c(local_124,&local_68);
              local_68 = L"OptimusKernelBase";
              local_60 = 0x11;
              FUN_1446e940c(local_128,&local_68);
              pwVar10 = L"Invalid data type on pin \'{0}\'";
LAB_14949919d:
              FUN_140208bae(local_120,local_128,local_124,pwVar10);
              FUN_14023409e(&local_110,local_120,1);
              local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
              FUN_14023423e(local_58,local_f8);
              local_b8 = &local_68;
              local_b0 = &local_48;
              FUN_14010d304(&local_a8,&local_b8);
              local_c8 = local_110;
              local_c0 = local_108;
              if (local_108 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_108 + 1) = (int)local_108[1] + 1;
                UNLOCK();
              }
              FUN_14010c016(local_e8,&local_c8,&local_a8);
              FUN_14007f2db(local_a8,local_a0);
              if (local_a8 != 0) {
                FUN_1400020a8();
              }
              if (local_58[0] != (longlong *)0x0) {
                (**(code **)(*local_58[0] + 0x10))();
              }
              plVar7 = local_108;
              if (local_108 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_108 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_108)(local_108);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar7 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar7 + 0x10))(plVar7);
                  }
                }
              }
              if (local_f8[0] != (longlong *)0x0) {
                (**(code **)(*local_f8[0] + 0x10))();
              }
              FUN_14023423e(param_2,local_e8);
              if (local_e8[0] != (longlong *)0x0) {
                (**(code **)(*local_e8[0] + 0x10))();
              }
              if (local_120[0] != (longlong *)0x0) {
                (**(code **)(*local_120[0] + 0x10))();
              }
            }
            else {
              if (*(longlong *)(local_d8 + 0x18) == 0) {
                FUN_1494e66cc(lVar6,local_100);
                FUN_145715fae(local_f8,local_100);
                local_68 = L"InvalidPinValueType";
                local_60 = 0x13;
                FUN_1446e940c(local_124,&local_68);
                local_68 = L"OptimusKernelBase";
                local_60 = 0x11;
                FUN_1446e940c(local_128,&local_68);
                pwVar10 = L"Invalid shader value type on pin \'{0}\'";
                goto LAB_14949919d;
              }
              *param_2 = 0;
              *(undefined4 *)(param_2 + 1) = 0;
            }
            plVar7 = local_d0;
            if (local_d0 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_d0 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_d0)(local_d0);
                LOCK();
                piVar2 = (int *)((longlong)plVar7 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar7 + 0x10))(plVar7);
                }
              }
            }
            if (*param_2 != 0) goto LAB_149499057;
            lVar12 = lVar12 + 8;
          } while ((longlong)iVar4 * 8 != lVar12);
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar3);
    if (((int)uStack_130 < 1) || (*(int *)(local_138 + 8) != *(int *)(local_138 + 0x34)))
    goto LAB_149499049;
    local_68 = L"NoPrimaryBinding";
    local_60 = 0x10;
    FUN_1446e940c(&local_a8,&local_68);
    local_68 = L"OptimusKernelBase";
    local_60 = 0x11;
    FUN_1446e940c(&local_b8,&local_68);
    FUN_140208bae(&local_68,&local_b8,&local_a8,L"Primary Group has no Component Binding");
    FUN_14023423e(param_2,&local_68);
    if (local_68 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_68 + 0x10))();
    }
  }
LAB_149499057:
  FUN_1494d625d(local_138,uStack_130 & 0xffffffff);
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
LAB_149498ff7:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1494994ca FUN_1494994ca body=107 status=ok
// SIG undefined FUN_1494994ca(void)

ulonglong FUN_1494994ca(int *param_1)

{
  undefined8 unaff_RBX;
  bool bVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_1 == 0) {
    bVar1 = *(longlong *)(param_1 + 1) == 0;
  }
  else {
    FUN_140ded208(param_1 + 4,&local_28);
    bVar1 = local_20 < 2;
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return (CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar1) ^ 1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149499536 FUN_149499536 body=100 status=ok
// SIG undefined FUN_149499536(void)

void * FUN_149499536(void *param_1,void *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  iVar1 = *(int *)((longlong)param_2 + 0x28);
  pvVar2 = *(void **)((longlong)param_2 + 0x20);
  *(int *)((longlong)param_1 + 0x28) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 4;
  }
  else {
    if (pvVar2 != (void *)0x0) {
      param_2 = pvVar2;
    }
    FUN_1494ceff2(param_1,iVar1);
    pvVar2 = *(void **)((longlong)param_1 + 0x20);
    if (*(void **)((longlong)param_1 + 0x20) == (void *)0x0) {
      pvVar2 = param_1;
    }
    memcpy(pvVar2,param_2,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 14949959a FUN_14949959a body=63 status=ok
// SIG undefined FUN_14949959a(void)

longlong FUN_14949959a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1494d62c0(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x50 + *param_1;
  FUN_1494d6298(lVar2);
  return lVar2;
}



// FUNCTION 1494995da FUN_1494995da body=236 status=ok
// SIG undefined FUN_1494995da(void)

longlong * FUN_1494995da(longlong *param_1,char param_2,undefined8 *param_3)

{
  wchar_t *pwVar1;
  undefined2 *puVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 == '\x03') {
    if (*(int *)(param_3 + 1) == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*param_3;
    }
    pwVar1 = L"AtomicMax%s";
  }
  else if (param_2 == '\x02') {
    if (*(int *)(param_3 + 1) == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*param_3;
    }
    pwVar1 = L"AtomicMin%s";
  }
  else {
    if (param_2 != '\x01') goto LAB_149499695;
    if (*(int *)(param_3 + 1) == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*param_3;
    }
    pwVar1 = L"AtomicAdd%s";
  }
  FUN_140002266(&local_28,pwVar1,puVar2);
  if (&local_28 == param_1) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_28;
    *(undefined4 *)(param_1 + 1) = local_20;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_1c;
  }
LAB_149499695:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494996c8 FUN_1494996c8 body=213 status=ok
// SIG undefined FUN_1494996c8(void)

ulonglong FUN_1494996c8(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_145ba540e();
  plVar2 = *(longlong **)(lVar1 + 0x110);
  if (plVar2 == (longlong *)0x0) {
    FUN_140aa6c08(lVar1);
    plVar2 = *(longlong **)(lVar1 + 0x110);
  }
  (**(code **)(*plVar2 + 0x328))(plVar2,&local_38);
  if (local_30 < 1) {
    uVar3 = 0xffffffff;
  }
  else {
    lVar1 = 0;
    uVar3 = 0;
    do {
      FUN_1494e66cc(param_1,&local_40);
      if (local_40 == *(longlong *)(local_38 + lVar1)) goto LAB_149499767;
      uVar3 = uVar3 + 1;
      lVar1 = lVar1 + 0x30;
    } while ((longlong)uVar3 < (longlong)local_30);
    uVar3 = 0xffffffff;
  }
LAB_149499767:
  FUN_149482fc4(local_38);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14949979e FUN_14949979e body=279 status=ok
// SIG undefined FUN_14949979e(void)

undefined8 * FUN_14949979e(undefined8 *param_1,int *param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_78 [32];
  void **local_58;
  ulonglong *local_50;
  longlong local_48;
  undefined4 local_40;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  if (*param_2 == 1) {
    FUN_140056680(&local_38,L"Index");
    local_50 = &local_28;
    local_58 = &local_38;
    FUN_146027ed4(param_1);
  }
  else {
    if (*param_2 != 0) goto LAB_1494997ca;
    local_38 = (void *)0x0;
    local_30 = param_2[4];
    lVar1 = (longlong)local_30;
    _Src = *(void **)(param_2 + 2);
    if (lVar1 == 0) {
      local_2c = 0;
    }
    else {
      FUN_1401b309e(&local_38,local_30,0);
      memcpy(local_38,_Src,lVar1 << 3);
    }
    FUN_14949ed0a(&local_48,&local_38);
    FUN_1410e5bda(param_1,&local_48);
    FUN_1447a1747(local_48,local_40);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1494997ca:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1494998b6 FUN_1494998b6 body=161 status=ok
// SIG undefined FUN_1494998b6(void)

undefined8 * FUN_1494998b6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  uVar2 = param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_14945b3e8(param_1 + 2,iVar1,0);
    FUN_14945b45b(param_1[2],uVar2,iVar1);
  }
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



// FUNCTION 149499958 FUN_149499958 body=102 status=ok
// SIG undefined FUN_149499958(void)

undefined8 * FUN_149499958(int *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (*param_1 == 0) {
    FUN_1400021e4(param_1 + 1,param_2);
  }
  else {
    *param_2 = 0;
    iVar1 = param_1[6];
    _Src = *(void **)(param_1 + 4);
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
    }
  }
  return param_2;
}



// FUNCTION 1494999c6 FUN_1494999c6 body=769 status=ok
// SIG undefined FUN_1494999c6(void)

longlong *
FUN_1494999c6(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,longlong *param_5
             ,longlong *param_6,longlong param_7)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  longlong local_68;
  int local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = param_3;
  if (param_3 != 0 && (param_2 != 0 && param_1 != 0)) {
    iVar8 = *(int *)((longlong)param_4 + 4);
    if ((int)*param_4 < *(int *)((longlong)param_4 + 4)) {
      iVar8 = (int)*param_4;
    }
    if ((int)param_4[1] <= iVar8) {
      iVar8 = (int)param_4[1];
    }
    plVar10 = (longlong *)0x0;
    if ((iVar8 < 1) || (*(int *)(param_7 + 8) < 2)) goto LAB_149499a07;
    if ((0 < (longlong)(int)param_5[1]) && (0 < (int)param_6[1])) {
      plVar9 = (longlong *)*param_5;
      plVar7 = plVar9 + (longlong)(int)param_5[1] * 0x10;
      do {
        plVar10 = (longlong *)0x0;
        if ((*plVar9 == 0) ||
           (cVar3 = FUN_14945fc10(plVar9 + 1), plVar10 = (longlong *)0x0, cVar3 == '\0'))
        goto LAB_149499a07;
        plVar9 = plVar9 + 0x10;
      } while (plVar9 != plVar7);
      if ((longlong)(int)param_6[1] != 0) {
        plVar9 = (longlong *)*param_6;
        plVar7 = plVar9 + (longlong)(int)param_6[1] * 0x10;
        plVar10 = (longlong *)0x0;
        do {
          if ((*plVar9 == 0) || (cVar3 = FUN_14945fc10(plVar9 + 1), cVar3 == '\0'))
          goto LAB_149499a07;
          plVar9 = plVar9 + 0x10;
        } while (plVar9 != plVar7);
      }
      FUN_1400021e4(&local_58,local_78);
      FUN_140ba7826(&local_68,L"Optimus_ComputeKernel_",local_78);
      iVar8 = local_60 + -1;
      if (local_60 == 0) {
        iVar8 = 0;
      }
      FUN_1446f82e2(&local_50,iVar8,local_68,1);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
      FUN_149499cc8(&local_68,param_1,local_50);
      lVar4 = FUN_145ba6914();
      plVar10 = (longlong *)FUN_149499d5b(param_1,local_68);
      (**(code **)(*plVar10 + 0x310))(plVar10,lVar4);
      plVar10[0xe] = *(longlong *)(lVar4 + 0x70);
      plVar10[0x4a] = param_2;
      plVar10[0x4b] = param_3;
      plVar10[0x50] = *param_4;
      *(int *)(plVar10 + 0x51) = (int)param_4[1];
      FUN_145ebd534(plVar10 + 0x52,param_5);
      FUN_145ebd534(plVar10 + 0x54,param_6);
      FUN_144a787a6(plVar10 + 0x56,param_7);
      plVar9 = plVar10 + 10;
      do {
        plVar7 = plVar9;
        plVar9 = (longlong *)(*plVar7 + 0x18);
      } while (*plVar7 != 0);
      lVar4 = param_5[1];
      if ((longlong)(int)lVar4 != 0) {
        lVar2 = *param_5;
        lVar11 = 0;
        do {
          if ((*(int *)(lVar2 + 0x38 + lVar11) == 0) && (*(int *)(lVar2 + 0x48 + lVar11) == 0)) {
            uVar5 = FUN_149466e92(lVar2 + 8 + lVar11);
            lVar6 = FUN_149499e14(uVar5,plVar10,*(undefined8 *)(lVar2 + lVar11));
            *(byte *)(lVar6 + 0x38) = *(byte *)(lVar6 + 0x38) | 1;
            *plVar7 = lVar6;
            plVar7 = (longlong *)(lVar6 + 0x18);
          }
          lVar11 = lVar11 + 0x80;
        } while ((longlong)(int)lVar4 * 0x80 != lVar11);
      }
      (**(code **)(*plVar10 + 0x2a8))(plVar10);
      FUN_140010366(plVar10,1);
      uVar1 = *(uint *)((longlong)plVar10 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      FUN_1447f71cc(lVar4,0x40000000);
      goto LAB_149499a07;
    }
  }
  plVar10 = (longlong *)0x0;
LAB_149499a07:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar10;
}



// FUNCTION 149499cc8 FUN_149499cc8 body=146 status=ok
// SIG undefined FUN_149499cc8(void)

undefined8 * FUN_149499cc8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_1446f8646();
  local_40 = 0;
  local_48 = 0;
  lVar2 = FUN_140be85e0(uVar1,param_2,param_3,0);
  if (lVar2 != 0) {
    uVar1 = FUN_1446f8646();
    local_48 = 0;
    FUN_140af9fb2(&local_30,param_2,uVar1,param_3);
    param_3 = local_30;
  }
  *param_1 = param_3;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149499d5b FUN_149499d5b body=183 status=ok
// SIG undefined FUN_149499d5b(void)

undefined8 FUN_149499d5b(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_145ba682a();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 3;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149499e14 FUN_149499e14 body=225 status=ok
// SIG undefined FUN_149499e14(void)

undefined8 FUN_149499e14(undefined8 *param_1,ulonglong param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined8 local_70;
  code *local_68 [2];
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140f4f540();
  FUN_140fc887e(local_68,*param_1);
  if (local_68[0] == (code *)0x0) {
    uVar2 = 0;
  }
  else {
    local_78 = param_2 | 1;
    if (((param_2 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
      FUN_1456cec3c(param_2 & 0xfffffffffffffffe);
    }
    pcVar1 = local_68[0];
    plVar3 = local_58;
    if (local_58 == (longlong *)0x0) {
      plVar3 = local_48;
    }
    local_70 = param_3;
    uVar2 = (**(code **)(*plVar3 + 8))();
    uVar2 = (*pcVar1)(uVar2,&local_78,&local_70);
    if (local_68[0] != (code *)0x0) {
      plVar3 = local_48;
      if (local_58 != (longlong *)0x0) {
        plVar3 = local_58;
      }
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149499ef6 FUN_149499ef6 body=294 status=ok
// SIG undefined FUN_149499ef6(void)

void FUN_149499ef6(longlong param_1,longlong param_2,longlong param_3)

{
  void *_Src;
  longlong lVar1;
  void *_Dst;
  longlong *plVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != 0 && param_2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x110);
    if (lVar1 == 0) {
      FUN_140aa6c08(param_1);
      lVar1 = *(longlong *)(param_1 + 0x110);
    }
    if (lVar1 != param_2) {
      if (param_1 == 0) {
        local_38 = (longlong *)0x0;
      }
      else {
        local_38 = *(longlong **)(param_1 + 0x50);
      }
      local_30 = 0xffffffff;
      local_2c = 0x101;
      local_2a = 0;
      local_40 = param_1;
      FUN_144a2daf0(&local_40);
      if (local_38 != (longlong *)0x0) {
        do {
          plVar2 = local_38;
          if (param_2 != param_3) {
            _Src = (void *)(param_3 + *(int *)((longlong)local_38 + 0x44));
            _Dst = (void *)(*(int *)((longlong)local_38 + 0x44) + param_2);
            if ((*(byte *)((longlong)local_38 + 0x3b) & 0x40) == 0) {
              (**(code **)(*local_38 + 0x100))(local_38,_Dst,_Src,(int)local_38[6]);
              plVar2 = local_38;
            }
            else {
              memcpy(_Dst,_Src,
                     (longlong)(int)local_38[6] * (longlong)*(int *)((longlong)local_38 + 0x34));
            }
          }
          local_38 = (longlong *)plVar2[3];
          FUN_144a2daf0(&local_40);
        } while (local_38 != (longlong *)0x0);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14949a01e FUN_14949a01e body=28 status=ok
// SIG undefined FUN_14949a01e(void)

void FUN_14949a01e(undefined8 param_1)

{
  thunk_FUN_1446f1718();
  FUN_1408a750e(param_1,1);
  return;
}



// FUNCTION 14949a03a FUN_14949a03a body=195 status=ok
// SIG undefined FUN_14949a03a(void)

undefined8 FUN_14949a03a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != 0) {
    lVar1 = FUN_145ba682a();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_14949a05e;
  }
  lVar2 = 0;
LAB_14949a05e:
  FUN_1400021e4(lVar2 + 600,local_40);
  FUN_14170c674(local_30,local_40,0);
  FUN_140233b1a(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14949a0fe FUN_14949a0fe body=74 status=ok
// SIG undefined FUN_14949a0fe(void)

undefined8 * FUN_14949a0fe(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != 0) {
    lVar1 = FUN_145ba682a();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_14949a112;
  }
  lVar2 = 0;
LAB_14949a112:
  *param_2 = *(undefined8 *)(lVar2 + 0x250);
  return param_2;
}



// FUNCTION 14949a148 FUN_14949a148 body=82 status=ok
// SIG undefined FUN_14949a148(void)

undefined8 FUN_14949a148(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != 0) {
    lVar1 = FUN_145ba682a();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_14949a15c;
  }
  lVar2 = 0;
LAB_14949a15c:
  FUN_1400021e4(lVar2 + 600,param_2);
  return param_2;
}



// FUNCTION 14949a19a FUN_14949a19a body=83 status=ok
// SIG undefined FUN_14949a19a(void)

undefined8 * FUN_14949a19a(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != 0) {
    lVar1 = FUN_145ba682a();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_14949a1ae;
  }
  lVar2 = 0;
LAB_14949a1ae:
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar2 + 0x288);
  *param_2 = *(undefined8 *)(lVar2 + 0x280);
  return param_2;
}



// FUNCTION 14949a1ee FUN_14949a1ee body=231 status=ok
// SIG undefined FUN_14949a1ee(void)

undefined8 FUN_14949a1ee(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  longlong local_68 [3];
  longlong local_50 [2];
  undefined1 local_3c [12];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*param_1 + 0x308))(param_1,local_3c);
  (**(code **)(*param_1 + 0x300))(param_1,local_50);
  lVar2 = param_1[2];
  if (lVar2 != 0) {
    lVar1 = FUN_145ba682a();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_14949a25c;
  }
  lVar2 = 0;
LAB_14949a25c:
  local_68[0] = 0;
  local_68[1] = 0;
  FUN_1401031ac(param_1,0,local_68);
  local_78 = local_3c;
  FUN_14949a2d6(param_2,local_68,lVar2 + 0x2b0,local_50);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14949a2d6 FUN_14949a2d6 body=760 status=ok
// SIG undefined FUN_14949a2d6(void)

undefined8
FUN_14949a2d6(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             int *param_5)

{
  void *pvVar1;
  int iVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  undefined2 *local_a0;
  undefined2 *local_98;
  undefined2 *local_90;
  int local_88;
  undefined2 *local_80;
  int local_78;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  undefined4 local_54;
  undefined2 *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_50 = (undefined2 *)0x0;
  local_48 = *(int *)(param_3 + 1);
  lVar4 = (longlong)local_48;
  pvVar1 = (void *)*param_3;
  if (lVar4 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,pvVar1,lVar4 * 2);
  }
  puVar5 = &DAT_149dfb77a;
  FUN_1448097c4(&local_50,&DAT_149e01ea8,&DAT_149dfb77a,1);
  local_60 = (undefined2 *)0x0;
  local_58 = *(int *)(param_2 + 1);
  lVar4 = (longlong)local_58;
  pvVar1 = (void *)*param_2;
  if (lVar4 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,local_58,0);
    memcpy(local_60,pvVar1,lVar4 * 2);
  }
  FUN_1494bd26d(&local_60);
  local_a0 = (undefined2 *)CONCAT44(local_a0._4_4_,0xffffffff);
  local_a8._0_4_ = 0;
  iVar2 = FUN_1447ee042(&local_50,L"KERNEL",6,0);
  FUN_140056680(&local_70,L"#include \"/Engine/Private/ComputeShaderUtils.ush\"");
  if (*(int *)(param_4 + 1) != 0) {
    puVar5 = (undefined2 *)*param_4;
  }
  local_a8 = (undefined2 *)CONCAT44(local_a8._4_4_,param_5[2]);
  local_a0 = puVar5;
  FUN_140002266(&local_80,
                L"[numthreads(%d,%d,%d)]\nvoid %s(uint3 GroupId : SV_GroupID, uint GroupIndex : SV_GroupIndex)"
                ,*param_5,param_5[1]);
  FUN_140002266(&local_90,L"GetUnWrappedDispatchThreadId(GroupId, GroupIndex, %d)",
                param_5[1] * *param_5 * param_5[2]);
  if (iVar2 == -1) {
    local_98 = &DAT_149dfb77a;
    if (local_48 != 0) {
      local_98 = local_50;
    }
    local_a0 = &DAT_149dfb77a;
    if (local_58 != 0) {
      local_a0 = local_60;
    }
    local_a8 = &DAT_149dfb77a;
    if (local_88 != 0) {
      local_a8 = local_90;
    }
    puVar5 = &DAT_149dfb77a;
    if (local_78 != 0) {
      puVar5 = local_80;
    }
    puVar6 = &DAT_149dfb77a;
    if (local_68 != 0) {
      puVar6 = local_70;
    }
    pwVar3 = L"%s\n%s\n{\nuint Index = %s;\n#line 1 \"%s\"\n%s\n}\n";
  }
  else {
    FUN_1448097c4(&local_50,L"KERNEL",L"void __kernel_func(uint Index)",0);
    local_98 = &DAT_149dfb77a;
    if (local_88 != 0) {
      local_98 = local_90;
    }
    local_a0 = &DAT_149dfb77a;
    if (local_78 != 0) {
      local_a0 = local_80;
    }
    local_a8 = &DAT_149dfb77a;
    if (local_68 != 0) {
      local_a8 = local_70;
    }
    puVar5 = &DAT_149dfb77a;
    if (local_48 != 0) {
      puVar5 = local_50;
    }
    puVar6 = &DAT_149dfb77a;
    if (local_58 != 0) {
      puVar6 = local_60;
    }
    pwVar3 = L"#line 1 \"%s\"\n%s\n\n%s\n\n%s { __kernel_func(%s); }\n";
  }
  FUN_140002266(param_1,pwVar3,puVar6,puVar5);
  if (local_90 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_80 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_70 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14949a5d0 FUN_14949a5d0 body=322 status=ok
// SIG undefined FUN_14949a5d0(void)

void FUN_14949a5d0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0 [48];
  undefined1 local_70 [48];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != 0) {
    lVar1 = FUN_145ba682a();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_14949a60b;
  }
  lVar2 = 0;
LAB_14949a60b:
  if ((longlong)*(int *)(lVar2 + 0x298) != 0) {
    lVar3 = (longlong)*(int *)(lVar2 + 0x298) << 7;
    lVar1 = *(longlong *)(lVar2 + 0x290) + 0x38;
    do {
      FUN_14945f130(local_70,lVar1 + -0x30);
      local_b0 = 0;
      uStack_a8 = 0;
      local_b8 = local_70;
      FUN_149495630(param_1,*(undefined8 *)(lVar1 + -0x38),1,lVar1);
      lVar1 = lVar1 + 0x80;
      lVar3 = lVar3 + -0x80;
    } while (lVar3 != 0);
  }
  if ((longlong)*(int *)(lVar2 + 0x2a8) != 0) {
    lVar1 = (longlong)*(int *)(lVar2 + 0x2a8) << 7;
    lVar2 = *(longlong *)(lVar2 + 0x2a0) + 0x38;
    do {
      FUN_14945f130(local_a0,lVar2 + -0x30);
      local_b0 = 0;
      uStack_a8 = 0;
      local_b8 = local_a0;
      FUN_149495630(param_1,*(undefined8 *)(lVar2 + -0x38),2,lVar2);
      lVar2 = lVar2 + 0x80;
      lVar1 = lVar1 + -0x80;
    } while (lVar1 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14949a714 FUN_14949a714 body=175 status=ok
// SIG undefined FUN_14949a714(void)

undefined8 * FUN_14949a714(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + -0xf8);
  if (lVar3 != 0) {
    lVar2 = FUN_145ba682a();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_14949a72e;
  }
  lVar3 = 0;
LAB_14949a72e:
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar3 + 0x268);
  *param_2 = *(undefined8 *)(lVar3 + 0x260);
  param_2[2] = 0;
  iVar1 = *(int *)(lVar3 + 0x278);
  _Src = *(void **)(lVar3 + 0x270);
  *(int *)(param_2 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_2 + 2,iVar1,0);
    memcpy((void *)param_2[2],_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 14949a7cc FUN_14949a7cc body=580 status=ok
// SIG undefined FUN_14949a7cc(void)

longlong * FUN_14949a7cc(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50 [2];
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400021e4(param_2,local_50);
  FUN_140ba7826(&local_40,L"OptimusNode_ConstantValue_",local_50);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  puVar8 = local_40;
  if (local_38 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  uVar4 = FUN_145ba69fe();
  plVar5 = (longlong *)FUN_140277b32(uVar4,param_1,puVar8,0);
  if (plVar5 == (longlong *)0x0) {
    lVar6 = FUN_145ba6ae8();
    puVar8 = local_40;
    if (local_38 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_58,puVar8,1);
    plVar5 = (longlong *)FUN_14949aa11(param_1,local_58);
    (**(code **)(*plVar5 + 0x310))(plVar5,lVar6);
    plVar5[0xe] = *(longlong *)(lVar6 + 0x70);
    *(byte *)((longlong)plVar5 + 0xd7) = *(byte *)((longlong)plVar5 + 0xd7) | 1;
    plVar5[0x4a] = *param_2;
    plVar5[0x4b] = param_2[1];
    uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
    lVar6 = param_2[3];
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(int *)(plVar5 + 0x4c) = (int)param_2[2];
    *(undefined4 *)((longlong)plVar5 + 0x264) = uVar2;
    *(int *)(plVar5 + 0x4d) = (int)lVar6;
    *(undefined4 *)((longlong)plVar5 + 0x26c) = uVar3;
    FUN_144a787a6(plVar5 + 0x4e,param_2 + 4);
    uVar4 = FUN_149466e92(param_2);
    FUN_1446ddc76(&local_60,"Value",1);
    lVar6 = FUN_149499e14(uVar4,plVar5,local_60);
    *(byte *)(lVar6 + 0x38) = *(byte *)(lVar6 + 0x38) | 1;
    uVar4 = FUN_149466e92(param_2);
    FUN_1446ddc76(&local_68,&DAT_14a5eb650,1);
    lVar7 = FUN_149499e14(uVar4,plVar5,local_68);
    *(byte *)(lVar7 + 0x28) = *(byte *)(lVar7 + 0x28) | 0x40;
    (**(code **)(*plVar5 + 0x2a0))(plVar5,lVar7);
    (**(code **)(*plVar5 + 0x2a0))(plVar5,lVar6);
    (**(code **)(*plVar5 + 0x2a8))(plVar5);
    FUN_140010366(plVar5,1);
    uVar1 = *(uint *)((longlong)plVar5 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    FUN_1447f71cc(lVar6,0x40000000);
    if (plVar5[0x22] == 0) {
      FUN_140aa6c08(plVar5);
    }
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (param_2[4] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar5;
}



// FUNCTION 14949aa11 FUN_14949aa11 body=183 status=ok
// SIG undefined FUN_14949aa11(void)

undefined8 FUN_14949aa11(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_145ba69fe();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 3;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14949aac9 FUN_14949aac9 body=19 status=ok
// SIG undefined FUN_14949aac9(void)

void FUN_14949aac9(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014949aad9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x170))();
  return;
}



// FUNCTION 14949aadc FUN_14949aadc body=563 status=ok
// SIG undefined FUN_14949aadc(void)

undefined8 FUN_14949aadc(longlong *param_1,undefined8 param_2)

{
  void *pvVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  void *local_c8;
  int local_c0;
  undefined4 local_bc;
  longlong local_b8;
  int local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  void *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_141215e22(param_2);
  FUN_1446f470e(&local_48,L"Value",1);
  local_78 = (undefined8 *)0x0;
  uStack_70 = 1;
  FUN_1401b309e(&local_78,1,0);
  *local_78 = local_48;
  lVar3 = FUN_14949ad10(param_1 + -0x21,&local_78);
  if (local_78 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (lVar3 != 0) {
    lVar3 = FUN_1494e6f58(lVar3);
    (**(code **)(*param_1 + 0x18))(param_1,&local_78);
    if (lVar3 != 0) {
      cVar2 = FUN_14945fc10(&local_78);
      pvVar1 = local_58;
      if (cVar2 != '\0') {
        iVar4 = *(int *)(lVar3 + 0x34) * *(int *)(lVar3 + 0x30);
        lVar5 = (longlong)(param_1 + -0x21) + (longlong)*(int *)(lVar3 + 0x44);
        local_a8 = (undefined4)local_78;
        uStack_a4 = local_78._4_4_;
        uStack_a0 = uStack_70;
        uStack_9c = uStack_6c;
        local_98 = local_68;
        uStack_94 = uStack_64;
        uStack_90 = uStack_60;
        uStack_8c = uStack_5c;
        local_88 = (void *)0x0;
        lVar3 = (longlong)local_50;
        local_80 = local_50;
        if (lVar3 == 0) {
          local_7c = 0;
        }
        else {
          FUN_1446dd670(&local_88,local_50,0);
          memcpy(local_88,pvVar1,lVar3 * 2);
        }
        FUN_1494e817e(param_2,&local_a8);
        pvVar1 = local_58;
        uStack_e0 = CONCAT44(uStack_6c,uStack_70);
        local_e8 = local_78;
        local_d8 = local_68;
        uStack_d4 = uStack_64;
        uStack_d0 = uStack_60;
        uStack_cc = uStack_5c;
        local_c8 = (void *)0x0;
        local_c0 = local_50;
        local_b8 = lVar5;
        local_b0 = iVar4;
        if ((longlong)local_50 == 0) {
          local_bc = 0;
        }
        else {
          FUN_1446dd670(&local_c8,local_50,0);
          memcpy(local_c8,pvVar1,(longlong)local_50 * 2);
        }
        FUN_1494e8230(param_2,&local_e8,&local_b8);
      }
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14949ad10 FUN_14949ad10 body=389 status=ok
// SIG undefined FUN_14949ad10(void)

longlong FUN_14949ad10(longlong param_1,longlong *param_2,undefined8 param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)(param_1 + 0xb8);
  uVar7 = 0;
  if ((longlong)(int)param_2[1] != 0) {
    lVar8 = 0;
    uVar7 = 0;
    do {
      uVar3 = *(ulonglong *)(*param_2 + lVar8);
      uVar9 = (uint)(uVar3 >> 0x10);
      uVar9 = (int)(uVar3 >> 0x20) + (int)(uVar3 & 0xffff) +
              (int)(uVar7 >> 2) + (uint)uVar7 * 0x40 + (int)uVar3 * 0x10000 +
              (uVar9 << 0x13 | uVar9 & 0xffff) + (int)((uVar3 & 0xffff) >> 4) + 0x9e3779b9;
      param_4 = (ulonglong)uVar9;
      uVar7 = (ulonglong)((uint)uVar7 ^ uVar9);
      lVar8 = lVar8 + 8;
    } while ((longlong)(int)param_2[1] * 8 != lVar8);
  }
  iVar4 = FUN_1494e2ba8(plVar1,uVar7,param_2,param_4);
  if (iVar4 != -1) {
    if ((*plVar1 + (longlong)iVar4 * 0x20 != 0) &&
       (plVar5 = (longlong *)((longlong)iVar4 * 0x20 + *plVar1 + 0x10), plVar5 != (longlong *)0x0))
    {
      lVar8 = *plVar5;
      goto LAB_14949addb;
    }
  }
  plVar5 = *(longlong **)(param_1 + 0x50);
  iVar4 = *(int *)(param_1 + 0x58);
  local_58 = 0;
  if ((longlong)(int)param_2[1] != 0) {
    plVar6 = (longlong *)*param_2;
    plVar2 = plVar6 + (int)param_2[1];
    do {
      if (iVar4 == 0) {
LAB_14949ae67:
        local_58 = 0;
        break;
      }
      lVar8 = (longlong)iVar4 << 3;
      while (local_58 = *plVar5, *(longlong *)(local_58 + 0x18) != *plVar6) {
        plVar5 = plVar5 + 1;
        lVar8 = lVar8 + -8;
        if (lVar8 == 0) goto LAB_14949ae67;
      }
      if (plVar5 == (longlong *)0x0) goto LAB_14949ae67;
      plVar5 = *(longlong **)(local_58 + 0xa0);
      iVar4 = *(int *)(local_58 + 0xa8);
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar2);
  }
  local_48 = &local_58;
  local_50 = param_2;
  FUN_1494e2c24(plVar1,local_3c);
  lVar8 = local_58;
LAB_14949addb:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar8;
}



// FUNCTION 14949ae96 FUN_14949ae96 body=150 status=ok
// SIG undefined FUN_14949ae96(void)

undefined1 * FUN_14949ae96(longlong param_1,undefined1 *param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 1;
  FUN_14949b022(param_1 + -0x108,&local_38);
  puVar1 = local_38;
  if (local_30 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_28,puVar1,1);
  FUN_14949af2d(param_2 + 4,local_28);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14949af2d FUN_14949af2d body=244 status=ok
// SIG undefined FUN_14949af2d(void)

undefined8 FUN_14949af2d(undefined8 param_1,undefined8 param_2)

{
  wint_t _C;
  int iVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = param_2;
  FUN_1400021e4(&local_40,&local_50);
  if (local_48 - 2U < 0x7fffffff) {
    lVar3 = 0;
    do {
      puVar2 = local_50;
      iVar1 = iswalpha(local_50[lVar3]);
      if (((iVar1 == 0) && (_C = puVar2[lVar3], _C != 0x5f)) &&
         ((lVar3 == 0 || (iVar1 = iswdigit(_C), iVar1 == 0)))) {
        puVar2[lVar3] = 0x5f;
      }
      lVar3 = lVar3 + 1;
      iVar1 = local_48 + -1;
      if (local_48 == 0) {
        iVar1 = 0;
      }
    } while (lVar3 < iVar1);
  }
  puVar2 = local_50;
  if (local_48 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_1446f470e(param_1,puVar2,1);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14949b022 FUN_14949b022 body=285 status=ok
// SIG undefined FUN_14949b022(void)

undefined8 FUN_14949b022(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong local_58;
  undefined8 uStack_50;
  longlong local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar2 = FUN_141155906();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_140056680(&local_40,L"<Unknown>");
      (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x20))(lVar1 + 0x28,&local_58);
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      local_40 = local_58;
      uStack_38 = uStack_50;
      goto LAB_14949b0ba;
    }
  }
  FUN_140056680(&local_40,L"<Unknown>");
LAB_14949b0ba:
  local_58 = 0;
  uStack_50 = 0;
  local_30 = *(undefined8 *)(param_1 + 0x18);
  FUN_1400021e4(&local_30,local_68);
  FUN_1494bd7c2(param_2,&local_40,local_68,&local_58);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14949b140 FUN_14949b140 body=150 status=ok
// SIG undefined FUN_14949b140(void)

undefined8 FUN_14949b140(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + -0xf8);
  if (lVar1 != 0) {
    lVar2 = FUN_145ba69fe();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_14945f130(param_2,lVar1 + 0x250);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  local_28 = 0;
  uStack_20 = 0;
  FUN_140e6511c(param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14949b1da FUN_14949b1da body=33 status=ok
// SIG undefined FUN_14949b1da(void)

undefined8 FUN_14949b1da(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145ba6ae8();
  FUN_1414d7078(uVar1,param_2);
  return param_2;
}



// FUNCTION 14949b1fc FUN_14949b1fc body=251 status=ok
// SIG undefined FUN_14949b1fc(void)

undefined8 * FUN_14949b1fc(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + -0x100);
  if (lVar3 == 0) {
LAB_14949b221:
    *param_2 = 0;
    param_2[1] = 0;
    if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  lVar1 = FUN_145ba69fe();
  lVar3 = *(longlong *)(lVar3 + 0x10);
  if ((*(int *)(lVar3 + 0x38) < *(int *)(lVar1 + 0x38)) ||
     (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30)) goto LAB_14949b221;
  lVar3 = *(longlong *)(param_1 + -0x100);
  if (lVar3 != 0) {
    lVar1 = FUN_145ba69fe();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_14949b29a;
  }
  lVar3 = 0;
LAB_14949b29a:
  uVar2 = FUN_149466e92(lVar3 + 0x250);
  FUN_1400021e4(uVar2,&local_30);
  puVar4 = local_30;
  if (local_28 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"DataType=%s",puVar4);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 14949b2fe FUN_14949b2fe body=243 status=ok
// SIG undefined FUN_14949b2fe(void)

undefined8 FUN_14949b2fe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong *local_68;
  undefined1 local_60 [48];
  longlong local_30;
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_20 = 0;
  cVar3 = FUN_140e134ac(param_3,L"DataType=");
  if (cVar3 == '\0') {
    uVar4 = 0;
  }
  else {
    FUN_140f4f540();
    FUN_140f4f5a6(&DAT_14cc1c7d8,&local_30,local_20);
    if (local_30 == 0) {
      uVar4 = 0;
    }
    else {
      local_70 = local_30;
      local_68 = local_28;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_28 + 1) = (int)local_28[1] + 1;
        UNLOCK();
      }
      FUN_140e6511c(local_60,&local_70);
      uVar4 = FUN_14949a7cc(param_2,local_60);
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)local_28 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_28 + 0x10))(local_28);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14949b3f2 FUN_14949b3f2 body=508 status=ok
// SIG undefined FUN_14949b3f2(void)

void FUN_14949b3f2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_118 [32];
  longlong local_f8 [2];
  longlong *local_e8 [2];
  undefined8 local_d8;
  longlong *local_d0;
  undefined1 local_c8 [32];
  longlong local_a8;
  longlong *local_98;
  undefined4 local_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  longlong *local_70;
  undefined4 *local_68;
  ulonglong *local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_48 [4];
  longlong *local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  (**(code **)(*(longlong *)(param_1 + 0x108) + 0x18))(param_1 + 0x108,local_c8);
  lVar3 = FUN_149466e92(local_c8);
  local_98 = *(longlong **)(lVar3 + 8);
  if (local_98 != (longlong *)0x0) {
    (**(code **)(*local_98 + 8))();
  }
  local_90 = *(undefined4 *)(lVar3 + 0x10);
  FUN_140056680(local_f8,L"{0} Constant");
  FUN_140233b1a(local_e8,local_f8);
  FUN_14023409e(&local_d8,local_e8,1);
  local_48[0] = 4;
  FUN_14023423e(local_38,&local_98);
  local_68 = local_48;
  local_60 = &local_28;
  FUN_14010d304(&local_58);
  local_78 = local_d8;
  local_70 = local_d0;
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(local_88,&local_78,&local_58);
  FUN_14007f2db(local_58,local_50);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != (longlong *)0x0) {
    (**(code **)(*local_38[0] + 0x10))();
  }
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar2 = (int *)((longlong)local_d0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_d0 + 0x10))(local_d0);
      }
    }
  }
  if (local_98 != (longlong *)0x0) {
    (**(code **)(*local_98 + 0x10))();
  }
  FUN_1458d0f32(param_1,local_88);
  if (local_e8[0] != (longlong *)0x0) {
    (**(code **)(*local_e8[0] + 0x10))();
  }
  if (local_f8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  FUN_1494be0c8(param_1,*(undefined8 *)(param_1 + 0x10),0);
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14949b600 FUN_14949b600 body=68 status=ok
// SIG undefined FUN_14949b600(void)

void FUN_14949b600(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*param_2 + 8);
  switchD_143c3d4dc::caseD_21(param_1,plVar1);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_14bd1ee48);
                    /* WARNING: Could not recover jumptable at 0x00014949b641. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_14bd1ee48);
  return;
}



// FUNCTION 14949b644 FUN_14949b644 body=121 status=ok
// SIG undefined FUN_14949b644(void)

ulonglong FUN_14949b644(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(char *)(param_1 + 0x29) == '\x02') {
    lVar2 = FUN_1494e64f0();
    if (lVar2 != 0) {
      lVar3 = FUN_145a96ec4();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        plVar4 = (longlong *)
                 (**(code **)(*(longlong *)(lVar2 + 0x108) + 0x10))(lVar2 + 0x108,DAT_14c951640);
        if (plVar4 != (longlong *)0x0) {
          cVar1 = (**(code **)(*plVar4 + 0x2b0))(plVar4);
          if (cVar1 == '\0') {
            uVar5 = 0;
          }
        }
      }
    }
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 14949b6be FUN_14949b6be body=199 status=ok
// SIG undefined FUN_14949b6be(void)

undefined8 FUN_14949b6be(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong local_68 [4];
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = param_1[0x2c];
  local_40 = (undefined4)param_1[0x2d];
  (**(code **)(*param_1 + 0x300))(param_1,local_68 + 2);
  local_68[0] = 0;
  local_68[1] = 0;
  FUN_1401031ac(param_1,0,local_68);
  local_78 = &local_48;
  FUN_14949a2d6(param_2,local_68,param_1 + 0x3e,local_68 + 2);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14949b786 FUN_14949b786 body=108 status=ok
// SIG undefined FUN_14949b786(void)

undefined8 * FUN_14949b786(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x40);
  *param_2 = *(undefined8 *)(param_1 + 0x38);
  param_2[2] = 0;
  iVar1 = *(int *)(param_1 + 0x50);
  _Src = *(void **)(param_1 + 0x48);
  *(int *)(param_2 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_2 + 2,iVar1,0);
    memcpy((void *)param_2[2],_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 14949b806 FUN_14949b806 body=148 status=ok
// SIG undefined FUN_14949b806(void)

undefined8 FUN_14949b806(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145ba4aea();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14949b918 FUN_14949b918 body=213 status=ok
// SIG undefined FUN_14949b918(void)

undefined8 * FUN_14949b918(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if ((longlong)*(int *)(param_1 + 0x90) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x88);
    lVar1 = (longlong)*(int *)(param_1 + 0x90) << 7;
    do {
      if (*plVar3 == param_3) {
        if (plVar3 != (longlong *)0x0) goto LAB_14949b9d8;
        break;
      }
      plVar3 = plVar3 + 0x10;
      lVar1 = lVar1 + -0x80;
    } while (lVar1 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0xa0) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x98);
    lVar1 = (longlong)*(int *)(param_1 + 0xa0) << 7;
    do {
      if (*plVar3 == param_3) {
        if (plVar3 != (longlong *)0x0) {
          uVar4 = 0;
          goto LAB_14949b9de;
        }
        break;
      }
      plVar3 = plVar3 + 0x10;
      lVar1 = lVar1 + -0x80;
    } while (lVar1 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0xb0) != 0) {
    lVar2 = *(longlong *)(param_1 + 0xa8);
    lVar1 = lVar2 + (longlong)*(int *)(param_1 + 0xb0) * 0x18;
    do {
      if ((longlong)*(int *)(lVar2 + 0x10) != 0) {
        plVar3 = *(longlong **)(lVar2 + 8);
        lVar5 = (longlong)*(int *)(lVar2 + 0x10) << 7;
        do {
          if (*plVar3 == param_3) {
            if (plVar3 != (longlong *)0x0) goto LAB_14949b9d8;
            break;
          }
          plVar3 = plVar3 + 0x10;
          lVar5 = lVar5 + -0x80;
        } while (lVar5 != 0);
      }
      lVar2 = lVar2 + 0x18;
    } while (lVar2 != lVar1);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
LAB_14949b9d8:
  uVar4 = 1;
LAB_14949b9de:
  FUN_14949b9ee(param_2,plVar3,uVar4);
  return param_2;
}



// FUNCTION 14949b9ee FUN_14949b9ee body=1826 status=ok
// SIG undefined FUN_14949b9ee(void)

/* WARNING: Removing unreachable block (ram,0x00014949befa) */
/* WARNING: Removing unreachable block (ram,0x00014949bb4f) */
/* WARNING: Removing unreachable block (ram,0x00014949bd8c) */
/* WARNING: Removing unreachable block (ram,0x00014949c04a) */

undefined8 FUN_14949b9ee(undefined8 param_1,longlong param_2,char param_3)

{
  void *_Src;
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  longlong unaff_RBP;
  longlong lVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined8 uVar10;
  undefined1 auStack_f8 [32];
  undefined2 *local_d8;
  undefined2 *local_d0;
  char local_b9;
  undefined8 local_b8;
  longlong local_b0;
  undefined2 *local_a8;
  int local_a0;
  undefined2 *local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14949979e(&local_68,param_2 + 0x38);
  puVar7 = local_68;
  lVar8 = (longlong)(int)uStack_60;
  local_b8 = param_1;
  if (lVar8 == 0) {
    uVar4 = 0;
  }
  else {
    unaff_RBP = 0;
    local_b9 = param_3;
    local_b0 = param_2;
    do {
      local_78 = (undefined2 *)0x0;
      uVar3 = *(uint *)((longlong)puVar7 + unaff_RBP + 8);
      _Src = *(void **)((longlong)puVar7 + unaff_RBP);
      local_70 = CONCAT44(local_70._4_4_,uVar3);
      if ((longlong)(int)uVar3 == 0) {
        local_70 = (ulonglong)uVar3;
      }
      else {
        FUN_1446dd670(&local_78,uVar3,0);
        memcpy(local_78,_Src,(longlong)(int)uVar3 * 2);
      }
      FUN_140002266(&local_88,L"uint %s");
      uVar4 = uStack_50;
      lVar6 = (longlong)(int)uStack_50;
      uVar3 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
      if (uStack_50._4_4_ < uVar3) {
        FUN_1447a1bd6(&local_58,uVar4 & 0xffffffff);
      }
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(local_58 + lVar6) = 0;
      *(undefined2 **)(local_58 + lVar6) = local_88;
      *(int *)(local_58 + 8 + lVar6) = (int)local_80;
      *(undefined4 *)(local_58 + 0xc + lVar6) = local_80._4_4_;
      local_80 = 0;
      local_88 = (undefined2 *)0x0;
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      unaff_RBP = unaff_RBP + 0x10;
    } while (lVar8 * 0x10 != unaff_RBP);
    uVar4 = uStack_60 & 0xffffffff;
    param_2 = local_b0;
    param_3 = local_b9;
  }
  uVar10 = local_b8;
  FUN_1447a1747(local_68,uVar4);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (param_3 == '\0') {
    local_68 = (undefined2 *)0x0;
    uStack_60 = 0;
    lVar8 = param_2 + 8;
    FUN_144529f81(&local_88,lVar8);
    puVar7 = &DAT_149dfb77a;
    if ((int)local_80 != 0) {
      puVar7 = local_88;
    }
    FUN_144a8b2a0(&local_98,&local_58,&DAT_149e19f34);
    puVar9 = &DAT_149dfb77a;
    if ((int)local_90 != 0) {
      puVar9 = local_98;
    }
    FUN_1400021e4(param_2,&local_a8);
    puVar5 = &DAT_149dfb77a;
    if (local_a0 != 0) {
      puVar5 = local_a8;
    }
    local_d8 = puVar7;
    FUN_140002266(&local_78,L"void Write%s(%s, %s Value);",puVar5,puVar9);
    uVar4 = uStack_60;
    lVar6 = (longlong)(int)uStack_60;
    uVar3 = (int)uStack_60 + 1;
    uStack_60 = CONCAT44(uStack_60._4_4_,uVar3);
    if (uStack_60._4_4_ < uVar3) {
      FUN_1447a1bd6(&local_68,uVar4 & 0xffffffff);
    }
    *(undefined8 *)(local_68 + lVar6 * 8) = 0;
    *(undefined2 **)(local_68 + lVar6 * 8) = local_78;
    *(int *)(local_68 + lVar6 * 8 + 4) = (int)local_70;
    *(undefined4 *)(local_68 + lVar6 * 8 + 6) = local_70._4_4_;
    local_70 = 0;
    local_78 = (undefined2 *)0x0;
    if (local_a8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_98 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    cVar2 = FUN_144529aec(param_2);
    if (cVar2 != '\0') {
      uVar4 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
      do {
        FUN_1400021e4(param_2,&local_88);
        FUN_1494995da(&local_78,uVar4 & 0xffffffff,&local_88);
        if (local_88 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        FUN_144529f81(&local_88,lVar8);
        puVar7 = &DAT_149dfb77a;
        if ((int)local_80 != 0) {
          puVar7 = local_88;
        }
        FUN_144a8b2a0(&local_a8,&local_58,&DAT_149e19f34);
        local_d8 = &DAT_149dfb77a;
        if (local_a0 != 0) {
          local_d8 = local_a8;
        }
        puVar9 = &DAT_149dfb77a;
        if ((int)local_70 != 0) {
          puVar9 = local_78;
        }
        puVar5 = &DAT_149dfb77a;
        if ((int)local_80 != 0) {
          puVar5 = local_88;
        }
        local_d0 = puVar7;
        FUN_140002266(&local_98,L"%s %s(%s, %s Value);",puVar5,puVar9);
        uVar1 = uStack_60;
        lVar6 = (longlong)(int)uStack_60;
        uVar3 = (int)uStack_60 + 1;
        uStack_60 = CONCAT44(uStack_60._4_4_,uVar3);
        if (uStack_60._4_4_ < uVar3) {
          FUN_1447a1bd6(&local_68,uVar1 & 0xffffffff);
        }
        *(undefined8 *)(local_68 + lVar6 * 8) = 0;
        *(undefined2 **)(local_68 + lVar6 * 8) = local_98;
        *(int *)(local_68 + lVar6 * 8 + 4) = (int)local_90;
        *(undefined4 *)(local_68 + lVar6 * 8 + 6) = local_90._4_4_;
        local_90 = 0;
        local_98 = (undefined2 *)0x0;
        if (local_a8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_88 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_78 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        cVar2 = (char)uVar4 + '\x01';
        uVar4 = CONCAT71((int7)(uVar4 >> 8),cVar2);
      } while (cVar2 != '\x04');
    }
    if (*(char *)(param_2 + 0x79) == '\x01') {
      FUN_144a8b2a0(&local_88,&local_58,&DAT_149e19f34);
      puVar7 = &DAT_149dfb77a;
      if ((int)local_80 != 0) {
        puVar7 = local_88;
      }
      FUN_1400021e4(param_2,&local_98);
      puVar9 = &DAT_149dfb77a;
      if ((int)local_90 != 0) {
        puVar9 = local_98;
      }
      FUN_144529f81(&local_a8,lVar8);
      puVar5 = &DAT_149dfb77a;
      if (local_a0 != 0) {
        puVar5 = local_a8;
      }
      local_d8 = puVar7;
      FUN_140002266(&local_78,L"%s Read%s(%s);",puVar5,puVar9);
      uVar4 = uStack_60;
      lVar8 = (longlong)(int)uStack_60;
      uVar3 = (int)uStack_60 + 1;
      uStack_60 = CONCAT44(uStack_60._4_4_,uVar3);
      if (uStack_60._4_4_ < uVar3) {
        FUN_1447a1bd6(&local_68,uVar4 & 0xffffffff);
      }
      *(undefined8 *)(local_68 + lVar8 * 8) = 0;
      *(undefined2 **)(local_68 + lVar8 * 8) = local_78;
      *(int *)(local_68 + lVar8 * 8 + 4) = (int)local_70;
      *(undefined4 *)(local_68 + lVar8 * 8 + 6) = local_70._4_4_;
      local_70 = 0;
      local_78 = (undefined2 *)0x0;
      if (local_a8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_98 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_88 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    uVar10 = local_b8;
    FUN_144a8b2a0(local_b8,&local_68,&DAT_149e01f72);
    FUN_1447a1747(local_68,uStack_60 & 0xffffffff);
  }
  else {
    FUN_144a8b2a0(&local_68,&local_58,&DAT_149e19f34);
    puVar7 = &DAT_149dfb77a;
    if ((int)uStack_60 != 0) {
      puVar7 = local_68;
    }
    FUN_1400021e4(param_2,&local_78);
    puVar9 = &DAT_149dfb77a;
    if ((int)local_70 != 0) {
      puVar9 = local_78;
    }
    FUN_144529f81(&local_88,param_2 + 8);
    puVar5 = &DAT_149dfb77a;
    if ((int)local_80 != 0) {
      puVar5 = local_88;
    }
    local_d8 = puVar7;
    FUN_140002266(uVar10,L"%s Read%s(%s);",puVar5,puVar9);
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14949c112 FUN_14949c112 body=152 status=ok
// SIG undefined FUN_14949c112(void)

undefined8 FUN_14949c112(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((longlong)*(int *)(param_1 + 0xa0) != 0) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x98) + lVar3) == param_2) {
        lVar4 = *(longlong *)(param_1 + 0x98) - lVar4;
        if (lVar4 != 0) {
          FUN_140f4f540();
          FUN_1494947ba(lVar4 + 8,local_28);
          cVar1 = FUN_14949c1ac(local_28);
          uVar2 = 1;
          if (cVar1 != '\0') goto LAB_14949c162;
        }
        break;
      }
      lVar4 = lVar4 + -0x80;
      lVar3 = lVar3 + 0x80;
    } while (-lVar4 != (longlong)*(int *)(param_1 + 0xa0) * 0x80);
  }
  uVar2 = 0;
LAB_14949c162:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 14949c1ac FUN_14949c1ac body=181 status=ok
// SIG undefined FUN_14949c1ac(void)

ulonglong FUN_14949c1ac(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar4 = &local_28;
  FUN_14948729e(plVar4);
  if ((longlong)local_20 == 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    lVar5 = 0;
    do {
      bVar6 = *(longlong *)(local_28 + lVar5) == *param_1;
      plVar4 = (longlong *)CONCAT71((int7)((ulonglong)plVar4 >> 8),bVar6);
      if (bVar6) break;
      bVar6 = (longlong)local_20 * 0x10 + -0x10 != lVar5;
      lVar5 = lVar5 + 0x10;
    } while (bVar6);
  }
  FUN_1494d2cbd();
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[1];
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)plVar4 & 0xffffffff;
}



// FUNCTION 14949c2aa FUN_14949c2aa body=2873 status=ok
// SIG undefined FUN_14949c2aa(void)

longlong *
FUN_14949c2aa(longlong param_1,longlong *param_2,longlong param_3,char param_4,longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  wchar_t *pwVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  byte bVar11;
  int iVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_1d8 [47];
  char local_1a9;
  longlong *local_1a8;
  undefined1 local_1a0 [4];
  undefined1 local_19c [4];
  undefined8 *local_198;
  undefined1 *local_190;
  undefined8 local_188;
  int iStack_180;
  undefined8 uStack_17c;
  wchar_t *local_170;
  undefined4 local_168;
  undefined1 local_160;
  longlong local_158;
  undefined8 uStack_150;
  wchar_t *local_148;
  undefined4 local_140;
  wchar_t *local_138;
  int local_130;
  longlong local_118;
  undefined8 local_110;
  int local_104;
  longlong local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  int iStack_e0;
  undefined8 uStack_dc;
  wchar_t *local_d0;
  longlong local_c8;
  ulonglong local_c0;
  undefined1 local_b8 [4];
  int local_b4;
  longlong local_a8;
  undefined4 local_a0;
  longlong local_98;
  int local_90;
  undefined4 uStack_8c;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_1a8 = param_2;
  FUN_1494947ba(param_3 + 0x70,&local_98);
  lVar15 = local_98;
  plVar4 = (longlong *)CONCAT44(uStack_8c,local_90);
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
  if (lVar15 != 0) {
    bVar11 = (**(code **)(*(longlong *)(param_1 + -8) + 0x28))(param_1 + -8,param_3 + 0x30);
    FUN_1494947ba(param_3 + 0x70,&local_98);
    plVar4 = (longlong *)CONCAT44(uStack_8c,local_90);
    bVar7 = *(byte *)(local_98 + 0x48);
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
    if ((bVar11 & bVar7) == 0) {
      if (param_5 != 0) {
        FUN_14020fad6(param_5,L"Can\'t add pin with this type");
      }
      *local_1a8 = 0;
      local_1a8[1] = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1d8);
    }
  }
  local_c8 = 0;
  local_c0 = 0x400000000;
  local_1a9 = param_4;
  FUN_1494e6b1c(param_3,&local_98);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  local_158 = 0;
  uStack_150 = 0;
  iVar12 = *(int *)(param_1 + -200);
  if ((longlong)iVar12 != 0) {
    lVar15 = *(longlong *)(param_1 + -0xd0);
    lVar18 = 0;
    do {
      uVar6 = uStack_150;
      lVar17 = *(longlong *)(lVar15 + lVar18);
      if ((*(char *)(lVar17 + 0x29) == '\x01') && (*(char *)(lVar17 + 0x28) == '\x01')) {
        lVar16 = (longlong)(int)uStack_150;
        uVar8 = (int)uStack_150 + 1;
        uStack_150 = CONCAT44(uStack_150._4_4_,uVar8);
        if (uStack_150._4_4_ < uVar8) {
          FUN_149482de0(&local_158,uVar6 & 0xffffffff);
        }
        *(longlong *)(local_158 + lVar16 * 8) = lVar17;
      }
      lVar18 = lVar18 + 8;
    } while ((longlong)iVar12 * 8 != lVar18);
  }
  lVar15 = local_158;
  plVar4 = local_1a8;
  if (local_1a9 == '\x01') {
    if (*(char *)(param_3 + 0x29) == '\x02') {
      *local_1a8 = 0;
      local_1a8[1] = 0;
      bVar7 = FUN_14949b644(param_3);
      if (0 < (int)uStack_150) {
        lVar15 = 0;
        do {
          lVar18 = *(longlong *)(local_158 + lVar15 * 8);
          local_188 = (wchar_t *)0x0;
          uStack_17c = (wchar_t *)0x0;
          FUN_144a5dc74(&local_170);
          local_160 = 0;
          iStack_180 = CONCAT31(iStack_180._1_3_,1);
          local_188 = *(wchar_t **)(lVar18 + 0x18);
          local_118 = 0;
          local_110 = 0x400000000;
          uStack_17c = local_188;
          FUN_1494e6b56(lVar18,&local_e8,&local_138);
          if (local_118 != 0) {
            FUN_1400020a8();
          }
          FUN_14949cde4(&local_e8,&local_138);
          if (((local_104 < local_130) || (local_90 == local_64)) || (iStack_e0 == local_b4)) {
            local_160 = 1;
          }
          else {
            local_160 = 0;
            local_148 = L"AdderPinToolTipComponentMismatch";
            local_140 = 0x20;
            FUN_1446e940c(local_19c,&local_148);
            local_148 = L"OptimusNode_CustomComputeKernel";
            local_140 = 0x1f;
            FUN_1446e940c(local_1a0,&local_148);
            FUN_140208bae(&local_148,local_1a0,local_19c,
                          L"Add pin only, can\'t auto-link due to group\'s component binding not matching that of the source pin"
                         );
            FUN_140008f88(&local_170,&local_148);
            if (local_148 != (wchar_t *)0x0) {
              (**(code **)(*(longlong *)local_148 + 0x10))();
            }
          }
          if (lVar15 != 0 && bVar7 == 0) {
            local_160 = 0;
            local_148 = L"AdderPinToolTipCannotLinkNonUnified";
            local_140 = 0x23;
            FUN_1446e940c(local_19c,&local_148);
            local_148 = L"OptimusNode_CustomComputeKernel";
            local_140 = 0x1f;
            FUN_1446e940c(local_1a0,&local_148);
            FUN_140208bae(&local_148,local_1a0,local_19c,
                          L"Add pin only, can\'t link due to data interface not supporting unified dispatch, consider insert kernel inbetween"
                         );
            FUN_140008f88(&local_170,&local_148);
            if (local_148 != (wchar_t *)0x0) {
              (**(code **)(*(longlong *)local_148 + 0x10))();
            }
          }
          plVar4 = local_1a8;
          iVar12 = (int)local_1a8[1];
          *(uint *)(local_1a8 + 1) = iVar12 + 1U;
          if (*(uint *)((longlong)local_1a8 + 0xc) < iVar12 + 1U) {
            FUN_1494d6d44(local_1a8,iVar12);
          }
          lVar18 = *plVar4;
          lVar17 = (longlong)iVar12 * 0x30;
          *(undefined4 *)(lVar18 + 0x10 + lVar17) = uStack_17c._4_4_;
          puVar3 = (undefined4 *)(lVar18 + lVar17);
          *puVar3 = (undefined4)local_188;
          puVar3[1] = local_188._4_4_;
          puVar3[2] = iStack_180;
          puVar3[3] = (undefined4)uStack_17c;
          *(wchar_t **)(lVar18 + 0x18 + lVar17) = local_170;
          if (local_170 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_170 + 8))();
          }
          *(undefined4 *)(lVar18 + lVar17 + 0x20) = local_168;
          *(undefined1 *)(lVar18 + lVar17 + 0x28) = local_160;
          local_f0 = 0;
          if (local_f8 != 0) {
            FUN_1400020a8();
          }
          FUN_1494d6142(&local_138);
          local_a0 = 0;
          if (local_a8 != 0) {
            FUN_1400020a8();
          }
          FUN_1494d6142(&local_e8);
          if (local_170 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_170 + 0x10))();
          }
          lVar15 = lVar15 + 1;
        } while (lVar15 < (int)uStack_150);
      }
      lVar15 = *local_1a8;
      iVar12 = (int)local_1a8[1];
      lVar18 = (longlong)iVar12;
      bVar11 = 1;
      if (lVar18 != 0) {
        lVar17 = 0;
        do {
          bVar11 = *(byte *)(lVar15 + 0x28 + lVar17);
          if (bVar11 != 0) break;
          bVar19 = lVar18 * 0x30 + -0x30 != lVar17;
          lVar17 = lVar17 + 0x30;
        } while (bVar19);
        bVar11 = bVar11 ^ 1;
      }
      if ((bVar7 & bVar11) == 1) {
        local_e8 = (wchar_t *)0x0;
        uStack_dc = (wchar_t *)0x0;
        FUN_144a5dc74(&local_d0);
        local_c0 = local_c0 & 0xffffffffffffff00;
        FUN_1446f470e(&local_138,L"Add a New Group",1);
        plVar4 = local_1a8;
        local_e8 = local_138;
        iStack_e0 = CONCAT31(iStack_e0._1_3_,1);
        uStack_dc = DAT_14cc1c4f0;
        local_c0 = CONCAT71(local_c0._1_7_,1);
        iVar12 = (int)local_1a8[1];
        *(uint *)(local_1a8 + 1) = iVar12 + 1U;
        if (*(uint *)((longlong)local_1a8 + 0xc) < iVar12 + 1U) {
          FUN_1494d6d44(local_1a8,iVar12);
        }
        lVar15 = *plVar4;
        lVar18 = (longlong)iVar12 * 0x30;
        *(undefined4 *)(lVar15 + 0x10 + lVar18) = uStack_dc._4_4_;
        puVar3 = (undefined4 *)(lVar15 + lVar18);
        *puVar3 = (undefined4)local_e8;
        puVar3[1] = local_e8._4_4_;
        puVar3[2] = iStack_e0;
        puVar3[3] = (undefined4)uStack_dc;
        *(wchar_t **)(lVar15 + 0x18 + lVar18) = local_d0;
        if (local_d0 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_d0 + 8))();
        }
        *(undefined4 *)(lVar15 + lVar18 + 0x20) = (undefined4)local_c8;
        *(undefined1 *)(lVar15 + lVar18 + 0x28) = (undefined1)local_c0;
        if (local_d0 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_d0 + 0x10))();
        }
        lVar15 = *local_1a8;
        iVar12 = (int)local_1a8[1];
        lVar18 = (longlong)iVar12;
      }
      if (iVar12 != 0) {
        lVar15 = lVar15 + 0x18;
        lVar18 = lVar18 * 0x30;
        do {
          if (*(char *)(lVar15 + 0x10) == '\x01') {
            local_e8 = L"AdderPinToolTipAutoLink";
            iStack_e0 = 0x17;
            FUN_1446e940c(&local_138,&local_e8);
            local_e8 = L"OptimusNode_CustomComputeKernel";
            iStack_e0 = 0x1f;
            FUN_1446e940c(&local_188,&local_e8);
            FUN_140208bae(&local_e8,&local_188,&local_138,L"Group accepts pin connection");
            FUN_140008f88(lVar15,&local_e8);
            pwVar13 = local_e8;
            goto LAB_14949c8cc;
          }
          lVar15 = lVar15 + 0x30;
          lVar18 = lVar18 + -0x30;
        } while (lVar18 != 0);
      }
      goto LAB_14949c6bd;
    }
    if (*(char *)(param_3 + 0x29) == '\x01') {
      *local_1a8 = 0;
      local_1a8[1] = 0;
      lVar18 = (longlong)(int)uStack_150;
      if (lVar18 != 0) {
        lVar17 = 0;
        do {
          lVar16 = *(longlong *)(lVar15 + lVar17);
          local_e8 = (wchar_t *)0x0;
          uStack_dc = (wchar_t *)0x0;
          FUN_144a5dc74(&local_d0);
          iStack_e0 = CONCAT31(iStack_e0._1_3_,1);
          local_e8 = *(wchar_t **)(lVar16 + 0x18);
          local_c0 = local_c0 & 0xffffffffffffff00;
          local_138 = L"AdderPinToolTipDirectionMismatch";
          local_130 = 0x20;
          uStack_dc = local_e8;
          FUN_1446e940c(&local_188,&local_138);
          local_138 = L"OptimusNode_CustomComputeKernel";
          local_130 = 0x1f;
          FUN_1446e940c(&local_148,&local_138);
          FUN_140208bae(&local_138,&local_148,&local_188,L"Add pin only, can\'t link input to input"
                       );
          FUN_140008f88(&local_d0,&local_138);
          if (local_138 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_138 + 0x10))();
          }
          plVar4 = local_1a8;
          iVar12 = (int)local_1a8[1];
          *(uint *)(local_1a8 + 1) = iVar12 + 1U;
          if (*(uint *)((longlong)local_1a8 + 0xc) < iVar12 + 1U) {
            FUN_1494d6d44(local_1a8,iVar12);
          }
          lVar16 = *plVar4;
          lVar14 = (longlong)iVar12 * 0x30;
          *(undefined4 *)(lVar16 + 0x10 + lVar14) = uStack_dc._4_4_;
          puVar3 = (undefined4 *)(lVar16 + lVar14);
          *puVar3 = (undefined4)local_e8;
          puVar3[1] = local_e8._4_4_;
          puVar3[2] = iStack_e0;
          puVar3[3] = (undefined4)uStack_dc;
          *(wchar_t **)(lVar16 + 0x18 + lVar14) = local_d0;
          if (local_d0 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_d0 + 8))();
          }
          *(undefined4 *)(lVar16 + lVar14 + 0x20) = (undefined4)local_c8;
          *(undefined1 *)(lVar16 + lVar14 + 0x28) = (undefined1)local_c0;
          if (local_d0 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_d0 + 0x10))();
          }
          lVar17 = lVar17 + 8;
        } while (lVar18 * 8 != lVar17);
      }
      goto LAB_14949c6bd;
    }
  }
  else if (local_1a9 == '\x02') {
    if ((*(int *)(param_3 + 0x30) != 0) || (*(int *)(param_3 + 0x40) != 0)) {
      FUN_144a5dc74(&local_170);
      local_160 = 0;
      local_188 = (wchar_t *)0x0;
      iStack_180 = CONCAT31(iStack_180._1_3_,2);
      uStack_17c = (wchar_t *)0x0;
      puVar9 = (undefined8 *)FUN_140e82300();
      pwVar5 = local_170;
      pwVar13 = (wchar_t *)*puVar9;
      if (local_170 != pwVar13) {
        local_170 = pwVar13;
        if (pwVar13 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)pwVar13 + 8))();
        }
        if (pwVar5 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)pwVar5 + 0x10))(pwVar5);
        }
      }
      local_168 = *(undefined4 *)(puVar9 + 1);
      local_160 = 0;
      if (*(char *)(param_3 + 0x29) != '\x02') {
        uVar10 = (**(code **)(*(longlong *)(param_1 + -0x18) + 0x20))(param_1 + -0x18);
        local_118 = 0;
        local_110 = 0x400000000;
        FUN_1494e6b56(uVar10,&local_e8,&local_138);
        if (local_118 != 0) {
          FUN_1400020a8();
        }
        FUN_14949cde4(&local_e8,&local_138,&local_98);
        if (((local_104 < local_130) || (local_90 == local_64)) || (iStack_e0 == local_b4)) {
          local_160 = 1;
        }
        local_f0 = 0;
        if (local_f8 != 0) {
          FUN_1400020a8();
        }
        FUN_1494d6142(&local_138);
        local_a0 = 0;
        if (local_a8 != 0) {
          FUN_1400020a8();
        }
        FUN_1494d6142(&local_e8);
      }
      local_e8 = local_188;
      iStack_e0 = iStack_180;
      uStack_dc = uStack_17c;
      local_d0 = local_170;
      if (local_170 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_170 + 8))();
      }
      local_190 = local_b8;
      local_c8 = CONCAT44(local_c8._4_4_,local_168);
      local_c0 = CONCAT71(local_c0._1_7_,local_160);
      local_198 = &local_e8;
      FUN_14949d014(plVar4);
      pwVar13 = local_170;
      if (local_d0 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_d0 + 0x10))();
        pwVar13 = local_170;
      }
LAB_14949c8cc:
      if (pwVar13 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)pwVar13 + 0x10))();
      }
      goto LAB_14949c6bd;
    }
    if (param_5 != 0) {
      FUN_14020fad6(param_5,L"Can\'t add parameter pin as output");
    }
  }
  *plVar4 = 0;
  plVar4[1] = 0;
LAB_14949c6bd:
  if (local_158 != 0) {
    FUN_1400020a8();
  }
  plVar4 = local_1a8;
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1494d6142(&local_98);
  if ((local_48 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return plVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14949cde4 FUN_14949cde4 body=557 status=ok
// SIG undefined FUN_14949cde4(void)

undefined8 * FUN_14949cde4(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_3;
  if ((int)param_3[1] - *(int *)((longlong)param_3 + 0x34) <
      (int)param_1[1] - *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1;
    param_1 = param_3;
  }
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  uVar4 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar4 != 0) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_1494d68ea(param_2,uVar4);
    iVar2 = 1;
    if (3 < uVar4) {
      uVar4 = (uVar4 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((*(int *)(param_2 + 9) == 0) || (*(int *)(param_2 + 9) < iVar2)) {
      *(int *)(param_2 + 9) = iVar2;
      FUN_1494d6a98(param_2);
    }
  }
  local_48 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      if ((int)plVar5[1] != *(int *)((longlong)plVar5 + 0x34)) {
        uVar1 = *(ulonglong *)(*local_78 + (longlong)iStack_5c * 0x10);
        uVar4 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        plVar3 = (longlong *)plVar5[8];
        if ((longlong *)plVar5[8] == (longlong *)0x0) {
          plVar3 = plVar5 + 7;
        }
        iVar2 = *(int *)((longlong)plVar3 +
                        (ulonglong)((int)plVar5[9] - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
        if (iVar2 != -1) {
          do {
            if (*(ulonglong *)(*plVar5 + (longlong)iVar2 * 0x10) == uVar1) {
              FUN_1494e5608(param_2,&local_50,*local_78 + (longlong)iStack_5c * 0x10);
              break;
            }
            iVar2 = *(int *)((longlong)iVar2 * 0x10 + *plVar5 + 8);
          } while (iVar2 != -1);
        }
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14949d014 FUN_14949d014 body=88 status=ok
// SIG undefined FUN_14949d014(void)

undefined8 * FUN_14949d014(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  
  *param_1 = 0;
  lVar1 = *param_2;
  iVar2 = (int)((ulonglong)(param_2[1] - lVar1) >> 4) * -0x55555555;
  *(int *)(param_1 + 1) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1494d6c76(param_1,iVar2);
    FUN_1494d6cdf(*param_1,lVar1,iVar2);
  }
  return param_1;
}



// FUNCTION 14949d06c FUN_14949d06c body=1934 status=ok
// SIG undefined FUN_14949d06c(void)

longlong *
FUN_14949d06c(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
             undefined8 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  void *pvVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong *puVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined1 auStack_1a8 [32];
  ulonglong *local_188;
  undefined8 local_180;
  longlong local_178;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong *local_150;
  ulonglong local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  void *local_128;
  int local_120;
  undefined4 local_11c;
  undefined1 local_118 [16];
  longlong local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0 [2];
  longlong local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined2 local_80;
  ulonglong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar10 = param_1 + -0x120;
  local_108 = 0;
  uStack_100 = 0;
  if (*(char *)(param_3 + 8) == '\x01') {
    if (*(longlong *)(param_3 + 0xc) != DAT_14cc1c4f0) {
      local_f8 = 0;
      uStack_f0 = 0;
      iVar2 = *(int *)(param_1 + -200);
      if ((longlong)iVar2 == 0) {
        lVar16 = *param_2;
        bVar3 = true;
        lVar13 = 0;
        plVar17 = (longlong *)0x0;
      }
      else {
        lVar16 = *(longlong *)(param_1 + -0xd0);
        lVar13 = 0;
        local_168 = lVar10;
        local_160 = param_3;
        local_158 = param_4;
        do {
          uVar9 = uStack_f0;
          lVar10 = *(longlong *)(lVar16 + lVar13);
          if ((*(char *)(lVar10 + 0x29) == '\x01') && (*(char *)(lVar10 + 0x28) == '\x01')) {
            lVar12 = (longlong)(int)uStack_f0;
            uVar5 = (int)uStack_f0 + 1;
            uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar5);
            if (uStack_f0._4_4_ < uVar5) {
              FUN_149482de0(&local_f8,uVar9 & 0xffffffff);
            }
            *(longlong *)(local_f8 + lVar12 * 8) = lVar10;
          }
          lVar13 = lVar13 + 8;
        } while ((longlong)iVar2 * 8 != lVar13);
        lVar16 = *param_2;
        bVar3 = true;
        param_3 = local_160;
        lVar10 = local_168;
        param_4 = local_158;
        if (0 < (longlong)(int)uStack_f0) {
          uVar11 = (undefined4)param_2[1];
          uVar8 = *(undefined4 *)((longlong)param_2 + 0xc);
          lVar12 = 0;
          do {
            lVar13 = *(longlong *)(local_f8 + lVar12 * 8);
            if (*(longlong *)(lVar13 + 0x18) == *(longlong *)(local_160 + 0xc)) {
              if (lVar12 == 0) {
                plVar17 = (longlong *)(param_1 + 0x80);
                bVar3 = true;
                goto LAB_14949d233;
              }
              if ((longlong)*(int *)(param_1 + 0xa8) == 0) {
                uVar8 = 0;
                uVar11 = 0;
                lVar16 = 0;
                bVar3 = false;
                plVar17 = (longlong *)0x0;
                goto LAB_14949d2c6;
              }
              lVar14 = 0;
              lVar12 = 0;
              goto LAB_14949d29d;
            }
            lVar12 = lVar12 + 1;
          } while ((int)uStack_f0 != lVar12);
        }
        plVar17 = (longlong *)0x0;
        lVar13 = 0;
      }
      goto LAB_14949d22f;
    }
    local_58 = 0;
    uStack_50 = 0x400000000;
    FUN_1494e6b1c(param_4,&local_f8,&local_78);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    uStack_70 = &uStack_e8;
    local_78 = 0x100000000;
    local_68 = 0xffffffff;
    uStack_60 = 0;
    if (local_d0 == 0) {
      lVar16 = 0;
      local_158 = param_4;
    }
    else {
      local_158 = param_4;
      FUN_1449c0562(&local_78);
      lVar16 = (longlong)local_68._4_4_;
    }
    FUN_14949d7fc(lVar10,&local_78,0,*(undefined8 *)(*(longlong *)(local_f8 + lVar16 * 0x10) + 0x18)
                 );
    puVar7 = (ulonglong *)FUN_14949d8d6(param_1 + 0xa0);
    *puVar7 = local_78;
    iVar2 = *(int *)(param_1 + 0xa8);
    lVar16 = *(longlong *)(param_1 + 0xa0);
    uVar6 = FUN_1494be28e(lVar10);
    FUN_1494e778e(uVar6,1);
    FUN_1494be346(lVar10,uVar6,0,0);
    uVar9 = uStack_100;
    lVar13 = (longlong)(int)(uint)uStack_100;
    uVar5 = (uint)uStack_100 + 1;
    uStack_100 = CONCAT44(uStack_100._4_4_,uVar5);
    if (uStack_100._4_4_ < uVar5) {
      FUN_149482de0(&local_108,uVar9 & 0xffffffff);
    }
    *(undefined8 *)(local_108 + lVar13 * 8) = uVar6;
    lVar13 = *(longlong *)(local_108 + (longlong)(int)((uint)uStack_100 + -1) * 8);
    local_b0 = 0;
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    plVar17 = (longlong *)((longlong)(iVar2 + -1) * 0x18 + 8 + lVar16);
    FUN_1494d6142(&local_f8);
    param_4 = local_158;
    goto LAB_14949d246;
  }
  if (*(char *)(param_3 + 8) == '\x02') {
    plVar17 = (longlong *)(param_1 + 0x90);
LAB_14949d2ef:
    lVar13 = 0;
    local_150 = param_2;
    goto LAB_14949d2f2;
  }
  goto LAB_14949d0c2;
  while( true ) {
    lVar12 = lVar12 + -0x18;
    lVar14 = lVar14 + 0x18;
    if (-lVar12 == (longlong)*(int *)(param_1 + 0xa8) * 0x18) break;
LAB_14949d29d:
    if (*(longlong *)(*(longlong *)(param_1 + 0xa0) + lVar14) == *(longlong *)(local_160 + 0xc)) {
      lVar12 = *(longlong *)(param_1 + 0xa0) - lVar12;
      if (lVar12 != 0) {
        plVar17 = (longlong *)(lVar12 + 8);
        bVar3 = true;
        goto LAB_14949d2c6;
      }
      break;
    }
  }
  uVar8 = 0;
  uVar11 = 0;
  lVar16 = 0;
  bVar3 = false;
  plVar17 = (longlong *)0x0;
LAB_14949d2c6:
  *(undefined4 *)(param_2 + 1) = uVar11;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar8;
LAB_14949d22f:
  *param_2 = lVar16;
LAB_14949d233:
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if (!bVar3) goto LAB_14949d0c9;
LAB_14949d246:
  if (plVar17 != (longlong *)0x0) {
    if (lVar13 == 0) goto LAB_14949d2ef;
    local_150 = param_2;
    FUN_1494e76b2(lVar13,1);
LAB_14949d2f2:
    local_f8 = 0;
    local_78 = 0;
    uStack_70 = (undefined4 *)0x0;
    FUN_140e6511c();
    FUN_140e6507e(local_c0);
    local_80 = 0;
    FUN_14949d7fc(lVar10,&local_78,lVar13,param_5);
    local_f8 = local_78;
    FUN_1494947ba(param_4 + 0x70,local_118);
    FUN_140e6511c(&local_78,local_118);
    uStack_f0 = local_78;
    uStack_e8 = (undefined4)uStack_70;
    uStack_e4 = uStack_70._4_4_;
    local_e0 = (undefined4)local_68;
    uStack_dc = local_68._4_4_;
    uStack_d8 = uStack_60;
    uStack_d4 = uStack_5c;
    if (CONCAT44(uStack_cc,local_d0) != 0) {
      FUN_1400020a8();
    }
    local_d0 = (int)local_58;
    uStack_cc = local_58._4_4_;
    iStack_c8 = (int)uStack_50;
    uStack_c4 = uStack_50._4_4_;
    local_c0[0] = *(undefined4 *)(param_4 + 0x30);
    FUN_1406fa324(&local_b8,param_4 + 0x38);
    local_a8 = *(undefined4 *)(param_4 + 0x48);
    FUN_144a787a6(local_a0,param_4 + 0x50);
    FUN_1406fa324(local_90,param_4 + 0x60);
    iVar2 = (int)plVar17[1];
    *(uint *)(plVar17 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)plVar17 + 0xc) < iVar2 + 1U) {
      FUN_1494d6e7c(plVar17,iVar2);
    }
    lVar12 = *plVar17;
    lVar14 = (longlong)iVar2 * 0x80;
    lVar16 = lVar12 + lVar14;
    *(ulonglong *)(lVar12 + lVar14) = local_f8;
    *(ulonglong *)(lVar12 + 8 + lVar14) = uStack_f0;
    *(ulonglong *)(lVar12 + 0x10 + lVar14) = CONCAT44(uStack_e4,uStack_e8);
    puVar1 = (undefined4 *)(lVar12 + 0x18 + lVar14);
    *puVar1 = local_e0;
    puVar1[1] = uStack_dc;
    puVar1[2] = uStack_d8;
    puVar1[3] = uStack_d4;
    *(undefined8 *)(lVar12 + 0x28 + lVar14) = 0;
    lVar18 = (longlong)iStack_c8;
    pvVar4 = (void *)CONCAT44(uStack_cc,local_d0);
    *(int *)(lVar12 + 0x30 + lVar14) = iStack_c8;
    if (lVar18 == 0) {
      *(undefined4 *)(lVar16 + 0x34) = 0;
    }
    else {
      puVar15 = (undefined8 *)(lVar14 + lVar12 + 0x28);
      FUN_1446dd670(puVar15,iStack_c8,0);
      memcpy((void *)*puVar15,pvVar4,lVar18 * 2);
    }
    param_2 = local_150;
    FUN_149482cae(lVar16 + 0x38,local_c0);
    *(undefined2 *)(lVar16 + 0x78) = local_80;
    FUN_145ebc436(lVar10);
    uStack_140 = CONCAT44(uStack_e4,uStack_e8);
    local_148 = uStack_f0;
    local_138 = local_e0;
    uStack_134 = uStack_dc;
    uStack_130 = uStack_d8;
    uStack_12c = uStack_d4;
    local_128 = (void *)0x0;
    lVar16 = (longlong)iStack_c8;
    pvVar4 = (void *)CONCAT44(uStack_cc,local_d0);
    local_120 = iStack_c8;
    if (lVar16 == 0) {
      local_11c = 0;
    }
    else {
      FUN_1446dd670(&local_128,iStack_c8,0);
      memcpy(local_128,pvVar4,lVar16 * 2);
    }
    local_188 = &local_148;
    local_180 = 0;
    local_178 = lVar13;
    uVar6 = FUN_149495630(lVar10,local_f8,*(undefined1 *)(param_3 + 8),local_c0);
    lVar10 = (longlong)(int)(uint)uStack_100;
    uVar5 = (uint)uStack_100 + 1;
    if (uStack_100._4_4_ < uVar5) {
      uVar9 = uStack_100 & 0xffffffff;
      uStack_100._0_4_ = uVar5;
      FUN_149482de0(&local_108,uVar9);
      uVar5 = (uint)uStack_100;
    }
    uStack_100._0_4_ = uVar5;
    *(undefined8 *)(local_108 + lVar10 * 8) = uVar6;
    *param_2 = local_108;
    local_108 = 0;
    *(uint *)(param_2 + 1) = (uint)uStack_100;
    *(uint *)((longlong)param_2 + 0xc) = uStack_100._4_4_;
    uStack_100 = 0;
    FUN_14121c54c(local_c0);
    if (CONCAT44(uStack_cc,local_d0) != 0) {
      FUN_1400020a8();
    }
    goto LAB_14949d0c9;
  }
LAB_14949d0c2:
  *param_2 = 0;
  param_2[1] = 0;
LAB_14949d0c9:
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14949d7fc FUN_14949d7fc body=217 status=ok
// SIG undefined FUN_14949d7fc(void)

undefined8 * FUN_14949d7fc(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14949af2d(param_2,param_4);
  puVar3 = DAT_14cc1c0f0;
  if (DAT_14cc1c0f8 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  cVar2 = FUN_1402ca022(*param_2,puVar3);
  if (cVar2 != '\0') {
    *(undefined4 *)((longlong)param_2 + 4) = 1;
  }
  lVar1 = **(longlong **)(param_1 + 0x50);
  if (lVar1 == param_3 || param_3 == 0) {
    FUN_14949dc14(&local_30,param_1,*param_2);
    *param_2 = local_30;
    FUN_14949dc14(&local_30,lVar1);
  }
  else {
    FUN_14949dc14(&local_30,param_3,*param_2);
  }
  *param_2 = local_30;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14949d8d6 FUN_14949d8d6 body=63 status=ok
// SIG undefined FUN_14949d8d6(void)

longlong FUN_14949d8d6(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1494d6de8(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_1494d6dd8(lVar2);
  return lVar2;
}



// FUNCTION 14949d916 FUN_14949d916 body=66 status=ok
// SIG undefined FUN_14949d916(void)

undefined8
FUN_14949d916(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1494be28e();
  FUN_1494e778e(uVar1,param_3);
  FUN_1494be346(param_1,uVar1,0,param_4);
  return uVar1;
}



// FUNCTION 14949d958 FUN_14949d958 body=700 status=ok
// SIG undefined FUN_14949d958(void)

undefined8 FUN_14949d958(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  int iVar16;
  
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 == 0) {
    return 1;
  }
  if (2 < iVar1) {
    return 0;
  }
  lVar2 = *(longlong *)*param_2;
  if (iVar1 == 1) {
    plVar7 = (longlong *)(param_1 + (ulonglong)(*(char *)(lVar2 + 0x29) != '\x01') * 0x10 + 0x80);
    lVar4 = FUN_1494e639c(lVar2);
    if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x18) != DAT_14cc1c4f8)) {
      if ((longlong)*(int *)(param_1 + 0xa8) == 0) {
        return 0;
      }
      lVar12 = 0;
      lVar13 = 0;
      while (*(longlong *)(*(longlong *)(param_1 + 0xa0) + lVar12) != *(longlong *)(lVar4 + 0x18)) {
        lVar13 = lVar13 + -0x18;
        lVar12 = lVar12 + 0x18;
        if (-lVar13 == (longlong)*(int *)(param_1 + 0xa8) * 0x18) {
          return 0;
        }
      }
      lVar13 = *(longlong *)(param_1 + 0xa0) - lVar13;
      if (lVar13 == 0) {
        return 0;
      }
      plVar7 = (longlong *)(lVar13 + 8);
    }
    iVar1 = (int)plVar7[1];
    lVar4 = (longlong)iVar1;
    if (lVar4 != 0) {
      plVar14 = (longlong *)*plVar7;
      iVar16 = 0;
      bVar8 = *plVar14 == *(longlong *)(lVar2 + 0x18);
      iVar9 = 0;
      do {
        lVar13 = (longlong)iVar9;
        iVar11 = iVar9 + 1;
        if (iVar9 + 1 < iVar1) {
          iVar11 = iVar1;
        }
        plVar15 = plVar14 + lVar13 * 0x10 + 0x10;
        iVar6 = iVar9;
        lVar12 = lVar13;
        do {
          lVar12 = lVar12 + 1;
          iVar10 = iVar11;
          if (lVar4 <= lVar12) break;
          lVar3 = *plVar15;
          iVar6 = iVar6 + 1;
          plVar15 = plVar15 + 0x10;
          iVar10 = iVar6;
        } while (bVar8 == (lVar3 == *(longlong *)(lVar2 + 0x18)));
        iVar11 = iVar10 - iVar9;
        if (bVar8 == false) {
          if (iVar16 != iVar9) {
            memmove(plVar14 + (longlong)iVar16 * 0x10,plVar14 + lVar13 * 0x10,(longlong)iVar11 << 7)
            ;
          }
          iVar16 = iVar16 + iVar11;
        }
        else {
          FUN_141239a12(plVar14 + lVar13 * 0x10,iVar11);
        }
        bVar8 = (bool)(bVar8 ^ 1);
        iVar9 = iVar10;
      } while (lVar12 < lVar4);
      *(int *)(plVar7 + 1) = iVar16;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0xa8);
    lVar4 = (longlong)iVar1;
    if (lVar4 != 0) {
      plVar7 = *(longlong **)(param_1 + 0xa0);
      iVar16 = 0;
      bVar8 = *plVar7 == *(longlong *)(lVar2 + 0x18);
      iVar9 = 0;
      do {
        lVar13 = (longlong)iVar9;
        iVar11 = iVar9 + 1;
        if (iVar9 + 1 < iVar1) {
          iVar11 = iVar1;
        }
        plVar14 = plVar7 + lVar13 * 3 + 3;
        iVar6 = iVar9;
        lVar12 = lVar13;
        do {
          lVar12 = lVar12 + 1;
          iVar10 = iVar11;
          if (lVar4 <= lVar12) break;
          lVar3 = *plVar14;
          iVar6 = iVar6 + 1;
          plVar14 = plVar14 + 3;
          iVar10 = iVar6;
        } while (bVar8 == (lVar3 == *(longlong *)(lVar2 + 0x18)));
        iVar11 = iVar10 - iVar9;
        if (bVar8 == false) {
          if (iVar16 != iVar9) {
            memmove(plVar7 + (longlong)iVar16 * 3,plVar7 + lVar13 * 3,(longlong)iVar11 * 0x18);
          }
          iVar16 = iVar16 + iVar11;
        }
        else {
          FUN_145850152(plVar7 + lVar13 * 3,iVar11);
        }
        bVar8 = (bool)(bVar8 ^ 1);
        iVar9 = iVar10;
      } while (lVar12 < lVar4);
      *(int *)(param_1 + 0xa8) = iVar16;
    }
  }
  FUN_145ebc436(param_1 + -0x120);
  uVar5 = FUN_144529b4e(param_1 + -0x120,lVar2);
  return uVar5;
}



// FUNCTION 14949dc14 FUN_14949dc14 body=414 status=ok
// SIG undefined FUN_14949dc14(void)

undefined8 FUN_14949dc14(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 uStack_80;
  void *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = (void *)0x0;
  uStack_70 = 0;
  if (param_2 != 0) {
    lVar8 = FUN_140f7d9ac();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8
         ) != lVar8 + 0x30)) {
      lVar8 = FUN_14113d446();
      if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) {
        local_88 = *(longlong *)(param_2 + 0xa0);
        uStack_80 = CONCAT44(uStack_80._4_4_,*(undefined4 *)(param_2 + 0xa8));
        FUN_1494bdec4(&local_78);
      }
    }
    else {
      iVar1 = *(int *)(param_2 + 0x58);
      if ((longlong)iVar1 != 0) {
        pvVar3 = *(void **)(param_2 + 0x50);
        uStack_70 = CONCAT44(uStack_70._4_4_,iVar1);
        FUN_1494e31fe(&local_78,0);
        memcpy(local_78,pvVar3,(longlong)iVar1 << 3);
      }
    }
  }
  pvVar3 = local_78;
  local_88 = 0;
  uStack_80 = 0;
  lVar8 = (longlong)(int)uStack_70;
  if (lVar8 != 0) {
    lVar6 = 0;
    do {
      uVar4 = uStack_80;
      uVar2 = *(undefined8 *)(*(longlong *)((longlong)pvVar3 + lVar6) + 0x18);
      lVar7 = (longlong)(int)uStack_80;
      uVar5 = (int)uStack_80 + 1;
      uStack_80 = CONCAT44(uStack_80._4_4_,uVar5);
      if (uStack_80._4_4_ < uVar5) {
        FUN_1446f84a2(&local_88,uVar4 & 0xffffffff);
      }
      *(undefined8 *)(local_88 + lVar7 * 8) = uVar2;
      lVar6 = lVar6 + 8;
    } while (lVar8 * 8 != lVar6);
  }
  FUN_1494bcc6c(param_1,param_3,&local_88);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14949ddb4 FUN_14949ddb4 body=306 status=ok
// SIG undefined FUN_14949ddb4(void)

undefined8 FUN_14949ddb4(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8 [4];
  longlong local_98;
  undefined8 local_90;
  longlong local_78;
  undefined4 local_70;
  undefined1 local_68 [8];
  int local_60;
  int local_34;
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar1 = (**(code **)(*(longlong *)(param_1 + -0x20) + 0x20))(param_1 + -0x20);
  local_98 = 0;
  local_90 = 0x400000000;
  FUN_1494e6b56(uVar1,local_68,local_b8);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_60 - local_34 == 1) {
    FUN_149498dbe(local_68,local_b8);
    plVar2 = (longlong *)FUN_14948712a(*local_b8[0]);
    (**(code **)(*plVar2 + 0x2b8))(plVar2,param_2);
    if (local_b8[0] != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    FUN_14949dee8(local_b8);
    FUN_144aa2048(local_b8,param_2);
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_14472eaf0(local_b8);
  }
  local_20 = 0;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_1494d6142(local_68);
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14949dee8 FUN_14949dee8 body=211 status=ok
// SIG undefined FUN_14949dee8(void)

undefined8 * FUN_14949dee8(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1494a8470(&local_40);
  lVar1 = local_40;
  if ((longlong)local_38 != 0) {
    lVar2 = 0;
    do {
      (**(code **)(**(longlong **)(lVar1 + lVar2) + 0x2b8))(*(longlong **)(lVar1 + lVar2),local_50);
      FUN_146b23f68(param_1,local_50);
      if (local_50[0] != 0) {
        FUN_1400020a8();
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)local_38 * 8 != lVar2);
  }
  if (local_40 != 0) {
    FUN_1400020a8(local_40);
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14949dfc4 FUN_14949dfc4 body=181 status=ok
// SIG undefined FUN_14949dfc4(void)

undefined4 * FUN_14949dfc4(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  if (param_1 == param_2) {
    param_1[6] = param_2[6];
  }
  else {
    if (*(longlong *)(param_1 + 2) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_2 + 2) = 0;
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    *(undefined8 *)(param_2 + 4) = 0;
    param_1[6] = param_2[6];
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = 0;
    param_1[10] = param_2[10];
    param_1[0xb] = param_2[0xb];
    *(undefined8 *)(param_2 + 10) = 0;
    if (*(longlong *)(param_1 + 0xc) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_2 + 0xc) = 0;
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    *(undefined8 *)(param_2 + 0xe) = 0;
  }
  return param_1;
}



// FUNCTION 14949e07a FUN_14949e07a body=99 status=ok
// SIG undefined FUN_14949e07a(void)

void FUN_14949e07a(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  uVar2 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar2 + uVar1;
  if (*(int *)((longlong)param_1 + 0xc) - uVar2 < uVar1) {
    FUN_1494d6e7c(param_1,uVar2);
  }
  memmove((void *)((longlong)(int)uVar1 * 0x80 + (longlong)*param_1),(void *)*param_1,
          (ulonglong)uVar2 << 7);
  FUN_149482c4c(*param_1,*param_2,uVar1);
  return;
}



// FUNCTION 14949e0de FUN_14949e0de body=637 status=ok
// SIG undefined FUN_14949e0de(void)

void FUN_14949e0de(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_c8 [40];
  undefined8 *local_a0;
  undefined8 *local_98;
  int local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  local_a0 = (undefined8 *)(param_1 + 0x150);
  FUN_140f4f540();
  uVar6 = FUN_1457dd7ae();
  FUN_146739dc5(&local_78,uVar6,1);
  FUN_140f4f5a6(&DAT_14cc1c7d8,&local_88,local_78);
  iVar3 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x50);
    lVar10 = 0;
    do {
      lVar7 = *(longlong *)(lVar4 + lVar10);
      if (*(char *)(lVar7 + 0x29) == '\x01') {
        FUN_1494947ba(lVar7 + 0x70,&local_78);
        plVar9 = local_70;
        lVar5 = local_78;
        lVar8 = local_88;
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_70 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_70)(local_70);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
        if (lVar5 == lVar8) {
          local_58 = 0;
          local_50 = 0x400000000;
          FUN_1494e72a0(lVar7,&local_98,&local_78);
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          if ((local_90 == 1) && (lVar7 = FUN_1494e64f0(*local_98), lVar7 != 0)) {
            lVar8 = FUN_145a96ec4();
            if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
               ((*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
                  (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30 &&
                (lVar7 = (**(code **)(*(longlong *)(lVar7 + 0x108) + 0x10))
                                   (lVar7 + 0x108,DAT_14c951640), lVar7 != 0)))) {
              uVar6 = FUN_1459f6ee6();
              plVar9 = (longlong *)FUN_144718840(lVar7,uVar6);
              if (plVar9 != (longlong *)0x0) {
                (**(code **)(*plVar9 + 0x10))(plVar9,&local_78);
                *(undefined4 *)(param_1 + 0x140) = 0;
                *(longlong *)(param_1 + 0x144) = local_78;
                if (*(longlong *)(param_1 + 0x150) != 0) {
                  FUN_1400020a8();
                }
                *local_a0 = 0;
                local_a0[1] = 0;
              }
            }
          }
          FUN_1494d74c1(local_98,local_90);
          if (local_98 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
      }
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar3 * 8 != lVar10);
  }
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_80 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)local_80 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_80 + 0x10))(local_80);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14949e35c FUN_14949e35c body=350 status=ok
// SIG undefined FUN_14949e35c(void)

void FUN_14949e35c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  uStack_50 = 0;
  iVar1 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x50);
    lVar5 = 0;
    lVar6 = 0;
    do {
      uVar3 = uStack_50;
      lVar8 = *(longlong *)(lVar2 + lVar5);
      if ((*(char *)(lVar8 + 0x29) == '\x01') && (*(char *)(lVar8 + 0x28) == '\0')) {
        lVar7 = (longlong)(int)uStack_50;
        uVar4 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
        if (uStack_50._4_4_ < uVar4) {
          FUN_149482de0(&local_58,uVar3 & 0xffffffff);
        }
        *(longlong *)(local_58 + lVar7 * 8) = lVar8;
      }
      else if (lVar6 == 0) {
        lVar6 = lVar8;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  lVar5 = FUN_1494be28e(param_1,DAT_14cc1c4f8);
  FUN_1494e778e(lVar5,1);
  FUN_1494be346(param_1,lVar5,0,lVar6);
  lVar2 = local_58;
  lVar6 = (longlong)(int)uStack_50;
  if (lVar6 != 0) {
    lVar8 = 0;
    do {
      FUN_14949ee30(param_1,*(undefined8 *)(lVar2 + lVar8),lVar5);
      lVar8 = lVar8 + 8;
    } while (lVar6 * 8 != lVar8);
  }
  if (**(longlong **)(param_1 + 0x50) != lVar5) {
    FUN_14949eee4(param_1,lVar5);
  }
  FUN_1494e76b2(lVar5,0 < *(int *)(lVar5 + 0xa8));
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14949e4bc FUN_14949e4bc body=1265 status=ok
// SIG undefined FUN_14949e4bc(void)

void FUN_14949e4bc(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  int iVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined2 *puVar16;
  longlong lVar17;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong local_e0;
  uint local_d4;
  undefined8 **local_d0;
  longlong local_c8 [2];
  undefined2 *local_b8;
  int local_b0;
  undefined8 *local_a8;
  int local_a0;
  undefined4 local_9c;
  longlong *local_98;
  undefined8 uStack_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *plStack_70;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_140f4f540();
  puVar4 = (undefined8 *)FUN_144a7452c();
  FUN_140f4f5a6(&DAT_14cc1c7d8,&local_88,*puVar4);
  local_98 = (longlong *)0x0;
  uStack_90 = 0;
  if ((longlong)*(int *)(param_1 + 0x58) != 0) {
    plVar13 = *(longlong **)(param_1 + 0x50);
    plVar15 = plVar13 + *(int *)(param_1 + 0x58);
    local_e8 = param_1;
    do {
      lVar17 = *plVar13;
      if (*(char *)(lVar17 + 0x29) == '\x02') {
        FUN_1494947ba(lVar17 + 0x70,&local_78);
        plVar7 = plStack_70;
        lVar6 = local_78;
        lVar5 = local_88;
        if (plStack_70 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_70 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plStack_70)(plStack_70);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
        if (lVar6 == lVar5) {
          local_58 = 0;
          local_50 = 0x400000000;
          FUN_1494e72a0(lVar17,&local_a8,&local_78);
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          iVar12 = 0;
          if ((longlong)local_a0 != 0) {
            puVar14 = local_a8 + (longlong)local_a0 * 7;
            puVar4 = local_a8;
            do {
              lVar5 = FUN_1494e64f0(*puVar4);
              if (lVar5 != 0) {
                lVar6 = FUN_14599be1a();
                uVar9 = uStack_90;
                if ((((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                       (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) &&
                    (*(char *)(lVar5 + 0x130) != '\0')) &&
                   ((longlong)*(int *)(local_e8 + 0x1b8) != 0)) {
                  plVar7 = *(longlong **)(local_e8 + 0x1b0);
                  lVar6 = (longlong)*(int *)(local_e8 + 0x1b8) << 7;
                  do {
                    if (*plVar7 == *(longlong *)(lVar17 + 0x18)) {
                      if ((plVar7 != (longlong *)0x0) &&
                         (*(undefined1 *)(plVar7 + 0xf) = 1, local_a0 == 1)) {
                        lVar6 = (longlong)(int)uStack_90;
                        uVar3 = (int)uStack_90 + 1;
                        uStack_90 = CONCAT44(uStack_90._4_4_,uVar3);
                        uVar11 = *(undefined1 *)(lVar5 + 0x130);
                        if (uStack_90._4_4_ < uVar3) {
                          local_e0 = CONCAT71(local_e0._1_7_,*(undefined1 *)(lVar5 + 0x130));
                          FUN_1494d74f0(&local_98,uVar9 & 0xffffffff);
                          uVar11 = (undefined1)local_e0;
                        }
                        local_98[lVar6 * 2] = lVar17;
                        *(undefined1 *)(local_98 + lVar6 * 2 + 1) = uVar11;
                      }
                      break;
                    }
                    plVar7 = plVar7 + 0x10;
                    lVar6 = lVar6 + -0x80;
                  } while (lVar6 != 0);
                }
              }
              puVar4 = puVar4 + 7;
              iVar12 = local_a0;
            } while (puVar4 != puVar14);
          }
          FUN_1494d74c1(local_a8,iVar12);
          if (local_a8 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar15);
    if ((int)uStack_90 != 0) {
      local_d0 = (undefined8 **)(local_e8 + 0x1f0);
      local_78 = 0;
      plStack_70 = (longlong *)0x0;
      FUN_1403de9f2(local_d0,&local_78,&DAT_149e06120,1);
      if ((longlong)(int)plStack_70 != 0) {
        local_e0 = (longlong)(int)plStack_70 * 0x10 + local_78;
        uVar10 = 0;
        lVar17 = local_78;
LAB_14949e6f2:
        local_d4 = (uint)uVar10;
        do {
          if ((longlong)(int)uStack_90 != 0) {
            plVar7 = local_98 + (longlong)(int)uStack_90 * 2;
            plVar15 = local_98;
            do {
              lVar5 = *plVar15;
              lVar6 = plVar15[1];
              local_a8 = *(undefined8 **)(lVar5 + 0x18);
              FUN_1400021e4(&local_a8,&local_b8);
              puVar16 = &DAT_149dfb77a;
              if (local_b0 != 0) {
                puVar16 = local_b8;
              }
              FUN_140002266(&local_a8,L"Write%s",puVar16);
              if (local_b8 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              local_b8 = *(undefined2 **)(lVar5 + 0x18);
              FUN_1400021e4(&local_b8,local_c8);
              FUN_1494995da(&local_b8,
                            CONCAT71((int7)((ulonglong)plVar13 >> 8),(char)lVar6) & 0xffffffff,
                            local_c8);
              if (local_c8[0] != 0) {
                FUN_1400020a8();
              }
              puVar16 = &DAT_149dfb77a;
              if (local_b0 != 0) {
                puVar16 = local_b8;
              }
              puVar4 = (undefined8 *)&DAT_149dfb77a;
              if (local_a0 != 0) {
                puVar4 = local_a8;
              }
              uVar8 = FUN_1448097c4(lVar17,puVar4,puVar16,0);
              plVar13 = (longlong *)(uVar8 & 0xffffffff);
              uVar9 = uVar8;
              if (local_b8 != (undefined2 *)0x0) {
                uVar9 = FUN_1400020a8();
              }
              if (local_a8 != (undefined8 *)0x0) {
                uVar9 = FUN_1400020a8();
              }
              if (0 < (int)uVar8) {
                lVar17 = lVar17 + 0x10;
                uVar10 = CONCAT71((int7)(uVar9 >> 8),1);
                if (lVar17 == local_e0) goto LAB_14949e929;
                goto LAB_14949e6f2;
              }
              plVar15 = plVar15 + 2;
            } while (plVar15 != plVar7);
          }
          lVar17 = lVar17 + 0x10;
        } while (lVar17 != local_e0);
        if ((local_d4 & 1) != 0) {
LAB_14949e929:
          FUN_144a8b2a0(&local_a8,&local_78,&DAT_149e06120);
          lVar17 = local_e8;
          if (local_d0 == &local_a8) {
            if (local_a8 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*(longlong *)(local_e8 + 0x1f0) != 0) {
              FUN_1400020a8();
            }
            *(undefined8 **)(lVar17 + 0x1f0) = local_a8;
            local_a8 = (undefined8 *)0x0;
            *(int *)(lVar17 + 0x1f8) = local_a0;
            *(undefined4 *)(lVar17 + 0x1fc) = local_9c;
          }
          FUN_145ebc436(lVar17);
        }
      }
      FUN_1447a1747(local_78,(ulonglong)plStack_70 & 0xffffffff);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if (local_98 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_80 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)local_80 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_80 + 0x10))(local_80);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14949e9ae FUN_14949e9ae body=193 status=ok
// SIG undefined FUN_14949e9ae(void)

undefined8 FUN_14949e9ae(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[0] = *(longlong *)(param_1 + 0x18);
  FUN_1400021e4(local_48,local_38);
  FUN_1400021e4(param_1 + 0x138,local_58);
  FUN_144a882a8(local_48,local_58,&DAT_149e01f60);
  FUN_1401c7f3e(param_2,local_48,local_38);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14949ea70 FUN_14949ea70 body=538 status=ok
// SIG undefined FUN_14949ea70(void)

void FUN_14949ea70(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 local_f8 [48];
  undefined1 local_c8 [48];
  undefined1 local_98 [48];
  undefined8 local_68;
  undefined1 local_60 [16];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_68 = *(undefined8 *)(param_1 + 0x138);
  FUN_145715fae(local_60);
  FUN_1458d0f32(param_1,local_60);
  uVar2 = FUN_1494be28e(param_1,DAT_14cc1c4f8);
  FUN_1494e778e(uVar2,1);
  FUN_1494be346(param_1,uVar2,0,0);
  if ((longlong)*(int *)(param_1 + 0x1a8) != 0) {
    lVar4 = (longlong)*(int *)(param_1 + 0x1a8) << 7;
    lVar3 = *(longlong *)(param_1 + 0x1a0) + 0x38;
    do {
      FUN_14945f130(local_98,lVar3 + -0x30);
      local_110 = 0;
      local_118 = local_98;
      uStack_108 = uVar2;
      FUN_149495630(param_1,*(undefined8 *)(lVar3 + -0x38),1,lVar3);
      lVar3 = lVar3 + 0x80;
      lVar4 = lVar4 + -0x80;
    } while (lVar4 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x1b8) != 0) {
    lVar4 = (longlong)*(int *)(param_1 + 0x1b8) << 7;
    lVar3 = *(longlong *)(param_1 + 0x1b0) + 0x38;
    do {
      FUN_14945f130(local_c8,lVar3 + -0x30);
      local_110 = 0;
      uStack_108 = 0;
      local_118 = local_c8;
      FUN_149495630(param_1,*(undefined8 *)(lVar3 + -0x38),2,lVar3);
      lVar3 = lVar3 + 0x80;
      lVar4 = lVar4 + -0x80;
    } while (lVar4 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x1c8) != 0) {
    puVar5 = *(undefined8 **)(param_1 + 0x1c0);
    puVar1 = puVar5 + (longlong)*(int *)(param_1 + 0x1c8) * 3;
    do {
      uVar2 = FUN_1494be28e(param_1,*puVar5);
      FUN_1494e778e(uVar2,1);
      FUN_1494be346(param_1,uVar2,0,0);
      if ((longlong)*(int *)(puVar5 + 2) != 0) {
        lVar3 = (longlong)*(int *)(puVar5 + 2) << 7;
        lVar4 = puVar5[1] + 0x38;
        do {
          FUN_14945f130(local_f8,lVar4 + -0x30);
          local_110 = 0;
          local_118 = local_f8;
          uStack_108 = uVar2;
          FUN_149495630(param_1,*(undefined8 *)(lVar4 + -0x38));
          lVar4 = lVar4 + 0x80;
          lVar3 = lVar3 + -0x80;
        } while (lVar3 != 0);
      }
      puVar5 = puVar5 + 3;
    } while (puVar5 != puVar1);
  }
  if ((local_50 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14949ec8c FUN_14949ec8c body=89 status=ok
// SIG undefined FUN_14949ec8c(void)

ulonglong FUN_14949ec8c(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(char *)(param_2 + 0x29) == '\x01') {
    lVar2 = FUN_1494e655a(param_2);
    if (*(longlong *)(lVar2 + 0x18) != DAT_14cc1c4f8) {
      cVar1 = FUN_14949b644(param_3);
      if (cVar1 == '\0') {
        if (param_4 != 0) {
          FUN_14020fad6(param_4,
                        L"Can\'t link due to data interface not supporting unified dispatch, consider insert kernel inbetween"
                       );
        }
        uVar3 = 0;
      }
    }
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14949ece6 FUN_14949ece6 body=35 status=ok
// SIG undefined FUN_14949ece6(void)

longlong * FUN_14949ece6(undefined8 param_1,longlong *param_2)

{
  FUN_149498f04();
  if (*param_2 == 0) {
    *(undefined4 *)(param_2 + 1) = 0;
  }
  return param_2;
}



// FUNCTION 14949ed0a FUN_14949ed0a body=292 status=ok
// SIG undefined FUN_14949ed0a(void)

/* WARNING: Removing unreachable block (ram,0x00014949ede3) */

longlong * FUN_14949ed0a(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined1 auStack_98 [40];
  undefined2 *local_70;
  int local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = 0;
  param_1[1] = 0;
  lVar4 = param_2[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      local_50 = *(undefined8 *)(lVar2 + lVar5);
      FUN_1400021e4(&local_50,&local_70);
      puVar6 = &DAT_149dfb77a;
      if (local_68 != 0) {
        puVar6 = local_70;
      }
      FUN_140002266(&local_60,L"%sIndex",puVar6);
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a1bd6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar7 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar7) = 0;
      *(undefined8 *)(lVar3 + lVar7) = local_60;
      *(undefined4 *)(lVar3 + 8 + lVar7) = (undefined4)local_58;
      *(undefined4 *)(lVar3 + 0xc + lVar7) = local_58._4_4_;
      local_58 = 0;
      local_60 = 0;
      if (local_70 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14949ee30 FUN_14949ee30 body=179 status=ok
// SIG undefined FUN_14949ee30(void)

void FUN_14949ee30(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong **local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1494e639c(param_2);
  local_38 = param_2;
  if ((param_2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  lVar2 = lVar1 + 0xa0;
  if (lVar1 == 0) {
    lVar2 = param_1 + 0x50;
  }
  local_30 = &local_38;
  FUN_1494e352c(lVar2);
  (**(code **)(*param_2 + 0x170))(param_2,0,param_3,0x34);
  FUN_1494be346(param_1,param_2,param_3,0);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14949eee4 FUN_14949eee4 body=457 status=ok
// SIG undefined FUN_14949eee4(void)

undefined8 FUN_14949eee4(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_1494e639c(param_2);
  plVar6 = (longlong *)(param_1 + 0x50);
  if (lVar2 != 0) {
    plVar6 = (longlong *)(lVar2 + 0xa0);
  }
  lVar2 = *plVar6;
  iVar1 = (int)plVar6[1];
  uVar3 = 0xffffffff;
  if ((longlong)iVar1 != 0) {
    lVar8 = (longlong)iVar1 << 3;
    lVar4 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar4 * 8) == param_2) {
        uVar3 = (uint)lVar4;
        break;
      }
      lVar4 = lVar4 + 1;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
  }
  iVar7 = ~uVar3 + iVar1;
  if (param_3 == 0) {
    if (iVar7 != 0) {
      memmove((void *)(lVar2 + (longlong)(int)uVar3 * 8),
              (void *)(lVar2 + (longlong)(int)uVar3 * 8 + 8),(longlong)iVar7 << 3);
      iVar1 = (int)plVar6[1];
    }
    *(int *)(plVar6 + 1) = iVar1 + -1;
    FUN_1494e37a2(plVar6);
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    iVar1 = (int)plVar6[1];
    *(uint *)(plVar6 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar6 + 0xc) < iVar1 + 1U) {
      FUN_1494e347e(plVar6,iVar1);
    }
    *(longlong *)(*plVar6 + (longlong)iVar1 * 8) = param_2;
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
  }
  else {
    if (iVar7 != 0) {
      memmove((void *)(lVar2 + (longlong)(int)uVar3 * 8),
              (void *)(lVar2 + (longlong)(int)uVar3 * 8 + 8),(longlong)iVar7 << 3);
      iVar1 = (int)plVar6[1];
    }
    *(int *)(plVar6 + 1) = iVar1 + -1;
    FUN_1494e37a2(plVar6);
    uVar5 = 0xffffffff;
    if ((longlong)(int)plVar6[1] != 0) {
      lVar2 = (longlong)(int)plVar6[1] << 3;
      lVar4 = 0;
      do {
        if (*(longlong *)(*plVar6 + lVar4 * 8) == param_3) {
          uVar5 = (undefined4)lVar4;
          break;
        }
        lVar4 = lVar4 + 1;
        lVar2 = lVar2 + -8;
      } while (lVar2 != 0);
    }
    local_30 = param_2;
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    FUN_1494be444(plVar6,&local_30,uVar5);
  }
  FUN_1494e7236(param_2,9);
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 14949f0ae FUN_14949f0ae body=214 status=ok
// SIG undefined FUN_14949f0ae(void)

void FUN_14949f0ae(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  undefined2 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar3 = DAT_14cc1c0f0;
  if (DAT_14cc1c0f8 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_28,puVar3,1);
  uVar2 = *(uint *)(param_1 + 0x1a8);
  if (uVar2 == *(uint *)(**(longlong **)(param_1 + 0x50) + 0xa8)) {
    if (0 < (int)uVar2) {
      plVar1 = (longlong *)(param_1 + 0x1a0);
      lVar5 = 0;
      uVar4 = 0;
      do {
        if ((*(longlong *)
              (*(longlong *)(*(longlong *)(**(longlong **)(param_1 + 0x50) + 0xa0) + uVar4 * 8) +
              0x18) == local_28) && (*(longlong *)(*plVar1 + lVar5) == local_28)) {
          FUN_1445288d0(param_1);
          FUN_1494d7576(plVar1,uVar4 & 0xffffffff);
          FUN_1494d75e4(plVar1);
          break;
        }
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 0x80;
      } while (uVar2 != uVar4);
    }
    FUN_145ebc436(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14949f18a FUN_14949f18a body=68 status=ok
// SIG undefined FUN_14949f18a(void)

void FUN_14949f18a(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*param_2 + 8);
  switchD_143c3d4dc::caseD_21(param_1,plVar1);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_14bd1ee48);
                    /* WARNING: Could not recover jumptable at 0x00014949f1cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_14bd1ee48);
  return;
}



// FUNCTION 14949f1ce FUN_14949f1ce body=610 status=ok
// SIG undefined FUN_14949f1ce(void)

ulonglong FUN_14949f1ce(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined2 *local_88;
  int local_80;
  longlong local_78;
  undefined2 *local_70;
  int local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (((*(int *)(param_1 + 0x58) != 0) && (**(longlong **)(param_1 + 0x50) == param_2)) &&
     (lVar2 = FUN_1494e64f0(param_3), lVar2 != 0)) {
    lVar3 = FUN_145ba6740();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      local_40 = 0;
      local_38 = 0x400000000;
      uVar4 = (**(code **)(*(longlong *)(lVar2 + 0x108) + 0x10))(lVar2 + 0x108,&local_60);
      plVar5 = (longlong *)FUN_14948712a(uVar4);
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      cVar1 = FUN_14949f432(param_1,plVar5);
      if (cVar1 == '\0') {
        if (param_4 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x2b0))(plVar5,&local_78);
          lVar2 = local_78;
          if (((local_78 == 0) || (lVar3 = FUN_144a78d6a(), lVar3 == 0)) ||
             ((*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38) ||
              (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
               lVar3 + 0x30)))) {
            local_78 = 0;
          }
          local_60 = *(longlong *)(local_78 + 0x18);
          FUN_1400021e4(&local_60,&local_70);
          puVar7 = local_70;
          if (local_68 == 0) {
            puVar7 = &DAT_149dfb77a;
          }
          (**(code **)(**(longlong **)(param_1 + 0x130) + 0x360))
                    (*(longlong **)(param_1 + 0x130),&local_90);
          lVar2 = local_90;
          if ((((local_90 == 0) || (lVar3 = FUN_144a78d6a(), lVar3 == 0)) ||
              (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
              lVar3 + 0x30)) {
            local_90 = 0;
          }
          local_60 = *(longlong *)(local_90 + 0x18);
          FUN_1400021e4(&local_60,&local_88);
          puVar8 = local_88;
          if (local_80 == 0) {
            puVar8 = &DAT_149dfb77a;
          }
          FUN_140002266(&local_60,
                        L"This data interface requires a %s which is not a child class of %s from the Component Source."
                        ,puVar8,puVar7);
          if (&local_60 == param_4) {
            if (local_60 != 0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*param_4 != 0) {
              FUN_1400020a8();
            }
            *param_4 = local_60;
            local_60 = 0;
            *(undefined4 *)(param_4 + 1) = (undefined4)local_58;
            *(undefined4 *)((longlong)param_4 + 0xc) = local_58._4_4_;
            local_58 = 0;
          }
          if (local_88 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_70 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
        uVar6 = 0;
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 14949f432 FUN_14949f432 body=241 status=ok
// SIG undefined FUN_14949f432(void)

undefined8 FUN_14949f432(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x2b0))(param_2,&local_20);
    lVar1 = local_20;
    if ((((local_20 == 0) || (lVar2 = FUN_144a78d6a(), lVar2 == 0)) ||
        (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
       (lVar4 = local_20,
       *(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
       lVar2 + 0x30)) {
      lVar4 = 0;
    }
    (**(code **)(**(longlong **)(param_1 + 0x130) + 0x360))
              (*(longlong **)(param_1 + 0x130),&local_28);
    lVar1 = local_28;
    if (((local_28 != 0) && (lVar2 = FUN_144a78d6a(), lVar2 != 0)) &&
       ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
        ((local_28 != 0 &&
          *(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30 && (*(int *)(local_28 + 0x38) <= *(int *)(lVar4 + 0x38))))))) {
      uVar3 = CONCAT71((int7)((ulonglong)(local_28 + 0x30) >> 8),
                       *(longlong *)
                        (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(local_28 + 0x38) * 8) ==
                       local_28 + 0x30);
      goto LAB_14949f4f5;
    }
  }
  uVar3 = 0;
LAB_14949f4f5:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 14949f524 FUN_14949f524 body=2073 status=ok
// SIG undefined FUN_14949f524(void)

longlong * FUN_14949f524(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  ulonglong *puVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_1d8 [36];
  undefined1 local_1b4 [4];
  longlong *local_1b0;
  longlong *local_1a8;
  undefined1 local_1a0 [8];
  longlong *local_198 [2];
  longlong *local_188 [2];
  undefined1 local_174 [4];
  longlong *local_170 [2];
  longlong *local_160;
  longlong *local_158;
  undefined1 local_150 [8];
  longlong *local_148 [2];
  wchar_t *local_138 [2];
  wchar_t **local_128;
  ulonglong *local_120;
  longlong *local_118 [2];
  longlong *local_108;
  longlong *local_100;
  wchar_t **local_f8;
  ulonglong *local_f0;
  wchar_t **local_e8;
  undefined1 *local_e0;
  wchar_t *local_d8;
  int local_d0;
  longlong *local_c8 [2];
  undefined1 local_b8 [20];
  int local_a4;
  undefined1 local_a0 [8];
  undefined1 *local_98;
  int local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  longlong *local_78 [2];
  undefined4 local_68 [4];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (*(longlong *)(param_1 + 0x128) == 0) {
    local_d8 = L"NoAssociatedClass";
    local_d0 = 0x11;
    FUN_1446e940c(&local_88,&local_d8);
    local_d8 = L"OptimusNode_DataInterface";
    local_d0 = 0x19;
    FUN_1446e940c(&local_e8,&local_d8);
    FUN_140208bae(&local_d8,&local_e8,&local_88,
                  L"Node has none or invalid data interface class associated with it. Delete and re-create the node."
                 );
    FUN_14023423e(param_2,&local_d8);
    local_138[0] = local_d8;
  }
  else {
    uVar4 = (**(code **)(*(longlong *)(param_1 + 0x108) + 0x20))(param_1 + 0x108,param_3);
    if (uVar4 != 0) {
      if (*(longlong *)(param_1 + 0x20) != 0) {
        FUN_141155906();
      }
      if ((longlong)*(int *)(param_1 + 0x58) != 0) {
        plVar9 = *(longlong **)(param_1 + 0x50);
        plVar7 = plVar9 + *(int *)(param_1 + 0x58);
        uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        do {
          lVar8 = *plVar9;
          if ((*(char *)(lVar8 + 0x29) == '\x01') && (lVar8 != **(longlong **)(param_1 + 0x50))) {
            FUN_14949fd3e();
            if (1 < local_d0 - local_a4) {
              FUN_1494e66cc(lVar8,local_150);
              FUN_145715fae(local_148,local_150);
              local_88 = L"MultipleBindingsOnPin";
              local_80[0] = 0x15;
              FUN_1446e940c(local_1a0,&local_88);
              local_88 = L"OptimusNode_DataInterface";
              local_80[0] = 0x19;
              FUN_1446e940c(local_174,&local_88);
              FUN_140208bae(local_170,local_174,local_1a0,L"Multiple bindings found for pin {0}");
              FUN_14023409e(&local_160,local_170,1);
              local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
              FUN_14023423e(local_78,local_148);
              local_f0 = (ulonglong *)local_68;
              local_f8 = &local_88;
              FUN_14010d304(&local_e8);
              local_108 = local_160;
              local_100 = local_158;
              if (local_158 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_158 + 1) = (int)local_158[1] + 1;
                UNLOCK();
              }
              FUN_14010c016(local_138,&local_108,&local_e8);
              FUN_14007f2db(local_e8,(ulonglong)local_e0 & 0xffffffff);
              if (local_e8 != (wchar_t **)0x0) {
                FUN_1400020a8();
              }
              if (local_78[0] != (longlong *)0x0) {
                (**(code **)(*local_78[0] + 0x10))();
              }
              if (local_158 != (longlong *)0x0) {
                LOCK();
                plVar9 = local_158 + 1;
                *(int *)plVar9 = (int)*plVar9 + -1;
                UNLOCK();
                if ((int)*plVar9 == 0) {
                  (**(code **)*local_158)(local_158);
                  LOCK();
                  piVar1 = (int *)((longlong)local_158 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*local_158 + 0x10))(local_158);
                  }
                }
              }
              goto LAB_14949f991;
            }
            if (local_d0 - local_a4 == 1) {
              if (local_d0 != local_a4) {
                puVar5 = local_98;
                if (local_98 == (undefined1 *)0x0) {
                  puVar5 = local_a0;
                }
                iVar6 = *(int *)(puVar5 + (ulonglong)(local_90 - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
                if (iVar6 != -1) {
                  while (*(ulonglong *)(local_d8 + (longlong)iVar6 * 8) != uVar4) {
                    iVar6 = *(int *)(local_d8 + ((longlong)iVar6 * 2 + 1) * 4);
                    if (iVar6 == -1) goto LAB_14949f7a8;
                  }
                  goto LAB_14949f690;
                }
              }
LAB_14949f7a8:
              FUN_1494e66cc(**(undefined8 **)(param_1 + 0x50),local_150);
              FUN_145715fae(local_188,local_150);
              FUN_1494e66cc(lVar8,local_1a0);
              FUN_145715fae(local_198,local_1a0);
              local_88 = L"IncompatibleBinding";
              local_80[0] = 0x13;
              FUN_1446e940c(local_174,&local_88);
              local_88 = L"OptimusNode_DataInterface";
              local_80[0] = 0x19;
              FUN_1446e940c(local_1b4,&local_88);
              FUN_140208bae(local_170,local_1b4,local_174,
                            L"Bindings for pin {0} are not the same as for the {1} pin");
              FUN_14023409e(&local_1b0,local_170,1);
              local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
              FUN_14023423e(local_78,local_198);
              local_68[0] = 4;
              FUN_14023423e(local_58,local_188);
              local_f0 = &local_48;
              local_f8 = &local_88;
              FUN_14010d304(&local_e8);
              local_108 = local_1b0;
              local_100 = local_1a8;
              if (local_1a8 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_1a8 + 1) = (int)local_1a8[1] + 1;
                UNLOCK();
              }
              FUN_14010c016(local_138,&local_108,&local_e8);
              FUN_14007f2db(local_e8,(ulonglong)local_e0 & 0xffffffff);
              if (local_e8 != (wchar_t **)0x0) {
                FUN_1400020a8();
              }
              lVar8 = 0x30;
              do {
                plVar9 = *(longlong **)((longlong)local_80 + lVar8 + -8);
                if (plVar9 != (longlong *)0x0) {
                  (**(code **)(*plVar9 + 0x10))();
                  *(undefined8 *)((longlong)local_80 + lVar8 + -8) = 0;
                  *(undefined4 *)((longlong)local_80 + lVar8) = 0;
                }
                lVar8 = lVar8 + -0x20;
              } while (lVar8 != -0x10);
              if (local_1a8 != (longlong *)0x0) {
                LOCK();
                plVar9 = local_1a8 + 1;
                *(int *)plVar9 = (int)*plVar9 + -1;
                UNLOCK();
                if ((int)*plVar9 == 0) {
                  (**(code **)*local_1a8)(local_1a8);
                  LOCK();
                  piVar1 = (int *)((longlong)local_1a8 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*local_1a8 + 0x10))(local_1a8);
                  }
                }
              }
              local_148[0] = local_188[0];
              if (local_198[0] != (longlong *)0x0) {
                (**(code **)(*local_198[0] + 0x10))();
                local_148[0] = local_188[0];
              }
LAB_14949f991:
              if (local_148[0] != (longlong *)0x0) {
                (**(code **)(*local_148[0] + 0x10))();
              }
              FUN_14023423e(param_2,local_138);
              if (local_138[0] != (wchar_t *)0x0) {
                (**(code **)(*(longlong *)local_138[0] + 0x10))();
              }
              if (local_170[0] != (longlong *)0x0) {
                (**(code **)(*local_170[0] + 0x10))();
              }
              local_90 = 0;
              if (local_98 != (undefined1 *)0x0) {
                FUN_1400020a8();
              }
              FUN_1494d6142(&local_d8);
              goto LAB_14949f6e3;
            }
LAB_14949f690:
            local_90 = 0;
            if (local_98 != (undefined1 *)0x0) {
              FUN_1400020a8();
            }
            FUN_1494d6142(&local_d8);
          }
          plVar9 = plVar9 + 1;
        } while (plVar9 != plVar7);
      }
      plVar9 = *(longlong **)(param_1 + 0x130);
      if ((plVar9 == (longlong *)0x0) ||
         ((**(code **)(*plVar9 + 0x380))(plVar9,param_2), *param_2 == 0)) {
        *param_2 = 0;
        *(undefined4 *)(param_2 + 1) = 0;
      }
      goto LAB_14949f6e3;
    }
    FUN_1494e66cc(**(undefined8 **)(param_1 + 0x50),local_170);
    FUN_145715fae(local_118,local_170);
    local_d8 = L"NoBindingConnected";
    local_d0 = 0x12;
    FUN_1446e940c(local_150,&local_d8);
    local_d8 = L"OptimusNode_DataInterface";
    local_d0 = 0x19;
    FUN_1446e940c(local_1a0,&local_d8);
    FUN_140208bae(local_138,local_1a0,local_150,L"No component binding connected to the {0} pin");
    FUN_14023409e(&local_128,local_138,1);
    local_d8 = (wchar_t *)CONCAT44(local_d8._4_4_,4);
    FUN_14023423e(local_c8,local_118);
    local_e0 = local_b8;
    local_e8 = &local_d8;
    FUN_14010d304(&local_88);
    local_f8 = local_128;
    local_f0 = local_120;
    if (local_120 != (ulonglong *)0x0) {
      LOCK();
      *(int *)(local_120 + 1) = (int)local_120[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(&local_108,&local_f8,&local_88);
    FUN_14007f2db(local_88,local_80[0]);
    if (local_88 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_c8[0] != (longlong *)0x0) {
      (**(code **)(*local_c8[0] + 0x10))();
    }
    if (local_120 != (ulonglong *)0x0) {
      LOCK();
      puVar2 = local_120 + 1;
      *(int *)puVar2 = (int)*puVar2 + -1;
      UNLOCK();
      if ((int)*puVar2 == 0) {
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
    FUN_14023423e(param_2,&local_108);
    if (local_108 != (longlong *)0x0) {
      (**(code **)(*local_108 + 0x10))();
    }
  }
  if (local_138[0] != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_138[0] + 0x10))();
  }
LAB_14949f6e3:
  if ((local_48 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14949fd3e FUN_14949fd3e body=1348 status=ok
// SIG undefined FUN_14949fd3e(void)

undefined8 *
FUN_14949fd3e(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined1 auStack_1e8 [32];
  undefined8 *local_1c8;
  undefined1 local_1bc [4];
  longlong local_1b8;
  int local_1b0;
  undefined8 *local_1a8;
  undefined8 uStack_1a0;
  undefined8 *local_198;
  int local_190;
  undefined8 *local_188;
  undefined8 *local_180;
  ulonglong local_178;
  undefined4 local_170 [8];
  longlong local_150;
  longlong local_140;
  undefined1 local_138 [32];
  longlong local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_188 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *local_188 = 0;
  local_188[1] = 0;
  local_188[6] = 0;
  local_188[7] = 0x400000000;
  local_180 = local_188;
  FUN_1494cccd8(&local_198,param_3,param_4);
  if (local_190 == 0) {
    param_2[4] = 0;
    *(undefined4 *)(param_2 + 5) = 0;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    param_2[8] = 0;
    *(undefined4 *)(param_2 + 9) = 0;
    local_190 = 0;
  }
  else {
    local_1c8 = param_2;
    local_140 = FUN_1494e64f0(*local_198);
    FUN_149499536(local_138,local_198 + 1);
    FUN_1494cceba(&local_188,&local_140);
    if (local_118 != 0) {
      FUN_1400020a8();
    }
    local_140 = 0;
    local_118 = 0;
    local_110 = 0x400000000;
    cVar3 = FUN_1494ccf3a(&local_188);
    if (cVar3 != '\0') {
      do {
        lVar9 = local_140;
        local_1a8 = (undefined8 *)0x0;
        uStack_1a0 = 0;
        if (local_140 == 0) {
LAB_14949fefb:
          iVar5 = *(int *)(lVar9 + 0x58);
          if ((longlong)iVar5 != 0) {
            lVar9 = *(longlong *)(lVar9 + 0x50);
            lVar10 = 0;
            do {
              uVar2 = uStack_1a0;
              lVar1 = *(longlong *)(lVar9 + lVar10);
              if (*(char *)(lVar1 + 0x29) == '\x01') {
                lVar12 = (longlong)(int)uStack_1a0;
                uVar4 = (int)uStack_1a0 + 1;
                uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar4);
                if (uStack_1a0._4_4_ < uVar4) {
                  FUN_1494e31fe(&local_1a8,uVar2 & 0xffffffff);
                }
                local_1a8[lVar12] = lVar1;
              }
              lVar10 = lVar10 + 8;
            } while ((longlong)iVar5 * 8 != lVar10);
          }
LAB_14949ff08:
          if ((longlong)(int)uStack_1a0 != 0) {
            puVar8 = local_1a8 + (int)uStack_1a0;
            puVar11 = local_1a8;
            do {
              FUN_1494e72a0(*puVar11,&local_1b8,local_138);
              iVar5 = 0;
              if ((longlong)local_1b0 != 0) {
                lVar10 = (longlong)local_1b0 * 0x38;
                lVar9 = local_1b8 + 8;
                do {
                  if (*(longlong *)(lVar9 + -8) != 0) {
                    local_178 = FUN_1494e64f0();
                    FUN_149499536(local_170,lVar9);
                    uVar4 = ((uint)(local_178 >> 0x14) & 0xffff ^ (uint)(local_178 >> 4)) *
                            -0x7a143595;
                    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
                    uVar4 = uVar4 >> 0x10 ^ uVar4;
                    iVar5 = FUN_1494d0c11(local_170);
                    iVar5 = FUN_1494d0c90(&local_b8,
                                          (uVar4 >> 2) + uVar4 * 0x40 + iVar5 + 0x9e3779b9 ^ uVar4,
                                          &local_178);
                    if (iVar5 == -1) {
                      FUN_1494dbce2(&local_b8,local_1bc,&local_178);
                      FUN_1494ccfd8(&local_188,&local_178);
                    }
                    if (local_150 != 0) {
                      FUN_1400020a8();
                    }
                  }
                  lVar9 = lVar9 + 0x38;
                  lVar10 = lVar10 + -0x38;
                  iVar5 = local_1b0;
                } while (lVar10 != 0);
              }
              FUN_1494d74c1(local_1b8,iVar5);
              if (local_1b8 != 0) {
                FUN_1400020a8();
              }
              puVar11 = puVar11 + 1;
            } while (puVar11 != puVar8);
          }
        }
        else {
          uVar6 = FUN_14599b982();
          plVar7 = (longlong *)FUN_144718840(lVar9,uVar6);
          if (plVar7 == (longlong *)0x0) {
            uVar6 = FUN_145a964a0();
            plVar7 = (longlong *)FUN_144718840(lVar9,uVar6);
            if (plVar7 == (longlong *)0x0) goto LAB_14949fefb;
            lVar9 = (**(code **)(*plVar7 + 0x20))(plVar7);
            uVar2 = uStack_1a0;
            lVar10 = (longlong)(int)uStack_1a0;
            uVar4 = (int)uStack_1a0 + 1;
            uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar4);
            if (uStack_1a0._4_4_ < uVar4) {
              FUN_1494e31fe(&local_1a8,uVar2 & 0xffffffff);
            }
            local_1a8[lVar10] = lVar9;
            local_178 = *(ulonglong *)(lVar9 + 0xa0);
            local_170[0] = *(undefined4 *)(lVar9 + 0xa8);
            FUN_1494bdec4(&local_1a8,&local_178);
            goto LAB_14949ff08;
          }
          local_178 = (**(code **)(*plVar7 + 0x10))(plVar7,local_138);
          if (local_178 != 0) {
            FUN_1494e5608(&local_108,&local_1b8,&local_178);
          }
        }
        if (local_1a8 != (undefined8 *)0x0) {
          FUN_1400020a8(local_1a8);
        }
        cVar3 = FUN_1494ccf3a(&local_188,&local_140);
      } while (cVar3 != '\0');
    }
    param_2 = local_1c8;
    FUN_1494cd02e(local_1c8,&local_108);
    if (local_118 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1494d74c1(local_198,local_190);
  puVar8 = local_198;
  if (local_198 == (undefined8 *)0x0) goto LAB_1494a01d1;
  while( true ) {
    FUN_1400020a8(puVar8);
LAB_1494a01d1:
    puVar8 = local_180;
    if (local_180 == (undefined8 *)0x0) break;
    puVar11 = (undefined8 *)*local_180;
    plVar7 = local_180 + 6;
    local_180 = puVar11;
    if (*plVar7 != 0) {
      FUN_1400020a8();
    }
  }
  local_c0 = 0;
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_1494d6142(&local_108);
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1494dbb74(&local_b8);
  if ((local_60 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1494a0283 FUN_1494a0283 body=175 status=ok
// SIG undefined FUN_1494a0283(void)

undefined8 FUN_1494a0283(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  FUN_144a5c54a(local_b8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a0334 FUN_1494a0334 body=436 status=ok
// SIG undefined FUN_1494a0334(void)

void FUN_1494a0334(longlong param_1)

{
  void *_Src;
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_128 [32];
  undefined4 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  void *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_140f4f540();
  uVar2 = FUN_1411c55ba();
  FUN_14949555e(&DAT_14cc1c7d8,local_78,uVar2);
  FUN_140e6511c(&local_68,local_78);
  plVar3 = (longlong *)FUN_1494a1a72(*(undefined8 *)(param_1 + 0x130));
  cVar1 = FUN_14945fc10(&local_68);
  _Src = local_48;
  if (plVar3 != (longlong *)0x0 && cVar1 == '\x01') {
    if (*(int *)(param_1 + 0x58) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = **(undefined8 **)(param_1 + 0x50);
    }
    local_a8 = local_68;
    uStack_a4 = uStack_64;
    uStack_a0 = uStack_60;
    uStack_9c = uStack_5c;
    local_98 = local_58;
    uStack_94 = uStack_54;
    uStack_90 = uStack_50;
    uStack_8c = uStack_4c;
    local_88 = (void *)0x0;
    local_80 = local_40;
    if ((longlong)local_40 == 0) {
      local_7c = 0;
    }
    else {
      FUN_1446dd670(&local_88,local_40,0);
      memcpy(local_88,_Src,(longlong)local_40 * 2);
    }
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    FUN_140e6507e(&local_e8);
    (**(code **)(*plVar3 + 0x2a8))(plVar3,&local_f0);
    local_108 = &local_a8;
    local_f8 = 0;
    local_100 = uVar2;
    FUN_149495630(param_1,local_f0,1,&local_e8);
    FUN_14121c54c(&local_e8);
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a04ea FUN_1494a04ea body=447 status=ok
// SIG undefined FUN_1494a04ea(void)

void FUN_1494a04ea(longlong param_1,longlong *param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_158 [32];
  undefined1 *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_118 [48];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a0 [48];
  longlong local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x330))(param_2,&local_70);
    if (*(int *)(param_1 + 0x58) < 2) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8);
    }
    iVar1 = 0;
    if ((longlong)local_68 != 0) {
      lVar2 = (longlong)local_68 * 0x38;
      lVar3 = local_70 + 8;
      do {
        if (param_3 == '\0') {
          FUN_14945f130(local_118,lVar3);
          local_b8 = 0;
          uStack_b0 = 0;
          local_c8 = 0;
          uStack_c0 = 0;
          local_d8 = 0;
          uStack_d0 = 0;
          local_e8 = 0;
          uStack_e0 = 0;
          FUN_140e6507e(&local_e8);
          local_128 = 0;
          local_138 = local_118;
          local_130 = uVar4;
          FUN_149495630(param_1,*(undefined8 *)(lVar3 + -8),1,&local_e8);
        }
        else {
          FUN_14945f130(local_a0,lVar3);
          local_b8 = 0;
          uStack_b0 = 0;
          local_c8 = 0;
          uStack_c0 = 0;
          local_d8 = 0;
          uStack_d0 = 0;
          local_e8 = 0;
          uStack_e0 = 0;
          FUN_140e6507e(&local_e8);
          local_138 = local_a0;
          local_130 = uVar4;
          FUN_144528bee(param_1,*(undefined8 *)(lVar3 + -8),1,&local_e8);
        }
        FUN_14121c54c(&local_e8);
        lVar3 = lVar3 + 0x38;
        lVar2 = lVar2 + -0x38;
        iVar1 = local_68;
      } while (lVar2 != 0);
    }
    FUN_1494d4853(local_70,iVar1);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494a06aa FUN_1494a06aa body=204 status=ok
// SIG undefined FUN_1494a06aa(void)

void FUN_1494a06aa(longlong param_1,longlong param_2)

{
  undefined1 auStack_278 [40];
  undefined **local_250 [17];
  undefined8 local_1c8;
  longlong local_1c0;
  undefined2 local_1b8;
  undefined **local_1b0;
  undefined ***local_1a8;
  undefined ***local_1a0;
  undefined8 **local_198;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_278;
  FUN_1407134c4(local_250);
  local_1c8 = *(undefined8 *)(param_2 + 0x88);
  *(undefined ****)(param_2 + 0x88) = local_250;
  local_250[0] = &PTR_FUN_149eae6c0;
  local_1b8 = 0;
  local_198 = &local_1a0;
  local_1b0 = &PTR_FUN_149e37810;
  local_1a0 = &local_1b0;
  local_1c0 = param_2;
  local_1a8 = local_250;
  FUN_144938ae6(param_1);
  FUN_14041e0ea(local_250);
  (**(code **)(**(longlong **)(param_1 + 0x130) + 0x340))(*(longlong **)(param_1 + 0x130),param_2);
  if ((local_20 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a0778 FUN_1494a0778 body=185 status=ok
// SIG undefined FUN_1494a0778(void)

void FUN_1494a0778(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_278 [40];
  undefined **local_250 [17];
  undefined8 local_1c8;
  longlong local_1c0;
  undefined2 local_1b8;
  undefined **local_1b0;
  undefined ***local_1a8;
  undefined ***local_1a0;
  undefined8 **local_198;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_278;
  FUN_1407134c4(local_250);
  local_1c8 = *(undefined8 *)(param_2 + 0x88);
  *(undefined ****)(param_2 + 0x88) = local_250;
  local_250[0] = &PTR_FUN_149eae6c0;
  local_1b8 = 0;
  local_198 = &local_1a0;
  local_1b0 = &PTR_FUN_149e37810;
  local_1a0 = &local_1b0;
  local_1c0 = param_2;
  local_1a8 = local_250;
  FUN_144938ae6(param_1);
  FUN_14041e0ea(local_250);
  if ((local_20 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a0832 FUN_1494a0832 body=266 status=ok
// SIG undefined FUN_1494a0832(void)

void FUN_1494a0832(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_278 [40];
  undefined **local_250 [17];
  undefined8 local_1c8;
  longlong local_1c0;
  undefined2 local_1b8;
  undefined **local_1b0;
  undefined ***local_1a8;
  undefined ***local_1a0;
  undefined8 **local_198;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_278;
  FUN_1407134c4(local_250);
  local_1c8 = *(undefined8 *)(param_2 + 0x88);
  *(undefined ****)(param_2 + 0x88) = local_250;
  local_250[0] = &PTR_FUN_149eae6c0;
  local_1b8 = 0;
  local_198 = &local_1a0;
  local_1b0 = &PTR_FUN_149e37810;
  local_1a0 = &local_1b0;
  local_1c0 = param_2;
  local_1a8 = local_250;
  FUN_144938ae6(param_1);
  FUN_14041e0ea(local_250);
  lVar1 = FUN_1494a0283(param_1,*(undefined8 *)(param_1 + 0x128));
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  *(longlong *)(param_1 + 0x130) = lVar1;
  FUN_144757f48(lVar1,8);
  (**(code **)(**(longlong **)(param_1 + 0x130) + 0x348))(*(longlong **)(param_1 + 0x130),param_2);
  if ((local_20 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a093e FUN_1494a093e body=185 status=ok
// SIG undefined FUN_1494a093e(void)

void FUN_1494a093e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_278 [40];
  undefined **local_250 [17];
  undefined8 local_1c8;
  longlong local_1c0;
  undefined2 local_1b8;
  undefined **local_1b0;
  undefined ***local_1a8;
  undefined ***local_1a0;
  undefined8 **local_198;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_278;
  FUN_1407134c4(local_250);
  local_1c8 = *(undefined8 *)(param_2 + 0x88);
  *(undefined ****)(param_2 + 0x88) = local_250;
  local_250[0] = &PTR_FUN_149eae6c0;
  local_1b8 = 0;
  local_198 = &local_1a0;
  local_1b0 = &PTR_FUN_149e37810;
  local_1a0 = &local_1b0;
  local_1c0 = param_2;
  local_1a8 = local_250;
  FUN_144938ae6(param_1);
  FUN_14041e0ea(local_250);
  if ((local_20 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a09f8 FUN_1494a09f8 body=742 status=ok
// SIG undefined FUN_1494a09f8(void)

void FUN_1494a09f8(undefined8 param_1,longlong *param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_198 [32];
  undefined1 local_178;
  longlong *local_168;
  longlong local_160;
  longlong local_158;
  ulonglong uStack_150;
  longlong local_148;
  ulonglong uStack_140;
  longlong *local_130;
  int local_128;
  longlong local_120;
  longlong *local_118;
  undefined1 local_10c [4];
  longlong local_108;
  longlong *plStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  (**(code **)(*param_2 + 0x328))(param_2,&local_130);
  local_148 = 0;
  uStack_140 = 0;
  local_168 = param_2;
  (**(code **)(*param_2 + 0x2c8))(param_2,&local_148);
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  if ((longlong)(int)uStack_140 != 0) {
    lVar3 = (longlong)(int)uStack_140 * 0x28;
    lVar1 = local_148;
    do {
      local_120 = lVar1;
      local_108 = lVar1;
      plStack_100 = &local_120;
      FUN_1494d7680(&local_b8,&local_158,&local_108);
      lVar1 = lVar1 + 0x28;
      lVar3 = lVar3 + -0x28;
    } while (lVar3 != 0);
  }
  local_158 = 0;
  uStack_150 = 0;
  (**(code **)(*local_168 + 0x2d0))(local_168,&local_158);
  local_e8 = 0;
  local_e0 = 0;
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  if ((longlong)(int)uStack_150 != 0) {
    lVar3 = (longlong)(int)uStack_150 * 0x28;
    lVar1 = local_158;
    do {
      local_160 = lVar1;
      local_120 = lVar1;
      local_118 = &local_160;
      FUN_1494d7680(&local_108,local_10c,&local_120);
      lVar1 = lVar1 + 0x28;
      lVar3 = lVar3 + -0x28;
    } while (lVar3 != 0);
  }
  if ((longlong)local_128 != 0) {
    lVar3 = (longlong)local_128 * 0x30;
    plVar2 = local_130;
    do {
      if (*plVar2 != 0) {
        local_178 = param_3;
        FUN_14452a060(param_1,plVar2,&local_b8,&local_108);
      }
      plVar2 = plVar2 + 6;
      lVar3 = lVar3 + -0x30;
    } while (lVar3 != 0);
  }
  local_c0 = 0;
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_1494cf5fc(&local_108);
  FUN_141161157(local_158,uStack_150 & 0xffffffff);
  if (local_158 != 0) {
    FUN_1400020a8();
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1494cf5fc(&local_b8);
  FUN_141161157(local_148,uStack_140 & 0xffffffff);
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  FUN_149482fc4(local_130,local_128);
  if (local_130 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a0ce0 FUN_1494a0ce0 body=121 status=ok
// SIG undefined FUN_1494a0ce0(void)

undefined8 FUN_1494a0ce0(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1494e68cc(&local_28);
  if (local_20 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_14949ad10(param_1,&local_28);
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a0d5a FUN_1494a0d5a body=336 status=ok
// SIG undefined FUN_1494a0d5a(void)

longlong FUN_1494a0d5a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined1 local_c0 [64];
  undefined1 local_80 [64];
  longlong local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 == 0) {
    lVar1 = 0;
    goto LAB_1494a0e5c;
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (lVar2 == 0) {
LAB_1494a0e8a:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_108);
  }
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(lVar1);
  }
  lVar2 = *(longlong *)(lVar2 + 0x10);
  if ((*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38)) ||
     (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30)) goto LAB_1494a0e8a;
  local_d0 = 0xfff00007;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0xffffffff;
  FUN_14092e9d5(local_c0,*(undefined8 *)(param_1 + 0x28),param_2,0);
  lVar1 = FUN_14092ef3d(local_c0);
  if (lVar1 == 0) {
LAB_1494a0e30:
    lVar1 = 0;
  }
  else {
    lVar2 = FUN_140fc6edc();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        != lVar2 + 0x30)) goto LAB_1494a0e30;
  }
  local_38 = 0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  FUN_1401be51a(local_80);
LAB_1494a0e5c:
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a0ec2 FUN_1494a0ec2 body=642 status=ok
// SIG undefined FUN_1494a0ec2(void)

int FUN_1494a0ec2(longlong param_1,longlong param_2)

{
  void *pvVar1;
  longlong lVar2;
  ulonglong uVar3;
  ushort uVar4;
  ulonglong uVar5;
  ushort uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_a8 [32];
  void *local_88;
  int local_80;
  undefined4 local_7c;
  longlong *local_78;
  ulonglong uStack_70;
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50;
  uint local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar7 = -1;
  if ((param_2 == 0) || (lVar2 = FUN_1494e63d6(param_2), lVar2 != 0)) goto LAB_1494a0ee9;
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x328))(*(longlong **)(param_1 + 0x28),&local_50);
  uVar3 = (ulonglong)local_48;
  iVar7 = -1;
  if (0 < (int)local_48) {
    lVar9 = 0x10;
    lVar2 = 0;
    do {
      FUN_1494e66cc(param_2,&local_60);
      if (local_60 == *(void **)(local_50 + -0x10 + lVar9)) {
        local_60 = (void *)0x0;
        local_58 = *(int *)(local_50 + lVar9);
        lVar2 = (longlong)local_58;
        pvVar1 = *(void **)(local_50 + -8 + lVar9);
        if (lVar2 == 0) {
          local_54 = 0;
        }
        else {
          FUN_1446dd670(&local_60,local_58,0);
          memcpy(local_60,pvVar1,lVar2 * 2);
        }
        local_78 = (longlong *)0x0;
        uStack_70 = 0;
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2c8 +
                    (ulonglong)(*(char *)(param_2 + 0x29) == '\x01') * 8))();
        pvVar1 = local_60;
        local_88 = (void *)0x0;
        lVar2 = (longlong)local_58;
        local_80 = local_58;
        if (lVar2 == 0) {
          local_7c = 0;
        }
        else {
          FUN_1446dd670(&local_88,local_58,0);
          memcpy(local_88,pvVar1,lVar2 * 2);
        }
        uVar3 = (ulonglong)(int)uStack_70;
        iVar7 = -1;
        if (uVar3 == 0) goto LAB_1494a10e6;
        plVar8 = local_78;
        goto LAB_1494a1071;
      }
      lVar2 = lVar2 + 1;
      uVar3 = (ulonglong)(int)local_48;
      lVar9 = lVar9 + 0x30;
    } while (lVar2 < (longlong)uVar3);
  }
  goto LAB_1494a1123;
LAB_1494a1071:
  if ((int)plVar8[1] != local_80) {
    if ((int)plVar8[1] + local_80 == 1) goto LAB_1494a10d8;
    goto LAB_1494a10c7;
  }
  if (1 < local_80) {
    lVar2 = 0;
    do {
      uVar4 = *(ushort *)(*plVar8 + lVar2);
      uVar5 = (ulonglong)uVar4;
      uVar6 = *(ushort *)((longlong)local_88 + lVar2);
      if (uVar4 == uVar6) {
        if (uVar4 == 0) break;
      }
      else {
        if (0x7f < (uVar6 | uVar4)) goto LAB_1494a10d2;
        uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
        uVar10 = (ulonglong)uVar6;
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[uVar10]) goto LAB_1494a10d2;
      }
      lVar2 = lVar2 + 2;
    } while( true );
  }
  goto LAB_1494a10d8;
LAB_1494a10d2:
  if (uVar4 == uVar6) {
LAB_1494a10d8:
    iVar7 = (int)((ulonglong)((longlong)plVar8 - (longlong)local_78) >> 3) * -0x33333333;
    goto LAB_1494a10e6;
  }
LAB_1494a10c7:
  plVar8 = plVar8 + 5;
  if (plVar8 == local_78 + uVar3 * 5) goto LAB_1494a10e6;
  goto LAB_1494a1071;
LAB_1494a10e6:
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
    uVar3 = uStack_70 & 0xffffffff;
  }
  FUN_141161157(local_78,uVar3);
  if (local_78 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = (ulonglong)local_48;
LAB_1494a1123:
  FUN_149482fc4(local_50,uVar3);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
LAB_1494a0ee9:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar7;
}



// FUNCTION 1494a1146 FUN_1494a1146 body=419 status=ok
// SIG undefined FUN_1494a1146(void)

longlong FUN_1494a1146(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80 [2];
  undefined1 local_70 [8];
  int local_68;
  int local_3c;
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = *(longlong *)(param_1 + -0xe8);
  lVar3 = param_1;
  if (lVar4 == 0) {
LAB_1494a1194:
    lVar4 = 0;
  }
  else {
    lVar1 = FUN_141155906();
    lVar3 = *(longlong *)(lVar4 + 0x10);
    if ((*(int *)(lVar3 + 0x38) < *(int *)(lVar1 + 0x38)) ||
       (lVar3 = *(longlong *)(lVar3 + 0x30),
       *(longlong *)(lVar3 + (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar1 + 0x30))
    goto LAB_1494a1194;
  }
  FUN_14949fd3e(lVar3,local_70,**(undefined8 **)(param_1 + -0xb8),param_2);
  if (local_68 - local_3c == 1) {
    FUN_149498dbe(local_70,local_80);
    lVar4 = *local_80[0];
    if (local_80[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(uint *)(lVar4 + 0x30) < 3) {
      plVar2 = (longlong *)(**(code **)(*(longlong *)(lVar4 + 0x28) + 0x10))(lVar4 + 0x28);
      if ((plVar2 != (longlong *)0x0) && (lVar3 = (**(code **)(*plVar2 + 8))(plVar2), lVar3 != 0)) {
        lVar4 = FUN_1458f36a4();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          lVar1 = (longlong)*(int *)(*(longlong *)(lVar3 + 0x120) + 0x30);
          if (lVar1 != 0) {
            lVar5 = 0;
            do {
              lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x120) + 0x28) + lVar5);
              if (*(char *)(lVar4 + 0x48) != '\0') goto LAB_1494a129e;
              lVar5 = lVar5 + 8;
            } while (lVar1 * 8 != lVar5);
          }
        }
      }
    }
    else if (lVar4 != 0) {
      lVar3 = FUN_1458d08d2();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        lVar4 = FUN_1494e7adc(lVar4,param_2);
        goto LAB_1494a129e;
      }
    }
    lVar4 = 0;
  }
LAB_1494a129e:
  local_28 = 0;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_1494d6142(local_70);
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 1494a12f4 FUN_1494a12f4 body=195 status=ok
// SIG undefined FUN_1494a12f4(void)

int FUN_1494a12f4(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  uint local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x328))(*(longlong **)(param_1 + 0x18),&local_40);
  uVar2 = (ulonglong)local_38;
  if (0 < (int)local_38) {
    lVar3 = 0;
    lVar5 = 0;
    do {
      lVar1 = local_40;
      FUN_1494e66cc(param_2,&local_48);
      if (*(longlong *)(lVar1 + lVar3) == local_48) {
        iVar4 = *(byte *)(local_40 + 0x2c + lVar3) + 1;
        uVar2 = (ulonglong)local_38;
        goto LAB_1494a136d;
      }
      lVar5 = lVar5 + 1;
      uVar2 = (ulonglong)(int)local_38;
      lVar3 = lVar3 + 0x30;
    } while (lVar5 < (longlong)uVar2);
  }
  iVar4 = 2;
LAB_1494a136d:
  FUN_149482fc4(local_40,uVar2);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a13b8 FUN_1494a13b8 body=308 status=ok
// SIG undefined FUN_1494a13b8(void)

longlong * FUN_1494a13b8(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined4 local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x330))(*(longlong **)(param_1 + 0x10),&local_58);
  lVar2 = local_58;
  *param_2 = 0;
  param_2[1] = 0;
  lVar3 = (longlong)local_50;
  iVar5 = 0;
  if (lVar3 != 0) {
    lVar6 = 0;
    do {
      uVar1 = *(undefined8 *)(lVar2 + lVar6);
      local_68 = (undefined8 *)0x0;
      local_60 = 1;
      FUN_1401b309e(&local_68,1,0);
      *local_68 = uVar1;
      lVar4 = FUN_14949ad10(param_1 + -0x120,&local_68);
      if (local_68 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if ((lVar4 != 0) && (*(char *)(lVar4 + 0x29) == '\x01')) {
        iVar5 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
          FUN_149482de0(param_2,iVar5);
        }
        *(longlong *)(*param_2 + (longlong)iVar5 * 8) = lVar4;
      }
      lVar6 = lVar6 + 0x38;
      iVar5 = local_50;
    } while (lVar3 * 0x38 - lVar6 != 0);
  }
  FUN_1494d4853(local_58,iVar5);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1494a14ee FUN_1494a14ee body=245 status=ok
// SIG undefined FUN_1494a14ee(void)

void FUN_1494a14ee(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x128) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x130);
    if (plVar2 == (longlong *)0x0) {
      lVar1 = FUN_1494a0283(param_1);
      if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar1);
      }
      *(longlong *)(param_1 + 0x130) = lVar1;
      FUN_144757f48(lVar1,8);
      plVar2 = *(longlong **)(param_1 + 0x130);
    }
    (**(code **)(*plVar2 + 0x318))(plVar2,local_40);
    FUN_140233b1a(local_30,local_40);
    FUN_1458d0f32(param_1,local_30);
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1494a0334(param_1);
    FUN_1494a04ea(param_1,*(undefined8 *)(param_1 + 0x130),0);
    FUN_1494a09f8(param_1,*(undefined8 *)(param_1 + 0x130),0);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a15e4 FUN_1494a15e4 body=558 status=ok
// SIG undefined FUN_1494a15e4(void)

undefined8 FUN_1494a15e4(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  undefined4 local_d0;
  longlong *local_c8;
  undefined4 local_c0;
  longlong *local_b8;
  undefined4 local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  wchar_t **local_98;
  ulonglong *local_90;
  longlong local_88;
  undefined4 local_80;
  wchar_t *local_78;
  undefined4 local_70 [2];
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1494a1814(param_1,&local_a8);
  if (*(longlong **)(param_1 + 0x130) != (longlong *)0x0) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x130) + 0x378))();
    if (cVar2 == '\0') {
      local_78 = L"OutdatedSuffix";
      local_70[0] = 0xe;
      FUN_1446e940c(&local_88,&local_78);
      local_78 = L"OptimusNode_DataInterface";
      local_70[0] = 0x19;
      FUN_1446e940c(&local_98,&local_78);
      FUN_140208bae(&local_b8,&local_98,&local_88,L"(Outdated)");
      local_c8 = local_b8;
      if (local_b8 != (longlong *)0x0) {
        (**(code **)(*local_b8 + 8))();
      }
      local_c0 = local_b0;
      local_d8 = local_a8;
      if (local_a8 != (longlong *)0x0) {
        (**(code **)(*local_a8 + 8))();
      }
      local_d0 = local_a0;
      uVar3 = FUN_140e82300();
      local_78 = (wchar_t *)CONCAT44(local_78._4_4_,4);
      FUN_14023423e(local_68,&local_d8);
      local_58 = 4;
      FUN_14023423e(local_48,&local_c8);
      local_90 = &local_38;
      local_98 = &local_78;
      FUN_14010d304(&local_88);
      FUN_1467cf86a(param_2,uVar3,&local_88);
      FUN_14007f2db(local_88,local_80);
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      lVar4 = 0x30;
      do {
        plVar1 = *(longlong **)((longlong)local_70 + lVar4 + -8);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))();
          *(undefined8 *)((longlong)local_70 + lVar4 + -8) = 0;
          *(undefined4 *)((longlong)local_70 + lVar4) = 0;
        }
        lVar4 = lVar4 + -0x20;
      } while (lVar4 != -0x10);
      if (local_d8 != (longlong *)0x0) {
        (**(code **)(*local_d8 + 0x10))();
      }
      if (local_c8 != (longlong *)0x0) {
        (**(code **)(*local_c8 + 0x10))();
      }
      if (local_b8 != (longlong *)0x0) {
        (**(code **)(*local_b8 + 0x10))();
      }
      goto LAB_1494a163b;
    }
  }
  FUN_14023423e(param_2,&local_a8);
LAB_1494a163b:
  if (local_a8 != (longlong *)0x0) {
    (**(code **)(*local_a8 + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a1814 FUN_1494a1814 body=334 status=ok
// SIG undefined FUN_1494a1814(void)

longlong * FUN_1494a1814(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong local_58 [5];
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar3 = FUN_144a7c5f6((longlong *)(param_1 + 0x30));
  if (cVar3 == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x30);
    *param_2 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x38);
  }
  else {
    local_58[2] = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18);
    FUN_1400021e4(local_58 + 2,local_58 + 4);
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[0] = 0;
    local_58[1] = 0;
    FUN_1400b22c2(local_68,L"_Common");
    cVar3 = FUN_1407cdba6(local_58 + 4,local_68,local_58 + 2,local_58);
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (cVar3 == '\0') {
      iVar2 = local_30 + -1;
      if (local_30 == 0) {
        iVar2 = 0;
      }
      FUN_1402980a2(local_58,local_58[4],iVar2);
    }
    FUN_14170c674(local_68,local_58,0);
    FUN_140233b1a(param_2,local_68);
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[2] != 0) {
      FUN_1400020a8();
    }
    if (local_58[4] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a1964 FUN_1494a1964 body=269 status=ok
// SIG undefined FUN_1494a1964(void)

undefined4 * FUN_1494a1964(undefined4 *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = (int)param_2[1];
  _Src = (void *)*param_2;
  param_1[4] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[5] = 0;
    param_3 = 1;
  }
  else {
    FUN_1401b309e(param_1 + 2,iVar1,0);
    memcpy(*(void **)(param_1 + 2),_Src,(longlong)iVar1 << 3);
    if (param_3 < 2) {
      param_3 = 1;
    }
    if (param_1[4] != 1) {
      param_3 = 1;
    }
  }
  param_1[6] = param_3;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  FUN_1446ddc76(&local_38,"Vertex",1);
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 1;
  FUN_1401b309e(param_1 + 0xc,1,0);
  **(undefined8 **)(param_1 + 0xc) = local_38;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a1a72 FUN_1494a1a72 body=299 status=ok
// SIG undefined FUN_1494a1a72(void)

longlong * FUN_1494a1a72(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1494a8470(&local_58);
  lVar2 = local_58;
  if ((longlong)local_50 == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    lVar7 = 0;
    do {
      plVar5 = *(longlong **)(lVar2 + lVar7);
      (**(code **)(*plVar5 + 0x2b0))(plVar5,&local_60);
      lVar1 = local_60;
      if ((((local_60 == 0) || (lVar3 = FUN_144a78d6a(), lVar3 == 0)) ||
          (*(int *)(lVar1 + 0x38) < *(int *)(lVar3 + 0x38))) ||
         (lVar6 = local_60,
         *(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
         lVar3 + 0x30)) {
        lVar6 = 0;
      }
      (**(code **)(*param_1 + 0x360))(param_1,&local_68);
      lVar1 = local_68;
      if (((local_68 == 0) || (lVar3 = FUN_144a78d6a(), lVar3 == 0)) ||
         ((*(int *)(lVar1 + 0x38) < *(int *)(lVar3 + 0x38) ||
          (lVar4 = local_68,
          *(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30)))) {
        lVar4 = 0;
      }
      if (lVar6 == lVar4) goto LAB_1494a1b63;
      lVar7 = lVar7 + 8;
    } while ((longlong)local_50 * 8 != lVar7);
    plVar5 = (longlong *)0x0;
  }
LAB_1494a1b63:
  if (local_58 != 0) {
    FUN_1400020a8(local_58);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar5;
}



// FUNCTION 1494a1ba4 FUN_1494a1ba4 body=39 status=ok
// SIG undefined FUN_1494a1ba4(void)

undefined8 * FUN_1494a1ba4(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1494a1fde(param_1 + 0x120);
  *param_2 = *(undefined8 *)(lVar1 + 0x148);
  return param_2;
}



// FUNCTION 1494a1bcc FUN_1494a1bcc body=158 status=ok
// SIG undefined FUN_1494a1bcc(void)

undefined8 FUN_1494a1bcc(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1494a1fde(param_1 + 0x120);
  if (lVar1 == 0) {
    FUN_1400b22c2(local_30,"<graph missing>");
  }
  else {
    lVar1 = FUN_1494a1fde(param_1 + 0x120);
    local_20 = *(undefined8 *)(lVar1 + 0x18);
    FUN_1400021e4(&local_20,local_30);
  }
  FUN_140233b1a(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a1c6c FUN_1494a1c6c body=567 status=ok
// SIG undefined FUN_1494a1c6c(void)

void FUN_1494a1c6c(longlong param_1)

{
  void *_Src;
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  void *local_90;
  int local_88;
  undefined4 local_84;
  undefined1 local_80 [16];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  void *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar3 = param_1 + 0x120;
  lVar1 = FUN_1494a1fde(lVar3);
  if (lVar1 != 0) {
    FUN_140f4f540();
    uVar2 = FUN_1411c55ba();
    FUN_14949555e(&DAT_14cc1c7d8,local_80,uVar2);
    FUN_140e6511c(&local_70,local_80);
    _Src = local_50;
    local_b0 = local_70;
    uStack_ac = uStack_6c;
    uStack_a8 = uStack_68;
    uStack_a4 = uStack_64;
    local_a0 = local_60;
    uStack_9c = uStack_5c;
    uStack_98 = uStack_58;
    uStack_94 = uStack_54;
    local_90 = (void *)0x0;
    local_88 = local_48;
    if ((longlong)local_48 == 0) {
      local_84 = 0;
    }
    else {
      FUN_1446dd670(&local_90,local_48,0);
      memcpy(local_90,_Src,(longlong)local_48 * 2);
    }
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    FUN_140e6507e(&local_f8);
    local_110 = 0;
    uStack_108 = 0;
    local_118 = (undefined8 *)&local_b0;
    uVar2 = FUN_149495630(param_1,DAT_14cc1d968,1,&local_f8);
    FUN_14485c47a(param_1 + 0x148,uVar2);
    FUN_14121c54c(&local_f8);
    lVar1 = FUN_1494a1fde(lVar3);
    if ((longlong)*(int *)(lVar1 + 0xa0) != 0) {
      lVar4 = (longlong)*(int *)(lVar1 + 0xa0) << 7;
      lVar1 = *(longlong *)(lVar1 + 0x98) + 0x38;
      do {
        FUN_14945f130(&local_f8,lVar1 + -0x30);
        local_110 = 0;
        uStack_108 = 0;
        local_118 = &local_f8;
        FUN_149495630(param_1,*(undefined8 *)(lVar1 + -0x38),1,lVar1);
        lVar1 = lVar1 + 0x80;
        lVar4 = lVar4 + -0x80;
      } while (lVar4 != 0);
    }
    lVar3 = FUN_1494a1fde(lVar3);
    if ((longlong)*(int *)(lVar3 + 0xb0) != 0) {
      lVar1 = (longlong)*(int *)(lVar3 + 0xb0) << 7;
      lVar3 = *(longlong *)(lVar3 + 0xa8) + 0x38;
      do {
        FUN_14945f130(&local_f8,lVar3 + -0x30);
        local_110 = 0;
        uStack_108 = 0;
        local_118 = &local_f8;
        FUN_149495630(param_1,*(undefined8 *)(lVar3 + -0x38),2,lVar3);
        lVar3 = lVar3 + 0x80;
        lVar1 = lVar1 + -0x80;
      } while (lVar1 != 0);
    }
    if (local_50 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a1ea4 FUN_1494a1ea4 body=302 status=ok
// SIG undefined FUN_1494a1ea4(void)

undefined8 * FUN_1494a1ea4(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 != 0) {
    lVar2 = FUN_1494e64f0(param_3);
    if (lVar2 == param_1 + -0x108) {
      lVar2 = FUN_1494a1fde(param_1 + 0x18);
      if (lVar2 != 0) {
        uVar4 = 1;
        if (*(char *)(param_3 + 0x29) != '\x01') {
          if (*(char *)(param_3 + 0x29) != '\x02') goto LAB_1494a1ec9;
          uVar4 = 2;
        }
        uVar3 = FUN_1494a1fde(param_1 + 0x18);
        lVar2 = FUN_1494e7b0c(uVar3,uVar4);
        if (lVar2 != 0) {
          FUN_1494e659a(param_3,local_50);
          uVar3 = FUN_14949ad10(lVar2,local_50);
          *param_2 = uVar3;
          puVar5 = param_2 + 1;
          FUN_149499536(puVar5,param_4);
          if (local_50[0] != 0) {
            FUN_1400020a8();
          }
          iVar1 = *(int *)(param_2 + 6);
          *(uint *)(param_2 + 6) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0x34) < iVar1 + 1U) {
            FUN_1494d7c94(puVar5,iVar1);
          }
          if ((undefined8 *)param_2[5] != (undefined8 *)0x0) {
            puVar5 = (undefined8 *)param_2[5];
          }
          puVar5[iVar1] = param_1;
          goto LAB_1494a1ee0;
        }
      }
    }
  }
LAB_1494a1ec9:
  *param_2 = 0;
  param_2[5] = 0;
  param_2[6] = 0x400000000;
LAB_1494a1ee0:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a1fde FUN_1494a1fde body=193 status=ok
// SIG undefined FUN_1494a1fde(void)

longlong FUN_1494a1fde(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14479d2ce();
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      return 0;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar3);
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_14585e15a();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 1494a20aa FUN_1494a20aa body=426 status=ok
// SIG undefined FUN_1494a20aa(void)

longlong FUN_1494a20aa(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [40];
  longlong *local_80 [2];
  undefined1 local_70 [8];
  int local_68;
  int local_3c;
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar1 = FUN_144729dda(param_1 + 0x30);
  if (cVar1 == '\0') {
    lVar6 = 0;
    goto LAB_1494a20de;
  }
  lVar6 = *(longlong *)(param_1 + -0xf8);
  if (lVar6 == 0) {
LAB_1494a2132:
    lVar6 = 0;
  }
  else {
    lVar2 = FUN_141155906();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        != lVar2 + 0x30)) goto LAB_1494a2132;
  }
  FUN_14479d2ce(param_1 + 0x30);
  FUN_14949fd3e();
  if (local_68 - local_3c == 1) {
    FUN_149498dbe(local_70,local_80);
    lVar6 = *local_80[0];
    if (local_80[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    plVar3 = (longlong *)(**(code **)(*(longlong *)(lVar6 + 0x28) + 0x10))(lVar6 + 0x28);
    if ((plVar3 == (longlong *)0x0) || (lVar2 = (**(code **)(*plVar3 + 8))(plVar3), lVar2 == 0)) {
LAB_1494a21f5:
      if (lVar6 != 0) {
        lVar2 = FUN_1458d08d2();
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
          lVar6 = FUN_1494e7adc(lVar6,param_2);
          goto LAB_1494a222c;
        }
      }
    }
    else {
      lVar4 = FUN_1458f36a4();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) != lVar4 + 0x30)) goto LAB_1494a21f5;
      lVar4 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x120) + 0x30);
      if (lVar4 != 0) {
        lVar5 = 0;
        do {
          lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x120) + 0x28) + lVar5);
          if (*(char *)(lVar6 + 0x48) != '\0') goto LAB_1494a222c;
          lVar5 = lVar5 + 8;
        } while (lVar4 * 8 != lVar5);
      }
    }
    lVar6 = 0;
  }
LAB_1494a222c:
  local_28 = 0;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_1494d6142(local_70);
LAB_1494a20de:
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 1494a2260 FUN_1494a2260 body=266 status=ok
// SIG undefined FUN_1494a2260(void)

void FUN_1494a2260(longlong param_1,undefined4 *param_2)

{
  void **ppvVar1;
  void *pvVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_38 = (void *)0x0;
  local_30 = param_2[6];
  lVar4 = (longlong)local_30;
  pvVar2 = *(void **)(param_2 + 4);
  if (lVar4 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,pvVar2,lVar4 * 2);
  }
  iVar3 = local_30;
  pvVar2 = local_38;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x128) = local_48;
  *(undefined4 *)(param_1 + 300) = uStack_44;
  *(undefined4 *)(param_1 + 0x130) = uStack_40;
  *(undefined4 *)(param_1 + 0x134) = uStack_3c;
  ppvVar1 = (void **)(param_1 + 0x138);
  if (ppvVar1 != &local_38) {
    lVar4 = (longlong)local_30;
    *(int *)(param_1 + 0x140) = local_30;
    if (local_30 == 0 && *(int *)(param_1 + 0x144) == 0) {
      *(undefined4 *)(param_1 + 0x144) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,local_30);
      if (iVar3 != 0) {
        memcpy(*ppvVar1,pvVar2,lVar4 * 2);
      }
    }
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a236c FUN_1494a236c body=317 status=ok
// SIG undefined FUN_1494a236c(void)

void FUN_1494a236c(longlong *param_1,undefined4 *param_2)

{
  void **ppvVar1;
  void *pvVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_38 = (void *)0x0;
  local_30 = param_2[6];
  lVar4 = (longlong)local_30;
  pvVar2 = *(void **)(param_2 + 4);
  if (lVar4 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,pvVar2,lVar4 * 2);
  }
  iVar3 = local_30;
  pvVar2 = local_38;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = local_48;
  *(undefined4 *)((longlong)param_1 + 300) = uStack_44;
  *(undefined4 *)(param_1 + 0x26) = uStack_40;
  *(undefined4 *)((longlong)param_1 + 0x134) = uStack_3c;
  ppvVar1 = (void **)(param_1 + 0x27);
  if (ppvVar1 != &local_38) {
    lVar4 = (longlong)local_30;
    *(int *)(param_1 + 0x28) = local_30;
    if (local_30 == 0 && *(int *)((longlong)param_1 + 0x144) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x144) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,local_30);
      if (iVar3 != 0) {
        memcpy(*ppvVar1,pvVar2,lVar4 * 2);
      }
    }
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_14580b6ee(param_1 + 0x24);
  (**(code **)(*param_1 + 0x2b0))(param_1,local_58);
  FUN_1458d0f32(param_1,local_58);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a24ae FUN_1494a24ae body=95 status=ok
// SIG undefined FUN_1494a24ae(void)

undefined8 FUN_1494a24ae(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (((param_2 != 0) && (lVar1 = FUN_1494e63d6(param_2), lVar1 == 0)) &&
     ((longlong)*(int *)(param_1 + -0xb0) != 0)) {
    lVar1 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + -0xb8) + lVar1) == param_2) {
        return 1;
      }
      lVar1 = lVar1 + 8;
    } while ((longlong)*(int *)(param_1 + -0xb0) * 8 != lVar1);
  }
  return 0xffffffff;
}



// FUNCTION 1494a250e FUN_1494a250e body=158 status=ok
// SIG undefined FUN_1494a250e(void)

void FUN_1494a250e(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = FUN_14479d2ce(param_1 + 0x25);
  if (lVar1 != 0) {
    FUN_14945f130(local_58,lVar1 + 0x30);
    (**(code **)(*param_1 + 0x300))(param_1,&local_60,0,0);
    local_70 = 0;
    uStack_68 = 0;
    local_78 = local_58;
    FUN_149495630(param_1,local_60,2,lVar1 + 0x68);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a25b2 FUN_1494a25b2 body=413 status=ok
// SIG undefined FUN_1494a25b2(void)

void FUN_1494a25b2(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x128) == 0) goto LAB_1494a2712;
  plVar5 = (longlong *)(**(code **)(*(longlong *)(param_2 + 0x28) + 0x18))(param_2 + 0x28);
  if ((plVar5 == (longlong *)0x0) || (lVar6 = (**(code **)(*plVar5 + 8))(plVar5), lVar6 == 0)) {
LAB_1494a260a:
    lVar6 = 0;
  }
  else {
    lVar9 = FUN_1458f36a4();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
        != lVar9 + 0x30)) goto LAB_1494a260a;
  }
  plVar5 = (longlong *)(param_1 + 0x128);
  lVar9 = (longlong)*(int *)(*(longlong *)(lVar6 + 0x128) + 0x30);
  if (lVar9 != 0) {
    lVar2 = *(longlong *)(*(longlong *)(lVar6 + 0x128) + 0x28);
    lVar7 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar7);
      if (((*(longlong *)(lVar3 + 0x38) == *plVar5) &&
          (*(longlong *)(lVar3 + 0x40) == *(longlong *)(param_1 + 0x130))) &&
         (cVar4 = FUN_144a7afa6(lVar3 + 0x50), cVar4 != '\0')) goto LAB_1494a2712;
      lVar7 = lVar7 + 8;
    } while (lVar9 * 8 != lVar7);
  }
  do {
    lVar9 = (longlong)*(int *)(*(longlong *)(lVar6 + 0x128) + 0x30);
    if (lVar9 == 0) break;
    lVar2 = *(longlong *)(*(longlong *)(lVar6 + 0x128) + 0x28);
    lVar7 = 0;
    bVar8 = false;
    do {
      if (*(longlong *)(*(longlong *)(lVar2 + lVar7) + 0x38) == *plVar5) {
        *(int *)(param_1 + 300) = (int)((ulonglong)*plVar5 >> 0x20) + 1;
        bVar8 = true;
      }
      lVar7 = lVar7 + 8;
    } while (lVar9 * 8 != lVar7);
  } while (bVar8);
  FUN_1494a276a(param_3,local_58,param_1 + 0x130,plVar5);
  if (local_50 != 0) {
    LOCK();
    piVar1 = (int *)(local_50 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
    }
  }
LAB_1494a2712:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494a276a FUN_1494a276a body=301 status=ok
// SIG undefined FUN_1494a276a(void)

longlong * FUN_1494a276a(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_98 [40];
  undefined1 local_70 [48];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar7 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14bd1d560;
  plVar1 = plVar7 + 2;
  uVar5 = *param_4;
  FUN_14945f130(local_70,param_3);
  FUN_14946386c(plVar1,local_70,uVar5);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar7 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  iVar4 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar4 + 1U) {
    FUN_14947b622((longlong *)(param_1 + 0x18),iVar4);
  }
  lVar6 = *(longlong *)(param_1 + 0x18);
  *(longlong **)(lVar6 + (longlong)iVar4 * 0x10) = plVar1;
  *(longlong **)(lVar6 + 8 + (longlong)iVar4 * 0x10) = plVar7;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a2898 FUN_1494a2898 body=531 status=ok
// SIG undefined FUN_1494a2898(void)

void FUN_1494a2898(longlong *param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  (**(code **)(*param_1 + 0xf8))(param_1,param_2 == 2);
  lVar4 = param_1[4];
  if (lVar4 == 0) goto LAB_1494a28f9;
  lVar2 = FUN_141155906();
  lVar4 = *(longlong *)(lVar4 + 0x10);
  if ((*(int *)(lVar4 + 0x38) < *(int *)(lVar2 + 0x38)) ||
     (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
      lVar2 + 0x30)) goto LAB_1494a28f9;
  lVar4 = param_1[4];
  if (lVar4 == 0) {
LAB_1494a2951:
    lVar4 = 0;
  }
  else {
    lVar2 = FUN_141155906();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        != lVar2 + 0x30)) goto LAB_1494a2951;
  }
  plVar3 = (longlong *)(**(code **)(*(longlong *)(lVar4 + 0x28) + 0x18))(lVar4 + 0x28);
  if (plVar3 != (longlong *)0x0) {
    lVar4 = (**(code **)(*plVar3 + 8))(plVar3);
    if (lVar4 != 0) {
      lVar2 = FUN_1458f36a4();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        plVar3 = param_1 + 0x24;
        cVar1 = FUN_144729dda(plVar3);
        if (cVar1 == '\0') {
          if (param_1[0x25] != 0) {
            uVar5 = (**(code **)(*(longlong *)(lVar4 + 0x30) + 0x38))(lVar4 + 0x30);
            FUN_14485c47a(plVar3,uVar5);
            cVar1 = FUN_144729dda(plVar3);
            if (cVar1 != '\0') {
              (**(code **)(*param_1 + 0x2c0))(param_1);
            }
            local_68 = 0;
            uStack_60 = 0;
            local_78 = 0;
            uStack_70 = 0;
            local_88 = 0;
            uStack_80 = 0;
            local_98 = 0;
            uStack_90 = 0;
            local_a0 = 0;
            local_58 = 0;
            uStack_50 = 0;
            FUN_140e6511c(&local_98);
            local_68 = 0;
            uStack_60 = 0;
            FUN_1494a2acc(param_1 + 0x25,&local_a0);
            if (local_68 != 0) {
              FUN_1400020a8();
            }
            if (local_78 != 0) {
              FUN_1400020a8();
            }
          }
        }
        else {
          uVar5 = FUN_14479d2ce(plVar3);
          lVar2 = FUN_1494e84f6(uVar5);
          if (lVar2 != lVar4) {
            lVar2 = FUN_14479d2ce(plVar3);
            (**(code **)(*(longlong *)(lVar4 + 0x30) + 0x38))
                      (lVar4 + 0x30,*(undefined8 *)(lVar2 + 0x18));
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_c8);
          }
        }
      }
    }
  }
LAB_1494a28f9:
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a2acc FUN_1494a2acc body=98 status=ok
// SIG undefined FUN_1494a2acc(void)

undefined8 * FUN_1494a2acc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  FUN_141314ea8(param_1 + 2,param_2 + 2);
  if (param_1 != param_2) {
    if (param_1[7] != 0) {
      FUN_1400020a8();
    }
    param_1[7] = param_2[7];
    param_2[7] = 0;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
    param_2[8] = 0;
  }
  return param_1;
}



// FUNCTION 1494a2b2e FUN_1494a2b2e body=380 status=ok
// SIG undefined FUN_1494a2b2e(void)

void FUN_1494a2b2e(longlong param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = FUN_14479d2ce(param_1 + 0x120);
  if (lVar2 != 0) {
    uVar3 = FUN_149466e92(lVar2 + 0x40);
    FUN_1400021e4(uVar3,&local_48);
    local_68 = &DAT_149dfb77a;
    if (local_40 != 0) {
      local_68 = local_48;
    }
    FUN_1400021e4(lVar2 + 0x38,&local_58);
    puVar4 = &DAT_149dfb77a;
    if (local_50 != 0) {
      puVar4 = local_58;
    }
    FUN_140047918(param_2,L"%sCustomProperties VariableDefinition Name=\"%s\" Type=%s",
                  L"                                                                                                                                                                                                                                                               "
                  + (0xff - (longlong)param_3),puVar4);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    cVar1 = FUN_1494e82dc(lVar2 + 0x70);
    if (cVar1 != '\0') {
      FUN_1494e83c4(lVar2 + 0x70,&local_48);
      FUN_1467ce734(&local_48,&local_58,0);
      puVar4 = local_58;
      if (local_50 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      FUN_140047918(param_2,L" DefaultValue=\"%s\"",puVar4);
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_48 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_1468161aa(param_2,&DAT_149e01f72);
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494a2cac FUN_1494a2cac body=438 status=ok
// SIG undefined FUN_1494a2cac(void)

void FUN_1494a2cac(longlong param_1,undefined8 param_2)

{
  void **ppvVar1;
  void *_Src;
  char cVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  void *local_50;
  int local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_30 = param_2;
  cVar2 = FUN_140988638(&local_30,L"VariableDefinition",1);
  if (cVar2 != '\0') {
    local_38 = 0;
    cVar2 = FUN_140e134ac(local_30,L"Name=");
    if (cVar2 != '\0') {
      local_40 = 0;
      cVar2 = FUN_140e134ac(local_30,L"Type=");
      if (cVar2 != '\0') {
        FUN_140f4f540();
        FUN_140f4f5a6(&DAT_14cc1c7d8,local_80,local_40);
        FUN_140e6511c(&local_70,local_80);
        cVar2 = FUN_14945fc10(&local_70);
        _Src = local_50;
        if (cVar2 != '\0') {
          *(undefined8 *)(param_1 + 0x128) = local_38;
          *(undefined8 *)(param_1 + 0x130) = local_70;
          *(undefined8 *)(param_1 + 0x138) = local_68;
          *(undefined4 *)(param_1 + 0x140) = local_60;
          *(undefined4 *)(param_1 + 0x144) = uStack_5c;
          *(undefined4 *)(param_1 + 0x148) = uStack_58;
          *(undefined4 *)(param_1 + 0x14c) = uStack_54;
          ppvVar1 = (void **)(param_1 + 0x150);
          if (ppvVar1 != &local_50) {
            *(int *)(param_1 + 0x158) = local_48;
            if (local_48 == 0 && *(int *)(param_1 + 0x15c) == 0) {
              *(undefined4 *)(param_1 + 0x15c) = 0;
            }
            else {
              FUN_1446dd670(ppvVar1,local_48);
              if (local_48 != 0) {
                memcpy(*ppvVar1,_Src,(longlong)local_48 * 2);
              }
            }
          }
          local_88 = 0;
          cVar2 = FUN_14063337c(local_30,L"DefaultValue=",param_1 + 0x160,1);
          if (cVar2 != '\0') {
            FUN_1467ad138(param_1 + 0x160,0);
          }
        }
        if (local_50 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a2e64 FUN_1494a2e64 body=226 status=ok
// SIG undefined FUN_1494a2e64(void)

undefined8 * FUN_1494a2e64(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_14479d2ce(param_1 + 0x120);
  if (lVar1 == 0) {
    local_38 = L"NoDescriptor";
    local_30 = 0xc;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"OptimusGetVariable";
    local_30 = 0x12;
    FUN_1446e940c(local_40,&local_38);
    FUN_140208bae(&local_38,local_40,local_3c,L"No variable descriptor set on this node");
    FUN_14023423e(param_2,&local_38);
    if (local_38 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_38 + 0x10))();
    }
  }
  else {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a2f48 FUN_1494a2f48 body=49 status=ok
// SIG undefined FUN_1494a2f48(void)

undefined1 * FUN_1494a2f48(undefined8 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_14479d2ce();
  if (lVar2 == 0) {
    uVar1 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 0x38);
    uVar1 = 2;
  }
  *param_2 = uVar1;
  *(undefined8 *)(param_2 + 4) = uVar3;
  return param_2;
}



// FUNCTION 1494a2f7a FUN_1494a2f7a body=115 status=ok
// SIG undefined FUN_1494a2f7a(void)

undefined8 FUN_1494a2f7a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar1 != 0) {
    FUN_14945f130(param_2,lVar1 + 0x40);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
  }
  local_28 = 0;
  uStack_20 = 0;
  FUN_140e6511c(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a2ff0 FUN_1494a2ff0 body=66 status=ok
// SIG undefined FUN_1494a2ff0(void)

undefined8 * FUN_1494a2ff0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    FUN_141215e22(param_2);
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    FUN_1401fa0f0(param_2,*(undefined8 *)(lVar1 + 0x70),*(undefined8 *)(lVar1 + 0x78));
  }
  return param_2;
}



// FUNCTION 1494a3032 FUN_1494a3032 body=206 status=ok
// SIG undefined FUN_1494a3032(void)

void FUN_1494a3032(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_70 [48];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar1 = FUN_14479d2ce(param_1 + 0x120);
  if (lVar1 != 0) {
    FUN_14945f130(local_70,lVar1 + 0x40);
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    FUN_140e6507e(&local_b8);
    local_d0 = 0;
    uStack_c8 = 0;
    local_d8 = local_70;
    FUN_149495630(param_1,*(undefined8 *)(lVar1 + 0x38),2,&local_b8);
    FUN_14121c54c(&local_b8);
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a3106 FUN_1494a3106 body=275 status=ok
// SIG undefined FUN_1494a3106(void)

undefined8 FUN_1494a3106(longlong param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x128) == 2) {
    local_30 = L"TerminalType_Return";
    local_28 = 0x13;
    FUN_1446e940c(local_34,&local_30);
    local_30 = L"OptimusNodeGraphTerminal";
    local_28 = 0x18;
    FUN_1446e940c(local_38,&local_30);
    pwVar1 = L"Return";
  }
  else {
    if (*(int *)(param_1 + 0x128) != 1) {
      FUN_144a5dc74(param_2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    local_30 = L"TerminalType_Entry";
    local_28 = 0x12;
    FUN_1446e940c(local_34,&local_30);
    local_30 = L"OptimusNodeGraphTerminal";
    local_28 = 0x18;
    FUN_1446e940c(local_38,&local_30);
    pwVar1 = L"Entry";
  }
  FUN_140208bae(param_2,local_38,local_34,pwVar1);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1494a321a FUN_1494a321a body=581 status=ok
// SIG undefined FUN_1494a321a(void)

void FUN_1494a321a(longlong param_1)

{
  void *_Src;
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  void *local_90;
  int local_88;
  undefined4 local_84;
  undefined1 local_80 [16];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  void *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar1 = FUN_14479d2ce(param_1 + 0x134);
  if (lVar1 != 0) {
    if (*(int *)(param_1 + 0x128) == 2) {
      if ((longlong)*(int *)(lVar1 + 0xb0) != 0) {
        lVar3 = (longlong)*(int *)(lVar1 + 0xb0) << 7;
        lVar1 = *(longlong *)(lVar1 + 0xa8) + 0x38;
        do {
          FUN_14945f130(&local_f8,lVar1 + -0x30);
          local_110 = 0;
          uStack_108 = 0;
          local_118 = &local_f8;
          FUN_149495630(param_1,*(undefined8 *)(lVar1 + -0x38),1,lVar1);
          lVar1 = lVar1 + 0x80;
          lVar3 = lVar3 + -0x80;
        } while (lVar3 != 0);
      }
    }
    else if (*(int *)(param_1 + 0x128) == 1) {
      FUN_140f4f540();
      uVar2 = FUN_1411c55ba();
      FUN_14949555e(&DAT_14cc1c7d8,local_80,uVar2);
      FUN_140e6511c(&local_70,local_80);
      _Src = local_50;
      local_b0 = local_70;
      uStack_ac = uStack_6c;
      uStack_a8 = uStack_68;
      uStack_a4 = uStack_64;
      local_a0 = local_60;
      uStack_9c = uStack_5c;
      uStack_98 = uStack_58;
      uStack_94 = uStack_54;
      local_90 = (void *)0x0;
      local_88 = local_48;
      if ((longlong)local_48 == 0) {
        local_84 = 0;
      }
      else {
        FUN_1446dd670(&local_90,local_48,0);
        memcpy(local_90,_Src,(longlong)local_48 * 2);
      }
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      FUN_140e6507e(&local_f8);
      local_110 = 0;
      uStack_108 = 0;
      local_118 = (undefined8 *)&local_b0;
      uVar2 = FUN_149495630(param_1,DAT_14cc1d968,2,&local_f8);
      FUN_14485c47a(param_1 + 300,uVar2);
      FUN_14121c54c(&local_f8);
      if ((longlong)*(int *)(lVar1 + 0xa0) != 0) {
        lVar3 = (longlong)*(int *)(lVar1 + 0xa0) << 7;
        lVar1 = *(longlong *)(lVar1 + 0x98) + 0x38;
        do {
          FUN_14945f130(&local_f8,lVar1 + -0x30);
          local_110 = 0;
          uStack_108 = 0;
          local_118 = &local_f8;
          FUN_149495630(param_1,*(undefined8 *)(lVar1 + -0x38),2,lVar1);
          lVar1 = lVar1 + 0x80;
          lVar3 = lVar3 + -0x80;
        } while (lVar3 != 0);
      }
      if (local_50 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494a3460 FUN_1494a3460 body=286 status=ok
// SIG undefined FUN_1494a3460(void)

undefined8 * FUN_1494a3460(longlong param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != 0) {
    lVar2 = FUN_1494e64f0(param_3);
    if ((lVar2 == param_1 + -0x108) && (*(int *)(param_4 + 0x28) != 0)) {
      lVar2 = *(longlong *)(param_4 + 0x20);
      if (*(longlong *)(param_4 + 0x20) == 0) {
        lVar2 = param_4;
      }
      plVar1 = *(longlong **)(lVar2 + (longlong)(*(int *)(param_4 + 0x28) + -1) * 8);
      if (plVar1 != (longlong *)0x0) {
        lVar2 = (**(code **)(*plVar1 + 8))();
        if (lVar2 != 0) {
          lVar3 = FUN_140f7d9ac();
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
            FUN_1494e659a(param_3,local_40);
            uVar4 = FUN_14949ad10(lVar2,local_40);
            *param_2 = uVar4;
            FUN_149499536(param_2 + 1,param_4);
            if (local_40[0] != 0) {
              FUN_1400020a8();
            }
            *(int *)(param_2 + 6) = *(int *)(param_2 + 6) + -1;
            FUN_1494d7d52(param_2 + 1);
            goto LAB_1494a3499;
          }
        }
      }
    }
  }
  *param_2 = 0;
  param_2[5] = 0;
  param_2[6] = 0x400000000;
LAB_1494a3499:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a358a FUN_1494a358a body=200 status=ok
// SIG undefined FUN_1494a358a(void)

undefined8 FUN_1494a358a(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined1 local_58 [32];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar1 = FUN_144729dda(param_1 + 300);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_14479d2ce(param_1 + 300);
    (**(code **)(*(longlong *)(param_1 + 0x108) + 0x10))(param_1 + 0x108,&local_60,uVar2,param_2);
    if (local_60 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_1494e64f0();
      uVar3 = FUN_1459f7296();
      plVar4 = (longlong *)FUN_144718840(uVar2,uVar3);
      uVar2 = (**(code **)(*plVar4 + 0x18))(plVar4,local_58);
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a3654 FUN_1494a3654 body=308 status=ok
// SIG undefined FUN_1494a3654(void)

void FUN_1494a3654(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 unaff_RBX;
  undefined7 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined8 local_80;
  longlong local_78;
  int local_70;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1494a3db8(param_1,&local_78);
  uVar3 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if ((DAT_14cc1d970 == param_2) && (*(int *)(param_1 + 0x128) == 1)) {
    uVar2 = (undefined4)CONCAT71(uVar3,2);
    lVar5 = 0x98;
  }
  else {
    if ((DAT_14cc1d978 != param_2) || (*(int *)(param_1 + 0x128) != 2)) goto LAB_1494a3755;
    uVar2 = (undefined4)CONCAT71(uVar3,1);
    lVar5 = 0xa8;
  }
  lVar1 = FUN_14479d2ce(param_1 + 0x134);
  lVar6 = local_78;
  plVar4 = (longlong *)(lVar1 + lVar5);
  if (plVar4 != (longlong *)0x0) {
    if ((longlong)local_70 != 0) {
      lVar5 = 0;
      do {
        FUN_1445288d0(param_1,*(undefined8 *)(lVar6 + lVar5));
        lVar5 = lVar5 + 8;
      } while ((longlong)local_70 * 8 != lVar5);
    }
    if ((longlong)(int)plVar4[1] != 0) {
      lVar6 = (longlong)(int)plVar4[1] << 7;
      lVar5 = *plVar4 + 0x38;
      do {
        FUN_14945f130(local_68,lVar5 + -0x30);
        local_80 = 0;
        local_88 = local_68;
        FUN_144528bee(param_1,*(undefined8 *)(lVar5 + -0x38),uVar2,lVar5);
        lVar5 = lVar5 + 0x80;
        lVar6 = lVar6 + -0x80;
      } while (lVar6 != 0);
    }
  }
LAB_1494a3755:
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494a378a FUN_1494a378a body=509 status=ok
// SIG undefined FUN_1494a378a(void)

void FUN_1494a378a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  undefined1 local_a8 [48];
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1494a3db8(param_1,local_58);
  if (((DAT_14cc1d970 == param_2) && (lVar10 = 0x98, *(int *)(param_1 + 0x128) == 1)) ||
     ((DAT_14cc1d978 == param_2 && (lVar10 = 0xa8, *(int *)(param_1 + 0x128) == 2)))) {
    lVar8 = FUN_14479d2ce(param_1 + 0x134);
    plVar11 = (longlong *)(lVar8 + lVar10);
    if ((plVar11 != (longlong *)0x0) && (0 < (int)plVar11[1])) {
      lVar10 = 0x38;
      lVar8 = 0;
      do {
        lVar3 = *(longlong *)(local_58[0] + lVar8 * 8);
        lVar4 = *plVar11;
        if (*(longlong *)(lVar3 + 0x18) != *(longlong *)(lVar4 + -0x38 + lVar10)) {
          FUN_149494b6e(param_1,lVar3);
        }
        local_b0 = lVar10 + lVar4 + -0x30;
        FUN_1494947ba(local_b0,&local_68);
        FUN_1494947ba(lVar3 + 0x70,&local_78);
        lVar6 = local_68;
        plVar5 = local_70;
        lVar9 = local_78;
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_70 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            local_b8 = local_78;
            (**(code **)*local_70)(local_70);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            lVar9 = local_b8;
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
              lVar9 = local_b8;
            }
          }
        }
        plVar5 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_60 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            local_b8 = lVar9;
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            lVar9 = local_b8;
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
              lVar9 = local_b8;
            }
          }
        }
        if (lVar9 != lVar6) {
          FUN_14945f130(local_a8,local_b0);
          FUN_149494908(param_1,lVar3,local_a8);
        }
        cVar7 = FUN_1494a5a62(lVar3 + 0x30,lVar4 + lVar10);
        if (cVar7 == '\0') {
          FUN_1494a3eee(param_1,lVar3,lVar4 + lVar10);
        }
        lVar8 = lVar8 + 1;
        lVar10 = lVar10 + 0x80;
      } while (lVar8 < (int)plVar11[1]);
    }
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494a3988 FUN_1494a3988 body=207 status=ok
// SIG undefined FUN_1494a3988(void)

void FUN_1494a3988(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined8 unaff_RBX;
  undefined7 uVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined8 local_70;
  undefined1 local_60 [48];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if ((DAT_14cc1d970 == param_2) && (*(int *)(param_1 + 0x128) == 1)) {
    uVar3 = (undefined4)CONCAT71(uVar4,2);
    lVar5 = 0x98;
  }
  else {
    if ((DAT_14cc1d978 != param_2) || (*(int *)(param_1 + 0x128) != 2)) goto LAB_1494a3a35;
    uVar3 = (undefined4)CONCAT71(uVar4,1);
    lVar5 = 0xa8;
  }
  lVar1 = FUN_14479d2ce(param_1 + 0x134);
  plVar2 = (longlong *)(lVar1 + lVar5);
  if (plVar2 != (longlong *)0x0) {
    lVar5 = *plVar2;
    lVar1 = (longlong)((int)plVar2[1] + -1) * 0x80;
    FUN_14945f130(local_60,lVar5 + lVar1 + 8);
    local_70 = 0;
    local_78 = local_60;
    FUN_144528bee(param_1,*(undefined8 *)(lVar5 + lVar1),uVar3);
  }
LAB_1494a3a35:
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a3a58 FUN_1494a3a58 body=264 status=ok
// SIG undefined FUN_1494a3a58(void)

void FUN_1494a3a58(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [40];
  longlong *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1494a3db8(param_1,&local_40);
  if (((DAT_14cc1d970 == param_2) && (lVar3 = 0x98, *(int *)(param_1 + 0x128) == 1)) ||
     ((DAT_14cc1d978 == param_2 && (lVar3 = 0xa8, *(int *)(param_1 + 0x128) == 2)))) {
    lVar2 = FUN_14479d2ce(param_1 + 0x134);
    plVar5 = (longlong *)(lVar2 + lVar3);
    if ((plVar5 != (longlong *)0x0) && ((longlong)local_38 != 0)) {
      plVar1 = local_40 + local_38;
      plVar4 = local_40;
      do {
        if ((longlong)(int)plVar5[1] != 0) {
          uVar6 = 0;
          do {
            if (*(longlong *)(*plVar5 + uVar6) == *(longlong *)(*plVar4 + 0x18)) {
              if ((~uVar6 & 0x7fffffff80) != 0) goto LAB_1494a3aff;
              break;
            }
            uVar6 = uVar6 + 0x80;
          } while ((longlong)(int)plVar5[1] * 0x80 != uVar6);
        }
        FUN_1445288d0(param_1);
LAB_1494a3aff:
        plVar4 = plVar4 + 1;
      } while (plVar4 != plVar1);
    }
  }
  if (local_40 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494a3b62 FUN_1494a3b62 body=597 status=ok
// SIG undefined FUN_1494a3b62(void)

void FUN_1494a3b62(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1494a3db8(param_1,&local_70);
  if (((DAT_14cc1d970 == param_2) && (lVar5 = 0x98, *(int *)(param_1 + 0x128) == 1)) ||
     ((DAT_14cc1d978 == param_2 && (lVar5 = 0xa8, *(int *)(param_1 + 0x128) == 2)))) {
    lVar3 = FUN_14479d2ce(param_1 + 0x134);
    lVar9 = local_70;
    plVar6 = (longlong *)(lVar3 + lVar5);
    if (plVar6 != (longlong *)0x0) {
      local_88 = 0;
      uStack_80 = 0;
      lVar5 = (longlong)local_68;
      if (lVar5 != 0) {
        lVar3 = 0;
        do {
          uVar4 = uStack_80;
          uVar7 = *(undefined8 *)(*(longlong *)(lVar9 + lVar3) + 0x18);
          lVar10 = (longlong)(int)uStack_80;
          uVar2 = (int)uStack_80 + 1;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar2);
          if (uStack_80._4_4_ < uVar2) {
            FUN_1446f84a2(&local_88,uVar4 & 0xffffffff);
          }
          *(undefined8 *)(local_88 + lVar10 * 8) = uVar7;
          lVar3 = lVar3 + 8;
        } while (lVar5 * 8 != lVar3);
      }
      local_98 = 0;
      uStack_90 = 0;
      lVar5 = plVar6[1];
      if ((longlong)(int)lVar5 != 0) {
        lVar9 = *plVar6;
        lVar3 = 0;
        do {
          uVar4 = uStack_90;
          uVar7 = *(undefined8 *)(lVar9 + lVar3);
          lVar10 = (longlong)(int)uStack_90;
          uVar2 = (int)uStack_90 + 1;
          uStack_90 = CONCAT44(uStack_90._4_4_,uVar2);
          if (uStack_90._4_4_ < uVar2) {
            FUN_1446f84a2(&local_98,uVar4 & 0xffffffff);
          }
          *(undefined8 *)(local_98 + lVar10 * 8) = uVar7;
          lVar3 = lVar3 + 0x80;
        } while ((longlong)(int)lVar5 * 0x80 != lVar3);
      }
      local_a0 = 0;
      local_a8 = 0;
      cVar1 = FUN_1494a3e27(&local_88,&local_98);
      if (cVar1 != '\0') {
        if ((longlong)local_68 == 0) {
          uVar7 = 0;
          lVar5 = -1;
        }
        else {
          uVar4 = (longlong)local_68 * 8;
          uVar8 = 0;
          lVar5 = 0;
          do {
            if (*(longlong *)(*(longlong *)(local_70 + uVar8) + 0x18) == local_a0) {
              lVar5 = lVar5 >> 0x20;
              goto LAB_1494a3d72;
            }
            lVar5 = lVar5 + 0x100000000;
            uVar8 = uVar8 + 8;
          } while (uVar4 != uVar8);
          lVar5 = -1;
LAB_1494a3d72:
          if (local_a8 == 0) {
LAB_1494a3da9:
            uVar7 = 0;
          }
          else {
            uVar7 = 0;
            uVar8 = 0;
            lVar9 = 0;
            do {
              if (*(longlong *)(*(longlong *)(local_70 + uVar8) + 0x18) == local_a8) {
                if ((int)(~uVar8 >> 3) == 0) goto LAB_1494a3da9;
                uVar7 = *(undefined8 *)(local_70 + (lVar9 >> 0x20) * 8);
                break;
              }
              lVar9 = lVar9 + 0x100000000;
              uVar8 = uVar8 + 8;
            } while (uVar4 != uVar8);
          }
        }
        FUN_14452ac50(param_1,*(undefined8 *)(local_70 + lVar5 * 8),uVar7);
      }
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494a3db8 FUN_1494a3db8 body=111 status=ok
// SIG undefined FUN_1494a3db8(void)

undefined8 * FUN_1494a3db8(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x128) == 2) {
    FUN_149494bcc(param_1,param_2,1);
  }
  else if (*(int *)(param_1 + 0x128) == 1) {
    FUN_149494bcc(param_1,param_2,2);
    iVar1 = 0;
    if (*(int *)(param_2 + 1) + -1 != 0) {
      memmove((void *)*param_2,(void *)((longlong)*param_2 + 8),
              (longlong)(*(int *)(param_2 + 1) + -1) << 3);
      iVar1 = *(int *)(param_2 + 1) + -1;
    }
    *(int *)(param_2 + 1) = iVar1;
    FUN_1494d801c(param_2);
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
  }
  return param_2;
}



// FUNCTION 1494a3e27 FUN_1494a3e27 body=198 status=ok
// SIG undefined FUN_1494a3e27(void)

undefined8 FUN_1494a3e27(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  
  lVar3 = (longlong)(int)param_2[1];
  if (lVar3 < 1) {
LAB_1494a3e68:
    *param_3 = 0;
    uVar4 = 0;
  }
  else {
    lVar8 = 0;
    iVar7 = -1;
    do {
      lVar1 = *(longlong *)(*param_1 + lVar8 * 8);
      lVar2 = *(longlong *)(*param_2 + lVar8 * 8);
      if (iVar7 != -1) {
        lVar3 = *(longlong *)(*param_2 + (longlong)iVar7 * 8);
        lVar8 = *(longlong *)(*param_1 + (longlong)iVar7 * 8);
        lVar6 = lVar8;
        if ((lVar3 != lVar1) && (lVar6 = 0, lVar2 == lVar8)) {
          lVar6 = lVar3;
        }
        goto LAB_1494a3e9c;
      }
      iVar7 = (int)lVar8;
      if (lVar2 == lVar1) {
        iVar7 = -1;
      }
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    if (lVar2 == lVar1) goto LAB_1494a3e68;
    lVar6 = 0;
LAB_1494a3e9c:
    *param_3 = lVar6;
    iVar7 = (int)param_2[1];
    uVar4 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
    if ((longlong)iVar7 != 0) {
      uVar9 = 1;
      lVar3 = 0;
      do {
        if (*(longlong *)(*param_2 + lVar3) == lVar6) goto LAB_1494a3ed2;
        uVar9 = uVar9 + 1;
        lVar3 = lVar3 + 8;
      } while ((longlong)iVar7 * 8 - lVar3 != 0);
      uVar9 = 0;
LAB_1494a3ed2:
      if ((int)uVar9 < iVar7 && -1 < (int)uVar9) {
        uVar5 = *(undefined8 *)(*param_2 + (ulonglong)uVar9 * 8);
        goto LAB_1494a3e73;
      }
    }
  }
  uVar5 = 0;
LAB_1494a3e73:
  *param_4 = uVar5;
  return uVar4;
}



// FUNCTION 1494a3eee FUN_1494a3eee body=646 status=ok
// SIG undefined FUN_1494a3eee(void)

void FUN_1494a3eee(undefined8 param_1,longlong param_2,int *param_3)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_b0 [8];
  longlong *local_a8;
  longlong local_a0;
  longlong local_98;
  int local_90;
  longlong local_88;
  longlong local_80;
  longlong *local_78;
  undefined8 *puStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_80 = param_2;
  if ((param_2 != 0) && (cVar3 = FUN_1494a5a62(param_2 + 0x30,param_3), cVar3 == '\0')) {
    plVar4 = (longlong *)FUN_14001cc68(0x28,0x10);
    local_78 = (longlong *)0x0;
    puStack_70 = (undefined8 *)0x0;
    FUN_14945e0fa(plVar4);
    *plVar4 = (longlong)&PTR_FUN_14bcfe1b0;
    plVar4[3] = 0;
    plVar4[4] = 0;
    local_d8 = plVar4;
    FUN_1494bec38(plVar4);
    if ((*(char *)(param_2 + 0x29) == '\x01') || (param_3[4] != 0 || *param_3 != 0)) {
      FUN_1494e6c6c(param_2,&local_78,1);
      if ((longlong)(int)puStack_70 != 0) {
        plVar4 = local_78 + (int)puStack_70;
        plVar9 = local_78;
        do {
          local_88 = *plVar9;
          FUN_1494e7262(local_88,&local_98);
          lVar2 = local_98;
          lVar7 = (longlong)local_90;
          if (lVar7 != 0) {
            lVar8 = 0;
            do {
              local_a0 = *(longlong *)(lVar2 + lVar8);
              if (*(char *)(local_88 + 0x29) == '\x01') {
                cVar3 = FUN_1494a9bb6(local_a0 + 0x30,param_3,0);
                if (cVar3 == '\0') {
                  FUN_1494acaf2(local_d8,local_b0,&local_a0,&local_88);
                  plVar6 = local_a8;
LAB_1494a4063:
                  if (plVar6 != (longlong *)0x0) {
                    LOCK();
                    piVar1 = (int *)((longlong)plVar6 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar6 + 0x10))();
                    }
                  }
                }
              }
              else {
                cVar3 = FUN_1494a9bb6(param_3,local_a0 + 0x30,0);
                if (cVar3 == '\0') {
                  FUN_1494acaf2(local_d8,local_c0,&local_88,&local_a0);
                  plVar6 = local_b8;
                  goto LAB_1494a4063;
                }
              }
              lVar8 = lVar8 + 8;
            } while (lVar7 * 8 != lVar8);
          }
          if (local_98 != 0) {
            FUN_1400020a8(local_98);
          }
          plVar9 = plVar9 + 1;
        } while (plVar9 != plVar4);
      }
      if (local_78 != (longlong *)0x0) {
        FUN_1400020a8(local_78);
      }
    }
    FUN_1494ad3ae(local_d8,local_d0,&local_80,param_3);
    if (local_c8 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_c8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_c8 + 0x10))();
      }
    }
    uVar5 = FUN_1494bd5e0(param_1);
    plVar4 = local_d8;
    local_78 = local_d8;
    puStack_70 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    puStack_70[1] = &DAT_100000001;
    *puStack_70 = &PTR_LAB_14bcfe3d0;
    puStack_70[2] = plVar4;
    FUN_1494a7e7c(uVar5,&local_78);
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494a417a FUN_1494a417a body=274 status=ok
// SIG undefined FUN_1494a417a(void)

undefined8 FUN_1494a417a(longlong param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x130) == 2) {
    local_38 = L"LoopTerminalType_Return";
    local_30 = 0x17;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"OptimusNodeLoopTerminal";
    local_30 = 0x17;
    FUN_1446e940c(local_40,&local_38);
    pwVar1 = L"Loop Return";
  }
  else {
    if (*(int *)(param_1 + 0x130) != 1) {
      FUN_144a5dc74(param_2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
    }
    local_38 = L"LoopTerminalType_Entry";
    local_30 = 0x16;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"OptimusNodeLoopTerminal";
    local_30 = 0x17;
    FUN_1446e940c(local_40,&local_38);
    pwVar1 = L"Loop Entry";
  }
  FUN_140208bae(param_2,local_40,local_3c,pwVar1);
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1494a428e FUN_1494a428e body=618 status=ok
// SIG undefined FUN_1494a428e(void)

void FUN_1494a428e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_128;
  undefined8 local_120;
  longlong *local_118;
  undefined1 local_110 [48];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_90;
  longlong *local_88;
  undefined1 local_80 [48];
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (*(int *)(param_1 + 0x130) == 1) {
    FUN_140f4f540();
    puVar4 = (undefined8 *)FUN_144a8cc30();
    FUN_140f4f5a6(&DAT_14cc1c7d8,&local_50,*puVar4);
    local_90 = local_50;
    local_88 = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
    }
    FUN_140e6511c(local_80,&local_90);
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    FUN_140e6507e(&local_d8);
    FUN_1446f470e(&local_e0,L"Index",1);
    local_140 = 0;
    uStack_138 = 0;
    local_148 = local_80;
    lVar5 = FUN_149495630(param_1,local_e0,2,&local_d8);
    if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar5);
    }
    *(longlong *)(param_1 + 0x150) = lVar5;
    FUN_14121c54c(&local_d8);
    local_120 = local_50;
    local_118 = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
    }
    FUN_140e6511c(local_110,&local_120);
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    FUN_140e6507e(&local_d8);
    FUN_1446f470e(&local_128,L"Count",1);
    local_140 = 0;
    uStack_138 = 0;
    local_148 = local_110;
    lVar5 = FUN_149495630(param_1,local_128,2,&local_d8);
    if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar5);
    }
    *(longlong *)(param_1 + 0x158) = lVar5;
    FUN_14121c54c(&local_d8);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
        }
      }
    }
  }
  iVar3 = *(int *)(param_1 + 0x16c);
  FUN_145d02e0d(*(undefined8 *)(param_1 + 0x160),*(undefined4 *)(param_1 + 0x168));
  *(undefined4 *)(param_1 + 0x168) = 0;
  if ((iVar3 < 0) && (*(int *)(param_1 + 0x16c) != 0)) {
    FUN_1494d80b8(param_1 + 0x160);
  }
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a44fa FUN_1494a44fa body=93 status=ok
// SIG undefined FUN_1494a44fa(void)

ulonglong FUN_1494a44fa(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((*(char *)(param_2 + 0x29) == '\x01') && (*(int *)(param_1 + 0x130) == 1)) {
    lVar1 = FUN_1494e64f0(param_3);
    lVar2 = FUN_1494a4558(param_1);
    if (lVar1 == lVar2) {
      if (param_4 != 0) {
        FUN_14020fad6(param_4,L"Cannot connect output of return terminal to input of entry terminal"
                     );
      }
      uVar3 = 0;
    }
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1494a4558 FUN_1494a4558 body=117 status=ok
// SIG undefined FUN_1494a4558(void)

longlong FUN_1494a4558(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar1 = FUN_141155906();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_1494a458c;
  }
  lVar2 = 0;
LAB_1494a458c:
  lVar2 = FUN_1494a5350(lVar2,param_1);
  if (lVar2 != 0) {
    lVar1 = FUN_145ba6f7a();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) {
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 1494a45ce FUN_1494a45ce body=332 status=ok
// SIG undefined FUN_1494a45ce(void)

undefined8 *
FUN_1494a45ce(undefined8 param_1,undefined8 *param_2,longlong param_3,char param_4,longlong param_5)

{
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  ulonglong *local_90;
  undefined8 local_88;
  char local_80;
  uint local_7f;
  undefined2 uStack_7b;
  undefined1 uStack_79;
  undefined4 uStack_78;
  longlong *local_70;
  undefined4 local_68;
  undefined1 local_60;
  undefined8 local_58;
  char local_50;
  uint local_4f;
  undefined2 local_4b;
  undefined1 local_49;
  undefined4 local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(int *)(param_3 + 0x30) == 0) && (*(int *)(param_3 + 0x40) == 0)) {
    if (param_5 != 0) {
      FUN_14020fad6(param_5,L"Can\'t add parameter pin ");
    }
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
  }
  local_88 = 0;
  local_7f = (uint)(uint3)local_7f;
  uStack_7b = 0;
  uStack_79 = 0;
  uStack_78 = 0;
  FUN_144a5dc74(&local_70);
  local_60 = *(char *)(param_3 + 0x29) != param_4;
  local_48 = uStack_78;
  local_58 = local_88;
  local_4f = local_7f;
  local_4b = uStack_7b;
  local_49 = uStack_79;
  local_40 = local_70;
  local_80 = param_4;
  local_50 = param_4;
  if (local_70 != (longlong *)0x0) {
    (**(code **)(*local_70 + 8))();
  }
  local_98 = &local_58;
  local_38 = local_68;
  local_90 = &local_28;
  local_30 = local_60;
  FUN_14949d014(param_2);
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x10))();
  }
  if (local_70 != (longlong *)0x0) {
    (**(code **)(*local_70 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1494a471c FUN_1494a471c body=826 status=ok
// SIG undefined FUN_1494a471c(void)

longlong *
FUN_1494a471c(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
             undefined8 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  void *_Src;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_138 [40];
  longlong local_110;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  undefined4 local_90 [2];
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar6 = param_1 + -0x108;
  local_c8 = 0;
  local_f8 = (void *)0x0;
  uStack_f0 = 0;
  local_110 = param_3;
  FUN_140e6511c();
  FUN_140e6507e(local_90);
  local_50 = 0;
  local_c8 = param_5;
  FUN_1494947ba(param_4 + 0x70,local_108);
  FUN_140e6511c(&local_f8,local_108);
  local_c0 = (undefined4)local_f8;
  uStack_bc = local_f8._4_4_;
  uStack_b8 = (uint)uStack_f0;
  uStack_b4 = uStack_f0._4_4_;
  local_b0 = local_e8;
  uStack_ac = uStack_e4;
  uStack_a8 = uStack_e0;
  uStack_a4 = uStack_dc;
  if (CONCAT44(uStack_9c,local_a0) != 0) {
    FUN_1400020a8();
  }
  local_a0 = local_d8;
  uStack_9c = uStack_d4;
  iStack_98 = iStack_d0;
  uStack_94 = uStack_cc;
  local_90[0] = *(undefined4 *)(param_4 + 0x30);
  FUN_1406fa324(local_88,param_4 + 0x38);
  local_78 = *(undefined4 *)(param_4 + 0x48);
  FUN_144a787a6(local_70,param_4 + 0x50);
  FUN_1406fa324(local_60,param_4 + 0x60);
  FUN_1494a4a58(lVar6,&local_c8);
  if (*(int *)(param_1 + 0x28) == 1) {
    lVar5 = param_1 + 0x30;
  }
  else {
    lVar4 = FUN_1494a4558(lVar6);
    lVar5 = lVar4 + 0x138;
    if (lVar4 == 0) {
      lVar5 = 0;
    }
  }
  iVar2 = *(int *)(lVar5 + 0x10);
  *(uint *)(lVar5 + 0x10) = iVar2 + 1U;
  if (*(uint *)(lVar5 + 0x14) < iVar2 + 1U) {
    FUN_1494d6e7c((longlong *)(lVar5 + 8),iVar2);
  }
  lVar4 = *(longlong *)(lVar5 + 8);
  lVar7 = (longlong)iVar2 * 0x80;
  lVar5 = lVar4 + lVar7;
  *(undefined8 *)(lVar4 + lVar7) = local_c8;
  *(ulonglong *)(lVar4 + 8 + lVar7) = CONCAT44(uStack_bc,local_c0);
  *(ulonglong *)(lVar4 + 0x10 + lVar7) = CONCAT44(uStack_b4,uStack_b8);
  puVar1 = (undefined4 *)(lVar4 + 0x18 + lVar7);
  *puVar1 = local_b0;
  puVar1[1] = uStack_ac;
  puVar1[2] = uStack_a8;
  puVar1[3] = uStack_a4;
  *(undefined8 *)(lVar4 + 0x28 + lVar7) = 0;
  lVar9 = (longlong)iStack_98;
  _Src = (void *)CONCAT44(uStack_9c,local_a0);
  *(int *)(lVar4 + 0x30 + lVar7) = iStack_98;
  if (lVar9 == 0) {
    *(undefined4 *)(lVar5 + 0x34) = 0;
  }
  else {
    puVar8 = (undefined8 *)(lVar7 + lVar4 + 0x28);
    FUN_1446dd670(puVar8,iStack_98,0);
    memcpy((void *)*puVar8,_Src,lVar9 * 2);
  }
  FUN_149482cae(lVar5 + 0x38,local_90);
  *(undefined2 *)(lVar5 + 0x78) = local_50;
  lVar5 = lVar6;
  if (*(int *)(param_1 + 0x28) != 1) {
    lVar5 = FUN_1494a4558(lVar6);
  }
  FUN_1494a4bcc(lVar5,param_2,&local_c8);
  if (*(int *)(param_1 + 0x28) != 2) {
    lVar6 = FUN_1494a4558(lVar6);
  }
  FUN_1494a4bcc(lVar6,&local_f8,&local_c8);
  lVar6 = (longlong)(int)(uint)uStack_f0;
  if (lVar6 != 0) {
    iVar2 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar2 + (uint)uStack_f0;
    if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar2) < (uint)uStack_f0) {
      FUN_149482de0(param_2,iVar2);
    }
    memmove((void *)((longlong)iVar2 * 8 + *param_2),local_f8,lVar6 << 3);
    uStack_f0 = uStack_f0 & 0xffffffff00000000;
  }
  if (local_f8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (*(int *)(param_1 + 0x28) == 1) {
    lVar6 = *param_2;
    puVar8 = (undefined8 *)(lVar6 + (ulonglong)(*(char *)(local_110 + 8) != '\x01') * 8);
  }
  else {
    if (*(char *)(local_110 + 8) != '\x01') goto LAB_1494a49ef;
    lVar6 = *param_2;
    puVar8 = (undefined8 *)(lVar6 + 0x10);
  }
  uVar3 = *puVar8;
  *puVar8 = *(undefined8 *)(lVar6 + 0x18);
  *(undefined8 *)(lVar6 + 0x18) = uVar3;
LAB_1494a49ef:
  FUN_14121c54c(local_90);
  if (CONCAT44(uStack_9c,local_a0) != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a4a58 FUN_1494a4a58 body=370 status=ok
// SIG undefined FUN_1494a4a58(void)

void FUN_1494a4a58(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined1 auStack_a8 [40];
  undefined8 *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1494a544e(param_1,&local_70,*param_2);
  *param_2 = local_70;
  cVar2 = FUN_14945fc10(param_2 + 1);
  if (cVar2 == '\0') {
    FUN_140f4f540();
    puVar3 = (undefined8 *)FUN_144a64e42();
    FUN_140f4f5a6(&DAT_14cc1c7d8,local_30,*puVar3);
    FUN_140e6511c(&local_70,local_30);
    param_2[1] = local_70;
    param_2[2] = local_68;
    *(undefined4 *)(param_2 + 3) = local_60;
    *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_5c;
    *(undefined4 *)(param_2 + 4) = uStack_58;
    *(undefined4 *)((longlong)param_2 + 0x24) = uStack_54;
    if (param_2 + 2 == &local_68) {
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_2[5] != 0) {
        FUN_1400020a8();
      }
      param_2[5] = local_50;
      local_50 = 0;
      *(undefined4 *)(param_2 + 6) = local_48;
      *(undefined4 *)((longlong)param_2 + 0x34) = local_44;
    }
  }
  uVar1 = DAT_14cc1c100;
  if (*(int *)(param_2 + 9) == 0 && *(int *)(param_2 + 7) == 0) {
    local_80 = (undefined8 *)0x0;
    local_78 = 1;
    FUN_1401b309e(&local_80,1,0);
    *local_80 = uVar1;
    FUN_1494a54d6(&local_70,&local_80);
    FUN_14949dfc4(param_2 + 7,&local_70);
    FUN_14121c54c(&local_70);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a4bcc FUN_1494a4bcc body=565 status=ok
// SIG undefined FUN_1494a4bcc(void)

/* WARNING: Removing unreachable block (ram,0x0001494a4d97) */
/* WARNING: Removing unreachable block (ram,0x0001494a4da6) */

longlong * FUN_1494a4bcc(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_118 [32];
  undefined1 *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [48];
  undefined1 local_88 [48];
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *param_2 = 0;
  param_2[1] = 0;
  uVar4 = *(undefined8 *)(param_1 + 0x150);
  uVar3 = *param_3;
  FUN_14452ad36(&local_58,uVar3);
  uVar6 = uVar3;
  if (*(int *)(param_1 + 0x130) == 2) {
    uVar6 = local_58;
    local_58 = uVar3;
  }
  FUN_14945f130(local_88,param_3 + 1);
  local_f0 = 0;
  uStack_e8 = 0;
  local_f8 = local_88;
  uVar3 = FUN_149495630(param_1,uVar6,1,param_3 + 7);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482de0(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar3;
  FUN_14945f130(local_b8,param_3 + 1);
  uStack_e8 = 0;
  local_f8 = local_b8;
  local_f0 = uVar4;
  uVar4 = FUN_149495630(param_1,local_58,2,param_3 + 7);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482de0(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar4;
  FUN_1494e659a(*(undefined8 *)*param_2,&local_d8);
  FUN_1494e659a(*(undefined8 *)(*param_2 + 8),&local_c8);
  iVar1 = *(int *)(param_1 + 0x168);
  *(uint *)(param_1 + 0x168) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x16c) < iVar1 + 1U) {
    FUN_1494d80e8((longlong *)(param_1 + 0x160),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x160);
  lVar5 = (longlong)iVar1 * 0x20;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined8 *)(lVar2 + lVar5) = local_d8;
  *(undefined4 *)(lVar2 + 8 + lVar5) = (undefined4)local_d0;
  *(undefined4 *)(lVar2 + 0xc + lVar5) = local_d0._4_4_;
  *(undefined8 *)(lVar2 + 0x10 + lVar5) = 0;
  *(undefined8 *)(lVar2 + 0x10 + lVar5) = local_c8;
  *(undefined4 *)(lVar2 + 0x18 + lVar5) = (undefined4)local_c0;
  *(undefined4 *)(lVar2 + 0x1c + lVar5) = local_c0._4_4_;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a4e02 FUN_1494a4e02 body=168 status=ok
// SIG undefined FUN_1494a4e02(void)

undefined8 FUN_1494a4e02(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(int *)(param_2 + 1) != 0) && (iVar1 = FUN_1494a4eaa(*(undefined8 *)*param_2), iVar1 != -1))
  {
    lVar3 = param_1 + -0x108;
    lVar2 = lVar3;
    if (*(int *)(param_1 + 0x28) != 1) {
      lVar2 = FUN_1494a4558(lVar3);
    }
    FUN_1494a4fba(lVar2,iVar1);
    lVar2 = lVar3;
    if (*(int *)(param_1 + 0x28) != 2) {
      lVar2 = FUN_1494a4558(lVar3);
    }
    FUN_1494a4fba(lVar2,iVar1);
    if (*(int *)(param_1 + 0x28) == 1) {
      param_1 = param_1 + 0x30;
    }
    else {
      lVar3 = FUN_1494a4558(lVar3);
      param_1 = lVar3 + 0x138;
      if (lVar3 == 0) {
        param_1 = 0;
      }
    }
    FUN_1494d7576(param_1 + 8,iVar1);
    FUN_1494d75e4(param_1 + 8);
    return 1;
  }
  return 0;
}



// FUNCTION 1494a4eaa FUN_1494a4eaa body=270 status=ok
// SIG undefined FUN_1494a4eaa(void)

int FUN_1494a4eaa(undefined8 param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = FUN_1494e64f0();
  iVar1 = *(int *)(lVar4 + 0x168);
  iVar5 = -1;
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(lVar4 + 0x160);
    lVar6 = 0;
    iVar5 = 0;
    do {
      FUN_1494e659a(param_1,&local_58);
      if (*(int *)(lVar4 + 8 + lVar6) == local_50) {
        cVar2 = FUN_14000b9e1(*(undefined8 *)(lVar4 + lVar6),local_58);
        cVar3 = '\x01';
        if (cVar2 == '\0') goto LAB_1494a4f2c;
      }
      else {
LAB_1494a4f2c:
        FUN_1494e659a(param_1,&local_68);
        if (*(int *)(lVar4 + 0x18 + lVar6) == local_60) {
          cVar3 = FUN_14000b9e1(*(undefined8 *)(lVar4 + 0x10 + lVar6),local_68);
        }
        else {
          cVar3 = '\0';
        }
        if (local_68 != 0) {
          FUN_1400020a8();
        }
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (cVar3 != '\0') goto LAB_1494a4f8f;
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 0x20;
    } while ((longlong)iVar1 * 0x20 != lVar6);
    iVar5 = -1;
  }
LAB_1494a4f8f:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a4fba FUN_1494a4fba body=240 status=ok
// SIG undefined FUN_1494a4fba(void)

void FUN_1494a4fba(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_88 [40];
  longlong *local_60;
  int local_58;
  longlong local_50 [2];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x168))) {
    FUN_1494a53b0(local_50,(ulonglong)param_2 * 0x20 + *(longlong *)(param_1 + 0x160));
    FUN_1494a52f4(param_1,&local_60,local_50);
    plVar1 = local_60;
    if ((longlong)local_58 != 0) {
      lVar2 = 0;
      do {
        FUN_144529b4e(param_1,*(undefined8 *)((longlong)plVar1 + lVar2));
        lVar2 = lVar2 + 8;
      } while ((longlong)local_58 * 8 != lVar2);
    }
    if (local_60 != (longlong *)0x0) {
      FUN_1400020a8(local_60);
    }
    local_60 = local_50;
    FUN_1494d81fa(param_1 + 0x160);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494a50dc FUN_1494a50dc body=121 status=ok
// SIG undefined FUN_1494a50dc(void)

undefined8 * FUN_1494a50dc(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  char cVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_3);
  if (cVar1 != '\0') {
    local_21 = 0;
    param_3 = FUN_1494a5156(param_1 + -0x22,param_3,(int)param_1[4]);
  }
  *param_2 = *(undefined8 *)(param_3 + 0x18);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a5156 FUN_1494a5156 body=197 status=ok
// SIG undefined FUN_1494a5156(void)

undefined8 FUN_1494a5156(longlong param_1,longlong param_2,int param_3,char *param_4)

{
  undefined8 uVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar3 = FUN_1494a4eaa(param_2);
  if (param_3 == 0) {
    param_1 = 0;
  }
  else if (*(int *)(param_1 + 0x130) != param_3) {
    param_1 = FUN_1494a4558(param_1);
  }
  FUN_1494a52f4(param_1,local_40,(longlong)iVar3 * 0x20 + *(longlong *)(param_1 + 0x160));
  bVar2 = param_4[1];
  if (bVar2 == 1) {
    cVar4 = *param_4;
  }
  else {
    cVar4 = (*(char *)(param_2 + 0x29) == '\x01') + '\x01';
  }
  uVar1 = *(undefined8 *)(local_40[0] + (ulonglong)(cVar4 != '\x01') * 8);
  if (local_40[0] != 0) {
    FUN_1400020a8();
    bVar2 = param_4[1];
  }
  if ((bVar2 & 1) != 0) {
    param_4[1] = '\0';
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a5232 FUN_1494a5232 body=164 status=ok
// SIG undefined FUN_1494a5232(void)

void FUN_1494a5232(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x18) == 1) {
    lVar1 = param_1 + 0x20;
  }
  else {
    lVar1 = FUN_1494a4558(param_1 + -0x118);
    if (lVar1 == 0) goto LAB_1494a529d;
    lVar1 = lVar1 + 0x138;
  }
  if ((lVar1 != 0) && ((longlong)*(int *)(lVar1 + 0x10) != 0)) {
    lVar2 = *(longlong *)(lVar1 + 8);
    lVar1 = (longlong)*(int *)(lVar1 + 0x10) << 7;
    do {
      FUN_1494a4bcc(param_1 + -0x118,local_38,lVar2);
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
      lVar2 = lVar2 + 0x80;
      lVar1 = lVar1 + -0x80;
    } while (lVar1 != 0);
  }
LAB_1494a529d:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a52f4 FUN_1494a52f4 body=92 status=ok
// SIG undefined FUN_1494a52f4(void)

longlong * FUN_1494a52f4(undefined8 param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_14949ad10(param_1,param_3);
  uVar3 = FUN_14949ad10(param_1,param_3 + 0x10);
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 2;
  FUN_1494d816e(param_2);
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  return param_2;
}



// FUNCTION 1494a5350 FUN_1494a5350 body=96 status=ok
// SIG undefined FUN_1494a5350(void)

undefined8 FUN_1494a5350(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (0 < *(int *)(param_1 + 0x60)) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x58) + lVar4 * 8);
      cVar2 = FUN_1494e6366(lVar1,param_2);
      if (cVar2 != '\0') {
        if (lVar1 == 0) {
          return 0;
        }
        uVar3 = FUN_1494e6378(lVar1,param_2);
        return uVar3;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x60));
  }
  return 0;
}



// FUNCTION 1494a53b0 FUN_1494a53b0 body=158 status=ok
// SIG undefined FUN_1494a53b0(void)

undefined8 * FUN_1494a53b0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1401b309e(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 << 3);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1401b309e(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 1494a544e FUN_1494a544e body=135 status=ok
// SIG undefined FUN_1494a544e(void)

longlong * FUN_1494a544e(undefined8 param_1,longlong *param_2,longlong param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 == 0) {
    FUN_1446f470e(&local_28,L"EmptyName",1);
    param_3 = local_28;
  }
  FUN_14949af2d(&local_28,param_3);
  *param_2 = local_28;
  if (local_28 != 0) {
    FUN_14949dc14(param_2,param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a54d6 FUN_1494a54d6 body=246 status=ok
// SIG undefined FUN_1494a54d6(void)

undefined4 * FUN_1494a54d6(undefined4 *param_1,longlong *param_2)

{
  int iVar1;
  void *_Src;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = (int)param_2[1];
  _Src = (void *)*param_2;
  param_1[4] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_1401b309e(param_1 + 2,iVar1,0);
    memcpy(*(void **)(param_1 + 2),_Src,(longlong)iVar1 << 3);
  }
  param_1[6] = 1;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  FUN_1446ddc76(&local_40,"Vertex",1);
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 1;
  FUN_1401b309e(param_1 + 0xc,1,0);
  **(undefined8 **)(param_1 + 0xc) = local_40;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a55d2 FUN_1494a55d2 body=100 status=ok
// SIG undefined FUN_1494a55d2(void)

ulonglong FUN_1494a55d2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (((param_2 != 0) && (lVar1 = FUN_1494e63d6(param_2), lVar1 == 0)) &&
     ((longlong)*(int *)(param_1 + -0xb0) != 0)) {
    lVar1 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + -0xb8) + lVar1) == param_2) {
        return (ulonglong)(*(char *)(param_2 + 0x29) == '\x02');
      }
      lVar1 = lVar1 + 8;
    } while ((longlong)*(int *)(param_1 + -0xb0) * 8 != lVar1);
  }
  return 0xffffffff;
}



// FUNCTION 1494a5636 FUN_1494a5636 body=274 status=ok
// SIG undefined FUN_1494a5636(void)

undefined8 * FUN_1494a5636(longlong param_1,undefined8 *param_2,uint param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  longlong local_50;
  int local_48;
  longlong local_40 [2];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_4;
  if (param_4 == 0) {
    lVar2 = FUN_14479d2ce(param_1 + 0x128);
    if (lVar2 != 0) {
      local_30 = *(longlong *)(lVar2 + 0x28);
    }
  }
  if (param_3 < 2) {
    puVar3 = &DAT_14ad8c4d2;
    if (param_3 == 0) {
      puVar3 = &DAT_14a475be0;
    }
    FUN_140056680(local_40,puVar3);
    FUN_1400021e4(&local_30,local_60);
    FUN_1407ec8fc(&local_50,local_40,local_60);
    iVar1 = local_48 + -1;
    if (local_48 == 0) {
      iVar1 = 0;
    }
    FUN_1446f82e2(param_2,iVar1,local_50,1);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    *param_2 = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a574a FUN_1494a574a body=297 status=ok
// SIG undefined FUN_1494a574a(void)

void FUN_1494a574a(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_b8;
  undefined1 local_b0 [48];
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined1 local_70 [48];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar1 = FUN_14479d2ce(param_1 + 0x25);
  if (lVar1 != 0) {
    FUN_14945f130(local_70,lVar1 + 0x30);
    (**(code **)(*param_1 + 0x300))(param_1,&local_78,0,0);
    local_d0 = 0;
    uStack_c8 = 0;
    local_d8 = local_70;
    FUN_149495630(param_1,local_78,1,lVar1 + 0x68);
    FUN_1446ddc76(local_80,&DAT_14a5934b0,1);
    FUN_14945f130(local_b0,lVar1 + 0x30);
    (**(code **)(*param_1 + 0x300))(param_1,&local_b8,1,0);
    local_d0 = 0;
    uStack_c8 = 0;
    local_d8 = local_b0;
    FUN_149495630(param_1,local_b8,2,lVar1 + 0x68);
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a5878 FUN_1494a5878 body=463 status=ok
// SIG undefined FUN_1494a5878(void)

void FUN_1494a5878(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 local_68;
  longlong local_60;
  undefined1 local_58 [8];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = param_3;
  if (*(longlong *)(param_1 + 0x138) == 0) goto LAB_1494a5a0a;
  plVar5 = (longlong *)(**(code **)(*(longlong *)(param_2 + 0x28) + 0x18))(param_2 + 0x28);
  if ((plVar5 == (longlong *)0x0) || (lVar6 = (**(code **)(*plVar5 + 8))(plVar5), lVar6 == 0)) {
LAB_1494a58d2:
    lVar6 = 0;
  }
  else {
    lVar7 = FUN_1458f36a4();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        != lVar7 + 0x30)) goto LAB_1494a58d2;
  }
  plVar5 = (longlong *)(param_1 + 0x138);
  lVar7 = (longlong)*(int *)(*(longlong *)(lVar6 + 0x130) + 0x30);
  if (lVar7 != 0) {
    lVar2 = *(longlong *)(*(longlong *)(lVar6 + 0x130) + 0x28);
    local_60 = param_1 + 0x170;
    lVar9 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar9);
      if ((((*(longlong *)(lVar3 + 0x28) == *plVar5) &&
           (*(longlong *)(lVar3 + 0x30) == *(longlong *)(param_1 + 0x140))) &&
          (cVar4 = FUN_144a7afa6(lVar3 + 0x40), cVar4 != '\0')) &&
         (cVar4 = FUN_1494a5a62(lVar3 + 0x68), cVar4 != '\0')) goto LAB_1494a5a0a;
      lVar9 = lVar9 + 8;
    } while (lVar7 * 8 != lVar9);
  }
  do {
    lVar7 = (longlong)*(int *)(*(longlong *)(lVar6 + 0x130) + 0x30);
    if (lVar7 == 0) break;
    lVar2 = *(longlong *)(*(longlong *)(lVar6 + 0x130) + 0x28);
    lVar9 = 0;
    bVar8 = false;
    do {
      if (*(longlong *)(*(longlong *)(lVar2 + lVar9) + 0x28) == *plVar5) {
        *(int *)(param_1 + 0x13c) = (int)((ulonglong)*plVar5 >> 0x20) + 1;
        bVar8 = true;
      }
      lVar9 = lVar9 + 8;
    } while (lVar7 * 8 != lVar9);
  } while (bVar8);
  local_78 = param_1 + 0x170;
  FUN_1494a5b68(local_68,local_58,param_1 + 0x140,plVar5);
  if (local_50 != 0) {
    LOCK();
    piVar1 = (int *)(local_50 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
    }
  }
LAB_1494a5a0a:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494a5a62 FUN_1494a5a62 body=261 status=ok
// SIG undefined FUN_1494a5a62(void)

ulonglong FUN_1494a5a62(int *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  wchar_t **ppwVar5;
  bool bVar6;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  int local_58;
  wchar_t *local_50;
  int local_48;
  undefined8 local_40;
  int local_38;
  wchar_t *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = *param_1;
  if (iVar1 == *param_2) {
    ppwVar5 = (wchar_t **)0x0;
    if (iVar1 == 1) {
      local_40 = *(undefined8 *)(param_1 + 8);
      local_38 = param_1[10] + -1;
      if (param_1[10] == 0) {
        local_38 = 0;
      }
      FUN_144a8b87e(&local_40,&local_30);
      local_60 = *(undefined8 *)(param_2 + 8);
      local_58 = param_2[10] + -1;
      if (param_2[10] == 0) {
        local_58 = 0;
      }
      ppwVar5 = &local_50;
      FUN_144a8b87e(&local_60,ppwVar5);
      if (local_48 == 0 || local_28 == 0) {
        uVar4 = local_28 - local_48;
      }
      else {
        uVar4 = local_28 - local_48;
        if (local_28 < local_48) {
          local_48 = local_28;
        }
        uVar3 = wcsncmp(local_30,local_50,(longlong)local_48);
        if (uVar3 != 0) {
          uVar4 = uVar3;
        }
        ppwVar5 = (wchar_t **)(ulonglong)uVar4;
      }
      bVar6 = uVar4 == 0;
LAB_1494a5b5f:
      ppwVar5 = (wchar_t **)CONCAT71((int7)((ulonglong)ppwVar5 >> 8),bVar6);
      goto LAB_1494a5ab7;
    }
    if (iVar1 != 0) goto LAB_1494a5ab7;
    if (param_1[4] == param_2[4]) {
      cVar2 = FUN_14000b9e1(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      if (cVar2 != '\0') {
        bVar6 = param_1[6] == param_2[6];
        goto LAB_1494a5b5f;
      }
    }
  }
  ppwVar5 = (wchar_t **)0x0;
LAB_1494a5ab7:
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return (ulonglong)ppwVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a5b68 FUN_1494a5b68 body=225 status=ok
// SIG undefined FUN_1494a5b68(void)

longlong *
FUN_1494a5b68(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)FUN_14001cc68(0xa0,0x10);
  FUN_1494d8378(plVar5,param_3,param_4,param_5);
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar3 + 1U) {
    FUN_14947b622((longlong *)(param_1 + 0x18),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x18);
  *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = plVar5 + 2;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar5;
  *param_2 = (longlong)(plVar5 + 2);
  param_2[1] = (longlong)plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  return param_2;
}



// FUNCTION 1494a5c4a FUN_1494a5c4a body=642 status=ok
// SIG undefined FUN_1494a5c4a(void)

void FUN_1494a5c4a(longlong *param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  (**(code **)(*param_1 + 0xf8))(param_1,param_2 == 2);
  lVar4 = param_1[4];
  if (lVar4 == 0) goto LAB_1494a5ca1;
  lVar2 = FUN_141155906();
  lVar4 = *(longlong *)(lVar4 + 0x10);
  if ((*(int *)(lVar4 + 0x38) < *(int *)(lVar2 + 0x38)) ||
     (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
      lVar2 + 0x30)) goto LAB_1494a5ca1;
  lVar4 = param_1[4];
  if (lVar4 == 0) {
LAB_1494a5cef:
    lVar4 = 0;
  }
  else {
    lVar2 = FUN_141155906();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        != lVar2 + 0x30)) goto LAB_1494a5cef;
  }
  plVar3 = (longlong *)(**(code **)(*(longlong *)(lVar4 + 0x28) + 0x18))(lVar4 + 0x28);
  if (plVar3 != (longlong *)0x0) {
    lVar4 = (**(code **)(*plVar3 + 8))(plVar3);
    if (lVar4 != 0) {
      lVar2 = FUN_1458f36a4();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        plVar3 = param_1 + 0x25;
        cVar1 = FUN_144729dda(plVar3);
        if (cVar1 == '\0') {
          if (param_1[0x27] != 0) {
            uVar5 = (**(code **)(*(longlong *)(lVar4 + 0x30) + 0x30))(lVar4 + 0x30);
            FUN_14485c47a(plVar3,uVar5);
            cVar1 = FUN_144729dda(plVar3);
            if (cVar1 != '\0') {
              (**(code **)(*param_1 + 0x2c0))(param_1);
            }
            local_48 = 0;
            uStack_40 = 0;
            local_58 = 0;
            uStack_50 = 0;
            local_68 = 0;
            uStack_60 = 0;
            local_78 = 0;
            uStack_70 = 0;
            local_88 = 0;
            uStack_80 = 0;
            local_98 = 0;
            uStack_90 = 0;
            local_a8 = 0;
            lStack_a0 = 0;
            local_b0 = 0;
            local_38 = 0;
            uStack_30 = 0;
            FUN_140e6511c();
            FUN_140e6507e(&local_78);
            param_1[0x27] = local_b0;
            param_1[0x28] = local_a8;
            param_1[0x29] = lStack_a0;
            *(undefined4 *)(param_1 + 0x2a) = (undefined4)local_98;
            *(undefined4 *)((longlong)param_1 + 0x154) = local_98._4_4_;
            *(undefined4 *)(param_1 + 0x2b) = (undefined4)uStack_90;
            *(undefined4 *)((longlong)param_1 + 0x15c) = uStack_90._4_4_;
            if (param_1 + 0x29 != &lStack_a0) {
              if (param_1[0x2c] != 0) {
                FUN_1400020a8();
              }
              param_1[0x2c] = local_88;
              local_88 = 0;
              *(undefined4 *)(param_1 + 0x2d) = (undefined4)uStack_80;
              *(undefined4 *)((longlong)param_1 + 0x16c) = uStack_80._4_4_;
              uStack_80 = 0;
            }
            FUN_14949dfc4(param_1 + 0x2e,&local_78);
            FUN_14121c54c(&local_78);
            if (local_88 != 0) {
              FUN_1400020a8();
            }
          }
        }
        else {
          uVar5 = FUN_14479d2ce(plVar3);
          lVar2 = FUN_1494e7b7c(uVar5);
          if (lVar2 != lVar4) {
            lVar2 = FUN_14479d2ce(plVar3);
            (**(code **)(*(longlong *)(lVar4 + 0x30) + 0x30))
                      (lVar4 + 0x30,*(undefined8 *)(lVar2 + 0x18));
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_d8);
          }
        }
      }
    }
  }
LAB_1494a5ca1:
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a5ee2 FUN_1494a5ee2 body=309 status=ok
// SIG undefined FUN_1494a5ee2(void)

void FUN_1494a5ee2(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_a8 [32];
  undefined2 *local_88;
  undefined2 *local_80;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = FUN_14479d2ce(param_1 + 0x128);
  if (lVar1 != 0) {
    FUN_1494a6018(lVar1 + 0x68,&local_50);
    puVar4 = &DAT_149dfb77a;
    if (local_48 != 0) {
      puVar4 = local_50;
    }
    uVar2 = FUN_149466e92(lVar1 + 0x30);
    FUN_1400021e4(uVar2,&local_60);
    local_88 = &DAT_149dfb77a;
    if (local_58 != 0) {
      local_88 = local_60;
    }
    FUN_1400021e4(lVar1 + 0x28,&local_70);
    puVar3 = &DAT_149dfb77a;
    if (local_68 != 0) {
      puVar3 = local_70;
    }
    local_80 = puVar4;
    FUN_140047918(param_2,
                  L"%sCustomProperties ResourceDefinition Name=\"%s\" Type=%s DataDomain=\"%s\"\n",
                  L"                                                                                                                                                                                                                                                               "
                  + (0xff - (longlong)param_3),puVar3);
    if (local_70 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a6018 FUN_1494a6018 body=323 status=ok
// SIG undefined FUN_1494a6018(void)

undefined8 * FUN_1494a6018(int *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_1 == 1) {
    if (param_1[10] == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = *(undefined2 **)(param_1 + 8);
    }
    FUN_140002266(param_2,L"\'%s\'",puVar2);
  }
  else {
    if (*param_1 != 0) {
LAB_1494a6062:
      *param_2 = 0;
      param_2[1] = 0;
      if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_2;
    }
    if (param_1[4] == 1) {
      *param_2 = 0;
      param_2[1] = 0;
      local_48 = **(undefined8 **)(param_1 + 2);
      FUN_1400021e4(&local_48,&local_58);
      iVar1 = (int)uStack_50 + -1;
      if ((int)uStack_50 == 0) {
        iVar1 = 0;
      }
      FUN_1400020e8(param_2,local_58,iVar1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020e8(param_2,&DAT_149e065c6,1);
      local_58 = 0;
      uStack_50 = 0;
      FUN_144a83b10(&local_58,param_1[6]);
      iVar1 = (int)uStack_50 + -1;
      if ((int)uStack_50 == 0) {
        iVar1 = 0;
      }
      FUN_1400020e8(param_2,local_58,iVar1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[4] != 0) goto LAB_1494a6062;
      FUN_140056680(param_2,L"Empty");
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
}



// FUNCTION 1494a615c FUN_1494a615c body=537 status=ok
// SIG undefined FUN_1494a615c(void)

void FUN_1494a615c(longlong param_1,undefined8 param_2)

{
  void **ppvVar1;
  void *_Src;
  char cVar2;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined1 local_d8 [64];
  longlong local_98 [3];
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  void *local_50;
  int local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_30 = param_2;
  cVar2 = FUN_140988638(&local_30,L"ResourceDefinition",1);
  if (cVar2 != '\0') {
    local_38 = 0;
    cVar2 = FUN_140e134ac(local_30,L"Name=");
    if (cVar2 != '\0') {
      local_40 = 0;
      cVar2 = FUN_140e134ac(local_30,L"Type=");
      if (cVar2 != '\0') {
        FUN_140f4f540();
        FUN_140f4f5a6(&DAT_14cc1c7d8,local_80,local_40);
        FUN_140e6511c(&local_70,local_80);
        cVar2 = FUN_14945fc10(&local_70);
        if (cVar2 != '\0') {
          local_98[0] = 0;
          local_98[1] = 0;
          local_e8 = 0;
          cVar2 = FUN_14063337c(local_30,L"DataDomain=",local_98,1);
          _Src = local_50;
          if (cVar2 != '\0') {
            *(undefined8 *)(param_1 + 0x138) = local_38;
            *(undefined8 *)(param_1 + 0x140) = local_70;
            *(undefined8 *)(param_1 + 0x148) = local_68;
            *(undefined4 *)(param_1 + 0x150) = local_60;
            *(undefined4 *)(param_1 + 0x154) = uStack_5c;
            *(undefined4 *)(param_1 + 0x158) = uStack_58;
            *(undefined4 *)(param_1 + 0x15c) = uStack_54;
            ppvVar1 = (void **)(param_1 + 0x160);
            if (ppvVar1 != &local_50) {
              *(int *)(param_1 + 0x168) = local_48;
              if (local_48 == 0 && *(int *)(param_1 + 0x16c) == 0) {
                *(undefined4 *)(param_1 + 0x16c) = 0;
              }
              else {
                FUN_1446dd670(ppvVar1,local_48);
                if (local_48 != 0) {
                  memcpy(*ppvVar1,_Src,(longlong)local_48 * 2);
                }
              }
            }
            FUN_1494a6376(local_d8,local_98);
            FUN_14949dfc4(param_1 + 0x170,local_d8);
            FUN_14121c54c(local_d8);
          }
          if (local_98[0] != 0) {
            FUN_1400020a8();
          }
        }
        if (local_50 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a6376 FUN_1494a6376 body=760 status=ok
// SIG undefined FUN_1494a6376(void)

undefined8 * FUN_1494a6376(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  code *pcVar4;
  undefined8 ***pppuVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  code *_Str;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_108 [32];
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined8 *local_d8;
  undefined8 uStack_d0;
  undefined1 local_c0 [16];
  longlong local_b0;
  int local_a8;
  undefined8 local_a0;
  int local_98;
  undefined2 *local_90;
  undefined4 local_88;
  undefined8 **local_80;
  code *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_140ded208(param_2,&local_b0);
  cVar6 = FUN_144a791f8(&local_b0,&DAT_149e0208a,1,1);
  if (cVar6 != '\0') {
    iVar7 = local_a8 + -1;
    if (local_a8 == 0) {
      iVar7 = 0;
    }
    FUN_144a63a7c(&local_b0,local_c0,1,iVar7 + -2);
    FUN_1494a9852(param_1,local_c0);
    goto LAB_1494a6477;
  }
  local_80 = &local_d8;
  local_d8 = (undefined8 *)0x0;
  uStack_d0 = 0;
  local_a0 = *param_2;
  local_98 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_98 = 0;
  }
  uStack_70 = &local_80;
  local_78 = FUN_1494da730;
  local_90 = &DAT_149e065c6;
  local_88 = 1;
  FUN_1403deae6(&local_a0,&local_90,&local_78,0);
  lVar9 = (longlong)(int)uStack_d0;
  if (lVar9 < 2) {
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    FUN_140e6507e(param_1);
  }
  else {
    uVar2 = local_d8[lVar9 * 2 + -2];
    uVar1 = *(undefined4 *)(local_d8 + lVar9 * 2 + -1);
    uStack_d0 = CONCAT44(uStack_d0._4_4_,(int)uStack_d0 + -1);
    FUN_1494da79a();
    FUN_14006620a(&local_78,uVar2,uVar1);
    pcVar4 = local_78;
    _Str = (code *)&DAT_149dfb77a;
    if ((int)uStack_70 != 0) {
      _Str = local_78;
    }
    iVar7 = _wtoi((wchar_t *)_Str);
    if (pcVar4 != (code *)0x0) {
      FUN_1400020a8(pcVar4);
    }
    local_78 = (code *)0x0;
    uStack_70 = (undefined8 ***)0x0;
    if ((longlong)(int)uStack_d0 == 0) {
      local_e0 = 0;
LAB_1494a657d:
      local_e8 = (void *)0x0;
      local_dc = 0;
    }
    else {
      puVar10 = local_d8 + (longlong)(int)uStack_d0 * 2;
      puVar11 = local_d8;
      do {
        FUN_1446f82e2(&local_90,*(undefined4 *)(puVar11 + 1),*puVar11,1);
        pppuVar5 = uStack_70;
        puVar3 = local_90;
        lVar9 = (longlong)(int)uStack_70;
        uVar8 = (int)uStack_70 + 1;
        uStack_70 = (undefined8 ***)CONCAT44(uStack_70._4_4_,uVar8);
        if (uStack_70._4_4_ < uVar8) {
          FUN_1446f84a2(&local_78,(ulonglong)pppuVar5 & 0xffffffff);
        }
        pcVar4 = local_78;
        *(undefined2 **)(local_78 + lVar9 * 8) = puVar3;
        puVar11 = puVar11 + 2;
      } while (puVar11 != puVar10);
      local_e0 = (int)uStack_70;
      lVar9 = (longlong)(int)uStack_70;
      local_e8 = (void *)0x0;
      if (lVar9 == 0) goto LAB_1494a657d;
      FUN_1401b309e(&local_e8,(ulonglong)uStack_70 & 0xffffffff,0);
      memcpy(local_e8,pcVar4,lVar9 << 3);
    }
    FUN_1494a1964(param_1,&local_e8,iVar7);
    if (local_78 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_d8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1494a6477:
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a6670 FUN_1494a6670 body=60 status=ok
// SIG undefined FUN_1494a6670(void)

longlong * FUN_1494a6670(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  
  if (param_4 == 0) {
    lVar1 = FUN_14479d2ce(param_1 + 0x128);
    if (lVar1 == 0) {
      *param_2 = 0;
    }
    else {
      *param_2 = *(longlong *)(lVar1 + 0x28);
    }
  }
  else {
    *param_2 = param_4;
  }
  return param_2;
}



// FUNCTION 1494a66ac FUN_1494a66ac body=677 status=ok
// SIG undefined FUN_1494a66ac(void)

undefined8 * FUN_1494a66ac(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  wchar_t *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  longlong *local_a8 [2];
  longlong *local_98 [2];
  undefined8 local_88;
  longlong *local_80;
  wchar_t **local_78;
  ulonglong *local_70;
  longlong local_68;
  undefined4 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  longlong *local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar4 = FUN_14479d2ce(param_1 + 0x128);
  if (lVar4 == 0) {
    local_58 = L"NoDescriptor";
    local_50 = 0xc;
    FUN_1446e940c(&local_68,&local_58);
    local_58 = L"OptimusResourceAccessorBase";
    local_50 = 0x1b;
    FUN_1446e940c(&local_78,&local_58);
    FUN_140208bae(&local_58,&local_78,&local_68,L"No resource descriptor set on this node");
    FUN_14023423e(param_2,&local_58);
    local_c8[0] = local_58;
  }
  else {
    cVar3 = FUN_144729dda(lVar4 + 0x60);
    if (cVar3 != '\0') {
      *param_2 = 0;
      *(undefined4 *)(param_2 + 1) = 0;
      goto LAB_1494a6704;
    }
    FUN_145715fae(local_a8,lVar4 + 0x28);
    local_58 = L"NoComponentBinding";
    local_50 = 0x12;
    FUN_1446e940c(local_cc,&local_58);
    local_58 = L"OptimusResourceAccessorBase";
    local_50 = 0x1b;
    FUN_1446e940c(local_d0,&local_58);
    FUN_140208bae(local_c8,local_d0,local_cc,L"No component binding set for resource \'{0}\'");
    FUN_14023409e(&local_b8,local_c8,1);
    local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
    FUN_14023423e(local_48,local_a8);
    local_70 = &local_38;
    local_78 = &local_58;
    FUN_14010d304(&local_68);
    local_88 = local_b8;
    local_80 = local_b0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_98,&local_88,&local_68);
    FUN_14007f2db(local_68,local_60);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_48[0] != (longlong *)0x0) {
      (**(code **)(*local_48[0] + 0x10))();
    }
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar2 = (int *)((longlong)local_b0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_b0 + 0x10))(local_b0);
        }
      }
    }
    if (local_a8[0] != (longlong *)0x0) {
      (**(code **)(*local_a8[0] + 0x10))();
    }
    FUN_14023423e(param_2,local_98);
    if (local_98[0] != (longlong *)0x0) {
      (**(code **)(*local_98[0] + 0x10))();
    }
  }
  if (local_c8[0] != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_c8[0] + 0x10))();
  }
LAB_1494a6704:
  if ((local_38 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1494a6952 FUN_1494a6952 body=224 status=ok
// SIG undefined FUN_1494a6952(void)

undefined8 FUN_1494a6952(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x20);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0xa8);
    if (lVar3 == 0) {
      lVar3 = FUN_1494a6a32(param_2);
      if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar3);
      }
      *(longlong *)(lVar1 + 0xa8) = lVar3;
    }
    *(undefined8 *)(lVar3 + 0x90) = *(undefined8 *)(lVar1 + 0x28);
    lVar3 = FUN_149466e92(lVar1 + 0x30);
    *(undefined8 *)(*(longlong *)(lVar1 + 0xa8) + 0x28) = *(undefined8 *)(lVar3 + 0x18);
    lVar3 = *(longlong *)(lVar1 + 0xa8);
    *(undefined4 *)(lVar3 + 0x30) = *(undefined4 *)(lVar1 + 0x68);
    FUN_1406fa324(lVar3 + 0x38,lVar1 + 0x70);
    *(undefined4 *)(lVar3 + 0x48) = *(undefined4 *)(lVar1 + 0x80);
    FUN_144a787a6(lVar3 + 0x50,lVar1 + 0x88);
    FUN_1406fa324(lVar3 + 0x60,lVar1 + 0x98);
    *(undefined8 *)(*(longlong *)(lVar1 + 0xa8) + 0x70) = *(undefined8 *)(lVar1 + 0x60);
    uVar2 = *(undefined8 *)(lVar1 + 0xa8);
  }
  return uVar2;
}



// FUNCTION 1494a6a32 FUN_1494a6a32 body=148 status=ok
// SIG undefined FUN_1494a6a32(void)

undefined8 FUN_1494a6a32(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459f7646();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a6ac8 FUN_1494a6ac8 body=41 status=ok
// SIG undefined FUN_1494a6ac8(void)

undefined8 FUN_1494a6ac8(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x20);
  if (lVar1 != 0) {
    uVar2 = FUN_14479d2ce(lVar1 + 0x60);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1494a6af2 FUN_1494a6af2 body=41 status=ok
// SIG undefined FUN_1494a6af2(void)

undefined8 FUN_1494a6af2(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar1 != 0) {
    uVar2 = FUN_14479d2ce(lVar1 + 0x60);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1494a6b20 FUN_1494a6b20 body=109 status=ok
// SIG undefined FUN_1494a6b20(void)

int FUN_1494a6b20(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = -1;
  if (param_2 != 0) {
    lVar2 = FUN_1494e63d6(param_2);
    if ((lVar2 == 0) && ((longlong)*(int *)(param_1 + -0xb0) != 0)) {
      lVar2 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + -0xb8) + lVar2);
        if (lVar1 == param_2) break;
        bVar4 = (longlong)*(int *)(param_1 + -0xb0) * 8 + -8 != lVar2;
        lVar2 = lVar2 + 8;
      } while (bVar4);
      iVar3 = -(uint)(lVar1 != param_2);
    }
  }
  return iVar3;
}



// FUNCTION 1494a6b8e FUN_1494a6b8e body=158 status=ok
// SIG undefined FUN_1494a6b8e(void)

void FUN_1494a6b8e(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = FUN_14479d2ce(param_1 + 0x25);
  if (lVar1 != 0) {
    FUN_14945f130(local_58,lVar1 + 0x30);
    (**(code **)(*param_1 + 0x300))(param_1,&local_60,0,0);
    local_70 = 0;
    uStack_68 = 0;
    local_78 = local_58;
    FUN_149495630(param_1,local_60,1,lVar1 + 0x68);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a6c32 FUN_1494a6c32 body=158 status=ok
// SIG undefined FUN_1494a6c32(void)

undefined8 FUN_1494a6c32(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_14479d2ce(param_1 + 0x130);
  if (lVar1 == 0) {
    FUN_1400b22c2(local_30,"<graph missing>");
  }
  else {
    lVar1 = FUN_14479d2ce(param_1 + 0x130);
    local_20 = *(undefined8 *)(lVar1 + 0x18);
    FUN_1400021e4(&local_20,local_30);
  }
  FUN_140233b1a(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a6cd2 FUN_1494a6cd2 body=567 status=ok
// SIG undefined FUN_1494a6cd2(void)

void FUN_1494a6cd2(longlong param_1)

{
  void *_Src;
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  void *local_90;
  int local_88;
  undefined4 local_84;
  undefined1 local_80 [16];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  void *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar3 = param_1 + 0x130;
  lVar1 = FUN_14479d2ce(lVar3);
  if (lVar1 != 0) {
    FUN_140f4f540();
    uVar2 = FUN_1411c55ba();
    FUN_14949555e(&DAT_14cc1c7d8,local_80,uVar2);
    FUN_140e6511c(&local_70,local_80);
    _Src = local_50;
    local_b0 = local_70;
    uStack_ac = uStack_6c;
    uStack_a8 = uStack_68;
    uStack_a4 = uStack_64;
    local_a0 = local_60;
    uStack_9c = uStack_5c;
    uStack_98 = uStack_58;
    uStack_94 = uStack_54;
    local_90 = (void *)0x0;
    local_88 = local_48;
    if ((longlong)local_48 == 0) {
      local_84 = 0;
    }
    else {
      FUN_1446dd670(&local_90,local_48,0);
      memcpy(local_90,_Src,(longlong)local_48 * 2);
    }
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    FUN_140e6507e(&local_f8);
    local_110 = 0;
    uStack_108 = 0;
    local_118 = (undefined8 *)&local_b0;
    uVar2 = FUN_149495630(param_1,DAT_14cc1d968,1,&local_f8);
    FUN_14485c47a(param_1 + 0x128,uVar2);
    FUN_14121c54c(&local_f8);
    lVar1 = FUN_14479d2ce(lVar3);
    if ((longlong)*(int *)(lVar1 + 0xa0) != 0) {
      lVar4 = (longlong)*(int *)(lVar1 + 0xa0) << 7;
      lVar1 = *(longlong *)(lVar1 + 0x98) + 0x38;
      do {
        FUN_14945f130(&local_f8,lVar1 + -0x30);
        local_110 = 0;
        uStack_108 = 0;
        local_118 = &local_f8;
        FUN_149495630(param_1,*(undefined8 *)(lVar1 + -0x38),1,lVar1);
        lVar1 = lVar1 + 0x80;
        lVar4 = lVar4 + -0x80;
      } while (lVar4 != 0);
    }
    lVar3 = FUN_14479d2ce(lVar3);
    if ((longlong)*(int *)(lVar3 + 0xb0) != 0) {
      lVar1 = (longlong)*(int *)(lVar3 + 0xb0) << 7;
      lVar3 = *(longlong *)(lVar3 + 0xa8) + 0x38;
      do {
        FUN_14945f130(&local_f8,lVar3 + -0x30);
        local_110 = 0;
        uStack_108 = 0;
        local_118 = &local_f8;
        FUN_149495630(param_1,*(undefined8 *)(lVar3 + -0x38),2,lVar3);
        lVar3 = lVar3 + 0x80;
        lVar1 = lVar1 + -0x80;
      } while (lVar1 != 0);
    }
    if (local_50 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a6f10 FUN_1494a6f10 body=144 status=ok
// SIG undefined FUN_1494a6f10(void)

void FUN_1494a6f10(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 == 0) {
LAB_1494a6f42:
    lVar2 = 0;
  }
  else {
    lVar1 = FUN_141155906();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        != lVar1 + 0x30)) goto LAB_1494a6f42;
  }
  lVar2 = (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x30))
                    (lVar2 + 0x28,*(undefined8 *)(param_1 + 0x120));
  if (lVar2 != 0) {
    lVar1 = FUN_1458d08d2();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_1494a6f83;
  }
  lVar2 = 0;
LAB_1494a6f83:
  FUN_14485c47a(param_1 + 0x130,lVar2);
  FUN_1494a729a(param_1);
  return;
}



// FUNCTION 1494a6fa0 FUN_1494a6fa0 body=302 status=ok
// SIG undefined FUN_1494a6fa0(void)

undefined8 * FUN_1494a6fa0(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 != 0) {
    lVar2 = FUN_1494e64f0(param_3);
    if (lVar2 == param_1 + -0x108) {
      lVar2 = FUN_14479d2ce(param_1 + 0x28);
      if (lVar2 != 0) {
        uVar4 = 1;
        if (*(char *)(param_3 + 0x29) != '\x01') {
          if (*(char *)(param_3 + 0x29) != '\x02') goto LAB_1494a6fc5;
          uVar4 = 2;
        }
        uVar3 = FUN_14479d2ce(param_1 + 0x28);
        lVar2 = FUN_1494e7b0c(uVar3,uVar4);
        if (lVar2 != 0) {
          FUN_1494e659a(param_3,local_50);
          uVar3 = FUN_14949ad10(lVar2,local_50);
          *param_2 = uVar3;
          puVar5 = param_2 + 1;
          FUN_149499536(puVar5,param_4);
          if (local_50[0] != 0) {
            FUN_1400020a8();
          }
          iVar1 = *(int *)(param_2 + 6);
          *(uint *)(param_2 + 6) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0x34) < iVar1 + 1U) {
            FUN_1494d7c94(puVar5,iVar1);
          }
          if ((undefined8 *)param_2[5] != (undefined8 *)0x0) {
            puVar5 = (undefined8 *)param_2[5];
          }
          puVar5[iVar1] = param_1;
          goto LAB_1494a6fdc;
        }
      }
    }
  }
LAB_1494a6fc5:
  *param_2 = 0;
  param_2[5] = 0;
  param_2[6] = 0x400000000;
LAB_1494a6fdc:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a70e4 FUN_1494a70e4 body=426 status=ok
// SIG undefined FUN_1494a70e4(void)

longlong FUN_1494a70e4(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [40];
  longlong *local_80 [2];
  undefined1 local_70 [8];
  int local_68;
  int local_3c;
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar1 = FUN_144729dda(param_1 + 0x10);
  if (cVar1 == '\0') {
    lVar6 = 0;
    goto LAB_1494a7118;
  }
  lVar6 = *(longlong *)(param_1 + -0xf8);
  if (lVar6 == 0) {
LAB_1494a716c:
    lVar6 = 0;
  }
  else {
    lVar2 = FUN_141155906();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        != lVar2 + 0x30)) goto LAB_1494a716c;
  }
  FUN_14479d2ce(param_1 + 0x10);
  FUN_14949fd3e();
  if (local_68 - local_3c == 1) {
    FUN_149498dbe(local_70,local_80);
    lVar6 = *local_80[0];
    if (local_80[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    plVar3 = (longlong *)(**(code **)(*(longlong *)(lVar6 + 0x28) + 0x10))(lVar6 + 0x28);
    if ((plVar3 == (longlong *)0x0) || (lVar2 = (**(code **)(*plVar3 + 8))(plVar3), lVar2 == 0)) {
LAB_1494a722f:
      if (lVar6 != 0) {
        lVar2 = FUN_1458d08d2();
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
          lVar6 = FUN_1494e7adc(lVar6,param_2);
          goto LAB_1494a7266;
        }
      }
    }
    else {
      lVar4 = FUN_1458f36a4();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) != lVar4 + 0x30)) goto LAB_1494a722f;
      lVar4 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x120) + 0x30);
      if (lVar4 != 0) {
        lVar5 = 0;
        do {
          lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x120) + 0x28) + lVar5);
          if (*(char *)(lVar6 + 0x48) != '\0') goto LAB_1494a7266;
          lVar5 = lVar5 + 8;
        } while (lVar4 * 8 != lVar5);
      }
    }
    lVar6 = 0;
  }
LAB_1494a7266:
  local_28 = 0;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_1494d6142(local_70);
LAB_1494a7118:
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 1494a729a FUN_1494a729a body=451 status=ok
// SIG undefined FUN_1494a729a(void)

void FUN_1494a729a(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  code *local_50;
  undefined4 local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = param_1 + 0x130;
  cVar3 = FUN_144729dda(lVar5);
  if (cVar3 != '\0') {
    lVar4 = FUN_14479d2ce(lVar5);
    iVar1 = *(int *)(lVar4 + 0xc0);
    if ((longlong)iVar1 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0xb8);
      lVar6 = 0;
      do {
        if ((*(int *)(lVar4 + 8 + lVar6) != 0) &&
           (plVar2 = *(longlong **)(lVar4 + lVar6), plVar2 != (longlong *)0x0)) {
          cVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,param_1);
          if (cVar3 != '\0') goto LAB_1494a743a;
        }
        lVar6 = lVar6 + 0x10;
      } while ((longlong)iVar1 * 0x10 != lVar6);
    }
    lVar4 = FUN_14479d2ce(lVar5);
    local_50 = FUN_1494a755e;
    local_48 = 0;
    FUN_1494a745e(lVar4 + 0xb8,local_40,param_1,&local_50);
    lVar4 = FUN_14479d2ce(lVar5);
    local_50 = FUN_1494a7736;
    local_48 = 0;
    FUN_1494a745e(lVar4 + 0xd0,local_40,param_1,&local_50);
    lVar4 = FUN_14479d2ce(lVar5);
    local_50 = FUN_1494a797a;
    local_48 = 0;
    FUN_1494a745e(lVar4 + 0xe8,local_40,param_1,&local_50);
    lVar4 = FUN_14479d2ce(lVar5);
    local_50 = FUN_1494a7a82;
    local_48 = 0;
    FUN_1494a745e(lVar4 + 0x100,local_40,param_1,&local_50);
    lVar4 = FUN_14479d2ce(lVar5);
    local_50 = FUN_1494a7a82;
    local_48 = 0;
    FUN_1494a745e(lVar4 + 0x118,local_40,param_1,&local_50);
    lVar5 = FUN_14479d2ce(lVar5);
    local_50 = FUN_1494a7bce;
    local_48 = 0;
    FUN_1494a745e(lVar5 + 0x130,local_40,param_1,&local_50);
  }
LAB_1494a743a:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a745e FUN_1494a745e body=254 status=ok
// SIG undefined FUN_1494a745e(void)

undefined8
FUN_1494a745e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14a79d330;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14bd1d610;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140fee05c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a755e FUN_1494a755e body=471 status=ok
// SIG undefined FUN_1494a755e(void)

void FUN_1494a755e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 unaff_RBP;
  undefined7 uVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 auStack_b8 [32];
  undefined8 **local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  int local_68;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar4 = (undefined7)((ulonglong)unaff_RBP >> 8);
  if (DAT_14cc1d970 == param_2) {
    lVar1 = FUN_14479d2ce(param_1 + 0x130);
    FUN_149494bcc(param_1,&local_70,1);
    local_80 = FUN_14479d2ce(param_1 + 0x128);
    local_78 = &local_80;
    FUN_1494d86e2(&local_70);
    iVar6 = local_68;
    puVar2 = local_70;
    FUN_149494bcc(param_1,&local_70,2);
    if (local_68 < 1) {
      uVar8 = 0;
    }
    else {
      uVar8 = *local_70;
    }
    if (local_70 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    plVar5 = (longlong *)(lVar1 + 0x98);
    uVar3 = (undefined4)CONCAT71(uVar4,1);
  }
  else {
    if (DAT_14cc1d978 != param_2) goto LAB_1494a7597;
    lVar1 = FUN_14479d2ce(param_1 + 0x130);
    plVar5 = (longlong *)(lVar1 + 0xa8);
    uVar3 = (undefined4)CONCAT71(uVar4,2);
    FUN_149494bcc(param_1,&local_70,2);
    local_80 = FUN_14479d2ce(param_1 + 0x128);
    local_78 = &local_80;
    FUN_1494d86e2(&local_70);
    uVar8 = 0;
    puVar2 = local_70;
    iVar6 = local_68;
  }
  if (plVar5 != (longlong *)0x0) {
    if (iVar6 != 0) {
      lVar1 = 0;
      do {
        FUN_1445288d0(param_1,*(undefined8 *)((longlong)puVar2 + lVar1));
        lVar1 = lVar1 + 8;
      } while ((longlong)iVar6 * 8 != lVar1);
    }
    if ((longlong)(int)plVar5[1] != 0) {
      lVar7 = (longlong)(int)plVar5[1] << 7;
      lVar1 = *plVar5 + 0x38;
      do {
        FUN_14945f130(&local_70,lVar1 + -0x30);
        local_98 = &local_70;
        local_90 = uVar8;
        FUN_144528bee(param_1,*(undefined8 *)(lVar1 + -0x38),uVar3,lVar1);
        lVar1 = lVar1 + 0x80;
        lVar7 = lVar7 + -0x80;
      } while (lVar7 != 0);
    }
  }
  if (puVar2 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar2);
  }
LAB_1494a7597:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a7736 FUN_1494a7736 body=578 status=ok
// SIG undefined FUN_1494a7736(void)

void FUN_1494a7736(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 *local_b0;
  longlong *local_a8;
  undefined1 local_a0 [48];
  undefined8 *local_70;
  longlong *local_68;
  undefined8 *local_60;
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (DAT_14cc1d970 == param_2) {
    lVar7 = FUN_14479d2ce(param_1 + 0x130);
    plVar9 = (longlong *)(lVar7 + 0x98);
    uVar10 = 1;
  }
  else {
    if (DAT_14cc1d978 != param_2) goto LAB_1494a7774;
    lVar7 = FUN_14479d2ce(param_1 + 0x130);
    plVar9 = (longlong *)(lVar7 + 0xa8);
    uVar10 = 2;
  }
  FUN_149494bcc(param_1,&local_60,uVar10);
  local_50 = FUN_14479d2ce(param_1 + 0x128);
  local_70 = &local_50;
  FUN_1494d86e2(&local_60);
  puVar8 = local_60;
  if ((plVar9 != (longlong *)0x0) && (0 < (int)plVar9[1])) {
    lVar11 = 0x38;
    lVar7 = 0;
    local_b0 = local_60;
    local_a8 = plVar9;
    do {
      lVar3 = local_b0[lVar7];
      lVar4 = *plVar9;
      if (*(longlong *)(lVar3 + 0x18) != *(longlong *)(lVar4 + -0x38 + lVar11)) {
        FUN_149494b6e(param_1,lVar3);
      }
      lVar12 = lVar11 + lVar4 + -0x30;
      FUN_1494947ba(lVar12,&local_60);
      FUN_1494947ba(lVar3 + 0x70,&local_70);
      puVar8 = local_60;
      plVar9 = local_68;
      puVar6 = local_70;
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_68 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          local_b8 = local_70;
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          puVar6 = local_b8;
          if (*piVar2 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            puVar6 = local_b8;
          }
        }
      }
      plVar9 = local_58;
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_58 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          local_b8 = puVar6;
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          puVar6 = local_b8;
          if (*piVar2 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            puVar6 = local_b8;
          }
        }
      }
      if (puVar6 != puVar8) {
        FUN_14945f130(local_a0,lVar12);
        FUN_149494908(param_1,lVar3,local_a0);
      }
      cVar5 = FUN_1494a5a62(lVar3 + 0x30,lVar4 + lVar11);
      plVar9 = local_a8;
      if (cVar5 == '\0') {
        FUN_1494a3eee(param_1,lVar3,lVar4 + lVar11);
      }
      lVar7 = lVar7 + 1;
      lVar11 = lVar11 + 0x80;
      puVar8 = local_b0;
    } while (lVar7 < (int)plVar9[1]);
  }
  if (puVar8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1494a7774:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494a797a FUN_1494a797a body=263 status=ok
// SIG undefined FUN_1494a797a(void)

void FUN_1494a797a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 unaff_RBX;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [32];
  undefined8 **local_78;
  undefined8 local_70;
  undefined8 *local_68;
  int local_60;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cc1d970 == param_2) {
    lVar1 = FUN_14479d2ce(param_1 + 0x130);
    FUN_149494bcc(param_1,&local_68,2);
    if (local_60 < 1) {
      uVar5 = 0;
    }
    else {
      uVar5 = *local_68;
    }
    if (local_68 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    plVar3 = (longlong *)(lVar1 + 0x98);
    uVar2 = (undefined4)CONCAT71((int7)((ulonglong)&local_68 >> 8),1);
  }
  else {
    if (DAT_14cc1d978 != param_2) goto LAB_1494a79cb;
    lVar1 = FUN_14479d2ce(param_1 + 0x130);
    plVar3 = (longlong *)(lVar1 + 0xa8);
    uVar2 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),2);
    uVar5 = 0;
  }
  if (plVar3 != (longlong *)0x0) {
    lVar1 = *plVar3;
    lVar4 = (longlong)((int)plVar3[1] + -1) * 0x80;
    FUN_14945f130(&local_68,lVar1 + lVar4 + 8);
    local_78 = &local_68;
    local_70 = uVar5;
    FUN_144528bee(param_1,*(undefined8 *)(lVar1 + lVar4),uVar2);
  }
LAB_1494a79cb:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a7a82 FUN_1494a7a82 body=330 status=ok
// SIG undefined FUN_1494a7a82(void)

void FUN_1494a7a82(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  undefined8 local_48;
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cc1d970 == param_2) {
    lVar1 = FUN_14479d2ce(param_1 + 0x130);
    plVar2 = (longlong *)(lVar1 + 0x98);
    uVar3 = 1;
  }
  else {
    if (DAT_14cc1d978 != param_2) goto LAB_1494a7ab7;
    lVar1 = FUN_14479d2ce(param_1 + 0x130);
    plVar2 = (longlong *)(lVar1 + 0xa8);
    uVar3 = 2;
  }
  FUN_149494bcc(param_1,&local_58,uVar3);
  local_48 = FUN_14479d2ce(param_1 + 0x128);
  local_40 = &local_48;
  FUN_1494d86e2(&local_58);
  if (local_50 != 0) {
    plVar5 = local_58;
    do {
      if ((longlong)(int)plVar2[1] != 0) {
        uVar4 = 0;
        do {
          if (*(longlong *)(*plVar2 + uVar4) == *(longlong *)(*plVar5 + 0x18)) {
            if ((~uVar4 & 0x7fffffff80) != 0) goto LAB_1494a7b79;
            break;
          }
          uVar4 = uVar4 + 0x80;
        } while ((longlong)(int)plVar2[1] * 0x80 != uVar4);
      }
      FUN_1445288d0(param_1);
LAB_1494a7b79:
      plVar5 = plVar5 + 1;
    } while (plVar5 != local_58 + local_50);
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8(local_58);
  }
LAB_1494a7ab7:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494a7bce FUN_1494a7bce body=681 status=ok
// SIG undefined FUN_1494a7bce(void)

void FUN_1494a7bce(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_c8 [44];
  int local_9c;
  longlong local_98;
  longlong local_90;
  longlong *local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (DAT_14cc1d970 == param_2) {
    lVar5 = FUN_14479d2ce(param_1 + 0x130);
    plVar7 = (longlong *)(lVar5 + 0x98);
    uVar9 = 1;
  }
  else {
    if (DAT_14cc1d978 != param_2) goto LAB_1494a7c0e;
    lVar5 = FUN_14479d2ce(param_1 + 0x130);
    plVar7 = (longlong *)(lVar5 + 0xa8);
    uVar9 = 2;
  }
  FUN_149494bcc(param_1,&local_78,uVar9);
  local_68 = FUN_14479d2ce(param_1 + 0x128);
  local_88 = &local_68;
  FUN_1494d86e2(&local_78);
  lVar5 = local_78;
  iVar2 = (int)uStack_70;
  if (plVar7 != (longlong *)0x0) {
    local_9c = (int)uStack_70;
    local_98 = (longlong)(int)uStack_70;
    local_78 = 0;
    uStack_70 = 0;
    if (iVar2 != 0) {
      lVar6 = local_98 * 8;
      lVar10 = 0;
      do {
        uVar8 = uStack_70;
        uVar9 = *(undefined8 *)(*(longlong *)(lVar5 + lVar10) + 0x18);
        lVar12 = (longlong)(int)uStack_70;
        uVar4 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
        if (uStack_70._4_4_ < uVar4) {
          FUN_1446f84a2(&local_78,uVar8 & 0xffffffff);
        }
        *(undefined8 *)(local_78 + lVar12 * 8) = uVar9;
        lVar10 = lVar10 + 8;
      } while (lVar6 - lVar10 != 0);
    }
    local_88 = (longlong *)0x0;
    uStack_80 = 0;
    lVar6 = plVar7[1];
    if ((longlong)(int)lVar6 != 0) {
      lVar10 = *plVar7;
      lVar12 = 0;
      do {
        uVar8 = uStack_80;
        lVar1 = *(longlong *)(lVar10 + lVar12);
        lVar11 = (longlong)(int)uStack_80;
        uVar4 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar4);
        if (uStack_80._4_4_ < uVar4) {
          FUN_1446f84a2(&local_88,uVar8 & 0xffffffff);
        }
        local_88[lVar11] = lVar1;
        lVar12 = lVar12 + 0x80;
      } while ((longlong)(int)lVar6 * 0x80 != lVar12);
    }
    local_68 = 0;
    local_90 = 0;
    cVar3 = FUN_1494a3e27(&local_78,&local_88);
    if (cVar3 != '\0') {
      if (local_9c == 0) {
        uVar9 = 0;
        lVar6 = -1;
      }
      else {
        uVar8 = 0;
        lVar6 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar5 + uVar8) + 0x18) == local_68) {
            lVar6 = lVar6 >> 0x20;
            goto LAB_1494a7e33;
          }
          lVar6 = lVar6 + 0x100000000;
          uVar8 = uVar8 + 8;
        } while (local_98 << 3 != uVar8);
        lVar6 = -1;
LAB_1494a7e33:
        if (local_90 == 0) {
LAB_1494a7e69:
          uVar9 = 0;
        }
        else {
          uVar9 = 0;
          uVar8 = 0;
          lVar10 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar5 + uVar8) + 0x18) == local_90) {
              if ((int)(~uVar8 >> 3) == 0) goto LAB_1494a7e69;
              uVar9 = *(undefined8 *)(lVar5 + (lVar10 >> 0x20) * 8);
              break;
            }
            lVar10 = lVar10 + 0x100000000;
            uVar8 = uVar8 + 8;
          } while (local_98 << 3 != uVar8);
        }
      }
      FUN_14452ac50(param_1,*(undefined8 *)(lVar5 + lVar6 * 8),uVar9);
    }
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if (lVar5 != 0) {
    FUN_1400020a8(lVar5);
  }
LAB_1494a7c0e:
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494a7e7c FUN_1494a7e7c body=499 status=ok
// SIG undefined FUN_1494a7e7c(void)

ulonglong FUN_1494a7e7c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 unaff_RBX;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x30) != '\0') {
    uVar11 = 0;
    goto LAB_1494a7eca;
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  if (*(int *)(param_1 + 0x50) == 0) {
    lVar9 = *(longlong *)(param_1 + 0x20);
    if (lVar9 != 0) {
      uVar8 = FUN_145a96b14();
      lVar9 = FUN_144718840(lVar9,uVar8);
      if (lVar9 != 0) {
        if (*(longlong *)(param_1 + 0x60) == 0) {
          bVar12 = false;
        }
        else {
          bVar12 = *(longlong *)(param_1 + 0xa0) != 0;
        }
        cVar6 = (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,lVar9);
        if (cVar6 != '\0') {
          plVar10 = (longlong *)(param_1 + 0x38);
          FUN_1494a8070(plVar10,*(undefined4 *)(param_1 + 0x2c));
          iVar3 = *(int *)(param_1 + 0x40);
          *(uint *)(param_1 + 0x40) = iVar3 + 1U;
          if (*(uint *)(param_1 + 0x44) < iVar3 + 1U) {
            FUN_14947b622(plVar10,iVar3);
          }
          lVar9 = *plVar10;
          *(longlong *)(lVar9 + (longlong)iVar3 * 0x10) = *param_2;
          lVar4 = param_2[1];
          *(longlong *)(lVar9 + 8 + (longlong)iVar3 * 0x10) = lVar4;
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
            UNLOCK();
          }
          uVar11 = CONCAT71((int7)((ulonglong)plVar10 >> 8),1);
          if (bVar12) {
            *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
            lVar9 = *param_2;
            pcVar5 = *(code **)(param_1 + 0x60);
            plVar10 = (longlong *)(param_1 + 0x80);
            if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
              plVar10 = *(longlong **)(param_1 + 0x70);
            }
            local_48 = param_1;
            uVar8 = (**(code **)(*plVar10 + 8))();
            uVar7 = (*pcVar5)(uVar8,&local_48,lVar9 + 8);
            *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
            local_48 = CONCAT44(local_48._4_4_,uVar7);
            pcVar5 = *(code **)(param_1 + 0xa0);
            plVar10 = (longlong *)(param_1 + 0xc0);
            if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
              plVar10 = *(longlong **)(param_1 + 0xb0);
            }
            uVar8 = (**(code **)(*plVar10 + 8))();
            (*pcVar5)(uVar8,&local_48);
          }
          goto LAB_1494a7ec6;
        }
      }
    }
    uVar11 = 0;
  }
  else {
    uVar8 = *(undefined8 *)
             (*(longlong *)(param_1 + 0x48) + (longlong)(*(int *)(param_1 + 0x50) + -1) * 0x10);
    local_58 = *param_2;
    local_50 = param_2[1];
    if (local_50 != 0) {
      LOCK();
      *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
      UNLOCK();
    }
    FUN_14945e210(uVar8,&local_58);
    uVar11 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  }
LAB_1494a7ec6:
  *(undefined1 *)(param_1 + 0x30) = 0;
LAB_1494a7eca:
  plVar10 = (longlong *)param_2[1];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar11 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a8070 FUN_1494a8070 body=130 status=ok
// SIG undefined FUN_1494a8070(void)

void FUN_1494a8070(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14947b622(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1494d87ac(param_1,param_2,iVar1 - param_2);
    FUN_1494d8806(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1494a80f4 FUN_1494a80f4 body=209 status=ok
// SIG undefined FUN_1494a80f4(void)

void FUN_1494a80f4(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)FUN_14001cc68(0x38,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14bd1d680;
  FUN_14945e0fa(plVar5 + 2,param_2);
  plVar5[2] = (longlong)&PTR_FUN_14bcfe1b0;
  plVar5[5] = 0;
  plVar5[6] = 0;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar3 + 1U) {
    FUN_1494d88ca((longlong *)(param_1 + 0x48),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x48);
  *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = plVar5 + 2;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar5;
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
        return;
      }
    }
  }
  return;
}



// FUNCTION 1494a81c6 FUN_1494a81c6 body=201 status=ok
// SIG undefined FUN_1494a81c6(void)

void FUN_1494a81c6(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (0 < (longlong)*(int *)(param_1 + 0x50)) {
    lVar3 = *(longlong *)(param_1 + 0x48);
    lVar6 = (longlong)*(int *)(param_1 + 0x50) * 0x10;
    lVar4 = *(longlong *)(lVar3 + -0x10 + lVar6);
    puVar5 = *(undefined8 **)(lVar3 + -8 + lVar6);
    puVar2 = (undefined8 *)(lVar3 + -0x10 + lVar6);
    *puVar2 = 0;
    puVar2[1] = 0;
    FUN_1494d8950(param_1 + 0x48,*(int *)(param_1 + 0x50) + -1);
    FUN_1494d89c6(param_1 + 0x48);
    if (*(int *)(lVar4 + 0x20) != 0) {
      if (puVar5 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
        UNLOCK();
      }
      local_38 = lVar4;
      local_30 = puVar5;
      FUN_1494a7e7c(param_1,&local_38);
    }
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar5 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar5)(puVar5);
        LOCK();
        piVar1 = (int *)((longlong)puVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a82a4 FUN_1494a82a4 body=290 status=ok
// SIG undefined FUN_1494a82a4(void)

longlong * FUN_1494a82a4(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494a83d6 FUN_1494a83d6 body=153 status=ok
// SIG undefined FUN_1494a83d6(void)

undefined8 FUN_1494a83d6(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 0x2b0))(param_1,&local_18);
  lVar2 = local_18;
  if ((((local_18 == 0) || (lVar1 = FUN_144a78d6a(), lVar1 == 0)) ||
      (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
     (lVar4 = local_18,
     *(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
     lVar1 + 0x30)) {
    lVar4 = 0;
  }
  lVar2 = FUN_144a745da();
  if ((lVar2 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar2 + 0x38))) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)(lVar2 + 0x30) >> 8),
                     *(longlong *)
                      (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
                     lVar2 + 0x30);
  }
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1418382ec FUN_1418382ec body=533 status=ok
// SIG undefined FUN_1418382ec(void)

void FUN_1418382ec(void *param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  void *_Src;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)((longlong)param_1 + 0x60);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (uVar3 < 2) {
    *(undefined4 *)((longlong)param_1 + 100) = 1;
    _Src = *(void **)((longlong)param_1 + 0x58);
joined_r0x000141838485:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x58);
    param_2 = 0;
    uVar5 = 0;
  }
  else {
    if (*(uint *)((longlong)param_1 + 100) < 2) {
      uVar7 = 4;
      if (4 < uVar3) {
        uVar7 = uVar3;
      }
      lVar4 = (longlong)(int)uVar7;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
    }
    uVar5 = lVar4 * 0x58;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar2) {
              uVar6 = (ulonglong)bVar2;
            }
            uVar8 = 0x32 - (ulonglong)bVar2;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14183837e;
              lVar4 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar4 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
      }
    }
LAB_14183837e:
    uVar5 = uVar5 / 0x58;
    uVar7 = (uint)uVar5;
    if ((int)uVar7 < (int)uVar3) {
      *(undefined4 *)((longlong)param_1 + 100) = 0x7fffffff;
      uVar5 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 0x58);
    }
    else {
      *(uint *)((longlong)param_1 + 100) = uVar7;
      _Src = *(void **)((longlong)param_1 + 0x58);
      if (uVar7 < 2) goto joined_r0x000141838485;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0x58,0,uVar5,0x58);
      memmove(*(void **)((longlong)param_1 + 0x58),param_1,(longlong)param_2 * 0x58);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x58,param_2,uVar5,0x58);
  return;
}



// FUNCTION 141838532 FUN_141838532 body=61 status=ok
// SIG undefined FUN_141838532(void)

void FUN_141838532(longlong param_1)

{
  FUN_144725486(param_1 + 0x158);
  if (DAT_14ca96da8 == '\0') {
    return;
  }
  FUN_14052082e(param_1 + 0x40);
  FUN_1407f1458(param_1 + 0x10);
  return;
}



// FUNCTION 141838570 FUN_141838570 body=357 status=ok
// SIG undefined FUN_141838570(void)

void FUN_141838570(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [80];
  undefined8 local_88;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined4 uStack_78;
  undefined2 uStack_74;
  undefined1 local_72;
  undefined8 local_71;
  undefined8 uStack_69;
  undefined8 local_61;
  undefined8 uStack_59;
  undefined8 local_51;
  undefined5 uStack_49;
  undefined3 uStack_44;
  undefined5 uStack_41;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_14006bf18(param_1 + 0x158);
  if (DAT_14ca96da8 != '\0') {
    local_88 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7a = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    local_72 = 1;
    local_71 = 0;
    uStack_69 = 0;
    local_61 = 0;
    uStack_59 = 0;
    local_51 = 0;
    uStack_49 = 0;
    uStack_44 = 0;
    uStack_41 = 0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb42cb8) {
      FUN_144b3d300(&DAT_14cb42cb8);
      if (DAT_14cb42cb8 == -1) {
        FUN_1446ddc76(&DAT_14cb42cb0,"FNiagaraRendererSprites",1);
        _Init_thread_footer(&DAT_14cb42cb8);
      }
    }
    DAT_14cb42cbc = DAT_14cb42cbc + 1;
    FUN_1474121aa((longlong)&local_51 + 1,DAT_14cb42cb0);
    uStack_7c = 0;
    uStack_7a = 0;
    uStack_74 = 1;
    FUN_147377468(local_d8,&local_88);
    FUN_141793e86(param_1 + 0x80,local_d8);
    FUN_14005bca4(local_d8);
    FUN_14742848e(param_1 + 0x40,param_2);
    FUN_14005bca4(&local_88);
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418386d6 FUN_1418386d6 body=1346 status=ok
// SIG undefined FUN_1418386d6(void)

void FUN_1418386d6(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_1e8 [40];
  undefined8 *local_1c0;
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  undefined8 *local_198;
  undefined8 *local_190;
  undefined8 *local_188;
  undefined8 *local_180;
  undefined8 *local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  undefined8 *local_160;
  undefined8 *local_158;
  undefined8 *local_150;
  undefined8 *local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined8 **local_128;
  ulonglong *local_120;
  undefined8 *local_118;
  undefined8 local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  puVar1 = (undefined8 *)*param_1;
  FUN_14078cbfa(puVar1);
  *puVar1 = &PTR_FUN_14ae112f0;
  puVar1[0x17] = 0;
  local_118 = (undefined8 *)FUN_1402d2740();
  if ((local_118 != (undefined8 *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_118);
  }
  local_110 = (undefined8 *)CONCAT53(local_110._3_5_,1);
  local_110 = (undefined8 *)CONCAT44(0xffffffff,(undefined4)local_110);
  puVar1[0x18] = 0;
  uVar2 = FUN_144830b78(puVar1 + 0x19,&local_118);
  *(undefined4 *)(puVar1 + 0x19) = uVar2;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  *(undefined2 *)(puVar1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)puVar1 + 0xe2) = 1;
  *(byte *)((longlong)puVar1 + 0xe3) = *(byte *)((longlong)puVar1 + 0xe3) & 0xfc;
  *(undefined4 *)((longlong)puVar1 + 0xe4) = 0x42c80000;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0x3ff0000000000000;
  puVar1[0x20] = 0x3ff0000000000000;
  *(undefined2 *)(puVar1 + 0x21) = 0x101;
  *(undefined1 *)((longlong)puVar1 + 0x10a) = 1;
  *(byte *)((longlong)puVar1 + 0x10b) = *(byte *)((longlong)puVar1 + 0x10b) & 0xfc;
  *(undefined4 *)((longlong)puVar1 + 0x10c) = 0x42c80000;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0x3ff0000000000000;
  puVar1[0x25] = 0x3ff0000000000000;
  *(undefined1 *)(puVar1 + 0x26) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x134) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x139) = 0xe400;
  *(undefined8 *)((longlong)puVar1 + 0x13c) = 0x200000001;
  *(undefined4 *)((longlong)puVar1 + 0x144) = 3;
  *(undefined4 *)((longlong)puVar1 + 0x15c) = 0;
  *(undefined1 *)(puVar1 + 0x2b) = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2c] = 0x4170000000000010;
  *(byte *)(puVar1 + 0x2d) = *(byte *)(puVar1 + 0x2d) & 0xfe;
  local_130 = puVar1 + 0x2e;
  FUN_140120f5c();
  local_138 = puVar1 + 0x35;
  FUN_140120f5c();
  local_140 = puVar1 + 0x3c;
  FUN_140120f5c();
  local_148 = puVar1 + 0x43;
  FUN_140120f5c();
  local_150 = puVar1 + 0x4a;
  FUN_140120f5c();
  local_158 = puVar1 + 0x51;
  FUN_140120f5c();
  local_160 = puVar1 + 0x58;
  FUN_140120f5c();
  local_168 = puVar1 + 0x5f;
  FUN_140120f5c();
  local_170 = puVar1 + 0x66;
  FUN_140120f5c();
  local_178 = puVar1 + 0x6d;
  FUN_140120f5c();
  local_180 = puVar1 + 0x74;
  FUN_140120f5c();
  local_188 = puVar1 + 0x7b;
  FUN_140120f5c();
  local_190 = puVar1 + 0x82;
  FUN_140120f5c();
  local_198 = puVar1 + 0x89;
  FUN_140120f5c();
  local_1a0 = puVar1 + 0x90;
  FUN_140120f5c();
  local_1a8 = puVar1 + 0x97;
  FUN_140120f5c();
  local_1b0 = puVar1 + 0x9e;
  FUN_140120f5c();
  local_1b8 = puVar1 + 0xa5;
  FUN_140120f5c();
  local_1c0 = puVar1 + 0xac;
  FUN_140120f5c();
  puVar1[0xb3] = 0;
  puVar1[0xb4] = 0;
  puVar1[0xb5] = 0;
  puVar1[0xb6] = 0;
  puVar1[0xb7] = 0;
  puVar1[0xb8] = 0;
  puVar1[0xb9] = 0;
  puVar1[0xba] = 0;
  puVar1[0xbb] = 0;
  puVar1[0xbc] = 0;
  FUN_140120f5c(puVar1 + 0xbd);
  FUN_140120f5c(puVar1 + 0xc4);
  FUN_140120f5c(puVar1 + 0xcb);
  FUN_140120f5c();
  *(undefined4 *)(puVar1 + 0xd9) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x6cc) = 1;
  puVar1[0xda] = 0xffffffffffffffff;
  *(undefined1 *)(puVar1 + 0xdb) = 1;
  *(undefined4 *)((longlong)puVar1 + 0x6dc) = 0xffffffff;
  *(undefined1 *)(puVar1 + 0xdc) = 1;
  *(undefined4 *)((longlong)puVar1 + 0x6e4) = 0xffffffff;
  *(undefined1 *)(puVar1 + 0xdd) = 1;
  *(undefined4 *)((longlong)puVar1 + 0x6ec) = 0xffffffff;
  *(undefined1 *)(puVar1 + 0xde) = 1;
  *(undefined4 *)((longlong)puVar1 + 0x6f4) = 0xffffffff;
  *(undefined1 *)(puVar1 + 0xdf) = 1;
  *(undefined4 *)((longlong)puVar1 + 0x6fc) = 0xffffffff;
  *(undefined1 *)(puVar1 + 0xe0) = 1;
  *(undefined4 *)((longlong)puVar1 + 0x704) = 0xffffffff;
  *(undefined1 *)(puVar1 + 0xe1) = 1;
  *(undefined4 *)((longlong)puVar1 + 0x70c) = 0xffffffff;
  *(undefined1 *)(puVar1 + 0xe2) = 1;
  *(undefined4 *)((longlong)puVar1 + 0x714) = 0xffffffff;
  *(undefined1 *)(puVar1 + 0xe3) = 1;
  *(undefined4 *)((longlong)puVar1 + 0x71c) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 0x724) = 0xffffffff;
  *(undefined1 *)(puVar1 + 0xe5) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x72c) = 0xffffffffffffffff;
  *(undefined1 *)((longlong)puVar1 + 0x734) = 0;
  *(undefined4 *)(puVar1 + 0xe7) = 0xffffffff;
  puVar1[0xec] = 0;
  puVar1[0xea] = 0;
  puVar1[0xeb] = 0;
  puVar1[0xe8] = 0;
  puVar1[0xe9] = 0;
  local_118 = local_130;
  local_110 = local_138;
  local_108 = local_140;
  local_100 = local_148;
  local_f8 = local_150;
  local_f0 = local_158;
  local_e8 = local_160;
  local_e0 = local_168;
  local_d8 = local_170;
  local_d0 = local_178;
  local_c8 = local_180;
  local_c0 = local_188;
  local_b8 = local_190;
  local_b0 = local_198;
  local_a8 = local_1a0;
  local_a0 = local_1a8;
  local_98 = local_1b0;
  local_90 = local_1b8;
  local_88 = local_1c0;
  local_120 = local_60;
  local_128 = &local_118;
  local_80 = puVar1 + 0xbd;
  local_78 = puVar1 + 0xc4;
  local_70 = puVar1 + 0xcb;
  local_68 = puVar1 + 0xd2;
  FUN_14078cc5e(puVar1 + 0x15);
  if ((local_60[0] ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141838c1a FUN_141838c1a body=99 status=ok
// SIG undefined FUN_141838c1a(void)

void FUN_141838c1a(undefined8 param_1,undefined8 param_2)

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
  switchD_143c3d4dc::caseD_20(param_1,local_180);
  if ((local_8 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141838c7e FUN_141838c7e body=64 status=ok
// SIG undefined FUN_141838c7e(void)

void FUN_141838c7e(longlong *param_1)

{
  FUN_14042b052();
  (**(code **)(*param_1 + 0x340))(param_1,0);
  if (param_1[0x17] != 0) {
    FUN_1400337aa();
  }
  FUN_14042b016(param_1 + 0xb3);
  return;
}



// FUNCTION 141838cbe FUN_141838cbe body=169 status=ok
// SIG undefined FUN_141838cbe(void)

void FUN_141838cbe(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[0xe] = 0;
  *puVar2 = &PTR_FUN_14ae1b930;
  *(undefined1 *)(puVar2 + 1) = 1;
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0xffffffff;
  *(undefined1 *)(puVar2 + 2) = 1;
  *(undefined4 *)((longlong)puVar2 + 0x14) = 0xffffffff;
  *(undefined1 *)(puVar2 + 3) = 1;
  *(undefined4 *)((longlong)puVar2 + 0x1c) = 0xffffffff;
  *(undefined1 *)(puVar2 + 4) = 1;
  *(undefined4 *)((longlong)puVar2 + 0x24) = 0xffffffff;
  puVar2[7] = DAT_14c846520;
  uVar1 = DAT_14c846518;
  puVar2[5] = DAT_14c846510;
  puVar2[6] = uVar1;
  puVar2[10] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  puVar2[8] = DAT_14c8464e0;
  puVar2[9] = uVar1;
  puVar2[0xd] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  puVar2[0xb] = DAT_14c8464e0;
  puVar2[0xc] = uVar1;
  return;
}



// FUNCTION 141838d68 FUN_141838d68 body=213 status=ok
// SIG undefined FUN_141838d68(void)

void FUN_141838d68(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (((((param_2 != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) &&
       (plVar2 = (longlong *)FUN_144741050(param_1 + 200), *plVar2 != 0)) &&
      ((*(longlong *)(param_2 + 8) != 0 &&
       (plVar2 = *(longlong **)(*(longlong *)(param_2 + 8) + 0x40), plVar2 != (longlong *)0x0)))) &&
     (piVar3 = (int *)(**(code **)(*plVar2 + 0x58))(plVar2,param_1 + 0xc0,0), piVar3 != (int *)0x0))
  {
    iVar1 = *piVar3;
    if (((-1 < (longlong)iVar1) && (iVar1 < (int)plVar2[9])) &&
       (lVar5 = *(longlong *)(plVar2[8] + (longlong)iVar1 * 8), lVar5 != 0)) {
      lVar4 = FUN_1402d2740();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) goto LAB_141838d8b;
    }
  }
  lVar5 = *(longlong *)(param_1 + 0xb8);
LAB_141838d8b:
  iVar1 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
    FUN_144769b64(param_3,iVar1);
  }
  *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar5;
  return;
}



// FUNCTION 141838e3e FUN_141838e3e body=73 status=ok
// SIG undefined FUN_141838e3e(void)

longlong * FUN_141838e3e(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  *(int *)(param_1 + 2) = (int)param_2[2];
  return param_1;
}



// FUNCTION 141838e88 FUN_141838e88 body=194 status=ok
// SIG undefined FUN_141838e88(void)

bool FUN_141838e88(longlong param_1)

{
  int iVar1;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb430d0) && (FUN_144b3d300(&DAT_14cb430d0), DAT_14cb430d0 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14cb430c8 =
         (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"vm.OptimizeVMByteCode",1);
    _Init_thread_footer(&DAT_14cb430d0);
  }
  if ((((DAT_14cb430c8 != (longlong *)0x0) &&
       (iVar1 = (**(code **)(*DAT_14cb430c8 + 0xb0))(), iVar1 != 0)) &&
      (*(char *)(param_1 + 0x348) != '\0')) && (0 < *(int *)(param_1 + 0x1e0))) {
    return *(int *)(param_1 + 0x1f8) < 1;
  }
  return false;
}



// FUNCTION 141838f4a FUN_141838f4a body=103 status=ok
// SIG undefined FUN_141838f4a(void)

void FUN_141838f4a(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1456bd870(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      *(int *)(param_1 + 1) = param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 141838fb1 FUN_141838fb1 body=49 status=ok
// SIG undefined FUN_141838fb1(void)

longlong FUN_141838fb1(void)

{
  if (DAT_14cb432f0 == 0) {
    FUN_14073dd9a(&DAT_14cb432f0,&PTR_LAB_14ae19540);
  }
  return DAT_14cb432f0;
}



// FUNCTION 141838fe2 FUN_141838fe2 body=657 status=ok
// SIG undefined FUN_141838fe2(void)

undefined8 * FUN_141838fe2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ae112f0;
  if (param_1[0xea] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xcd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xbf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xbb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xae] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa0] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x99] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x92] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x84] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x76] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x68] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x61] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x45] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_140852690(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141839274 FUN_141839274 body=29 status=ok
// SIG undefined FUN_141839274(void)

undefined8 FUN_141839274(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141839292 FUN_141839292 body=510 status=ok
// SIG undefined FUN_141839292(void)

void FUN_141839292(longlong param_1,longlong param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb43398) {
    FUN_144b3d300(&DAT_14cb43398);
    if (DAT_14cb43398 == -1) {
      FUN_1446f470e(&DAT_14cb43390,L"Position",1);
      _Init_thread_footer(&DAT_14cb43398);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb433a4) {
    FUN_144b3d300(&DAT_14cb433a4);
    if (DAT_14cb433a4 == -1) {
      FUN_1446f470e(&DAT_14cb4339c,L"SpriteSize",1);
      _Init_thread_footer(&DAT_14cb433a4);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb433b0) {
    FUN_144b3d300(&DAT_14cb433b0);
    if (DAT_14cb433b0 == -1) {
      FUN_1446f470e(&DAT_14cb433a8,L"Scale",1);
      _Init_thread_footer(&DAT_14cb433b0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb433bc) {
    FUN_144b3d300(&DAT_14cb433bc);
    if (DAT_14cb433bc == -1) {
      FUN_1446f470e(&DAT_14cb433b4,L"RibbonWidth",1);
      _Init_thread_footer(&DAT_14cb433bc);
    }
  }
  if (param_2 != 0) {
    FUN_140bec572(param_1 + 8,param_2,DAT_14cb43390);
    FUN_140aa8fc4(param_1 + 0x20,param_2,DAT_14cb433b4);
    return;
  }
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  return;
}



// FUNCTION 141839490 FUN_141839490 body=51 status=ok
// SIG undefined FUN_141839490(void)

void FUN_141839490(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = 0;
  uVar1 = FUN_144830b78(param_2 + 1,&DAT_14cb42160);
  *(undefined4 *)(param_2 + 1) = uVar1;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  return;
}



// FUNCTION 1418394c4 FUN_1418394c4 body=381 status=ok
// SIG undefined FUN_1418394c4(void)

ulonglong FUN_1418394c4(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar8 = (ulonglong)uVar3;
  iVar10 = *(int *)(param_1 + 0xc);
  uVar5 = iVar10 - uVar3;
  uVar6 = (ulonglong)uVar5;
  if (((0x3fff < (ulonglong)((longlong)(int)uVar5 * 0xc)) || ((int)(uVar3 * 3) < iVar10 * 2)) &&
     ((uVar3 == 0 || (0x40 < (int)uVar5)))) {
    if (0 < (int)uVar3) {
      uVar8 = uVar8 * 0xc;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar6 = uVar8 + 0xf;
          if (uVar3 < 0xaaa) {
            uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
          }
          else {
            if ((uVar6 & 0xffffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
              uVar7 = 0x32;
              if (0x32 < bVar2) {
                uVar7 = (ulonglong)bVar2;
              }
              uVar9 = 0x32 - (ulonglong)bVar2;
              do {
                uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_141839590;
                lVar1 = uVar7 + 1 + uVar9;
                uVar9 = uVar9 - 1;
              } while (lVar1 != 0x33);
            }
            uVar8 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar8 = (ulonglong)DAT_14c841df8;
            }
            uVar8 = -uVar8 & ((uVar6 & 0xffffffff0) + uVar8) - 1;
          }
        }
        else {
          uVar8 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar8,4);
          iVar10 = *(int *)(param_1 + 0xc);
        }
      }
LAB_141839590:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar8;
      uVar6 = SUB168(auVar4 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
      uVar8 = uVar8 / 0xc;
    }
    if ((int)uVar8 != iVar10) {
      *(int *)(param_1 + 0xc) = (int)uVar8;
      uVar6 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar8,0xc,4);
    }
  }
  return uVar6;
}



// FUNCTION 141839642 FUN_141839642 body=29 status=ok
// SIG undefined FUN_141839642(void)

undefined8 FUN_141839642(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141839660 FUN_141839660 body=212 status=ok
// SIG undefined FUN_141839660(void)

void FUN_141839660(longlong param_1,uint param_2)

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



// FUNCTION 141839734 FUN_141839734 body=29 status=ok
// SIG undefined FUN_141839734(void)

undefined8 FUN_141839734(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141839752 FUN_141839752 body=320 status=ok
// SIG undefined FUN_141839752(void)

void FUN_141839752(longlong param_1,uint param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1418397bb;
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
LAB_1418397bb:
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



// FUNCTION 141839892 FUN_141839892 body=212 status=ok
// SIG undefined FUN_141839892(void)

void FUN_141839892(longlong param_1,uint param_2)

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



// FUNCTION 141839966 FUN_141839966 body=373 status=ok
// SIG undefined FUN_141839966(void)

void FUN_141839966(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x18;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418399ef;
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
LAB_1418399ef:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 141839adc FUN_141839adc body=390 status=ok
// SIG undefined FUN_141839adc(void)

void FUN_141839adc(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(byte *)(puVar1 + 7) = *(byte *)(puVar1 + 7) | 1;
  *puVar1 = &PTR_FUN_14ae1ee70;
  FUN_140120f5c(puVar1 + 8);
  puVar1[0x10] = 0;
  uVar2 = FUN_144830b78(puVar1 + 0x11,&DAT_14cb42160);
  *(undefined4 *)(puVar1 + 0x11) = uVar2;
  puVar1[0x15] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  *(undefined1 *)(puVar1 + 0x14) = 0;
  uVar2 = FUN_144830b78(puVar1 + 0x16,&DAT_14cb42160);
  *(undefined4 *)(puVar1 + 0x16) = uVar2;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  FUN_140120f5c(puVar1 + 0x1a);
  puVar1[0x21] = 0;
  puVar1[0x23] = 0;
  uVar2 = FUN_144830b78(puVar1 + 0x24,&DAT_14cb42160);
  *(undefined4 *)(puVar1 + 0x24) = uVar2;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  puVar1[0x27] = 0;
  uVar2 = FUN_144830b78(puVar1 + 0x28,&DAT_14cb42160);
  *(undefined4 *)(puVar1 + 0x28) = uVar2;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  uVar2 = FUN_144830b78(puVar1 + 0x2c,&DAT_14cb42160);
  *(undefined4 *)(puVar1 + 0x2c) = uVar2;
  puVar1[0x30] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  *(undefined2 *)(puVar1 + 0x2f) = 0;
  uVar2 = FUN_144830b78(puVar1 + 0x31,&DAT_14cb42160);
  *(undefined4 *)(puVar1 + 0x31) = uVar2;
  puVar1[0x32] = 0;
  puVar1[0x33] = 0;
  puVar1[0x34] = 0;
  uVar2 = FUN_144830b78(puVar1 + 0x35,&DAT_14cb42160);
  *(undefined4 *)(puVar1 + 0x35) = uVar2;
  puVar1[0x36] = 0;
  puVar1[0x37] = 0;
  puVar1[0x38] = 0;
  uVar2 = FUN_144830b78(puVar1 + 0x39,&DAT_14cb42160);
  *(undefined4 *)(puVar1 + 0x39) = uVar2;
  puVar1[0x3a] = 0;
  puVar1[0x3b] = 0;
  return;
}



// FUNCTION 141839c62 FUN_141839c62 body=511 status=ok
// SIG undefined FUN_141839c62(void)

void FUN_141839c62(longlong param_1)

{
  code *pcVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    local_98 = 0;
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
  }
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    local_80 = 0;
    local_78[0] = FUN_144830b78(local_78,&DAT_14cb420e0);
    local_70 = local_80;
    local_60 = 0;
    uStack_58 = 0;
    local_90 = 0;
    local_68 = local_78[0];
    local_88[0] = FUN_144830b78(local_88,&DAT_14cb420e0);
    FUN_140120fb8(param_1 + 0x40,&local_90,&local_70,1);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    local_80 = DAT_14cb43428;
    local_78[0] = FUN_144830b78(local_78,&DAT_14cb420d0);
    local_70 = local_80;
    local_60 = 0;
    uStack_58 = 0;
    local_90 = DAT_14cb43428;
    local_68 = local_78[0];
    local_88[0] = FUN_144830b78(local_88,&DAT_14cb420d0);
    FUN_140120fb8(param_1 + 0xd0,&local_90,&local_70,0);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141839e62 FUN_141839e62 body=127 status=ok
// SIG undefined FUN_141839e62(void)

void FUN_141839e62(longlong param_1)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xd5) & 4) != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar1 = FUN_1400439fc(param_1,0,&local_19);
  if (cVar1 == '\0') {
    if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 141839ef5 FUN_141839ef5 body=49 status=ok
// SIG undefined FUN_141839ef5(void)

longlong FUN_141839ef5(void)

{
  if (DAT_14cb43660 == 0) {
    FUN_14086a14e(&DAT_14cb43660,&PTR_FUN_14ae217f0);
  }
  return DAT_14cb43660;
}



// FUNCTION 141839f38 FUN_141839f38 body=95 status=ok
// SIG undefined FUN_141839f38(void)

void FUN_141839f38(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  
  FUN_144727c04(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x38) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 141839f98 FUN_141839f98 body=206 status=ok
// SIG undefined FUN_141839f98(void)

void FUN_141839f98(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  double dVar3;
  undefined1 auStack_48 [32];
  double local_28;
  double local_20;
  double local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 0x798) & 0x40) == 0) {
    lVar1 = FUN_1400bd118(*(undefined8 *)(param_1 + 0x30));
    if (lVar1 == 0) {
      fVar2 = 0.0;
    }
    else {
      local_18 = (double)*(float *)(param_1 + 0x14) * 65536.0 + *(double *)(param_1 + 0x80);
      local_20 = (double)*(float *)(param_1 + 0x10) * 65536.0 + *(double *)(param_1 + 0x78);
      local_28 = (double)*(float *)(param_1 + 0xc) * 65536.0 + *(double *)(param_1 + 0x70);
      *(undefined4 *)(param_1 + 0xe4) = 0;
      dVar3 = (double)FUN_1448b6098(lVar1);
      fVar2 = (float)dVar3;
      *(float *)(param_1 + 0xe4) = fVar2;
      *(byte *)(param_1 + 0x798) = *(byte *)(param_1 + 0x798) | 0x40;
    }
  }
  else {
    fVar2 = *(float *)(param_1 + 0xe4);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar2);
}



// FUNCTION 14183a068 FUN_14183a068 body=226 status=ok
// SIG undefined FUN_14183a068(void)

undefined8 * FUN_14183a068(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ae1ee70;
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14183a14a FUN_14183a14a body=29 status=ok
// SIG undefined FUN_14183a14a(void)

undefined8 FUN_14183a14a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14183a168 FUN_14183a168 body=373 status=ok
// SIG undefined FUN_14183a168(void)

void FUN_14183a168(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0xc;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14183a1f1;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_14183a1f1:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xc)) {
    uVar7 = uVar5 / 0xc & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xc,4);
  return;
}



// FUNCTION 14183a2de FUN_14183a2de body=29 status=ok
// SIG undefined FUN_14183a2de(void)

undefined8 FUN_14183a2de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14183a2fc FUN_14183a2fc body=332 status=ok
// SIG undefined FUN_14183a2fc(void)

void FUN_14183a2fc(longlong param_1,int param_2)

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
    uVar3 = (longlong)param_2 * 0x18;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14183a36a;
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
LAB_14183a36a:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x18)) {
      uVar5 = uVar3 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x18,8);
  }
  return;
}



// FUNCTION 14183a448 FUN_14183a448 body=269 status=ok
// SIG undefined FUN_14183a448(void)

void FUN_14183a448(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14183a556 FUN_14183a556 body=353 status=ok
// SIG undefined FUN_14183a556(void)

void FUN_14183a556(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 4;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14183a5db;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_14183a5db:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 2)) {
    uVar7 = uVar5 >> 2 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,4,4);
  return;
}



// FUNCTION 14183a6b8 FUN_14183a6b8 body=373 status=ok
// SIG undefined FUN_14183a6b8(void)

void FUN_14183a6b8(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0xc;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14183a741;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_14183a741:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xc)) {
    uVar7 = uVar5 / 0xc & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xc,4);
  return;
}



// FUNCTION 14183a82e FUN_14183a82e body=96 status=ok
// SIG undefined FUN_14183a82e(void)

void FUN_14183a82e(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  
  do {
    if (param_2 == 0) {
      return;
    }
    if ((int)param_1[1] == 0) {
LAB_14183a84a:
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
        goto LAB_14183a84a;
      }
    }
    param_1 = param_1 + 3;
    param_2 = param_2 + -1;
  } while( true );
}



// FUNCTION 14183a88e FUN_14183a88e body=29 status=ok
// SIG undefined FUN_14183a88e(void)

undefined8 FUN_14183a88e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14183a8ac FUN_14183a8ac body=29 status=ok
// SIG undefined FUN_14183a8ac(void)

undefined8 FUN_14183a8ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14183a8ca FUN_14183a8ca body=29 status=ok
// SIG undefined FUN_14183a8ca(void)

undefined8 FUN_14183a8ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14183a8e8 FUN_14183a8e8 body=315 status=ok
// SIG undefined FUN_14183a8e8(void)

void FUN_14183a8e8(longlong param_1,int param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14183a952;
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
LAB_14183a952:
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



// FUNCTION 14183aa24 FUN_14183aa24 body=306 status=ok
// SIG undefined FUN_14183aa24(void)

void FUN_14183aa24(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = (longlong)param_2 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar6 = uVar3 + 0xf;
      if (uVar3 < 0x7ff1) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
      }
      else {
        if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
          uVar4 = 0x32;
          if (0x32 < bVar2) {
            uVar4 = (ulonglong)bVar2;
          }
          uVar7 = 0x32 - (ulonglong)bVar2;
          do {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_14183aa86;
            lVar1 = uVar4 + 1 + uVar7;
            uVar7 = uVar7 - 1;
          } while (lVar1 != 0x33);
        }
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar3 = -uVar3 & ((uVar6 & 0xfffffffffffffff0) + uVar3) - 1;
      }
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
    }
  }
LAB_14183aa86:
  uVar6 = 0x7fffffff;
  if (param_2 <= (int)(uVar3 >> 3)) {
    uVar6 = uVar3 >> 3 & 0xffffffff;
  }
  iVar5 = (int)uVar6;
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar6,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar5;
  return;
}



// FUNCTION 14183ab56 FUN_14183ab56 body=269 status=ok
// SIG undefined FUN_14183ab56(void)

void FUN_14183ab56(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14183ac64 FUN_14183ac64 body=228 status=ok
// SIG undefined FUN_14183ac64(void)

void FUN_14183ac64(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  FUN_14011fb0c((longlong *)(param_1 + 0x38));
  lVar4 = *(longlong *)(param_1 + 0x40);
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x38);
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(ulonglong *)(param_1 + 0x20) != 0 && (*(ulonglong *)(param_1 + 0x20) & 1) == 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14183ad48 FUN_14183ad48 body=57 status=ok
// SIG undefined FUN_14183ad48(void)

void FUN_14183ad48(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43bb8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43bb8 = FUN_140002ddd(FUN_14647b0e4,uVar1,L"NiagaraSpawnInfo");
  }
  return;
}



// FUNCTION 14183ad81 FUN_14183ad81 body=49 status=ok
// SIG undefined FUN_14183ad81(void)

longlong FUN_14183ad81(void)

{
  if (DAT_14cb43ce8 == 0) {
    FUN_14086a14e(&DAT_14cb43ce8,&PTR_FUN_14ae28a78);
  }
  return DAT_14cb43ce8;
}



// FUNCTION 14183adb2 FUN_14183adb2 body=49 status=ok
// SIG undefined FUN_14183adb2(void)

longlong FUN_14183adb2(void)

{
  if (DAT_14cb43d00 == 0) {
    FUN_14086a14e(&DAT_14cb43d00,&PTR_FUN_14ae28b60);
  }
  return DAT_14cb43d00;
}



// FUNCTION 14183ade4 FUN_14183ade4 body=979 status=ok
// SIG undefined FUN_14183ade4(void)

longlong * FUN_14183ade4(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  wchar_t *local_90;
  undefined4 local_88;
  code *local_80;
  undefined1 *local_78;
  undefined2 **local_70;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = FUN_14577e4bc();
  AcquireSRWLockShared((PSRWLOCK)(lVar3 + 0x2198));
  iVar1 = *(int *)(lVar3 + 0x2010);
  if ((longlong)iVar1 != 0) {
    lVar7 = 0;
    do {
      if (*(short *)(lVar3 + 0x18 + lVar7) == 3) {
        lVar5 = DAT_14cb420c0;
        if (DAT_14cb420c0 != 0) goto LAB_14183aee3;
      }
      else {
        lVar5 = *(longlong *)(lVar3 + 0x10 + lVar7);
        if (lVar5 != 0) {
          if (DAT_14c948f88 == 0) {
            local_58 = &DAT_1427db2a2;
            lVar5 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
            DAT_14c948f88 = lVar5;
            FUN_1446f470e(local_50,L"Struct",1);
            local_70 = &local_58;
            local_78 = &LAB_146891313;
            local_80 = FUN_146272f63;
            local_90 = L"Engine";
            local_88 = 199;
            local_98 = 8;
            local_a0 = 0x10000020;
            local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,8);
            FUN_14574b4b2(lVar5);
            DAT_14c948f88 = lVar5;
            local_60 = FUN_1446f8646();
            lVar5 = DAT_14c948f88;
            uVar6 = FUN_1400163b0();
            local_a8 = L"Struct";
            FUN_14574b446(uVar6,lVar5,local_60,L"/Script/CoreUObject");
            lVar5 = *(longlong *)(lVar3 + 0x10 + lVar7);
            if (lVar5 == 0) goto LAB_14183aeec;
          }
          if ((((DAT_14c948f88 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x10), lVar5 != 0)) &&
              (*(int *)(DAT_14c948f88 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
             (*(longlong *)
               (*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14c948f88 + 0x38) * 8) ==
              DAT_14c948f88 + 0x30)) {
            lVar5 = DAT_14cb420c0;
            if (*(short *)(lVar3 + 0x18 + lVar7) == 3) goto LAB_14183aee3;
            lVar4 = *(longlong *)(lVar3 + 0x10 + lVar7);
            if (lVar4 == 0) {
LAB_14183aefb:
              lVar5 = 0;
            }
            else {
              if (DAT_14c948f88 == 0) {
                local_58 = &DAT_1427db2a2;
                lVar5 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
                DAT_14c948f88 = lVar5;
                FUN_1446f470e(local_50,L"Struct",1);
                local_70 = &local_58;
                local_78 = &LAB_146891313;
                local_80 = FUN_146272f63;
                local_90 = L"Engine";
                local_88 = 199;
                local_98 = 8;
                local_a0 = 0x10000020;
                local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,8);
                FUN_14574b4b2(lVar5);
                DAT_14c948f88 = lVar5;
                local_60 = FUN_1446f8646();
                lVar5 = DAT_14c948f88;
                uVar6 = FUN_1400163b0();
                local_a8 = L"Struct";
                FUN_14574b446(uVar6,lVar5,local_60,L"/Script/CoreUObject");
                lVar4 = *(longlong *)(lVar3 + 0x10 + lVar7);
                if (lVar4 == 0) goto LAB_14183aefb;
              }
              if (DAT_14c948f88 == 0) goto LAB_14183aefb;
              lVar2 = *(longlong *)(lVar4 + 0x10);
              lVar5 = 0;
              if (lVar2 != 0) {
                if (*(int *)(lVar2 + 0x38) < *(int *)(DAT_14c948f88 + 0x38)) goto LAB_14183aefb;
                lVar5 = lVar4;
                if (*(longlong *)
                     (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14c948f88 + 0x38) * 8) !=
                    DAT_14c948f88 + 0x30) {
                  lVar5 = 0;
                }
              }
            }
LAB_14183aee3:
            if (lVar5 == param_2) {
              lVar5 = *(longlong *)(lVar3 + 0x10 + lVar7);
              *param_1 = lVar5;
              if ((lVar5 != 0 & DAT_14c950c29) == 1) {
                FUN_1456cec3c();
              }
              param_1[1] = *(longlong *)(lVar3 + 0x18 + lVar7);
              goto LAB_14183af42;
            }
          }
        }
      }
LAB_14183aeec:
      lVar7 = lVar7 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar7);
  }
  *param_1 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(param_2);
  }
  *(undefined2 *)(param_1 + 1) = 2;
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  FUN_140c6c286(param_2,0);
LAB_14183af42:
  ReleaseSRWLockShared((PSRWLOCK)(lVar3 + 0x2198));
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14183b25c FUN_14183b25c body=29 status=ok
// SIG undefined FUN_14183b25c(void)

void FUN_14183b25c(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1400bd118();
  if (lVar1 != 0) {
    FUN_14013f7bc();
    return;
  }
  return;
}



// FUNCTION 14183b27a FUN_14183b27a body=1429 status=ok
// SIG undefined FUN_14183b27a(void)

void FUN_14183b27a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  uint *local_a0;
  ulonglong local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = (uint *)(param_1 + 0x180);
  uVar5 = *(uint *)(param_1 + 0x198);
  if (uVar5 == 0) {
    uVar15 = 1;
    uVar16 = 0;
    iVar10 = 0;
    uVar11 = 0;
  }
  else {
    puVar2 = *(uint **)(param_1 + 400);
    if (*(uint **)(param_1 + 400) == (uint *)0x0) {
      puVar2 = local_a0;
    }
    uVar11 = *puVar2;
    if (uVar11 == 0) {
      iVar10 = uVar5 + 0x1e;
      if (-1 < (int)(uVar5 - 1)) {
        iVar10 = uVar5 - 1;
      }
      uVar16 = 0;
      uVar17 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar17 = uVar16;
      }
      iVar10 = 0;
      do {
        if (uVar17 == uVar16) goto LAB_14183b3d4;
        iVar10 = iVar10 + 0x20;
        uVar11 = puVar2[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar16 = 0;
      iVar10 = 0;
    }
    uVar15 = (ulonglong)(-uVar11 & uVar11);
    uVar17 = uVar15 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar11 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if ((int)uVar5 <= (int)uVar11) {
      uVar11 = uVar5;
    }
  }
  if (uVar11 != uVar5) {
    uVar4 = 0xffffffff;
    local_98 = (ulonglong)uVar5;
    do {
      lVar14 = *(longlong *)(param_1 + 0x170);
      (**(code **)(*param_2 + 0x88))(param_2,lVar14 + (longlong)(int)uVar11 * 0x18,0,0);
      (**(code **)(*param_2 + 0x88))(param_2,lVar14 + (longlong)(int)uVar11 * 0x18 + 8,0,0);
      uVar4 = ~(uint)uVar15 & uVar4;
      puVar2 = *(uint **)(param_1 + 400);
      if (*(uint **)(param_1 + 400) == (uint *)0x0) {
        puVar2 = local_a0;
      }
      uVar5 = *(uint *)(param_1 + 0x198);
      iVar12 = (int)uVar16;
      lVar14 = (longlong)iVar12;
      uVar11 = puVar2[lVar14] & uVar4;
      if (uVar11 == 0) {
        iVar6 = uVar5 + 0x1e;
        if (-1 < (int)(uVar5 - 1)) {
          iVar6 = uVar5 - 1;
        }
        iVar6 = iVar6 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar12) {
          iVar7 = iVar12;
        }
        if (iVar12 < iVar6) {
          lVar13 = 0;
          do {
            uVar11 = puVar2[lVar14 + lVar13 + 1];
            if (uVar11 != 0) {
              uVar16 = (ulonglong)(iVar12 + (int)lVar13 + 1);
              uVar4 = 0xffffffff;
              goto LAB_14183b397;
            }
            iVar10 = iVar10 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar7 - lVar14 != lVar13);
          uVar4 = 0xffffffff;
          iVar12 = iVar7;
        }
        uVar16 = (ulonglong)(iVar12 + 1);
        uVar11 = uVar5;
      }
      else {
LAB_14183b397:
        uVar15 = (ulonglong)(-uVar11 & uVar11);
        uVar17 = uVar15 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar11 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if ((int)uVar5 <= (int)uVar11) {
          uVar11 = uVar5;
        }
      }
    } while (uVar11 != (uint)local_98);
  }
LAB_14183b3d4:
  uVar16 = 0;
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x1b30,0,0);
  local_a0 = (uint *)(param_1 + 0x1bb0);
  iVar10 = *(int *)(param_1 + 0x1bc8);
  uVar17 = 1;
  iVar6 = 0;
  iVar12 = 0;
  if (iVar10 != 0) {
    puVar2 = *(uint **)(param_1 + 0x1bc0);
    if (*(uint **)(param_1 + 0x1bc0) == (uint *)0x0) {
      puVar2 = local_a0;
    }
    uVar5 = *puVar2;
    if (uVar5 == 0) {
      iVar12 = iVar10 + 0x1e;
      if (-1 < iVar10 + -1) {
        iVar12 = iVar10 + -1;
      }
      uVar16 = 0;
      uVar17 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar17 = uVar16;
      }
      do {
        if (uVar17 == uVar16) goto LAB_14183b53e;
        iVar6 = iVar6 + 0x20;
        uVar5 = puVar2[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar5 == 0);
    }
    else {
      uVar16 = 0;
    }
    uVar17 = (ulonglong)(-uVar5 & uVar5);
    uVar15 = uVar17 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar12 = (iVar6 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar10 <= iVar12) {
      iVar12 = iVar10;
    }
  }
  if (iVar12 != iVar10) {
    uVar5 = 0xffffffff;
    do {
      lVar14 = *(longlong *)(param_1 + 0x1ba0) + (longlong)iVar12 * 0xf0;
      (**(code **)(*param_2 + 0x88))
                (param_2,*(longlong *)(param_1 + 0x1ba0) + (longlong)iVar12 * 0xf0,0,0);
      (**(code **)(*param_2 + 0x88))(param_2,lVar14 + 8,0,0);
      local_a8 = 0;
      (**(code **)(*param_2 + 0x90))
                (param_2,*(undefined8 *)(lVar14 + 0x10),*(undefined4 *)(lVar14 + 0x18),0);
      uVar5 = ~(uint)uVar17 & uVar5;
      puVar2 = *(uint **)(param_1 + 0x1bc0);
      if (*(uint **)(param_1 + 0x1bc0) == (uint *)0x0) {
        puVar2 = local_a0;
      }
      iVar7 = *(int *)(param_1 + 0x1bc8);
      iVar12 = (int)uVar16;
      lVar14 = (longlong)iVar12;
      uVar11 = puVar2[lVar14] & uVar5;
      if (uVar11 == 0) {
        iVar8 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar8 = iVar7 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar6 = iVar6 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar12) {
          iVar9 = iVar12;
        }
        if (iVar12 < iVar8) {
          lVar13 = 0;
          do {
            uVar11 = puVar2[lVar14 + lVar13 + 1];
            if (uVar11 != 0) {
              uVar16 = (ulonglong)(iVar12 + (int)lVar13 + 1);
              uVar5 = 0xffffffff;
              goto LAB_14183b506;
            }
            iVar6 = iVar6 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar9 - lVar14 != lVar13);
          uVar5 = 0xffffffff;
          iVar12 = iVar9;
        }
        uVar16 = (ulonglong)(iVar12 + 1);
        iVar12 = iVar7;
      }
      else {
LAB_14183b506:
        uVar17 = (ulonglong)(-uVar11 & uVar11);
        uVar15 = uVar17 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar12 = (iVar6 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar7 <= iVar12) {
          iVar12 = iVar7;
        }
      }
    } while (iVar12 != iVar10);
  }
LAB_14183b53e:
  plVar1 = (longlong *)(param_1 + 0x1c18);
  lVar14 = param_1 + 0x1c28;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar10 = 0;
  local_60 = lVar14;
  if (*(int *)(param_1 + 0x1c40) != 0) {
    FUN_1449c0562(&local_68);
    iVar10 = *(int *)(param_1 + 0x1c40);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = plVar1;
  if ((iStack_54 != iVar10) || (local_60 != lVar14)) {
    do {
      do {
        lVar13 = *local_90;
        lVar3 = (longlong)iStack_74;
        (**(code **)(*param_2 + 0x88))(param_2,lVar13 + lVar3 * 0x18,0,0);
        (**(code **)(*param_2 + 0x88))(param_2,lVar13 + lVar3 * 0x18 + 8);
        local_78 = local_78 & ~local_88._4_4_;
        FUN_1449c0562(&local_88);
      } while (iStack_74 != iVar10);
    } while ((local_80 != lVar14) || (local_90 != plVar1));
  }
  local_a8 = 0;
  (**(code **)(*param_2 + 0x90))
            (param_2,*(undefined8 *)(param_1 + 0x1c68),*(undefined4 *)(param_1 + 0x1c70),0);
  FUN_140d860a0(param_2,*(longlong *)(param_1 + 0x1c78) + 8,0,0);
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14183b810 FUN_14183b810 body=1053 status=ok
// SIG undefined FUN_14183b810(void)

void FUN_14183b810(void)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint *puVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auStack_98 [44];
  int local_6c;
  ulonglong local_68;
  longlong local_60;
  int local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cb44478 == 0) {
    uVar18 = 1;
    uVar17 = 0;
    uVar2 = 0;
    iVar15 = 0;
  }
  else {
    puVar12 = &DAT_14cb44460;
    if (DAT_14cb44470 != (uint *)0x0) {
      puVar12 = DAT_14cb44470;
    }
    uVar2 = *puVar12;
    if (uVar2 == 0) {
      iVar15 = DAT_14cb44478 + 0x1e;
      if (-1 < (int)(DAT_14cb44478 - 1)) {
        iVar15 = DAT_14cb44478 - 1;
      }
      uVar17 = 0;
      uVar18 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar18 = uVar17;
      }
      iVar15 = 0;
      do {
        if (uVar18 == uVar17) goto LAB_14183bb9b;
        iVar15 = iVar15 + 0x20;
        uVar2 = puVar12[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar2 == 0);
    }
    else {
      uVar17 = 0;
      iVar15 = 0;
    }
    uVar18 = (ulonglong)(-uVar2 & uVar2);
    uVar10 = uVar18 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar2 = (iVar15 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if ((int)DAT_14cb44478 <= (int)uVar2) {
      uVar2 = DAT_14cb44478;
    }
  }
  if (uVar2 != DAT_14cb44478) {
    uVar5 = 0xffffffff;
    local_68 = (ulonglong)DAT_14cb44478;
    do {
      lVar11 = *(longlong *)(DAT_14cb44450 + 8 + (longlong)(int)uVar2 * 0x18);
      local_6c = iVar15;
      FUN_14012e468(&local_60,0x10,1,0);
      uVar10 = (ulonglong)local_50;
      if ((-1 < (int)local_50) && ((int)local_50 < local_58)) {
        do {
          FUN_14043807e(*(undefined8 *)(local_60 + (uVar10 & 0xffffffff) * 8),1);
          uVar10 = (longlong)(int)local_50;
          do {
            uVar13 = uVar10;
            uVar10 = uVar13 + 1;
            local_50 = (uint)uVar10;
            if ((longlong)local_58 <= (longlong)uVar10) break;
          } while (*(longlong *)(local_60 + uVar10 * 8) == 0);
        } while ((-2 < (longlong)uVar13) && ((int)local_50 < local_58));
      }
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      iVar15 = *(int *)(lVar11 + 0x1bc8);
      if (iVar15 == 0) {
        uVar13 = 1;
        uVar10 = 0;
        iVar14 = 0;
        iVar4 = 0;
      }
      else {
        puVar12 = *(uint **)(lVar11 + 0x1bc0);
        if (*(uint **)(lVar11 + 0x1bc0) == (uint *)0x0) {
          puVar12 = (uint *)(lVar11 + 0x1bb0);
        }
        uVar2 = *puVar12;
        if (uVar2 == 0) {
          iVar14 = iVar15 + 0x1e;
          if (-1 < iVar15 + -1) {
            iVar14 = iVar15 + -1;
          }
          uVar10 = 0;
          uVar13 = (ulonglong)(uint)(iVar14 >> 5);
          if (iVar14 >> 5 < 1) {
            uVar13 = uVar10;
          }
          iVar4 = 0;
          do {
            if (uVar13 == uVar10) goto LAB_14183babf;
            iVar4 = iVar4 + 0x20;
            uVar2 = puVar12[uVar10 + 1];
            uVar10 = uVar10 + 1;
          } while (uVar2 == 0);
        }
        else {
          uVar10 = 0;
          iVar4 = 0;
        }
        uVar13 = (ulonglong)(-uVar2 & uVar2);
        uVar1 = uVar13 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar14 = (iVar4 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (iVar15 <= iVar14) {
          iVar14 = iVar15;
        }
      }
      if (iVar14 != iVar15) {
        uVar2 = 0xffffffff;
        do {
          *(undefined1 *)(*(longlong *)(lVar11 + 0x1ba0) + 0x98 + (longlong)iVar14 * 0xf0) = 1;
          uVar2 = ~(uint)uVar13 & uVar2;
          puVar12 = *(uint **)(lVar11 + 0x1bc0);
          if (*(uint **)(lVar11 + 0x1bc0) == (uint *)0x0) {
            puVar12 = (uint *)(lVar11 + 0x1bb0);
          }
          iVar3 = *(int *)(lVar11 + 0x1bc8);
          iVar14 = (int)uVar10;
          lVar16 = (longlong)iVar14;
          uVar6 = puVar12[lVar16] & uVar2;
          if (uVar6 == 0) {
            iVar7 = iVar3 + 0x1e;
            if (-1 < iVar3 + -1) {
              iVar7 = iVar3 + -1;
            }
            iVar7 = iVar7 >> 5;
            iVar4 = iVar4 + 0x20;
            iVar8 = iVar7;
            if (iVar7 < iVar14) {
              iVar8 = iVar14;
            }
            if (iVar14 < iVar7) {
              lVar9 = 0;
              do {
                uVar6 = puVar12[lVar16 + lVar9 + 1];
                if (uVar6 != 0) {
                  uVar10 = (ulonglong)(iVar14 + (int)lVar9 + 1);
                  uVar2 = 0xffffffff;
                  goto LAB_14183ba8a;
                }
                iVar4 = iVar4 + 0x20;
                lVar9 = lVar9 + 1;
              } while (iVar8 - lVar16 != lVar9);
              uVar2 = 0xffffffff;
              iVar14 = iVar8;
            }
            uVar10 = (ulonglong)(iVar14 + 1);
            iVar14 = iVar3;
          }
          else {
LAB_14183ba8a:
            uVar13 = (ulonglong)(-uVar6 & uVar6);
            uVar1 = uVar13 * 2 + 1;
            lVar16 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
              }
            }
            iVar14 = (iVar4 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
            if (iVar3 <= iVar14) {
              iVar14 = iVar3;
            }
          }
        } while (iVar14 != iVar15);
      }
LAB_14183babf:
      uVar5 = uVar5 & ~(uint)uVar18;
      puVar12 = DAT_14cb44470;
      if (DAT_14cb44470 == (uint *)0x0) {
        puVar12 = &DAT_14cb44460;
      }
      iVar14 = (int)uVar17;
      lVar11 = (longlong)iVar14;
      uVar2 = puVar12[lVar11] & uVar5;
      iVar15 = local_6c;
      if (uVar2 == 0) {
        iVar4 = DAT_14cb44478 + 0x1e;
        if (-1 < (int)(DAT_14cb44478 - 1)) {
          iVar4 = DAT_14cb44478 - 1;
        }
        iVar4 = iVar4 >> 5;
        iVar15 = local_6c + 0x20;
        iVar3 = iVar4;
        if (iVar4 < iVar14) {
          iVar3 = iVar14;
        }
        if (iVar14 < iVar4) {
          lVar16 = 0;
          do {
            uVar2 = puVar12[lVar11 + lVar16 + 1];
            if (uVar2 != 0) {
              uVar17 = (ulonglong)(iVar14 + (int)lVar16 + 1);
              uVar5 = 0xffffffff;
              goto LAB_14183bb40;
            }
            iVar15 = iVar15 + 0x20;
            lVar16 = lVar16 + 1;
          } while (iVar3 - lVar11 != lVar16);
          uVar5 = 0xffffffff;
          iVar14 = iVar3;
        }
        uVar17 = (ulonglong)(iVar14 + 1);
        uVar2 = DAT_14cb44478;
      }
      else {
LAB_14183bb40:
        uVar18 = (ulonglong)(-uVar2 & uVar2);
        uVar10 = uVar18 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar2 = (iVar15 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if ((int)DAT_14cb44478 <= (int)uVar2) {
          uVar2 = DAT_14cb44478;
        }
      }
    } while (uVar2 != (uint)local_68);
  }
LAB_14183bb9b:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14183bc2e FUN_14183bc2e body=92 status=ok
// SIG undefined FUN_14183bc2e(void)

void FUN_14183bc2e(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x218), plVar2 != (longlong *)0x0)) {
    puVar1 = (undefined8 *)(**(code **)(*plVar2 + 0x420))();
    if (puVar1 != (undefined8 *)0x0) {
      plVar2 = (longlong *)(**(code **)*puVar1)(puVar1,&DAT_14cb3e918);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0xf0 + (param_2 & 0xff) * 8))(plVar2);
      }
    }
  }
  FUN_14013f7bc();
  return;
}



// FUNCTION 14183bc8a FUN_14183bc8a body=47 status=ok
// SIG undefined FUN_14183bc8a(void)

void FUN_14183bc8a(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = 0;
  uVar1 = FUN_144830b78(param_2 + 1,&DAT_14cb42160);
  *(undefined4 *)(param_2 + 1) = uVar1;
  param_2[2] = 0;
  param_2[3] = 0;
  return;
}



// FUNCTION 14183bcba FUN_14183bcba body=263 status=ok
// SIG undefined FUN_14183bcba(void)

void FUN_14183bcba(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar11 = 0;
    bVar7 = *plVar2 == *(longlong *)*param_2;
    iVar4 = 0;
    do {
      lVar9 = (longlong)iVar4;
      iVar12 = iVar4 + 1;
      if (iVar4 + 1 < iVar1) {
        iVar12 = iVar1;
      }
      plVar8 = plVar2 + lVar9 * 2 + 2;
      iVar5 = iVar4;
      lVar10 = lVar9;
      do {
        lVar10 = lVar10 + 1;
        iVar6 = iVar12;
        if (lVar13 <= lVar10) break;
        lVar3 = *plVar8;
        iVar5 = iVar5 + 1;
        plVar8 = plVar8 + 2;
        iVar6 = iVar5;
      } while (bVar7 == (lVar3 == *(longlong *)*param_2));
      iVar12 = iVar6 - iVar4;
      if (bVar7 == false) {
        if (iVar11 != iVar4) {
          memmove(plVar2 + (longlong)iVar11 * 2,plVar2 + lVar9 * 2,(longlong)iVar12 << 4);
        }
        iVar11 = iVar11 + iVar12;
      }
      else {
        FUN_144846cc9(plVar2 + lVar9 * 2,iVar12);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar6;
    } while (lVar10 < lVar13);
    *(int *)(param_1 + 1) = iVar11;
  }
  return;
}



// FUNCTION 14183bdc1 FUN_14183bdc1 body=58 status=ok
// SIG undefined FUN_14183bdc1(void)

void FUN_14183bdc1(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140751bbe(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ae30620;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  *(undefined1 *)(puVar1 + 0xe) = 0;
  return;
}



// FUNCTION 14183bdfb FUN_14183bdfb body=99 status=ok
// SIG undefined FUN_14183bdfb(void)

void FUN_14183bdfb(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_1402309ae(puVar1,uVar2);
  *puVar1 = &PTR_FUN_14ae31510;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xc4) = 0;
  *(byte *)(puVar1 + 0x18) = *(byte *)(puVar1 + 0x18) | 1;
  puVar1[0xe] = 0x3ff0000000000000;
  puVar1[0xf] = 0x3ff0000000000000;
  puVar1[0x10] = 0x3ff0000000000000;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  puVar1[0x12] = 0;
  return;
}



// FUNCTION 14183be5e FUN_14183be5e body=440 status=ok
// SIG undefined FUN_14183be5e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14183be5e(longlong param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  double _X;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  switchD_143c3d4dc::caseD_1b();
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x58);
  auVar9 = divpd(auVar1,_DAT_1499387d0);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = *(double *)(param_1 + 0x68);
  auVar10 = divpd(auVar10,_DAT_1499387d0);
  auVar9 = roundpd(auVar9,auVar9,3);
  auVar10 = roundpd(auVar10,auVar10,3);
  dVar6 = (auVar1._0_8_ - auVar9._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar7 = (auVar1._8_8_ - auVar9._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar2 = (*(double *)(param_1 + 0x68) - auVar10._0_8_ * (double)DAT_1499387d0) *
          0.008726646259971648;
  _X = (0.0 - auVar10._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar3 = sin(dVar6);
  dVar4 = sin(dVar7);
  dVar5 = sin(dVar2);
  sin(_X);
  dVar6 = cos(dVar6);
  dVar7 = cos(dVar7);
  dVar8 = cos(dVar2);
  cos(_X);
  dVar2 = dVar4 * dVar3 * dVar5 + dVar7 * dVar6 * dVar8;
  *(double *)(param_1 + 0xa0) = dVar3 * dVar4 * dVar8 - dVar6 * dVar7 * dVar5;
  *(double *)(param_1 + 0xa8) = -(dVar3 * dVar7 * dVar8) - dVar6 * dVar4 * dVar5;
  auVar1._8_4_ = SUB84(dVar2,0);
  auVar1._0_8_ = -(dVar7 * dVar3 * dVar5) + dVar4 * dVar6 * dVar8;
  auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0xb0) = auVar1;
  return;
}



// FUNCTION 14183c016 FUN_14183c016 body=40 status=ok
// SIG undefined FUN_14183c016(void)

undefined8 FUN_14183c016(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14183c03e FUN_14183c03e body=40 status=ok
// SIG undefined FUN_14183c03e(void)

undefined8 FUN_14183c03e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14183c066 FUN_14183c066 body=49 status=ok
// SIG undefined FUN_14183c066(void)

longlong FUN_14183c066(void)

{
  if (DAT_14cb445f8 == 0) {
    FUN_14086a14e(&DAT_14cb445f8,&PTR_FUN_14ae33f20);
  }
  return DAT_14cb445f8;
}



// FUNCTION 14183c097 FUN_14183c097 body=173 status=ok
// SIG undefined FUN_14183c097(void)

void FUN_14183c097(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400ea892(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ae36100;
  puVar1[5] = &PTR_FUN_14ae36b80;
  puVar1[6] = &PTR_LAB_14ae36bc0;
  puVar1[0x55] = &PTR_FUN_14ae36c10;
  puVar1[0x56] = &PTR_FUN_14ae36c90;
  puVar1[0x57] = &PTR_FUN_14ae36ca0;
  puVar1[0xca] = &PTR_FUN_14ae36cd0;
  puVar1[0xcc] = 0;
  puVar1[0xcd] = 0;
  puVar1[0xce] = 0;
  puVar1[0xcf] = 0;
  puVar1[0xd0] = 0;
  puVar1[0xd8] = 0;
  puVar1[0xd9] = 0;
  puVar1[0xda] = 0;
  puVar1[0xdb] = 0;
  puVar1[0xdc] = 2;
  *(undefined1 *)(puVar1 + 0xcb) = 1;
  return;
}



// FUNCTION 14183c144 FUN_14183c144 body=80 status=ok
// SIG undefined FUN_14183c144(void)

void FUN_14183c144(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_144842962();
  if (param_1 != (longlong *)0x0) {
    plVar2 = param_1;
    plVar1 = (longlong *)param_1[0xcc];
    while (plVar1 != (longlong *)0x0) {
      if ((*(uint *)(plVar2 + 1) & 0x30) != 0) {
        FUN_144757f48((longlong *)param_1[0xcc],0x21);
        break;
      }
      plVar2 = (longlong *)plVar2[4];
      plVar1 = plVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014183c181. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x310))(param_1);
  return;
}



// FUNCTION 14183c194 FUN_14183c194 body=427 status=ok
// SIG undefined FUN_14183c194(void)

void FUN_14183c194(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  if ((longlong)(int)param_1[0xce] != 0) {
    lVar2 = param_1[0xcd];
    dVar7 = 0.0;
    lVar3 = 0;
    dVar11 = 0.0;
    dVar10 = 0.0;
    dVar5 = 0.0;
    dVar6 = 0.0;
    dVar8 = 0.0;
    cVar4 = '\0';
    do {
      cVar1 = *(char *)(lVar2 + 0x50 + lVar3);
      if (cVar1 == '\0' || cVar4 == '\0') {
        if (cVar1 != '\0') {
          dVar7 = *(double *)(lVar2 + 0x20 + lVar3);
          dVar11 = *(double *)(lVar2 + 0x28 + lVar3);
          dVar10 = *(double *)(lVar2 + 0x30 + lVar3);
          dVar5 = *(double *)(lVar2 + 0x38 + lVar3);
          dVar6 = *(double *)(lVar2 + 0x40 + lVar3);
          dVar8 = *(double *)(lVar2 + 0x48 + lVar3);
          cVar4 = cVar1;
        }
      }
      else {
        dVar9 = *(double *)(lVar2 + 0x20 + lVar3);
        if (dVar9 <= dVar7) {
          dVar7 = dVar9;
        }
        dVar9 = *(double *)(lVar2 + 0x28 + lVar3);
        if (dVar9 <= dVar11) {
          dVar11 = dVar9;
        }
        dVar9 = *(double *)(lVar2 + 0x30 + lVar3);
        if (dVar9 <= dVar10) {
          dVar10 = dVar9;
        }
        dVar9 = *(double *)(lVar2 + 0x38 + lVar3);
        if (dVar5 <= dVar9) {
          dVar5 = dVar9;
        }
        dVar9 = *(double *)(lVar2 + 0x40 + lVar3);
        if (dVar6 <= dVar9) {
          dVar6 = dVar9;
        }
        dVar9 = *(double *)(lVar2 + 0x48 + lVar3);
        if (dVar8 <= dVar9) {
          dVar8 = dVar9;
        }
      }
      lVar3 = lVar3 + 0x60;
    } while ((longlong)(int)param_1[0xce] * 0x60 != lVar3);
    if (cVar4 != '\0') {
      dVar9 = (dVar8 - dVar10) * 0.5;
      dVar8 = (dVar6 - dVar11) * 0.5;
      dVar6 = (dVar5 - dVar7) * 0.5;
      dVar5 = SQRT(dVar9 * dVar9 + dVar6 * dVar6 + dVar8 * dVar8);
      dVar7 = dVar7 + dVar6;
      dVar10 = dVar10 + dVar9;
      dVar11 = dVar11 + dVar8;
      goto LAB_14183c28e;
    }
  }
  dVar5 = 0.0;
  dVar6 = DAT_14c8464e0;
  dVar8 = DAT_14c8464e8;
  dVar7 = DAT_14c8464e0;
  dVar9 = DAT_14c8464f0;
  dVar10 = DAT_14c8464f0;
  dVar11 = DAT_14c8464e8;
LAB_14183c28e:
  param_1[0xd1] = (longlong)dVar7;
  param_1[0xd2] = (longlong)dVar11;
  param_1[0xd3] = (longlong)dVar10;
  param_1[0xd4] = (longlong)dVar6;
  param_1[0xd5] = (longlong)dVar8;
  param_1[0xd6] = (longlong)dVar9;
  param_1[0xd7] = (longlong)dVar5;
  (**(code **)(*param_1 + 0x540))(param_1);
  FUN_1448c69c8(param_1);
  return;
}



// FUNCTION 14183c340 FUN_14183c340 body=414 status=ok
// SIG undefined FUN_14183c340(void)

void FUN_14183c340(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  
  if (((((DAT_14cae9ea1 & 0x40) != 0) && (1 < (longlong)DAT_14c760db4)) &&
      ((*(byte *)((longlong)&DAT_14ca814d0 +
                 (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 0x3c + 6) &
       0x10) != 0)) && (lVar3 = param_1[0xce], 0 < (int)lVar3)) {
    iVar10 = 0;
    do {
      iVar1 = *(int *)(param_3 + 0x128);
      *(uint *)(param_3 + 0x128) = iVar1 + 1U;
      if (*(uint *)(param_3 + 300) < iVar1 + 1U) {
        FUN_1401acddc(param_3,iVar1);
      }
      lVar9 = *(longlong *)(param_3 + 0x120);
      if (*(longlong *)(param_3 + 0x120) == 0) {
        lVar9 = param_3;
      }
      lVar2 = (longlong)iVar1 * 0x48;
      FUN_1447244c4(lVar9 + lVar2,1);
      lVar9 = *(longlong *)(param_3 + 0x120);
      if (*(longlong *)(param_3 + 0x120) == 0) {
        lVar9 = param_3;
      }
      uVar4 = (**(code **)(*param_1 + 0x610))(param_1);
      lVar8 = lVar2 + lVar9;
      lVar11 = lVar8 + 0x18;
      *(undefined8 *)(lVar8 + 8) = uVar4;
      *(undefined8 *)(lVar8 + 0x10) = *param_2;
      lVar5 = *(longlong *)(lVar8 + 0x38);
      lVar6 = lVar5;
      if (lVar5 == 0) {
        lVar6 = lVar11;
      }
      iVar1 = *(int *)(lVar8 + 0x40);
      lVar8 = (longlong)iVar1;
      if (lVar8 != 0) {
        uVar7 = 0;
        do {
          if ((*(undefined **)(lVar6 + uVar7) == &DAT_14cae9e78) &&
             (*(longlong *)(lVar6 + 8 + uVar7) == 0)) {
            if ((int)(~uVar7 >> 4) != 0) goto LAB_14183c464;
            break;
          }
          uVar7 = uVar7 + 0x10;
        } while (lVar8 << 4 != uVar7);
      }
      lVar9 = lVar9 + lVar2;
      *(uint *)(lVar9 + 0x40) = iVar1 + 1U;
      if (*(uint *)(lVar9 + 0x44) < iVar1 + 1U) {
        FUN_140df0cf8(lVar11,iVar1);
        lVar5 = *(longlong *)(lVar9 + 0x38);
      }
      if (lVar5 != 0) {
        lVar11 = lVar5;
      }
      *(undefined **)(lVar11 + lVar8 * 0x10) = &DAT_14cae9e78;
      *(undefined8 *)(lVar11 + 8 + lVar8 * 0x10) = 0;
LAB_14183c464:
      iVar10 = iVar10 + 1;
    } while (iVar10 != (int)lVar3);
  }
  return;
}



// FUNCTION 14183c4de FUN_14183c4de body=353 status=ok
// SIG undefined FUN_14183c4de(void)

void FUN_14183c4de(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14183c563;
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
LAB_14183c563:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14183c640 FUN_14183c640 body=369 status=ok
// SIG undefined FUN_14183c640(void)

void FUN_14183c640(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x98;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14183c6c8;
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
LAB_14183c6c8:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x98)) {
    uVar7 = uVar5 / 0x98 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x98,8);
  return;
}



// FUNCTION 14183c7b2 FUN_14183c7b2 body=629 status=ok
// SIG undefined FUN_14183c7b2(void)

undefined8 FUN_14183c7b2(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  longlong local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(undefined1 *)(param_2 + 0x28);
  if (*(int *)(param_2 + 0x20) == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = *(undefined2 **)(param_2 + 0x18);
  }
  FUN_140002266(&local_58,&DAT_149e99620,puVar6);
  local_98 = uVar1;
  (**(code **)(*param_1 + 0x48))(param_1,&local_48,&local_58,param_2 + 8);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_144a06ecc(&local_58,&local_48);
  iVar3 = local_50 + -1;
  if (local_50 == 0) {
    iVar3 = 0;
  }
  iVar8 = local_40 + -1;
  puVar6 = local_48;
  if (local_40 == 0) {
    iVar8 = 0;
    puVar6 = &DAT_149dfb77a;
  }
  iVar5 = iVar8 - iVar3;
  if (iVar8 <= iVar8 - iVar3) {
    iVar5 = iVar8;
  }
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  FUN_14006620a(&local_68,puVar6,iVar5);
  FUN_144a06df0(&local_78,&local_58,1);
  iVar3 = *(int *)((longlong)param_3 + 0xc);
  FUN_1447a1747(*param_3,(int)param_3[1]);
  *(undefined4 *)(param_3 + 1) = 0;
  if ((iVar3 < 0) && (*(int *)((longlong)param_3 + 0xc) != 0)) {
    FUN_1408be2c4(param_3,0);
  }
  plVar2 = (longlong *)FUN_140e92164();
  puVar6 = &DAT_149dfb77a;
  if (local_70 != 0) {
    puVar6 = local_78;
  }
  puVar7 = &DAT_149dfb77a;
  if (local_60 != 0) {
    puVar7 = local_68;
  }
  (**(code **)(*plVar2 + 0x1c0))(plVar2,param_3,puVar7,puVar6);
  if ((longlong)(int)param_3[1] != 0) {
    plVar2 = (longlong *)*param_3;
    lVar9 = (longlong)(int)param_3[1] << 4;
    do {
      FUN_144a06ecc(&local_88,plVar2);
      if (plVar2 == &local_88) {
        if (local_88 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*plVar2 != 0) {
          FUN_1400020a8();
        }
        *plVar2 = local_88;
        local_88 = 0;
        *(undefined4 *)(plVar2 + 1) = local_80;
        *(undefined4 *)((longlong)plVar2 + 0xc) = local_7c;
      }
      plVar2 = plVar2 + 2;
      lVar9 = lVar9 + -0x10;
    } while (lVar9 != 0);
  }
  if ((*(char *)(param_2 + 0x28) == '\0') && ((longlong)(int)param_3[1] != 0)) {
    lVar9 = *param_3;
    lVar4 = (longlong)(int)param_3[1] << 4;
    do {
      FUN_140b127b8(lVar9,L".sav",4,1);
      lVar9 = lVar9 + 0x10;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14183ca28 FUN_14183ca28 body=49 status=ok
// SIG undefined FUN_14183ca28(void)

longlong FUN_14183ca28(void)

{
  if (DAT_14cb44750 == 0) {
    FUN_1409ce572(&DAT_14cb44750,&PTR_FUN_14ae37f90);
  }
  return DAT_14cb44750;
}



// FUNCTION 14183ca5a FUN_14183ca5a body=41 status=ok
// SIG undefined FUN_14183ca5a(void)

void FUN_14183ca5a(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_140ca8f8e(param_2 + 4);
  *(undefined1 *)((longlong)param_2 + 0x3c) = 3;
  return;
}



// FUNCTION 14183ca83 FUN_14183ca83 body=49 status=ok
// SIG undefined FUN_14183ca83(void)

longlong FUN_14183ca83(void)

{
  if (DAT_14cb44c58 == 0) {
    FUN_14073dd9a(&DAT_14cb44c58,&PTR_LAB_14ae41dd0);
  }
  return DAT_14cb44c58;
}



// FUNCTION 14183cab4 FUN_14183cab4 body=49 status=ok
// SIG undefined FUN_14183cab4(void)

longlong FUN_14183cab4(void)

{
  if (DAT_14cb45168 == 0) {
    FUN_14073dd9a(&DAT_14cb45168,&PTR_LAB_14ae4aec0);
  }
  return DAT_14cb45168;
}



// FUNCTION 14183cae6 FUN_14183cae6 body=732 status=ok
// SIG undefined FUN_14183cae6(void)

void FUN_14183cae6(longlong param_1,undefined4 param_2,undefined8 *param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118;
  longlong local_110;
  int local_104;
  undefined1 local_100 [8];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e0;
  undefined1 local_d8 [136];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (DAT_14c9670a0 == (longlong *)0x0) {
    plVar5 = (longlong *)FUN_14001cc68(0x78,0x10);
    FUN_14593912e(plVar5,1,1);
    DAT_14c9670a0 = plVar5;
  }
  (**(code **)(*DAT_14c9670a0 + 0x58))(DAT_14c9670a0,&local_104);
  lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (lVar4 != 0) {
    lVar6 = 0;
    do {
      lVar7 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x38) + lVar6);
      if ((lVar7 != 0) && (*(int *)(lVar7 + 0x100) == local_104)) goto LAB_14183cb7e;
      lVar6 = lVar6 + 8;
    } while (lVar4 * 8 != lVar6);
  }
  lVar7 = 0;
LAB_14183cb7e:
  local_100[0] = 0;
  local_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  memset(local_d8,0,0x88);
  local_50 = 0x20702;
  FUN_1403d4924(param_5,local_100);
  FUN_14493db24(local_100);
  if (lVar7 != 0) {
    plVar5 = (longlong *)FUN_1403f18c8(lVar7);
    if (plVar5 != (longlong *)0x0) {
      local_120 = *param_3;
      local_118 = param_3[1];
      local_110 = param_3[2];
      if (local_110 != 0) {
        LOCK();
        *(int *)(local_110 + 8) = *(int *)(local_110 + 8) + 1;
        UNLOCK();
      }
      cVar3 = (**(code **)(*plVar5 + 0x2d0))(plVar5,&local_120,param_4);
      if (cVar3 == '\0') {
        local_100[0] = 1;
        local_e0 = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        memset(local_d8,0,0x88);
        local_50 = CONCAT35(local_50._5_3_,0x20702);
        FUN_1403d4924(param_5,local_100);
        FUN_14493db24(local_100);
      }
      else if (cVar3 == '\x01') {
        local_100[0] = 1;
        local_e0 = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        memset(local_d8,0,0x88);
        local_50 = CONCAT35(local_50._5_3_,0x20702);
        FUN_1403d4924(param_5,local_100);
        FUN_14493db24(local_100);
        local_138 = *param_3;
        local_130 = param_3[1];
        local_128 = param_3[2];
        if (local_128 != 0) {
          LOCK();
          *(int *)(local_128 + 8) = *(int *)(local_128 + 8) + 1;
          UNLOCK();
        }
        local_148 = param_5;
        FUN_143ae88ba(param_1 + 0x400,param_2,&local_138,param_4);
      }
    }
  }
  plVar5 = (longlong *)param_3[2];
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
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14183cdc3 FUN_14183cdc3 body=49 status=ok
// SIG undefined FUN_14183cdc3(void)

longlong FUN_14183cdc3(void)

{
  if (DAT_14cb457a8 == 0) {
    FUN_14073dd9a(&DAT_14cb457a8,&PTR_LAB_14ae561a0);
  }
  return DAT_14cb457a8;
}



// FUNCTION 14183cdf4 FUN_14183cdf4 body=49 status=ok
// SIG undefined FUN_14183cdf4(void)

longlong FUN_14183cdf4(void)

{
  if (DAT_14cb45e40 == 0) {
    FUN_14073dd9a(&DAT_14cb45e40,&PTR_LAB_14ae5e1c0);
  }
  return DAT_14cb45e40;
}



// FUNCTION 14183ce25 FUN_14183ce25 body=49 status=ok
// SIG undefined FUN_14183ce25(void)

longlong FUN_14183ce25(void)

{
  if (DAT_14cb46070 == 0) {
    FUN_14073dd9a(&DAT_14cb46070,&PTR_LAB_14ae62d20);
  }
  return DAT_14cb46070;
}



// FUNCTION 14183ce56 FUN_14183ce56 body=197 status=ok
// SIG undefined FUN_14183ce56(void)

void FUN_14183ce56(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140312256(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ae799c0;
  puVar1[0x76] = 0;
  *(undefined4 *)(puVar1 + 0x77) = 0;
  puVar1[0x72] = 0;
  puVar1[0x73] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x3bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x3c4) = 0;
  puVar1[0x7a] = 0;
  *(undefined4 *)(puVar1 + 0x7b) = 0;
  puVar1[0x8f] = 0;
  *(undefined4 *)(puVar1 + 0x90) = 0;
  puVar1[0x7c] = 0;
  puVar1[0x7d] = 0;
  puVar1[0x7e] = 0;
  puVar1[0x7f] = 0;
  puVar1[0x80] = 0;
  puVar1[0x81] = 0;
  puVar1[0x84] = 0;
  puVar1[0x85] = 0;
  puVar1[0x86] = 0;
  puVar1[0x87] = 0;
  puVar1[0x88] = 0;
  puVar1[0x89] = 0;
  puVar1[0x8a] = 0;
  puVar1[0x8b] = 0;
  puVar1[0x8c] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x484) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x48c) = 0;
  puVar1[0x93] = 0;
  *(undefined4 *)(puVar1 + 0x94) = 0;
  *(undefined4 *)(puVar1 + 0x83) = 0;
  return;
}



// FUNCTION 14183cf1b FUN_14183cf1b body=138 status=ok
// SIG undefined FUN_14183cf1b(void)

void FUN_14183cf1b(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14480568a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ae7c5a0;
  puVar1[5] = &PTR_FUN_14ae7cfa0;
  puVar1[6] = &PTR_LAB_14ae7cfe0;
  puVar1[0x55] = &PTR_FUN_14ae7d030;
  puVar1[0x56] = &PTR_FUN_14ae7d0b0;
  puVar1[0x57] = &PTR_FUN_14ae7d0c0;
  puVar1[0xc4] = 0;
  *(byte *)((longlong)puVar1 + 0x1f9) = *(byte *)((longlong)puVar1 + 0x1f9) | 8;
  *(byte *)((longlong)puVar1 + 0x2d6) = *(byte *)((longlong)puVar1 + 0x2d6) & 0xbf;
  *(byte *)((longlong)puVar1 + 0x2d2) = *(byte *)((longlong)puVar1 + 0x2d2) | 0x80;
  *(byte *)((longlong)puVar1 + 0x2de) = *(byte *)((longlong)puVar1 + 0x2de) | 0x10;
  return;
}



// FUNCTION 14183cfa5 FUN_14183cfa5 body=49 status=ok
// SIG undefined FUN_14183cfa5(void)

longlong FUN_14183cfa5(void)

{
  if (DAT_14cb46ed0 == 0) {
    FUN_14073dd9a(&DAT_14cb46ed0,&PTR_LAB_14ae80ae0);
  }
  return DAT_14cb46ed0;
}



// FUNCTION 14183cfd6 FUN_14183cfd6 body=69 status=ok
// SIG undefined FUN_14183cfd6(void)

void FUN_14183cfd6(longlong *param_1,longlong *param_2)

{
  FUN_1402d084a();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14aea0ec0);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014183d00c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x640))(param_1);
    return;
  }
  return;
}



// FUNCTION 14183d01c FUN_14183d01c body=233 status=ok
// SIG undefined FUN_14183d01c(void)

void FUN_14183d01c(longlong param_1)

{
  longlong *plVar1;
  
  *(byte *)(param_1 + 100) = *(byte *)(param_1 + 100) | 0x40;
  FUN_14092e51e(param_1,*(undefined8 *)(param_1 + 0x3a8));
  plVar1 = *(longlong **)(param_1 + 0x398);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x490))(plVar1,*(undefined8 *)(param_1 + 0x3a8),&DAT_14cadad98,0);
  }
  plVar1 = *(longlong **)(param_1 + 0x3c0);
  if ((plVar1 != (longlong *)0x0) && ((*(uint *)(plVar1 + 1) >> 0x1e & 1) == 0)) {
    (**(code **)(*plVar1 + 0x588))(plVar1,*(undefined1 *)(*(longlong *)(param_1 + 0x3a8) + 0x1fb));
    (**(code **)(**(longlong **)(param_1 + 0x3c0) + 0x490))
              (*(longlong **)(param_1 + 0x3c0),*(undefined8 *)(param_1 + 0x3a8),&DAT_14cad8330,0);
  }
  plVar1 = *(longlong **)(param_1 + 0x3c8);
  if ((plVar1 != (longlong *)0x0) && ((*(uint *)(plVar1 + 1) >> 0x1e & 1) == 0)) {
    (**(code **)(*plVar1 + 0x588))(plVar1,*(undefined1 *)(*(longlong *)(param_1 + 0x3a8) + 0x1fb));
                    /* WARNING: Could not recover jumptable at 0x00014183d102. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x3c8) + 0x490))
              (*(longlong **)(param_1 + 0x3c8),*(undefined8 *)(param_1 + 0x3a8),&DAT_14cad8330,0);
    return;
  }
  return;
}



// FUNCTION 14183d106 FUN_14183d106 body=349 status=ok
// SIG undefined FUN_14183d106(void)

void FUN_14183d106(longlong *param_1,code *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cac9ac0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if (DAT_14cb46bc0 == (code *)0x0) {
    local_28 = FUN_144a7958c;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_143242436;
    local_48 = &LAB_1483dd3b9;
    local_50 = &LAB_145e18341;
    local_58 = &DAT_149e063b2;
    local_60 = 0;
    local_68 = 0x10000004;
    local_70 = 8;
    local_78 = 0x278;
    local_40 = &local_28;
    FUN_14081cfa3(L"/Script/Water",L"BuoyancyComponent",&DAT_14cb46bc0,FUN_146485e60);
  }
  local_28 = DAT_14cb46bc0;
  if ((DAT_14cb46bc0 != (code *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  lVar2 = (**(code **)(*(longlong *)param_2 + 0x598))(param_2,&local_28);
  if (lVar2 != 0) {
    FUN_1483de794(lVar2,param_1[0x75]);
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14183d264 FUN_14183d264 body=349 status=ok
// SIG undefined FUN_14183d264(void)

void FUN_14183d264(longlong *param_1,code *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cac9ae0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if (DAT_14cb46bc0 == (code *)0x0) {
    local_28 = FUN_144a7958c;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_143242436;
    local_48 = &LAB_1483dd3b9;
    local_50 = &LAB_145e18341;
    local_58 = &DAT_149e063b2;
    local_60 = 0;
    local_68 = 0x10000004;
    local_70 = 8;
    local_78 = 0x278;
    local_40 = &local_28;
    FUN_14081cfa3(L"/Script/Water",L"BuoyancyComponent",&DAT_14cb46bc0,FUN_146485e60);
  }
  local_28 = DAT_14cb46bc0;
  if ((DAT_14cb46bc0 != (code *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  lVar2 = (**(code **)(*(longlong *)param_2 + 0x598))(param_2,&local_28);
  if (lVar2 != 0) {
    FUN_1483de8a2(lVar2,param_1[0x75]);
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14183d3c2 FUN_14183d3c2 body=31 status=ok
// SIG undefined FUN_14183d3c2(void)

void FUN_14183d3c2(longlong *param_1)

{
  FUN_1401b2056();
                    /* WARNING: Could not recover jumptable at 0x00014183d3da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x640))(param_1);
  return;
}



// FUNCTION 14183d3e1 FUN_14183d3e1 body=49 status=ok
// SIG undefined FUN_14183d3e1(void)

longlong FUN_14183d3e1(void)

{
  if (DAT_14cb46fe0 == 0) {
    FUN_14073dd9a(&DAT_14cb46fe0,&PTR_LAB_14ae83d20);
  }
  return DAT_14cb46fe0;
}



// FUNCTION 14183d412 FUN_14183d412 body=60 status=ok
// SIG undefined FUN_14183d412(void)

void FUN_14183d412(undefined8 param_1,longlong *param_2)

{
  FUN_1448284b2();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14aea0ec0);
                    /* WARNING: Could not recover jumptable at 0x00014183d44b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  return;
}



// FUNCTION 14183d44e FUN_14183d44e body=412 status=ok
// SIG undefined FUN_14183d44e(void)

void FUN_14183d44e(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  float fVar4;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  undefined8 local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    if (DAT_14cb46ec8 == 0) {
      local_60 = &local_38;
      local_38 = FUN_141030f22;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_142b4754c;
      local_68 = &LAB_1483e40eb;
      local_70 = &LAB_146486986;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10000005;
      local_90 = 8;
      local_98 = 0x420;
      FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
    }
    if (((*(int *)(DAT_14cb46ec8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8) == DAT_14cb46ec8 + 0x30)) &&
       (plVar2 = *(longlong **)(lVar1 + 0x398), plVar2 != (longlong *)0x0)) {
      FUN_1446f470e(&local_40,L"Depth",1);
      uVar3 = (**(code **)(*plVar2 + 0x9f8))(plVar2);
      fVar4 = (float)FUN_140633f37(uVar3,0,local_40);
      if ((fVar4 != 0.0) || (NAN(fVar4))) goto LAB_14183d50d;
    }
  }
  fVar4 = (float)*(double *)(param_1 + 0x19a8);
LAB_14183d50d:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar4);
}



// FUNCTION 14183d5ec FUN_14183d5ec body=608 status=ok
// SIG undefined FUN_14183d5ec(void)

double * FUN_14183d5ec(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  longlong lVar7;
  double *pdVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_c8 [40];
  double local_a0;
  double local_98;
  double local_88;
  double local_80;
  double local_68;
  int local_60;
  uint local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar1 = (uint *)(param_1 + 0x1080);
  iVar6 = *(int *)(param_1 + 0x1084);
  if (((iVar6 == 0) || (uVar2 = *puVar1, (int)uVar2 < 0)) || (DAT_14c9647dc <= (int)uVar2)) {
LAB_14183d6fe:
    dVar4 = *(double *)(param_1 + 0x260);
    dVar5 = *(double *)(param_1 + 0x268);
    pdVar8 = &local_68;
    bVar3 = true;
    FUN_141141646(pdVar8,0x10,1,0);
    uVar11 = (ulonglong)local_58;
    if ((-1 < (int)local_58) && ((int)local_58 < local_60)) {
      pdVar8 = &local_a0;
      do {
        lVar7 = FUN_1447210f0(*(undefined8 *)((longlong)local_68 + (uVar11 & 0xffffffff) * 8));
        lVar9 = *(longlong *)(param_1 + 0xb0);
        if (lVar9 == 0) {
          lVar9 = FUN_1448abda6(param_1);
        }
        if (lVar7 == lVar9) {
          plVar10 = *(longlong **)((longlong)local_68 + (longlong)(int)local_58 * 8);
          (**(code **)(*plVar10 + 0x520))(plVar10,pdVar8,0,0);
          if ((((local_a0 <= dVar4) && (dVar4 <= local_88)) && (local_98 <= dVar5)) &&
             (dVar5 <= local_80)) {
            FUN_14485c47a(puVar1,*(undefined8 *)((longlong)local_68 + (longlong)(int)local_58 * 8));
            pdVar8 = (double *)FUN_14479d2ce(puVar1);
            bVar3 = false;
            break;
          }
        }
        uVar11 = (longlong)(int)local_58;
        do {
          uVar12 = uVar11;
          uVar11 = uVar12 + 1;
          local_58 = (uint)uVar11;
          if ((longlong)local_60 <= (longlong)uVar11) break;
        } while (*(longlong *)((longlong)local_68 + uVar11 * 8) == 0);
        if (((longlong)uVar12 < -1) || (local_60 <= (int)local_58)) break;
      } while( true );
    }
    if (local_68 != 0.0) {
      FUN_1400020a8();
    }
    if (!bVar3) goto LAB_14183d6c6;
    iVar6 = *(int *)(param_1 + 0x1084);
    if (iVar6 != 0) goto LAB_14183d67e;
  }
  else {
    lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if (((lVar9 == 0) || (*(int *)(lVar9 + 0x10) != iVar6)) ||
       ((*(uint *)(lVar9 + 8) & 0x10200000) != 0)) goto LAB_14183d6fe;
LAB_14183d67e:
    uVar2 = *puVar1;
    pdVar8 = (double *)0x0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14183d6c6;
    plVar10 = (longlong *)
              ((ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar10 != (longlong *)0x0) &&
       (((int)plVar10[2] == iVar6 && ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)))) {
      pdVar8 = (double *)*plVar10;
      goto LAB_14183d6c6;
    }
  }
  pdVar8 = (double *)0x0;
LAB_14183d6c6:
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return pdVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14183d854 FUN_14183d854 body=77 status=ok
// SIG undefined FUN_14183d854(void)

undefined8 FUN_14183d854(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_1405b9b94();
  if (cVar1 != '\0') {
    lVar2 = *(longlong *)(param_1 + 0xb0);
    if ((lVar2 == 0) && (lVar2 = FUN_1448abda6(param_1), lVar2 == 0)) {
      return 0;
    }
    lVar2 = FUN_140702026(lVar2);
    if (lVar2 != 0) {
      uVar3 = FUN_1402446bc(lVar2);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 14183d8a2 FUN_14183d8a2 body=31 status=ok
// SIG undefined FUN_14183d8a2(void)

void FUN_14183d8a2(longlong *param_1)

{
  FUN_1401b2056();
                    /* WARNING: Could not recover jumptable at 0x00014183d8ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x640))(param_1);
  return;
}



// FUNCTION 14183d8c1 FUN_14183d8c1 body=55 status=ok
// SIG undefined FUN_14183d8c1(void)

void FUN_14183d8c1(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140eacc52(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ae86c10;
  *(undefined4 *)(puVar1 + 0x7b) = 1;
  puVar1[0x7c] = 0;
  puVar1[0x7d] = 0;
  return;
}



// FUNCTION 14183d8f8 FUN_14183d8f8 body=41 status=ok
// SIG undefined FUN_14183d8f8(void)

void FUN_14183d8f8(undefined8 param_1,longlong *param_2)

{
  FUN_1402d084a();
                    /* WARNING: Could not recover jumptable at 0x00014183d91e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3c9a0);
  return;
}



// FUNCTION 14183d927 FUN_14183d927 body=56 status=ok
// SIG undefined FUN_14183d927(void)

void FUN_14183d927(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140718fb2(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ae899b0;
  puVar1[0x72] = &PTR_FUN_14ae8a030;
  *(undefined1 *)((longlong)puVar1 + 0x3b4) = 1;
  return;
}



// FUNCTION 14183d960 FUN_14183d960 body=31 status=ok
// SIG undefined FUN_14183d960(void)

void FUN_14183d960(longlong *param_1)

{
  FUN_1401b2056();
                    /* WARNING: Could not recover jumptable at 0x00014183d978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x640))(param_1);
  return;
}



// FUNCTION 14183d97f FUN_14183d97f body=109 status=ok
// SIG undefined FUN_14183d97f(void)

void FUN_14183d97f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140cc257c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ae8a1d0;
  puVar1[5] = &PTR_FUN_14ae8ad50;
  puVar1[6] = &PTR_LAB_14ae8ad90;
  puVar1[0x55] = &PTR_FUN_14ae8ade0;
  puVar1[0x56] = &PTR_FUN_14ae8ae60;
  puVar1[0x57] = &PTR_FUN_14ae8ae70;
  puVar1[0x336] = 0;
  puVar1[0x337] = 0;
  return;
}



// FUNCTION 14183d9ec FUN_14183d9ec body=1381 status=ok
// SIG undefined FUN_14183d9ec(void)

undefined1 (*) [16] FUN_14183d9ec(longlong param_1,undefined1 (*param_2) [16],double *param_3)

{
  longlong lVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
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
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined8 local_160;
  wchar_t *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  code **local_140;
  code *local_138;
  code *local_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  undefined8 uStack_110;
  code *local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    if (DAT_14cb46ec8 == 0) {
      local_140 = &local_108;
      local_108 = FUN_141030f22;
      local_130 = FUN_14081d0ea;
      local_138 = FUN_142b4754c;
      local_148 = &LAB_1483e40eb;
      local_150 = &LAB_146486986;
      local_158 = L"Engine";
      local_160 = 0;
      local_168 = 0x10000005;
      local_170 = 8;
      local_178 = 0x420;
      FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
    }
    if (((*(int *)(DAT_14cb46ec8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8) == DAT_14cb46ec8 + 0x30)) &&
       (*(longlong *)(lVar1 + 0x398) != 0)) {
      FUN_14487e4ca(*(longlong *)(lVar1 + 0x398),&local_108);
      dVar2 = (local_f8 - local_e0) - (double)*(float *)(param_1 + 0xf24);
      dVar19 = (((double)*(float *)(param_1 + 0x62c) + local_f8 + local_e0) - dVar2) * 0.5;
      dVar11 = ((local_100 + local_e8) - (local_100 - local_e8)) * 0.5;
      dVar20 = (((double)local_108 + local_f0) - ((double)local_108 - local_f0)) * 0.5;
      dVar2 = dVar2 + dVar19;
      dVar18 = (local_100 - local_e8) + dVar11;
      local_118 = ((double)local_108 - local_f0) + dVar20;
      uStack_110 = 0;
      local_128 = dVar19 * dVar19 + dVar20 * dVar20 + dVar11 * dVar11;
      uStack_120 = 0;
      dVar24 = *param_3;
      dVar10 = param_3[1];
      dVar4 = param_3[2];
      dVar23 = param_3[8];
      dVar12 = param_3[9];
      dVar14 = param_3[10];
      dVar8 = dVar10 + dVar10;
      dVar15 = dVar4 + dVar4;
      dVar5 = dVar24 * (dVar24 + dVar24);
      dVar13 = (1.0 - (dVar4 * dVar15 + dVar10 * dVar8)) * dVar23;
      dVar4 = (1.0 - (dVar4 * dVar15 + dVar5)) * dVar12;
      dVar22 = (1.0 - (dVar5 + dVar10 * dVar8)) * dVar14;
      dVar5 = param_3[3];
      dVar17 = dVar15 * dVar5;
      dVar21 = (dVar24 + dVar24) * param_3[3];
      dVar5 = dVar8 * dVar5;
      dVar7 = (dVar8 * dVar24 + dVar17) * dVar23;
      dVar9 = (dVar15 * dVar10 + dVar21) * dVar12;
      dVar16 = (dVar5 + *param_3 * dVar15) * dVar14;
      dVar23 = (*param_3 * dVar15 - dVar5) * dVar23;
      dVar12 = (dVar8 * dVar24 - dVar17) * dVar12;
      dVar14 = (dVar15 * dVar10 - dVar21) * dVar14;
      dVar17 = local_118 * dVar13;
      dVar5 = ABS(dVar19 * dVar16) + ABS(dVar11 * dVar12) + ABS(dVar20 * dVar13);
      dVar8 = ABS(dVar19 * dVar14) + ABS(dVar11 * dVar4) + ABS(dVar20 * dVar7);
      dVar24 = ABS(dVar22 * dVar19) + ABS(dVar9 * dVar11) + ABS(dVar23 * dVar20);
      dVar21 = local_118 * dVar23;
      dVar13 = dVar16 * dVar16 + dVar12 * dVar12 + dVar13 * dVar13;
      dVar15 = dVar14 * dVar14 + dVar4 * dVar4 + dVar7 * dVar7;
      dVar23 = dVar22 * dVar22 + dVar9 * dVar9 + dVar23 * dVar23;
      if (dVar13 <= dVar15) {
        dVar13 = dVar15;
      }
      if (dVar13 <= dVar23) {
        dVar13 = dVar23;
      }
      dVar15 = SQRT(local_128);
      dVar23 = param_3[4];
      dVar7 = dVar2 * dVar14 + dVar18 * dVar4 + local_118 * dVar7 + param_3[5];
      dVar4 = param_3[6];
      if (dVar13 < 0.0) {
        dVar13 = sqrt(dVar13);
      }
      else {
        dVar13 = SQRT(dVar13);
      }
      dVar14 = SQRT(dVar8 * dVar8 + dVar24 * dVar24 + dVar5 * dVar5);
      dVar10 = dVar15 * dVar13;
      if (dVar14 <= dVar15 * dVar13) {
        dVar10 = dVar14;
      }
      auVar3._8_4_ = SUB84(dVar7,0);
      auVar3._0_8_ = dVar2 * dVar16 + dVar18 * dVar12 + dVar17 + dVar23;
      auVar3._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      *param_2 = auVar3;
      *(double *)param_2[1] = dVar2 * dVar22 + dVar18 * dVar9 + dVar21 + dVar4;
      auVar6._8_4_ = SUB84(dVar8,0);
      auVar6._0_8_ = dVar5;
      auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      *(undefined1 (*) [16])(param_2[1] + 8) = auVar6;
      *(double *)(param_2[2] + 8) = dVar24;
      *(double *)param_2[3] = dVar10;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_198);
    }
  }
  *(undefined8 *)param_2[2] = 0;
  *(undefined8 *)(param_2[2] + 8) = 0;
  *(undefined8 *)param_2[1] = 0;
  *(undefined8 *)(param_2[1] + 8) = 0;
  *(undefined8 *)*param_2 = 0;
  *(undefined8 *)(*param_2 + 8) = 0;
  *(undefined8 *)param_2[3] = 0;
  if ((local_d0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14183df52 FUN_14183df52 body=40 status=ok
// SIG undefined FUN_14183df52(void)

undefined8 FUN_14183df52(undefined8 param_1,int param_2)

{
  FUN_14006e5d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14183df7a FUN_14183df7a body=40 status=ok
// SIG undefined FUN_14183df7a(void)

undefined8 FUN_14183df7a(undefined8 param_1,int param_2)

{
  FUN_140b627c0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14183dfa2 FUN_14183dfa2 body=40 status=ok
// SIG undefined FUN_14183dfa2(void)

undefined8 FUN_14183dfa2(undefined8 param_1,int param_2)

{
  FUN_140bb64c8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14183dfca FUN_14183dfca body=142 status=ok
// SIG undefined FUN_14183dfca(void)

undefined1 FUN_14183dfca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_4 != 0) {
    lVar7 = 0;
    do {
      puVar2 = (undefined4 *)(param_3 + lVar7);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      puVar1 = (undefined4 *)(param_2 + lVar7);
      *puVar1 = *puVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_14477b16e(puVar1 + 4,param_3 + 0x10 + lVar7);
      lVar6 = *(longlong *)(param_3 + 0x8d0 + lVar7);
      if (DAT_14c950c29 == '\x01') {
        if (lVar6 == 0) {
          lVar6 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar6 = *(longlong *)(param_3 + 0x8d0 + lVar7);
        }
      }
      *(longlong *)(puVar1 + 0x234) = lVar6;
      lVar7 = lVar7 + 0x8e0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14183e058 FUN_14183e058 body=299 status=ok
// SIG undefined FUN_14183e058(void)

longlong * FUN_14183e058(longlong param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = *(int *)(param_1 + 0x19b8);
  iVar3 = *(int *)(param_1 + 0x19c8) + iVar2;
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  if (iVar3 != 0) {
    FUN_140337ccc(param_2);
    iVar2 = *(int *)(param_1 + 0x19b8);
  }
  if (iVar2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x19b0);
    lVar4 = 0;
    do {
      plVar5 = *(longlong **)(lVar1 + lVar4);
      if (plVar5 != (longlong *)0x0) {
        if (param_3 != '\0') {
          iVar3 = (**(code **)(*plVar5 + 0x570))(plVar5);
          if (iVar3 == 0) goto LAB_14183e0e7;
          plVar5 = *(longlong **)(lVar1 + lVar4);
        }
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_140c43e06(param_2,iVar3);
        }
        *(longlong **)(*param_2 + (longlong)iVar3 * 8) = plVar5;
      }
LAB_14183e0e7:
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar2 * 8 != lVar4);
  }
  iVar2 = *(int *)(param_1 + 0x19c8);
  if ((longlong)iVar2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x19c0);
    lVar4 = 0;
    do {
      plVar5 = *(longlong **)(lVar1 + lVar4);
      if (plVar5 != (longlong *)0x0) {
        if (param_3 != '\0') {
          iVar3 = (**(code **)(*plVar5 + 0x570))(plVar5);
          if (iVar3 == 0) goto LAB_14183e142;
          plVar5 = *(longlong **)(lVar1 + lVar4);
        }
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_140c43e06(param_2,iVar3);
        }
        *(longlong **)(*param_2 + (longlong)iVar3 * 8) = plVar5;
      }
LAB_14183e142:
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar2 * 8 != lVar4);
  }
  return param_2;
}



// FUNCTION 14183e183 FUN_14183e183 body=56 status=ok
// SIG undefined FUN_14183e183(void)

void FUN_14183e183(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140718fb2(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ae8f520;
  puVar1[0x72] = &PTR_FUN_14ae8fba0;
  *(undefined1 *)((longlong)puVar1 + 0x3b4) = 0;
  return;
}



// FUNCTION 14183e1bc FUN_14183e1bc body=31 status=ok
// SIG undefined FUN_14183e1bc(void)

void FUN_14183e1bc(longlong *param_1)

{
  FUN_1401b2056();
                    /* WARNING: Could not recover jumptable at 0x00014183e1d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x640))(param_1);
  return;
}



// FUNCTION 14183e1db FUN_14183e1db body=130 status=ok
// SIG undefined FUN_14183e1db(void)

void FUN_14183e1db(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140cc257c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ae90270;
  puVar1[5] = &PTR_FUN_14ae90df0;
  puVar1[6] = &PTR_LAB_14ae90e30;
  puVar1[0x55] = &PTR_FUN_14ae90e80;
  puVar1[0x56] = &PTR_FUN_14ae90f00;
  puVar1[0x57] = &PTR_FUN_14ae90f10;
  puVar1[0x336] = 0;
  puVar1[0x337] = 0;
  puVar1[0x338] = 0;
  puVar1[0x339] = 0;
  puVar1[0x33a] = 0;
  puVar1[0x33b] = 0;
  puVar1[0x33c] = 0;
  puVar1[0x33d] = 0;
  return;
}



// FUNCTION 14183e25e FUN_14183e25e body=188 status=ok
// SIG undefined FUN_14183e25e(void)

longlong * FUN_14183e25e(longlong param_1,longlong *param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)(param_1 + 0x19b8);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (iVar1 != 0) {
    FUN_140337ccc(param_2);
    iVar1 = *(int *)(param_1 + 0x19b8);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x19b0);
      lVar5 = 0;
      do {
        plVar4 = *(longlong **)(lVar2 + lVar5);
        if (plVar4 != (longlong *)0x0) {
          if (param_3 != '\0') {
            iVar3 = (**(code **)(*plVar4 + 0x570))(plVar4);
            if (iVar3 == 0) goto LAB_14183e2e9;
            plVar4 = *(longlong **)(lVar2 + lVar5);
          }
          iVar3 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
            FUN_140c43e06(param_2,iVar3);
          }
          *(longlong **)(*param_2 + (longlong)iVar3 * 8) = plVar4;
        }
LAB_14183e2e9:
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
  }
  return param_2;
}



// FUNCTION 14183e31c FUN_14183e31c body=2655 status=ok
// SIG undefined FUN_14183e31c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_14183e31c(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  longlong *plVar2;
  double dVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  double *pdVar8;
  longlong *plVar9;
  longlong *plVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  undefined8 uVar27;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined8 uVar33;
  undefined1 auVar32 [16];
  double dVar34;
  double dVar35;
  undefined8 uVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined8 uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar44;
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar48;
  undefined8 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined1 auStack_248 [32];
  double local_228;
  undefined8 uStack_220;
  double local_218;
  undefined8 uStack_210;
  double local_208;
  undefined8 uStack_200;
  longlong local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double local_1c8;
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong local_138;
  undefined8 uStack_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  lVar7 = (longlong)*(int *)(param_1 + 0x19b8);
  if (lVar7 == 0) {
    lVar7 = FUN_140b94ea6(param_1);
    if (lVar7 != 0) {
      FUN_14487e4ca(lVar7,&local_188);
      dVar34 = dStack_180 - local_168;
      dVar38 = local_188 - dStack_170;
      dVar19 = (local_178 - dStack_160) - (double)*(float *)(param_1 + 0xf24);
      dStack_160 = (((double)*(float *)(param_1 + 0x62c) + local_178 + dStack_160) - dVar19) * 0.5;
      local_168 = ((dStack_180 + local_168) - dVar34) * 0.5;
      dStack_170 = ((local_188 + dStack_170) - dVar38) * 0.5;
      local_178 = dVar19 + dStack_160;
      dStack_180 = dVar34 + local_168;
      local_188 = dVar38 + dStack_170;
      local_158 = SQRT(dStack_160 * dStack_160 + dStack_170 * dStack_170 + local_168 * local_168);
      FUN_144a80a4c(&local_188,param_2,param_3);
      goto LAB_14183ecf3;
    }
    lVar7 = (longlong)*(int *)(param_1 + 0x19b8);
    dVar38 = 0.0;
    dVar34 = 0.0;
    dVar19 = 0.0;
    dVar1 = 0.0;
    dVar3 = 0.0;
    dVar39 = 0.0;
    if (lVar7 != 0) goto LAB_14183e3bc;
  }
  else {
LAB_14183e3bc:
    plVar9 = *(longlong **)(param_1 + 0x19b0);
    plVar10 = plVar9 + lVar7;
    dVar39 = 0.0;
    uVar49 = 0;
    bVar5 = false;
    dVar3 = 0.0;
    dVar1 = 0.0;
    dVar19 = 0.0;
    uVar50 = 0;
    uVar51 = 0;
    dVar34 = 0.0;
    uVar52 = 0;
    uVar53 = 0;
    dVar38 = 0.0;
    uVar54 = 0;
    uVar55 = 0;
    do {
      plVar2 = (longlong *)*plVar9;
      if (plVar2 != (longlong *)0x0) {
        lVar7 = plVar2[0x39];
        uVar4 = *(undefined4 *)((longlong)plVar2 + 0x1cc);
        dVar22 = (double)plVar2[0x33];
        auVar14 = *(undefined1 (*) [16])(plVar2 + 0x36);
        dVar31 = auVar14._0_8_;
        dVar11 = auVar14._8_8_;
        dVar18 = (double)plVar2[0x38];
        pdVar8 = (double *)plVar2[0x46];
        dVar29 = (double)plVar2[0x34];
        uVar36 = 0;
        dVar45 = (double)plVar2[0x3a];
        uVar27 = 0;
        lVar28 = plVar2[0x3b];
        uVar33 = 0;
        dVar40 = (double)plVar2[0x35];
        uVar41 = 0;
        if (pdVar8 == (double *)0x0) {
          uStack_220 = 0;
          uStack_1f0 = 0;
          uStack_200 = 0;
          uStack_210 = 0;
          local_228 = (double)plVar2[0x3a];
          local_218 = (double)plVar2[0x35];
          local_208 = (double)plVar2[0x34];
          local_1f8 = plVar2[0x3b];
          pdVar8 = (double *)FUN_14001cc68(0x40,0x10);
          dVar29 = DAT_14c8463d8;
          *pdVar8 = DAT_14c8463d0;
          pdVar8[1] = dVar29;
          dVar29 = DAT_14c8463e8;
          pdVar8[2] = DAT_14c8463e0;
          pdVar8[3] = dVar29;
          dVar29 = DAT_14c846500;
          pdVar8[4] = DAT_14c8464f8;
          pdVar8[5] = dVar29;
          pdVar8[6] = DAT_14c846508;
          plVar2[0x46] = (longlong)pdVar8;
          dVar29 = local_208;
          uVar36 = uStack_200;
          dVar45 = local_228;
          uVar27 = uStack_220;
          lVar28 = local_1f8;
          uVar33 = uStack_1f0;
          dVar40 = local_218;
          uVar41 = uStack_210;
        }
        auVar21 = _DAT_1499387d0;
        local_1e8 = dVar39;
        uStack_1e0 = uVar49;
        if ((((pdVar8[4] != dVar31) || (NAN(pdVar8[4]) || NAN(dVar31))) || (pdVar8[5] != dVar11)) ||
           (((NAN(pdVar8[5]) || NAN(dVar11) || (pdVar8[6] != dVar18)) ||
            (NAN(pdVar8[6]) || NAN(dVar18))))) {
          auVar24._8_8_ = 0;
          auVar24._0_8_ = dVar18;
          dVar39 = (double)DAT_1499387d0;
          dVar12 = DAT_1499387d0._8_8_;
          auVar14 = divpd(auVar14,_DAT_1499387d0);
          auVar20 = divpd(auVar24,_DAT_1499387d0);
          auVar14 = roundpd(auVar14,auVar14,3);
          auVar20 = roundpd(auVar20,auVar20,3);
          auVar46._0_8_ = dVar31 - auVar14._0_8_ * dVar39;
          auVar46._8_8_ = dVar11 - auVar14._8_8_ * dVar12;
          auVar25._0_8_ = dVar18 - auVar20._0_8_ * dVar39;
          auVar25._8_8_ = 0.0 - auVar20._8_8_ * dVar12;
          auVar42._0_8_ = auVar46._0_8_ + dVar39;
          auVar42._8_8_ = auVar46._8_8_ + dVar12;
          auVar32._0_8_ = auVar25._0_8_ + dVar39;
          auVar32._8_8_ = auVar25._8_8_ + dVar12;
          auVar20._8_8_ = -(ulonglong)(0.0 <= auVar46._8_8_);
          auVar20._0_8_ = -(ulonglong)(0.0 <= auVar46._0_8_);
          auVar14 = blendvpd(auVar42,auVar46,auVar20);
          auVar43._8_8_ = -(ulonglong)(0.0 <= auVar25._8_8_);
          auVar43._0_8_ = -(ulonglong)(0.0 <= auVar25._0_8_);
          auVar20 = blendvpd(auVar32,auVar25,auVar43);
          auVar26._0_8_ = auVar14._0_8_ + -360.0;
          auVar26._8_8_ = auVar14._8_8_ + -360.0;
          auVar15._8_8_ = -(ulonglong)(180.0 < auVar14._8_8_);
          auVar15._0_8_ = -(ulonglong)(180.0 < auVar14._0_8_);
          auVar43 = blendvpd(auVar14,auVar26,auVar15);
          auVar16._8_8_ = -(ulonglong)(180.0 < auVar20._8_8_);
          auVar16._0_8_ = -(ulonglong)(180.0 < auVar20._0_8_);
          auVar14._8_8_ = auVar20._8_8_ + 0.0;
          auVar14._0_8_ = auVar20._0_8_ + -360.0;
          auVar14 = blendvpd(auVar20,auVar14,auVar16);
          *(undefined1 (*) [16])(pdVar8 + 4) = auVar43;
          dVar18 = auVar14._0_8_;
          pdVar8[6] = dVar18;
          auVar47._8_8_ = 0;
          auVar47._0_8_ = dVar18;
          auVar14 = divpd(auVar43,auVar21);
          auVar21 = divpd(auVar47,auVar21);
          auVar14 = roundpd(auVar14,auVar14,3);
          auVar21 = roundpd(auVar21,auVar21,3);
          dVar31 = (auVar43._0_8_ - auVar14._0_8_ * dVar39) * 0.008726646259971648;
          dVar11 = (auVar43._8_8_ - auVar14._8_8_ * dVar12) * 0.008726646259971648;
          dVar39 = (dVar18 - auVar21._0_8_ * dVar39) * 0.008726646259971648;
          dVar12 = (0.0 - auVar21._8_8_ * dVar12) * 0.008726646259971648;
          local_228 = dVar45;
          uStack_220 = uVar27;
          local_218 = dVar40;
          uStack_210 = uVar41;
          local_208 = dVar29;
          uStack_200 = uVar36;
          local_1f8 = lVar28;
          uStack_1f0 = uVar33;
          local_1c8 = sin(dVar31);
          local_1b8._8_4_ = uVar52;
          local_1b8._0_8_ = dVar34;
          local_1b8._12_4_ = uVar53;
          dVar34 = sin(dVar11);
          local_198._8_4_ = uVar50;
          local_198._0_8_ = dVar19;
          local_198._12_4_ = uVar51;
          local_1d8 = sin(dVar39);
          local_1a8._8_4_ = uVar54;
          local_1a8._0_8_ = dVar38;
          local_1a8._12_4_ = uVar55;
          sin(dVar12);
          dVar19 = cos(dVar31);
          dVar18 = local_1b8._0_8_;
          uVar52 = local_1b8._8_4_;
          uVar53 = local_1b8._12_4_;
          dVar38 = cos(dVar11);
          dVar11 = cos(dVar39);
          cos(dVar12);
          dVar39 = local_1a8._0_8_;
          uVar54 = local_1a8._8_4_;
          uVar55 = local_1a8._12_4_;
          dVar31 = local_198._0_8_;
          uVar50 = local_198._8_4_;
          uVar51 = local_198._12_4_;
          local_178 = -(dVar38 * local_1c8 * local_1d8) + dVar34 * dVar19 * dVar11;
          dStack_170 = dVar34 * local_1c8 * local_1d8 + dVar38 * dVar19 * dVar11;
          local_188 = local_1c8 * dVar34 * dVar11 - dVar19 * dVar38 * local_1d8;
          dStack_180 = -(local_1c8 * dVar38 * dVar11) - dVar19 * dVar34 * local_1d8;
          *pdVar8 = local_188;
          pdVar8[1] = dStack_180;
          pdVar8[2] = local_178;
          pdVar8[3] = dStack_170;
          dStack_160 = local_208;
          local_158 = local_218;
          dVar45 = local_228;
          local_138 = local_1f8;
        }
        else {
          local_188 = *pdVar8;
          dStack_180 = pdVar8[1];
          local_178 = pdVar8[2];
          dStack_170 = pdVar8[3];
          dStack_160 = dVar29;
          dVar31 = dVar19;
          dVar18 = dVar34;
          dVar39 = dVar38;
          local_158 = dVar40;
          local_138 = lVar28;
        }
        uStack_150 = 0;
        uStack_140 = SUB84(dVar45,0);
        uStack_13c = (undefined4)((ulonglong)dVar45 >> 0x20);
        uStack_130 = 0;
        local_168 = dVar22;
        local_148 = (int)lVar7;
        uStack_144 = uVar4;
        (**(code **)(*plVar2 + 0x528))(plVar2,&local_128,&local_188);
        dVar11 = local_118 + local_100;
        dVar22 = local_120 + local_108;
        dVar29 = local_128 + local_110;
        dVar19 = local_118 - local_100;
        dVar34 = local_120 - local_108;
        dVar38 = local_128 - local_110;
        bVar6 = true;
        if (bVar5) {
          if (dVar38 <= dVar39) {
            dVar39 = dVar38;
          }
          if (dVar34 <= dVar18) {
            dVar18 = dVar34;
          }
          if (dVar19 <= dVar31) {
            dVar31 = dVar19;
          }
          if (dVar1 <= dVar29) {
            dVar1 = dVar29;
          }
          if (dVar3 <= dVar22) {
            dVar3 = dVar22;
          }
          dVar38 = dVar39;
          dVar34 = dVar18;
          dVar19 = dVar31;
          dVar39 = local_1e8;
          uVar49 = uStack_1e0;
          bVar5 = bVar6;
          if (local_1e8 <= dVar11) {
            dVar39 = dVar11;
          }
        }
        else {
          uVar54 = 0;
          uVar55 = 0;
          uVar52 = 0;
          uVar53 = 0;
          uVar50 = 0;
          uVar51 = 0;
          uVar49 = 0;
          dVar1 = dVar29;
          dVar3 = dVar22;
          dVar39 = dVar11;
          bVar5 = bVar6;
        }
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar10);
  }
  dVar19 = dVar19 - (double)*(float *)(param_1 + 0xf24);
  dVar23 = (((double)*(float *)(param_1 + 0x62c) + dVar39) - dVar19) * 0.5;
  dVar22 = (dVar3 - dVar34) * 0.5;
  local_228 = (dVar1 - dVar38) * 0.5;
  uStack_220 = 0;
  dVar19 = dVar19 + dVar23;
  dVar34 = dVar34 + dVar22;
  dVar38 = dVar38 + local_228;
  local_1e8 = dVar23 * dVar23 + local_228 * local_228 + dVar22 * dVar22;
  uStack_1e0 = 0;
  dVar29 = *param_3;
  dVar45 = param_3[1];
  dVar1 = param_3[2];
  dVar40 = param_3[8];
  dVar12 = param_3[9];
  dVar17 = param_3[10];
  dVar31 = dVar45 + dVar45;
  dVar3 = dVar1 + dVar1;
  dVar39 = dVar29 * (dVar29 + dVar29);
  dVar35 = (1.0 - (dVar1 * dVar3 + dVar45 * dVar31)) * dVar40;
  dVar37 = (1.0 - (dVar1 * dVar3 + dVar39)) * dVar12;
  dVar30 = (1.0 - (dVar39 + dVar45 * dVar31)) * dVar17;
  dVar1 = param_3[3];
  dVar39 = dVar3 * dVar1;
  dVar18 = (dVar29 + dVar29) * param_3[3];
  dVar1 = dVar31 * dVar1;
  dVar44 = (dVar31 * dVar29 + dVar39) * dVar40;
  dVar48 = (dVar3 * dVar45 + dVar18) * dVar12;
  dVar11 = (dVar1 + *param_3 * dVar3) * dVar17;
  dVar40 = (*param_3 * dVar3 - dVar1) * dVar40;
  dVar12 = (dVar31 * dVar29 - dVar39) * dVar12;
  dVar17 = (dVar3 * dVar45 - dVar18) * dVar17;
  dVar1 = ABS(dVar23 * dVar11) + ABS(dVar22 * dVar12) + ABS(local_228 * dVar35);
  dVar3 = ABS(dVar23 * dVar17) + ABS(dVar22 * dVar37) + ABS(local_228 * dVar44);
  dVar22 = ABS(dVar30 * dVar23) + ABS(dVar48 * dVar22) + ABS(dVar40 * local_228);
  dVar39 = dVar11 * dVar11 + dVar12 * dVar12 + dVar35 * dVar35;
  dVar18 = dVar17 * dVar17 + dVar37 * dVar37 + dVar44 * dVar44;
  dVar31 = dVar30 * dVar30 + dVar48 * dVar48 + dVar40 * dVar40;
  if (dVar39 <= dVar18) {
    dVar39 = dVar18;
  }
  if (dVar39 <= dVar31) {
    dVar39 = dVar31;
  }
  dVar45 = SQRT(local_1e8);
  dVar31 = param_3[4];
  dVar29 = param_3[5];
  dVar18 = param_3[6];
  if (dVar39 < 0.0) {
    dVar39 = sqrt(dVar39);
  }
  else {
    dVar39 = SQRT(dVar39);
  }
  dVar13 = SQRT(dVar3 * dVar3 + dVar22 * dVar22 + dVar1 * dVar1);
  dVar23 = dVar45 * dVar39;
  if (dVar13 <= dVar45 * dVar39) {
    dVar23 = dVar13;
  }
  *param_2 = dVar19 * dVar11 + dVar34 * dVar12 + dVar38 * dVar35 + dVar31;
  param_2[1] = dVar19 * dVar17 + dVar34 * dVar37 + dVar38 * dVar44 + dVar29;
  param_2[2] = dVar19 * dVar30 + dVar34 * dVar48 + dVar38 * dVar40 + dVar18;
  auVar21._8_4_ = SUB84(dVar3,0);
  auVar21._0_8_ = dVar1;
  auVar21._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 3) = auVar21;
  param_2[5] = dVar22;
  param_2[6] = dVar23;
LAB_14183ecf3:
  if ((local_f0 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14183ed7c FUN_14183ed7c body=34 status=ok
// SIG undefined FUN_14183ed7c(void)

void FUN_14183ed7c(undefined8 param_1)

{
  FUN_140d0c084();
  FUN_140d0c1de(param_1);
  FUN_140aaab94(param_1);
  return;
}



// FUNCTION 14183ed9e FUN_14183ed9e body=428 status=ok
// SIG undefined FUN_14183ed9e(void)

void FUN_14183ed9e(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)*param_1;
  uVar3 = FUN_14007ca06();
  FUN_1400ea892(puVar1,uVar3);
  *puVar1 = &PTR_FUN_14ae92bb0;
  puVar1[5] = &PTR_FUN_14ae93630;
  puVar1[6] = &PTR_LAB_14ae93670;
  puVar1[0x55] = &PTR_FUN_14ae936c0;
  puVar1[0x56] = &PTR_FUN_14ae93740;
  puVar1[0x57] = &PTR_FUN_14ae93750;
  *(undefined4 *)(puVar1 + 0xca) = 0xffffffff;
  puVar1[0xcb] = 0;
  puVar1[0xcc] = 0x4516000000000000;
  uVar2 = DAT_14c967818;
  puVar1[0xcd] = DAT_14c967818;
  uVar3 = DAT_14c8463f8;
  puVar1[0xce] = DAT_14c8463f0;
  puVar1[0xcf] = uVar3;
  puVar1[0xd0] = 0;
  *(undefined4 *)(puVar1 + 0xd1) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x68c) = uVar2;
  puVar1[0xe4] = 0;
  puVar1[0xe2] = 0;
  puVar1[0xe3] = 0;
  puVar1[0xe0] = 0;
  puVar1[0xe1] = 0;
  puVar1[0xde] = 0;
  puVar1[0xdf] = 0;
  puVar1[0xdc] = 0;
  puVar1[0xdd] = 0;
  puVar1[0xda] = 0;
  puVar1[0xdb] = 0;
  puVar1[0xd8] = 0;
  puVar1[0xd9] = 0;
  *(undefined2 *)(puVar1 + 0xe5) = 0xffff;
  *(undefined1 *)(puVar1 + 0xec) = 0;
  *(undefined2 *)(puVar1 + 0xed) = 1;
  puVar1[0xf2] = 0;
  *(undefined4 *)(puVar1 + 0xf3) = 0;
  puVar1[0xee] = 0;
  puVar1[0xef] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x79c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x7a4) = 0;
  puVar1[0xf6] = 0;
  *(undefined4 *)(puVar1 + 0xf7) = 0;
  puVar1[0xfc] = 0;
  *(undefined4 *)(puVar1 + 0xfd) = 0;
  puVar1[0xf8] = 0;
  puVar1[0xf9] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x7ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x7f4) = 0;
  puVar1[0x100] = 0;
  *(undefined4 *)(puVar1 + 0x101) = 0;
  *(undefined2 *)(puVar1 + 0x102) = 0x100;
  *(undefined1 *)((longlong)puVar1 + 0x812) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x814) = 0;
  *(undefined4 *)(puVar1 + 0x103) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x81c) = 0;
  *(undefined4 *)(puVar1 + 0x104) = 6;
  *(undefined4 *)((longlong)puVar1 + 0x824) = 0x3f800000;
  *(byte *)((longlong)puVar1 + 0x9e) = *(byte *)((longlong)puVar1 + 0x9e) | 8;
  *(byte *)((longlong)puVar1 + 0x2d6) = *(byte *)((longlong)puVar1 + 0x2d6) | 1;
  FUN_140719592(puVar1,0);
  return;
}



// FUNCTION 14183ef6a FUN_14183ef6a body=38 status=ok
// SIG undefined FUN_14183ef6a(void)

void FUN_14183ef6a(longlong *param_1)

{
  FUN_14010ed74();
  (**(code **)(*param_1 + 0x540))(param_1);
  FUN_1448c69c8(param_1);
  return;
}



// FUNCTION 14183ef90 FUN_14183ef90 body=508 status=ok
// SIG undefined FUN_14183ef90(void)

void FUN_14183ef90(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  
  iVar1 = *(int *)(param_1 + 0x798);
  if (iVar1 == 0) {
    uVar13 = 1;
    uVar12 = 0;
    iVar9 = 0;
    iVar7 = 0;
  }
  else {
    puVar3 = *(uint **)(param_1 + 0x790);
    if (*(uint **)(param_1 + 0x790) == (uint *)0x0) {
      puVar3 = (uint *)(param_1 + 0x780);
    }
    uVar14 = *puVar3;
    if (uVar14 == 0) {
      iVar9 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar9 = iVar1 + -1;
      }
      uVar12 = 0;
      uVar8 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar8 = uVar12;
      }
      iVar9 = 0;
      do {
        if (uVar8 == uVar12) {
          return;
        }
        iVar9 = iVar9 + 0x20;
        uVar14 = puVar3[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar12 = 0;
      iVar9 = 0;
    }
    uVar13 = (ulonglong)(-uVar14 & uVar14);
    uVar8 = uVar13 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar7 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar7) {
      iVar7 = iVar1;
    }
  }
  if (iVar7 != iVar1) {
    uVar14 = 0xffffffff;
    iVar2 = iVar1;
    do {
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x770) + (longlong)iVar7 * 0x10);
      if (lVar10 != 0) {
        iVar7 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar7 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
          FUN_144769b64(param_2,iVar7);
        }
        *(longlong *)(*param_2 + (longlong)iVar7 * 8) = lVar10;
        iVar2 = *(int *)(param_1 + 0x798);
      }
      uVar14 = uVar14 & ~(uint)uVar13;
      puVar3 = *(uint **)(param_1 + 0x790);
      if (*(uint **)(param_1 + 0x790) == (uint *)0x0) {
        puVar3 = (uint *)(param_1 + 0x780);
      }
      iVar7 = (int)uVar12;
      lVar10 = (longlong)iVar7;
      uVar4 = puVar3[lVar10] & uVar14;
      if (uVar4 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar6 = iVar5;
        if (iVar5 < iVar7) {
          iVar6 = iVar7;
        }
        if (iVar7 < iVar5) {
          lVar11 = 0;
          do {
            uVar4 = puVar3[lVar10 + lVar11 + 1];
            if (uVar4 != 0) {
              uVar12 = (ulonglong)(iVar7 + (int)lVar11 + 1);
              uVar14 = 0xffffffff;
              goto LAB_14183f08a;
            }
            iVar9 = iVar9 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar6 - lVar10 != lVar11);
          uVar14 = 0xffffffff;
          iVar7 = iVar6;
        }
        uVar12 = (ulonglong)(iVar7 + 1);
        iVar7 = iVar2;
      }
      else {
LAB_14183f08a:
        uVar13 = (ulonglong)(-uVar4 & uVar4);
        uVar8 = uVar13 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar7 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar7) {
          iVar7 = iVar2;
        }
      }
    } while (iVar7 != iVar1);
  }
  return;
}



// FUNCTION 14183f18c FUN_14183f18c body=40 status=ok
// SIG undefined FUN_14183f18c(void)

undefined8 FUN_14183f18c(undefined8 param_1,int param_2)

{
  FUN_140b627c0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14183f1b4 FUN_14183f1b4 body=330 status=ok
// SIG undefined FUN_14183f1b4(void)

void FUN_14183f1b4(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14183f222;
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
LAB_14183f222:
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



// FUNCTION 14183f2fe FUN_14183f2fe body=216 status=ok
// SIG undefined FUN_14183f2fe(void)

void FUN_14183f2fe(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x3ffffffffffffffU) * 4]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    iVar1 = (int)(uVar2 >> 6);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x40,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14183f3d6 FUN_14183f3d6 body=146 status=ok
// SIG undefined FUN_14183f3d6(void)

void FUN_14183f3d6(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xa8);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xa8);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xa8,0,param_3,0xa8);
    memmove(*(void **)((longlong)param_1 + 0xa8),param_1,(longlong)param_2 * 0xa8);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xa8,param_2,param_3,0xa8);
  return;
}



// FUNCTION 14183f468 FUN_14183f468 body=1459 status=ok
// SIG undefined FUN_14183f468(void)

int * FUN_14183f468(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  byte bVar10;
  int iVar11;
  uint *puVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  longlong *plVar17;
  ulonglong uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  int iVar23;
  ulonglong uVar24;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar20 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar20 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar20) {
      FUN_14482b872(param_1,iVar20);
    }
    iVar23 = (int)param_1[5];
    if (iVar23 == 0) {
      iVar7 = -1;
    }
    else {
      iVar7 = iVar23 + 0x1e;
      if (-1 < iVar23 + -1) {
        iVar7 = iVar23 + -1;
      }
      iVar7 = iVar7 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar11 = iVar23 + 1;
    iVar15 = iVar23 + 0x1f;
    if (-1 < iVar23) {
      iVar15 = iVar23;
    }
    if (iVar15 >> 5 == iVar7) {
      *(int *)(param_1 + 5) = iVar11;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar23) {
        if (iVar23 + 0x20U < 0xa0) {
          iVar11 = 0x80;
          iVar7 = iVar23;
        }
        else {
          uVar19 = iVar23 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar14 = 4;
            if (4 < uVar19) {
              uVar14 = uVar19;
            }
          }
          else {
            uVar14 = (uVar19 * 3 >> 3) + uVar19 + 0x10;
          }
          uVar13 = FUN_144a3809e(uVar14 << 2,0);
          iVar7 = (int)(uVar13 >> 2);
          iVar11 = -0x20;
          if ((int)uVar19 <= iVar7) {
            iVar11 = iVar7 << 5;
          }
          iVar7 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar11;
        FUN_1446efbd8(plVar9,iVar7);
        iVar11 = (int)param_1[5] + 1;
      }
      iVar7 = iVar11 + 0x1f;
      if (-1 < iVar11) {
        iVar7 = iVar11;
      }
      *(int *)(param_1 + 5) = iVar11;
      if (iVar11 % 0x20 != 0) {
        plVar17 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar17 = plVar9;
        }
        bVar10 = -(char)(iVar11 % 0x20);
        *(uint *)((longlong)plVar17 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar17 + (longlong)(iVar7 >> 5) * 4) << (bVar10 & 0x1f)) >>
             (bVar10 & 0x1f);
      }
    }
    lVar8 = (longlong)iVar20;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar10 = (byte)iVar23 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar15 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar10 | 0xfffffffeU >> 0x20 - bVar10);
  }
  else {
    iVar20 = (int)param_1[6];
    lVar8 = (longlong)iVar20;
    iVar23 = *(int *)(*param_1 + 4 + lVar8 * 0x18);
    *(int *)(param_1 + 6) = iVar23;
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar23 * 0x18) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  puVar12 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar12 = puVar1;
  }
  iVar23 = iVar20 + 0x1f;
  if (-1 < iVar20) {
    iVar23 = iVar20;
  }
  puVar12[iVar23 >> 5] = puVar12[iVar23 >> 5] | 1 << ((byte)iVar20 & 0x1f);
  uVar19 = 1;
  puVar2 = (ulonglong *)(*param_1 + lVar8 * 0x18);
  puVar4 = (undefined4 *)param_3[1];
  uVar13 = *(ulonglong *)*param_3;
  *puVar2 = uVar13;
  *(undefined4 *)(puVar2 + 1) = *puVar4;
  *(undefined4 *)(puVar2 + 2) = 0xffffffff;
  uVar14 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
  uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
  uVar14 = uVar14 >> 0x10 ^ uVar14;
  uVar21 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar21 != 0) && (uVar21 != 1)) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar23 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & uVar14) * 4);
    if (iVar23 != -1) {
      do {
        puVar3 = (ulonglong *)(*param_1 + (longlong)iVar23 * 0x18);
        if (*puVar3 == uVar13) {
          uVar5 = *(undefined4 *)((longlong)puVar2 + 4);
          uVar13 = puVar2[1];
          uVar6 = *(undefined4 *)((longlong)puVar2 + 0xc);
          *(int *)puVar3 = (int)*puVar2;
          *(undefined4 *)((longlong)puVar3 + 4) = uVar5;
          *(int *)(puVar3 + 1) = (int)uVar13;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uVar6;
          FUN_1483ff702(param_1,iVar20);
          iVar20 = iVar23;
          goto LAB_14183f647;
        }
        iVar23 = (int)puVar3[2];
      } while (iVar23 != -1);
    }
  }
  if (3 < uVar21) {
    uVar13 = (ulonglong)(uVar21 & 0xfffffffe) + 0xf;
    lVar8 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar19 = 1 << ((byte)lVar8 & 0x1f);
  }
  if (((int)uVar21 < 1) || ((int)uVar19 <= (int)param_1[9])) {
    uVar14 = (int)param_1[9] - 1U & uVar14;
    *(uint *)((longlong)puVar2 + 0x14) = uVar14;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(puVar2 + 2) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4) =
         iVar20;
    goto LAB_14183f647;
  }
  *(uint *)(param_1 + 9) = uVar19;
  plVar9 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar9,0,0,4);
    uVar19 = *(uint *)(param_1 + 9);
  }
  plVar17 = param_1 + 7;
  if (uVar19 == 1) {
    if (*plVar9 != 0) {
      FUN_1446efa72(plVar9,0,0,4);
    }
LAB_14183f6d9:
    uVar14 = 0;
    do {
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = plVar17;
      }
      *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar14) * 4) =
           0xffffffff;
      uVar14 = uVar14 + 1;
    } while (uVar19 != uVar14);
  }
  else {
    if (uVar19 == 0) goto LAB_14183f647;
    FUN_1446efa72(plVar9,0,uVar19,4);
    if (0 < (int)uVar19) goto LAB_14183f6d9;
  }
  iVar23 = (int)param_1[5];
  if (iVar23 == 0) {
    uVar13 = 0;
    uVar18 = 1;
    iVar7 = 0;
    iVar11 = 0;
  }
  else {
    puVar12 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar19 = *puVar12;
    if (uVar19 == 0) {
      iVar7 = iVar23 + 0x1e;
      if (-1 < iVar23 + -1) {
        iVar7 = iVar23 + -1;
      }
      uVar13 = 0;
      uVar18 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar18 = uVar13;
      }
      iVar11 = 0;
      do {
        if (uVar18 == uVar13) goto LAB_14183f647;
        iVar11 = iVar11 + 0x20;
        uVar19 = puVar12[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar19 == 0);
    }
    else {
      uVar13 = 0;
      iVar11 = 0;
    }
    uVar18 = (ulonglong)(-uVar19 & uVar19);
    uVar24 = uVar18 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (iVar11 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (iVar23 <= iVar7) {
      iVar7 = iVar23;
    }
  }
  if (iVar7 < iVar23) {
    uVar19 = 0xffffffff;
    do {
      lVar8 = *param_1;
      lVar22 = (longlong)iVar7;
      uVar24 = *(ulonglong *)(lVar8 + lVar22 * 0x18);
      uVar14 = ((uint)(uVar24 >> 0x14) & 0xffff ^ (uint)(uVar24 >> 4)) * -0x7a143595;
      uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
      uVar24 = (longlong)(int)(uVar14 >> 0x10 ^ uVar14) & (longlong)(int)param_1[9] - 1U;
      iVar23 = (int)uVar24;
      *(int *)(lVar8 + 0x14 + lVar22 * 0x18) = iVar23;
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = plVar17;
      }
      *(undefined4 *)(lVar8 + 0x10 + lVar22 * 0x18) =
           *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar24) * 4);
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = plVar17;
      }
      *(int *)((longlong)plVar9 + ((longlong)iVar23 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7;
      uVar19 = ~(uint)uVar18 & uVar19;
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puVar1;
      }
      iVar23 = (int)param_1[5];
      iVar7 = (int)uVar13;
      lVar8 = (longlong)iVar7;
      uVar14 = puVar12[lVar8] & uVar19;
      if (uVar14 == 0) {
        iVar15 = iVar23 + 0x1e;
        if (-1 < iVar23 + -1) {
          iVar15 = iVar23 + -1;
        }
        iVar15 = iVar15 >> 5;
        iVar16 = iVar15;
        if (iVar15 < iVar7) {
          iVar16 = iVar7;
        }
        if (iVar15 <= iVar7) break;
        lVar22 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar14 = puVar12[lVar8 + lVar22 + 1];
          if (uVar14 != 0) break;
          lVar22 = lVar22 + 1;
          if (iVar16 - lVar8 == lVar22) goto LAB_14183f647;
        }
        uVar13 = (ulonglong)(iVar7 + (int)lVar22 + 1);
        uVar19 = 0xffffffff;
      }
      uVar18 = (ulonglong)(-uVar14 & uVar14);
      uVar24 = uVar18 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = (iVar11 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar23);
  }
LAB_14183f647:
  *param_2 = iVar20;
  return param_2;
}



// FUNCTION 14183fa1c FUN_14183fa1c body=255 status=ok
// SIG undefined FUN_14183fa1c(void)

void FUN_14183fa1c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x3ffffffffffffff) * 4]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 6)) {
      uVar3 = uVar4 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14183fb1c FUN_14183fb1c body=549 status=ok
// SIG undefined FUN_14183fb1c(void)

void FUN_14183fb1c(void *param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  void *_Src;
  undefined1 auVar4 [16];
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar3 = *(uint *)((longlong)param_1 + 0x388);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 0x11) {
    *(undefined4 *)((longlong)param_1 + 0x38c) = 0x10;
    _Src = *(void **)((longlong)param_1 + 0x380);
joined_r0x00014183fcce:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x38);
    param_2 = 0;
    uVar6 = 0;
  }
  else {
    lVar5 = (longlong)(int)uVar3;
    if (0x10 < *(uint *)((longlong)param_1 + 0x38c)) {
      lVar5 = lVar5 + ((ulonglong)(lVar5 * 3) >> 3) + 0x10;
    }
    uVar6 = lVar5 * 0x38;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar6 + 0xf;
        if (uVar6 < 0x7ff1) {
          uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar7 = 0x32;
            if (0x32 < bVar2) {
              uVar7 = (ulonglong)bVar2;
            }
            uVar9 = 0x32 - (ulonglong)bVar2;
            do {
              uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_14183fbb2;
              lVar5 = uVar7 + 1 + uVar9;
              uVar9 = uVar9 - 1;
            } while (lVar5 != 0x33);
          }
          uVar6 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar6 = (ulonglong)DAT_14c841df8;
          }
          uVar6 = -uVar6 & ((uVar1 & 0xfffffffffffffff0) + uVar6) - 1;
        }
      }
      else {
        uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
      }
    }
LAB_14183fbb2:
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar6 >> 3;
    uVar6 = (uVar6 >> 3) / 7;
    uVar8 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
    if ((int)uVar8 < (int)uVar3) {
      *(undefined4 *)((longlong)param_1 + 0x38c) = 0x7fffffff;
      uVar6 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 0x380);
    }
    else {
      *(uint *)((longlong)param_1 + 0x38c) = uVar8;
      _Src = *(void **)((longlong)param_1 + 0x380);
      if (uVar8 < 0x11) goto joined_r0x00014183fcce;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0x380,0,uVar6,0x38);
      memmove(*(void **)((longlong)param_1 + 0x380),param_1,(longlong)param_2 * 0x38);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x380,param_2,uVar6,0x38);
  return;
}



// FUNCTION 14183fd41 FUN_14183fd41 body=43 status=ok
// SIG undefined FUN_14183fd41(void)

void FUN_14183fd41(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 14183fd6c FUN_14183fd6c body=269 status=ok
// SIG undefined FUN_14183fd6c(void)

void FUN_14183fd6c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14183fe7a FUN_14183fe7a body=147 status=ok
// SIG undefined FUN_14183fe7a(void)

void FUN_14183fe7a(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  FUN_14010eabe(param_1);
  return;
}



// FUNCTION 14183ff0e FUN_14183ff0e body=315 status=ok
// SIG undefined FUN_14183ff0e(void)

void FUN_14183ff0e(longlong param_1,int param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14183ff78;
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
LAB_14183ff78:
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



// FUNCTION 14184004a FUN_14184004a body=189 status=ok
// SIG undefined FUN_14184004a(void)

void FUN_14184004a(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = *(longlong *)(param_1 + 0x140);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x140) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  if (*(longlong **)(param_1 + 0x130) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x130) + 0x20))();
  }
  if (*(longlong **)(param_1 + 0x138) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x138) + 0x20))();
  }
  FUN_144846d14(param_1);
  return;
}



// FUNCTION 141840108 FUN_141840108 body=269 status=ok
// SIG undefined FUN_141840108(void)

void FUN_141840108(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141840216 FUN_141840216 body=333 status=ok
// SIG undefined FUN_141840216(void)

void FUN_141840216(longlong param_1,uint param_2)

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
    uVar3 = (ulonglong)param_2 * 0x58;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0x175) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7ffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14184027f;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7ffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_14184027f:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 / 0x58)) {
      uVar4 = uVar3 / 0x58 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x58,8);
  }
  return;
}



// FUNCTION 141840364 FUN_141840364 body=144 status=ok
// SIG undefined FUN_141840364(void)

void FUN_141840364(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar1 = 0x40;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e04];
  }
  else {
    uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x40,8);
  }
  uVar2 = 0x7fffffff;
  if (0 < (int)(uVar1 >> 6)) {
    uVar2 = uVar1 >> 6 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,8);
  }
  return;
}



// FUNCTION 1418403f4 FUN_1418403f4 body=386 status=ok
// SIG undefined FUN_1418403f4(void)

ulonglong FUN_1418403f4(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar6 = (ulonglong)uVar3;
  iVar10 = *(int *)(param_1 + 0xc);
  uVar5 = iVar10 - uVar3;
  uVar7 = (ulonglong)uVar5;
  if (((0x3fff < (ulonglong)((longlong)(int)uVar5 * 0x58)) || ((int)(uVar3 * 3) < iVar10 * 2)) &&
     (uVar7 = (ulonglong)CONCAT31((int3)(uVar5 >> 8),(int)uVar5 < 0x41),
     uVar3 == 0 || (int)uVar5 >= 0x41)) {
    if (0 < (int)uVar3) {
      uVar6 = uVar6 * 0x58;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar7 = uVar6 + 0xf;
          if (uVar3 < 0x175) {
            uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
          }
          else {
            if ((uVar7 & 0x7ffffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar7 >> 4];
              uVar8 = 0x32;
              if (0x32 < bVar2) {
                uVar8 = (ulonglong)bVar2;
              }
              uVar9 = 0x32 - (ulonglong)bVar2;
              do {
                uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_14184048c;
                lVar1 = uVar8 + 1 + uVar9;
                uVar9 = uVar9 - 1;
              } while (lVar1 != 0x33);
            }
            uVar6 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar6 = (ulonglong)DAT_14c841df8;
            }
            uVar6 = -uVar6 & ((uVar7 & 0x7ffffffff0) + uVar6) - 1;
          }
        }
        else {
          uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,8);
          iVar10 = *(int *)(param_1 + 0xc);
        }
      }
LAB_14184048c:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar6;
      uVar7 = SUB168(auVar4 * ZEXT816(0x2e8ba2e8ba2e8ba3),0);
      uVar6 = uVar6 / 0x58;
    }
    if ((int)uVar6 != iVar10) {
      *(int *)(param_1 + 0xc) = (int)uVar6;
      uVar7 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar6,0x58,8);
    }
  }
  return uVar7;
}



// FUNCTION 141840576 FUN_141840576 body=320 status=ok
// SIG undefined FUN_141840576(void)

void FUN_141840576(longlong param_1,uint param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1418405df;
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
LAB_1418405df:
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



// FUNCTION 1418406b6 FUN_1418406b6 body=1622 status=ok
// SIG undefined FUN_1418406b6(void)

void FUN_1418406b6(longlong *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  longlong lVar15;
  
  puVar9 = (undefined8 *)*param_1;
  FUN_140938eb2(puVar9,param_1);
  *puVar9 = &PTR_FUN_14ae99c00;
  puVar9[5] = &PTR_FUN_14ae9a650;
  puVar9[6] = &PTR_LAB_14ae9a690;
  puVar9[0x55] = &PTR_FUN_14ae9a6e0;
  puVar9[0x56] = &PTR_FUN_14ae9a760;
  puVar9[0x57] = &PTR_FUN_14ae9a770;
  *(undefined4 *)(puVar9 + 0xd7) = 0x43160000;
  *(undefined4 *)((longlong)puVar9 + 0x6bc) = 0x45000000;
  *(undefined4 *)(puVar9 + 0xd8) = 0x43000000;
  *(undefined4 *)((longlong)puVar9 + 0x6c4) = 0x3f800000;
  *(undefined4 *)(puVar9 + 0xd9) = 0x43160000;
  *(undefined4 *)((longlong)puVar9 + 0x6cc) = 0x45000000;
  *(undefined4 *)(puVar9 + 0xda) = 0x43000000;
  *(undefined4 *)((longlong)puVar9 + 0x6d4) = 0x3f800000;
  FUN_140a18afe(puVar9,0);
  puVar5 = puVar9 + 0xc4;
  *(undefined4 *)(puVar9 + 0xc5) = 0;
  if (*(int *)((longlong)puVar9 + 0x62c) != 3) {
    FUN_14093938a(puVar5,3);
  }
  puVar1 = puVar9 + 199;
  *(undefined4 *)(puVar9 + 200) = 0;
  if (*(int *)((longlong)puVar9 + 0x644) != 3) {
    FUN_1409394d2(puVar1,3);
  }
  plVar2 = puVar9 + 0xca;
  *(undefined4 *)(puVar9 + 0xcb) = 0;
  if (*(int *)((longlong)puVar9 + 0x65c) != 3) {
    FUN_14093938a(plVar2,3);
  }
  iVar8 = *(int *)(puVar9 + 0xc5);
  *(uint *)(puVar9 + 0xc5) = iVar8 + 1U;
  if (*(uint *)((longlong)puVar9 + 0x62c) < iVar8 + 1U) {
    FUN_140924c58(puVar5,iVar8);
  }
  lVar10 = puVar9[0xc4];
  lVar15 = (longlong)iVar8 * 0x58;
  *(undefined4 *)(lVar10 + lVar15) = 0;
  puVar3 = (undefined8 *)(lVar10 + 8 + lVar15);
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined8 *)(lVar10 + 0x18 + lVar15) = 0;
  uVar11 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  puVar3 = (undefined8 *)(lVar10 + 0x20 + lVar15);
  *puVar3 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  puVar3[1] = uVar11;
  *(undefined8 *)(lVar10 + 0x30 + lVar15) = DAT_14c8464f0;
  uVar14 = DAT_14c8464e8._4_4_;
  uVar13 = (undefined4)DAT_14c8464e8;
  uVar12 = DAT_14c8464e0._4_4_;
  puVar4 = (undefined4 *)(lVar10 + 0x38 + lVar15);
  *puVar4 = (undefined4)DAT_14c8464e0;
  puVar4[1] = uVar12;
  puVar4[2] = uVar13;
  puVar4[3] = uVar14;
  *(undefined8 *)(lVar10 + 0x48 + lVar15) = DAT_14c8464f0;
  *(undefined1 *)(lVar10 + 0x50 + lVar15) = 1;
  iVar8 = *(int *)(puVar9 + 200);
  *(uint *)(puVar9 + 200) = iVar8 + 1U;
  if (*(uint *)((longlong)puVar9 + 0x644) < iVar8 + 1U) {
    FUN_147501e1a(puVar1,iVar8);
  }
  lVar10 = puVar9[199];
  lVar15 = (longlong)iVar8 * 0x80;
  *(undefined4 *)(lVar10 + lVar15) = 0;
  uVar11 = CONCAT44(DAT_14c8463e8._4_4_,(undefined4)DAT_14c8463e8);
  puVar3 = (undefined8 *)(lVar10 + 0x20 + lVar15);
  *puVar3 = CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0);
  puVar3[1] = uVar11;
  uVar11 = DAT_14c8463d8;
  puVar3 = (undefined8 *)(lVar10 + 0x10 + lVar15);
  *puVar3 = DAT_14c8463d0;
  puVar3[1] = uVar11;
  uVar11 = DAT_14c8463d8;
  puVar3 = (undefined8 *)(lVar10 + 0x30 + lVar15);
  *puVar3 = DAT_14c8463d0;
  puVar3[1] = uVar11;
  uVar11 = CONCAT44(DAT_14c8463e8._4_4_,(undefined4)DAT_14c8463e8);
  puVar3 = (undefined8 *)(lVar10 + 0x40 + lVar15);
  *puVar3 = CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0);
  puVar3[1] = uVar11;
  uVar11 = DAT_14c8463d8;
  puVar3 = (undefined8 *)(lVar10 + 0x50 + lVar15);
  *puVar3 = DAT_14c8463d0;
  puVar3[1] = uVar11;
  uVar14 = DAT_14c8463e8._4_4_;
  uVar13 = (undefined4)DAT_14c8463e8;
  uVar12 = DAT_14c8463e0._4_4_;
  puVar4 = (undefined4 *)(lVar10 + 0x60 + lVar15);
  *puVar4 = (undefined4)DAT_14c8463e0;
  puVar4[1] = uVar12;
  puVar4[2] = uVar13;
  puVar4[3] = uVar14;
  *(undefined1 *)(lVar10 + 0x70 + lVar15) = 1;
  fVar6 = *(float *)(puVar9 + 0xd7);
  fVar7 = *(float *)((longlong)puVar9 + 0x6bc);
  iVar8 = *(int *)(puVar9 + 0xcb);
  *(uint *)(puVar9 + 0xcb) = iVar8 + 1U;
  if (*(uint *)((longlong)puVar9 + 0x65c) < iVar8 + 1U) {
    FUN_140924c58(plVar2,iVar8);
  }
  lVar10 = puVar9[0xca];
  lVar15 = (longlong)iVar8 * 0x58;
  *(undefined4 *)(lVar10 + lVar15) = 0;
  *(double *)(lVar10 + 8 + lVar15) = (double)fVar7;
  *(double *)(lVar10 + 0x10 + lVar15) = (double)fVar6;
  *(undefined8 *)(lVar10 + 0x18 + lVar15) = 0x3ff0000000000000;
  uVar11 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  puVar3 = (undefined8 *)(lVar10 + 0x20 + lVar15);
  *puVar3 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  puVar3[1] = uVar11;
  *(undefined8 *)(lVar10 + 0x30 + lVar15) = DAT_14c8464f0;
  uVar14 = DAT_14c8464e8._4_4_;
  uVar13 = (undefined4)DAT_14c8464e8;
  uVar12 = DAT_14c8464e0._4_4_;
  puVar4 = (undefined4 *)(lVar10 + 0x38 + lVar15);
  *puVar4 = (undefined4)DAT_14c8464e0;
  puVar4[1] = uVar12;
  puVar4[2] = uVar13;
  puVar4[3] = uVar14;
  *(undefined8 *)(lVar10 + 0x48 + lVar15) = DAT_14c8464f0;
  *(undefined1 *)(lVar10 + 0x50 + lVar15) = 1;
  iVar8 = *(int *)(puVar9 + 0xc5);
  *(uint *)(puVar9 + 0xc5) = iVar8 + 1U;
  if (*(uint *)((longlong)puVar9 + 0x62c) < iVar8 + 1U) {
    FUN_140924c58(puVar5,iVar8);
  }
  lVar10 = puVar9[0xc4];
  lVar15 = (longlong)iVar8 * 0x58;
  *(undefined4 *)(lVar10 + lVar15) = 0x3f800000;
  *(undefined8 *)(lVar10 + 8 + lVar15) = 0x40bb580000000000;
  *(undefined8 *)(lVar10 + 0x10 + lVar15) = 0xc0a7700000000000;
  *(undefined8 *)(lVar10 + 0x18 + lVar15) = 0;
  uVar11 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  puVar3 = (undefined8 *)(lVar10 + 0x20 + lVar15);
  *puVar3 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  puVar3[1] = uVar11;
  *(undefined8 *)(lVar10 + 0x30 + lVar15) = DAT_14c8464f0;
  uVar14 = DAT_14c8464e8._4_4_;
  uVar13 = (undefined4)DAT_14c8464e8;
  uVar12 = DAT_14c8464e0._4_4_;
  puVar4 = (undefined4 *)(lVar10 + 0x38 + lVar15);
  *puVar4 = (undefined4)DAT_14c8464e0;
  puVar4[1] = uVar12;
  puVar4[2] = uVar13;
  puVar4[3] = uVar14;
  *(undefined8 *)(lVar10 + 0x48 + lVar15) = DAT_14c8464f0;
  *(undefined1 *)(lVar10 + 0x50 + lVar15) = 1;
  iVar8 = *(int *)(puVar9 + 200);
  *(uint *)(puVar9 + 200) = iVar8 + 1U;
  if (*(uint *)((longlong)puVar9 + 0x644) < iVar8 + 1U) {
    FUN_147501e1a(puVar1,iVar8);
  }
  lVar10 = puVar9[199];
  lVar15 = (longlong)iVar8 * 0x80;
  *(undefined4 *)(lVar10 + lVar15) = 0x3f800000;
  uVar11 = CONCAT44(DAT_14c8463e8._4_4_,(undefined4)DAT_14c8463e8);
  puVar3 = (undefined8 *)(lVar10 + 0x20 + lVar15);
  *puVar3 = CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0);
  puVar3[1] = uVar11;
  uVar11 = DAT_14c8463d8;
  puVar3 = (undefined8 *)(lVar10 + 0x10 + lVar15);
  *puVar3 = DAT_14c8463d0;
  puVar3[1] = uVar11;
  uVar11 = DAT_14c8463d8;
  puVar3 = (undefined8 *)(lVar10 + 0x30 + lVar15);
  *puVar3 = DAT_14c8463d0;
  puVar3[1] = uVar11;
  uVar11 = CONCAT44(DAT_14c8463e8._4_4_,(undefined4)DAT_14c8463e8);
  puVar3 = (undefined8 *)(lVar10 + 0x40 + lVar15);
  *puVar3 = CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0);
  puVar3[1] = uVar11;
  uVar11 = DAT_14c8463d8;
  puVar3 = (undefined8 *)(lVar10 + 0x50 + lVar15);
  *puVar3 = DAT_14c8463d0;
  puVar3[1] = uVar11;
  uVar14 = DAT_14c8463e8._4_4_;
  uVar13 = (undefined4)DAT_14c8463e8;
  uVar12 = DAT_14c8463e0._4_4_;
  puVar4 = (undefined4 *)(lVar10 + 0x60 + lVar15);
  *puVar4 = (undefined4)DAT_14c8463e0;
  puVar4[1] = uVar12;
  puVar4[2] = uVar13;
  puVar4[3] = uVar14;
  *(undefined1 *)(lVar10 + 0x70 + lVar15) = 1;
  fVar6 = *(float *)(puVar9 + 0xd7);
  fVar7 = *(float *)((longlong)puVar9 + 0x6bc);
  iVar8 = *(int *)(puVar9 + 0xcb);
  *(uint *)(puVar9 + 0xcb) = iVar8 + 1U;
  if (*(uint *)((longlong)puVar9 + 0x65c) < iVar8 + 1U) {
    FUN_140924c58(plVar2,iVar8);
  }
  lVar10 = puVar9[0xca];
  lVar15 = (longlong)iVar8 * 0x58;
  *(undefined4 *)(lVar10 + lVar15) = 0x3f800000;
  *(double *)(lVar10 + 8 + lVar15) = (double)fVar7;
  *(double *)(lVar10 + 0x10 + lVar15) = (double)fVar6;
  *(undefined8 *)(lVar10 + 0x18 + lVar15) = 0x3ff0000000000000;
  uVar11 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  puVar3 = (undefined8 *)(lVar10 + 0x20 + lVar15);
  *puVar3 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  puVar3[1] = uVar11;
  *(undefined8 *)(lVar10 + 0x30 + lVar15) = DAT_14c8464f0;
  uVar14 = DAT_14c8464e8._4_4_;
  uVar13 = (undefined4)DAT_14c8464e8;
  uVar12 = DAT_14c8464e0._4_4_;
  puVar4 = (undefined4 *)(lVar10 + 0x38 + lVar15);
  *puVar4 = (undefined4)DAT_14c8464e0;
  puVar4[1] = uVar12;
  puVar4[2] = uVar13;
  puVar4[3] = uVar14;
  *(undefined8 *)(lVar10 + 0x48 + lVar15) = DAT_14c8464f0;
  *(undefined1 *)(lVar10 + 0x50 + lVar15) = 1;
  iVar8 = *(int *)(puVar9 + 0xc5);
  *(uint *)(puVar9 + 0xc5) = iVar8 + 1U;
  if (*(uint *)((longlong)puVar9 + 0x62c) < iVar8 + 1U) {
    FUN_140924c58(puVar5,iVar8);
  }
  lVar10 = puVar9[0xc4];
  lVar15 = (longlong)iVar8 * 0x58;
  *(undefined4 *)(lVar10 + lVar15) = 0x40000000;
  *(undefined8 *)(lVar10 + 8 + lVar15) = 0x40b9640000000000;
  *(undefined8 *)(lVar10 + 0x10 + lVar15) = 0x40b9640000000000;
  *(undefined8 *)(lVar10 + 0x18 + lVar15) = 0;
  uVar11 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  puVar5 = (undefined8 *)(lVar10 + 0x20 + lVar15);
  *puVar5 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  puVar5[1] = uVar11;
  *(undefined8 *)(lVar10 + 0x30 + lVar15) = DAT_14c8464f0;
  uVar14 = DAT_14c8464e8._4_4_;
  uVar13 = (undefined4)DAT_14c8464e8;
  uVar12 = DAT_14c8464e0._4_4_;
  puVar4 = (undefined4 *)(lVar10 + 0x38 + lVar15);
  *puVar4 = (undefined4)DAT_14c8464e0;
  puVar4[1] = uVar12;
  puVar4[2] = uVar13;
  puVar4[3] = uVar14;
  *(undefined8 *)(lVar10 + 0x48 + lVar15) = DAT_14c8464f0;
  *(undefined1 *)(lVar10 + 0x50 + lVar15) = 1;
  iVar8 = *(int *)(puVar9 + 200);
  *(uint *)(puVar9 + 200) = iVar8 + 1U;
  if (*(uint *)((longlong)puVar9 + 0x644) < iVar8 + 1U) {
    FUN_147501e1a(puVar1,iVar8);
  }
  lVar10 = puVar9[199];
  lVar15 = (longlong)iVar8 * 0x80;
  *(undefined4 *)(lVar10 + lVar15) = 0x40000000;
  uVar11 = CONCAT44(DAT_14c8463e8._4_4_,(undefined4)DAT_14c8463e8);
  puVar5 = (undefined8 *)(lVar10 + 0x20 + lVar15);
  *puVar5 = CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0);
  puVar5[1] = uVar11;
  uVar11 = DAT_14c8463d8;
  puVar5 = (undefined8 *)(lVar10 + 0x10 + lVar15);
  *puVar5 = DAT_14c8463d0;
  puVar5[1] = uVar11;
  uVar11 = DAT_14c8463d8;
  puVar5 = (undefined8 *)(lVar10 + 0x30 + lVar15);
  *puVar5 = DAT_14c8463d0;
  puVar5[1] = uVar11;
  uVar11 = CONCAT44(DAT_14c8463e8._4_4_,(undefined4)DAT_14c8463e8);
  puVar5 = (undefined8 *)(lVar10 + 0x40 + lVar15);
  *puVar5 = CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0);
  puVar5[1] = uVar11;
  uVar11 = DAT_14c8463d8;
  puVar5 = (undefined8 *)(lVar10 + 0x50 + lVar15);
  *puVar5 = DAT_14c8463d0;
  puVar5[1] = uVar11;
  uVar14 = DAT_14c8463e8._4_4_;
  uVar13 = (undefined4)DAT_14c8463e8;
  uVar12 = DAT_14c8463e0._4_4_;
  puVar4 = (undefined4 *)(lVar10 + 0x60 + lVar15);
  *puVar4 = (undefined4)DAT_14c8463e0;
  puVar4[1] = uVar12;
  puVar4[2] = uVar13;
  puVar4[3] = uVar14;
  *(undefined1 *)(lVar10 + 0x70 + lVar15) = 1;
  fVar6 = *(float *)(puVar9 + 0xd7);
  fVar7 = *(float *)((longlong)puVar9 + 0x6bc);
  iVar8 = *(int *)(puVar9 + 0xcb);
  *(uint *)(puVar9 + 0xcb) = iVar8 + 1U;
  if (*(uint *)((longlong)puVar9 + 0x65c) < iVar8 + 1U) {
    FUN_140924c58(plVar2,iVar8);
  }
  lVar10 = *plVar2;
  lVar15 = (longlong)iVar8 * 0x58;
  *(undefined4 *)(lVar10 + lVar15) = 0x40000000;
  *(double *)(lVar10 + 8 + lVar15) = (double)fVar7;
  *(double *)(lVar10 + 0x10 + lVar15) = (double)fVar6;
  *(undefined8 *)(lVar10 + 0x18 + lVar15) = 0x3ff0000000000000;
  uVar11 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  puVar5 = (undefined8 *)(lVar10 + 0x20 + lVar15);
  *puVar5 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  puVar5[1] = uVar11;
  *(undefined8 *)(lVar10 + 0x30 + lVar15) = DAT_14c8464f0;
  uVar11 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  puVar5 = (undefined8 *)(lVar10 + 0x38 + lVar15);
  *puVar5 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  puVar5[1] = uVar11;
  *(undefined8 *)(lVar10 + 0x48 + lVar15) = DAT_14c8464f0;
  *(undefined1 *)(lVar10 + 0x50 + lVar15) = 1;
  return;
}



// FUNCTION 141840d12 FUN_141840d12 body=62 status=ok
// SIG undefined FUN_141840d12(void)

void FUN_141840d12(longlong param_1,undefined4 param_2)

{
  FUN_14093a2b4(param_1 + 0x28);
  FUN_14093a2b4(param_1 + 0x58,param_2);
  FUN_14093a2b4(param_1 + 0x40,param_2);
  FUN_14093a2b4(param_1 + 0x70,param_2);
  return;
}



// FUNCTION 141840d50 FUN_141840d50 body=109 status=ok
// SIG undefined FUN_141840d50(void)

ulonglong FUN_141840d50(longlong param_1)

{
  undefined8 uVar1;
  undefined7 uVar2;
  undefined1 auStack_38 [39];
  byte local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (((*(ulonglong *)(param_1 + 0x38) >> 0x29 & 1) == 0 || *(int *)(param_1 + 0x10) != 0) &&
     ((*(ulonglong *)(param_1 + 0x38) & 2) == 0)) {
    local_11 = 0;
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_1448944a0(&local_11,*(undefined2 *)(param_1 + 0x48));
    uVar2 = (undefined7)((ulonglong)uVar1 >> 8);
    local_11 = local_11 ^ 1;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return CONCAT71(uVar2,local_11) & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141840dbe FUN_141840dbe body=107 status=ok
// SIG undefined FUN_141840dbe(void)

ulonglong FUN_141840dbe(longlong param_1)

{
  undefined8 uVar1;
  undefined7 uVar2;
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (((*(ulonglong *)(param_1 + 0x38) >> 0x29 & 1) == 0 || *(int *)(param_1 + 0x10) != 0) &&
     ((*(ulonglong *)(param_1 + 0x38) & 2) == 0)) {
    local_11 = 0;
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_1448944a0(&local_11,*(undefined2 *)(param_1 + 0x48));
    uVar2 = (undefined7)((ulonglong)uVar1 >> 8);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return CONCAT71(uVar2,local_11) & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141840e2a FUN_141840e2a body=97 status=ok
// SIG undefined FUN_141840e2a(void)

undefined8 FUN_141840e2a(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2b0))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141840e75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x2c0))(plVar1,param_2,param_3,param_4);
    return uVar2;
  }
  return 0;
}



// FUNCTION 141840e8c FUN_141840e8c body=102 status=ok
// SIG undefined FUN_141840e8c(void)

undefined8 FUN_141840e8c(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2b0))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141840ed7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x2c8))(plVar1,param_2,param_3,param_4);
    return uVar2;
  }
  return 0x3f800000;
}



// FUNCTION 141840ef2 FUN_141840ef2 body=57 status=ok
// SIG undefined FUN_141840ef2(void)

void FUN_141840ef2(undefined8 param_1,undefined4 param_2)

{
  FUN_140457ffc(&DAT_14cb10a78,param_1);
  FUN_140457ffc(&DAT_14cb10a90,param_1);
  FUN_1403d8a98(param_1,param_2);
  return;
}



// FUNCTION 141840f2c FUN_141840f2c body=128 status=ok
// SIG undefined FUN_141840f2c(void)

undefined8 * FUN_141840f2c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ae9abd0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141840fac FUN_141840fac body=91 status=ok
// SIG undefined FUN_141840fac(void)

undefined8 * FUN_141840fac(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ae9fa60;
  if (param_1[0x8c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x74] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141841007 FUN_141841007 body=49 status=ok
// SIG undefined FUN_141841007(void)

longlong FUN_141841007(void)

{
  if (DAT_14cb4b808 == 0) {
    FUN_14073dd9a(&DAT_14cb4b808,&PTR_LAB_14aed7c18);
  }
  return DAT_14cb4b808;
}



// FUNCTION 141841038 FUN_141841038 body=124 status=ok
// SIG undefined FUN_141841038(void)

void FUN_141841038(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_144769b64(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_147c0e998(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1418410b5 FUN_1418410b5 body=39 status=ok
// SIG undefined FUN_1418410b5(void)

void FUN_1418410b5(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  *puVar1 = &PTR_FUN_14aed4440;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



// FUNCTION 1418410dc FUN_1418410dc body=49 status=ok
// SIG undefined FUN_1418410dc(void)

longlong FUN_1418410dc(void)

{
  if (DAT_14cb4bb08 == 0) {
    FUN_140f50038(&DAT_14cb4bb08,&PTR_s__Script_ModelingOperators_14aee12d0);
  }
  return DAT_14cb4bb08;
}



// FUNCTION 14184110d FUN_14184110d body=49 status=ok
// SIG undefined FUN_14184110d(void)

longlong FUN_14184110d(void)

{
  if (DAT_14cb4c058 == 0) {
    FUN_14073dd9a(&DAT_14cb4c058,&PTR_LAB_14aee9230);
  }
  return DAT_14cb4c058;
}



// FUNCTION 14184113e FUN_14184113e body=49 status=ok
// SIG undefined FUN_14184113e(void)

longlong FUN_14184113e(void)

{
  if (DAT_14cb4c760 == 0) {
    FUN_14073dd9a(&DAT_14cb4c760,&PTR_LAB_14aef8028);
  }
  return DAT_14cb4c760;
}



// FUNCTION 14184116f FUN_14184116f body=49 status=ok
// SIG undefined FUN_14184116f(void)

longlong FUN_14184116f(void)

{
  if (DAT_14cb4c778 == 0) {
    FUN_14073dd9a(&DAT_14cb4c778,&PTR_LAB_14aef83e8);
  }
  return DAT_14cb4c778;
}



// FUNCTION 1418411a0 FUN_1418411a0 body=49 status=ok
// SIG undefined FUN_1418411a0(void)

longlong FUN_1418411a0(void)

{
  if (DAT_14cb4cb30 == 0) {
    FUN_14073dd9a(&DAT_14cb4cb30,&PTR_LAB_14af04a60);
  }
  return DAT_14cb4cb30;
}



// FUNCTION 1418411d2 FUN_1418411d2 body=92 status=ok
// SIG undefined FUN_1418411d2(void)

void FUN_1418411d2(longlong *param_1)

{
  FUN_1400d7bbd(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14184122e FUN_14184122e body=49 status=ok
// SIG undefined FUN_14184122e(void)

longlong FUN_14184122e(void)

{
  if (DAT_14cb4da58 == 0) {
    FUN_14086a14e(&DAT_14cb4da58,&PTR_FUN_14af1adb0);
  }
  return DAT_14cb4da58;
}



// FUNCTION 14184125f FUN_14184125f body=49 status=ok
// SIG undefined FUN_14184125f(void)

longlong FUN_14184125f(void)

{
  if (DAT_14cb4db00 == 0) {
    FUN_14086a14e(&DAT_14cb4db00,&PTR_FUN_14af1b820);
  }
  return DAT_14cb4db00;
}



// FUNCTION 141841290 FUN_141841290 body=49 status=ok
// SIG undefined FUN_141841290(void)

longlong FUN_141841290(void)

{
  if (DAT_14cb4db30 == 0) {
    FUN_14086a14e(&DAT_14cb4db30,&PTR_FUN_14af1b9f8);
  }
  return DAT_14cb4db30;
}



// FUNCTION 1418412c1 FUN_1418412c1 body=49 status=ok
// SIG undefined FUN_1418412c1(void)

longlong FUN_1418412c1(void)

{
  if (DAT_14cb4db60 == 0) {
    FUN_14086a14e(&DAT_14cb4db60,&PTR_FUN_14af1bb10);
  }
  return DAT_14cb4db60;
}



// FUNCTION 1418412f2 FUN_1418412f2 body=49 status=ok
// SIG undefined FUN_1418412f2(void)

longlong FUN_1418412f2(void)

{
  if (DAT_14cb4db78 == 0) {
    FUN_14086a14e(&DAT_14cb4db78,&PTR_FUN_14af1bb98);
  }
  return DAT_14cb4db78;
}



// FUNCTION 141841323 FUN_141841323 body=49 status=ok
// SIG undefined FUN_141841323(void)

longlong FUN_141841323(void)

{
  if (DAT_14cb4db90 == 0) {
    FUN_14086a14e(&DAT_14cb4db90,&PTR_FUN_14af1bc10);
  }
  return DAT_14cb4db90;
}



// FUNCTION 141841354 FUN_141841354 body=49 status=ok
// SIG undefined FUN_141841354(void)

longlong FUN_141841354(void)

{
  if (DAT_14cb4dba8 == 0) {
    FUN_14086a14e(&DAT_14cb4dba8,&PTR_FUN_14af1bc90);
  }
  return DAT_14cb4dba8;
}



// FUNCTION 141841385 FUN_141841385 body=49 status=ok
// SIG undefined FUN_141841385(void)

longlong FUN_141841385(void)

{
  if (DAT_14cb4dbc0 == 0) {
    FUN_14086a14e(&DAT_14cb4dbc0,&PTR_FUN_14af1bd58);
  }
  return DAT_14cb4dbc0;
}



// FUNCTION 1418413b6 FUN_1418413b6 body=49 status=ok
// SIG undefined FUN_1418413b6(void)

longlong FUN_1418413b6(void)

{
  if (DAT_14cb4dbd8 == 0) {
    FUN_14086a14e(&DAT_14cb4dbd8,&PTR_FUN_14af1bde8);
  }
  return DAT_14cb4dbd8;
}



// FUNCTION 1418413e7 FUN_1418413e7 body=49 status=ok
// SIG undefined FUN_1418413e7(void)

longlong FUN_1418413e7(void)

{
  if (DAT_14cb4dbf0 == 0) {
    FUN_14086a14e(&DAT_14cb4dbf0,&PTR_FUN_14af1be88);
  }
  return DAT_14cb4dbf0;
}



// FUNCTION 141841418 FUN_141841418 body=49 status=ok
// SIG undefined FUN_141841418(void)

longlong FUN_141841418(void)

{
  if (DAT_14cb4dc08 == 0) {
    FUN_14086a14e(&DAT_14cb4dc08,&PTR_FUN_14af1bf18);
  }
  return DAT_14cb4dc08;
}



// FUNCTION 141841449 FUN_141841449 body=49 status=ok
// SIG undefined FUN_141841449(void)

longlong FUN_141841449(void)

{
  if (DAT_14cb4deb8 == 0) {
    FUN_14073dd9a(&DAT_14cb4deb8,&PTR_LAB_14af21420);
  }
  return DAT_14cb4deb8;
}



// FUNCTION 14184147a FUN_14184147a body=49 status=ok
// SIG undefined FUN_14184147a(void)

longlong FUN_14184147a(void)

{
  if (DAT_14cb4dfa8 == 0) {
    FUN_14086a14e(&DAT_14cb4dfa8,&PTR_FUN_14af24e28);
  }
  return DAT_14cb4dfa8;
}



// FUNCTION 1418414ab FUN_1418414ab body=49 status=ok
// SIG undefined FUN_1418414ab(void)

longlong FUN_1418414ab(void)

{
  if (DAT_14cb4df48 == 0) {
    FUN_1409ce572(&DAT_14cb4df48,&PTR_FUN_14af24bf0);
  }
  return DAT_14cb4df48;
}



// FUNCTION 1418414dc FUN_1418414dc body=49 status=ok
// SIG undefined FUN_1418414dc(void)

longlong FUN_1418414dc(void)

{
  if (DAT_14cb4e140 == 0) {
    FUN_14073dd9a(&DAT_14cb4e140,&PTR_LAB_14af28b90);
  }
  return DAT_14cb4e140;
}



// FUNCTION 14184150d FUN_14184150d body=49 status=ok
// SIG undefined FUN_14184150d(void)

longlong FUN_14184150d(void)

{
  if (DAT_14cb4e358 == 0) {
    FUN_14086a14e(&DAT_14cb4e358,&PTR_FUN_14af2e6c0);
  }
  return DAT_14cb4e358;
}



// FUNCTION 14184153e FUN_14184153e body=49 status=ok
// SIG undefined FUN_14184153e(void)

longlong FUN_14184153e(void)

{
  if (DAT_14cb4e4a8 == 0) {
    FUN_14073dd9a(&DAT_14cb4e4a8,&PTR_LAB_14af31ee0);
  }
  return DAT_14cb4e4a8;
}



// FUNCTION 14184156f FUN_14184156f body=49 status=ok
// SIG undefined FUN_14184156f(void)

longlong FUN_14184156f(void)

{
  if (DAT_14cb4e5a0 == 0) {
    FUN_14073dd9a(&DAT_14cb4e5a0,&PTR_LAB_14af36c30);
  }
  return DAT_14cb4e5a0;
}



// FUNCTION 1418415a0 FUN_1418415a0 body=49 status=ok
// SIG undefined FUN_1418415a0(void)

longlong FUN_1418415a0(void)

{
  if (DAT_14cb4e5c8 == 0) {
    FUN_14086a14e(&DAT_14cb4e5c8,&PTR_FUN_14af3ea98);
  }
  return DAT_14cb4e5c8;
}



// FUNCTION 1418415d1 FUN_1418415d1 body=49 status=ok
// SIG undefined FUN_1418415d1(void)

longlong FUN_1418415d1(void)

{
  if (DAT_14cb4e778 == 0) {
    FUN_14073dd9a(&DAT_14cb4e778,&PTR_LAB_14af42460);
  }
  return DAT_14cb4e778;
}



// FUNCTION 141841602 FUN_141841602 body=49 status=ok
// SIG undefined FUN_141841602(void)

longlong FUN_141841602(void)

{
  if (DAT_14cb4eb38 == 0) {
    FUN_14073dd9a(&DAT_14cb4eb38,&PTR_LAB_14af4ec40);
  }
  return DAT_14cb4eb38;
}



// FUNCTION 141841633 FUN_141841633 body=49 status=ok
// SIG undefined FUN_141841633(void)

longlong FUN_141841633(void)

{
  if (DAT_14cb4ede8 == 0) {
    FUN_14073dd9a(&DAT_14cb4ede8,&PTR_LAB_14af563a0);
  }
  return DAT_14cb4ede8;
}



// FUNCTION 141841664 FUN_141841664 body=49 status=ok
// SIG undefined FUN_141841664(void)

longlong FUN_141841664(void)

{
  if (DAT_14cb4ef10 == 0) {
    FUN_14086a14e(&DAT_14cb4ef10,&PTR_FUN_14af59fa0);
  }
  return DAT_14cb4ef10;
}



// FUNCTION 141841695 FUN_141841695 body=49 status=ok
// SIG undefined FUN_141841695(void)

longlong FUN_141841695(void)

{
  if (DAT_14cb4f0b0 == 0) {
    FUN_14073dd9a(&DAT_14cb4f0b0,&PTR_LAB_14af625d0);
  }
  return DAT_14cb4f0b0;
}



// FUNCTION 1418416c6 FUN_1418416c6 body=49 status=ok
// SIG undefined FUN_1418416c6(void)

longlong FUN_1418416c6(void)

{
  if (DAT_14cb4f250 == 0) {
    FUN_14073dd9a(&DAT_14cb4f250,&PTR_LAB_14af6a0b0);
  }
  return DAT_14cb4f250;
}



// FUNCTION 1418416f7 FUN_1418416f7 body=49 status=ok
// SIG undefined FUN_1418416f7(void)

longlong FUN_1418416f7(void)

{
  if (DAT_14cb4f5d0 == 0) {
    FUN_14073dd9a(&DAT_14cb4f5d0,&PTR_LAB_14af73350);
  }
  return DAT_14cb4f5d0;
}



// FUNCTION 141841728 FUN_141841728 body=49 status=ok
// SIG undefined FUN_141841728(void)

longlong FUN_141841728(void)

{
  if (DAT_14cb4fa00 == 0) {
    FUN_14073dd9a(&DAT_14cb4fa00,&PTR_LAB_14af893e0);
  }
  return DAT_14cb4fa00;
}



// FUNCTION 141841759 FUN_141841759 body=49 status=ok
// SIG undefined FUN_141841759(void)

longlong FUN_141841759(void)

{
  if (DAT_14cb4fdb0 == 0) {
    FUN_14073dd9a(&DAT_14cb4fdb0,&PTR_LAB_14af940e0);
  }
  return DAT_14cb4fdb0;
}



// FUNCTION 14184178a FUN_14184178a body=49 status=ok
// SIG undefined FUN_14184178a(void)

longlong FUN_14184178a(void)

{
  if (DAT_14cb4feb8 == 0) {
    FUN_14073dd9a(&DAT_14cb4feb8,&PTR_LAB_14af96930);
  }
  return DAT_14cb4feb8;
}



// FUNCTION 1418417bb FUN_1418417bb body=49 status=ok
// SIG undefined FUN_1418417bb(void)

longlong FUN_1418417bb(void)

{
  if (DAT_14cb501b0 == 0) {
    FUN_14073dd9a(&DAT_14cb501b0,&PTR_LAB_14af9fca0);
  }
  return DAT_14cb501b0;
}



// FUNCTION 1418417ec FUN_1418417ec body=216 status=ok
// SIG undefined FUN_1418417ec(void)

void FUN_1418417ec(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x7ffffffffffffffU) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,4);
      }
    }
    iVar1 = (int)(uVar2 >> 5);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x20,4);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1418418c4 FUN_1418418c4 body=40 status=ok
// SIG undefined FUN_1418418c4(void)

undefined8 FUN_1418418c4(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418418ec FUN_1418418ec body=40 status=ok
// SIG undefined FUN_1418418ec(void)

undefined8 FUN_1418418ec(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141841914 FUN_141841914 body=40 status=ok
// SIG undefined FUN_141841914(void)

undefined8 FUN_141841914(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14184193c FUN_14184193c body=40 status=ok
// SIG undefined FUN_14184193c(void)

undefined8 FUN_14184193c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141841964 FUN_141841964 body=40 status=ok
// SIG undefined FUN_141841964(void)

undefined8 FUN_141841964(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14184198c FUN_14184198c body=45 status=ok
// SIG undefined FUN_14184198c(void)

undefined8 FUN_14184198c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1e8);
  }
  return param_1;
}



// FUNCTION 1418419ba FUN_1418419ba body=45 status=ok
// SIG undefined FUN_1418419ba(void)

undefined8 FUN_1418419ba(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1e8);
  }
  return param_1;
}



// FUNCTION 1418419e8 FUN_1418419e8 body=475 status=ok
// SIG undefined FUN_1418419e8(void)

void FUN_1418419e8(longlong *param_1)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1[9] != 0) {
    local_30 = *(undefined8 *)(param_1[9] + 0x10);
    FUN_1400021e4(&local_30,local_28);
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (*param_1 != 0) {
    local_30 = *(undefined8 *)(*param_1 + 0x10);
    FUN_1400021e4(&local_30,local_28);
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (param_1[1] != 0) {
    local_30 = *(undefined8 *)(param_1[1] + 0x10);
    FUN_1400021e4(&local_30,local_28);
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (param_1[2] != 0) {
    local_30 = *(undefined8 *)(param_1[2] + 0x10);
    FUN_1400021e4(&local_30,local_28);
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (param_1[4] != 0) {
    local_30 = *(undefined8 *)(param_1[4] + 0x10);
    FUN_1400021e4(&local_30,local_28);
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (param_1[5] != 0) {
    local_30 = *(undefined8 *)(param_1[5] + 0x10);
    FUN_1400021e4(&local_30,local_28);
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (param_1[6] != 0) {
    local_30 = *(undefined8 *)(param_1[6] + 0x10);
    FUN_1400021e4(&local_30,local_28);
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (param_1[7] != 0) {
    local_30 = *(undefined8 *)(param_1[7] + 0x10);
    FUN_1400021e4(&local_30,local_28);
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (param_1[8] != 0) {
    local_30 = *(undefined8 *)(param_1[8] + 0x10);
    FUN_1400021e4(&local_30,local_28);
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141841bc4 FUN_141841bc4 body=53 status=ok
// SIG undefined FUN_141841bc4(void)

void FUN_141841bc4(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar3 = &PTR_FUN_14afbeb70;
  puVar3[1] = uVar2;
  *(undefined4 *)(puVar3 + 2) = uVar1;
  return;
}



// FUNCTION 141841bfa FUN_141841bfa body=137 status=ok
// SIG undefined FUN_141841bfa(void)

void FUN_141841bfa(undefined8 param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (*(char *)((longlong)param_2 + 100) != '\x01') {
    puVar1 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar1 + 3;
    if ((undefined8 *)param_2[1] < puVar2) {
      FUN_140023dd8(param_2,0x20);
      puVar1 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar2 = puVar1 + 3;
    }
    *param_2 = (ulonglong)puVar2;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar1;
    param_2[6] = (ulonglong)(puVar1 + 1);
    puVar1[1] = 0;
    *puVar1 = &PTR_LAB_14afbf188;
    puVar1[2] = param_1;
    return;
  }
  FUN_143bfbf48(DAT_14cb51ed0);
  return;
}



// FUNCTION 141841c84 FUN_141841c84 body=29 status=ok
// SIG undefined FUN_141841c84(void)

undefined8 FUN_141841c84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141841ca1 FUN_141841ca1 body=49 status=ok
// SIG undefined FUN_141841ca1(void)

longlong FUN_141841ca1(void)

{
  if (DAT_14cb52130 == 0) {
    FUN_14073dd9a(&DAT_14cb52130,&PTR_LAB_14afc0b30);
  }
  return DAT_14cb52130;
}



// FUNCTION 141841cd2 FUN_141841cd2 body=253 status=ok
// SIG undefined FUN_141841cd2(void)

undefined1 FUN_141841cd2(void)

{
  int iVar1;
  longlong lVar2;
  undefined1 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb529e4) {
    FUN_144b3d300(&DAT_14cb529e4);
    if (DAT_14cb529e4 == -1) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14cb529e0 = FUN_14054d46e(&DAT_14c846b20,L"slforcetagging");
      _Init_thread_footer(&DAT_14cb529e4);
    }
  }
  lVar2 = DAT_14cb52978;
  if (DAT_14cb529e0 == '\0') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar6 = 0;
    }
    else if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      uVar6 = (ulonglong)(DVar4 != DVar5);
    }
    else {
      uVar6 = 1;
    }
    uVar3 = *(undefined1 *)(lVar2 + uVar6);
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 141841dd0 FUN_141841dd0 body=294 status=ok
// SIG undefined FUN_141841dd0(void)

undefined1 FUN_141841dd0(void)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  
  piVar1 = DAT_14cb52aa0;
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar3 = *(int *)(lVar7 + 0xc60);
  if (iVar3 == 0x40000002) {
    iVar8 = *DAT_14cb52aa0;
  }
  else {
    if (DAT_14c86a9f8 == 0) {
      iVar8 = *DAT_14cb52aa0;
    }
    else if (iVar3 == 2) {
      iVar8 = *DAT_14cb52aa0;
      iVar3 = 2;
    }
    else {
      uVar6 = 1;
      if (iVar3 == 1) {
        DVar4 = FUN_140ad26c0();
        DVar5 = GetCurrentThreadId();
        uVar6 = (ulonglong)(DVar4 != DVar5);
        iVar3 = *(int *)(lVar7 + 0xc60);
      }
      iVar8 = piVar1[uVar6];
      if (iVar3 == 0x40000002) goto LAB_141841ea5;
    }
    lVar7 = DAT_14cb52a70;
    if (((DAT_14c86a9f8 & 1) != 0) && (iVar3 != 2)) {
      if (iVar3 == 1) {
        DVar4 = FUN_140ad26c0();
        DVar5 = GetCurrentThreadId();
        uVar6 = (ulonglong)(DVar4 != DVar5);
      }
      else {
        uVar6 = 1;
      }
      goto LAB_141841e52;
    }
  }
LAB_141841ea5:
  uVar6 = 0;
  lVar7 = DAT_14cb52a70;
LAB_141841e52:
  if (((*(int *)(lVar7 + uVar6 * 4) == 0) || (iVar3 = FUN_1401433c5(), iVar3 != 0)) ||
     (iVar3 = FUN_14014334e(), 0 < iVar8 || iVar3 == 0)) {
    uVar2 = 3;
    if (iVar8 < 2) {
      uVar2 = iVar8 == 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 141841f4c FUN_141841f4c body=273 status=ok
// SIG undefined FUN_141841f4c(void)

void FUN_141841f4c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  
  iVar4 = FUN_1401433c5();
  if ((iVar4 == 0) && (iVar4 = FUN_14014334e(), lVar6 = DAT_14cb528e8, iVar4 != 0)) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(int *)(lVar1 + 0xc60) == 0x40000002) {
      uVar5 = 0;
    }
    else {
      bVar3 = FUN_144a61b4f();
      uVar5 = (ulonglong)(bVar3 ^ 1);
    }
    lVar2 = DAT_14cb528e8;
    if ((*(int *)(lVar6 + uVar5 * 4) != 0) && (*(int *)(param_2 + 0x10) != 0)) {
      if (*(int *)(lVar1 + 0xc60) == 0x40000002) {
        uVar5 = 0;
      }
      else {
        bVar3 = FUN_144a61b4f();
        uVar5 = (ulonglong)(bVar3 ^ 1);
      }
      if (*(int *)(lVar2 + uVar5 * 4) == 2) {
        iVar4 = 1;
        if (1 < DAT_14cb529f8) {
          iVar4 = DAT_14cb529f8;
        }
      }
      else {
        iVar4 = FUN_143c12078();
        iVar4 = iVar4 + 1;
      }
      iVar7 = *(int *)(param_2 + 0x10);
      if (0 < iVar7) {
        lVar6 = 0;
        do {
          lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 8) + lVar6 * 8) + 0x10);
          if (lVar1 != 0) {
            *(float *)(lVar1 + 0x464) = *(float *)(lVar1 + 0x464) * (1.0 / (float)iVar4);
            *(float *)(lVar1 + 0x468) = *(float *)(lVar1 + 0x468) * (1.0 / (float)iVar4);
            iVar7 = *(int *)(param_2 + 0x10);
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 < iVar7);
      }
    }
  }
  return;
}



// FUNCTION 14184205e FUN_14184205e body=255 status=ok
// SIG undefined FUN_14184205e(void)

void FUN_14184205e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x3ffffffffffffff) * 4]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 6)) {
      uVar3 = uVar4 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14184215e FUN_14184215e body=156 status=ok
// SIG undefined FUN_14184215e(void)

void FUN_14184215e(void)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)DAT_14cb52b80;
  if (((((longlong)(int)(DAT_14cb52b84 - DAT_14cb52b80) & 0x3ffffffffffff00U) != 0) ||
      ((int)(DAT_14cb52b80 * 3) < DAT_14cb52b84 * 2)) &&
     (DAT_14cb52b80 == 0 || 0x40 < (int)(DAT_14cb52b84 - DAT_14cb52b80))) {
    if (0 < (int)DAT_14cb52b80) {
      uVar1 = FUN_144a3809e(uVar1 << 6,8);
      uVar1 = uVar1 >> 6;
    }
    if ((int)uVar1 != DAT_14cb52b84) {
      DAT_14cb52b84 = (int)uVar1;
      FUN_1446f8d3c(&DAT_14cb52b78,DAT_14cb52b80,uVar1,0x40,8);
    }
  }
  return;
}



// FUNCTION 1418421fa FUN_1418421fa body=69 status=ok
// SIG undefined FUN_1418421fa(void)

void FUN_1418421fa(longlong param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 0x30);
    do {
      if (*plVar3 != 0) {
        LOCK();
        puVar1 = (uint *)(*plVar3 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      plVar3 = plVar3 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141842240 FUN_141842240 body=164 status=ok
// SIG undefined FUN_141842240(void)

/* WARNING: Removing unreachable block (ram,0x0001418422de) */

void FUN_141842240(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(&local_28,L"viewport=%u",*(undefined4 *)(param_2 + 0x20));
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1447a1bd6(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar3 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar3) = 0;
  *(undefined8 *)(lVar2 + lVar3) = local_28;
  *(undefined4 *)(lVar2 + 8 + lVar3) = (undefined4)local_20;
  *(undefined4 *)(lVar2 + 0xc + lVar3) = local_20._4_4_;
  local_20 = 0;
  local_28 = 0;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418422e6 FUN_1418422e6 body=173 status=ok
// SIG undefined FUN_1418422e6(void)

/* WARNING: Removing unreachable block (ram,0x00014184238d) */

void FUN_1418422e6(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = (**(code **)*param_2)(param_2);
  FUN_140002266(&local_28,L"frame=%u",uVar3);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1447a1bd6(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar4) = 0;
  *(undefined8 *)(lVar2 + lVar4) = local_28;
  *(undefined4 *)(lVar2 + 8 + lVar4) = (undefined4)local_20;
  *(undefined4 *)(lVar2 + 0xc + lVar4) = local_20._4_4_;
  local_20 = 0;
  local_28 = 0;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141842394 FUN_141842394 body=29 status=ok
// SIG undefined FUN_141842394(void)

undefined8 FUN_141842394(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418423b1 FUN_1418423b1 body=58 status=ok
// SIG undefined FUN_1418423b1(void)

void FUN_1418423b1(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14077009c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14afd1580;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  return;
}



// FUNCTION 1418423ec FUN_1418423ec body=67 status=ok
// SIG undefined FUN_1418423ec(void)

undefined8 * FUN_1418423ec(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14afd1580;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141842430 FUN_141842430 body=57 status=ok
// SIG undefined FUN_141842430(void)

void FUN_141842430(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb53e38 == 0) {
    uVar1 = FUN_140ef4a9e();
    DAT_14cb53e38 = FUN_140002ddd(FUN_1464abd0c,uVar1,L"TimeOfDayCycleDef");
  }
  return;
}



// FUNCTION 14184246a FUN_14184246a body=57 status=ok
// SIG undefined FUN_14184246a(void)

void FUN_14184246a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb53ee0 == 0) {
    uVar1 = FUN_140ef4a9e();
    DAT_14cb53ee0 = FUN_140002ddd(FUN_1464ac04c,uVar1,L"TimeOfDayCloudscapeKey");
  }
  return;
}



// FUNCTION 1418424a4 FUN_1418424a4 body=57 status=ok
// SIG undefined FUN_1418424a4(void)

void FUN_1418424a4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb53f40 == 0) {
    uVar1 = FUN_140ef4a9e();
    DAT_14cb53f40 = FUN_140002ddd(FUN_1464ac214,uVar1,L"TimeOfDayPropertyParameterFloat");
  }
  return;
}



// FUNCTION 1418424de FUN_1418424de body=57 status=ok
// SIG undefined FUN_1418424de(void)

void FUN_1418424de(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb53f58 == 0) {
    uVar1 = FUN_140ef4a9e();
    DAT_14cb53f58 = FUN_140002ddd(FUN_1464ac274,uVar1,L"TimeOfDayPropertyParameterInteger");
  }
  return;
}



// FUNCTION 141842518 FUN_141842518 body=57 status=ok
// SIG undefined FUN_141842518(void)

void FUN_141842518(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb53f70 == 0) {
    uVar1 = FUN_140ef4a9e();
    DAT_14cb53f70 = FUN_140002ddd(FUN_1464ac2d4,uVar1,L"TimeOfDayPropertyParameterColor");
  }
  return;
}



// FUNCTION 141842552 FUN_141842552 body=57 status=ok
// SIG undefined FUN_141842552(void)

void FUN_141842552(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb53f88 == 0) {
    uVar1 = FUN_140ef4a9e();
    DAT_14cb53f88 = FUN_140002ddd(FUN_1464ac334,uVar1,L"TimeOfDayPropertyParameterLinearColor");
  }
  return;
}



// FUNCTION 14184258c FUN_14184258c body=57 status=ok
// SIG undefined FUN_14184258c(void)

void FUN_14184258c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb53fa0 == 0) {
    uVar1 = FUN_140ef4a9e();
    DAT_14cb53fa0 = FUN_140002ddd(FUN_1464ac394,uVar1,L"TimeOfDayPropertyParameterBoolean");
  }
  return;
}



// FUNCTION 1418425ce FUN_1418425ce body=76 status=ok
// SIG undefined FUN_1418425ce(void)

undefined8 FUN_1418425ce(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_14101b842(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x00014184260f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 14184261a FUN_14184261a body=960 status=ok
// SIG undefined FUN_14184261a(void)

void FUN_14184261a(longlong *param_1,uint param_2,undefined8 *param_3,undefined4 param_4,
                  undefined4 param_5,char param_6)

{
  ulonglong uVar1;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined1 local_170 [16];
  undefined **local_160;
  longlong local_158;
  undefined4 local_150;
  int local_14c;
  undefined1 local_148 [16];
  longlong local_138;
  undefined4 local_130;
  uint local_12c;
  undefined8 local_128;
  longlong local_118;
  undefined4 local_110;
  longlong local_108;
  longlong local_f0;
  undefined8 local_e0;
  uint local_d8;
  undefined **local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  undefined1 local_b8 [16];
  longlong local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  longlong local_88;
  undefined4 local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined2 local_64;
  longlong local_60 [8];
  
  local_60[2] = DAT_14c707940 ^ (ulonglong)auStack_198;
  if ((param_2 < 2) &&
     (((param_6 != '\0' || ((char)param_1[(ulonglong)param_2 * 0x12 + 0xb] != '\x01')) ||
      ((param_3 != (undefined8 *)0x0 && (*(char *)(param_3 + 1) == '\x01')))))) {
    local_e0 = 0;
    local_d8 = local_d8 & 0xffffff00;
    local_a8 = 0;
    local_a0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_9c = 0x80;
    uStack_98 = 0xffffffff;
    local_94 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_64 = 0x404;
    local_d0 = (undefined **)&DAT_14a176f00;
    local_60[0] = 0;
    local_60[1] = 0;
    if (param_3 == (undefined8 *)0x0) {
      local_68 = (undefined4)param_1[9];
    }
    else {
      local_d8 = *(uint *)(param_3 + 1);
      local_e0 = *param_3;
      local_64 = *(undefined2 *)((longlong)param_3 + 0x7c);
      local_68 = *(undefined4 *)(param_3 + 0xf);
      FUN_14093c00e(local_60,param_3 + 0x10);
    }
    local_178 = param_5;
    FUN_140f3fd67(local_170,param_1 + (ulonglong)param_2 * 0x12 + 10,&local_e0,param_4);
    (**(code **)(*param_1 + 0x38))(param_1,param_2,local_170);
    local_160 = (undefined **)&DAT_14a176f00;
    if (local_f0 != 0) {
      FUN_1400020a8();
    }
    local_160 = &PTR_FUN_14a177080;
    if (local_108 != 0) {
      FUN_1400020a8();
    }
    local_110 = 0;
    if (local_118 != 0) {
      FUN_1400020a8();
    }
    local_150 = 0;
    if (local_14c != 0) {
      FUN_14472eb64(&local_158,0);
    }
    local_128 = 0xffffffff;
    local_130 = 0;
    if (0x80 < local_12c) {
      local_12c = 0x80;
      FUN_1446efbd8(local_148,0);
    }
    if (local_138 != 0) {
      FUN_1400020a8();
    }
    if (local_158 != 0) {
      FUN_1400020a8();
    }
    local_d0 = (undefined **)&DAT_14a176f00;
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
    local_d0 = &PTR_FUN_14a177080;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    local_80 = 0;
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    uVar1 = uStack_c0 >> 0x20;
    uStack_c0 = uStack_c0 & 0xffffffff00000000;
    if ((int)uVar1 != 0) {
      FUN_14472eb64(&local_c8,0);
    }
    uStack_98 = 0xffffffff;
    local_94 = 0;
    local_a0 = 0;
    if (0x80 < local_9c) {
      local_9c = 0x80;
      FUN_1446efbd8(local_b8,0);
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60[2] ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418429dc FUN_1418429dc body=450 status=ok
// SIG undefined FUN_1418429dc(void)

void FUN_1418429dc(longlong *param_1,uint param_2,undefined8 *param_3,undefined4 param_4,
                  undefined4 param_5,char param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_498 [32];
  undefined4 local_478;
  undefined1 local_470 [528];
  undefined8 local_260;
  undefined4 local_258;
  float local_1e8;
  float local_168;
  float local_e8;
  float local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_498;
  if (1 < param_2) goto LAB_141842ae7;
  if ((param_6 == '\0') && ((char)param_1[(ulonglong)param_2 * 0x42 + 3] == '\x01')) {
    if ((param_3 == (undefined8 *)0x0) || (*(char *)(param_3 + 1) != '\x01')) goto LAB_141842ae7;
    FUN_14129df22(&local_260);
LAB_141842a43:
    local_258 = *(undefined4 *)(param_3 + 1);
    local_260 = *param_3;
    lVar2 = 4;
    puVar1 = &local_260;
    do {
      *(undefined2 *)((longlong)puVar1 + 0x7c) = *(undefined2 *)((longlong)param_3 + 0x7c);
      *(undefined4 *)(puVar1 + 0xf) = *(undefined4 *)(param_3 + 0xf);
      FUN_14093c00e(puVar1 + 0x10,param_3 + 0x10);
      lVar2 = lVar2 + -1;
      param_3 = param_3 + 0x10;
      puVar1 = puVar1 + 0x10;
    } while (lVar2 != 0);
  }
  else {
    FUN_14129df22(&local_260);
    if (param_3 != (undefined8 *)0x0) goto LAB_141842a43;
    local_1e8 = (float)*(byte *)((longlong)param_1 + 0xe);
    local_168 = (float)*(byte *)((longlong)param_1 + 0xd);
    local_e8 = (float)*(byte *)((longlong)param_1 + 0xc);
    local_68 = (float)*(byte *)((longlong)param_1 + 0xf);
  }
  local_478 = param_5;
  FUN_14130b975(local_470,param_1 + (ulonglong)param_2 * 0x42 + 2,&local_260,param_4);
  (**(code **)(*param_1 + 0x28))(param_1,param_2,local_470);
  FUN_140b623da(local_470);
  FUN_140b623da(&local_260);
LAB_141842ae7:
  if ((local_50 ^ (ulonglong)auStack_498) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141842ba0 FUN_141842ba0 body=306 status=ok
// SIG undefined FUN_141842ba0(void)

void FUN_141842ba0(longlong param_1,undefined4 param_2,float param_3)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (0.0 < param_3) {
    lVar2 = param_1 + 0x270;
    lVar1 = 0;
    if (1.0 <= param_3) {
      do {
        fVar3 = (float)FUN_1448c9f94(lVar2,param_2,0);
        *(double *)(&local_78 + lVar1 * 2) = (double)fVar3;
        lVar1 = lVar1 + 1;
        lVar2 = lVar2 + 0x80;
      } while (lVar1 != 4);
    }
    else {
      do {
        fVar3 = (float)FUN_1448c9f94(lVar2 + -0x210,param_2,0);
        fVar4 = (float)FUN_1448c9f94(lVar2,param_2);
        *(double *)(&local_78 + lVar1 * 2) = (double)((fVar4 - fVar3) * param_3 + fVar3);
        lVar1 = lVar1 + 1;
        lVar2 = lVar2 + 0x80;
      } while (lVar1 != 4);
    }
  }
  else {
    lVar2 = param_1 + 0x60;
    lVar1 = 0;
    do {
      fVar3 = (float)FUN_1448c9f94(lVar2,param_2,0);
      *(double *)(&local_78 + lVar1 * 2) = (double)fVar3;
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 0x80;
    } while (lVar1 != 4);
  }
  *(undefined4 *)(param_1 + 0x10) = local_78;
  *(undefined4 *)(param_1 + 0x14) = uStack_74;
  *(undefined4 *)(param_1 + 0x18) = uStack_70;
  *(undefined4 *)(param_1 + 0x1c) = uStack_6c;
  *(undefined4 *)(param_1 + 0x20) = local_68;
  *(undefined4 *)(param_1 + 0x24) = uStack_64;
  *(undefined4 *)(param_1 + 0x28) = uStack_60;
  *(undefined4 *)(param_1 + 0x2c) = uStack_5c;
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141842cd4 FUN_141842cd4 body=162 status=ok
// SIG undefined FUN_141842cd4(void)

void FUN_141842cd4(longlong param_1,uint param_2)

{
  float *pfVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  float local_28 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 < 2) {
    local_28[0] = (float)*(double *)(param_1 + 0x30);
    local_28[1] = (float)*(double *)(param_1 + 0x38);
    local_28[2] = (float)*(double *)(param_1 + 0x40);
    local_28[3] = (float)*(double *)(param_1 + 0x48);
    pfVar1 = (float *)((ulonglong)param_2 * 0x210 + param_1 + 200);
    lVar2 = 0;
    do {
      FUN_14093cdbe(pfVar1 + -0x1a);
      *pfVar1 = local_28[lVar2];
      lVar2 = lVar2 + 1;
      pfVar1 = pfVar1 + 0x20;
    } while (lVar2 != 4);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141842d78 FUN_141842d78 body=246 status=ok
// SIG undefined FUN_141842d78(void)

longlong FUN_141842d78(uint *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
      || ((plVar5 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar5 == (longlong *)0x0 || (*(uint *)(plVar5 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar4 = *plVar5, lVar4 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar4 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar4);
      if (lVar4 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      if ((*(uint *)(lVar3 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar4);
      }
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar3 = FUN_140fb7d76();
  if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
      lVar3 + 0x30)) {
    return lVar4;
  }
  return 0;
}



// FUNCTION 141842e6e FUN_141842e6e body=699 status=ok
// SIG undefined FUN_141842e6e(void)

void FUN_141842e6e(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint *puVar11;
  undefined2 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  bool bVar17;
  
  if (*(char *)(param_1 + 0x51c) == '\x01') {
    if (*(char *)(param_1 + 0x518) == '\x01') {
      *(undefined1 *)(param_1 + 0x518) = 0;
    }
    *(undefined1 *)(param_1 + 0x51c) = 0;
  }
  lVar13 = DAT_14cb543a8;
  iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (iVar2 == 0x40000002) {
    uVar8 = 0;
  }
  else {
    bVar17 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar2 != 2)) {
      if (iVar2 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        bVar17 = DVar6 == DVar7;
      }
      else {
        bVar17 = false;
      }
    }
    uVar8 = (ulonglong)(bVar17 ^ 1);
  }
  if (*(char *)(lVar13 + uVar8) != '\x01') {
    return;
  }
  if (*(int *)(param_1 + 0x22c) != 0) {
    puVar11 = (uint *)(param_1 + 0x228);
    uVar3 = *puVar11;
    if ((((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) &&
        (lVar13 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar13 != 0)) &&
       ((*(int *)(lVar13 + 0x10) == *(int *)(param_1 + 0x22c) &&
        (lVar9 = 0x3c8, (*(uint *)(lVar13 + 8) & 0x10200000) == 0)))) goto LAB_141842f4b;
  }
  puVar11 = (uint *)(param_1 + 0x238);
  lVar9 = 0x3a0;
LAB_141842f4b:
  if (((((puVar11[1] != 0) && (uVar3 = *puVar11, -1 < (int)uVar3)) &&
       (((int)uVar3 < DAT_14c9647dc &&
        (((plVar15 = (longlong *)
                     ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar15 != (longlong *)0x0 && (*(uint *)(plVar15 + 2) == puVar11[1])) &&
         ((*(uint *)(plVar15 + 1) & 0x10200000) == 0)))))) &&
      ((*plVar15 != 0 && (plVar15 = (longlong *)(*plVar15 + lVar9), plVar15 != (longlong *)0x0))))
     && ((*(int *)(param_1 + 0x234) != 0 &&
         (((uVar3 = *(uint *)(param_1 + 0x230), -1 < (int)uVar3 && ((int)uVar3 < DAT_14c9647dc)) &&
          ((plVar14 = (longlong *)
                      ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
           plVar14 != (longlong *)0x0 &&
           (((int)plVar14[2] == *(int *)(param_1 + 0x234) &&
            ((*(uint *)(plVar14 + 1) & 0x10200000) == 0)))))))))) {
    if ((*(uint *)(plVar14 + 1) & 0x10200000) == 0) {
      lVar13 = *plVar14;
    }
    else {
      lVar13 = 0;
    }
    lVar9 = (**(code **)(*plVar15 + 0x20))();
    if (lVar9 != 0) {
      lVar4 = *(longlong *)(lVar13 + 0x3cc);
      if (lVar4 == 0) {
        uVar10 = 0;
LAB_14184309e:
        uVar1 = *(undefined4 *)(lVar13 + 0x3c8);
        bVar17 = *(char *)(lVar13 + 0x3da) == '\x01';
        if (bVar17) {
          *(undefined4 *)(param_1 + 0x514) = *(undefined4 *)(lVar13 + 0x3dc);
        }
        *(undefined8 *)(param_1 + 0x508) = uVar10;
        *(undefined4 *)(param_1 + 0x510) = uVar1;
        *(bool *)(param_1 + 0x518) = bVar17;
        *(undefined1 *)(param_1 + 0x51c) = 1;
      }
      else if ((longlong)*(int *)(lVar9 + 0x98) != 0) {
        puVar16 = *(undefined8 **)(lVar9 + 0x90);
        lVar9 = (longlong)*(int *)(lVar9 + 0x98) * 0x90;
        do {
          puVar12 = &DAT_149dfb77a;
          if (*(int *)(puVar16 + 1) != 0) {
            puVar12 = (undefined2 *)*puVar16;
          }
          cVar5 = FUN_1402ca022(lVar4,puVar12);
          if (cVar5 != '\0') {
            if (puVar16 == (undefined8 *)0x0) {
              return;
            }
            uVar10 = *(undefined8 *)(lVar13 + 0x3cc);
            goto LAB_14184309e;
          }
          puVar16 = puVar16 + 0x12;
          lVar9 = lVar9 + -0x90;
        } while (lVar9 != 0);
      }
    }
  }
  return;
}



// FUNCTION 14184312a FUN_14184312a body=192 status=ok
// SIG undefined FUN_14184312a(void)

void FUN_14184312a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_1 + 0x58) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x50);
    lVar8 = (longlong)*(int *)(param_1 + 0x58) * 0x18;
    do {
      lVar3 = *plVar7;
      if (lVar3 != 0) {
        uVar6 = FUN_140d3bd82();
        cVar5 = FUN_1448093f4(lVar3,uVar6);
        if (cVar5 != '\0') {
          FUN_140d3bdbc(plVar7,local_40);
          (*(code *)*param_2)(param_2[1],local_40);
          plVar4 = local_38;
          if (local_38 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_38 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_38)(local_38);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
              }
            }
          }
        }
      }
      plVar7 = plVar7 + 3;
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418431ec FUN_1418431ec body=315 status=ok
// SIG undefined FUN_1418431ec(void)

void FUN_1418431ec(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  
  if ((((char)param_1[0x2f] == '\x03') && (*(char *)((longlong)param_1 + 0x48c) == '\x01')) &&
     ((longlong)(int)param_2[1] != 0)) {
    plVar11 = (longlong *)*param_2;
    plVar1 = (longlong *)((longlong)plVar11 + (longlong)(int)param_2[1] * 0x14);
    bVar6 = false;
    do {
      plVar7 = (longlong *)param_1[0xa0];
      iVar3 = (int)param_1[0xa1];
      lVar9 = (longlong)iVar3;
      if (lVar9 != 0) {
        lVar10 = lVar9 * 0x14;
        plVar8 = plVar7;
        do {
          if (*plVar8 == *plVar11) {
            if (plVar8 != (longlong *)0x0) {
              if (plVar8[1] == plVar11[1]) {
                if ((*(float *)(plVar8 + 2) == *(float *)(plVar11 + 2)) &&
                   (!NAN(*(float *)(plVar8 + 2)) && !NAN(*(float *)(plVar11 + 2))))
                goto LAB_1418432b4;
              }
              plVar8[1] = plVar11[1];
              *(int *)(plVar8 + 2) = (int)plVar11[2];
              goto LAB_1418432b2;
            }
            break;
          }
          plVar8 = (longlong *)((longlong)plVar8 + 0x14);
          lVar10 = lVar10 + -0x14;
        } while (lVar10 != 0);
      }
      *(uint *)(param_1 + 0xa1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0x50c) < iVar3 + 1U) {
        FUN_1457d97f6(param_1 + 0xa0,iVar3);
        plVar7 = (longlong *)param_1[0xa0];
      }
      *(int *)((longlong)plVar7 + lVar9 * 0x14 + 0x10) = (int)plVar11[2];
      uVar4 = *(undefined4 *)((longlong)plVar11 + 4);
      lVar10 = plVar11[1];
      uVar5 = *(undefined4 *)((longlong)plVar11 + 0xc);
      puVar2 = (undefined4 *)((longlong)plVar7 + lVar9 * 0x14);
      *puVar2 = (int)*plVar11;
      puVar2[1] = uVar4;
      puVar2[2] = (int)lVar10;
      puVar2[3] = uVar5;
LAB_1418432b2:
      bVar6 = true;
LAB_1418432b4:
      plVar11 = (longlong *)((longlong)plVar11 + 0x14);
    } while (plVar11 != plVar1);
    if (bVar6) {
      (**(code **)(*param_1 + 0x578))(param_1);
      FUN_144a62f0c(param_1,param_1[5],0xe);
      FUN_140fa3984(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 141843328 FUN_141843328 body=605 status=ok
// SIG undefined FUN_141843328(void)

void FUN_141843328(longlong param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined8 local_58;
  ulonglong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar5 = DAT_14caca268;
  if (DAT_14caca270 == 0) {
    plVar5 = (longlong *)0x0;
  }
  (**(code **)(*plVar5 + 0x58))(plVar5,param_1);
  FUN_14020684a(param_1);
  *(undefined8 *)(param_1 + 0x3d0) = *(undefined8 *)(param_1 + 0x408);
  if ((*(longlong *)(param_1 + 0x3f0) != 0) && (*(int *)(param_1 + 0x3f8) - 1U < 0xfffffffe)) {
    lVar4 = FUN_140d3be2e(param_1 + 0x3f0);
    if ((lVar4 != 0) && (lVar4 = FUN_140d3be2e(param_1 + 0x3f0), lVar4 != 0)) {
      FUN_140d3bf04(lVar4,&local_50,*(undefined8 *)(param_1 + 0x408));
      *(ulonglong *)(param_1 + 0x3dc) = local_50;
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x3a8);
  if ((lVar4 == 0) || ((*(byte *)(lVar4 + 0x9c) & 8) != 0)) {
    FUN_140d38752(param_1);
  }
  else {
    FUN_141078a6c(&local_60);
    if (param_1 == 0) {
      uVar8 = 0;
      uVar9 = 0;
    }
    else {
      uVar9 = *(uint *)(param_1 + 0xc);
      if ((int)uVar9 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      uVar3 = *(uint *)(lVar7 + 0x10);
      if (*(uint *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar6 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar6);
        }
        LOCK();
        uVar3 = *(uint *)(lVar7 + 0x10);
        bVar10 = uVar3 == 0;
        if (bVar10) {
          *(uint *)(lVar7 + 0x10) = uVar6;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar10) {
          uVar3 = uVar6;
        }
      }
      uVar8 = (ulonglong)uVar3;
      if (local_60 == 0) {
        local_60 = 0;
      }
      else if (uVar3 == 0) {
        uVar8 = 0;
      }
      else if ((((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) &&
               (plVar5 = (longlong *)
                         ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
               plVar5 != (longlong *)0x0)) &&
              (((*(uint *)(plVar5 + 2) == uVar3 && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)) &&
               (*plVar5 != 0)))) {
        FUN_1400796d0(*(undefined8 *)(*plVar5 + 0x10),local_60,1);
      }
    }
    local_50 = (ulonglong)uVar9 | uVar8 << 0x20;
    local_48 = local_60;
    FUN_14015716c(lVar4 + 0x59e,&local_58);
    bVar2 = FUN_140819c20(lVar4,local_58,&local_50);
    *(byte *)(lVar4 + 0x59e) = *(byte *)(lVar4 + 0x59e) | bVar2;
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141843586 FUN_141843586 body=29 status=ok
// SIG undefined FUN_141843586(void)

undefined8 FUN_141843586(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418435a4 FUN_1418435a4 body=29 status=ok
// SIG undefined FUN_1418435a4(void)

undefined8 FUN_1418435a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418435c2 FUN_1418435c2 body=74 status=ok
// SIG undefined FUN_1418435c2(void)

void FUN_1418435c2(longlong param_1)

{
  longlong lVar1;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14afdfa90;
  if (*(longlong *)(param_1 + 0x440) != 0) {
    FUN_1400020a8();
  }
  lVar1 = 0x230;
  do {
    FUN_140b623da(param_1 + lVar1);
    lVar1 = lVar1 + -0x210;
  } while (lVar1 != -0x1f0);
  return;
}



// FUNCTION 14184360c FUN_14184360c body=29 status=ok
// SIG undefined FUN_14184360c(void)

undefined8 FUN_14184360c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14184362a FUN_14184362a body=328 status=ok
// SIG undefined FUN_14184362a(void)

void FUN_14184362a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar6 = FUN_1409231c6(param_2);
  if (lVar6 != 0) {
    FUN_1404d1e78(&local_40,lVar6);
    if (local_40 == 0) {
      if (local_38 != (longlong *)0x0) goto LAB_141843734;
    }
    else if (local_38 != (longlong *)0x0) {
      if (0 < (int)local_38[1]) {
        iVar5 = (int)local_38[1];
        do {
          if (iVar5 == 0) {
            plVar7 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar4 = (int)local_38[1];
          bVar8 = iVar5 == iVar4;
          if (bVar8) {
            *(int *)(local_38 + 1) = iVar5 + 1;
            iVar4 = iVar5;
          }
          iVar5 = iVar4;
          UNLOCK();
          plVar7 = local_38;
        } while (!bVar8);
        lVar6 = 0;
        if (plVar7 != (longlong *)0x0) {
          lVar6 = local_40;
        }
        fVar3 = *(float *)(lVar6 + 500);
        (*(code *)(&PTR_FUN_14a1842f0)[*(byte *)(param_1 + 0x28)])(param_1 + 8);
        *(double *)(param_1 + 8) = (double)fVar3;
        *(undefined1 *)(param_1 + 0x28) = 3;
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
        if (local_38 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)local_38 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_38 + 0x10))();
          }
        }
        goto LAB_1418436ec;
      }
LAB_141843734:
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  (*(code *)(&PTR_FUN_14a1842f0)[*(byte *)(param_1 + 0x28)])(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x28) = 3;
LAB_1418436ec:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141843774 FUN_141843774 body=29 status=ok
// SIG undefined FUN_141843774(void)

undefined8 FUN_141843774(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141843792 FUN_141843792 body=29 status=ok
// SIG undefined FUN_141843792(void)

undefined8 FUN_141843792(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418437b0 FUN_1418437b0 body=29 status=ok
// SIG undefined FUN_1418437b0(void)

undefined8 FUN_1418437b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418437ce FUN_1418437ce body=275 status=ok
// SIG undefined FUN_1418437ce(void)

void FUN_1418437ce(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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
    uVar4 = lVar3 * 0x90;
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
    if ((int)uVar1 <= (int)(uVar4 / 0x90)) {
      uVar5 = uVar4 / 0x90 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x90,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1418438e2 FUN_1418438e2 body=29 status=ok
// SIG undefined FUN_1418438e2(void)

undefined8 FUN_1418438e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141843900 FUN_141843900 body=274 status=ok
// SIG undefined FUN_141843900(void)

void FUN_141843900(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x210;
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
    if ((int)uVar1 <= (int)(uVar4 / 0x210)) {
      uVar5 = uVar4 / 0x210 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x210,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141843a14 FUN_141843a14 body=230 status=ok
// SIG undefined FUN_141843a14(void)

void FUN_141843a14(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x90;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0xe4) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
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
    if ((int)param_2 <= (int)(uVar1 / 0x90)) {
      uVar2 = uVar1 / 0x90 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x90,8);
  }
  return;
}



// FUNCTION 141843afa FUN_141843afa body=230 status=ok
// SIG undefined FUN_141843afa(void)

void FUN_141843afa(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x90;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0xe4) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
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
    if ((int)param_2 <= (int)(uVar1 / 0x90)) {
      uVar2 = uVar1 / 0x90 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x90,8);
  }
  return;
}



// FUNCTION 141843be0 FUN_141843be0 body=272 status=ok
// SIG undefined FUN_141843be0(void)

void FUN_141843be0(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x90;
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
    if ((int)uVar1 <= (int)(uVar4 / 0x90)) {
      uVar5 = uVar4 / 0x90 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x90,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141843cf0 FUN_141843cf0 body=226 status=ok
// SIG undefined FUN_141843cf0(void)

void FUN_141843cf0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x210;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x3f) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
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
    if ((int)param_2 <= (int)(uVar1 / 0x210)) {
      uVar2 = uVar1 / 0x210 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x210,8);
  }
  return;
}



// FUNCTION 141843dd2 FUN_141843dd2 body=255 status=ok
// SIG undefined FUN_141843dd2(void)

void FUN_141843dd2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141843ed1 FUN_141843ed1 body=73 status=ok
// SIG undefined FUN_141843ed1(void)

void FUN_141843ed1(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141843f1a FUN_141843f1a body=57 status=ok
// SIG undefined FUN_141843f1a(void)

void FUN_141843f1a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb548a8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb548a8 = FUN_140002ddd(FUN_1464ae05f,uVar1,L"ActivityRequestDef");
  }
  return;
}



// FUNCTION 141843f5a FUN_141843f5a body=57 status=ok
// SIG undefined FUN_141843f5a(void)

void FUN_141843f5a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54908 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb54908 = FUN_140002ddd(FUN_1464ae090,uVar1,L"ActivityRequestSettingsDef");
  }
  return;
}



// FUNCTION 141843f93 FUN_141843f93 body=47 status=ok
// SIG undefined FUN_141843f93(void)

void FUN_141843f93(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140751bbe(puVar1,param_1);
  *puVar1 = &PTR_FUN_14afe9820;
  puVar1[6] = 0;
  *(undefined1 *)(puVar1 + 7) = 1;
  return;
}



// FUNCTION 141843fc2 FUN_141843fc2 body=55 status=ok
// SIG undefined FUN_141843fc2(void)

void FUN_141843fc2(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_1402309ae(puVar1,uVar2);
  *puVar1 = &PTR_caseD_6_14aff4b00;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  return;
}



// FUNCTION 141843ff9 FUN_141843ff9 body=106 status=ok
// SIG undefined FUN_141843ff9(void)

void FUN_141843ff9(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1402309ae(puVar1,param_1);
  *puVar1 = &PTR_FUN_14afea030;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x84) = 0;
  puVar1[0x12] = 0;
  *(undefined4 *)(puVar1 + 0x13) = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  return;
}



// FUNCTION 141844063 FUN_141844063 body=48 status=ok
// SIG undefined FUN_141844063(void)

void FUN_141844063(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_1402309ae(puVar1,uVar2);
  *puVar1 = &PTR_FUN_14aff3260;
  puVar1[7] = 0;
  return;
}



// FUNCTION 141844093 FUN_141844093 body=50 status=ok
// SIG undefined FUN_141844093(void)

void FUN_141844093(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140751bbe(puVar1,param_1);
  *puVar1 = &PTR_FUN_14afeba70;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  return;
}



// FUNCTION 1418440d2 FUN_1418440d2 body=185 status=ok
// SIG undefined FUN_1418440d2(void)

void FUN_1418440d2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 0) {
    local_30 = 0;
  }
  else {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_2 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar1 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar1);
      DAT_14c947fe0 = lVar1;
    }
    FUN_140045924(DAT_14c947fe0,&local_30,puVar2,1);
  }
  if (*(longlong *)(param_1 + 0xa98) != local_30) {
    *(undefined8 *)(param_1 + 0xaa8) = 0;
  }
  *(longlong *)(param_1 + 0xa98) = local_30;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14184418c FUN_14184418c body=32 status=ok
// SIG undefined FUN_14184418c(void)

undefined8 FUN_14184418c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,&DAT_149dfb77a);
  return param_2;
}



// FUNCTION 1418441ac FUN_1418441ac body=40 status=ok
// SIG undefined FUN_1418441ac(void)

undefined8 FUN_1418441ac(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418441d4 caseD_6 body=40 status=ok
// SIG undefined caseD_6(void)

undefined8 switchD_143c3d4dc::caseD_6(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418441fc FUN_1418441fc body=91 status=ok
// SIG undefined FUN_1418441fc(void)

undefined8 * FUN_1418441fc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14afea030;
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_1406f0462(param_1 + 10);
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141844258 FUN_141844258 body=40 status=ok
// SIG undefined FUN_141844258(void)

undefined8 FUN_141844258(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141844280 FUN_141844280 body=40 status=ok
// SIG undefined FUN_141844280(void)

undefined8 FUN_141844280(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418442a8 FUN_1418442a8 body=40 status=ok
// SIG undefined FUN_1418442a8(void)

undefined8 FUN_1418442a8(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418442d0 FUN_1418442d0 body=40 status=ok
// SIG undefined FUN_1418442d0(void)

undefined8 FUN_1418442d0(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418442f8 FUN_1418442f8 body=118 status=ok
// SIG undefined FUN_1418442f8(void)

undefined8 FUN_1418442f8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cb6ffd8 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144815d88(DAT_14cb6ffd8,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



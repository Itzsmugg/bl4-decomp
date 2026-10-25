// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144e0b330 FUN_144e0b330 body=148 status=ok
// SIG undefined FUN_144e0b330(void)

int FUN_144e0b330(char *param_1,size_t param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  lVar3 = 0;
  do {
    if (*(&PTR_s_Ascender_149a0d780)[lVar3] == *param_1) {
      for (; iVar2 < 0x4a; iVar2 = iVar2 + 1) {
        if (*(&PTR_s_Ascender_149a0d780)[lVar3] != *param_1) {
          return 0x4b;
        }
        iVar1 = strncmp((&PTR_s_Ascender_149a0d780)[lVar3],param_1,param_2);
        if (iVar1 == 0) {
          return iVar2;
        }
        lVar3 = lVar3 + 1;
      }
    }
    iVar2 = iVar2 + 1;
    lVar3 = lVar3 + 1;
    if (0x49 < iVar2) {
      return 0x4b;
    }
  } while( true );
}



// FUNCTION 144e0b3d0 FUN_144e0b3d0 body=589 status=ok
// SIG undefined FUN_144e0b3d0(void)

void FUN_144e0b3d0(undefined8 *param_1)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  int *local_a0;
  int local_98 [2];
  undefined4 local_90 [2];
  int local_88;
  undefined4 local_78 [2];
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = param_1[2];
  iVar11 = -1;
  local_90[0] = 3;
  iVar4 = FUN_144e0aa80(param_1,local_90,1);
  if ((iVar4 == 1) && (-1 < local_88)) {
    *(int *)(lVar2 + 0x28) = local_88;
    if (local_88 != 0) {
      local_a0 = local_98;
      local_a8 = 0;
      uVar5 = FUN_144b561b0(*param_1,0x14,0);
      *(undefined8 *)(lVar2 + 0x20) = uVar5;
      if (local_98[0] != 0) goto LAB_144e0b577;
    }
    lVar10 = -0x14;
LAB_144e0b480:
    do {
      plVar12 = (longlong *)param_1[1];
LAB_144e0b484:
      if ((int)plVar12[3] < 2) {
        if (0 < (int)plVar12[3]) goto LAB_144e0b4d4;
        do {
          pbVar3 = (byte *)*plVar12;
          if ((byte *)plVar12[2] <= pbVar3) goto LAB_144e0b4fd;
          bVar1 = *pbVar3;
          *plVar12 = (longlong)(pbVar3 + 1);
        } while ((bVar1 == 0x20) || (bVar1 == 9));
        uVar7 = (uint)bVar1;
        if ((uVar7 == 0xd) || (uVar7 == 10)) {
LAB_144e0b52d:
          *(undefined4 *)(plVar12 + 3) = 2;
          goto LAB_144e0b505;
        }
        if (uVar7 == 0x3b) {
          *(undefined4 *)(plVar12 + 3) = 1;
LAB_144e0b4d4:
          while (pbVar3 = (byte *)*plVar12, pbVar3 < (byte *)plVar12[2]) {
            bVar1 = *pbVar3;
            *plVar12 = (longlong)(pbVar3 + 1);
            if ((bVar1 == 0xd) || (bVar1 == 10)) goto LAB_144e0b52d;
            if ((bVar1 == 0xffffffff) || (bVar1 == 0x1a)) break;
          }
        }
        else if ((uVar7 != 0xffffffff) && (bVar1 != 0x1a)) goto LAB_144e0b4d4;
LAB_144e0b4fd:
        *(undefined4 *)(plVar12 + 3) = 3;
      }
LAB_144e0b505:
      *(undefined4 *)(plVar12 + 3) = 0;
      lVar6 = FUN_144e0b230(plVar12);
      if (lVar6 == 0) {
        lVar8 = 0;
        if ((2 < (int)plVar12[3]) || ((int)plVar12[3] < 2)) goto LAB_144e0b540;
        goto LAB_144e0b484;
      }
      lVar8 = (*plVar12 - lVar6) + -1;
LAB_144e0b540:
      if ((lVar6 == 0) || (iVar4 = FUN_144e0b330(lVar6,lVar8), iVar4 < 0x14)) break;
      if ((iVar4 < 0x16) || (iVar4 == 0x17)) {
        *(int *)(lVar2 + 0x28) = iVar11 + 1;
        break;
      }
      if (iVar4 == 0x38) {
        iVar11 = iVar11 + 1;
        lVar10 = lVar10 + 0x14;
        if (*(int *)(lVar2 + 0x28) <= iVar11) break;
        local_78[0] = 3;
        local_68 = 2;
        puVar9 = (undefined4 *)(*(longlong *)(lVar2 + 0x20) + lVar10);
        local_58 = 2;
        local_48 = 2;
        local_38 = 2;
        iVar4 = FUN_144e0aa80(param_1,local_78,5);
        if (iVar4 != 5) break;
        *puVar9 = local_70;
        puVar9[1] = local_60;
        puVar9[2] = local_50;
        puVar9[3] = local_40;
        puVar9[4] = local_30;
        goto LAB_144e0b480;
      }
    } while (iVar4 == 0x4b);
  }
LAB_144e0b577:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_c8);
}



// FUNCTION 144e0b660 FUN_144e0b660 body=647 status=ok
// SIG undefined FUN_144e0b660(void)

void FUN_144e0b660(undefined8 *param_1)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  int *local_a0;
  int local_98 [2];
  undefined4 local_90 [2];
  int local_88;
  undefined4 local_78 [2];
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = param_1[2];
  iVar13 = -1;
  local_90[0] = 3;
  iVar4 = FUN_144e0aa80(param_1,local_90,1);
  if ((iVar4 == 1) && (-1 < local_88)) {
    *(int *)(lVar2 + 0x38) = local_88;
    if (local_88 != 0) {
      local_a0 = local_98;
      local_a8 = 0;
      uVar7 = FUN_144b561b0(*param_1,0x10,0);
      *(undefined8 *)(lVar2 + 0x30) = uVar7;
      if (local_98[0] != 0) goto LAB_144e0b8d7;
    }
    lVar14 = -0x10;
switchD_144e0b816_caseD_4b:
    plVar12 = (longlong *)param_1[1];
LAB_144e0b720:
    if ((int)plVar12[3] < 2) {
      if (0 < (int)plVar12[3]) goto LAB_144e0b774;
      do {
        pbVar3 = (byte *)*plVar12;
        if ((byte *)plVar12[2] <= pbVar3) goto LAB_144e0b79d;
        bVar1 = *pbVar3;
        *plVar12 = (longlong)(pbVar3 + 1);
      } while ((bVar1 == 0x20) || (bVar1 == 9));
      uVar9 = (uint)bVar1;
      if ((uVar9 == 0xd) || (uVar9 == 10)) {
LAB_144e0b7cd:
        *(undefined4 *)(plVar12 + 3) = 2;
        goto LAB_144e0b7a5;
      }
      if (uVar9 == 0x3b) {
        *(undefined4 *)(plVar12 + 3) = 1;
LAB_144e0b774:
        while (pbVar3 = (byte *)*plVar12, pbVar3 < (byte *)plVar12[2]) {
          bVar1 = *pbVar3;
          *plVar12 = (longlong)(pbVar3 + 1);
          if ((bVar1 == 0xd) || (bVar1 == 10)) goto LAB_144e0b7cd;
          if ((bVar1 == 0xffffffff) || (bVar1 == 0x1a)) break;
        }
      }
      else if ((uVar9 != 0xffffffff) && (bVar1 != 0x1a)) goto LAB_144e0b774;
LAB_144e0b79d:
      *(undefined4 *)(plVar12 + 3) = 3;
    }
LAB_144e0b7a5:
    *(undefined4 *)(plVar12 + 3) = 0;
    lVar8 = FUN_144e0b230(plVar12);
    if (lVar8 == 0) {
      lVar10 = 0;
      if ((2 < (int)plVar12[3]) || ((int)plVar12[3] < 2)) goto LAB_144e0b7e0;
      goto LAB_144e0b720;
    }
    lVar10 = (*plVar12 - lVar8) + -1;
LAB_144e0b7e0:
    if (lVar8 == 0) goto switchD_144e0b816_caseD_17;
    iVar4 = FUN_144e0b330(lVar8,lVar10);
    switch(iVar4) {
    case 0x14:
    case 0x15:
    case 0x16:
      goto switchD_144e0b816_caseD_14;
    default:
      break;
    case 0x22:
    case 0x24:
    case 0x25:
      iVar13 = iVar13 + 1;
      lVar14 = lVar14 + 0x10;
      if (*(int *)(lVar2 + 0x38) <= iVar13) break;
      local_78[0] = 5;
      local_68 = 5;
      puVar11 = (undefined4 *)(*(longlong *)(lVar2 + 0x30) + lVar14);
      local_58 = 3;
      local_48 = 3;
      iVar5 = FUN_144e0aa80(param_1,local_78,4);
      if (iVar5 < 3) break;
      *puVar11 = local_70;
      puVar11[1] = local_60;
      if (iVar4 == 0x25) {
        puVar11[2] = 0;
        puVar11[3] = local_50;
      }
      else {
        puVar11[2] = local_50;
        if ((iVar4 != 0x22) || (uVar6 = local_40, iVar5 != 4)) {
          uVar6 = 0;
        }
        puVar11[3] = uVar6;
      }
    case 0x4b:
      goto switchD_144e0b816_caseD_4b;
    }
  }
switchD_144e0b816_caseD_17:
LAB_144e0b8d7:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_c8);
switchD_144e0b816_caseD_14:
  *(uint *)(lVar2 + 0x38) = iVar13 + 1U;
  qsort(*(void **)(lVar2 + 0x30),(ulonglong)(iVar13 + 1U),0x10,(_PtFuncCompare *)&LAB_144e0b640);
  goto LAB_144e0b8d7;
}



// FUNCTION 144e0b950 FUN_144e0b950 body=527 status=ok
// SIG undefined FUN_144e0b950(void)

undefined8 FUN_144e0b950(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  pbVar8 = (byte *)0x0;
  do {
    plVar2 = *(longlong **)(param_1 + 8);
    pbVar7 = (byte *)plVar2[2];
    do {
      if ((int)plVar2[3] < 2) {
        if ((int)plVar2[3] < 1) {
          do {
            pbVar9 = (byte *)*plVar2;
            if (pbVar7 <= pbVar9) goto LAB_144e0b9e5;
            bVar1 = *pbVar9;
            *plVar2 = (longlong)(pbVar9 + 1);
          } while ((bVar1 == 0x20) || (bVar1 == 9));
          if ((bVar1 == 0xd) || (bVar1 == 10)) {
LAB_144e0ba2b:
            *(undefined4 *)(plVar2 + 3) = 2;
            goto LAB_144e0b9ec;
          }
          if (bVar1 != 0x3b) goto LAB_144e0b9db;
          *(undefined4 *)(plVar2 + 3) = 1;
        }
        while (pbVar9 = (byte *)*plVar2, pbVar9 < pbVar7) {
          bVar1 = *pbVar9;
          *plVar2 = (longlong)(pbVar9 + 1);
          if ((bVar1 == 0xd) || (bVar1 == 10)) goto LAB_144e0ba2b;
LAB_144e0b9db:
          if ((bVar1 == 0xffffffff) || (bVar1 == 0x1a)) break;
        }
LAB_144e0b9e5:
        *(undefined4 *)(plVar2 + 3) = 3;
      }
LAB_144e0b9ec:
      *(undefined4 *)(plVar2 + 3) = 0;
      do {
        pbVar9 = (byte *)*plVar2;
        if (pbVar7 <= pbVar9) goto LAB_144e0ba9f;
        bVar1 = *pbVar9;
        *plVar2 = (longlong)(pbVar9 + 1);
      } while ((bVar1 == 0x20) || (bVar1 == 9));
      uVar6 = (uint)bVar1;
      if ((uVar6 == 0xd) || (uVar6 == 10)) {
        *(undefined4 *)(plVar2 + 3) = 2;
        pbVar9 = pbVar8;
      }
      else if (uVar6 == 0x3b) {
        *(undefined4 *)(plVar2 + 3) = 1;
        pbVar9 = pbVar8;
      }
      else if ((uVar6 == 0xffffffff) || (bVar1 == 0x1a)) {
LAB_144e0ba9f:
        *(undefined4 *)(plVar2 + 3) = 3;
        pbVar9 = pbVar8;
      }
      else {
        while (pbVar3 = (byte *)*plVar2, pbVar3 < pbVar7) {
          bVar1 = *pbVar3;
          *plVar2 = (longlong)(pbVar3 + 1);
          if ((bVar1 == 0x20) || (bVar1 == 9)) goto LAB_144e0ba7d;
          uVar6 = (uint)bVar1;
          if ((uVar6 == 0xd) || (uVar6 == 10)) {
            *(undefined4 *)(plVar2 + 3) = 2;
            goto LAB_144e0ba7d;
          }
          if (uVar6 == 0x3b) {
            *(undefined4 *)(plVar2 + 3) = 1;
            goto LAB_144e0ba7d;
          }
          if ((uVar6 == 0xffffffff) || (bVar1 == 0x1a)) break;
        }
        *(undefined4 *)(plVar2 + 3) = 3;
LAB_144e0ba7d:
        if (pbVar9 != (byte *)0x0) goto LAB_144e0babf;
      }
    } while (((int)plVar2[3] < 3) && (1 < (int)plVar2[3]));
    pbVar7 = pbVar8;
    if (pbVar9 != (byte *)0x0) {
LAB_144e0babf:
      pbVar7 = (byte *)((*plVar2 - (longlong)pbVar9) + -1);
    }
    if (pbVar9 == (byte *)0x0) {
      return 0xa0;
    }
    uVar4 = FUN_144e0b330(pbVar9,pbVar7);
    switch(uVar4) {
    case 0x14:
    case 0x15:
      return 0;
    default:
      return 0xa0;
    case 0x32:
    case 0x33:
      uVar5 = FUN_144e0b660(param_1);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      break;
    case 0x35:
      uVar5 = FUN_144e0b3d0(param_1);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      break;
    case 0x4b:
      break;
    }
  } while( true );
}



// FUNCTION 144e0bbb0 FUN_144e0bbb0 body=860 status=ok
// SIG undefined FUN_144e0bbb0(void)

undefined8 FUN_144e0bbb0(longlong param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  pbVar8 = (byte *)0x0;
joined_r0x000144e0bbcc:
  if (0 < param_2) {
    puVar2 = *(undefined8 **)(param_1 + 8);
    param_2 = param_2 + -1;
    pbVar7 = (byte *)puVar2[2];
LAB_144e0bbe0:
    do {
      if (*(int *)(puVar2 + 3) < 2) {
        if (*(int *)(puVar2 + 3) < 1) {
          do {
            pbVar9 = (byte *)*puVar2;
            if (pbVar7 <= pbVar9) goto LAB_144e0bc5d;
            bVar1 = *pbVar9;
            *puVar2 = pbVar9 + 1;
          } while ((bVar1 == 0x20) || (bVar1 == 9));
          if ((bVar1 == 0xd) || (bVar1 == 10)) {
LAB_144e0bd26:
            *(undefined4 *)(puVar2 + 3) = 2;
            goto LAB_144e0bc64;
          }
          if (bVar1 != 0x3b) goto LAB_144e0bc53;
          *(undefined4 *)(puVar2 + 3) = 1;
        }
        while (pbVar9 = (byte *)*puVar2, pbVar9 < pbVar7) {
          bVar1 = *pbVar9;
          *puVar2 = pbVar9 + 1;
          if ((bVar1 == 0xd) || (bVar1 == 10)) goto LAB_144e0bd26;
LAB_144e0bc53:
          if ((bVar1 == 0xffffffff) || (bVar1 == 0x1a)) break;
        }
LAB_144e0bc5d:
        *(undefined4 *)(puVar2 + 3) = 3;
      }
LAB_144e0bc64:
      *(undefined4 *)(puVar2 + 3) = 0;
      do {
        pbVar9 = (byte *)*puVar2;
        if (pbVar7 <= pbVar9) goto LAB_144e0be2e;
        bVar1 = *pbVar9;
        *puVar2 = pbVar9 + 1;
      } while ((bVar1 == 0x20) || (bVar1 == 9));
      uVar6 = (uint)bVar1;
      if ((uVar6 == 0xd) || (uVar6 == 10)) {
        *(undefined4 *)(puVar2 + 3) = 2;
        goto LAB_144e0bbe0;
      }
      if (uVar6 == 0x3b) {
        *(undefined4 *)(puVar2 + 3) = 1;
        return 0xa0;
      }
      if ((uVar6 == 0xffffffff) || (bVar1 == 0x1a)) {
LAB_144e0be2e:
        *(undefined4 *)(puVar2 + 3) = 3;
        return 0xa0;
      }
      while (pbVar3 = (byte *)*puVar2, pbVar3 < pbVar7) {
        bVar1 = *pbVar3;
        *puVar2 = pbVar3 + 1;
        if ((bVar1 == 0x20) || (bVar1 == 9)) goto LAB_144e0bcfb;
        uVar6 = (uint)bVar1;
        if ((uVar6 == 0xd) || (uVar6 == 10)) {
          *(undefined4 *)(puVar2 + 3) = 2;
          goto LAB_144e0bcfb;
        }
        if (uVar6 == 0x3b) {
          *(undefined4 *)(puVar2 + 3) = 1;
          goto LAB_144e0bcfb;
        }
        if ((uVar6 == 0xffffffff) || (bVar1 == 0x1a)) break;
      }
      *(undefined4 *)(puVar2 + 3) = 3;
LAB_144e0bcfb:
      if (pbVar9 != (byte *)0x0) goto joined_r0x000144e0bbcc;
      if (2 < *(int *)(puVar2 + 3)) {
        return 0xa0;
      }
      if (*(int *)(puVar2 + 3) < 2) {
        return 0xa0;
      }
    } while( true );
  }
  do {
    plVar4 = *(longlong **)(param_1 + 8);
    pbVar7 = (byte *)plVar4[2];
    do {
      if ((int)plVar4[3] < 2) {
        if ((int)plVar4[3] < 1) {
          do {
            pbVar9 = (byte *)*plVar4;
            if (pbVar7 <= pbVar9) goto LAB_144e0bdd5;
            bVar1 = *pbVar9;
            *plVar4 = (longlong)(pbVar9 + 1);
          } while ((bVar1 == 0x20) || (bVar1 == 9));
          if ((bVar1 == 0xd) || (bVar1 == 10)) {
LAB_144e0be3a:
            *(undefined4 *)(plVar4 + 3) = 2;
            goto LAB_144e0bddc;
          }
          if (bVar1 != 0x3b) goto LAB_144e0bdcb;
          *(undefined4 *)(plVar4 + 3) = 1;
        }
        while (pbVar9 = (byte *)*plVar4, pbVar9 < pbVar7) {
          bVar1 = *pbVar9;
          *plVar4 = (longlong)(pbVar9 + 1);
          if ((bVar1 == 0xd) || (bVar1 == 10)) goto LAB_144e0be3a;
LAB_144e0bdcb:
          if ((bVar1 == 0xffffffff) || (bVar1 == 0x1a)) break;
        }
LAB_144e0bdd5:
        *(undefined4 *)(plVar4 + 3) = 3;
      }
LAB_144e0bddc:
      *(undefined4 *)(plVar4 + 3) = 0;
      do {
        pbVar9 = (byte *)*plVar4;
        if (pbVar7 <= pbVar9) goto LAB_144e0beae;
        bVar1 = *pbVar9;
        *plVar4 = (longlong)(pbVar9 + 1);
      } while ((bVar1 == 0x20) || (bVar1 == 9));
      uVar6 = (uint)bVar1;
      if ((uVar6 == 0xd) || (uVar6 == 10)) {
        *(undefined4 *)(plVar4 + 3) = 2;
        pbVar9 = pbVar8;
      }
      else if (uVar6 == 0x3b) {
        *(undefined4 *)(plVar4 + 3) = 1;
        pbVar9 = pbVar8;
      }
      else if ((uVar6 == 0xffffffff) || (bVar1 == 0x1a)) {
LAB_144e0beae:
        *(undefined4 *)(plVar4 + 3) = 3;
        pbVar9 = pbVar8;
      }
      else {
        while (pbVar3 = (byte *)*plVar4, pbVar3 < pbVar7) {
          bVar1 = *pbVar3;
          *plVar4 = (longlong)(pbVar3 + 1);
          if ((bVar1 == 0x20) || (bVar1 == 9)) goto LAB_144e0be8c;
          uVar6 = (uint)bVar1;
          if ((uVar6 == 0xd) || (uVar6 == 10)) {
            *(undefined4 *)(plVar4 + 3) = 2;
            goto LAB_144e0be8c;
          }
          if (uVar6 == 0x3b) {
            *(undefined4 *)(plVar4 + 3) = 1;
            goto LAB_144e0be8c;
          }
          if ((uVar6 == 0xffffffff) || (bVar1 == 0x1a)) break;
        }
        *(undefined4 *)(plVar4 + 3) = 3;
LAB_144e0be8c:
        if (pbVar9 != (byte *)0x0) goto LAB_144e0bece;
      }
    } while (((int)plVar4[3] < 3) && (1 < (int)plVar4[3]));
    pbVar7 = pbVar8;
    if (pbVar9 != (byte *)0x0) {
LAB_144e0bece:
      pbVar7 = (byte *)((*plVar4 - (longlong)pbVar9) + -1);
    }
    if (pbVar9 == (byte *)0x0) {
      return 0xa0;
    }
    iVar5 = FUN_144e0b330(pbVar9,pbVar7);
    if ((iVar5 == param_3) || (iVar5 == 0x14)) {
      return 0;
    }
  } while( true );
}



// FUNCTION 144e0bf10 FUN_144e0bf10 body=133 status=ok
// SIG undefined FUN_144e0bf10(void)

undefined8 FUN_144e0bf10(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (*(uint *)(lVar3 + 8) < (uint)(*(short *)(lVar3 + 0x62) + 1 + (int)*(short *)(lVar3 + 0x1a))) {
    uVar5 = FUN_144b56680(lVar3,1);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
  }
  else {
    uVar5 = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x59) != '\0') {
    sVar2 = *(short *)(lVar3 + 2);
    piVar1 = (int *)(*(longlong *)(lVar3 + 8) + (longlong)sVar2 * 8);
    lVar4 = *(longlong *)(lVar3 + 0x10);
    *piVar1 = param_2 >> 10;
    piVar1[1] = param_3 >> 10;
    *(undefined1 *)(sVar2 + lVar4) = 1;
  }
  *(short *)(lVar3 + 2) = *(short *)(lVar3 + 2) + 1;
  return uVar5;
}



// FUNCTION 144e0bfa0 FUN_144e0bfa0 body=130 status=ok
// SIG undefined FUN_144e0bfa0(void)

undefined8 FUN_144e0bfa0(longlong param_1)

{
  short *psVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  psVar1 = *(short **)(param_1 + 0x28);
  if (psVar1 == (short *)0x0) {
    return 3;
  }
  if (*(char *)(param_1 + 0x59) != '\0') {
    lVar2 = *(longlong *)(param_1 + 0x18);
    if (*(uint *)(lVar2 + 0xc) <
        (uint)(*(short *)(lVar2 + 0x60) + 1 + (int)*(short *)(lVar2 + 0x18))) {
      uVar3 = FUN_144b56680(lVar2,0,1);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
    else {
      uVar3 = 0;
    }
    if (0 < *psVar1) {
      *(short *)(*(longlong *)(psVar1 + 0xc) + (longlong)(*psVar1 + -1) * 2) = psVar1[1] + -1;
    }
    *psVar1 = *psVar1 + 1;
    return uVar3;
  }
  *psVar1 = *psVar1 + 1;
  return 0;
}



// FUNCTION 144e0c030 FUN_144e0c030 body=227 status=ok
// SIG undefined FUN_144e0c030(void)

void FUN_144e0c030(longlong param_1)

{
  int *piVar1;
  short sVar2;
  short sVar3;
  short *psVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  psVar4 = *(short **)(param_1 + 0x28);
  if (psVar4 != (short *)0x0) {
    sVar2 = *psVar4;
    if (sVar2 < 2) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(short *)(*(longlong *)(psVar4 + 0xc) + (longlong)(sVar2 + -2) * 2) + 1;
    }
    if ((sVar2 != 0) && (iVar6 == psVar4[1])) {
      *psVar4 = sVar2 + -1;
      return;
    }
    sVar3 = psVar4[1];
    if (1 < sVar3) {
      lVar5 = *(longlong *)(psVar4 + 4);
      lVar7 = (longlong)sVar3;
      piVar1 = (int *)(lVar5 + (longlong)iVar6 * 8);
      if (((*piVar1 == *(int *)(lVar5 + -8 + lVar7 * 8)) &&
          (piVar1[1] == *(int *)(lVar5 + -4 + lVar7 * 8))) &&
         (*(char *)(*(longlong *)(psVar4 + 8) + -1 + lVar7) == '\x01')) {
        psVar4[1] = sVar3 + -1;
      }
    }
    if (0 < sVar2) {
      sVar3 = psVar4[1];
      if (iVar6 == sVar3 + -1) {
        *psVar4 = sVar2 + -1;
        psVar4[1] = sVar3 + -1;
        return;
      }
      *(short *)(*(longlong *)(psVar4 + 0xc) + (longlong)(sVar2 + -1) * 2) = sVar3 + -1;
    }
  }
  return;
}



// FUNCTION 144e0c120 FUN_144e0c120 body=145 status=ok
// SIG undefined FUN_144e0c120(void)

ulonglong FUN_144e0c120(longlong param_1,uint param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if (param_2 < 0x100) {
    pcVar3 = (char *)(**(code **)(*(longlong *)(param_1 + 0x390) + 0x28))
                               (*(undefined2 *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x390) + 0x30) +
                                 (longlong)(int)param_2 * 2));
    uVar7 = 0;
    if (*(uint *)(param_1 + 0x370) != 0) {
      do {
        pcVar4 = *(char **)(*(longlong *)(param_1 + 0x368) + uVar7 * 8);
        if ((pcVar4 != (char *)0x0) && (*pcVar4 == *pcVar3)) {
          lVar5 = (longlong)pcVar3 - (longlong)pcVar4;
          do {
            cVar1 = *pcVar4;
            cVar2 = pcVar4[lVar5];
            if (cVar1 != cVar2) break;
            pcVar4 = pcVar4 + 1;
          } while (cVar2 != '\0');
          if (cVar1 == cVar2) {
            return uVar7;
          }
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < *(uint *)(param_1 + 0x370));
    }
  }
  return 0xffffffff;
}



// FUNCTION 144e0c1c0 FUN_144e0c1c0 body=45 status=ok
// SIG undefined FUN_144e0c1c0(void)

undefined1 FUN_144e0c1c0(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int *piVar3;
  
  puVar2 = (undefined1 *)param_1[3];
  if (puVar2 < (undefined1 *)param_1[2]) {
    uVar1 = *puVar2;
    param_1[3] = puVar2 + 1;
    return uVar1;
  }
  piVar3 = (int *)*param_1;
  if ((piVar3 != (int *)0x0) && (*piVar3 == 0)) {
    *piVar3 = 0x55;
  }
  return 0;
}



// FUNCTION 144e0c1f0 FUN_144e0c1f0 body=224 status=ok
// SIG undefined FUN_144e0c1f0(void)

undefined8 FUN_144e0c1f0(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  short sVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint local_res8 [2];
  longlong local_res20;
  
  uVar5 = (ulonglong)param_2;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xd0) + 0x50) == 0) {
    lVar1 = *(longlong *)(param_1 + 800);
    if ((*(longlong *)(lVar1 + 0x4d8) != 0) && (param_2 < 0x100)) {
      sVar2 = (*(code *)**(undefined8 **)(lVar1 + 0x10e8))(param_2);
      uVar5 = 0;
      if (*(uint *)(lVar1 + 0x20) != 0) {
        do {
          if (*(short *)(*(longlong *)(lVar1 + 0x4d8) + uVar5 * 2) == sVar2) {
            if (-1 < (int)uVar5) goto LAB_144e0c28b;
            break;
          }
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
        } while (uVar4 < *(uint *)(lVar1 + 0x20));
      }
    }
    uVar3 = 0x12;
  }
  else {
LAB_144e0c28b:
    uVar3 = (**(code **)(param_1 + 0x380))
                      (*(undefined8 *)(param_1 + 8),uVar5,&local_res20,local_res8);
    if ((int)uVar3 == 0) {
      param_3[2] = (ulonglong)local_res8[0] + local_res20;
      param_3[1] = local_res20;
      param_3[3] = local_res20;
      return 0;
    }
  }
  return uVar3;
}



// FUNCTION 144e0c2d0 FUN_144e0c2d0 body=152 status=ok
// SIG undefined FUN_144e0c2d0(void)

undefined8 FUN_144e0c2d0(longlong param_1,int param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  uVar4 = *(int *)(param_1 + 0x350) + param_2;
  if (*(uint *)(param_1 + 0x348) <= uVar4) {
    return 1;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x358) + (ulonglong)uVar4 * 8);
  param_3[1] = lVar1;
  if (*(char *)(param_1 + 0x5c) != '\0') {
    if (*(longlong *)(param_1 + 0x3a0) != 0) {
      uVar4 = *(uint *)(*(longlong *)(param_1 + 0x3a0) + (ulonglong)uVar4 * 4);
      param_3[3] = lVar1;
      param_3[2] = (ulonglong)uVar4 + lVar1;
      return 0;
    }
    iVar3 = 0;
    if (-1 < *(int *)(param_1 + 0x398)) {
      iVar3 = *(int *)(param_1 + 0x398);
    }
    param_3[1] = iVar3 + lVar1;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x358) + (ulonglong)(uVar4 + 1) * 8);
  param_3[3] = param_3[1];
  param_3[2] = uVar2;
  return 0;
}



// FUNCTION 144e0c370 FUN_144e0c370 body=173 status=ok
// SIG undefined FUN_144e0c370(void)

int FUN_144e0c370(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  void *_Src;
  longlong lVar3;
  void *_Dst;
  longlong *plVar4;
  int local_res8 [2];
  
  lVar2 = param_1[7];
  _Src = (void *)*param_1;
  _Dst = (void *)FUN_144b560d0(lVar2,param_2,local_res8);
  *param_1 = (longlong)_Dst;
  if (local_res8[0] == 0) {
    if (_Src != (void *)0x0) {
      memcpy(_Dst,_Src,param_1[2]);
      plVar4 = (longlong *)param_1[5];
      lVar3 = *param_1;
      plVar1 = plVar4 + *(int *)((longlong)param_1 + 0x1c);
      for (; plVar4 < plVar1; plVar4 = plVar4 + 1) {
        if (*plVar4 != 0) {
          *plVar4 = *plVar4 + (lVar3 - (longlong)_Src);
        }
      }
      FUN_144b56350(lVar2,_Src);
    }
    param_1[2] = param_2;
    local_res8[0] = 0;
  }
  else {
    *param_1 = (longlong)_Src;
  }
  return local_res8[0];
}



// FUNCTION 144e0c420 FUN_144e0c420 body=199 status=ok
// SIG undefined FUN_144e0c420(void)

undefined4 FUN_144e0c420(undefined8 *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  pcVar3 = (char *)*param_1;
  iVar5 = 0;
  uVar6 = 3;
  pcVar2 = pcVar3;
  if (param_2 <= pcVar3) {
LAB_144e0c4dc:
    *param_1 = pcVar3;
    return uVar6;
  }
  do {
    cVar1 = *pcVar2;
    pcVar3 = pcVar2 + 1;
    if (cVar1 == '\\') {
      if (pcVar3 == param_2) goto LAB_144e0c4dc;
      switch(*pcVar3) {
      case '(':
      case ')':
      case '\\':
      case 'b':
      case 'f':
      case 'n':
      case 'r':
      case 't':
        pcVar3 = pcVar2 + 2;
        break;
      default:
        uVar4 = 0;
        do {
          if (param_2 <= pcVar3) goto LAB_144e0c4dc;
          if (7 < (byte)(*pcVar3 - 0x30U)) break;
          pcVar3 = pcVar3 + 1;
          uVar4 = uVar4 + 1;
        } while (uVar4 < 3);
      }
    }
    else if (cVar1 == '(') {
      iVar5 = iVar5 + 1;
    }
    else if ((cVar1 == ')') && (iVar5 = iVar5 + -1, iVar5 == 0)) {
      uVar6 = 0;
      goto LAB_144e0c4dc;
    }
    pcVar2 = pcVar3;
    if (param_2 <= pcVar3) {
      *param_1 = pcVar3;
      return 3;
    }
  } while( true );
}



// FUNCTION 144e0c540 FUN_144e0c540 body=169 status=ok
// SIG undefined FUN_144e0c540(void)

undefined8 FUN_144e0c540(longlong *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)(*param_1 + 1);
  do {
    if (param_2 <= pbVar2) {
LAB_144e0c5d2:
      *param_1 = (longlong)(pbVar2 + 1);
      return 0;
    }
    for (; pbVar2 < param_2; pbVar2 = pbVar2 + 1) {
      bVar1 = *pbVar2;
      if ((0x20 < bVar1) || ((0x100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
        if (bVar1 != 0x25) break;
        for (; ((pbVar2 < param_2 && (*pbVar2 != 0xd)) && (*pbVar2 != 10)); pbVar2 = pbVar2 + 1) {
        }
      }
    }
    if (param_2 <= pbVar2) goto LAB_144e0c5d2;
    if ((0x36 < (byte)(*pbVar2 - 0x30)) ||
       ((0x7e0000007e03ffU >> ((ulonglong)(byte)(*pbVar2 - 0x30) & 0x3f) & 1) == 0)) {
      if (*pbVar2 != 0x3e) {
        *param_1 = (longlong)pbVar2;
        return 3;
      }
      goto LAB_144e0c5d2;
    }
    pbVar2 = pbVar2 + 1;
  } while( true );
}



// FUNCTION 144e0c5f0 FUN_144e0c5f0 body=256 status=ok
// SIG undefined FUN_144e0c5f0(void)

int FUN_144e0c5f0(undefined8 *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *local_res8;
  
  local_res8 = (char *)*param_1;
  iVar3 = 0;
  iVar2 = 0;
  if (param_2 <= local_res8) {
    *param_1 = local_res8;
    return 0;
  }
  do {
    if (iVar2 != 0) break;
    cVar1 = *local_res8;
    if (cVar1 == '%') {
      for (; ((local_res8 < param_2 && (*local_res8 != '\r')) && (*local_res8 != '\n'));
          local_res8 = local_res8 + 1) {
      }
    }
    else if (cVar1 == '(') {
      iVar2 = FUN_144e0c420(&local_res8,param_2);
    }
    else if (cVar1 == '<') {
      iVar2 = FUN_144e0c540(&local_res8,param_2);
    }
    else if (cVar1 == '{') {
      iVar3 = iVar3 + 1;
    }
    else if ((cVar1 == '}') && (iVar3 = iVar3 + -1, iVar3 == 0)) {
      *param_1 = local_res8 + 1;
      return 0;
    }
    local_res8 = local_res8 + 1;
  } while (local_res8 < param_2);
  *param_1 = local_res8;
  if (iVar3 != 0) {
    iVar2 = 3;
  }
  return iVar2;
}



// FUNCTION 144e0c6f0 FUN_144e0c6f0 body=316 status=ok
// SIG undefined FUN_144e0c6f0(void)

int FUN_144e0c6f0(longlong *param_1,byte *param_2,int param_3,longlong param_4)

{
  byte bVar1;
  undefined2 extraout_var;
  byte *pbVar2;
  int iVar3;
  undefined2 *puVar4;
  byte bVar5;
  undefined2 local_res8 [4];
  byte *local_res10;
  
  pbVar2 = (byte *)*param_1;
  iVar3 = 0;
  local_res10 = pbVar2;
  if (param_2 <= pbVar2) goto LAB_144e0c819;
  bVar5 = 0;
  if (*pbVar2 == 0x5b) {
    bVar5 = 0x5d;
LAB_144e0c734:
    pbVar2 = pbVar2 + 1;
  }
  else if (*pbVar2 == 0x7b) {
    bVar5 = 0x7d;
    goto LAB_144e0c734;
  }
  local_res10 = pbVar2;
  if (pbVar2 < param_2) {
    do {
      for (; pbVar2 < param_2; pbVar2 = pbVar2 + 1) {
        bVar1 = *pbVar2;
        if ((0x20 < bVar1) || ((0x100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
          if (bVar1 != 0x25) break;
          for (; ((pbVar2 < param_2 && (*pbVar2 != 0xd)) && (*pbVar2 != 10)); pbVar2 = pbVar2 + 1) {
          }
        }
      }
      local_res10 = pbVar2;
      if (param_2 <= pbVar2) break;
      if (*pbVar2 == bVar5) {
        local_res10 = pbVar2 + 1;
        break;
      }
      if (param_4 == 0) {
        puVar4 = local_res8;
      }
      else {
        if (param_3 <= iVar3) break;
        puVar4 = (undefined2 *)(param_4 + (longlong)iVar3 * 2);
      }
      FUN_144e0ae40(&local_res10,param_2,0);
      *puVar4 = extraout_var;
      if (pbVar2 == local_res10) {
        iVar3 = -1;
        break;
      }
      iVar3 = iVar3 + 1;
      if ((bVar5 == 0) || (pbVar2 = local_res10, param_2 <= local_res10)) break;
    } while( true );
  }
LAB_144e0c819:
  *param_1 = (longlong)local_res10;
  return iVar3;
}



// FUNCTION 144e0c830 FUN_144e0c830 body=338 status=ok
// SIG undefined FUN_144e0c830(void)

int FUN_144e0c830(longlong *param_1,byte *param_2,int param_3,longlong param_4,undefined4 param_5)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  byte bVar6;
  undefined4 local_res10 [2];
  byte *local_48 [2];
  
  pbVar3 = (byte *)*param_1;
  iVar4 = 0;
  local_48[0] = pbVar3;
  if (param_2 <= pbVar3) goto LAB_144e0c96d;
  bVar6 = 0;
  if (*pbVar3 == 0x5b) {
    bVar6 = 0x5d;
LAB_144e0c873:
    pbVar3 = pbVar3 + 1;
  }
  else if (*pbVar3 == 0x7b) {
    bVar6 = 0x7d;
    goto LAB_144e0c873;
  }
  local_48[0] = pbVar3;
  if (pbVar3 < param_2) {
    do {
      for (; pbVar3 < param_2; pbVar3 = pbVar3 + 1) {
        bVar1 = *pbVar3;
        if ((0x20 < bVar1) || ((0x100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
          if (bVar1 != 0x25) break;
          for (; ((pbVar3 < param_2 && (*pbVar3 != 0xd)) && (*pbVar3 != 10)); pbVar3 = pbVar3 + 1) {
          }
        }
      }
      local_48[0] = pbVar3;
      if (param_2 <= pbVar3) break;
      if (*pbVar3 == bVar6) {
        local_48[0] = pbVar3 + 1;
        break;
      }
      if (param_4 == 0) {
        puVar5 = local_res10;
      }
      else {
        if (param_3 <= iVar4) break;
        puVar5 = (undefined4 *)(param_4 + (longlong)iVar4 * 4);
      }
      uVar2 = FUN_144e0ae40(local_48,param_2,param_5);
      *puVar5 = uVar2;
      if (pbVar3 == local_48[0]) {
        iVar4 = -1;
        break;
      }
      iVar4 = iVar4 + 1;
      if ((bVar6 == 0) || (pbVar3 = local_48[0], param_2 <= local_48[0])) break;
    } while( true );
  }
LAB_144e0c96d:
  *param_1 = (longlong)local_48[0];
  return iVar4;
}



// FUNCTION 144e0c9a0 FUN_144e0c9a0 body=215 status=ok
// SIG undefined FUN_144e0c9a0(void)

undefined8 FUN_144e0c9a0(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  int *piVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  int local_res8 [2];
  
  lVar1 = param_1[2];
  local_res8[0] = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_1[2];
  if (param_2 <= SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffff)) / auVar3,0)) {
    uVar4 = FUN_144b561b0(*param_1,1,*(undefined4 *)(param_1 + 6),lVar1 * param_2 & 0xffffffff,
                          param_1[7],local_res8);
    param_1[7] = uVar4;
    if (local_res8[0] == 0) {
      param_1[3] = param_2;
      param_1[6] = lVar1 * param_2;
      if (param_2 < (ulonglong)param_1[5]) {
        piVar2 = (int *)param_1[1];
        if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
          *piVar2 = 0x82;
        }
        param_1[5] = param_2;
        return 0;
      }
      return 1;
    }
  }
  piVar2 = (int *)param_1[1];
  if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
    *piVar2 = 0x40;
  }
  return 0;
}



// FUNCTION 144e0ca80 FUN_144e0ca80 body=1306 status=ok
// SIG undefined FUN_144e0ca80(void)

void FUN_144e0ca80(int *param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int *piVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int local_res8;
  
  lVar3 = *(longlong *)(param_2 + 0xf0);
  uVar16 = 0;
  local_res8 = 0;
  memset(param_1,0,0x150);
  *param_1 = *(int *)(param_2 + 0x38);
  iVar4 = FUN_144b555e0(*(undefined4 *)(*(longlong *)(lVar3 + 0x328) + 0x184),0x3e80000);
  param_1[3] = iVar4;
  param_1[4] = *(int *)(*(longlong *)(lVar3 + 0x328) + 0x188) << 0x10;
  param_1[5] = *(int *)(*(longlong *)(lVar3 + 0x328) + 0x18c) << 0x10;
  lVar3 = *(longlong *)(lVar3 + 0x328);
  uVar10 = (ulonglong)*(byte *)(lVar3 + 0xc2);
  uVar14 = (ulonglong)*(byte *)(lVar3 + 0xc0);
  bVar1 = *(byte *)(lVar3 + 0xc1);
  bVar2 = *(byte *)(lVar3 + 0xc3);
  if ((*(int *)(lVar3 + 0x210) == 1) &&
     ((uVar14 == 0 ||
      ((((uVar14 == 4 && (*(int *)(lVar3 + 0xc4) * 0x10000 < -0x780000)) &&
        (*(int *)(lVar3 + 200) * 0x10000 < -0x780000)) &&
       ((0x3700000 < *(int *)(lVar3 + 0xcc) * 0x10000 &&
        (0x3700000 < *(int *)(lVar3 + 0xd0) * 0x10000)))))))) {
    param_1[0x14] = -0x780001;
    iVar4 = FUN_144b42fe0(0xff87ffff,*param_1);
    param_1[0x16] = *param_1;
    param_1[0x10] = 0x31;
    param_1[0x15] = (iVar4 + 0x8000U & 0xffff0000) - 0x8000;
    param_1[0xc] = *(int *)(param_2 + 0x130) * 2 + 0x3700001;
    iVar4 = FUN_144b42fe0();
    param_1[8] = 0x32;
    *(undefined1 *)((longlong)param_1 + 9) = 1;
    param_1[0xd] = (iVar4 + 0x8000U & 0xffff0000) + 0x8000;
    param_1[0xe] = *param_1;
    return;
  }
  uVar13 = uVar16;
  uVar17 = uVar16;
  if (uVar14 != 0) {
    do {
      param_1[(ulonglong)(uint)param_1[1] * 5 + 0x18] = *(int *)(lVar3 + 0xc4 + uVar13 * 4) << 0x10;
      param_1[((ulonglong)(uint)param_1[1] + 5) * 5] = *(int *)(lVar3 + 200 + uVar13 * 4) << 0x10;
      uVar9 = (ulonglong)(uint)param_1[1];
      uVar5 = param_1[(uVar9 + 5) * 5] - param_1[uVar9 * 5 + 0x18];
      if (-1 < (int)uVar5) {
        if ((int)uVar5 <= (int)(uint)uVar17) {
          uVar5 = (uint)uVar17;
        }
        uVar17 = (ulonglong)uVar5;
        if (uVar13 == 0) {
          *(undefined1 *)(param_1 + uVar9 * 5 + 0x1c) = 1;
          uVar9 = (ulonglong)(uint)param_1[1];
          iVar4 = param_1[uVar9 * 5 + 0x19];
        }
        else {
          param_1[(uVar9 + 5) * 5] = param_1[(uVar9 + 5) * 5] + *(int *)(param_2 + 0x130) * 2;
          param_1[(ulonglong)(uint)param_1[1] * 5 + 0x18] =
               param_1[(ulonglong)(uint)param_1[1] * 5 + 0x18] + *(int *)(param_2 + 0x130) * 2;
          *(undefined1 *)(param_1 + (ulonglong)(uint)param_1[1] * 5 + 0x1c) = 0;
          uVar9 = (ulonglong)(uint)param_1[1];
          iVar4 = param_1[uVar9 * 5 + 0x18];
        }
        param_1[uVar9 * 5 + 0x1a] = iVar4;
        param_1[1] = param_1[1] + 1;
      }
      uVar13 = uVar13 + 2;
    } while (uVar13 < uVar14);
    local_res8 = (int)uVar17;
  }
  iVar4 = (int)uVar17;
  uVar14 = uVar16;
  if ((ulonglong)bVar1 != 0) {
    do {
      param_1[(ulonglong)(uint)param_1[1] * 5 + 0x18] = *(int *)(lVar3 + 0xfc + uVar14 * 4) << 0x10;
      param_1[((ulonglong)(uint)param_1[1] + 5) * 5] = *(int *)(lVar3 + 0x100 + uVar14 * 4) << 0x10;
      uVar13 = (ulonglong)(uint)param_1[1];
      uVar5 = param_1[uVar13 * 5 + 0x19] - param_1[uVar13 * 5 + 0x18];
      if (-1 < (int)uVar5) {
        *(undefined1 *)(param_1 + uVar13 * 5 + 0x1c) = 1;
        param_1[(ulonglong)(uint)param_1[1] * 5 + 0x1a] =
             param_1[(ulonglong)(uint)param_1[1] * 5 + 0x19];
        param_1[1] = param_1[1] + 1;
        if ((int)uVar5 <= (int)(uint)uVar17) {
          uVar5 = (uint)uVar17;
        }
        uVar17 = (ulonglong)uVar5;
      }
      iVar4 = (int)uVar17;
      uVar14 = uVar14 + 2;
      local_res8 = iVar4;
    } while (uVar14 < bVar1);
  }
  iVar6 = FUN_144b555e0(0x10000,*param_1);
  if (param_1[1] != 0) {
    piVar11 = param_1 + 0x1a;
    do {
      uVar14 = 0;
      iVar15 = 0x7fffffff;
      iVar4 = *piVar11;
      if ((char)piVar11[2] == '\0') {
        uVar14 = 2;
        if (2 < uVar10) {
          do {
            iVar8 = *(int *)(lVar3 + 0x124 + uVar14 * 4) * 0x10000 + *(int *)(param_2 + 0x130) * 2;
            iVar7 = iVar8 - iVar4;
            if (-1 < iVar4 - iVar8) {
              iVar7 = iVar4 - iVar8;
            }
          } while ((((iVar15 <= iVar7) || (iVar6 <= iVar7)) ||
                   (*piVar11 = iVar8, iVar15 = iVar7, iVar7 != 0)) &&
                  (uVar14 = uVar14 + 2, uVar14 < uVar10));
        }
      }
      else {
        if ((ulonglong)bVar2 != 0) {
          do {
            iVar8 = *(int *)(lVar3 + 0x160 + uVar14 * 4);
            iVar12 = iVar8 * 0x10000;
            iVar7 = iVar4 + iVar8 * -0x10000;
            iVar8 = iVar12 - iVar4;
            if (-1 < iVar7) {
              iVar8 = iVar7;
            }
          } while ((((iVar15 <= iVar8) || (iVar6 <= iVar8)) ||
                   (*piVar11 = iVar12, iVar15 = iVar8, iVar8 != 0)) &&
                  (uVar14 = uVar14 + 2, uVar14 < bVar2));
        }
        if (1 < uVar10) {
          iVar7 = *(int *)(lVar3 + 0x128) * 0x10000;
          iVar8 = iVar4 + *(int *)(lVar3 + 0x128) * -0x10000;
          iVar4 = iVar7 - iVar4;
          if (-1 < iVar8) {
            iVar4 = iVar8;
          }
          if ((iVar4 < iVar15) && (iVar4 < iVar6)) {
            *piVar11 = iVar7;
          }
        }
      }
      uVar16 = uVar16 + 1;
      piVar11 = piVar11 + 5;
      iVar4 = local_res8;
    } while (uVar16 < (uint)param_1[1]);
  }
  uVar10 = 0;
  if ((0 < iVar4) && (iVar6 = FUN_144b555e0(0x10000,iVar4), iVar6 < param_1[3])) {
    iVar4 = FUN_144b555e0(0x10000,iVar4);
    param_1[3] = iVar4;
  }
  if (*param_1 < param_1[3]) {
    *(undefined1 *)(param_1 + 2) = 1;
    iVar4 = FUN_144b55580(0x999a);
    param_1[6] = 0x999a - iVar4;
    if (0x7fff < 0x999a - iVar4) {
      param_1[6] = 0x7fff;
    }
  }
  if (*(char *)(param_2 + 0x102) != '\0') {
    param_1[6] = 0;
  }
  if (param_1[1] != 0) {
    piVar11 = param_1 + 0x1a;
    do {
      if ((char)piVar11[2] == '\0') {
        iVar4 = FUN_144b42fe0(*piVar11,*param_1);
        piVar11[1] = param_1[6] + 0x8000 + iVar4 & 0xffff0000;
      }
      else {
        iVar4 = FUN_144b42fe0(*piVar11,*param_1);
        piVar11[1] = iVar4 + (0x8000 - param_1[6]) & 0xffff0000;
      }
      uVar10 = uVar10 + 1;
      piVar11 = piVar11 + 5;
    } while (uVar10 < (uint)param_1[1]);
  }
  return;
}



// FUNCTION 144e0cfa0 FUN_144e0cfa0 body=395 status=ok
// SIG undefined FUN_144e0cfa0(void)

ulonglong FUN_144e0cfa0(longlong param_1,uint *param_2,uint *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  ulonglong in_RAX;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar5;
  
  uVar8 = 0;
  iVar6 = *(int *)(param_1 + 0x14);
  if (*(uint *)(param_1 + 4) == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  do {
    uVar5 = uVar8 * 5;
    cVar2 = *(char *)(param_1 + 0x70 + uVar8 * 0x14);
    lVar1 = param_1 + uVar8 * 0x14;
    if (cVar2 == '\0') {
LAB_144e0d007:
      if ((*param_3 & 10) != 0) {
        uVar7 = param_3[4];
        uVar4 = *(int *)(lVar1 + 0x60) - iVar6;
        uVar5 = (ulonglong)uVar4;
        if (((int)uVar4 <= (int)uVar7) &&
           (uVar4 = *(int *)(param_1 + 100 + uVar8 * 0x14) + iVar6, uVar5 = (ulonglong)uVar4,
           (int)uVar7 <= (int)uVar4)) {
          if (*(char *)(param_1 + 8) == '\0') {
            if ((int)(uVar7 - *(int *)(param_1 + 0x60 + uVar8 * 0x14)) < *(int *)(param_1 + 0x10)) {
              uVar7 = param_3[5] + 0x8000 & 0xffff0000;
            }
            else {
              uVar4 = param_3[5] + 0x8000 & 0xffff0000;
              uVar7 = *(int *)(param_1 + 0x6c + uVar8 * 0x14) + 0x10000;
              if ((int)uVar7 < (int)uVar4) {
                uVar7 = uVar4;
              }
            }
          }
          else {
            uVar7 = *(uint *)(param_1 + 0x6c + uVar8 * 0x14);
          }
          iVar6 = uVar7 - param_3[5];
LAB_144e0d0f8:
          if (*param_2 != 0) {
            param_2[5] = param_2[5] + iVar6;
            *param_2 = *param_2 | 0x10;
          }
          uVar7 = 0;
          if (*param_3 != 0) {
            param_3[5] = param_3[5] + iVar6;
            uVar7 = *param_3 | 0x10;
            *param_3 = uVar7;
          }
          return CONCAT71((uint7)(uint3)(uVar7 >> 8),1);
        }
      }
    }
    else {
      if ((*param_2 & 5) != 0) {
        uVar7 = param_2[4];
        uVar4 = *(int *)(lVar1 + 0x60) - iVar6;
        uVar5 = (ulonglong)uVar4;
        if ((int)uVar4 <= (int)uVar7) {
          iVar3 = *(int *)(param_1 + 100 + uVar8 * 0x14);
          uVar4 = iVar3 + iVar6;
          uVar5 = (ulonglong)uVar4;
          if ((int)uVar7 <= (int)uVar4) {
            if (*(char *)(param_1 + 8) == '\0') {
              if ((int)(iVar3 - uVar7) < *(int *)(param_1 + 0x10)) {
                iVar6 = (param_2[5] + 0x8000 & 0xffff0000) - param_2[5];
              }
              else {
                uVar7 = *(int *)(param_1 + 0x6c + uVar8 * 0x14) - 0x10000;
                uVar4 = param_2[5] + 0x8000 & 0xffff0000;
                if ((int)uVar4 < (int)uVar7) {
                  uVar7 = uVar4;
                }
                iVar6 = uVar7 - param_2[5];
              }
            }
            else {
              iVar6 = *(int *)(param_1 + 0x6c + uVar8 * 0x14) - param_2[5];
            }
            goto LAB_144e0d0f8;
          }
        }
      }
      if (cVar2 == '\0') goto LAB_144e0d007;
    }
    uVar7 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar7;
    if (*(uint *)(param_1 + 4) <= uVar7) {
      return uVar5 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 144e0d130 FUN_144e0d130 body=1718 status=ok
// SIG undefined FUN_144e0d130(void)

/* WARNING: Removing unreachable block (ram,0x000144e0d5f0) */
/* WARNING: Removing unreachable block (ram,0x000144e0d32d) */
/* WARNING: Removing unreachable block (ram,0x000144e0d61f) */
/* WARNING: Removing unreachable block (ram,0x000144e0d357) */

void FUN_144e0d130(longlong *param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                  int param_5,char param_6)

{
  uint uVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  char *pcVar9;
  byte *pbVar10;
  uint *puVar11;
  longlong *plVar12;
  byte bVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 auStack_108 [32];
  int local_e8;
  undefined1 local_e0;
  byte local_d8;
  longlong *local_d0;
  longlong local_c8;
  byte *local_c0;
  ulonglong local_b8;
  longlong local_b0;
  undefined8 *local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  undefined8 local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_c8 = *param_1;
  local_d0 = param_1;
  local_b0 = param_2;
  local_a8 = param_4;
  if ((param_6 == '\0') && (*(char *)(param_1[1] + 0x18) == '\0')) {
    local_e0 = 1;
    uStack_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_60 = *param_4;
    local_e8 = param_5;
    FUN_144e0d130(param_1[1],param_2,param_3,&local_60);
  }
  lVar17 = local_c8;
  if ((*(char *)(param_4 + 1) == '\0') &&
     (plVar12 = local_d0,
     FUN_144e0e0b0(param_4,*(longlong *)(param_3 + 0x28) + *(longlong *)(param_2 + 0x28)),
     *(char *)(param_4 + 1) == '\0')) {
    if (*(char *)(lVar17 + 0xc) != '\0') {
      *(undefined4 *)*param_4 = 0;
      *(undefined1 *)((longlong)plVar12 + 0x19) = 0;
    }
  }
  else {
    plVar12 = local_d0;
    local_c0 = (byte *)&local_40;
    local_d0[4] = 0;
    local_60 = *param_4;
    uStack_58 = param_4[1];
    local_b8 = *(ulonglong *)(param_2 + 0x28);
    local_50 = param_4[2];
    uStack_48 = param_4[3];
    local_40 = param_4[4];
    uStack_38 = param_4[5];
    if (local_b8 <= (ulonglong)param_4[2]) {
      if (*(char *)(lVar17 + 0x141) != '\0') {
        local_a0 = 0;
        local_98 = 0;
        local_90 = 0;
        local_88 = 0;
        FUN_144e11d20(local_d0,lVar17 + 0x178,&local_a0);
        FUN_144e11d20(plVar12,&local_a0,local_c8 + 0x158);
      }
      pbVar10 = (byte *)&local_40;
      uVar14 = 0;
      local_d8 = 0x80;
      uVar16 = local_b8;
      if (local_b8 != 0) {
        do {
          if ((*pbVar10 & local_d8) != 0) {
            uVar1 = *(uint *)((longlong)plVar12 + 0x1c);
            uVar16 = uVar14;
            if (*(ulonglong *)(param_2 + 0x28) <= uVar14) {
              piVar2 = *(int **)(param_2 + 8);
              if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
                *piVar2 = 0x82;
              }
              uVar16 = 0;
            }
            pcVar9 = (char *)(*(longlong *)(param_2 + 0x10) * uVar16 + *(longlong *)(param_2 + 0x38)
                             );
            iVar5 = *(int *)(pcVar9 + 8);
            iVar4 = iVar5 - *(int *)(pcVar9 + 4);
            if (iVar4 == -0x150000) {
              uVar7 = 1;
            }
            else if (iVar4 == -0x140000) {
              local_90._0_4_ = 0;
              uVar7 = 0;
              iVar5 = (int)local_90;
            }
            else {
              uVar7 = 4;
              if (-1 < iVar4) {
                iVar5 = *(int *)(pcVar9 + 4);
              }
            }
            local_a0 = (ulonglong)uVar7;
            local_90 = (ulonglong)(uint)(iVar5 + param_5);
            local_88 = (ulonglong)uVar1;
            local_98 = uVar14;
            if ((uVar7 == 0) || (*pcVar9 == '\0')) {
              uVar6 = FUN_144b42fe0(iVar5 + param_5,uVar1);
            }
            else {
              uVar6 = *(undefined4 *)(pcVar9 + 0xc);
              local_a0 = (ulonglong)uVar7 | 0x10;
              uVar7 = 0x10;
            }
            uVar1 = *(uint *)((longlong)plVar12 + 0x1c);
            local_90 = CONCAT44(uVar6,(int)local_90);
            uVar16 = uVar14;
            if (*(ulonglong *)(local_b0 + 0x28) <= uVar14) {
              piVar2 = *(int **)(local_b0 + 8);
              if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
                *piVar2 = 0x82;
              }
              uVar16 = 0;
            }
            pcVar9 = (char *)(*(longlong *)(local_b0 + 0x10) * uVar16 +
                             *(longlong *)(local_b0 + 0x38));
            iVar5 = *(int *)(pcVar9 + 4);
            iVar4 = *(int *)(pcVar9 + 8) - iVar5;
            if (iVar4 == -0x150000) {
              local_70._0_4_ = 0;
              uVar15 = 0;
              iVar5 = (int)local_70;
            }
            else if (iVar4 == -0x140000) {
              uVar15 = 2;
            }
            else {
              uVar15 = 8;
              if (-1 < iVar4) {
                iVar5 = *(int *)(pcVar9 + 8);
              }
            }
            local_80 = (ulonglong)uVar15;
            if (uVar15 != 0) {
              iVar5 = iVar5 + *(int *)(local_c8 + 0x130) * 2;
            }
            local_68 = (ulonglong)uVar1;
            local_70 = (ulonglong)(uint)(iVar5 + param_5);
            local_78 = uVar14;
            if ((uVar15 == 0) || (*pcVar9 == '\0')) {
              uVar6 = FUN_144b42fe0(iVar5 + param_5,uVar1);
            }
            else if (uVar15 == 0) {
              uVar6 = *(undefined4 *)(pcVar9 + 0xc);
              uVar15 = 0x10;
              local_80 = 0x10;
            }
            else {
              uVar6 = *(undefined4 *)(pcVar9 + 0x10);
              local_80 = (ulonglong)uVar15 | 0x10;
              uVar15 = 0x10;
            }
            local_70 = CONCAT44(uVar6,(int)local_70);
            if (((uVar7 >> 4 != 0) || (uVar15 >> 4 != 0)) ||
               (cVar3 = FUN_144e0cfa0(local_c8 + 0x138,&local_a0,&local_80), pbVar10 = local_c0,
               plVar12 = local_d0, param_2 = local_b0, uVar16 = local_b8, cVar3 != '\0')) {
              plVar12 = local_d0;
              FUN_144e11d20(local_d0,&local_a0,&local_80);
              *local_c0 = *local_c0 & ~local_d8;
              pbVar10 = local_c0;
              param_2 = local_b0;
              uVar16 = local_b8;
            }
          }
          if (((byte)uVar14 & 7) == 7) {
            pbVar10 = pbVar10 + 1;
            local_d8 = 0x80;
            local_c0 = pbVar10;
          }
          else {
            local_d8 = local_d8 >> 1;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar16);
      }
      if (param_6 == '\0') {
        uVar14 = 0;
        pbVar10 = (byte *)&local_40;
        bVar13 = 0x80;
        plVar12 = local_d0;
        local_c0 = pbVar10;
        if (uVar16 != 0) {
          do {
            if ((*pbVar10 & bVar13) != 0) {
              uVar1 = *(uint *)((longlong)local_d0 + 0x1c);
              uVar16 = uVar14;
              if (*(ulonglong *)(param_2 + 0x28) <= uVar14) {
                piVar2 = *(int **)(param_2 + 8);
                if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
                  *piVar2 = 0x82;
                }
                uVar16 = 0;
              }
              pcVar9 = (char *)(*(longlong *)(param_2 + 0x10) * uVar16 +
                               *(longlong *)(param_2 + 0x38));
              local_70._0_4_ = *(int *)(pcVar9 + 8);
              iVar5 = (int)local_70 - *(int *)(pcVar9 + 4);
              if (iVar5 == -0x150000) {
                uVar7 = 1;
              }
              else if (iVar5 == -0x140000) {
                local_70._0_4_ = 0;
                uVar7 = 0;
              }
              else {
                if (-1 < iVar5) {
                  local_70._0_4_ = *(int *)(pcVar9 + 4);
                }
                uVar7 = 4;
              }
              local_80 = (ulonglong)uVar7;
              uVar15 = (int)local_70 + param_5;
              local_70 = (ulonglong)uVar15;
              local_68 = (ulonglong)uVar1;
              local_78 = uVar14;
              if ((uVar7 == 0) || (*pcVar9 == '\0')) {
                uVar6 = FUN_144b42fe0(uVar15,uVar1);
              }
              else {
                uVar6 = *(undefined4 *)(pcVar9 + 0xc);
                local_80 = (ulonglong)uVar7 | 0x10;
              }
              local_70 = CONCAT44(uVar6,(int)local_70);
              uVar1 = *(uint *)((longlong)local_d0 + 0x1c);
              uVar16 = uVar14;
              if (*(ulonglong *)(param_2 + 0x28) <= uVar14) {
                piVar2 = *(int **)(param_2 + 8);
                if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
                  *piVar2 = 0x82;
                }
                uVar16 = 0;
              }
              pcVar9 = (char *)(*(longlong *)(param_2 + 0x10) * uVar16 +
                               *(longlong *)(param_2 + 0x38));
              local_90._0_4_ = *(int *)(pcVar9 + 4);
              iVar5 = *(int *)(pcVar9 + 8) - (int)local_90;
              if (iVar5 == -0x150000) {
                local_90._0_4_ = 0;
                uVar7 = 0;
              }
              else if (iVar5 == -0x140000) {
                uVar7 = 2;
              }
              else {
                if (-1 < iVar5) {
                  local_90._0_4_ = *(int *)(pcVar9 + 8);
                }
                uVar7 = 8;
              }
              local_a0 = (ulonglong)uVar7;
              if (uVar7 != 0) {
                local_90._0_4_ = (int)local_90 + *(int *)(local_c8 + 0x130) * 2;
              }
              uVar15 = (int)local_90 + param_5;
              local_88 = (ulonglong)uVar1;
              local_90 = (ulonglong)uVar15;
              local_98 = uVar14;
              if ((uVar7 == 0) || (*pcVar9 == '\0')) {
                uVar6 = FUN_144b42fe0(uVar15,uVar1);
              }
              else if (uVar7 == 0) {
                uVar6 = *(undefined4 *)(pcVar9 + 0xc);
                local_a0 = 0x10;
              }
              else {
                uVar6 = *(undefined4 *)(pcVar9 + 0x10);
                local_a0 = (ulonglong)uVar7 | 0x10;
              }
              local_90 = CONCAT44(uVar6,(int)local_90);
              FUN_144e11d20(local_d0,&local_80,&local_a0);
              pbVar10 = local_c0;
              uVar16 = local_b8;
            }
            if (((byte)uVar14 & 7) == 7) {
              pbVar10 = pbVar10 + 1;
              bVar13 = 0x80;
              local_c0 = pbVar10;
            }
            else {
              bVar13 = bVar13 >> 1;
            }
            uVar14 = uVar14 + 1;
            plVar12 = local_d0;
          } while (uVar14 < uVar16);
        }
      }
      else if ((((int)plVar12[4] == 0) || (0 < (int)plVar12[7])) ||
              ((int)plVar12[(ulonglong)((int)plVar12[4] - 1) * 4 + 7] < 0)) {
        local_98 = 0;
        local_90 = 0;
        local_88 = (ulonglong)*(uint *)((longlong)plVar12 + 0x1c);
        local_80 = 0;
        local_78 = 0;
        local_70 = 0;
        local_68 = 0;
        local_a0 = 0x31;
        FUN_144e11d20(plVar12,&local_a0);
      }
      FUN_144e119b0(plVar12);
      if ((param_6 == '\0') && (uVar16 = 0, (int)plVar12[4] != 0)) {
        puVar11 = (uint *)(plVar12 + 5);
        do {
          if ((*puVar11 >> 5 & 1) == 0) {
            uVar14 = *(ulonglong *)(puVar11 + 2);
            if (*(ulonglong *)(param_2 + 0x28) <= uVar14) {
              piVar2 = *(int **)(param_2 + 8);
              if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
                *piVar2 = 0x82;
              }
              uVar14 = 0;
            }
            puVar8 = (undefined1 *)
                     (*(longlong *)(param_2 + 0x10) * uVar14 + *(longlong *)(param_2 + 0x38));
            if ((*puVar11 & 10) == 0) {
              *(uint *)(puVar8 + 0xc) = puVar11[5];
            }
            else {
              *(uint *)(puVar8 + 0x10) = puVar11[5];
            }
            *puVar8 = 1;
          }
          uVar16 = uVar16 + 1;
          puVar11 = puVar11 + 8;
        } while (uVar16 < *(uint *)(plVar12 + 4));
      }
      *(undefined1 *)(plVar12 + 3) = 1;
      *(undefined1 *)((longlong)local_a8 + 9) = 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_108);
}



// FUNCTION 144e0d800 FUN_144e0d800 body=514 status=ok
// SIG undefined FUN_144e0d800(void)

void FUN_144e0d800(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 *param_10)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  memset(param_1,0,0x4968);
  *param_1 = param_2;
  puVar1 = param_1 + 0x911;
  param_1[1] = param_3;
  _Dst = param_1 + 0x60c;
  *puVar1 = *param_2;
  param_1[0x913] = 0x10;
  param_1[0x912] = param_2 + 1;
  param_1[0x915] = 10;
  param_1[0x914] = 0;
  param_1[0x916] = 0;
  param_1[0x917] = 0;
  param_1[0x918] = 0;
  memset(_Dst,0,0x1828);
  *(undefined1 *)((longlong)param_1 + 0x3079) = *(undefined1 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x307c) = param_4;
  *_Dst = param_2;
  param_1[0x60d] = _Dst;
  param_1[0x60e] = puVar1;
  memset(param_1 + 0x307,0,0x1828);
  *(undefined1 *)((longlong)param_1 + 0x1851) = *(undefined1 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x1854) = param_4;
  param_1[0x307] = param_2;
  param_1[0x308] = _Dst;
  param_1[0x309] = puVar1;
  memset(param_1 + 2,0,0x1828);
  *(undefined1 *)((longlong)param_1 + 0x29) = *(undefined1 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x2c) = param_4;
  param_1[2] = param_2;
  param_1[3] = _Dst;
  param_1[4] = puVar1;
  *(undefined4 *)(param_1 + 0x919) = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)((longlong)param_1 + 0x48cc) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x91a) = *(undefined4 *)(param_2 + 7);
  uVar3 = *param_10;
  param_1[0x91c] = param_5;
  param_1[0x91d] = param_6;
  param_1[0x91e] = param_7;
  *(undefined4 *)(param_1 + 0x91f) = param_8;
  param_1[0x920] = param_9;
  *(undefined8 *)((longlong)param_1 + 0x48d4) = uVar3;
  *(undefined1 *)((longlong)param_1 + 0x48de) = *(undefined1 *)((longlong)param_2 + 0x101);
  iVar2 = *(int *)((longlong)param_2 + 300);
  *(int *)(param_1 + 0x921) = iVar2;
  iVar4 = *(int *)(param_2 + 0x26);
  *(int *)((longlong)param_1 + 0x490c) = iVar4;
  iVar5 = iVar2;
  if (iVar2 < 0) {
    iVar5 = -iVar2;
  }
  iVar6 = iVar4;
  if (iVar4 < 0) {
    iVar6 = -iVar4;
  }
  if (iVar6 < iVar5) {
    iVar4 = iVar2;
  }
  if (iVar4 < 0) {
    iVar4 = -iVar4;
  }
  *(int *)(param_1 + 0x922) = iVar4 * 2;
  *(undefined4 *)((longlong)param_1 + 0x4914) = 0x199a;
  *(undefined1 *)((longlong)param_1 + 0x48df) = 1;
  *(undefined2 *)((longlong)param_1 + 0x48dc) = 0;
  *(undefined1 *)(param_1 + 0x928) = 0;
  return;
}



// FUNCTION 144e0da10 FUN_144e0da10 body=265 status=ok
// SIG undefined FUN_144e0da10(void)

void FUN_144e0da10(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  FUN_144e0ded0();
  *(undefined4 *)(param_1 + 0x4938) = param_2;
  *(undefined4 *)(param_1 + 0x4928) = param_2;
  *(undefined4 *)(param_1 + 0x493c) = param_3;
  *(undefined4 *)(param_1 + 0x492c) = param_3;
  *(undefined1 *)(param_1 + 0x48df) = 1;
  if ((*(char *)(param_1 + 0x28) == '\0') ||
     (*(char *)(*(longlong *)(param_1 + 0x48f0) + 9) != '\0')) {
    FUN_144e0d130(param_1 + 0x10,*(undefined8 *)(param_1 + 0x48e0),*(undefined8 *)(param_1 + 0x48e8)
                  ,*(undefined8 *)(param_1 + 0x48f0),*(undefined4 *)(param_1 + 0x48f8),0);
  }
  lVar6 = 0x30;
  puVar2 = (undefined8 *)(param_1 + 0x1838);
  puVar3 = (undefined8 *)(param_1 + 0x10);
  do {
    puVar5 = puVar3;
    puVar4 = puVar2;
    uVar1 = puVar5[1];
    *puVar4 = *puVar5;
    puVar4[1] = uVar1;
    uVar1 = puVar5[3];
    puVar4[2] = puVar5[2];
    puVar4[3] = uVar1;
    uVar1 = puVar5[5];
    puVar4[4] = puVar5[4];
    puVar4[5] = uVar1;
    uVar1 = puVar5[7];
    puVar4[6] = puVar5[6];
    puVar4[7] = uVar1;
    uVar1 = puVar5[9];
    puVar4[8] = puVar5[8];
    puVar4[9] = uVar1;
    uVar1 = puVar5[0xb];
    puVar4[10] = puVar5[10];
    puVar4[0xb] = uVar1;
    uVar1 = puVar5[0xd];
    puVar4[0xc] = puVar5[0xc];
    puVar4[0xd] = uVar1;
    uVar1 = puVar5[0xf];
    puVar4[0xe] = puVar5[0xe];
    puVar4[0xf] = uVar1;
    lVar6 = lVar6 + -1;
    puVar2 = puVar4 + 0x10;
    puVar3 = puVar5 + 0x10;
  } while (lVar6 != 0);
  uVar1 = puVar5[0x11];
  puVar4[0x10] = puVar5[0x10];
  puVar4[0x11] = uVar1;
  uVar1 = puVar5[0x13];
  puVar4[0x12] = puVar5[0x12];
  puVar4[0x13] = uVar1;
  puVar4[0x14] = puVar5[0x14];
  return;
}



// FUNCTION 144e0db20 FUN_144e0db20 body=404 status=ok
// SIG undefined FUN_144e0db20(void)

void FUN_144e0db20(longlong param_1,int param_2,uint param_3)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 uVar3;
  int local_res8;
  int iStackX_c;
  int local_res10 [2];
  int local_res20;
  int iStackX_24;
  uint uVar4;
  int *piVar5;
  
  if ((*(char *)(*(longlong *)(param_1 + 0x48f0) + 9) == '\0') ||
     (*(char *)(param_1 + 0x48dd) != '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (((*(int *)(param_1 + 0x4928) != param_2) || (*(uint *)(param_1 + 0x492c) != param_3)) ||
     (bVar2)) {
    piVar5 = local_res10;
    uVar4 = param_3;
    FUN_144e124f0(param_1,*(int *)(param_1 + 0x4928),*(undefined4 *)(param_1 + 0x492c),param_2,
                  param_3,piVar5,&local_res8);
    local_res20 = *(int *)(param_1 + 0x4928) + local_res10[0];
    iStackX_24 = *(int *)(param_1 + 0x492c) + local_res8;
    local_res10[0] = local_res10[0] + param_2;
    uVar3 = CONCAT44(iStackX_24,local_res20);
    iStackX_c = local_res8 + param_3;
    uVar1 = CONCAT44(iStackX_c,local_res10[0]);
    local_res8 = local_res10[0];
    if (*(char *)(param_1 + 0x48df) != '\0') {
      FUN_144e12440(param_1,uVar3);
      *(undefined1 *)(param_1 + 0x48df) = 0;
      *(undefined1 *)(param_1 + 0x48dc) = 1;
      *(undefined8 *)(param_1 + 0x4920) = uVar1;
    }
    if (*(char *)(param_1 + 0x4940) != '\0') {
      FUN_144e121d0(param_1,param_1 + 0x10,&local_res20,uVar1,uVar4 & 0xffffff00);
      uVar3 = CONCAT44(iStackX_24,local_res20);
    }
    *(undefined8 *)(param_1 + 0x4948) = uVar3;
    *(undefined8 *)(param_1 + 0x4950) = uVar1;
    *(undefined1 *)(param_1 + 0x4940) = 1;
    *(undefined4 *)(param_1 + 0x4944) = 2;
    if (bVar2) {
      FUN_144e0d130(param_1 + 0x10,*(undefined8 *)(param_1 + 0x48e0),
                    *(undefined8 *)(param_1 + 0x48e8),*(undefined8 *)(param_1 + 0x48f0),
                    *(undefined4 *)(param_1 + 0x48f8),(ulonglong)piVar5 & 0xffffffffffffff00);
    }
    *(int *)(param_1 + 0x4928) = param_2;
    *(uint *)(param_1 + 0x492c) = param_3;
  }
  return;
}



// FUNCTION 144e0dcc0 FUN_144e0dcc0 body=520 status=ok
// SIG undefined FUN_144e0dcc0(void)

void FUN_144e0dcc0(longlong param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  uint param_7)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int local_res8;
  int iStackX_c;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  uint uVar4;
  int *piVar5;
  int local_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  
  FUN_144e124f0(param_1,*(undefined4 *)(param_1 + 0x4928),*(undefined4 *)(param_1 + 0x492c),param_2,
                param_3,local_res10,local_res18);
  piVar5 = local_res20;
  uVar4 = param_7;
  FUN_144e124f0(param_1,param_4,param_5,param_6,param_7,piVar5,&local_res8);
  piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x20);
  *piVar1 = *piVar1 + ((param_5 - param_3 >> 0x10) * (param_2 >> 0x10) -
                      (param_4 - param_2 >> 0x10) * (param_3 >> 0x10));
  local_58 = *(int *)(param_1 + 0x4928) + local_res10[0];
  iStack_54 = *(int *)(param_1 + 0x492c) + local_res18[0];
  local_50 = local_res10[0] + param_2;
  iStack_4c = local_res18[0] + param_3;
  uVar2 = CONCAT44(iStack_4c,local_50);
  local_48 = local_res20[0] + param_4;
  iStack_44 = local_res8 + param_5;
  uVar3 = CONCAT44(iStack_54,local_58);
  iStackX_c = local_res8 + param_7;
  local_res8 = local_res20[0] + param_6;
  if (*(char *)(param_1 + 0x48df) != '\0') {
    FUN_144e12440(param_1,uVar3);
    *(undefined1 *)(param_1 + 0x48df) = 0;
    *(undefined1 *)(param_1 + 0x48dc) = 1;
    *(undefined8 *)(param_1 + 0x4920) = uVar2;
  }
  if (*(char *)(param_1 + 0x4940) != '\0') {
    FUN_144e121d0(param_1,param_1 + 0x10,&local_58,uVar2,uVar4 & 0xffffff00);
    uVar3 = CONCAT44(iStack_54,local_58);
  }
  *(ulonglong *)(param_1 + 0x4958) = CONCAT44(iStack_44,local_48);
  *(ulonglong *)(param_1 + 0x4960) = CONCAT44(iStackX_c,local_res8);
  *(undefined1 *)(param_1 + 0x4940) = 1;
  *(undefined4 *)(param_1 + 0x4944) = 4;
  *(undefined8 *)(param_1 + 0x4948) = uVar3;
  *(undefined8 *)(param_1 + 0x4950) = uVar2;
  if (*(char *)(*(longlong *)(param_1 + 0x48f0) + 9) != '\0') {
    FUN_144e0d130(param_1 + 0x10,*(undefined8 *)(param_1 + 0x48e0),*(undefined8 *)(param_1 + 0x48e8)
                  ,*(longlong *)(param_1 + 0x48f0),*(undefined4 *)(param_1 + 0x48f8),
                  (ulonglong)piVar5 & 0xffffffffffffff00);
  }
  *(uint *)(param_1 + 0x492c) = param_7;
  *(int *)(param_1 + 0x4928) = param_6;
  return;
}



// FUNCTION 144e0ded0 FUN_144e0ded0 body=112 status=ok
// SIG undefined FUN_144e0ded0(void)

void FUN_144e0ded0(longlong param_1)

{
  if (*(char *)(param_1 + 0x48dc) != '\0') {
    *(undefined1 *)(param_1 + 0x48dd) = 1;
    FUN_144e0db20(param_1,*(undefined4 *)(param_1 + 0x4938),*(undefined4 *)(param_1 + 0x493c));
    if (*(char *)(param_1 + 0x4940) != '\0') {
      FUN_144e121d0(param_1,param_1 + 0x10,param_1 + 0x4918,*(undefined8 *)(param_1 + 0x4920),1);
    }
    *(undefined1 *)(param_1 + 0x48df) = 1;
    *(undefined2 *)(param_1 + 0x48dc) = 0;
    *(undefined1 *)(param_1 + 0x4940) = 0;
  }
  return;
}



// FUNCTION 144e0df40 FUN_144e0df40 body=367 status=ok
// SIG undefined FUN_144e0df40(void)

int FUN_144e0df40(longlong param_1,undefined8 param_2,longlong param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined4 local_res8 [2];
  undefined4 local_res18;
  undefined4 local_res1c;
  
  local_res18 = *(undefined4 *)(param_3 + 0x10);
  local_res1c = *(undefined4 *)(param_3 + 0x14);
  local_res8[0] = 0;
  FUN_144e11300(param_1,param_3);
  piVar1 = (int *)(param_1 + 8);
  if (*(int *)(param_1 + 8) == 0) {
    *(undefined1 *)(param_1 + 0x134) = 0;
    cVar4 = *(char *)(param_1 + 0x101);
    *(undefined4 *)(param_1 + 0xd0) = 0;
    FUN_144b56640(*(undefined8 *)(*(longlong *)(param_1 + 0xe8) + 0x18));
    FUN_144e0e130(param_1,param_2,param_1 + 0xb0,&local_res18,0,0,0,local_res8);
    iVar2 = *piVar1;
    while (iVar2 == 0) {
      if ((cVar4 == '\0') || (-1 < *(int *)(param_1 + 0xd0))) {
        lVar3 = *(longlong *)(param_1 + 0xe8);
        FUN_144e0c030(lVar3);
        FUN_144b56b30(*(undefined8 *)(lVar3 + 0x18));
        break;
      }
      *(undefined1 *)(param_1 + 0x134) = 1;
      cVar4 = '\0';
      *(undefined4 *)(param_1 + 0xd0) = 0;
      FUN_144b56640(*(undefined8 *)(*(longlong *)(param_1 + 0xe8) + 0x18));
      FUN_144e0e130(param_1,param_2,param_1 + 0xb0,&local_res18,0,0,0,local_res8);
      iVar2 = *piVar1;
    }
  }
  *param_4 = local_res8[0];
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return 0;
  }
  return *piVar1;
}



// FUNCTION 144e0e0b0 FUN_144e0e0b0 body=124 status=ok
// SIG undefined FUN_144e0e0b0(void)

void FUN_144e0e0b0(undefined8 *param_1,ulonglong param_2)

{
  byte *pbVar1;
  int *piVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 < 0x61) {
    param_1[2] = param_2;
    uVar4 = param_2 + 7 >> 3;
    param_1[3] = uVar4;
    *(undefined2 *)(param_1 + 1) = 0x101;
    if (param_2 != 0) {
      uVar3 = 0;
      if (uVar4 != 0) {
        do {
          *(undefined1 *)((longlong)param_1 + uVar3 + 0x20) = 0xff;
          uVar3 = uVar3 + 1;
        } while (uVar3 < (ulonglong)param_1[3]);
      }
      pbVar1 = (byte *)((longlong)param_1 + param_1[3] + 0x1f);
      *pbVar1 = *pbVar1 & ~((char)(1 << (-(char)param_2 & 7U)) - 1U);
    }
  }
  else {
    piVar2 = (int *)*param_1;
    if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
      *piVar2 = 0x12;
      return;
    }
  }
  return;
}



// FUNCTION 144e0e130 FUN_144e0e130 body=10106 status=ok
// SIG undefined FUN_144e0e130(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144e0e130(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  char param_5,uint param_6,uint param_7,int *param_8)

{
  byte *pbVar1;
  undefined8 uVar2;
  uint *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 *puVar18;
  int *piVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  undefined4 *puVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong lVar30;
  undefined8 uVar31;
  bool bVar32;
  undefined1 auStack_6498 [32];
  char *local_6478;
  undefined8 local_6470;
  int **local_6468;
  uint *local_6460;
  undefined8 *local_6458;
  undefined8 local_6450;
  uint local_6448;
  uint local_6444;
  uint local_6440;
  char local_643c;
  char local_643b;
  int *local_6438;
  int local_6430;
  longlong local_6428;
  undefined8 *local_6420;
  uint local_6418;
  int local_6414;
  undefined8 local_6410;
  uint local_6408;
  undefined8 *local_6400;
  uint local_63f8;
  byte local_63f4;
  uint local_63f0;
  uint local_63ec;
  longlong local_63e8;
  int local_63e0;
  int local_63dc;
  int *local_63d8;
  undefined8 local_63d0;
  undefined8 local_63c8;
  undefined8 *local_63c0;
  ulonglong local_63b8;
  ulonglong local_63b0;
  undefined8 local_6398;
  int *local_6390;
  undefined8 local_6388;
  undefined8 local_6380;
  undefined8 local_6378;
  longlong local_6370;
  undefined8 local_6368;
  undefined8 local_6360;
  undefined8 local_6358;
  int *local_6350;
  undefined8 local_6348;
  undefined8 local_6340;
  undefined8 local_6338;
  longlong local_6330;
  undefined8 local_6328;
  undefined8 local_6320;
  undefined8 local_6318;
  int *local_6310;
  longlong local_6308;
  undefined8 local_6300;
  undefined8 local_62f8;
  ulonglong local_62f0;
  undefined8 local_62e8;
  undefined8 *local_62e0;
  int *local_62d8;
  undefined8 local_62d0;
  undefined8 local_62c8;
  undefined8 local_62c0;
  undefined8 local_62b8;
  undefined8 local_62b0;
  int *local_62a8;
  undefined8 local_62a0;
  undefined8 local_6298;
  undefined8 local_6290;
  undefined8 local_6288;
  undefined8 local_6280;
  undefined8 *local_6278;
  undefined1 *local_6270;
  undefined8 *local_6268;
  undefined1 local_625f;
  uint local_625c;
  undefined1 local_4a48 [12384];
  undefined1 local_19e8 [6184];
  undefined8 local_1c0 [3];
  undefined8 local_1a8;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  uint local_b0;
  undefined4 local_a8 [32];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x144e0e14a;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_6498;
  local_63d8 = param_8;
  lVar27 = param_1[0x1e];
  local_6438 = (int *)(param_1 + 1);
  uVar31 = *param_1;
  local_63f0 = *(uint *)(param_1 + 7);
  local_6430 = 0;
  local_63e0 = *(int *)(*(longlong *)(lVar27 + 0x328) + 0x224) << 0x10;
  local_6414 = 0;
  local_6408 = local_6408 & 0xffffff00;
  local_643b = '\0';
  local_63f8 = 0;
  local_63dc = 20000000;
  local_6428 = lVar27;
  local_6400 = param_1;
  local_63d0 = param_4;
  local_63c8 = param_3;
  memset(local_a8,0,0x80);
  local_b8 = 0;
  local_b0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_6310 = local_6438;
  local_6350 = local_6438;
  local_6390 = local_6438;
  local_62d8 = local_6438;
  local_6450 = local_63d0;
  local_6300 = 0;
  local_62f0 = 0;
  local_62e8 = 0;
  local_62e0 = (undefined8 *)0x0;
  local_6340 = 0;
  local_6330 = 0;
  local_6328 = 0;
  local_6320 = 0;
  local_6380 = 0;
  local_6370 = 0;
  local_6368 = 0;
  local_6360 = 0;
  local_62d0 = 0;
  local_62c8 = 0;
  local_62c0 = 0;
  local_62b8 = 0;
  local_62b0 = 0;
  local_6308 = 0x20;
  local_62f8 = 10;
  local_6458 = local_6400 + 0x27;
  local_6460 = (uint *)CONCAT44(local_6460._4_4_,param_7);
  local_6440 = param_7;
  local_6468 = &local_62d8;
  local_6478 = (char *)&local_6358;
  local_6348 = 0x14;
  local_6338 = 10;
  local_6388 = 0x14;
  local_6378 = 10;
  local_6470 = &local_6398;
  local_6398 = uVar31;
  local_6358 = uVar31;
  local_6318 = uVar31;
  FUN_144e0d800(local_4a48,local_6400,local_63c8,local_63f0);
  local_643c = *(char *)((longlong)local_6400 + 0xd) != '\0';
  *local_63d8 = *(int *)(*(longlong *)(lVar27 + 0x328) + 0x220) << 0x10;
  if (*(char *)((longlong)local_6400 + 0xd) == '\0') {
    local_63ec = 0x30;
  }
  else {
    local_63ec = *(uint *)(*(longlong *)(lVar27 + 800) + 0x698);
  }
  puVar18 = (undefined8 *)FUN_144e12690(uVar31,local_6400 + 1,local_63ec);
  local_63c0 = puVar18;
  if (puVar18 == (undefined8 *)0x0) {
    iVar12 = 0x40;
  }
  else {
    cVar6 = FUN_144e0c9a0(&local_6318);
    local_63b8 = local_62f0;
    if (cVar6 != '\0') {
      local_63b8 = 0x11;
    }
    local_6420 = local_62e0;
    iVar12 = local_6430;
    if (*local_6438 == 0) {
      uVar16 = param_2[1];
      uVar17 = param_2[2];
      uVar5 = param_2[3];
      uVar28 = (ulonglong)param_6;
      uVar22 = 0;
      uVar29 = (ulonglong)local_6440;
      *(undefined4 *)local_62e0 = *param_2;
      *(undefined4 *)((longlong)local_62e0 + 4) = uVar16;
      *(undefined4 *)(local_62e0 + 1) = uVar17;
      *(undefined4 *)((longlong)local_62e0 + 0xc) = uVar5;
      local_6448 = 0;
      uVar31 = *(undefined8 *)(param_2 + 6);
      local_6444 = param_6;
      local_62e0[2] = *(undefined8 *)(param_2 + 4);
      local_62e0[3] = uVar31;
      uVar31 = 0x2000;
      uVar20 = uVar22;
      puVar23 = local_62e0;
LAB_144e0e3f0:
      while( true ) {
        puVar25 = local_6400;
        lVar27 = local_6428;
        uVar13 = (uint)uVar28;
        pbVar1 = (byte *)puVar23[3];
        if (pbVar1 < (byte *)puVar23[2]) {
          bVar7 = *pbVar1;
          puVar23[3] = pbVar1 + 1;
          uVar24 = (ulonglong)bVar7;
          local_6418 = (uint)bVar7;
          if ((bVar7 == 0xb) || (bVar7 == 0xe)) {
            uVar24 = (ulonglong)bVar7;
            if (*(char *)((longlong)local_6400 + 0xd) != '\0') {
              uVar24 = uVar20 & 0xffffffff;
            }
            local_6418 = (uint)uVar24;
          }
          uVar22 = (ulonglong)local_6448;
        }
        else {
          uVar24 = 0xb;
          if ((int)uVar22 == 0) {
            uVar24 = 0xe;
          }
          local_6418 = (uint)uVar24;
        }
        cVar6 = *(char *)((longlong)local_6400 + 0xc);
        bVar7 = (byte)uVar24;
        if (cVar6 == '\0') break;
        if (((local_643b != '\0') || (0x1f < bVar7)) ||
           ((0xffff83f5U >> ((uint)uVar24 & 0x1f) & 1) == 0)) {
          if ((0 < (int)local_63f8) && ((bVar7 < 10 || ((byte)(bVar7 - 0xd) < 0x13)))) {
            local_63f8 = 0;
          }
          if ((((char)local_6408 != '\0') && ((uVar24 & 0xe0) == 0)) &&
             (local_6408 = local_6408 & 0xff, bVar7 != 0xc)) {
            local_6408 = 0;
          }
          break;
        }
        uVar20 = 0;
        puVar18[3] = puVar18[2];
      }
      iVar12 = local_6430;
      if (*local_6438 != 0) goto LAB_144e0ebe2;
      local_63dc = local_63dc + -1;
      if (local_63dc == 0) goto LAB_144e0ebdb;
      iVar11 = (int)uVar31;
      uVar14 = local_6440;
      switch(uVar24 & 0xff) {
      case 0:
      case 2:
      case 0x11:
        break;
      case 1:
      case 0x12:
        if (cVar6 == '\0') {
          if ((char)local_62d0 != '\0') break;
          uVar16 = 0;
        }
        else {
          uVar16 = *(undefined4 *)(*(longlong *)(local_6428 + 0x40) + 4);
        }
        puVar25 = &local_6358;
        goto LAB_144e0e615;
      case 3:
      case 0x17:
        puVar25 = &local_6398;
        if (cVar6 == '\0') {
          if ((char)local_62d0 != '\0') break;
          uVar16 = 0;
        }
        else {
          uVar16 = **(undefined4 **)(local_6428 + 0x40);
        }
LAB_144e0e615:
        local_6470 = (undefined8 *)CONCAT44(local_6470._4_4_,uVar16);
        local_6478 = &local_643c;
        FUN_144e12ab0(local_6400,puVar18,puVar25,local_63d8);
        iVar12 = local_6430;
        if (*(char *)(lVar27 + 0x340) != '\0') goto LAB_144e0ebe2;
LAB_144e0e64a:
        uVar29 = (ulonglong)local_6440;
        uVar28 = (ulonglong)local_6444;
        uVar31 = 0x2000;
        break;
      case 4:
        piVar19 = (int *)puVar18[2];
        uVar13 = (uint)(puVar18[3] - (longlong)piVar19 >> 3);
        if ((1 < uVar13) && (local_643c == '\0')) {
          if (uVar13 == 0) {
            piVar19 = (int *)puVar18[1];
            if ((piVar19 != (int *)0x0) && (*piVar19 == 0)) {
              *piVar19 = 0x82;
            }
            iVar11 = 0;
          }
          else if (piVar19[1] == 1) {
            iVar10 = *piVar19;
            if (iVar10 < 0) {
              iVar11 = -(iVar11 - iVar10 >> 0xe);
            }
            else {
              iVar11 = iVar10 + 0x2000 >> 0xe;
            }
          }
          else {
            iVar11 = *piVar19;
            if (piVar19[1] == 2) {
              iVar11 = iVar11 << 0x10;
            }
          }
          *local_63d8 = iVar11 + local_63e0;
        }
        local_643c = '\x01';
        if (*(char *)(local_6428 + 0x340) == '\0') {
          iVar12 = FUN_144e12810(puVar18);
          uVar14 = local_6440 + iVar12;
          param_7 = uVar14;
          local_6440 = uVar14;
          goto LAB_144e0e731;
        }
        goto LAB_144e0ebe2;
      case 5:
        uVar22 = 0;
        local_63e8 = (longlong)(puVar18[3] - puVar18[2]) >> 3;
        if ((int)local_63e8 != 0) {
          do {
            lVar27 = puVar18[2];
            uVar13 = (uint)uVar22;
            if (uVar13 < (uint)(puVar18[3] - lVar27 >> 3)) {
              iVar12 = *(int *)(lVar27 + 4 + uVar22 * 8);
              piVar19 = (int *)(lVar27 + uVar22 * 8);
              if (iVar12 == 1) {
                iVar12 = *piVar19;
                if (iVar12 < 0) {
                  iVar11 = -((int)uVar31 - iVar12 >> 0xe);
                }
                else {
                  iVar11 = iVar12 + 0x2000 >> 0xe;
                }
              }
              else {
                iVar11 = *piVar19;
                if (iVar12 == 2) {
                  iVar11 = iVar11 << 0x10;
                }
              }
            }
            else {
              piVar19 = (int *)puVar18[1];
              if ((piVar19 != (int *)0x0) && (*piVar19 == 0)) {
                *piVar19 = 0x82;
              }
              iVar11 = 0;
            }
            param_6 = (int)uVar28 + iVar11;
            uVar22 = (ulonglong)param_6;
            local_6444 = param_6;
            iVar12 = FUN_144e12870(puVar18,uVar13 + 1);
            uVar14 = uVar14 + iVar12;
            param_7 = uVar14;
            FUN_144e0db20(local_4a48,uVar22 & 0xffffffff,uVar14);
            uVar28 = (ulonglong)local_6444;
            uVar22 = (ulonglong)(uVar13 + 2);
            uVar31 = 0x2000;
          } while (uVar13 + 2 < (uint)local_63e8);
LAB_144e0e931:
          uVar31 = 0x2000;
          uVar28 = (ulonglong)local_6444;
          local_6440 = uVar14;
        }
        goto LAB_144e0e93a;
      case 6:
      case 7:
        local_63e8 = (longlong)(puVar18[3] - puVar18[2]) >> 3;
        uVar13 = 0;
        if ((int)local_63e8 != 0) {
          local_6410 = 0;
          local_63f4 = bVar7 == 6;
          do {
            lVar27 = puVar18[2];
            if (uVar13 < (uint)(puVar18[3] - lVar27 >> 3)) {
              iVar12 = *(int *)(lVar27 + 4 + local_6410);
              if (iVar12 == 1) {
                iVar12 = *(int *)(lVar27 + local_6410);
                if (iVar12 < 0) {
                  iVar11 = -((int)uVar31 - iVar12 >> 0xe);
                }
                else {
                  iVar11 = iVar12 + 0x2000 >> 0xe;
                }
              }
              else {
                iVar11 = *(int *)(lVar27 + local_6410);
                if (iVar12 == 2) {
                  iVar11 = iVar11 << 0x10;
                }
              }
            }
            else {
              piVar19 = (int *)puVar18[1];
              if ((piVar19 != (int *)0x0) && (*piVar19 == 0)) {
                *piVar19 = 0x82;
              }
              iVar11 = 0;
            }
            if (local_63f4 == 0) {
              uVar14 = uVar14 + iVar11;
              param_7 = uVar14;
            }
            else {
              param_6 = (int)uVar28 + iVar11;
              uVar28 = (ulonglong)param_6;
              local_6444 = param_6;
            }
            local_63f4 = local_63f4 ^ 1;
            FUN_144e0db20(local_4a48,uVar28 & 0xffffffff,uVar14);
            uVar13 = uVar13 + 1;
            uVar28 = (ulonglong)local_6444;
            local_6410 = local_6410 + 8;
            uVar31 = 0x2000;
          } while (uVar13 < (uint)local_63e8);
          goto LAB_144e0e931;
        }
LAB_144e0e93a:
        uVar20 = 0;
        uVar29 = (ulonglong)local_6440;
        uVar22 = (ulonglong)local_6448;
        puVar18[3] = puVar18[2];
        puVar23 = local_6420;
        goto LAB_144e0e3f0;
      case 8:
      case 0x18:
        uVar22 = 0;
        local_63e8 = (longlong)(puVar18[3] - puVar18[2]) >> 3;
        local_6410 = local_6410 & 0xffffffff00000000;
        uVar14 = (uint)uVar29;
        if (5 < (uint)local_63e8) {
          do {
            iVar12 = (int)uVar29;
            lVar27 = puVar18[2];
            uVar13 = (uint)uVar22;
            if (uVar13 < (uint)(puVar18[3] - lVar27 >> 3)) {
              iVar11 = *(int *)(lVar27 + 4 + uVar22 * 8);
              piVar19 = (int *)(lVar27 + uVar22 * 8);
              if (iVar11 == 1) {
                iVar11 = *piVar19;
                if (iVar11 < 0) {
                  iVar10 = -(0x2000 - iVar11 >> 0xe);
                }
                else {
                  iVar10 = iVar11 + 0x2000 >> 0xe;
                }
              }
              else {
                iVar10 = *piVar19;
                if (iVar11 == 2) {
                  iVar10 = iVar10 << 0x10;
                }
              }
            }
            else {
              piVar19 = (int *)puVar18[1];
              if ((piVar19 != (int *)0x0) && (*piVar19 == 0)) {
                *piVar19 = 0x82;
              }
              iVar10 = 0;
            }
            iVar10 = iVar10 + (int)uVar28;
            iVar11 = FUN_144e12870(puVar18,uVar13 + 1);
            iVar8 = FUN_144e12870(puVar18,uVar13 + 2);
            uVar22 = (ulonglong)(uint)(iVar10 + iVar8);
            iVar8 = FUN_144e12870(puVar18,uVar13 + 3);
            iVar8 = iVar12 + iVar11 + iVar8;
            iVar9 = FUN_144e12870(puVar18,uVar13 + 4);
            local_6444 = iVar9 + (int)uVar22;
            iVar9 = FUN_144e12870(puVar18,uVar13 + 5);
            local_6440 = iVar9 + iVar8;
            local_6468 = (int **)CONCAT44(local_6468._4_4_,local_6440);
            local_6470 = (undefined8 *)CONCAT44(local_6470._4_4_,local_6444);
            local_6478 = (char *)CONCAT44(local_6478._4_4_,iVar8);
            FUN_144e0dcc0(local_4a48,iVar10,iVar12 + iVar11,uVar22 & 0xffffffff);
            param_6 = local_6444;
            uVar28 = (ulonglong)local_6444;
            uVar22 = (ulonglong)((uint)local_6410 + 6);
            param_7 = local_6440;
            uVar29 = (ulonglong)local_6440;
            uVar13 = (uint)local_6410 + 0xc;
            local_6410 = CONCAT44(local_6410._4_4_,(uint)local_6410 + 6);
          } while (uVar13 <= (uint)local_63e8);
          bVar7 = (byte)local_6418;
          puVar23 = local_6420;
          uVar13 = local_6444;
          uVar14 = local_6440;
        }
        iVar12 = (int)uVar22;
        if (bVar7 == 0x18) {
          iVar11 = FUN_144e12870(puVar18,uVar22);
          param_6 = uVar13 + iVar11;
          uVar22 = (ulonglong)param_6;
          local_6444 = param_6;
          iVar12 = FUN_144e12870(puVar18,iVar12 + 1);
          param_7 = uVar14 + iVar12;
          local_6440 = param_7;
          FUN_144e0db20(local_4a48,uVar22 & 0xffffffff,param_7);
        }
        uVar31 = 0x2000;
        uVar29 = (ulonglong)local_6440;
        uVar20 = 0;
        uVar28 = (ulonglong)local_6444;
        uVar22 = (ulonglong)local_6448;
        puVar18[3] = puVar18[2];
        goto LAB_144e0e3f0;
      case 9:
        if (cVar6 != '\0') {
          FUN_144e0ded0(local_4a48);
          local_643c = '\x01';
          goto LAB_144e0e64a;
        }
        break;
      case 10:
      case 0x1d:
        if (0x10 < (int)local_6448) goto LAB_144e0ebdb;
        uVar22 = (longlong)(int)local_6448 + 1;
        if (local_63b8 <= uVar22) {
          if ((local_6310 != (int *)0x0) && (*local_6310 == 0)) {
            *local_6310 = 0x82;
          }
          uVar22 = 0;
        }
        puVar23 = (undefined8 *)(uVar22 * local_6308 + (longlong)local_62e0);
        local_6420 = puVar23;
        iVar12 = FUN_144e127c0(puVar18);
        if ((*(char *)((longlong)local_6400 + 0xc) != '\0') &&
           (*(longlong *)(local_6428 + 0x3a8) != 0)) {
          piVar19 = (int *)FUN_144b592a0();
          uVar31 = 0x2000;
          if (piVar19 == (int *)0x0) {
            iVar12 = -1;
          }
          else {
            iVar12 = *piVar19;
          }
        }
        if (bVar7 == 0x1d) {
          *puVar23 = 0;
          puVar23[1] = 0;
          puVar23[2] = 0;
          puVar23[3] = 0;
          uVar13 = *(int *)(local_6428 + 0x354) + iVar12;
          if (*(uint *)(local_6428 + 0x34c) <= uVar13) goto LAB_144e0ebdb;
          uVar2 = *(undefined8 *)(*(longlong *)(local_6428 + 0x360) + (ulonglong)uVar13 * 8);
          puVar23[3] = uVar2;
          puVar23[1] = uVar2;
          puVar23[2] = *(undefined8 *)
                        (*(longlong *)(local_6428 + 0x360) + (ulonglong)(uVar13 + 1) * 8);
        }
        else {
          iVar12 = FUN_144e0c2d0(local_6428,iVar12,puVar23);
          if (iVar12 != 0) goto LAB_144e0ebdb;
        }
        uVar29 = (ulonglong)local_6440;
        local_6448 = local_6448 + 1;
        uVar22 = (ulonglong)local_6448;
        uVar28 = (ulonglong)local_6444;
        uVar20 = 0;
        goto LAB_144e0e3f0;
      case 0xb:
        if ((int)local_6448 < 1) goto LAB_144e0ebdb;
        local_6448 = local_6448 - 1;
        uVar22 = (ulonglong)local_6448;
        uVar24 = uVar22;
        if (local_63b8 <= uVar22) {
          if ((local_6310 != (int *)0x0) && (*local_6310 == 0)) {
            *local_6310 = 0x82;
          }
          uVar24 = 0;
        }
        uVar20 = 0;
        puVar23 = (undefined8 *)(local_6308 * uVar24 + (longlong)local_62e0);
        local_6420 = puVar23;
        goto LAB_144e0e3f0;
      case 0xc:
        bVar7 = FUN_144e0c1c0(puVar23);
        switch(bVar7) {
        case 8:
        case 0xd:
        case 0x13:
        case 0x19:
        case 0x1f:
        case 0x20:
          goto switchD_144e0e4e9_caseD_0;
        default:
          if ((*(char *)((longlong)local_6400 + 0xd) != '\0') || (0x25 < bVar7))
          goto switchD_144e0e4e9_caseD_0;
          cVar6 = *(char *)((longlong)local_6400 + 0xc);
          if ((cVar6 == '\0') || (((int)local_63f8 < 1 || (bVar7 == 0x11)))) {
            switch(bVar7) {
            default:
              goto switchD_144e0e4e9_caseD_0;
            case 1:
            case 2:
              if (cVar6 == '\0') goto switchD_144e0e4e9_caseD_0;
              iVar12 = FUN_144e12870(puVar18,0);
              uVar22 = 2;
              iVar11 = FUN_144e12870(puVar18,2);
              iVar10 = FUN_144e12870(puVar18,(int)uVar22 + 2);
              iVar8 = FUN_144e12870(puVar18,(int)uVar22 + -1);
              FUN_144e128e0(puVar18,uVar22 & 0xffffffff,(iVar11 - iVar12) - iVar8);
              iVar12 = FUN_144e12870(puVar18,3);
              FUN_144e128e0(puVar18,4,(iVar10 - iVar11) - iVar12);
              if (bVar7 == 1) {
                uVar16 = **(undefined4 **)(local_6428 + 0x40);
              }
              else {
                uVar16 = (*(undefined4 **)(local_6428 + 0x40))[1];
              }
              local_6470 = (undefined8 *)CONCAT44(local_6470._4_4_,uVar16);
              puVar23 = &local_6398;
              if (bVar7 != 1) {
                puVar23 = &local_6358;
              }
              local_6478 = &local_643c;
              FUN_144e12ab0(local_6400,puVar18,puVar23,local_63d8);
              puVar23 = local_6420;
              iVar12 = local_6430;
              if (*(char *)(local_6428 + 0x340) == '\0') goto LAB_144e0e64a;
              goto LAB_144e0ebe2;
            case 3:
              FUN_144e12810(puVar18);
              FUN_144e12810(puVar18);
              goto LAB_144e10a16;
            case 4:
              FUN_144e12810(puVar18);
              FUN_144e12810(puVar18);
              goto LAB_144e10a16;
            case 5:
              FUN_144e12810(puVar18);
              goto LAB_144e10a16;
            case 6:
              if (cVar6 == '\0') goto switchD_144e0e4e9_caseD_0;
              lVar27 = *(longlong *)(local_6428 + 8);
              lVar30 = local_6428;
              uVar14 = FUN_144e127c0(puVar18);
              local_6408 = uVar14;
              uVar13 = FUN_144e127c0();
              local_63f0 = uVar13;
              local_63ec = FUN_144e12810();
              iVar11 = FUN_144e12810(puVar18);
              uVar16 = FUN_144e12810(puVar18);
              local_6410 = CONCAT44(local_6410._4_4_,uVar16);
              if (((param_5 == '\0') && (*(char *)(lVar30 + 0x5b) == '\0')) &&
                 ((*(longlong *)(lVar30 + 0x368) != 0 ||
                  (*(longlong *)(*(longlong *)(lVar27 + 0xd0) + 0x50) != 0)))) {
                iVar11 = iVar11 + **(int **)(lVar30 + 0x40);
                local_63dc = iVar11;
                if (*(longlong *)(*(longlong *)(lVar27 + 0xd0) + 0x50) == 0) {
                  uVar13 = FUN_144e0c120(lVar30,uVar13);
                  local_63f0 = uVar13;
                  uVar14 = FUN_144e0c120(local_6428,local_6408);
                  lVar30 = local_6428;
                  local_6408 = uVar14;
                }
                if ((-1 < (int)uVar13) && (-1 < (int)uVar14)) {
                  if (*(char *)(lVar30 + 0x5a) != '\0') {
                    local_63c0 = *(undefined8 **)(lVar30 + 0x10);
                    lVar27 = *(longlong *)local_63c0[0x1e];
                    local_63e8 = lVar27;
                    iVar12 = FUN_144b56990(lVar27,2);
                    if (iVar12 == 0) {
                      puVar3 = *(uint **)(lVar27 + 0xa0);
                      *puVar3 = local_63f0;
                      *(undefined2 *)(puVar3 + 1) = 0x202;
                      puVar3[2] = 0;
                      puVar3[3] = 0;
                      puVar3[8] = local_6408;
                      *(undefined2 *)(puVar3 + 9) = 2;
                      iVar12 = FUN_144b55630(iVar11 - (uint)local_6410);
                      puVar3[10] = iVar12 >> 0x10;
                      iVar12 = FUN_144b55630(local_63ec);
                      puVar3[0xb] = iVar12 >> 0x10;
                      *(undefined4 *)(local_63c0 + 0x18) = 2;
                      local_63c0[0x19] = *(undefined8 *)(local_63e8 + 0x58);
                      *(undefined4 *)(local_63c0 + 0xc) = 0x636f6d70;
                      *(undefined4 *)(local_63e8 + 0x98) = 2;
                      iVar12 = local_6430;
                    }
                    goto LAB_144e0ebe2;
                  }
                  FUN_144b56ab0(*(undefined8 *)(lVar30 + 0x18));
                  lVar30 = local_6428;
                  iVar12 = 0;
                  lVar27 = *(longlong *)(local_6428 + 8);
                  puVar23 = *(undefined8 **)(*(longlong *)(lVar27 + 0xd0) + 0x50);
                  if (puVar23 == (undefined8 *)0x0) {
                    local_b8 = *(longlong *)(*(longlong *)(lVar27 + 0x250) + (ulonglong)uVar13 * 8);
                    uVar13 = *(uint *)(*(longlong *)(lVar27 + 600) + (ulonglong)uVar13 * 4);
                  }
                  else {
                    iVar12 = (**(code **)*puVar23)(puVar23[1],uVar13,&local_b8);
                    uVar13 = local_b0;
                    if (iVar12 != 0) goto LAB_144e0ebe2;
                  }
                  local_c8 = (ulonglong)uVar13 + local_b8;
                  local_d8 = 0;
                  local_d0 = local_b8;
                  local_c0 = local_b8;
                  if (iVar12 != 0) goto LAB_144e0ebe2;
                  local_6460 = &local_6418;
                  local_6468 = (int **)((ulonglong)local_6468 & 0xffffffff00000000);
                  local_6470 = (undefined8 *)((ulonglong)local_6470 & 0xffffffff00000000);
                  local_6478 = (char *)CONCAT71(local_6478._1_7_,1);
                  FUN_144e0e130(local_6400,&local_d8,local_63c8,local_63d0);
                  local_b0 = (int)local_c8 - (int)local_d0;
                  local_b8 = local_d0;
                  plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(lVar30 + 8) + 0xd0) + 0x50);
                  if (plVar4 != (longlong *)0x0) {
                    (**(code **)(*plVar4 + 8))(plVar4[1]);
                  }
                  iVar12 = 0;
                  uVar31 = **(undefined8 **)(lVar30 + 0x40);
                  uVar2 = **(undefined8 **)(lVar30 + 0x48);
                  *(undefined4 *)*(undefined8 **)(lVar30 + 0x40) = 0;
                  *(undefined4 *)(*(longlong *)(lVar30 + 0x40) + 4) = 0;
                  lVar27 = *(longlong *)(lVar30 + 8);
                  puVar23 = *(undefined8 **)(*(longlong *)(lVar27 + 0xd0) + 0x50);
                  if (puVar23 == (undefined8 *)0x0) {
                    local_b8 = *(longlong *)
                                (*(longlong *)(lVar27 + 0x250) + (ulonglong)local_6408 * 8);
                    uVar13 = *(uint *)(*(longlong *)(lVar27 + 600) + (ulonglong)local_6408 * 4);
                  }
                  else {
                    iVar12 = (**(code **)*puVar23)(puVar23[1],local_6408,&local_b8);
                    uVar13 = local_b0;
                    if (iVar12 != 0) goto LAB_144e0ebe2;
                  }
                  local_c8 = (ulonglong)uVar13 + local_b8;
                  local_d8 = 0;
                  local_d0 = local_b8;
                  local_c0 = local_b8;
                  if (iVar12 == 0) {
                    local_6460 = &local_6418;
                    local_6468 = (int **)CONCAT44(local_6468._4_4_,local_63ec);
                    local_6470 = (undefined8 *)
                                 CONCAT44(local_6470._4_4_,local_63dc - (uint)local_6410);
                    local_6478 = (char *)CONCAT71(local_6478._1_7_,1);
                    FUN_144e0e130(local_6400,&local_d8,local_63c8,local_63d0);
                    local_b8 = local_d0;
                    local_b0 = (int)local_c8 - (int)local_d0;
                    plVar4 = *(longlong **)
                              (*(longlong *)(*(longlong *)(local_6428 + 8) + 0xd0) + 0x50);
                    if (plVar4 != (longlong *)0x0) {
                      (**(code **)(*plVar4 + 8))(plVar4[1],&local_b8);
                    }
                    **(undefined8 **)(local_6428 + 0x40) = uVar31;
                    **(undefined8 **)(local_6428 + 0x48) = uVar2;
                    iVar12 = local_6430;
                  }
                  goto LAB_144e0ebe2;
                }
              }
              goto LAB_144e0ebdb;
            case 7:
              if (cVar6 == '\0') goto switchD_144e0e4e9_caseD_0;
              uVar16 = FUN_144e12810(puVar18);
              lVar27 = local_6428;
              *(undefined4 *)(*(longlong *)(local_6428 + 0x48) + 4) = uVar16;
              uVar16 = FUN_144e12810(puVar18);
              **(undefined4 **)(lVar27 + 0x48) = uVar16;
              iVar11 = FUN_144e12810(puVar18);
              iVar10 = FUN_144e12810(puVar18);
              local_643c = '\x01';
              **(int **)(lVar27 + 0x40) = **(int **)(lVar27 + 0x40) + iVar10;
              piVar19 = (int *)(*(longlong *)(lVar27 + 0x40) + 4);
              *piVar19 = *piVar19 + iVar11;
              iVar12 = local_6430;
              if (*(char *)(lVar27 + 0x5b) != '\0') goto LAB_144e0ebe2;
              uVar22 = (ulonglong)local_6448;
              if (local_643b == '\0') goto LAB_144e103ca;
              param_6 = (int)uVar28 + iVar10;
              uVar28 = (ulonglong)param_6;
              param_7 = (int)uVar29 + iVar11;
              uVar29 = (ulonglong)param_7;
              uVar20 = 0;
              puVar18[3] = puVar18[2];
              local_6444 = param_6;
              local_6440 = param_7;
              goto LAB_144e0e3f0;
            case 9:
              iVar12 = FUN_144e12810(puVar18);
              if (iVar12 < -0x7fffffff) {
                FUN_144e12780(puVar18);
                uVar28 = (ulonglong)local_6444;
                uVar20 = 0;
                uVar22 = (ulonglong)local_6448;
              }
              else {
                FUN_144e12780(puVar18);
                uVar28 = (ulonglong)local_6444;
                uVar20 = 0;
                uVar22 = (ulonglong)local_6448;
              }
              goto LAB_144e0e3f0;
            case 10:
              FUN_144e12810(puVar18);
              FUN_144e12810(puVar18);
              FUN_144e12780(puVar18);
              uVar28 = (ulonglong)local_6444;
              uVar20 = 0;
              uVar22 = (ulonglong)local_6448;
              goto LAB_144e0e3f0;
            case 0xb:
              FUN_144e12810(puVar18);
              FUN_144e12810(puVar18);
              FUN_144e12780(puVar18);
              uVar28 = (ulonglong)local_6444;
              uVar20 = 0;
              uVar22 = (ulonglong)local_6448;
              goto LAB_144e0e3f0;
            case 0xc:
              if ((cVar6 == '\0') || ((char)local_6408 == '\0')) {
                uVar13 = FUN_144e12810(puVar18);
                uVar22 = (ulonglong)uVar13;
                uVar16 = FUN_144e12810(puVar18);
              }
              else {
                uVar13 = FUN_144e127c0(puVar18);
                uVar22 = (ulonglong)uVar13;
                uVar16 = FUN_144e127c0();
                local_6408 = local_6408 & 0xffffff00;
              }
              FUN_144b555e0(uVar16,uVar22 & 0xffffffff);
              FUN_144e12780(puVar18);
              uVar28 = (ulonglong)local_6444;
              uVar20 = 0;
              uVar31 = 0x2000;
              uVar29 = (ulonglong)local_6440;
              uVar22 = (ulonglong)local_6448;
              goto LAB_144e0e3f0;
            case 0xe:
              iVar12 = FUN_144e12810(puVar18);
              if (iVar12 < -0x7fffffff) {
                FUN_144e12780(puVar18);
                uVar28 = (ulonglong)local_6444;
                uVar20 = 0;
                uVar22 = (ulonglong)local_6448;
              }
              else {
                FUN_144e12780(puVar18);
                uVar28 = (ulonglong)local_6444;
                uVar20 = 0;
                uVar22 = (ulonglong)local_6448;
              }
              goto LAB_144e0e3f0;
            case 0xf:
              FUN_144e12810(puVar18);
              FUN_144e12810(puVar18);
LAB_144e10a16:
              FUN_144e12740(puVar18);
              uVar28 = (ulonglong)local_6444;
              break;
            case 0x10:
              if (cVar6 != '\0') {
                iVar12 = FUN_144e127c0(puVar18);
                lVar27 = (longlong)iVar12;
                local_6418 = FUN_144e127c0();
                local_63b0 = (ulonglong)
                             ((int)((longlong)(puVar18[3] - puVar18[2]) >> 3) - local_6418);
                local_6414 = 0;
                local_63f8 = 0;
                if ((uint)lVar27 < 0x1d) {
                    /* WARNING: Could not recover jumptable at 0x000144e0f4a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                            *(uint *)(&DAT_144e11064 + lVar27 * 4)))
                            (IMAGE_DOS_HEADER_140000000.e_magic +
                             *(uint *)(&DAT_144e11064 + lVar27 * 4));
                  return;
                }
                if (((int)local_6418 < 0) || ((int)(uint)lVar27 < 0)) goto LAB_144e0ebdb;
                local_63f8 = local_6418;
                if (3 < (int)local_6418) {
                  local_63f8 = 3;
                }
                lVar27 = (longlong)(int)local_63f8;
                if (lVar27 < 1) goto LAB_144e0e5d0;
                puVar26 = (undefined4 *)((longlong)&local_c0 + lVar27 * 4 + 4);
                do {
                  uVar16 = FUN_144e12810(puVar18);
                  *puVar26 = uVar16;
                  puVar26 = puVar26 + -1;
                  lVar27 = lVar27 + -1;
                } while (lVar27 != 0);
                uVar28 = (ulonglong)local_6444;
                uVar31 = 0x2000;
                uVar20 = 0;
                uVar22 = (ulonglong)local_6448;
                puVar23 = local_6420;
                goto LAB_144e0e3f0;
              }
              break;
            case 0x11:
              if (cVar6 != '\0') {
                if (local_6414 < 1) {
                  if (local_63f8 == 0) goto LAB_144e0ebdb;
                  local_63f8 = local_63f8 - 1;
                  FUN_144e12780(puVar18);
                  uVar28 = (ulonglong)local_6444;
                  uVar20 = 0;
                  uVar22 = (ulonglong)local_6448;
                }
                else {
                  uVar22 = (ulonglong)local_6448;
                  local_6414 = local_6414 + -1;
                  uVar20 = 0;
                }
                goto LAB_144e0e3f0;
              }
              break;
            case 0x12:
              FUN_144e12810(puVar18);
              uVar22 = (ulonglong)local_6448;
              uVar20 = 0;
              goto LAB_144e0e3f0;
            case 0x14:
              iVar12 = FUN_144e127c0(puVar18);
              lVar27 = (longlong)iVar12;
              uVar16 = FUN_144e12810();
              if ((uint)lVar27 < 0x20) {
                uVar22 = (ulonglong)local_6448;
                uVar20 = 0;
                local_a8[lVar27] = uVar16;
                goto LAB_144e0e3f0;
              }
              break;
            case 0x15:
              uVar13 = FUN_144e127c0(puVar18);
              if (uVar13 < 0x20) {
                FUN_144e12780();
                uVar28 = (ulonglong)local_6444;
                uVar20 = 0;
                uVar22 = (ulonglong)local_6448;
                goto LAB_144e0e3f0;
              }
              break;
            case 0x16:
              FUN_144e12810(puVar18);
              FUN_144e12810(puVar18);
              FUN_144e12810(puVar18);
              FUN_144e12810(puVar18);
              goto LAB_144e0fd7a;
            case 0x17:
              uVar13 = *(uint *)(*(longlong *)(local_6428 + 0x328) + 0x2c8);
              uVar13 = uVar13 ^ uVar13 << 0xd;
              uVar13 = uVar13 ^ uVar13 >> 0x11;
              *(uint *)(*(longlong *)(local_6428 + 0x328) + 0x2c8) = uVar13 << 5 ^ uVar13;
              FUN_144e12780(puVar18);
              uVar28 = (ulonglong)local_6444;
              uVar20 = 0;
              uVar22 = (ulonglong)local_6448;
              goto LAB_144e0e3f0;
            case 0x18:
              uVar13 = FUN_144e12810(puVar18);
              uVar22 = (ulonglong)uVar13;
              uVar16 = FUN_144e12810(puVar18);
              FUN_144b42fe0(uVar16,uVar22 & 0xffffffff);
              FUN_144e12780(puVar18);
              uVar28 = (ulonglong)local_6444;
              uVar20 = 0;
              uVar31 = 0x2000;
              uVar29 = (ulonglong)local_6440;
              uVar22 = (ulonglong)local_6448;
              goto LAB_144e0e3f0;
            case 0x1a:
              iVar12 = FUN_144e12810(puVar18);
              local_6410 = CONCAT44(local_6410._4_4_,iVar12);
              if (0 < iVar12) {
                iVar11 = iVar12;
                if (9 < iVar12) {
                  iVar11 = iVar12 >> 1;
                }
                iVar12 = FUN_144b555e0(iVar12,iVar11);
                uVar22 = local_6410;
                iVar12 = iVar11 + 1 + iVar12 >> 1;
                if (iVar12 != iVar11) {
                  do {
                    iVar11 = FUN_144b555e0(uVar22 & 0xffffffff,iVar12);
                    iVar11 = iVar12 + 1 + iVar11 >> 1;
                    bVar32 = iVar11 != iVar12;
                    puVar18 = local_63c0;
                    iVar12 = iVar11;
                  } while (bVar32);
                }
                uVar31 = 0x2000;
                puVar23 = local_6420;
              }
LAB_144e0fd7a:
              FUN_144e12780(puVar18);
              uVar28 = (ulonglong)local_6444;
              uVar20 = 0;
              uVar29 = (ulonglong)local_6440;
              uVar22 = (ulonglong)local_6448;
              goto LAB_144e0e3f0;
            case 0x1b:
              FUN_144e12810(puVar18);
              FUN_144e12780(puVar18);
              FUN_144e12780();
              uVar28 = (ulonglong)local_6444;
              uVar20 = 0;
              uVar22 = (ulonglong)local_6448;
              goto LAB_144e0e3f0;
            case 0x1c:
              uVar13 = FUN_144e12810(puVar18);
              uVar22 = (ulonglong)uVar13;
              FUN_144e12810(puVar18);
              FUN_144e12780(puVar18,uVar22 & 0xffffffff);
              FUN_144e12780();
              uVar28 = (ulonglong)local_6444;
              uVar20 = 0;
              uVar29 = (ulonglong)local_6440;
              uVar22 = (ulonglong)local_6448;
              goto LAB_144e0e3f0;
            case 0x1d:
              uVar13 = FUN_144e127c0(puVar18);
              lVar27 = puVar18[2];
              uVar14 = (uint)(puVar18[3] - lVar27 >> 3);
              if (uVar14 != 0) {
                if ((int)uVar13 < 0) {
                  uVar22 = (ulonglong)(uVar14 - 1);
                }
                else if (uVar13 < uVar14) {
                  uVar22 = (ulonglong)((uVar14 - uVar13) - 1);
                }
                else {
                  uVar22 = 0;
                }
                if ((uint)uVar22 < uVar14) {
                  iVar12 = *(int *)(lVar27 + 4 + uVar22 * 8);
                  if (iVar12 == 1) {
                    if (*(int *)(lVar27 + uVar22 * 8) < 0) {
                      FUN_144e12780(puVar18);
                      uVar28 = (ulonglong)local_6444;
                      uVar20 = 0;
                      uVar22 = (ulonglong)local_6448;
                      goto LAB_144e0e3f0;
                    }
                  }
                  else if (iVar12 == 2) {
                    FUN_144e12780(puVar18);
                    uVar28 = (ulonglong)local_6444;
                    uVar20 = 0;
                    uVar22 = (ulonglong)local_6448;
                    goto LAB_144e0e3f0;
                  }
                  FUN_144e12780(puVar18);
                  uVar28 = (ulonglong)local_6444;
                  uVar20 = 0;
                  uVar22 = (ulonglong)local_6448;
                  goto LAB_144e0e3f0;
                }
                piVar19 = (int *)puVar18[1];
                if ((piVar19 != (int *)0x0) && (*piVar19 == 0)) {
                  *piVar19 = 0x82;
                }
                uVar20 = 0;
                FUN_144e12780(puVar18);
                uVar28 = (ulonglong)local_6444;
                uVar22 = (ulonglong)local_6448;
                goto LAB_144e0e3f0;
              }
              break;
            case 0x1e:
              FUN_144e127c0(puVar18);
              FUN_144e127c0();
              FUN_144e12930();
              uVar29 = (ulonglong)local_6440;
              uVar31 = 0x2000;
              uVar28 = (ulonglong)local_6444;
              uVar20 = 0;
              uVar22 = (ulonglong)local_6448;
              goto LAB_144e0e3f0;
            case 0x21:
              if ((cVar6 == '\0') || (local_643b == '\0')) goto switchD_144e0e4e9_caseD_0;
              param_7 = FUN_144e12810(puVar18);
              uVar29 = (ulonglong)param_7;
              local_6440 = param_7;
              param_6 = FUN_144e12810(puVar18);
              uVar22 = (ulonglong)local_6448;
              uVar28 = (ulonglong)param_6;
              uVar20 = 0;
              *(undefined4 *)(local_6428 + 0x2e0) = 0;
              puVar18[3] = puVar18[2];
              local_6444 = param_6;
              goto LAB_144e0e3f0;
            }
            uVar22 = (ulonglong)local_6448;
            uVar20 = 0;
            break;
          }
          uVar20 = 0;
          uVar22 = (ulonglong)local_6448;
          local_63f8 = 0;
          puVar18[3] = puVar18[2];
          break;
        case 0x22:
          local_6470 = (undefined8 *)((ulonglong)local_6470._1_7_ << 8);
          local_6478 = "\x01";
          FUN_144e12d00(puVar18,&param_6,&param_7,local_4a48);
          uVar29 = (ulonglong)param_7;
          uVar31 = 0x2000;
          uVar28 = (ulonglong)param_6;
          uVar20 = 0;
          uVar22 = (ulonglong)local_6448;
          local_6440 = param_7;
          local_6444 = param_6;
          break;
        case 0x23:
          local_6470 = (undefined8 *)((ulonglong)local_6470._1_7_ << 8);
          local_6478 = "\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01";
          FUN_144e12d00(puVar18,&param_6,&param_7,local_4a48);
          local_6440 = param_7;
          local_6444 = param_6;
          goto LAB_144e0e64a;
        case 0x24:
          local_6470 = (undefined8 *)((ulonglong)local_6470._1_7_ << 8);
          local_6478 = "\x01\x01\x01\x01\x01";
          FUN_144e12d00(puVar18,&param_6,&param_7,local_4a48);
          uVar29 = (ulonglong)param_7;
          uVar31 = 0x2000;
          uVar28 = (ulonglong)param_6;
          uVar20 = 0;
          uVar22 = (ulonglong)local_6448;
          local_6440 = param_7;
          local_6444 = param_6;
          break;
        case 0x25:
          local_6470 = (undefined8 *)CONCAT71(local_6470._1_7_,1);
          local_6478 = "\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01";
          FUN_144e12d00(puVar18,&param_6,&param_7,local_4a48);
          local_6440 = param_7;
          uVar29 = (ulonglong)param_7;
          uVar31 = 0x2000;
          uVar28 = (ulonglong)param_6;
          uVar20 = 0;
          uVar22 = (ulonglong)local_6448;
          local_6444 = param_6;
        }
        goto LAB_144e0e3f0;
      case 0xd:
        if (cVar6 != '\0') {
          uVar16 = FUN_144e12810(puVar18);
          **(undefined4 **)(local_6428 + 0x48) = uVar16;
          *(undefined4 *)(*(longlong *)(local_6428 + 0x48) + 4) = 0;
          lVar27 = local_6428;
          iVar11 = FUN_144e12810(puVar18);
          local_643c = '\x01';
          **(int **)(lVar27 + 0x40) = **(int **)(lVar27 + 0x40) + iVar11;
          iVar12 = local_6430;
          if (*(char *)(lVar27 + 0x5b) != '\0') goto LAB_144e0ebe2;
          uVar22 = (ulonglong)local_6448;
          if (local_643b == '\0') {
LAB_144e103ca:
            uVar20 = 0;
            puVar18[3] = puVar18[2];
          }
          else {
            param_6 = (int)uVar28 + iVar11;
            uVar28 = (ulonglong)param_6;
            uVar20 = 0;
            puVar18[3] = puVar18[2];
            local_6444 = param_6;
          }
          goto LAB_144e0e3f0;
        }
        break;
      case 0xe:
        if ((cVar6 != '\0') && (local_643b == '\0')) {
          FUN_144e0da10(local_4a48,uVar28 & 0xffffffff,uVar29 & 0xffffffff);
          local_62d8 = local_6438;
          uVar22 = (ulonglong)local_6448;
          local_643b = '\x01';
          local_6370 = 0;
          local_6330 = 0;
          local_62c8 = 0;
          local_62c0 = 0;
          local_62b8 = 0;
          local_62b0 = 0;
          local_62d0 = 0x100;
          while (0 < (int)local_6448) {
            local_6448 = (int)uVar22 - 1;
            uVar22 = (ulonglong)local_6448;
            uVar20 = uVar22;
            if (local_63b8 <= uVar22) {
              if ((local_6310 != (int *)0x0) && (*local_6310 == 0)) {
                *local_6310 = 0x82;
              }
              uVar20 = 0;
            }
            puVar23 = (undefined8 *)(local_6308 * uVar20 + (longlong)local_62e0);
            puVar18 = local_63c0;
            local_6420 = puVar23;
          }
          uVar20 = 0;
          uVar31 = 0x2000;
          uVar29 = (ulonglong)local_6440;
          uVar28 = (ulonglong)local_6444;
          puVar23[3] = puVar23[1];
          puVar18[3] = puVar18[2];
          goto LAB_144e0e3f0;
        }
        piVar19 = (int *)puVar18[2];
        iVar10 = (int)(puVar18[3] - (longlong)piVar19 >> 3);
        if (((iVar10 - 1U & 0xfffffffb) == 0) && (local_643c == '\0')) {
          if (iVar10 == 0) {
            piVar19 = (int *)puVar18[1];
            if ((piVar19 != (int *)0x0) && (*piVar19 == 0)) {
              *piVar19 = 0x82;
            }
            iVar11 = 0;
          }
          else if (piVar19[1] == 1) {
            iVar10 = *piVar19;
            if (iVar10 < 0) {
              iVar11 = -(iVar11 - iVar10 >> 0xe);
            }
            else {
              iVar11 = iVar10 + 0x2000 >> 0xe;
            }
          }
          else {
            iVar11 = *piVar19;
            if (piVar19[1] == 2) {
              iVar11 = iVar11 << 0x10;
            }
          }
          *local_63d8 = local_63e0 + iVar11;
        }
        if ((((*(char *)(local_6428 + 0x340) != '\0') ||
             (FUN_144e0ded0(local_4a48), iVar12 = local_6430,
             *(char *)((longlong)local_6400 + 0xd) != '\0')) ||
            (*(char *)((longlong)local_6400 + 0xc) != '\0')) ||
           ((uint)((longlong)(puVar18[3] - puVar18[2]) >> 3) < 2)) goto LAB_144e0ebe2;
        if (param_5 == '\0') {
          uVar13 = FUN_144e127c0(puVar18);
          uVar22 = (ulonglong)uVar13;
          uVar16 = FUN_144e127c0();
          uVar17 = FUN_144e12810();
          local_63f0 = FUN_144e12810(puVar18);
          iVar12 = FUN_144e0c1f0(local_6428,uVar22 & 0xffffffff,&local_d8);
          if (iVar12 == 0) {
            local_6460 = (uint *)&local_6410;
            local_6468 = (int **)CONCAT44(local_6468._4_4_,uVar17);
            local_6470 = (undefined8 *)CONCAT44(local_6470._4_4_,local_63f0);
            local_6478 = (char *)CONCAT71(local_6478._1_7_,1);
            FUN_144e0e130(local_6400,&local_d8,local_63c8,local_63d0);
            lVar27 = local_6428;
            (**(code **)(local_6428 + 0x388))
                      (*(undefined8 *)(local_6428 + 8),&local_d0,(int)local_c8 - (int)local_d0);
            iVar12 = FUN_144e0c1f0(lVar27,uVar16,&local_d8);
            if (iVar12 == 0) {
              local_6460 = (uint *)&local_6410;
              local_6468 = (int **)((ulonglong)local_6468 & 0xffffffff00000000);
              local_6470 = (undefined8 *)((ulonglong)local_6470 & 0xffffffff00000000);
              local_6478 = (char *)CONCAT71(local_6478._1_7_,1);
              FUN_144e0e130(local_6400,&local_d8,local_63c8,local_63d0);
              (**(code **)(lVar27 + 0x388))
                        (*(undefined8 *)(lVar27 + 8),&local_d0,(int)local_c8 - (int)local_d0);
              iVar12 = local_6430;
            }
          }
          goto LAB_144e0ebe2;
        }
LAB_144e0ebdb:
        iVar12 = 0x12;
        goto LAB_144e0ebe2;
      case 0xf:
        if (*(char *)((longlong)local_6400 + 0xd) == '\0') break;
        if (*(char *)((longlong)local_6400 + 0x61) != '\0') goto LAB_144e0ebdb;
        iVar12 = FUN_144e127c0(puVar18);
        uVar22 = (ulonglong)local_6448;
        uVar20 = 0;
        if (iVar12 < 0) goto LAB_144e0e656;
        *(int *)(puVar25 + 0x12) = iVar12;
        puVar18[3] = puVar18[2];
        goto LAB_144e0e3f0;
      case 0x10:
        if (*(char *)((longlong)local_6400 + 0xd) != '\0') {
          if (local_6400[0xd] == 0) goto LAB_144e0ebdb;
          cVar6 = (**(code **)(local_6400[0x51] + 0x18))
                            (local_6400 + 0xc,*(undefined4 *)(local_6400 + 0x12),
                             *(undefined4 *)((longlong)local_6400 + 0x94),local_6400[0x13]);
          if ((cVar6 != '\0') &&
             (local_6430 = (**(code **)(puVar25[0x51] + 0x20))
                                     (puVar25 + 0xc,*(undefined4 *)(puVar25 + 0x12),
                                      *(undefined4 *)((longlong)puVar25 + 0x94),puVar25[0x13]),
             iVar12 = local_6430, local_6430 != 0)) goto LAB_144e0ebe2;
          uVar13 = FUN_144e127c0(puVar18);
          if (local_63ec < uVar13) goto LAB_144e0ebdb;
          FUN_144e13070(puVar25 + 0xc,puVar18,uVar13);
          uVar29 = (ulonglong)local_6440;
          *(undefined1 *)((longlong)puVar25 + 0x61) = 1;
LAB_144e0e5d0:
          uVar31 = 0x2000;
          uVar28 = (ulonglong)local_6444;
          uVar20 = 0;
          uVar22 = (ulonglong)local_6448;
          puVar23 = local_6420;
          goto LAB_144e0e3f0;
        }
        break;
      case 0x13:
      case 0x14:
        if ((1 < (uint)((longlong)(puVar18[3] - puVar18[2]) >> 3)) && ((char)local_62d0 != '\0')) {
          uVar22 = (ulonglong)local_6448;
          goto LAB_144e103ca;
        }
        local_6478 = &local_643c;
        local_6470 = (undefined8 *)((ulonglong)local_6470._4_4_ << 0x20);
        FUN_144e12ab0(local_6400,puVar18,&local_6398,local_63d8);
        iVar12 = local_6430;
        if (*(char *)(local_6428 + 0x340) == '\0') {
          if (bVar7 == 0x13) {
            FUN_144e12a30(&local_62d8,puVar23,local_6370 + local_6330);
          }
          else {
            memset(&local_6278,0,0x1828);
            local_6278 = local_6400;
            local_625f = *(undefined1 *)(local_6400 + 0x20);
            local_625c = local_63f0;
            local_6270 = local_19e8;
            local_6268 = local_1c0;
            local_62a8 = local_6438;
            local_62a0 = 0;
            local_6298 = 0;
            local_6290 = 0;
            local_6288 = 0;
            local_6280 = 0;
            FUN_144e12a30(&local_62a8,puVar23,local_6370 + local_6330);
            local_6470 = (undefined8 *)((ulonglong)local_6470 & 0xffffffffffffff00);
            local_6478 = (char *)((ulonglong)local_6478 & 0xffffffff00000000);
            FUN_144e0d130(&local_6278,&local_6358,&local_6398,&local_62a8);
          }
          goto LAB_144e0e64a;
        }
        goto LAB_144e0ebe2;
      case 0x15:
        piVar19 = (int *)puVar18[2];
        uVar14 = (uint)(puVar18[3] - (longlong)piVar19 >> 3);
        if ((2 < uVar14) && (local_643c == '\0')) {
          if (uVar14 == 0) {
            piVar19 = (int *)puVar18[1];
            if ((piVar19 != (int *)0x0) && (*piVar19 == 0)) {
              *piVar19 = 0x82;
            }
            iVar11 = 0;
          }
          else if (piVar19[1] == 1) {
            iVar10 = *piVar19;
            if (iVar10 < 0) {
              iVar11 = -(iVar11 - iVar10 >> 0xe);
            }
            else {
              iVar11 = iVar10 + 0x2000 >> 0xe;
            }
          }
          else {
            iVar11 = *piVar19;
            if (piVar19[1] == 2) {
              iVar11 = iVar11 << 0x10;
            }
          }
          *local_63d8 = iVar11 + local_63e0;
        }
        local_643c = '\x01';
        if (*(char *)(local_6428 + 0x340) == '\0') {
          iVar12 = FUN_144e12810(puVar18);
          uVar14 = local_6440 + iVar12;
          param_7 = uVar14;
          local_6440 = uVar14;
          iVar12 = FUN_144e12810(puVar18);
          param_6 = uVar13 + iVar12;
          uVar28 = (ulonglong)param_6;
          local_6444 = param_6;
LAB_144e0e731:
          if (*(int *)(lVar27 + 0x2e0) != 0) {
            uVar29 = (ulonglong)local_6440;
            break;
          }
          FUN_144e0da10(local_4a48,uVar28 & 0xffffffff,uVar14);
          goto LAB_144e0e64a;
        }
        goto LAB_144e0ebe2;
      case 0x16:
        piVar19 = (int *)puVar18[2];
        uVar14 = (uint)(puVar18[3] - (longlong)piVar19 >> 3);
        if ((1 < uVar14) && (local_643c == '\0')) {
          if (uVar14 == 0) {
            piVar19 = (int *)puVar18[1];
            if ((piVar19 != (int *)0x0) && (*piVar19 == 0)) {
              *piVar19 = 0x82;
            }
            iVar11 = 0;
          }
          else if (piVar19[1] == 1) {
            iVar10 = *piVar19;
            if (iVar10 < 0) {
              iVar11 = -(iVar11 - iVar10 >> 0xe);
            }
            else {
              iVar11 = iVar10 + 0x2000 >> 0xe;
            }
          }
          else {
            iVar11 = *piVar19;
            if (piVar19[1] == 2) {
              iVar11 = iVar11 << 0x10;
            }
          }
          *local_63d8 = iVar11 + local_63e0;
        }
        local_643c = '\x01';
        if (*(char *)(local_6428 + 0x340) != '\0') goto LAB_144e0ebe2;
        iVar12 = FUN_144e12810(puVar18);
        param_6 = uVar13 + iVar12;
        uVar28 = (ulonglong)param_6;
        local_6444 = param_6;
        if (*(int *)(lVar27 + 0x2e0) == 0) {
          FUN_144e0da10(local_4a48,uVar28,uVar29 & 0xffffffff);
          goto LAB_144e0e64a;
        }
        break;
      case 0x19:
        uVar22 = 0;
        uVar14 = 0;
        local_6410 = (longlong)(puVar18[3] - puVar18[2]) >> 3;
        uVar13 = local_6440;
        if (6 < (uint)local_6410) {
          do {
            lVar27 = puVar18[2];
            uVar15 = (uint)uVar22;
            if (uVar15 < (uint)(puVar18[3] - lVar27 >> 3)) {
              iVar12 = *(int *)(lVar27 + 4 + uVar22 * 8);
              piVar19 = (int *)(lVar27 + uVar22 * 8);
              if (iVar12 == 1) {
                iVar12 = *piVar19;
                if (iVar12 < 0) {
                  iVar11 = -((int)uVar31 - iVar12 >> 0xe);
                }
                else {
                  iVar11 = iVar12 + 0x2000 >> 0xe;
                }
              }
              else {
                iVar11 = *piVar19;
                if (iVar12 == 2) {
                  iVar11 = iVar11 << 0x10;
                }
              }
            }
            else {
              piVar19 = (int *)puVar18[1];
              if ((piVar19 != (int *)0x0) && (*piVar19 == 0)) {
                *piVar19 = 0x82;
              }
              iVar11 = 0;
            }
            param_6 = (int)uVar28 + iVar11;
            uVar22 = (ulonglong)param_6;
            local_6444 = param_6;
            iVar12 = FUN_144e12870(puVar18,uVar15 + 1);
            uVar13 = uVar13 + iVar12;
            param_7 = uVar13;
            FUN_144e0db20(local_4a48,uVar22 & 0xffffffff,uVar13);
            uVar28 = (ulonglong)local_6444;
            uVar14 = uVar15 + 2;
            uVar22 = (ulonglong)uVar14;
            uVar31 = 0x2000;
          } while (uVar15 + 8 < (uint)local_6410);
        }
        local_6440 = uVar13;
        uVar13 = local_6440;
        if (uVar14 < (uint)local_6410) {
          uVar14 = uVar14 + 2;
          do {
            uVar22 = (ulonglong)uVar14;
            local_6418 = uVar14;
            iVar12 = FUN_144e12870(puVar18,uVar14 - 2);
            iVar12 = iVar12 + local_6444;
            iVar11 = FUN_144e12870(puVar18,(int)uVar22 + -1);
            iVar10 = (int)uVar22;
            uVar20 = (ulonglong)(uVar13 + iVar11);
            iVar11 = FUN_144e12870(puVar18,uVar22 & 0xffffffff);
            uVar22 = (ulonglong)(uint)(iVar12 + iVar11);
            iVar11 = FUN_144e12870(puVar18,iVar10 + 1);
            uVar13 = local_6418;
            iVar11 = (int)uVar20 + iVar11;
            iVar10 = FUN_144e12870(puVar18,local_6418 + 2);
            local_6444 = iVar10 + (int)uVar22;
            iVar10 = FUN_144e12870(puVar18,uVar13 + 3);
            uVar13 = iVar11 + iVar10;
            local_6468 = (int **)CONCAT44(local_6468._4_4_,uVar13);
            local_6470 = (undefined8 *)CONCAT44(local_6470._4_4_,local_6444);
            local_6478 = (char *)CONCAT44(local_6478._4_4_,iVar11);
            FUN_144e0dcc0(local_4a48,iVar12,uVar20 & 0xffffffff,uVar22 & 0xffffffff);
            param_6 = local_6444;
            uVar14 = local_6418 + 6;
            param_7 = uVar13;
          } while (local_6418 + 4 < (uint)local_6410);
        }
        local_6440 = uVar13;
        uVar28 = (ulonglong)local_6444;
        uVar31 = 0x2000;
        uVar29 = (ulonglong)local_6440;
        goto LAB_144e109db;
      case 0x1a:
        uVar15 = (uint)((longlong)(puVar18[3] - puVar18[2]) >> 3);
        uVar13 = uVar15 & 0xfffffffd;
        uVar21 = uVar15 - uVar13;
        local_6410 = CONCAT44(local_6410._4_4_,uVar15) & 0xfffffffffffffffd;
        if (uVar13 <= uVar21) goto LAB_144e10808;
        do {
          uVar22 = (ulonglong)uVar21;
          if ((uVar13 - uVar21 & 1) == 0) {
            uVar28 = uVar28 & 0xffffffff;
          }
          else {
            lVar27 = puVar18[2];
            if (uVar21 < (uint)(puVar18[3] - lVar27 >> 3)) {
              iVar12 = *(int *)(lVar27 + 4 + uVar22 * 8);
              piVar19 = (int *)(lVar27 + uVar22 * 8);
              iVar11 = (int)uVar28;
              if (iVar12 == 1) {
                iVar12 = *piVar19;
                if (-1 < iVar12) {
                  iVar10 = iVar12 + 0x2000 >> 0xe;
                  goto LAB_144e10637;
                }
                uVar22 = (ulonglong)(uVar21 + 1);
                uVar28 = (ulonglong)(uint)(iVar11 - ((int)uVar31 - iVar12 >> 0xe));
              }
              else {
                iVar10 = *piVar19;
                if (iVar12 == 2) {
                  uVar22 = (ulonglong)(uVar21 + 1);
                  uVar28 = (ulonglong)(uint)(iVar10 * 0x10000 + iVar11);
                }
                else {
LAB_144e10637:
                  uVar28 = (ulonglong)(uint)(iVar10 + iVar11);
                  uVar22 = (ulonglong)(uVar21 + 1);
                }
              }
            }
            else {
              piVar19 = (int *)puVar18[1];
              if ((piVar19 != (int *)0x0) && (*piVar19 == 0)) {
                *piVar19 = 0x82;
              }
              uVar22 = (ulonglong)(uVar21 + 1);
              uVar28 = uVar28 & 0xffffffff;
            }
          }
          iVar10 = (int)uVar22;
          iVar12 = FUN_144e12870(puVar18,uVar22);
          uVar22 = (ulonglong)(uVar14 + iVar12);
          iVar12 = FUN_144e12870(puVar18,iVar10 + 1);
          local_6444 = iVar12 + (int)uVar28;
          iVar12 = FUN_144e12870(puVar18,iVar10 + 2);
          iVar12 = (int)uVar22 + iVar12;
          iVar11 = FUN_144e12870(puVar18,iVar10 + 3);
          uVar14 = iVar12 + iVar11;
          local_6468 = (int **)CONCAT44(local_6468._4_4_,uVar14);
          local_6470 = (undefined8 *)CONCAT44(local_6470._4_4_,local_6444);
          local_6478 = (char *)CONCAT44(local_6478._4_4_,iVar12);
          FUN_144e0dcc0(local_4a48,uVar28 & 0xffffffff,uVar22 & 0xffffffff,local_6444);
          uVar21 = iVar10 + 4;
          param_6 = local_6444;
          uVar28 = (ulonglong)local_6444;
          uVar31 = 0x2000;
          uVar13 = (uint)local_6410;
          param_7 = uVar14;
        } while (uVar21 < (uint)local_6410);
        uVar29 = (ulonglong)uVar14;
        local_6440 = uVar14;
        goto LAB_144e109db;
      case 0x1b:
        uVar15 = (uint)((longlong)(puVar18[3] - puVar18[2]) >> 3);
        uVar13 = uVar15 & 0xfffffffd;
        uVar21 = uVar15 - uVar13;
        local_6410 = CONCAT44(local_6410._4_4_,uVar15) & 0xfffffffffffffffd;
        if (uVar21 < uVar13) {
          do {
            uVar22 = (ulonglong)uVar21;
            iVar12 = (int)uVar28;
            if ((uVar13 - uVar21 & 1) == 0) {
              uVar20 = (ulonglong)uVar14;
            }
            else {
              lVar27 = puVar18[2];
              if (uVar21 < (uint)(puVar18[3] - lVar27 >> 3)) {
                iVar11 = *(int *)(lVar27 + 4 + uVar22 * 8);
                piVar19 = (int *)(lVar27 + uVar22 * 8);
                if (iVar11 == 1) {
                  iVar11 = *piVar19;
                  if (-1 < iVar11) {
                    iVar10 = iVar11 + 0x2000 >> 0xe;
                    goto LAB_144e10777;
                  }
                  uVar22 = (ulonglong)(uVar21 + 1);
                  uVar20 = (ulonglong)(uVar14 - ((int)uVar31 - iVar11 >> 0xe));
                }
                else {
                  iVar10 = *piVar19;
                  if (iVar11 == 2) {
                    uVar22 = (ulonglong)(uVar21 + 1);
                    uVar20 = (ulonglong)(iVar10 * 0x10000 + uVar14);
                  }
                  else {
LAB_144e10777:
                    uVar20 = (ulonglong)(iVar10 + uVar14);
                    uVar22 = (ulonglong)(uVar21 + 1);
                  }
                }
              }
              else {
                piVar19 = (int *)puVar18[1];
                if ((piVar19 != (int *)0x0) && (*piVar19 == 0)) {
                  *piVar19 = 0x82;
                }
                uVar22 = (ulonglong)(uVar21 + 1);
                uVar20 = (ulonglong)uVar14;
              }
            }
            iVar10 = (int)uVar22;
            iVar11 = FUN_144e12870(puVar18,uVar22);
            uVar22 = (ulonglong)(uint)(iVar12 + iVar11);
            iVar12 = FUN_144e12870(puVar18,iVar10 + 1);
            iVar12 = (int)uVar22 + iVar12;
            iVar11 = FUN_144e12870(puVar18,iVar10 + 2);
            uVar14 = (int)uVar20 + iVar11;
            iVar11 = FUN_144e12870(puVar18,iVar10 + 3);
            local_6444 = iVar11 + iVar12;
            local_6468 = (int **)CONCAT44(local_6468._4_4_,uVar14);
            local_6470 = (undefined8 *)CONCAT44(local_6470._4_4_,local_6444);
            local_6478 = (char *)CONCAT44(local_6478._4_4_,uVar14);
            FUN_144e0dcc0(local_4a48,uVar22 & 0xffffffff,uVar20 & 0xffffffff);
            uVar21 = iVar10 + 4;
            param_6 = local_6444;
            uVar28 = (ulonglong)local_6444;
            uVar31 = 0x2000;
            uVar13 = (uint)local_6410;
            param_7 = uVar14;
          } while (uVar21 < (uint)local_6410);
        }
LAB_144e10808:
        local_6440 = uVar14;
        uVar29 = (ulonglong)local_6440;
        goto LAB_144e109db;
      case 0x1c:
        FUN_144e0c1c0(puVar23);
        FUN_144e0c1c0();
        goto LAB_144e10a16;
      case 0x1e:
      case 0x1f:
        bVar32 = bVar7 == 0x1f;
        uVar13 = (uint)((longlong)(puVar18[3] - puVar18[2]) >> 3);
        local_6418 = uVar13 & 0xfffffffd;
        uVar13 = uVar13 - local_6418;
        if (uVar13 < local_6418) {
          do {
            uVar22 = (ulonglong)uVar13;
            iVar11 = (int)uVar29;
            iVar12 = (int)uVar28;
            if (bVar32) {
              lVar27 = puVar18[2];
              if (uVar13 < (uint)(puVar18[3] - lVar27 >> 3)) {
                iVar11 = *(int *)(lVar27 + 4 + uVar22 * 8);
                piVar19 = (int *)(lVar27 + uVar22 * 8);
                if (iVar11 == 1) {
                  iVar11 = *piVar19;
                  if (iVar11 < 0) {
                    iVar10 = -((int)uVar31 - iVar11 >> 0xe);
                  }
                  else {
                    iVar10 = iVar11 + 0x2000 >> 0xe;
                  }
                }
                else {
                  iVar10 = *piVar19;
                  if (iVar11 == 2) {
                    iVar10 = iVar10 << 0x10;
                  }
                }
              }
              else {
                piVar19 = (int *)puVar18[1];
                if ((piVar19 != (int *)0x0) && (*piVar19 == 0)) {
                  *piVar19 = 0x82;
                }
                iVar10 = 0;
              }
              iVar12 = iVar12 + iVar10;
              local_6410 = CONCAT44(local_6410._4_4_,iVar12);
              uVar29 = uVar29 & 0xffffffff;
              iVar11 = FUN_144e12870(puVar18,uVar13 + 1);
              uVar22 = (ulonglong)(uint)(iVar12 + iVar11);
              iVar12 = FUN_144e12870(puVar18,uVar13 + 2);
              uVar14 = iVar12 + local_6440;
              iVar12 = FUN_144e12870(puVar18,uVar13 + 3);
              local_6440 = iVar12 + uVar14;
              if (local_6418 - uVar13 == 5) {
                iVar12 = FUN_144e12870(puVar18,uVar13 + 4);
                local_6444 = iVar12 + (int)uVar22;
                bVar32 = false;
                uVar13 = uVar13 + 1;
              }
              else {
                bVar32 = false;
                local_6444 = (uint)uVar22;
              }
            }
            else {
              local_6410 = CONCAT44(local_6410._4_4_,iVar12);
              iVar10 = FUN_144e12870(puVar18,uVar22);
              uVar29 = (ulonglong)(uint)(iVar11 + iVar10);
              iVar11 = FUN_144e12870(puVar18,uVar13 + 1);
              uVar22 = (ulonglong)(uint)(iVar12 + iVar11);
              iVar12 = FUN_144e12870(puVar18,uVar13 + 2);
              uVar15 = (int)uVar29 + iVar12;
              iVar12 = FUN_144e12870(puVar18,uVar13 + 3);
              local_6444 = iVar12 + (int)uVar22;
              uVar14 = uVar15;
              if (local_6418 - uVar13 == 5) {
                iVar12 = FUN_144e12870(puVar18,uVar13 + 4);
                uVar15 = iVar12 + uVar14;
                uVar13 = uVar13 + 1;
              }
              bVar32 = true;
              local_6440 = uVar15;
            }
            local_6468 = (int **)CONCAT44(local_6468._4_4_,local_6440);
            local_6470 = (undefined8 *)CONCAT44(local_6470._4_4_,local_6444);
            local_6478 = (char *)CONCAT44(local_6478._4_4_,uVar14);
            FUN_144e0dcc0(local_4a48,local_6410 & 0xffffffff,uVar29 & 0xffffffff,uVar22 & 0xffffffff
                         );
            param_6 = local_6444;
            uVar28 = (ulonglong)local_6444;
            uVar13 = uVar13 + 4;
            uVar31 = 0x2000;
            param_7 = local_6440;
            uVar29 = (ulonglong)local_6440;
          } while (uVar13 < local_6418);
        }
LAB_144e109db:
        uVar20 = 0;
        uVar22 = (ulonglong)local_6448;
        puVar18[3] = puVar18[2];
        puVar23 = local_6420;
        goto LAB_144e0e3f0;
      default:
        if (((bVar7 < 0xf7) || (iVar12 = FUN_144e0c1c0(puVar23), bVar7 < 0xfb)) || (bVar7 != 0xff))
        goto LAB_144e10a16;
        uVar13 = FUN_144e0c1c0();
        uVar14 = FUN_144e0c1c0();
        uVar15 = FUN_144e0c1c0();
        if (*(char *)((longlong)local_6400 + 0xc) == '\0') goto LAB_144e0fd7a;
        if (64000 < (uVar15 | ((iVar12 << 8 | uVar13) << 8 | uVar14) << 8) + 32000) {
          cVar6 = (char)local_6408;
          if (cVar6 == '\0') {
            cVar6 = '\x01';
          }
          local_6408 = CONCAT31(local_6408._1_3_,cVar6);
        }
        FUN_144e12740(puVar18);
        uVar28 = (ulonglong)local_6444;
        uVar20 = 0;
        uVar29 = (ulonglong)local_6440;
        uVar22 = (ulonglong)local_6448;
        goto LAB_144e0e3f0;
      }
switchD_144e0e4e9_caseD_0:
      uVar22 = (ulonglong)local_6448;
LAB_144e0e656:
      uVar20 = 0;
      puVar18[3] = puVar18[2];
      goto LAB_144e0e3f0;
    }
  }
LAB_144e0ebe2:
  if ((local_6438 != (int *)0x0) && (*local_6438 == 0)) {
    *local_6438 = iVar12;
  }
  local_1a8 = 0;
  local_198 = 0;
  local_190 = 0;
  FUN_144b56350(local_1c0[0],local_188);
  local_188 = 0;
  local_6380 = 0;
  local_6370 = 0;
  local_6368 = 0;
  FUN_144b56350(local_6398,local_6360);
  local_6360 = 0;
  local_6340 = 0;
  local_6330 = 0;
  local_6328 = 0;
  FUN_144b56350(local_6358,local_6320);
  local_6320 = 0;
  FUN_144b56350(local_6318,local_62e0);
  if (puVar18 != (undefined8 *)0x0) {
    uVar31 = *puVar18;
    FUN_144b56350(uVar31,puVar18[2]);
    puVar18[2] = 0;
    FUN_144b56350(uVar31,puVar18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_6498);
}



// FUNCTION 144e110e0 FUN_144e110e0 body=531 status=ok
// SIG undefined FUN_144e110e0(void)

void FUN_144e110e0(int param_1,uint param_2,int param_3,int *param_4,int param_5,char param_6,
                  int *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  *param_4 = 0;
  if ((param_5 == 0) && (param_6 == '\0')) {
    return;
  }
  if (param_1 < 0x28f) {
    return;
  }
  if (param_6 == '\0') goto LAB_144e112e2;
  iVar8 = *param_7;
  iVar1 = param_7[1];
  iVar7 = param_7[7];
  iVar2 = param_7[2];
  iVar10 = param_7[5];
  iVar11 = param_7[3];
  iVar3 = param_7[6];
  iVar4 = param_7[4];
  uVar5 = FUN_144b42fe0(param_3 + param_5);
  iVar9 = 0x1f;
  if (uVar5 != 0) {
    for (; uVar5 >> iVar9 == 0; iVar9 = iVar9 + -1) {
    }
  }
  iVar6 = 0x1f;
  if (param_2 != 0) {
    for (; param_2 >> iVar6 == 0; iVar6 = iVar6 + -1) {
    }
  }
  if (iVar6 + iVar9 < 0x2e) {
    iVar9 = FUN_144b42fe0(uVar5,param_2);
  }
  else {
    iVar9 = iVar3 << 0x10;
  }
  iVar6 = iVar8 * 0x10000;
  if (iVar9 < iVar6) {
LAB_144e112a4:
    iVar8 = FUN_144b555e0(iVar1 << 0x10,param_2);
    *param_4 = iVar8;
  }
  else if (iVar9 < iVar2 * 0x10000) {
    iVar8 = iVar2 - iVar8;
    iVar9 = FUN_144b555e0(iVar6,param_2);
    if (iVar8 != 0) {
      iVar11 = iVar11 - iVar1;
      iVar10 = iVar1;
      goto LAB_144e1123f;
    }
LAB_144e11260:
    iVar8 = FUN_144b555e0(iVar2 * 0x10000,param_2);
    if (iVar4 - iVar2 == 0) goto LAB_144e11218;
    iVar8 = FUN_144b55580(uVar5 - iVar8,iVar10 - iVar11,iVar4 - iVar2);
    iVar7 = FUN_144b555e0(iVar11 << 0x10,param_2);
    *param_4 = iVar8 + iVar7;
  }
  else {
    if (iVar9 < iVar4 << 0x10) goto LAB_144e11260;
    iVar1 = iVar7;
    if (iVar3 << 0x10 <= iVar9) goto LAB_144e112a4;
LAB_144e11218:
    iVar8 = iVar3 - iVar4;
    iVar9 = FUN_144b555e0(iVar4 << 0x10,param_2);
    iVar1 = iVar7;
    if (iVar8 == 0) goto LAB_144e112a4;
    iVar11 = iVar7 - iVar10;
LAB_144e1123f:
    iVar8 = FUN_144b55580(uVar5 - iVar9,iVar11,iVar8);
    iVar7 = FUN_144b555e0(iVar10 << 0x10,param_2);
    *param_4 = iVar8 + iVar7;
  }
  iVar8 = FUN_144b555e0(*param_4,param_1 * 2);
  *param_4 = iVar8;
LAB_144e112e2:
  *param_4 = *param_4 + param_5 / 2;
  return;
}



// FUNCTION 144e11300 FUN_144e11300 body=858 status=ok
// SIG undefined FUN_144e11300(void)

void FUN_144e11300(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined4 local_res8 [2];
  undefined8 local_res18 [2];
  ulonglong in_stack_ffffffffffffffa8;
  ulonglong uVar15;
  
  lVar2 = *(longlong *)(param_1 + 0xf0);
  iVar10 = *(int *)(param_1 + 0xa4);
  uVar1 = *(undefined4 *)(param_1 + 0xa8);
  local_res8[0] = 0;
  local_res18[0] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  lVar3 = *(longlong *)(lVar2 + 0x328);
  bVar14 = *(longlong *)(param_1 + 0xf8) != lVar3;
  if (bVar14) {
    *(longlong *)(param_1 + 0xf8) = lVar3;
  }
  if ((*(char *)(param_1 + 0xc) == '\0') &&
     (lVar4 = *(longlong *)(param_1 + 0x288), *(int *)(*(longlong *)(lVar2 + 800) + 0x1118) != 0)) {
    in_stack_ffffffffffffffa8 = 0;
    iVar7 = (**(code **)(*(longlong *)(*(longlong *)(lVar2 + 8) + 0x2e0) + 0x50))
                      (*(longlong *)(lVar2 + 8),local_res8,0,local_res18,0);
    *(int *)(param_1 + 8) = iVar7;
    if (iVar7 != 0) {
      return;
    }
    cVar6 = (**(code **)(lVar4 + 0x18))
                      (lVar3 + 0x238,*(undefined4 *)(lVar3 + 0x228),local_res8[0],local_res18[0]);
    if (cVar6 != '\0') {
      (**(code **)(lVar4 + 8))(*(undefined8 *)(lVar2 + 800),lVar3,local_res8[0],local_res18[0]);
    }
    bVar14 = cVar6 != '\0' || bVar14;
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar3 + 0x240);
    *(undefined1 *)(param_1 + 0x61) = 0;
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(lVar3 + 0x228);
    *(undefined4 *)(param_1 + 0x94) = local_res8[0];
    *(undefined8 *)(param_1 + 0x98) = local_res18[0];
  }
  iVar7 = (uint)*(ushort *)(*(longlong *)(*(longlong *)(lVar2 + 8) + 0x80) + 0x1a) << 0x10;
  if (*(int *)(param_1 + 0x5c) != iVar7) {
    *(int *)(param_1 + 0x5c) = iVar7;
    bVar14 = true;
  }
  *(byte *)(param_1 + 0x100) = *(byte *)(param_1 + 0x10) & 1;
  if ((*param_2 != *(longlong *)(param_1 + 0x14)) || (param_2[1] != *(longlong *)(param_1 + 0x1c)))
  {
    lVar3 = param_2[1];
    bVar14 = true;
    *(longlong *)(param_1 + 0x14) = *param_2;
    *(longlong *)(param_1 + 0x1c) = lVar3;
    *(undefined8 *)(param_1 + 0x24) = 0;
    uVar8 = *(undefined4 *)((longlong)param_2 + 4);
    lVar3 = param_2[1];
    uVar11 = *(undefined4 *)((longlong)param_2 + 0xc);
    *(int *)(param_1 + 0x2c) = (int)*param_2;
    *(undefined4 *)(param_1 + 0x30) = uVar8;
    *(int *)(param_1 + 0x34) = (int)lVar3;
    *(undefined4 *)(param_1 + 0x38) = uVar11;
    *(longlong *)(param_1 + 0x3c) = param_2[2];
    *(undefined4 *)(param_1 + 0x50) = 0x10000;
    *(undefined8 *)(param_1 + 0x44) = 0x10000;
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  if (*(byte *)(param_1 + 0x102) == ((byte)*(uint *)(param_1 + 0x10) & 2)) {
    if (!bVar14) {
      return;
    }
  }
  else {
    *(byte *)(param_1 + 0x102) = (byte)(*(uint *)(param_1 + 0x10) >> 1) & 1;
  }
  iVar7 = *(int *)(param_1 + 0xa0);
  if (*(int *)(param_1 + 0xa0) == 0) {
    iVar7 = 1000;
  }
  iVar5 = *(int *)(param_1 + 0x5c);
  if (*(int *)(param_1 + 0x5c) < 0x40000) {
    iVar5 = 0x40000;
  }
  uVar13 = 0x3e80000 / (longlong)iVar7 & 0xffffffff;
  iVar9 = *(int *)(*(longlong *)(lVar2 + 0x328) + 0x194);
  *(int *)(param_1 + 0x124) = iVar9 << 0x10;
  if (iVar9 << 0x10 < 1) {
    uVar8 = FUN_144b555e0(0x4b0000,uVar13);
    *(undefined4 *)(param_1 + 0x124) = uVar8;
  }
  uVar8 = (undefined4)(in_stack_ffffffffffffffa8 >> 0x20);
  if (iVar10 < 1) {
    uVar15 = in_stack_ffffffffffffffa8 & 0xffffffff00000000;
    FUN_144e110e0(uVar13,iVar5,*(undefined4 *)(param_1 + 0x124),param_1 + 300,uVar15,
                  *(undefined1 *)(param_1 + 0x102),param_1 + 0x104);
    uVar8 = (undefined4)(uVar15 >> 0x20);
  }
  else {
    iVar9 = FUN_144b555e0(iVar7 << 0x10);
    if (iVar10 <= iVar9) {
      iVar10 = FUN_144b555e0(iVar7 << 0x10,iVar5);
    }
    *(int *)(param_1 + 300) = 0;
    if ((iVar10 != 0) && (0x28e < (int)(0x3e80000 / (longlong)iVar7))) {
      *(int *)(param_1 + 300) = iVar10 / 2;
    }
  }
  iVar10 = *(int *)(*(longlong *)(lVar2 + 0x328) + 400);
  if ((iVar10 << 0x10 < 1) || (uVar12 = 0x4b0000, *(int *)(param_1 + 0x124) <= iVar10 * 0x20000)) {
    uVar12 = 0x6e0000;
  }
  uVar11 = FUN_144b555e0(uVar12,uVar13);
  *(undefined4 *)(param_1 + 0x128) = uVar11;
  FUN_144e110e0(uVar13,iVar5,*(undefined4 *)(param_1 + 0x128),param_1 + 0x130,CONCAT44(uVar8,uVar1),
                *(undefined1 *)(param_1 + 0x102),param_1 + 0x104);
  if ((*(int *)(param_1 + 300) == 0) && (*(int *)(param_1 + 0x130) == 0)) {
    *(undefined1 *)(param_1 + 0x101) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x101) = 1;
  }
  *(undefined1 *)(param_1 + 0x134) = 0;
  FUN_144e0ca80(param_1 + 0x138,param_1);
  return;
}



// FUNCTION 144e11660 FUN_144e11660 body=78 status=ok
// SIG undefined FUN_144e11660(void)

void FUN_144e11660(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *param_1;
    FUN_144b56350(uVar1,param_1[0xf]);
    param_1[0xf] = 0;
    FUN_144b56350(uVar1,param_1[0x11]);
    param_1[0x11] = 0;
  }
  return;
}



// FUNCTION 144e116b0 FUN_144e116b0 body=28 status=ok
// SIG undefined FUN_144e116b0(void)

void FUN_144e116b0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  FUN_144e0c030(lVar1);
  *(undefined1 *)(lVar1 + 0x58) = 0;
  return;
}



// FUNCTION 144e116d0 FUN_144e116d0 body=156 status=ok
// SIG undefined FUN_144e116d0(void)

void FUN_144e116d0(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x38);
  if (*(char *)(lVar3 + 0x58) == '\0') {
    uVar1 = param_2[1];
    uVar2 = *param_2;
    *(undefined1 *)(lVar3 + 0x58) = 1;
    iVar4 = FUN_144e0bfa0(lVar3);
    if (iVar4 == 0) {
      iVar4 = FUN_144e0bf10(lVar3,uVar2,uVar1);
      if (iVar4 == 0) goto LAB_144e11733;
    }
    if (**(int **)(param_1 + 0x30) == 0) {
      **(int **)(param_1 + 0x30) = iVar4;
    }
  }
  else {
LAB_144e11733:
    iVar4 = FUN_144e0bf10(lVar3,param_2[2],param_2[3]);
    if ((iVar4 != 0) && (**(int **)(param_1 + 0x30) == 0)) {
      **(int **)(param_1 + 0x30) = iVar4;
    }
  }
  return;
}



// FUNCTION 144e11770 FUN_144e11770 body=362 status=ok
// SIG undefined FUN_144e11770(void)

void FUN_144e11770(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  
  lVar5 = *(longlong *)(param_1 + 0x38);
  if (*(char *)(lVar5 + 0x58) == '\0') {
    uVar3 = param_2[1];
    uVar4 = *param_2;
    *(undefined1 *)(lVar5 + 0x58) = 1;
    iVar8 = FUN_144e0bfa0(lVar5);
    if ((iVar8 != 0) || (iVar8 = FUN_144e0bf10(lVar5,uVar4,uVar3), iVar8 != 0)) {
      if (**(int **)(param_1 + 0x30) != 0) {
        return;
      }
      **(int **)(param_1 + 0x30) = iVar8;
      return;
    }
  }
  lVar6 = *(longlong *)(lVar5 + 0x18);
  if ((*(uint *)(lVar6 + 8) < (uint)(*(short *)(lVar6 + 0x62) + 3 + (int)*(short *)(lVar6 + 0x1a)))
     && (iVar8 = FUN_144b56680(lVar6,3), iVar8 != 0)) {
    if (**(int **)(param_1 + 0x30) == 0) {
      **(int **)(param_1 + 0x30) = iVar8;
      return;
    }
    return;
  }
  lVar6 = *(longlong *)(lVar5 + 0x28);
  if (*(char *)(lVar5 + 0x59) != '\0') {
    sVar2 = *(short *)(lVar6 + 2);
    lVar7 = *(longlong *)(lVar6 + 0x10);
    piVar1 = (int *)(*(longlong *)(lVar6 + 8) + (longlong)sVar2 * 8);
    iVar8 = param_2[2];
    piVar1[1] = (int)param_2[3] >> 10;
    *piVar1 = iVar8 >> 10;
    *(undefined1 *)(lVar7 + sVar2) = 2;
  }
  *(short *)(lVar6 + 2) = *(short *)(lVar6 + 2) + 1;
  lVar6 = *(longlong *)(lVar5 + 0x28);
  if (*(char *)(lVar5 + 0x59) != '\0') {
    sVar2 = *(short *)(lVar6 + 2);
    lVar7 = *(longlong *)(lVar6 + 0x10);
    piVar1 = (int *)(*(longlong *)(lVar6 + 8) + (longlong)sVar2 * 8);
    iVar8 = param_2[4];
    piVar1[1] = (int)param_2[5] >> 10;
    *piVar1 = iVar8 >> 10;
    *(undefined1 *)(lVar7 + sVar2) = 2;
  }
  *(short *)(lVar6 + 2) = *(short *)(lVar6 + 2) + 1;
  lVar6 = *(longlong *)(lVar5 + 0x28);
  if (*(char *)(lVar5 + 0x59) != '\0') {
    sVar2 = *(short *)(lVar6 + 2);
    lVar5 = *(longlong *)(lVar6 + 0x10);
    piVar1 = (int *)(*(longlong *)(lVar6 + 8) + (longlong)sVar2 * 8);
    iVar8 = param_2[6];
    piVar1[1] = (int)param_2[7] >> 10;
    *piVar1 = iVar8 >> 10;
    *(undefined1 *)(lVar5 + sVar2) = 1;
  }
  *(short *)(lVar6 + 2) = *(short *)(lVar6 + 2) + 1;
  return;
}



// FUNCTION 144e118e0 FUN_144e118e0 body=208 status=ok
// SIG undefined FUN_144e118e0(void)

ulonglong FUN_144e118e0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  int *piVar5;
  
  if ((*(int *)(param_1 + 0x20) == 0) || (*(char *)(param_1 + 0x19) == '\0')) {
    uVar4 = FUN_144b42fe0(param_2,*(undefined4 *)(param_1 + 0x1c));
    return uVar4;
  }
  uVar2 = *(uint *)(param_1 + 0x24);
  uVar1 = uVar2;
  while ((uVar2 < *(int *)(param_1 + 0x20) - 1U &&
         (uVar1 = uVar1 + 1, *(int *)((ulonglong)uVar1 * 0x20 + 0x38 + param_1) <= param_2))) {
    uVar2 = uVar2 + 1;
  }
  if (uVar2 != 0) {
    piVar5 = (int *)(param_1 + 0x38 + (ulonglong)uVar2 * 0x20);
    do {
      if (*piVar5 <= param_2) break;
      piVar5 = piVar5 + -8;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  *(uint *)(param_1 + 0x24) = uVar2;
  if ((uVar2 == 0) && (param_2 < *(int *)(param_1 + 0x38))) {
    iVar3 = FUN_144b42fe0(param_2 - *(int *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x1c));
    return (ulonglong)(uint)(iVar3 + *(int *)(param_1 + 0x3c));
  }
  iVar3 = FUN_144b42fe0(param_2 - *(int *)((ulonglong)uVar2 * 0x20 + 0x38 + param_1),
                        *(undefined4 *)(((ulonglong)uVar2 + 2) * 0x20 + param_1));
  return (ulonglong)(uint)(iVar3 + *(int *)((ulonglong)uVar2 * 0x20 + 0x3c + param_1));
}



// FUNCTION 144e119b0 FUN_144e119b0 body=867 status=ok
// SIG undefined FUN_144e119b0(void)

void FUN_144e119b0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  uint *puVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  int *piVar20;
  uint *puVar21;
  ulonglong local_60;
  int local_58;
  
  uVar14 = 0;
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28) = 0;
  puVar5 = (uint *)(param_1 + 0x20);
  uVar17 = (ulonglong)*puVar5;
  if (*puVar5 != 0) {
    piVar11 = (int *)(param_1 + 0x38);
    piVar12 = (int *)(param_1 + 0x1c);
    puVar13 = (uint *)(param_1 + 0x28);
    piVar20 = (int *)(param_1 + 0x18);
    puVar21 = (uint *)(param_1 + 0x3c);
    do {
      uVar7 = *puVar13 & 0xc;
      uVar6 = uVar14 + 1;
      if (uVar7 == 0) {
        uVar6 = uVar14;
      }
      if ((*puVar13 >> 4 & 1) == 0) {
        iVar15 = *puVar21 - (*puVar21 & 0xffff0000);
        lVar18 = uVar6 * 0x20 + param_1;
        iVar16 = -iVar15;
        iVar8 = *(int *)(lVar18 + 0x3c) - (*(uint *)(lVar18 + 0x3c) & 0xffff0000);
        iVar10 = -iVar8;
        iVar19 = 0;
        if (iVar15 != 0) {
          iVar19 = iVar16 + 0x10000;
        }
        iVar15 = 0;
        if (iVar8 != 0) {
          iVar15 = iVar10 + 0x10000;
        }
        if (iVar19 < iVar15) {
          iVar15 = iVar19;
        }
        if (iVar10 < iVar16) {
          iVar10 = iVar16;
        }
        iVar19 = iVar10;
        if ((uVar6 < (int)uVar17 - 1) &&
           (*(int *)(lVar18 + 0x5c) < *(int *)(lVar18 + 0x3c) + 0x8000 + iVar15)) {
          if ((uVar14 == 0) || (*piVar12 <= (int)((*puVar21 - 0x8000) + iVar10))) {
            if (-iVar10 <= iVar15) goto LAB_144e11b61;
          }
          else {
            iVar19 = 0;
          }
          if ((*(uint *)(lVar18 + 0x48) >> 4 & 1) == 0) {
            lVar1 = *(longlong *)(param_1 + 0x10);
            local_58 = iVar15 - iVar19;
            local_60 = uVar6;
            if ((*(longlong *)(lVar1 + 0x28) != *(longlong *)(lVar1 + 0x18)) ||
               (cVar2 = FUN_144e0c9a0(lVar1,*(longlong *)(lVar1 + 0x20) +
                                            *(longlong *)(lVar1 + 0x18)), cVar2 != '\0')) {
              memcpy((void *)(*(size_t *)(lVar1 + 0x10) * *(longlong *)(lVar1 + 0x28) +
                             *(longlong *)(lVar1 + 0x38)),&local_60,*(size_t *)(lVar1 + 0x10));
              *(longlong *)(lVar1 + 0x28) = *(longlong *)(lVar1 + 0x28) + 1;
            }
          }
        }
        else {
          iVar19 = iVar15;
          if (((uVar14 == 0) || (*piVar12 <= (int)((*puVar21 - 0x8000) + iVar10))) &&
             (-iVar10 < iVar15)) {
            iVar19 = iVar10;
          }
        }
LAB_144e11b61:
        *puVar21 = *puVar21 + iVar19;
        if (uVar7 != 0) {
          *(int *)(lVar18 + 0x3c) = *(int *)(lVar18 + 0x3c) + iVar19;
        }
      }
      if (uVar14 != 0) {
        if (*piVar11 != *piVar20) {
          uVar3 = FUN_144b555e0(*puVar21 - *piVar12,*piVar11 - *piVar20);
          *puVar5 = uVar3;
        }
      }
      if (uVar7 != 0) {
        lVar18 = uVar6 * 0x20;
        iVar19 = *(int *)(lVar18 + 0x38 + param_1);
        iVar10 = *(int *)(lVar18 + 0x18 + param_1);
        if (iVar19 != iVar10) {
          uVar4 = FUN_144b555e0(*(int *)(lVar18 + 0x3c + param_1) -
                                *(int *)(lVar18 + 0x1c + param_1),iVar19 - iVar10);
          *(undefined4 *)(lVar18 + 0x20 + param_1) = uVar4;
        }
        uVar14 = uVar14 + 1;
        puVar13 = puVar13 + 8;
        piVar11 = piVar11 + 8;
        piVar20 = piVar20 + 8;
        puVar21 = puVar21 + 8;
        piVar12 = piVar12 + 8;
        puVar5 = puVar5 + 8;
      }
      uVar17 = (ulonglong)*(uint *)(param_1 + 0x20);
      puVar13 = puVar13 + 8;
      piVar11 = piVar11 + 8;
      puVar5 = puVar5 + 8;
      uVar14 = uVar14 + 1;
      piVar20 = piVar20 + 8;
      puVar21 = puVar21 + 8;
      piVar12 = piVar12 + 8;
    } while (uVar14 < uVar17);
  }
  uVar14 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x28);
  uVar17 = uVar14;
  for (; uVar14 != 0; uVar14 = uVar14 - 1) {
    uVar17 = uVar17 - 1;
    lVar18 = *(longlong *)(param_1 + 0x10);
    uVar6 = uVar17;
    if (*(ulonglong *)(lVar18 + 0x28) <= uVar17) {
      piVar11 = *(int **)(lVar18 + 8);
      if ((piVar11 != (int *)0x0) && (*piVar11 == 0)) {
        *piVar11 = 0x82;
      }
      uVar6 = 0;
    }
    plVar9 = (longlong *)(*(longlong *)(lVar18 + 0x10) * uVar6 + *(longlong *)(lVar18 + 0x38));
    lVar18 = *plVar9 * 0x20 + param_1;
    iVar19 = *(int *)(lVar18 + 0x3c) + (int)plVar9[1];
    if ((iVar19 + 0x8000 <= *(int *)(lVar18 + 0x5c)) &&
       (*(int *)(lVar18 + 0x3c) = iVar19, (*(byte *)(lVar18 + 0x28) & 0xc) != 0)) {
      *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + (int)plVar9[1];
    }
  }
  return;
}



// FUNCTION 144e11d20 FUN_144e11d20 body=494 status=ok
// SIG undefined FUN_144e11d20(void)

void FUN_144e11d20(longlong param_1,uint *param_2,uint *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  
  bVar5 = true;
  if (*param_2 == 0) {
    bVar5 = false;
    param_2 = param_3;
  }
  else if (*param_3 == 0) {
    bVar5 = false;
  }
  else if ((int)param_3[4] < (int)param_2[4]) {
    return;
  }
  uVar8 = *(uint *)(param_1 + 0x20);
  uVar11 = 0;
  if (uVar8 != 0) {
    do {
      if ((int)param_2[4] <= *(int *)(uVar11 * 0x20 + 0x38 + param_1)) break;
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
    } while (uVar10 < uVar8);
  }
  uVar10 = (uint)uVar11;
  if (uVar10 < uVar8) {
    uVar8 = *(uint *)(uVar11 * 0x20 + 0x38 + param_1);
    if (uVar8 == param_2[4]) {
      return;
    }
    if ((bVar5) && ((int)uVar8 <= (int)param_3[4])) {
      return;
    }
    if ((*(uint *)(uVar11 * 0x20 + 0x28 + param_1) >> 3 & 1) != 0) {
      return;
    }
  }
  lVar9 = *(longlong *)(param_1 + 8);
  if ((*(char *)(lVar9 + 0x18) != '\0') && ((*param_2 >> 4 & 1) == 0)) {
    if (bVar5) {
      iVar6 = FUN_144e118e0(lVar9,(int)(param_3[4] + param_2[4]) / 2);
      iVar7 = FUN_144b42fe0((int)(param_3[4] - param_2[4]) / 2,*(undefined4 *)(param_1 + 0x1c));
      param_2[5] = iVar6 - iVar7;
      param_3[5] = iVar7 + iVar6;
    }
    else {
      uVar8 = FUN_144e118e0(lVar9,param_2[4]);
      param_2[5] = uVar8;
    }
  }
  if ((uVar10 == 0) ||
     (*(int *)((ulonglong)(uVar10 - 1) * 0x20 + 0x3c + param_1) <= (int)param_2[5])) {
    uVar8 = *(uint *)(param_1 + 0x20);
    if (uVar10 < uVar8) {
      uVar12 = *(uint *)(uVar11 * 0x20 + 0x3c + param_1);
      if (bVar5) {
        uVar3 = param_3[5];
        iVar6 = uVar3 - uVar12;
      }
      else {
        uVar3 = param_2[5];
        iVar6 = uVar3 - uVar12;
      }
      if (uVar3 != uVar12 && SBORROW4(uVar3,uVar12) == iVar6 < 0) {
        return;
      }
    }
    uVar12 = uVar8 + 1;
    if (!bVar5) {
      uVar12 = uVar8;
    }
    iVar6 = uVar8 - uVar10;
    if (uVar12 < 0xc0) {
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        uVar8 = uVar8 - 1;
        uVar13 = (ulonglong)uVar12;
        uVar12 = uVar12 - 1;
        puVar1 = (undefined8 *)((ulonglong)uVar8 * 0x20 + 0x28 + param_1);
        uVar4 = puVar1[1];
        puVar2 = (undefined8 *)(uVar13 * 0x20 + 0x28 + param_1);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        puVar1 = (undefined8 *)((ulonglong)uVar8 * 0x20 + 0x38 + param_1);
        uVar4 = puVar1[1];
        puVar2 = (undefined8 *)(uVar13 * 0x20 + 0x38 + param_1);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
      }
      uVar4 = *(undefined8 *)(param_2 + 2);
      puVar1 = (undefined8 *)(uVar11 * 0x20 + 0x28 + param_1);
      *puVar1 = *(undefined8 *)param_2;
      puVar1[1] = uVar4;
      uVar4 = *(undefined8 *)(param_2 + 6);
      puVar1 = (undefined8 *)(uVar11 * 0x20 + 0x38 + param_1);
      *puVar1 = *(undefined8 *)(param_2 + 4);
      puVar1[1] = uVar4;
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      if (bVar5) {
        uVar4 = *(undefined8 *)(param_3 + 2);
        lVar9 = (ulonglong)(uVar10 + 1) * 0x20;
        puVar1 = (undefined8 *)(lVar9 + 0x28 + param_1);
        *puVar1 = *(undefined8 *)param_3;
        puVar1[1] = uVar4;
        uVar4 = *(undefined8 *)(param_3 + 6);
        puVar1 = (undefined8 *)(lVar9 + 0x38 + param_1);
        *puVar1 = *(undefined8 *)(param_3 + 4);
        puVar1[1] = uVar4;
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      }
    }
  }
  return;
}



// FUNCTION 144e11f10 FUN_144e11f10 body=194 status=ok
// SIG undefined FUN_144e11f10(void)

void FUN_144e11f10(longlong *param_1,undefined8 param_2,int *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = FUN_144b42fe0((int)param_1[0x919],param_4);
  iVar2 = FUN_144b42fe0(*(undefined4 *)((longlong)param_1 + 0x48cc),param_5);
  uVar3 = FUN_144e118e0(param_2,param_5);
  iVar4 = FUN_144b42fe0(*(undefined4 *)(*param_1 + 0x4c),uVar3);
  iVar5 = FUN_144b42fe0(*(undefined4 *)(*param_1 + 0x44),iVar1 + iVar2);
  *param_3 = iVar4 + iVar5 + *(int *)((longlong)param_1 + 0x48d4);
  iVar4 = FUN_144b42fe0(*(undefined4 *)(*param_1 + 0x50),uVar3);
  iVar1 = FUN_144b42fe0(*(undefined4 *)(*param_1 + 0x48),iVar1 + iVar2);
  param_3[1] = iVar4 + iVar1 + (int)param_1[0x91b];
  return;
}



// FUNCTION 144e11fe0 FUN_144e11fe0 body=483 status=ok
// SIG undefined FUN_144e11fe0(void)

ulonglong FUN_144e11fe0(longlong param_1,int *param_2,int *param_3,int *param_4,int *param_5,
                       int *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  
  iVar6 = param_3[1];
  iVar7 = param_2[1];
  iVar1 = *param_4;
  iVar2 = param_4[1];
  iVar3 = *param_2;
  iVar4 = param_2[1];
  iVar12 = (param_5[1] - iVar2) + 0x10 >> 5;
  iVar11 = (*param_5 - iVar1) + 0x10 >> 5;
  iVar5 = FUN_144b42fe0((*param_3 - *param_2) + 0x10 >> 5,iVar12);
  uVar9 = FUN_144b42fe0((iVar6 - iVar7) + 0x10 >> 5,iVar11);
  iVar5 = iVar5 - (int)uVar9;
  if (iVar5 != 0) {
    iVar6 = FUN_144b42fe0((iVar1 - iVar3) + 0x10 >> 5,iVar12);
    iVar7 = FUN_144b42fe0((iVar2 - iVar4) + 0x10 >> 5,iVar11);
    uVar8 = FUN_144b555e0(iVar6 - iVar7,iVar5);
    iVar5 = FUN_144b42fe0(uVar8,*param_3 - *param_2);
    *param_6 = iVar5 + *param_2;
    iVar5 = FUN_144b42fe0(uVar8,param_3[1] - param_2[1]);
    param_6[1] = iVar5 + param_2[1];
    iVar5 = *param_2;
    if (iVar5 == *param_3) {
      iVar6 = *param_6 - iVar5;
      if (iVar6 < 0) {
        iVar6 = iVar5 - *param_6;
      }
      if (iVar6 < *(int *)(param_1 + 0x4914)) {
        *param_6 = iVar5;
      }
    }
    iVar5 = param_2[1];
    if (iVar5 == param_3[1]) {
      iVar6 = param_6[1];
      iVar7 = iVar6 - iVar5;
      if (iVar7 < 0) {
        iVar7 = iVar5 - iVar6;
      }
      if (iVar7 < *(int *)(param_1 + 0x4914)) {
        iVar6 = iVar5;
      }
      param_6[1] = iVar6;
    }
    iVar5 = *param_4;
    if (iVar5 == *param_5) {
      iVar6 = *param_6 - iVar5;
      if (iVar6 < 0) {
        iVar6 = iVar5 - *param_6;
      }
      if (iVar6 < *(int *)(param_1 + 0x4914)) {
        *param_6 = iVar5;
      }
    }
    iVar5 = param_4[1];
    if (iVar5 == param_5[1]) {
      iVar6 = param_6[1];
      iVar7 = iVar6 - iVar5;
      if (iVar7 < 0) {
        iVar7 = iVar5 - iVar6;
      }
      if (iVar7 < *(int *)(param_1 + 0x4914)) {
        iVar6 = iVar5;
      }
      param_6[1] = iVar6;
    }
    iVar5 = (*param_3 + *param_4) / 2;
    uVar10 = *param_6 - iVar5;
    if ((int)uVar10 < 0) {
      uVar10 = iVar5 - *param_6;
    }
    uVar9 = (ulonglong)uVar10;
    if ((int)uVar10 <= *(int *)(param_1 + 0x4910)) {
      iVar5 = (param_4[1] + param_3[1]) / 2;
      uVar10 = param_6[1] - iVar5;
      if ((int)uVar10 < 0) {
        uVar10 = iVar5 - param_6[1];
      }
      uVar9 = (ulonglong)uVar10;
      if ((int)uVar10 <= *(int *)(param_1 + 0x4910)) {
        return CONCAT71((uint7)(uint3)(uVar10 >> 8),1);
      }
    }
  }
  return uVar9 & 0xffffffffffffff00;
}



// FUNCTION 144e121d0 FUN_144e121d0 body=612 status=ok
// SIG undefined FUN_144e121d0(void)

void FUN_144e121d0(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,char param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  int local_60;
  int iStack_5c;
  undefined1 local_58 [8];
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar4 = '\0';
  local_78 = 0;
  if (*(int *)(param_1 + 0x4944) == 2) {
    lVar5 = 0x4948;
    lVar6 = 0x4950;
  }
  else {
    lVar5 = 0x4958;
    lVar6 = 0x4960;
  }
  piVar1 = (int *)(param_1 + lVar6);
  local_70 = param_4;
  if ((*piVar1 != *param_3) || (piVar1[1] != param_3[1])) {
    local_80 = &local_78;
    local_88 = &local_70;
    cVar4 = FUN_144e11fe0(param_1,param_1 + lVar5,piVar1,param_3);
    if (cVar4 != '\0') {
      *(undefined8 *)piVar1 = local_78;
    }
  }
  uVar3 = local_78;
  local_68 = *(undefined8 *)(param_1 + 0x4930);
  iVar2 = *(int *)(param_1 + 0x4944);
  if (iVar2 == 2) {
    local_88 = (undefined8 *)CONCAT44(local_88._4_4_,*(undefined4 *)(param_1 + 0x4954));
    local_48 = 2;
    lVar5 = param_1 + 0x1838;
    if (param_5 == '\0') {
      lVar5 = param_2;
    }
    FUN_144e11f10(param_1,lVar5,&local_60,*(undefined4 *)(param_1 + 0x4950));
    if (((int)local_68 != local_60) || (local_68._4_4_ != iStack_5c)) {
      (**(code **)(*(longlong *)(param_1 + 8) + 8))(*(longlong *)(param_1 + 8),&local_68);
      local_50 = CONCAT44(iStack_5c,local_60);
      goto LAB_144e1237c;
    }
  }
  else if (iVar2 == 4) {
    local_88._0_4_ = *(undefined4 *)(param_1 + 0x4954);
    local_48 = iVar2;
    FUN_144e11f10(param_1,param_2,&local_60,*(undefined4 *)(param_1 + 0x4950));
    local_88._0_4_ = *(undefined4 *)(param_1 + 0x495c);
    FUN_144e11f10(param_1,param_2,local_58,*(undefined4 *)(param_1 + 0x4958));
    local_88 = (undefined8 *)CONCAT44(local_88._4_4_,*(undefined4 *)(param_1 + 0x4964));
    FUN_144e11f10(param_1,param_2,&local_50,*(undefined4 *)(param_1 + 0x4960));
    (**(code **)(*(longlong *)(param_1 + 8) + 0x18))(*(longlong *)(param_1 + 8),&local_68);
LAB_144e1237c:
    *(undefined8 *)(param_1 + 0x4930) = local_50;
  }
  if (cVar4 == '\0') {
    if (param_5 != '\0') {
      param_2 = param_1 + 0x1838;
    }
  }
  else {
    if (param_5 == '\0') goto LAB_144e123fe;
    param_2 = param_1 + 0x1838;
  }
  local_88 = (undefined8 *)CONCAT44(local_88._4_4_,param_3[1]);
  FUN_144e11f10(param_1,param_2,&local_60,*param_3);
  if ((local_60 != *(int *)(param_1 + 0x4930)) || (iStack_5c != *(int *)(param_1 + 0x4934))) {
    local_68 = *(undefined8 *)(param_1 + 0x4930);
    local_48 = 2;
    (**(code **)(*(longlong *)(param_1 + 8) + 8))(*(longlong *)(param_1 + 8),&local_68);
    *(ulonglong *)(param_1 + 0x4930) = CONCAT44(iStack_5c,local_60);
  }
LAB_144e123fe:
  if (cVar4 != '\0') {
    *(undefined8 *)param_3 = uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
}



// FUNCTION 144e12440 FUN_144e12440 body=154 status=ok
// SIG undefined FUN_144e12440(void)

void FUN_144e12440(longlong param_1,ulonglong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38 [3];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *(undefined8 *)(param_1 + 0x4930);
  local_20 = 1;
  local_48 = param_2;
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_144e0da10(param_1,*(undefined4 *)(param_1 + 0x4938),*(undefined4 *)(param_1 + 0x493c));
  }
  local_58 = local_48._4_4_;
  FUN_144e11f10(param_1,param_1 + 0x10,local_38,param_2 & 0xffffffff);
  (*(code *)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),&local_40);
  *(undefined8 *)(param_1 + 0x4930) = local_38[0];
  *(ulonglong *)(param_1 + 0x4918) = param_2;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
}



// FUNCTION 144e124f0 FUN_144e124f0 body=405 status=ok
// SIG undefined FUN_144e124f0(void)

void FUN_144e124f0(longlong *param_1,int param_2,int param_3,int param_4,int param_5,int *param_6,
                  int *param_7)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  param_4 = param_4 - param_2;
  param_5 = param_5 - param_3;
  iVar2 = param_4;
  iVar3 = param_5;
  if (*(char *)(*param_1 + 0x134) != '\0') {
    iVar2 = -param_4;
    iVar3 = -param_5;
  }
  *param_7 = 0;
  *param_6 = 0;
  if (*(char *)((longlong)param_1 + 0x48de) == '\0') {
    return;
  }
  *(int *)(param_1[1] + 0x20) =
       *(int *)(param_1[1] + 0x20) +
       ((param_5 >> 0x10) * (param_2 >> 0x10) - (param_4 >> 0x10) * (param_3 >> 0x10));
  if (iVar2 < 0) {
    if (iVar3 < 0) {
      if (-iVar2 <= iVar3 * -2) {
        if (iVar2 * -2 < -iVar3) goto LAB_144e125d3;
        uVar1 = 0xffff4cce;
        goto LAB_144e12651;
      }
    }
    else if (-iVar2 <= iVar3 * 2) {
      if (iVar2 * -2 < iVar3) goto LAB_144e12585;
      uVar1 = 0xb333;
LAB_144e12651:
      iVar2 = FUN_144b42fe0(uVar1,(int)param_1[0x921]);
      uVar1 = 0x1b333;
      goto LAB_144e12661;
    }
    *param_6 = 0;
    iVar2 = *(int *)((longlong)param_1 + 0x490c) * 2;
  }
  else {
    if (iVar3 < 0) {
      if (iVar3 * -2 < iVar2) goto LAB_144e125be;
      if (iVar2 * 2 < -iVar3) {
LAB_144e125d3:
        *param_6 = -(int)param_1[0x921];
        iVar2 = *(int *)((longlong)param_1 + 0x490c);
        goto LAB_144e1266e;
      }
      iVar2 = FUN_144b42fe0(0xffff4cce,(int)param_1[0x921]);
      uVar1 = 0x4ccd;
    }
    else {
      if (iVar3 * 2 < iVar2) {
LAB_144e125be:
        *param_6 = 0;
        *param_7 = 0;
        return;
      }
      if (iVar2 * 2 < iVar3) {
LAB_144e12585:
        *param_6 = (int)param_1[0x921];
        iVar2 = *(int *)((longlong)param_1 + 0x490c);
        goto LAB_144e1266e;
      }
      iVar2 = FUN_144b42fe0(0xb333,(int)param_1[0x921]);
      uVar1 = 0x4ccd;
    }
LAB_144e12661:
    *param_6 = iVar2;
    iVar2 = FUN_144b42fe0(uVar1,*(undefined4 *)((longlong)param_1 + 0x490c));
  }
LAB_144e1266e:
  *param_7 = iVar2;
  return;
}



// FUNCTION 144e12690 FUN_144e12690 body=163 status=ok
// SIG undefined FUN_144e12690(void)

undefined8 * FUN_144e12690(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int local_res20 [2];
  
  local_res20[0] = 0;
  puVar1 = (undefined8 *)FUN_144b560d0(param_1,0x28,local_res20);
  if (local_res20[0] == 0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
  }
  uVar2 = FUN_144b561b0(param_1,8,0,param_3,0,local_res20);
  puVar1[2] = uVar2;
  if (local_res20[0] == 0) {
    puVar1[3] = uVar2;
    *(undefined4 *)(puVar1 + 4) = param_3;
  }
  else {
    FUN_144b56350(param_1,puVar1);
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}



// FUNCTION 144e12740 FUN_144e12740 body=62 status=ok
// SIG undefined FUN_144e12740(void)

void FUN_144e12740(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  
  if (*(undefined4 **)(param_1 + 0x18) ==
      (undefined4 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)*(uint *)(param_1 + 0x20) * 8)) {
    piVar1 = *(int **)(param_1 + 8);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      *piVar1 = 0x82;
      return;
    }
  }
  else {
    **(undefined4 **)(param_1 + 0x18) = param_2;
    *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 4) = 2;
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 8;
  }
  return;
}



// FUNCTION 144e12780 FUN_144e12780 body=62 status=ok
// SIG undefined FUN_144e12780(void)

void FUN_144e12780(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  
  if (*(undefined4 **)(param_1 + 0x18) ==
      (undefined4 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)*(uint *)(param_1 + 0x20) * 8)) {
    piVar1 = *(int **)(param_1 + 8);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      *piVar1 = 0x82;
      return;
    }
  }
  else {
    **(undefined4 **)(param_1 + 0x18) = param_2;
    *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 4) = 0;
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 8;
  }
  return;
}



// FUNCTION 144e127c0 FUN_144e127c0 body=73 status=ok
// SIG undefined FUN_144e127c0(void)

undefined4 FUN_144e127c0(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    piVar2 = *(int **)(param_1 + 8);
    if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
      *piVar2 = 0xa1;
    }
    return 0;
  }
  if (*(int *)(lVar1 + -4) != 2) {
    piVar2 = *(int **)(param_1 + 8);
    if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
      *piVar2 = 0xa0;
    }
    return 0;
  }
  *(undefined4 **)(param_1 + 0x18) = (undefined4 *)(lVar1 + -8);
  return *(undefined4 *)(lVar1 + -8);
}



// FUNCTION 144e12810 FUN_144e12810 body=89 status=ok
// SIG undefined FUN_144e12810(void)

int FUN_144e12810(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    piVar3 = *(int **)(param_1 + 8);
    if ((piVar3 != (int *)0x0) && (*piVar3 == 0)) {
      *piVar3 = 0xa1;
    }
    return 0;
  }
  piVar3 = (int *)(lVar1 + -8);
  *(int **)(param_1 + 0x18) = piVar3;
  if (*(int *)(lVar1 + -4) == 1) {
    iVar2 = *piVar3;
    if (iVar2 < 0) {
      return -(0x2000 - iVar2 >> 0xe);
    }
    iVar2 = iVar2 + 0x2000 >> 0xe;
  }
  else {
    iVar2 = *piVar3;
    if (*(int *)(lVar1 + -4) == 2) {
      return iVar2 << 0x10;
    }
  }
  return iVar2;
}



// FUNCTION 144e12870 FUN_144e12870 body=98 status=ok
// SIG undefined FUN_144e12870(void)

int FUN_144e12870(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  if ((uint)(*(longlong *)(param_1 + 0x18) - lVar2 >> 3) <= param_2) {
    piVar3 = *(int **)(param_1 + 8);
    if ((piVar3 != (int *)0x0) && (*piVar3 == 0)) {
      *piVar3 = 0x82;
    }
    return 0;
  }
  piVar3 = (int *)(lVar2 + (ulonglong)param_2 * 8);
  iVar1 = *(int *)(lVar2 + 4 + (ulonglong)param_2 * 8);
  if (iVar1 == 1) {
    iVar1 = *piVar3;
    if (iVar1 < 0) {
      return -(0x2000 - iVar1 >> 0xe);
    }
    iVar4 = iVar1 + 0x2000 >> 0xe;
  }
  else {
    iVar4 = *piVar3;
    if (iVar1 == 2) {
      return iVar4 << 0x10;
    }
  }
  return iVar4;
}



// FUNCTION 144e128e0 FUN_144e128e0 body=70 status=ok
// SIG undefined FUN_144e128e0(void)

void FUN_144e128e0(longlong param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  
  if ((uint)(*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10) >> 3) < param_2) {
    piVar1 = *(int **)(param_1 + 8);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      *piVar1 = 0x82;
      return;
    }
  }
  else {
    *(undefined4 *)((ulonglong)param_2 * 8 + *(longlong *)(param_1 + 0x10)) = param_3;
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 4 + (ulonglong)param_2 * 8) = 0;
  }
  return;
}



// FUNCTION 144e12930 FUN_144e12930 body=248 status=ok
// SIG undefined FUN_144e12930(void)

void FUN_144e12930(longlong param_1,uint param_2,int param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar5 = (ulonglong)param_2;
  if (1 < (int)param_2) {
    if ((uint)(*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10) >> 3) < param_2) {
      piVar1 = *(int **)(param_1 + 8);
      if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
        *piVar1 = 0x82;
        return;
      }
    }
    else {
      if (param_3 < 0) {
        param_3 = -(-param_3 % (int)param_2);
      }
      else {
        param_3 = param_3 % (int)param_2;
      }
      if (param_3 != 0) {
        iVar6 = -1;
        iVar7 = -1;
        if (0 < (int)param_2) {
          uVar2 = 0x200000000;
          lVar4 = -8;
          do {
            uVar3 = uVar2;
            if (iVar6 == iVar7) {
              iVar7 = iVar6 + 1;
              lVar4 = lVar4 + 8;
              uVar3 = *(undefined8 *)(lVar4 + *(longlong *)(param_1 + 0x10));
              iVar6 = iVar7;
            }
            iVar7 = iVar7 + param_3;
            if (iVar7 < (int)param_2) {
              if (iVar7 < 0) {
                iVar7 = iVar7 + param_2;
              }
            }
            else {
              iVar7 = iVar7 - param_2;
            }
            uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar7 * 8);
            *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar7 * 8) = uVar3;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
      }
    }
  }
  return;
}



// FUNCTION 144e12a30 FUN_144e12a30 body=126 status=ok
// SIG undefined FUN_144e12a30(void)

void FUN_144e12a30(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (param_3 < 0x61) {
    param_1[2] = param_3;
    uVar4 = param_3 + 7 >> 3;
    param_1[3] = uVar4;
    *(undefined2 *)(param_1 + 1) = 0x101;
    if ((param_3 != 0) && (uVar5 = 0, uVar4 != 0)) {
      do {
        puVar2 = (undefined1 *)param_2[3];
        if (puVar2 < (undefined1 *)param_2[2]) {
          uVar3 = *puVar2;
          param_2[3] = puVar2 + 1;
        }
        else {
          piVar1 = (int *)*param_2;
          if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
            *piVar1 = 0x55;
          }
          uVar3 = 0;
        }
        *(undefined1 *)((longlong)param_1 + uVar5 + 0x20) = uVar3;
        uVar5 = uVar5 + 1;
      } while (uVar5 < (ulonglong)param_1[3]);
    }
  }
  else {
    piVar1 = (int *)*param_1;
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      *piVar1 = 0x12;
      return;
    }
  }
  return;
}



// FUNCTION 144e12ab0 FUN_144e12ab0 body=579 status=ok
// SIG undefined FUN_144e12ab0(void)

void FUN_144e12ab0(longlong param_1,longlong param_2,longlong param_3,int *param_4,char *param_5,
                  int param_6)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 local_48 [4];
  int local_44;
  int local_40;
  undefined8 local_3c;
  
  piVar1 = *(int **)(param_2 + 0x10);
  uVar10 = *(longlong *)(param_2 + 0x18) - (longlong)piVar1 >> 3;
  bVar6 = (byte)uVar10 & 1;
  uVar9 = (uint)uVar10;
  iVar7 = 0;
  if (((*(char *)(param_1 + 0xc) == '\0') && ((uVar10 & 1) != 0)) && (*param_5 == '\0')) {
    if (uVar9 == 0) {
      piVar1 = *(int **)(param_2 + 8);
      iVar4 = iVar7;
      if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
        *piVar1 = 0x82;
      }
    }
    else if (piVar1[1] == 1) {
      iVar4 = *piVar1;
      if (iVar4 < 0) {
        iVar4 = -(0x2000 - iVar4 >> 0xe);
      }
      else {
        iVar4 = iVar4 + 0x2000 >> 0xe;
      }
    }
    else {
      iVar4 = *piVar1;
      if (piVar1[1] == 2) {
        iVar4 = *piVar1 << 0x10;
      }
    }
    *param_4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x328) + 0x224) * 0x10000 +
               iVar4;
  }
  if (*(char *)(*(longlong *)(param_1 + 0xf0) + 0x340) == '\0') {
    uVar10 = (ulonglong)bVar6;
    if (bVar6 < uVar9) {
      uVar8 = bVar6 + 1;
      do {
        lVar2 = *(longlong *)(param_2 + 0x10);
        if ((uint)uVar10 < (uint)(*(longlong *)(param_2 + 0x18) - lVar2 >> 3)) {
          iVar4 = *(int *)(lVar2 + 4 + uVar10 * 8);
          piVar1 = (int *)(lVar2 + uVar10 * 8);
          if (iVar4 == 1) {
            iVar4 = *piVar1;
            if (iVar4 < 0) {
              local_44 = -(0x2000 - iVar4 >> 0xe);
            }
            else {
              local_44 = iVar4 + 0x2000 >> 0xe;
            }
          }
          else {
            local_44 = *piVar1;
            if (iVar4 == 2) {
              local_44 = local_44 << 0x10;
            }
          }
        }
        else {
          piVar1 = *(int **)(param_2 + 8);
          local_44 = iVar7;
          if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
            *piVar1 = 0x82;
          }
        }
        lVar2 = *(longlong *)(param_2 + 0x10);
        local_44 = param_6 + local_44;
        if (uVar8 < (uint)(*(longlong *)(param_2 + 0x18) - lVar2 >> 3)) {
          iVar4 = *(int *)(lVar2 + 4 + (ulonglong)uVar8 * 8);
          piVar1 = (int *)(lVar2 + (ulonglong)uVar8 * 8);
          if (iVar4 == 1) {
            iVar4 = *piVar1;
            if (iVar4 < 0) {
              param_6 = -(0x2000 - iVar4 >> 0xe);
            }
            else {
              param_6 = iVar4 + 0x2000 >> 0xe;
            }
          }
          else {
            param_6 = *piVar1;
            if (iVar4 == 2) {
              param_6 = param_6 << 0x10;
            }
          }
        }
        else {
          piVar1 = *(int **)(param_2 + 8);
          param_6 = iVar7;
          if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
            *piVar1 = 0x82;
          }
        }
        param_6 = local_44 + param_6;
        local_48[0] = 0;
        local_3c = 0;
        local_40 = param_6;
        if ((*(longlong *)(param_3 + 0x28) != *(longlong *)(param_3 + 0x18)) ||
           (cVar3 = FUN_144e0c9a0(param_3,*(longlong *)(param_3 + 0x20) +
                                          *(longlong *)(param_3 + 0x18)), cVar3 != '\0')) {
          memcpy((void *)(*(longlong *)(param_3 + 0x28) * *(size_t *)(param_3 + 0x10) +
                         *(longlong *)(param_3 + 0x38)),local_48,*(size_t *)(param_3 + 0x10));
          *(longlong *)(param_3 + 0x28) = *(longlong *)(param_3 + 0x28) + 1;
        }
        uVar5 = (uint)uVar10 + 2;
        uVar10 = (ulonglong)uVar5;
        uVar8 = uVar8 + 2;
      } while (uVar5 < uVar9);
    }
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_2 + 0x10);
  }
  *param_5 = '\x01';
  return;
}



// FUNCTION 144e12d00 FUN_144e12d00 body=851 status=ok
// SIG undefined FUN_144e12d00(void)

void FUN_144e12d00(longlong param_1,int *param_2,int *param_3,undefined8 param_4,longlong param_5,
                  char param_6)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_98;
  int local_90 [6];
  undefined4 local_78 [4];
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar9 = 0;
  iVar11 = 0;
  local_90[0] = *param_2;
  piVar7 = local_90 + 2;
  cVar1 = *(char *)(param_5 + 9);
  local_90[1] = *param_3;
  uVar10 = uVar9;
  do {
    iVar4 = piVar7[-2];
    *piVar7 = iVar4;
    if (*(char *)(uVar10 + param_5) != '\0') {
      lVar12 = *(longlong *)(param_1 + 0x10);
      if ((uint)uVar9 < (uint)(*(longlong *)(param_1 + 0x18) - lVar12 >> 3)) {
        iVar5 = *(int *)(lVar12 + 4 + uVar9 * 8);
        piVar2 = (int *)(lVar12 + uVar9 * 8);
        if (iVar5 == 1) {
          iVar5 = *piVar2;
          if (iVar5 < 0) {
            iVar3 = -(0x2000 - iVar5 >> 0xe);
          }
          else {
            iVar3 = iVar5 + 0x2000 >> 0xe;
          }
        }
        else {
          iVar3 = *piVar2;
          if (iVar5 == 2) {
            iVar3 = iVar3 << 0x10;
          }
        }
      }
      else {
        piVar2 = *(int **)(param_1 + 8);
        iVar3 = iVar11;
        if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
          *piVar2 = 0x82;
        }
      }
      *piVar7 = iVar3 + iVar4;
      uVar9 = (ulonglong)((uint)uVar9 + 1);
    }
    uVar8 = (uint)uVar9;
    uVar10 = uVar10 + 1;
    piVar7 = piVar7 + 1;
  } while ((longlong)uVar10 < (longlong)((ulonglong)(cVar1 != '\0') + 9));
  if (cVar1 == '\0') {
    local_64 = *param_3;
  }
  if (param_6 == '\0') {
    if (*(char *)(param_5 + 10) == '\0') {
      local_68 = *param_2;
    }
    else {
      lVar12 = *(longlong *)(param_1 + 0x10);
      if (uVar8 < (uint)(*(longlong *)(param_1 + 0x18) - lVar12 >> 3)) {
        iVar4 = *(int *)(lVar12 + 4 + uVar9 * 8);
        piVar7 = (int *)(lVar12 + uVar9 * 8);
        if (iVar4 == 1) {
          iVar4 = *piVar7;
          if (-1 < iVar4) {
            iVar5 = iVar4 + 0x2000 >> 0xe;
            goto LAB_144e12fcc;
          }
          local_68 = local_68 - (0x2000 - iVar4 >> 0xe);
          uVar8 = uVar8 + 1;
        }
        else {
          iVar5 = *piVar7;
          if (iVar4 == 2) {
            local_68 = local_68 + iVar5 * 0x10000;
            uVar8 = uVar8 + 1;
          }
          else {
LAB_144e12fcc:
            local_68 = local_68 + iVar5;
            uVar8 = uVar8 + 1;
          }
        }
      }
      else {
        piVar7 = *(int **)(param_1 + 8);
        if ((piVar7 != (int *)0x0) && (*piVar7 == 0)) {
          *piVar7 = 0x82;
        }
        uVar8 = uVar8 + 1;
      }
    }
    local_60 = local_68;
    if (*(char *)(param_5 + 0xb) != '\0') {
      lVar12 = *(longlong *)(param_1 + 0x10);
      if (uVar8 < (uint)(*(longlong *)(param_1 + 0x18) - lVar12 >> 3)) {
        iVar4 = *(int *)(lVar12 + 4 + (ulonglong)uVar8 * 8);
        piVar7 = (int *)(lVar12 + (ulonglong)uVar8 * 8);
        if (iVar4 == 1) {
          iVar11 = *piVar7;
          if (iVar11 < 0) {
            iVar11 = local_64 - (0x2000 - iVar11 >> 0xe);
            goto LAB_144e12ebc;
          }
          iVar11 = iVar11 + 0x2000 >> 0xe;
        }
        else {
          iVar11 = *piVar7;
          if (iVar4 == 2) {
            iVar11 = local_64 + iVar11 * 0x10000;
            goto LAB_144e12ebc;
          }
        }
      }
      else {
        piVar7 = *(int **)(param_1 + 8);
        if ((piVar7 != (int *)0x0) && (*piVar7 == 0)) {
          *piVar7 = 0x82;
          iVar11 = local_64;
          goto LAB_144e12ebc;
        }
      }
      iVar11 = local_64 + iVar11;
      goto LAB_144e12ebc;
    }
  }
  else {
    iVar4 = local_68 - *param_2;
    if (iVar4 < 0) {
      iVar4 = *param_2 - local_68;
    }
    iVar5 = local_64 - *param_3;
    if (iVar5 < 0) {
      iVar5 = *param_3 - local_64;
    }
    lVar12 = *(longlong *)(param_1 + 0x10);
    if (uVar8 < (uint)(*(longlong *)(param_1 + 0x18) - lVar12 >> 3)) {
      iVar3 = *(int *)(lVar12 + 4 + uVar9 * 8);
      piVar7 = (int *)(lVar12 + uVar9 * 8);
      if (iVar3 == 1) {
        iVar11 = *piVar7;
        if (iVar11 < 0) {
          iVar11 = -(0x2000 - iVar11 >> 0xe);
        }
        else {
          iVar11 = iVar11 + 0x2000 >> 0xe;
        }
      }
      else {
        iVar11 = *piVar7;
        if (iVar3 == 2) {
          iVar11 = iVar11 << 0x10;
        }
      }
    }
    else {
      piVar7 = *(int **)(param_1 + 8);
      if ((piVar7 != (int *)0x0) && (*piVar7 == 0)) {
        *piVar7 = 0x82;
        iVar11 = 0;
      }
    }
    if (iVar4 <= iVar5) {
      local_60 = *param_2;
      iVar11 = local_64 + iVar11;
      goto LAB_144e12ebc;
    }
    local_68 = local_68 + iVar11;
    local_60 = local_68;
  }
  iVar11 = *param_3;
  local_60 = local_68;
LAB_144e12ebc:
  iVar4 = local_60;
  puVar6 = local_78;
  local_5c = iVar11;
  lVar12 = 2;
  local_98 = param_4;
  do {
    local_a8 = puVar6[1];
    local_b0 = *puVar6;
    local_b8 = puVar6[-1];
    FUN_144e0dcc0(param_4,puVar6[-4],puVar6[-3],puVar6[-2]);
    puVar6 = puVar6 + 6;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
  *param_2 = iVar4;
  *param_3 = iVar11;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_d8);
}



// FUNCTION 144e13070 FUN_144e13070 body=532 status=ok
// SIG undefined FUN_144e13070(void)

void FUN_144e13070(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  
  iVar4 = param_3 * *(int *)(param_1 + 0x20);
  uVar11 = (int)(*(longlong *)(param_2 + 0x18) - *(longlong *)(param_2 + 0x10) >> 3) - iVar4;
  uVar7 = (ulonglong)(uVar11 + param_3);
  if (param_3 != 0) {
    uVar9 = (ulonglong)param_3;
    do {
      uVar12 = (ulonglong)uVar11;
      lVar1 = *(longlong *)(param_2 + 0x10);
      puVar10 = *(undefined4 **)(param_1 + 0x28);
      if (uVar11 < (uint)(*(longlong *)(param_2 + 0x18) - lVar1 >> 3)) {
        iVar3 = *(int *)(lVar1 + 4 + uVar12 * 8);
        piVar2 = (int *)(lVar1 + uVar12 * 8);
        if (iVar3 == 1) {
          iVar3 = *piVar2;
          if (iVar3 < 0) {
            iVar8 = -(0x2000 - iVar3 >> 0xe);
          }
          else {
            iVar8 = iVar3 + 0x2000 >> 0xe;
          }
        }
        else {
          iVar8 = *piVar2;
          if (iVar3 == 2) {
            iVar8 = iVar8 << 0x10;
          }
        }
      }
      else {
        piVar2 = *(int **)(param_2 + 8);
        if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
          *piVar2 = 0x82;
        }
        iVar8 = 0;
      }
      if (1 < *(uint *)(param_1 + 0x20)) {
        uVar6 = 1;
        do {
          puVar10 = puVar10 + 1;
          lVar1 = *(longlong *)(param_2 + 0x10);
          if ((uint)uVar7 < (uint)(*(longlong *)(param_2 + 0x18) - lVar1 >> 3)) {
            iVar3 = *(int *)(lVar1 + 4 + uVar7 * 8);
            piVar2 = (int *)(lVar1 + uVar7 * 8);
            if (iVar3 == 1) {
              iVar3 = *piVar2;
              if (iVar3 < 0) {
                iVar5 = -(0x2000 - iVar3 >> 0xe);
              }
              else {
                iVar5 = iVar3 + 0x2000 >> 0xe;
              }
            }
            else {
              iVar5 = *piVar2;
              if (iVar3 == 2) {
                iVar5 = iVar5 << 0x10;
              }
            }
          }
          else {
            piVar2 = *(int **)(param_2 + 8);
            if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
              *piVar2 = 0x82;
            }
            iVar5 = 0;
          }
          iVar3 = FUN_144b42fe0(*puVar10,iVar5);
          iVar8 = iVar8 + iVar3;
          uVar7 = (ulonglong)((uint)uVar7 + 1);
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(uint *)(param_1 + 0x20));
      }
      if ((uint)(*(longlong *)(param_2 + 0x18) - *(longlong *)(param_2 + 0x10) >> 3) < uVar11) {
        piVar2 = *(int **)(param_2 + 8);
        if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
          *piVar2 = 0x82;
        }
      }
      else {
        *(int *)(uVar12 * 8 + *(longlong *)(param_2 + 0x10)) = iVar8;
        *(undefined4 *)(uVar12 * 8 + 4 + *(longlong *)(param_2 + 0x10)) = 0;
      }
      uVar11 = uVar11 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  param_3 = iVar4 - param_3;
  if ((uint)(*(longlong *)(param_2 + 0x18) - *(longlong *)(param_2 + 0x10) >> 3) < param_3) {
    piVar2 = *(int **)(param_2 + 8);
    if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
      *piVar2 = 0xa1;
      return;
    }
  }
  else {
    *(ulonglong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + (ulonglong)param_3 * -8;
  }
  return;
}



// FUNCTION 144e13310 FUN_144e13310 body=220 status=ok
// SIG undefined FUN_144e13310(void)

int FUN_144e13310(longlong param_1,uint *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = 0;
  uVar6 = *(uint *)(param_1 + 0x18);
  uVar5 = *param_2 + 1;
  uVar4 = 0;
  if (uVar6 != 0) {
    do {
      uVar3 = (uVar6 - (int)uVar4 >> 1) + (int)uVar4;
      uVar2 = *(uint *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar3 * 8);
      lVar1 = *(longlong *)(param_1 + 0x20) + (ulonglong)uVar3 * 8;
      if (uVar2 == uVar5) {
        iVar7 = *(int *)(lVar1 + 4);
        *param_2 = uVar5;
        return iVar7;
      }
      uVar2 = uVar2 & 0x7fffffff;
      if (uVar2 == uVar5) {
        iVar7 = *(int *)(lVar1 + 4);
      }
      if (uVar2 < uVar5) {
        uVar4 = (ulonglong)(uVar3 + 1);
        uVar3 = uVar6;
      }
      uVar6 = uVar3;
    } while ((uint)uVar4 < uVar6);
    if (iVar7 != 0) {
      *param_2 = uVar5;
      return iVar7;
    }
  }
  if (*(uint *)(param_1 + 0x18) <= (uint)uVar4) {
    *param_2 = 0;
    return 0;
  }
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x20) + 4 + uVar4 * 8);
  *param_2 = *(uint *)(*(longlong *)(param_1 + 0x20) + uVar4 * 8) & 0x7fffffff;
  return iVar7;
}



// FUNCTION 144e13460 FUN_144e13460 body=284 status=ok
// SIG undefined FUN_144e13460(void)

ulonglong FUN_144e13460(char *param_1)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  
  cVar1 = *param_1;
  pcVar3 = param_1;
  if (cVar1 == 'u') {
    pbVar9 = (byte *)(param_1 + 1);
    uVar6 = 0;
    if ((*pbVar9 == 0x6e) && (param_1[2] == 'i')) {
      pbVar7 = (byte *)(param_1 + 3);
      iVar8 = 4;
      uVar5 = 0;
      do {
        bVar2 = *pbVar7;
        uVar4 = bVar2 - 0x30;
        if (9 < uVar4) {
          if (5 < bVar2 - 0x41) break;
          uVar4 = bVar2 - 0x37;
        }
        if (0xf < uVar4) break;
        iVar8 = iVar8 + -1;
        uVar5 = (ulonglong)((int)uVar5 * 0x10 + uVar4);
        pbVar7 = pbVar7 + 1;
      } while (0 < iVar8);
      if (iVar8 == 0) {
        if (*pbVar7 == 0) {
          return uVar5;
        }
        if (*pbVar7 == 0x2e) {
          return (ulonglong)((uint)uVar5 | 0x80000000);
        }
      }
    }
    iVar8 = 6;
    do {
      bVar2 = *pbVar9;
      uVar4 = bVar2 - 0x30;
      if (9 < uVar4) {
        if (5 < bVar2 - 0x41) break;
        uVar4 = bVar2 - 0x37;
      }
      if (0xf < uVar4) break;
      iVar8 = iVar8 + -1;
      uVar6 = uVar6 * 0x10 + uVar4;
      pbVar9 = pbVar9 + 1;
    } while (0 < iVar8);
    if (iVar8 < 3) {
      if (*pbVar9 != 0) {
        if (*pbVar9 != 0x2e) goto joined_r0x000144e13543;
        uVar6 = uVar6 | 0x80000000;
      }
      return (ulonglong)uVar6;
    }
  }
joined_r0x000144e13543:
  while( true ) {
    if (cVar1 == '\0') {
      uVar5 = FUN_144e13890(param_1);
      return uVar5;
    }
    if ((cVar1 == '.') && (param_1 < pcVar3)) break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 1;
  }
  uVar6 = FUN_144e13890(param_1);
  return (ulonglong)(uVar6 | 0x80000000);
}



// FUNCTION 144e13580 FUN_144e13580 body=752 status=ok
// SIG undefined FUN_144e13580(void)

void FUN_144e13580(undefined8 param_1,longlong param_2,uint param_3,code *param_4,code *param_5,
                  undefined8 param_6)

{
  char cVar1;
  char cVar2;
  code *pcVar3;
  uint *puVar4;
  longlong lVar5;
  char *pcVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  int *piVar14;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  int *local_d0;
  int local_c8;
  int local_c4;
  undefined8 local_c0;
  code *local_b8;
  longlong local_b0;
  uint local_a8 [14];
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c4 = param_3 + 10;
  uVar11 = 0;
  local_d0 = &local_c8;
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  local_a8[4] = 0;
  local_a8[5] = 0;
  local_a8[6] = 0;
  local_a8[7] = 0;
  local_a8[8] = 0;
  local_a8[9] = 0;
  local_d8 = 0;
  local_c0 = param_1;
  local_b8 = param_4;
  local_b0 = param_2;
  puVar4 = (uint *)FUN_144b561b0(param_1,8,0);
  pcVar3 = local_b8;
  *(uint **)(param_2 + 0x20) = puVar4;
  if (local_c8 == 0) {
    if (param_3 != 0) {
      do {
        lVar5 = (*pcVar3)(param_6,uVar11);
        if (lVar5 != 0) {
          uVar10 = 0;
          piVar14 = &DAT_149a1d408;
          do {
            pcVar6 = "Delta" + *piVar14;
            lVar12 = lVar5 - (longlong)pcVar6;
            do {
              cVar1 = *pcVar6;
              cVar2 = pcVar6[lVar12];
              if (cVar1 != cVar2) break;
              pcVar6 = pcVar6 + 1;
            } while (cVar2 != '\0');
            if (cVar1 == cVar2) {
              if (local_a8[uVar10] == 0) {
                local_a8[uVar10] = 1;
                local_a8[uVar10 + 10] = uVar11;
              }
              break;
            }
            uVar13 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar13;
            piVar14 = piVar14 + 1;
          } while (uVar13 < 10);
          uVar13 = FUN_144e13460();
          if ((uVar13 & 0x7fffffff) != 0) {
            uVar10 = 0;
            puVar7 = &DAT_149a0e138;
            do {
              if (uVar13 == *puVar7) {
                local_a8[uVar10] = 2;
                break;
              }
              uVar9 = (int)uVar10 + 1;
              uVar10 = (ulonglong)uVar9;
              puVar7 = puVar7 + 1;
            } while (uVar9 < 10);
            *puVar4 = uVar13;
            puVar4[1] = uVar11;
            puVar4 = puVar4 + 2;
          }
          if (param_5 != (code *)0x0) {
            (*param_5)(param_6,lVar5);
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < param_3);
      if (local_a8[0] == 1) {
        puVar4[1] = local_a8[10];
        *puVar4 = 0x394;
        puVar4 = puVar4 + 2;
      }
      if (local_a8[1] == 1) {
        *puVar4 = 0x3a9;
        puVar4[1] = local_a8[0xb];
        puVar4 = puVar4 + 2;
      }
      if (local_a8[2] == 1) {
        *puVar4 = 0x2215;
        puVar4[1] = local_a8[0xc];
        puVar4 = puVar4 + 2;
      }
      if (local_a8[3] == 1) {
        *puVar4 = 0xad;
        puVar4[1] = local_a8[0xd];
        puVar4 = puVar4 + 2;
      }
      if (local_a8[4] == 1) {
        *puVar4 = 0x2c9;
        puVar4[1] = local_70;
        puVar4 = puVar4 + 2;
      }
      if (local_a8[5] == 1) {
        *puVar4 = 0x3bc;
        puVar4[1] = local_6c;
        puVar4 = puVar4 + 2;
      }
      if (local_a8[6] == 1) {
        *puVar4 = 0x2219;
        puVar4[1] = local_68;
        puVar4 = puVar4 + 2;
      }
      if (local_a8[7] == 1) {
        *puVar4 = 0xa0;
        puVar4[1] = local_64;
        puVar4 = puVar4 + 2;
      }
      if (local_a8[8] == 1) {
        *puVar4 = 0x21a;
        puVar4[1] = local_60;
        puVar4 = puVar4 + 2;
      }
      param_1 = local_c0;
      param_2 = local_b0;
      if (local_a8[9] == 1) {
        *puVar4 = 0x21b;
        puVar4[1] = local_5c;
        puVar4 = puVar4 + 2;
      }
    }
    lVar5 = *(longlong *)(param_2 + 0x20);
    uVar10 = (longlong)puVar4 - lVar5 >> 3;
    uVar11 = (uint)uVar10;
    if (uVar11 == 0) {
      FUN_144b56350(param_1,lVar5);
      *(undefined8 *)(param_2 + 0x20) = 0;
    }
    else {
      if (uVar11 < param_3 >> 1) {
        local_d0 = &local_c8;
        local_d8 = lVar5;
        uVar8 = FUN_144b561b0(param_1,8,local_c4,uVar10 & 0xffffffff);
        *(undefined8 *)(param_2 + 0x20) = uVar8;
        local_c8 = 0;
      }
      qsort(*(void **)(param_2 + 0x20),uVar10 & 0xffffffff,8,(_PtFuncCompare *)&LAB_144e139b0);
    }
    *(uint *)(param_2 + 0x18) = uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_f8);
}



// FUNCTION 144e13890 FUN_144e13890 body=286 status=ok
// SIG undefined FUN_144e13890(void)

undefined2 FUN_144e13890(char *param_1,char *param_2)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  if (param_2 <= param_1) {
    return 0;
  }
  iVar4 = 0;
  iVar6 = 0x34;
  while( true ) {
    iVar2 = iVar6 + iVar4 >> 1;
    pbVar1 = &DAT_149a0f8f0 + CONCAT11((&DAT_149a0f8f2)[iVar2 * 2],(&UNK_149a0f8f3)[iVar2 * 2]);
    if ((*pbVar1 & 0x7f) == (int)*param_1) break;
    if ((int)(*pbVar1 & 0x7f) < (int)*param_1) {
      iVar4 = iVar2 + 1;
      iVar2 = iVar6;
    }
    iVar6 = iVar2;
    if (iVar6 <= iVar4) {
      return 0;
    }
  }
  while (param_1 = param_1 + 1, param_1 < param_2) {
    if ((char)*pbVar1 < '\0') {
      pbVar3 = pbVar1 + 1;
      pbVar1 = pbVar1 + 1;
      if ((int)*param_1 != (*pbVar3 & 0x7f)) {
        return 0;
      }
    }
    else {
      uVar5 = pbVar1[1] & 0x7f;
      pbVar3 = pbVar1 + 3;
      if (-1 < (char)pbVar1[1]) {
        pbVar3 = pbVar1 + 1;
      }
      pbVar3 = pbVar3 + 1;
      while( true ) {
        if ((int)uVar5 < 1) {
          return 0;
        }
        pbVar1 = &DAT_149a0f8f0 + CONCAT11(*pbVar3,pbVar3[1]);
        if ((int)*param_1 == (*pbVar1 & 0x7f)) break;
        uVar5 = uVar5 - 1;
        pbVar3 = pbVar3 + 2;
      }
    }
  }
  if ((char)*pbVar1 < '\0') {
    return 0;
  }
  if (-1 < (char)pbVar1[1]) {
    return 0;
  }
  return CONCAT11(pbVar1[2],pbVar1[3]);
}



// FUNCTION 144e13a00 FUN_144e13a00 body=271 status=ok
// SIG undefined FUN_144e13a00(void)

undefined8 FUN_144e13a00(longlong param_1)

{
  undefined8 *_Dst;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _Dst = (undefined8 *)(param_1 + 0x18);
  memset(_Dst,0,0x78);
  *_Dst = uVar1;
  *(code **)(param_1 + 0x90) = FUN_144e16360;
  *(code **)(param_1 + 0x98) = FUN_144e13b40;
  *(undefined1 **)(param_1 + 0xa0) = &LAB_144e16320;
  *(undefined1 **)(param_1 + 0xb0) = &LAB_144e17710;
  *(code **)(param_1 + 0xc0) = FUN_144e17730;
  *(code **)(param_1 + 200) = FUN_144e17390;
  *(code **)(param_1 + 0xd0) = FUN_144e174b0;
  *(code **)(param_1 + 0xb8) = FUN_144e17690;
  *(code **)(param_1 + 0xd8) = FUN_144e13d70;
  *(undefined8 **)(param_1 + 0xa8) = _Dst;
  *(undefined1 **)(param_1 + 0xe8) = &LAB_144e17790;
  *(code **)(param_1 + 0xf8) = FUN_144e177b0;
  *(code **)(param_1 + 0x100) = FUN_144e17550;
  *(code **)(param_1 + 0x108) = FUN_144e175f0;
  *(code **)(param_1 + 0xf0) = FUN_144e17690;
  *(code **)(param_1 + 0x110) = FUN_144e13d70;
  *(undefined8 **)(param_1 + 0xe0) = _Dst;
  return 0;
}



// FUNCTION 144e13b40 FUN_144e13b40 body=136 status=ok
// SIG undefined FUN_144e13b40(void)

void FUN_144e13b40(longlong param_1,int param_2,int param_3,int param_4,int param_5)

{
  if ((param_2 != *(int *)(param_1 + 0xcc)) || (param_4 != *(int *)(param_1 + 0xd0))) {
    *(int *)(param_1 + 0xcc) = param_2;
    *(int *)(param_1 + 0xd0) = param_4;
    FUN_144e15dc0(param_1,0);
  }
  if ((param_3 != *(int *)(param_1 + 0x198)) || (param_5 != *(int *)(param_1 + 0x19c))) {
    *(int *)(param_1 + 0x198) = param_3;
    *(int *)(param_1 + 0x19c) = param_5;
    FUN_144e15dc0(param_1,1);
    FUN_144e16120(param_1 + 0x1a0,param_3,param_5);
  }
  return;
}



// FUNCTION 144e13bd0 FUN_144e13bd0 body=258 status=ok
// SIG undefined FUN_144e13bd0(void)

void FUN_144e13bd0(int *param_1,int param_2,int param_3,uint *param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  *param_4 = 0;
  piVar2 = param_1 + 1;
  iVar4 = *param_1;
  iVar1 = param_1[0x208];
  if (iVar4 != 0) {
    while (-param_1[0x207] <= param_2 - piVar2[3]) {
      if (param_2 <= piVar2[2] + param_1[0x207]) {
        if (((char)iVar1 != '\0') || (param_2 - piVar2[3] <= param_1[0x206])) {
          *param_4 = 1;
          param_4[1] = piVar2[4];
        }
        break;
      }
      piVar2 = piVar2 + 8;
      iVar4 = iVar4 + -1;
      if (iVar4 == 0) break;
    }
  }
  uVar3 = param_1[0x81];
  piVar2 = param_1 + (ulonglong)uVar3 * 8 + 0x7a;
  if (uVar3 != 0) {
    while (-param_1[0x207] <= piVar2[2] - param_3) {
      if (piVar2[3] - param_1[0x207] <= param_3) {
        if (((char)iVar1 == '\0') && (param_1[0x206] <= piVar2[2] - param_3)) {
          return;
        }
        *param_4 = *param_4 | 2;
        param_4[2] = piVar2[4];
        return;
      }
      piVar2 = piVar2 + -8;
      uVar3 = uVar3 - 1;
      if (uVar3 == 0) {
        return;
      }
    }
  }
  return;
}



// FUNCTION 144e13ce0 FUN_144e13ce0 body=133 status=ok
// SIG undefined FUN_144e13ce0(void)

void FUN_144e13ce0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_144e16690(param_1 + 7,uVar1);
  FUN_144e16690(param_1 + 5,uVar1);
  FUN_144b56350(uVar1,param_1[4]);
  param_1[4] = 0;
  param_1[3] = 0;
  FUN_144e16690(param_1 + 0xd,uVar1);
  FUN_144e16690(param_1 + 0xb,uVar1);
  FUN_144b56350(uVar1,param_1[10]);
  param_1[10] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}



// FUNCTION 144e13d70 FUN_144e13d70 body=700 status=ok
// SIG undefined FUN_144e13d70(void)

void FUN_144e13d70(undefined8 param_1,short *param_2,longlong param_3,int param_4)

{
  byte *pbVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  int local_138;
  int local_134;
  uint local_128 [2];
  longlong local_120;
  longlong local_108;
  longlong local_100;
  undefined1 local_f8 [156];
  undefined2 local_5c;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((param_2[1] != 0) && (*param_2 != 0)) {
    local_134 = FUN_144e14e30(local_128,param_2,param_1,param_3);
    if (local_134 == 0) {
      iVar14 = *(int *)(local_100 + 0xcc);
      bVar5 = false;
      uVar2 = *(undefined4 *)(local_100 + 0x198);
      local_138 = iVar14;
      uVar7 = FUN_144b42fe0(*(undefined4 *)(param_3 + 0x1a4),uVar2);
      uVar13 = uVar7 + 0x20 & 0xffffffc0;
      if ((uVar13 != 0) && (uVar7 != uVar13)) {
        bVar5 = true;
        uVar8 = FUN_144b55580(uVar2,uVar13,uVar7);
        if ((int)uVar13 < (int)uVar7) {
          iVar11 = (int)((ulonglong)((longlong)iVar14 * -0x51eb851f) >> 0x20);
          iVar14 = iVar14 + ((iVar11 >> 4) - (iVar11 >> 0x1f));
        }
        local_148 = 0;
        FUN_144e13b40(local_100,iVar14,uVar8,0);
      }
      iVar14 = local_138;
      local_5c = 0x101;
      local_5a = param_4 - 2U < 2;
      local_59 = (param_4 - 2U & 0xfffffffd) == 0;
      local_58 = param_4 != 1;
      uVar12 = 0;
      do {
        puVar10 = *(undefined4 **)(local_108 + 8);
        iVar11 = (int)uVar12;
        if (local_128[0] != 0) {
          puVar9 = (undefined4 *)(local_120 + 0x30);
          uVar7 = local_128[0];
          do {
            puVar9[-5] = 0;
            *(undefined8 *)(puVar9 + -2) = 0;
            if (iVar11 == 0) {
              *puVar9 = *puVar10;
              uVar8 = puVar10[1];
            }
            else {
              *puVar9 = puVar10[1];
              uVar8 = *puVar10;
            }
            puVar9[1] = uVar8;
            puVar10 = puVar10 + 2;
            puVar9 = puVar9 + 0x10;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        FUN_144e151e0(local_128);
        FUN_144e147c0(local_f8 + (longlong)iVar11 * 0x48,local_100,uVar12,local_128);
        FUN_144e15560(local_128,uVar12);
        if (iVar11 == 1) {
          FUN_144e15710(param_3 + 0x1a0,local_128);
        }
        FUN_144e15840(local_128,uVar12);
        FUN_144e15900(local_128,uVar12);
        FUN_144e15b80(local_128,uVar12);
        lVar3 = *(longlong *)(local_108 + 8);
        lVar4 = *(longlong *)(local_108 + 0x10);
        if (local_128[0] != 0) {
          puVar10 = (undefined4 *)(local_120 + 0x38);
          uVar12 = 0;
          do {
            if (iVar11 == 0) {
              *(undefined4 *)(lVar3 + uVar12 * 8) = *puVar10;
            }
            else {
              *(undefined4 *)(lVar3 + 4 + uVar12 * 8) = *puVar10;
            }
            if ((*(byte *)(puVar10 + -7) & 0x10) != 0) {
              bVar6 = 0x40;
              if (iVar11 == 0) {
                bVar6 = 0x20;
              }
              pbVar1 = (byte *)(uVar12 + lVar4);
              *pbVar1 = *pbVar1 | bVar6;
            }
            puVar10 = puVar10 + 0x10;
            uVar7 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar7;
          } while (uVar7 < local_128[0]);
        }
        if (bVar5) {
          local_148 = 0;
          FUN_144e13b40(local_100,iVar14,uVar2,0);
        }
        uVar12 = (ulonglong)(iVar11 + 1U);
      } while ((int)(iVar11 + 1U) < 2);
    }
    FUN_144e14d40(local_128);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_168);
}



// FUNCTION 144e14040 FUN_144e14040 body=150 status=ok
// SIG undefined FUN_144e14040(void)

void FUN_144e14040(uint *param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  piVar1 = (int *)(*(longlong *)(param_1 + 2) + (ulonglong)param_2 * 0x28);
  if ((param_2 < *param_1) && ((piVar1[4] & 4U) == 0)) {
    piVar1[4] = piVar1[4] | 4;
    uVar3 = param_1[1];
    puVar4 = *(undefined8 **)(param_1 + 6);
    piVar1[6] = 0;
    piVar1[7] = 0;
    if (uVar3 != 0) {
      do {
        piVar2 = (int *)*puVar4;
        if ((*piVar2 <= piVar1[1] + *piVar1) && (*piVar1 <= *piVar2 + piVar2[1])) {
          *(int **)(piVar1 + 6) = piVar2;
          break;
        }
        puVar4 = puVar4 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    if (param_1[1] < *param_1) {
      *(int **)(*(longlong *)(param_1 + 6) + (ulonglong)param_1[1] * 8) = piVar1;
      param_1[1] = param_1[1] + 1;
    }
  }
  return;
}



// FUNCTION 144e140e0 FUN_144e140e0 body=234 status=ok
// SIG undefined FUN_144e140e0(void)

void FUN_144e140e0(uint *param_1,uint *param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  int *piVar7;
  uint uVar8;
  byte *pbVar9;
  longlong lVar10;
  
  uVar1 = *param_2;
  uVar4 = 0;
  pbVar9 = *(byte **)(param_2 + 2);
  uVar8 = 0;
  uVar5 = 0;
  if (uVar1 != 0) {
    lVar10 = 0;
    do {
      if (uVar4 == 0) {
        uVar8 = (uint)*pbVar9;
        uVar4 = 0x80;
        pbVar9 = pbVar9 + 1;
      }
      if ((((uVar4 & uVar8) != 0) &&
          (piVar7 = (int *)(*(longlong *)(param_1 + 2) + lVar10), uVar5 < *param_1)) &&
         ((piVar7[4] & 4U) == 0)) {
        piVar7[4] = piVar7[4] | 4;
        uVar3 = param_1[1];
        puVar6 = *(undefined8 **)(param_1 + 6);
        piVar7[6] = 0;
        piVar7[7] = 0;
        if (uVar3 != 0) {
          do {
            piVar2 = (int *)*puVar6;
            if ((*piVar2 <= piVar7[1] + *piVar7) && (*piVar7 <= *piVar2 + piVar2[1])) {
              *(int **)(piVar7 + 6) = piVar2;
              break;
            }
            puVar6 = puVar6 + 1;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        if (param_1[1] < *param_1) {
          *(int **)(*(longlong *)(param_1 + 6) + (ulonglong)param_1[1] * 8) = piVar7;
          param_1[1] = param_1[1] + 1;
        }
      }
      uVar4 = (int)uVar4 >> 1;
      uVar5 = uVar5 + 1;
      lVar10 = lVar10 + 0x28;
    } while (uVar5 < uVar1);
  }
  return;
}



// FUNCTION 144e141d0 FUN_144e141d0 body=388 status=ok
// SIG undefined FUN_144e141d0(void)

ulonglong FUN_144e141d0(uint *param_1,uint *param_2,int *param_3,ulonglong param_4,
                       undefined8 param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong local_res20;
  
  uVar7 = *param_2;
  uVar9 = (ulonglong)uVar7;
  uVar5 = 0;
  local_res20 = param_4;
  uVar3 = FUN_144b561b0(param_5,8,0,uVar7 * 2,0,&local_res20);
  *(undefined8 *)(param_1 + 4) = uVar3;
  uVar4 = local_res20 & 0xffffffff;
  if ((uint)local_res20 == 0) {
    uVar3 = FUN_144b561b0(param_5,0x28,0,uVar7,0,&local_res20);
    *(undefined8 *)(param_1 + 2) = uVar3;
    uVar4 = local_res20 & 0xffffffff;
    if ((uint)local_res20 == 0) {
      uVar3 = FUN_144b561b0(param_5,0x10,0,uVar7 * 2 + 1,0,&local_res20);
      *(undefined8 *)(param_1 + 10) = uVar3;
      if ((uint)local_res20 == 0) {
        *param_1 = uVar7;
        param_1[1] = 0;
        param_1[8] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        *(ulonglong *)(param_1 + 6) = *(longlong *)(param_1 + 4) + uVar9 * 8;
        puVar1 = *(undefined4 **)(param_1 + 2);
        puVar2 = *(undefined4 **)(param_2 + 2);
        while (uVar7 != 0) {
          *puVar1 = *puVar2;
          puVar1[1] = puVar2[1];
          puVar1[4] = puVar2[2];
          uVar7 = (int)uVar9 - 1;
          uVar9 = (ulonglong)uVar7;
          puVar1 = puVar1 + 10;
          puVar2 = puVar2 + 3;
        }
        if (param_3 != (int *)0x0) {
          iVar8 = *param_3;
          lVar6 = *(longlong *)(param_3 + 2);
          *(int **)(param_1 + 0xe) = param_3;
          if (iVar8 != 0) {
            do {
              FUN_144e140e0(param_1,lVar6);
              lVar6 = lVar6 + 0x18;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
        }
        uVar7 = *param_1;
        if ((param_1[1] != uVar7) && (uVar7 != 0)) {
          do {
            FUN_144e14040(param_1,uVar5);
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar7);
          return local_res20 & 0xffffffff;
        }
      }
      uVar4 = (ulonglong)(uint)local_res20;
    }
  }
  return uVar4;
}



// FUNCTION 144e14360 FUN_144e14360 body=254 status=ok
// SIG undefined FUN_144e14360(void)

void FUN_144e14360(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  uint *puVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  
  pbVar9 = *(byte **)(param_2 + 2);
  uVar13 = 0;
  uVar10 = *param_2;
  uVar8 = (ulonglong)uVar10;
  uVar5 = 0;
  uVar11 = *param_1;
  if (uVar11 != 0) {
    puVar3 = (uint *)(*(longlong *)(param_1 + 2) + 0x10);
    do {
      *puVar3 = *puVar3 & 0xfffffffb;
      puVar3[4] = 0xffffffff;
      puVar3 = puVar3 + 10;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  uVar4 = uVar13;
  uVar7 = uVar13;
  uVar6 = uVar13;
  uVar14 = uVar13;
  if (uVar10 != 0) {
    do {
      uVar10 = (uint)uVar6;
      if (uVar10 == 0) {
        uVar7 = (ulonglong)*pbVar9;
        uVar10 = 0x80;
        pbVar9 = pbVar9 + 1;
      }
      uVar6 = uVar4;
      if ((uVar10 & (uint)uVar7) != 0) {
        lVar12 = *(longlong *)(param_1 + 2) + uVar14;
        if ((*(uint *)(lVar12 + 0x10) & 4) == 0) {
          *(uint *)(lVar12 + 0x10) = *(uint *)(lVar12 + 0x10) | 4;
          if ((uint)uVar4 < *param_1) {
            uVar6 = (ulonglong)((uint)uVar4 + 1);
            *(longlong *)(*(longlong *)(param_1 + 4) + uVar4 * 8) = lVar12;
          }
        }
      }
      uVar5 = (uint)uVar6;
      uVar8 = uVar8 - 1;
      uVar4 = uVar6;
      uVar6 = (ulonglong)(uint)((int)uVar10 >> 1);
      uVar14 = uVar14 + 0x28;
    } while (uVar8 != 0);
  }
  param_1[1] = uVar5;
  puVar1 = *(undefined8 **)(param_1 + 4);
  if (1 < (int)uVar5) {
    uVar8 = (ulonglong)(uVar5 - 1);
    puVar15 = puVar1;
    do {
      puVar15 = puVar15 + 1;
      piVar2 = (int *)*puVar15;
      for (uVar4 = uVar13; (-1 < (longlong)uVar4 && (*piVar2 <= *(int *)puVar1[uVar4]));
          uVar4 = uVar4 - 1) {
        puVar1[uVar4 + 1] = (int *)puVar1[uVar4];
        puVar1[uVar4] = piVar2;
      }
      uVar13 = uVar13 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}



// FUNCTION 144e14460 FUN_144e14460 body=858 status=ok
// SIG undefined FUN_144e14460(void)

void FUN_144e14460(int *param_1,longlong param_2,int param_3,longlong param_4)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int local_58;
  int local_50;
  undefined8 local_48;
  int local_40;
  longlong local_38;
  
  local_38 = param_2 + 8 + (longlong)param_3 * 0xcc;
  uVar1 = *(undefined4 *)(local_38 + 0xc4);
  iVar6 = *(int *)(local_38 + 200);
  if ((*(byte *)(param_1 + 4) & 8) != 0) {
    return;
  }
  iVar3 = FUN_144b42fe0(*param_1,uVar1);
  uVar8 = iVar6 + iVar3;
  uVar4 = FUN_144b42fe0(param_1[1],uVar1);
  local_58 = 0;
  if (param_3 == 0) {
    if (*(char *)(param_4 + 0xcc) == '\0') {
LAB_144e1462b:
      param_1[4] = param_1[4] | 8;
      param_1[2] = uVar8;
      param_1[3] = uVar4;
      return;
    }
    if (*(char *)(param_4 + 0xce) == '\0') goto LAB_144e14500;
LAB_144e1464e:
    bVar2 = true;
  }
  else {
    if (param_3 == 1) {
      if (*(char *)(param_4 + 0xcd) == '\0') goto LAB_144e1462b;
      if (*(char *)(param_4 + 0xcf) != '\0') goto LAB_144e1464e;
    }
LAB_144e14500:
    bVar2 = false;
  }
  param_1[3] = uVar4;
  local_48 = (int *)0x0;
  local_50 = 0;
  local_40 = 0;
  if (param_3 == 1) {
    FUN_144e13bd0(param_2 + 0x1a0,param_1[1] + *param_1,*param_1,&local_48);
    local_50 = local_48._4_4_;
    local_58 = (int)local_48;
  }
  uVar9 = 0x40;
  if (local_58 == 1) {
    iVar6 = local_50 - uVar4;
LAB_144e1474e:
    param_1[2] = iVar6;
  }
  else if (local_58 == 2) {
    param_1[2] = local_40;
  }
  else {
    if (local_58 != 3) {
      local_48 = *(int **)(param_1 + 6);
      iVar6 = (int)uVar4 >> 1;
      if (local_48 != (int *)0x0) {
        if ((*(byte *)(local_48 + 4) & 8) == 0) {
          FUN_144e14460(local_48,param_2,param_3,param_4);
        }
        iVar3 = local_48[3];
        iVar7 = local_48[2];
        iVar5 = FUN_144b42fe0(((param_1[1] >> 1) + *param_1) - ((local_48[1] >> 1) + *local_48),
                              uVar1);
        uVar8 = (((iVar3 >> 1) + iVar7) - iVar6) + iVar5;
      }
      param_1[2] = uVar8;
      param_1[3] = uVar4;
      if (*(char *)(param_4 + 0xd0) != '\0') {
        if ((int)uVar4 < 0x41) {
          if ((int)uVar4 < 0x20) {
            if (0 < (int)uVar4) {
              iVar7 = (uVar8 + 0x20 & 0xffffffc0) - uVar8;
              iVar3 = ((uVar4 + uVar8 + 0x20 & 0xffffffc0) - uVar4) - uVar8;
              iVar6 = -iVar3;
              if (-1 < iVar3) {
                iVar6 = iVar3;
              }
              iVar3 = -iVar7;
              if (-1 < iVar7) {
                iVar3 = iVar7;
              }
              if (iVar6 < iVar3) {
                uVar8 = uVar4 + uVar8;
              }
            }
            uVar8 = uVar8 + 0x20 & 0xffffffc0;
          }
          else {
            uVar4 = 0x40;
            uVar8 = uVar8 + iVar6 & 0xffffffc0;
          }
        }
        else {
          uVar10 = *(uint *)(local_38 + 8);
          iVar3 = uVar4 - uVar10;
          iVar6 = -iVar3;
          if (-1 < iVar3) {
            iVar6 = iVar3;
          }
          if ((iVar6 < 0x28) && (uVar4 = uVar10, (int)uVar10 < 0x30)) {
            uVar4 = 0x30;
          }
          else if (0xbf < (int)uVar4) {
            uVar4 = uVar4 + 0x20 & 0xffffffc0;
            goto LAB_144e146f5;
          }
          uVar10 = uVar4 & 0x3f;
          if (9 < uVar10) {
            if (uVar10 < 0x20) {
              uVar4 = (uVar4 & 0xffffffc0) + 10;
              goto LAB_144e146f5;
            }
            if (uVar10 < 0x36) {
              uVar10 = 0x36;
            }
          }
          uVar4 = (uVar4 & 0xffffffc0) + uVar10;
        }
      }
LAB_144e146f5:
      param_1[3] = uVar4;
      uVar10 = (uVar8 + 0x20 & 0xffffffc0) - uVar8;
      uVar4 = ((uVar8 + 0x20 + uVar4 & 0xffffffc0) - uVar4) - uVar8;
      if ((int)((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f)) <=
          (int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f))) {
        uVar4 = uVar10;
      }
      iVar6 = uVar8 + uVar4;
      goto LAB_144e1474e;
    }
    param_1[2] = local_40;
    param_1[3] = local_50 - local_40;
  }
  if (!bVar2) goto LAB_144e147a9;
  if (0x3f < param_1[3]) {
    uVar9 = param_1[3] + 0x20U & 0xffffffc0;
  }
  if (local_58 == 1) {
    local_50 = local_50 - uVar9;
LAB_144e147a3:
    param_1[2] = local_50;
  }
  else if (local_58 != 2) {
    if (local_58 == 3) goto LAB_144e147a9;
    param_1[3] = uVar9;
    local_50 = (int)uVar9 >> 1;
    if ((uVar9 & 0x40) == 0) {
      local_50 = (param_1[2] + 0x20 + local_50 & 0xffffffc0U) - local_50;
    }
    else {
      local_50 = ((local_50 + param_1[2] & 0xffffffc0U) + 0x20) - local_50;
    }
    goto LAB_144e147a3;
  }
  param_1[3] = uVar9;
LAB_144e147a9:
  param_1[4] = param_1[4] | 8;
  return;
}



// FUNCTION 144e147c0 FUN_144e147c0 body=942 status=ok
// SIG undefined FUN_144e147c0(void)

void FUN_144e147c0(int *param_1,longlong param_2,int param_3,longlong param_4)

{
  undefined4 uVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined8 local_58;
  int local_50;
  
  iVar15 = *param_1;
  piVar12 = *(int **)(param_1 + 2);
  if (iVar15 != 0) {
    lVar9 = param_2 + 8 + (longlong)param_3 * 0xcc;
    do {
      uVar1 = *(undefined4 *)(lVar9 + 0xc4);
      iVar11 = *(int *)(lVar9 + 200);
      if ((*(byte *)(piVar12 + 4) & 8) == 0) {
        iVar4 = FUN_144b42fe0(*piVar12,uVar1);
        uVar14 = iVar11 + iVar4;
        uVar5 = FUN_144b42fe0(piVar12[1]);
        if (param_3 == 0) {
          if (*(char *)(param_4 + 0xcc) != '\0') {
            if (*(char *)(param_4 + 0xce) == '\0') goto LAB_144e1487d;
LAB_144e149b1:
            bVar3 = true;
            goto LAB_144e14888;
          }
LAB_144e14998:
          piVar12[2] = uVar14;
          piVar12[3] = uVar5;
        }
        else {
          if (param_3 == 1) {
            if (*(char *)(param_4 + 0xcd) == '\0') goto LAB_144e14998;
            if (*(char *)(param_4 + 0xcf) != '\0') goto LAB_144e149b1;
          }
LAB_144e1487d:
          bVar3 = false;
LAB_144e14888:
          piVar12[3] = uVar5;
          local_58 = 0;
          local_50 = 0;
          iVar11 = 0;
          iVar4 = 0;
          if (param_3 == 1) {
            FUN_144e13bd0(param_2 + 0x1a0,piVar12[1] + *piVar12,*piVar12,&local_58);
            iVar11 = (int)local_58;
            iVar4 = local_58._4_4_;
          }
          if (iVar11 == 1) {
            iVar8 = iVar4 - uVar5;
LAB_144e14aba:
            piVar12[2] = iVar8;
          }
          else if (iVar11 == 2) {
            piVar12[2] = local_50;
          }
          else {
            if (iVar11 != 3) {
              piVar2 = *(int **)(piVar12 + 6);
              iVar8 = (int)uVar5 >> 1;
              if (piVar2 != (int *)0x0) {
                if ((*(byte *)(piVar2 + 4) & 8) == 0) {
                  FUN_144e14460(piVar2,param_2,param_3,param_4);
                }
                iVar7 = piVar2[3];
                iVar10 = piVar2[2];
                iVar6 = FUN_144b42fe0(((piVar12[1] >> 1) + *piVar12) - ((piVar2[1] >> 1) + *piVar2),
                                      uVar1);
                uVar14 = iVar6 + (((iVar7 >> 1) + iVar10) - iVar8);
              }
              piVar12[2] = uVar14;
              piVar12[3] = uVar5;
              if (*(char *)(param_4 + 0xd0) != '\0') {
                if ((int)uVar5 < 0x41) {
                  if ((int)uVar5 < 0x20) {
                    if (0 < (int)uVar5) {
                      iVar10 = (uVar14 + 0x20 & 0xffffffc0) - uVar14;
                      iVar7 = ((uVar5 + uVar14 + 0x20 & 0xffffffc0) - uVar5) - uVar14;
                      iVar8 = -iVar7;
                      if (-1 < iVar7) {
                        iVar8 = iVar7;
                      }
                      iVar7 = -iVar10;
                      if (-1 < iVar10) {
                        iVar7 = iVar10;
                      }
                      if (iVar8 < iVar7) {
                        uVar14 = uVar5 + uVar14;
                      }
                    }
                    uVar14 = uVar14 + 0x20 & 0xffffffc0;
                  }
                  else {
                    uVar5 = 0x40;
                    uVar14 = uVar14 + iVar8 & 0xffffffc0;
                  }
                }
                else {
                  uVar13 = *(uint *)(lVar9 + 8);
                  iVar7 = uVar5 - uVar13;
                  iVar8 = -iVar7;
                  if (-1 < iVar7) {
                    iVar8 = iVar7;
                  }
                  if ((iVar8 < 0x28) && (uVar5 = uVar13, (int)uVar13 < 0x30)) {
                    uVar5 = 0x30;
                  }
                  else if (0xbf < (int)uVar5) {
                    uVar5 = uVar5 + 0x20 & 0xffffffc0;
                    goto LAB_144e14a61;
                  }
                  uVar13 = uVar5 & 0x3f;
                  if (9 < uVar13) {
                    if (uVar13 < 0x20) {
                      uVar5 = (uVar5 & 0xffffffc0) + 10;
                      goto LAB_144e14a61;
                    }
                    if (uVar13 < 0x36) {
                      uVar13 = 0x36;
                    }
                  }
                  uVar5 = (uVar5 & 0xffffffc0) + uVar13;
                }
              }
LAB_144e14a61:
              piVar12[3] = uVar5;
              uVar5 = ((uVar14 + 0x20 + uVar5 & 0xffffffc0) - uVar5) - uVar14;
              uVar13 = (uVar14 + 0x20 & 0xffffffc0) - uVar14;
              if ((int)((uVar13 ^ (int)uVar13 >> 0x1f) - ((int)uVar13 >> 0x1f)) <=
                  (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f))) {
                uVar5 = uVar13;
              }
              iVar8 = uVar14 + uVar5;
              goto LAB_144e14aba;
            }
            piVar12[2] = local_50;
            piVar12[3] = iVar4 - local_50;
          }
          if (bVar3) {
            if (piVar12[3] < 0x40) {
              uVar5 = 0x40;
            }
            else {
              uVar5 = piVar12[3] + 0x20U & 0xffffffc0;
            }
            if (iVar11 == 1) {
              piVar12[2] = iVar4 - uVar5;
            }
            else if (iVar11 != 2) {
              if (iVar11 == 3) goto LAB_144e14b2e;
              piVar12[3] = uVar5;
              iVar11 = (int)uVar5 >> 1;
              if ((uVar5 & 0x40) == 0) {
                piVar12[2] = (piVar12[2] + 0x20 + iVar11 & 0xffffffc0U) - iVar11;
              }
              else {
                piVar12[2] = ((iVar11 + piVar12[2] & 0xffffffc0U) + 0x20) - iVar11;
              }
            }
            piVar12[3] = uVar5;
          }
        }
LAB_144e14b2e:
        piVar12[4] = piVar12[4] | 8;
      }
      iVar15 = iVar15 + -1;
      piVar12 = piVar12 + 10;
    } while (iVar15 != 0);
  }
  return;
}



// FUNCTION 144e14b70 FUN_144e14b70 body=448 status=ok
// SIG undefined FUN_144e14b70(void)

void FUN_144e14b70(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint local_res10;
  uint local_res18;
  
  local_res10 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    do {
      bVar2 = false;
      if (3 < *(uint *)(*(longlong *)(param_1 + 0x10) + 8 + (ulonglong)local_res10 * 0x10)) {
        plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x10) + (ulonglong)local_res10 * 0x10);
        plVar7 = plVar8;
        do {
          plVar7 = (longlong *)plVar7[1];
          if (plVar7 == plVar8) goto LAB_144e14cfb;
          iVar3 = (int)plVar7[6] - (int)plVar8[6];
          iVar11 = *(int *)((longlong)plVar7 + 0x34) - *(int *)((longlong)plVar8 + 0x34);
          plVar1 = plVar8;
        } while ((iVar3 == 0) && (iVar11 == 0));
        do {
          plVar5 = plVar1;
          plVar1 = (longlong *)*plVar5;
          if (plVar1 == plVar8) goto LAB_144e14cfb;
          iVar10 = (int)plVar5[6] - *(int *)(plVar1 + 6);
          iVar9 = *(int *)((longlong)plVar5 + 0x34) - *(int *)((longlong)plVar1 + 0x34);
        } while (((iVar10 == 0) && (iVar9 == 0)) ||
                (local_res18 = FUN_144b57760(iVar3,iVar11,iVar10,iVar9), plVar6 = plVar5,
                local_res18 == 0));
        do {
          do {
            plVar8 = plVar7;
            plVar7 = (longlong *)plVar8[1];
            if (plVar7 == plVar5) {
              bVar2 = true;
            }
            iVar11 = (int)plVar7[6] - (int)plVar8[6];
            iVar3 = *(int *)((longlong)plVar7 + 0x34) - *(int *)((longlong)plVar8 + 0x34);
          } while (((iVar11 == 0) && (iVar3 == 0)) ||
                  (uVar4 = FUN_144b57760(iVar10,iVar9,iVar11,iVar3), uVar4 == 0));
          if ((int)(uVar4 ^ local_res18) < 0) {
            do {
              *(uint *)(plVar6 + 3) = *(uint *)(plVar6 + 3) | 4;
              plVar6 = (longlong *)plVar6[1];
            } while (plVar6 != plVar8);
            *(uint *)(plVar6 + 3) = *(uint *)(plVar6 + 3) | 4;
          }
          local_res18 = uVar4;
          iVar10 = iVar11;
          iVar9 = iVar3;
          plVar6 = plVar8;
        } while (!bVar2);
      }
LAB_144e14cfb:
      local_res10 = local_res10 + 1;
    } while (local_res10 < *(uint *)(param_1 + 4));
  }
  return;
}



// FUNCTION 144e14d40 FUN_144e14d40 body=232 status=ok
// SIG undefined FUN_144e14d40(void)

void FUN_144e14d40(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[3];
  FUN_144b56350(uVar1,param_1[0x14]);
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x15] = 0;
  FUN_144b56350(uVar1,param_1[0x11]);
  param_1[0x11] = 0;
  FUN_144b56350(uVar1,param_1[0x10]);
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  FUN_144b56350(uVar1,param_1[0xb]);
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  FUN_144b56350(uVar1,param_1[8]);
  param_1[8] = 0;
  FUN_144b56350(uVar1,param_1[7]);
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  FUN_144b56350(uVar1,param_1[1]);
  param_1[1] = 0;
  FUN_144b56350(uVar1,param_1[2]);
  param_1[2] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  return;
}



// FUNCTION 144e14e30 FUN_144e14e30 body=934 status=ok
// SIG undefined FUN_144e14e30(void)

void FUN_144e14e30(uint *param_1,short *param_2,longlong param_3,undefined8 *param_4)

{
  short sVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  ulonglong uVar12;
  char cVar13;
  uint uVar14;
  ulonglong uVar15;
  char cVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  uint uVar21;
  longlong *plVar22;
  int *piVar23;
  int local_res8 [2];
  longlong local_res10;
  longlong local_res18;
  undefined8 *local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  memset(param_1,0,0xd8);
  uVar2 = *param_4;
  uVar12 = 0;
  *(undefined8 *)(param_1 + 6) = uVar2;
  uVar4 = FUN_144b561b0(uVar2,0x40,0,(int)param_2[1],0,local_res8);
  *(undefined8 *)(param_1 + 2) = uVar4;
  if (local_res8[0] == 0) {
    puVar5 = (undefined8 *)FUN_144b561b0(uVar2,0x10,0,(int)*param_2,0,local_res8);
    *(undefined8 **)(param_1 + 4) = puVar5;
    if (local_res8[0] == 0) {
      lVar3 = *(longlong *)(param_1 + 2);
      *param_1 = (int)param_2[1];
      sVar1 = *param_2;
      param_1[1] = (int)sVar1;
      uVar19 = uVar12;
      uVar15 = uVar12;
      if (sVar1 != 0) {
        do {
          uVar17 = (int)*(short *)(*(longlong *)(param_2 + 0xc) + uVar19 * 2) + 1;
          uVar14 = uVar17 - (int)uVar15;
          plVar22 = (longlong *)(uVar15 * 0x40 + lVar3);
          *(uint *)(puVar5 + 1) = uVar14;
          *puVar5 = plVar22;
          if (uVar14 != 0) {
            plVar22[2] = (longlong)puVar5;
            *plVar22 = (ulonglong)uVar17 * 0x40 + -0x40 + lVar3;
            plVar7 = plVar22;
            if (1 < uVar14) {
              uVar15 = (ulonglong)(uVar14 - 1);
              plVar6 = plVar22;
              do {
                plVar6[8] = (longlong)plVar6;
                plVar7 = plVar6 + 8;
                plVar6[1] = (longlong)plVar7;
                plVar6[10] = (longlong)puVar5;
                uVar15 = uVar15 - 1;
                plVar6 = plVar7;
              } while (uVar15 != 0);
            }
            plVar7[1] = (longlong)plVar22;
          }
          puVar5 = puVar5 + 2;
          uVar14 = (int)uVar19 + 1;
          uVar19 = (ulonglong)uVar14;
          uVar15 = (ulonglong)uVar17;
        } while (uVar14 < param_1[1]);
      }
      lVar3 = *(longlong *)(param_1 + 2);
      local_res10 = *(longlong *)(param_2 + 4);
      if (*param_1 != 0) {
        puVar10 = (uint *)(lVar3 + 0x18);
        do {
          if ((*(byte *)(uVar12 + *(longlong *)(param_2 + 8)) & 1) == 0) {
            *puVar10 = 1;
          }
          lVar8 = (longlong)(int)(*(longlong *)(puVar10 + -6) - lVar3 >> 6);
          piVar23 = (int *)(uVar12 * 8 + local_res10);
          cVar16 = '\x04';
          uVar14 = *piVar23 - *(int *)(local_res10 + lVar8 * 8);
          uVar17 = piVar23[1] - *(int *)(local_res10 + 4 + lVar8 * 8);
          iVar18 = (uVar14 ^ (int)uVar14 >> 0x1f) - ((int)uVar14 >> 0x1f);
          iVar20 = (uVar17 ^ (int)uVar17 >> 0x1f) - ((int)uVar17 >> 0x1f);
          if (iVar20 * 0xc < iVar18) {
            cVar16 = ((byte)((int)uVar14 >> 0x1f) & 0xfc) + 2;
          }
          else if (iVar18 * 0xc < iVar20) {
            cVar16 = ((byte)((int)uVar17 >> 0x1f) & 2) - 1;
          }
          lVar8 = (longlong)(int)(*(longlong *)(puVar10 + -4) - lVar3 >> 6);
          cVar13 = '\x04';
          *(char *)(puVar10 + 2) = cVar16;
          uVar21 = *(int *)(local_res10 + lVar8 * 8) - *piVar23;
          uVar11 = *(int *)(local_res10 + 4 + lVar8 * 8) - piVar23[1];
          iVar18 = (uVar21 ^ (int)uVar21 >> 0x1f) - ((int)uVar21 >> 0x1f);
          iVar20 = (uVar11 ^ (int)uVar11 >> 0x1f) - ((int)uVar11 >> 0x1f);
          if (iVar20 * 0xc < iVar18) {
            cVar13 = ((byte)((int)uVar21 >> 0x1f) & 0xfc) + 2;
          }
          else if (iVar18 * 0xc < iVar20) {
            cVar13 = ((byte)((int)uVar11 >> 0x1f) & 2) - 1;
          }
          *(char *)((longlong)puVar10 + 9) = cVar13;
          if ((*puVar10 & 1) == 0) {
            if ((cVar16 == cVar13) &&
               ((cVar13 != '\x04' ||
                (iVar18 = FUN_144b57790(uVar14,uVar17,uVar21,uVar11), iVar18 != 0)))) {
              *puVar10 = *puVar10 | 2;
            }
          }
          else {
            *puVar10 = *puVar10 | 2;
          }
          uVar14 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar14;
          puVar10 = puVar10 + 0x10;
          param_3 = local_res18;
        } while (uVar14 < *param_1);
      }
      uVar14 = *param_1;
      *(undefined8 **)(param_1 + 10) = local_res20;
      *(short **)(param_1 + 8) = param_2;
      if (uVar14 != 0) {
        puVar5 = (undefined8 *)(*(longlong *)(param_1 + 2) + 0x28);
        puVar9 = *(undefined4 **)(param_2 + 4);
        do {
          *(undefined4 *)((longlong)puVar5 + -0xc) = 0;
          *puVar5 = 0;
          *(undefined4 *)(puVar5 + 1) = *puVar9;
          *(undefined4 *)((longlong)puVar5 + 0xc) = puVar9[1];
          uVar14 = uVar14 - 1;
          puVar5 = puVar5 + 8;
          puVar9 = puVar9 + 2;
        } while (uVar14 != 0);
      }
      FUN_144e14b70(param_1);
      local_res8[0] =
           FUN_144e141d0(param_1 + 0xc,param_3 + 0x18,param_3 + 0x28,param_3 + 0x38,uVar2);
      if (local_res8[0] == 0) {
        FUN_144e141d0(param_1 + 0x1e,param_3 + 0x48,param_3 + 0x58,param_3 + 0x68,uVar2);
      }
    }
  }
  return;
}



// FUNCTION 144e151e0 FUN_144e151e0 body=305 status=ok
// SIG undefined FUN_144e151e0(void)

void FUN_144e151e0(uint *param_1)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  
  uVar7 = 0;
  if (param_1[1] != 0) {
    do {
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 4) + (ulonglong)uVar7 * 0x10);
      plVar5 = plVar6;
      if (*(int *)(*(longlong *)(param_1 + 4) + 8 + (ulonglong)uVar7 * 0x10) != 0) {
        do {
          plVar5 = (longlong *)*plVar5;
          if (plVar5 == plVar6) goto LAB_144e15306;
        } while (*(int *)(plVar5 + 6) == (int)plVar6[6]);
        plVar6 = (longlong *)plVar5[1];
        plVar4 = plVar6;
        plVar3 = plVar6;
LAB_144e15243:
        do {
          plVar4 = (longlong *)plVar4[1];
          if (plVar4 == plVar6) break;
          iVar2 = (int)plVar3[6];
          if ((int)plVar4[6] != iVar2) {
            if (*(int *)((longlong)plVar5 + 0x30) < iVar2) {
              if (iVar2 <= (int)plVar4[6]) {
                plVar5 = (longlong *)*plVar4;
                plVar3 = plVar4;
                goto LAB_144e15243;
              }
LAB_144e15270:
              do {
                *(uint *)((longlong)plVar3 + 0x1c) = *(uint *)((longlong)plVar3 + 0x1c) | 0x40;
                plVar3 = (longlong *)plVar3[1];
              } while (plVar3 != plVar4);
            }
            else if (iVar2 < (int)plVar4[6]) goto LAB_144e15270;
            plVar5 = (longlong *)*plVar4;
            plVar3 = plVar4;
          }
        } while( true );
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_1[1]);
  }
  uVar7 = 0;
  do {
    if (*param_1 <= uVar7) {
      return;
    }
    plVar4 = (longlong *)((ulonglong)uVar7 * 0x40 + *(longlong *)(param_1 + 2));
    uVar1 = *(uint *)((longlong)plVar4 + 0x1c);
    plVar5 = plVar4;
    plVar6 = plVar4;
    if ((uVar1 & 0x40) != 0) {
      do {
        plVar6 = (longlong *)*plVar6;
        if (plVar6 == plVar4) goto LAB_144e15306;
      } while (*(int *)((longlong)plVar6 + 0x34) == *(int *)((longlong)plVar4 + 0x34));
      do {
        plVar5 = (longlong *)plVar5[1];
        if (plVar5 == plVar4) goto LAB_144e15306;
      } while (*(int *)((longlong)plVar5 + 0x34) == *(int *)((longlong)plVar4 + 0x34));
    }
    iVar2 = *(int *)((longlong)plVar4 + 0x34);
    if ((*(int *)((longlong)plVar6 + 0x34) < iVar2) && (iVar2 < *(int *)((longlong)plVar5 + 0x34)))
    {
      *(uint *)((longlong)plVar4 + 0x1c) = uVar1 | 0x80;
      uVar7 = uVar7 + 1;
    }
    else {
      if ((iVar2 < *(int *)((longlong)plVar6 + 0x34)) && (*(int *)((longlong)plVar5 + 0x34) < iVar2)
         ) {
        *(uint *)((longlong)plVar4 + 0x1c) = uVar1 | 0x100;
      }
LAB_144e15306:
      uVar7 = uVar7 + 1;
    }
  } while( true );
}



// FUNCTION 144e15320 FUN_144e15320 body=567 status=ok
// SIG undefined FUN_144e15320(void)

void FUN_144e15320(longlong param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  uint uVar9;
  int *piVar10;
  
  if (param_3 != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    uVar1 = *(uint *)(param_1 + 4);
    puVar8 = (uint *)(param_2 + 0x1c);
    do {
      uVar9 = *puVar8;
      uVar2 = puVar8[5];
      if ((uVar9 & 0x10) == 0) {
        iVar4 = (int)(char)puVar8[1];
        if (((((iVar4 == param_5) || (iVar4 == -param_5)) ||
             (iVar4 = (int)*(char *)((longlong)puVar8 + 5), iVar4 == param_5)) ||
            (iVar4 == -param_5)) && (iVar4 != 0)) {
          if (iVar4 == param_5) {
            uVar5 = 0;
            puVar7 = puVar3;
            if (uVar1 != 0) {
              do {
                iVar4 = uVar2 - *(int *)*puVar7;
                if ((iVar4 < param_4) && (-iVar4 < param_4)) {
                  *(int **)(puVar8 + 3) = (int *)*puVar7;
                  *puVar8 = uVar9 | 0x210;
                  break;
                }
                uVar5 = uVar5 + 1;
                puVar7 = puVar7 + 1;
              } while (uVar5 < uVar1);
            }
          }
          else if ((iVar4 == -param_5) && (uVar5 = 0, puVar7 = puVar3, uVar1 != 0)) {
            do {
              piVar10 = (int *)*puVar7;
              iVar4 = (uVar2 - piVar10[1]) - *piVar10;
              if ((iVar4 < param_4) && (-iVar4 < param_4)) {
                *(int **)(puVar8 + 3) = piVar10;
                *puVar8 = uVar9 | 0x410;
                break;
              }
              uVar5 = uVar5 + 1;
              puVar7 = puVar7 + 1;
            } while (uVar5 < uVar1);
          }
        }
        else if ((uVar9 & 0x40) != 0) {
          uVar5 = 0x80;
          if (param_5 != 2) {
            uVar5 = 0x100;
          }
          uVar6 = 0x100;
          if (param_5 != 2) {
            uVar6 = 0x80;
          }
          if ((uVar9 & uVar5) == 0) {
            if (((uVar6 & uVar9) != 0) && (uVar5 = 0, puVar7 = puVar3, uVar1 != 0)) {
              do {
                piVar10 = (int *)*puVar7;
                iVar4 = (uVar2 - piVar10[1]) - *piVar10;
                if ((iVar4 < param_4) && (-iVar4 < param_4)) {
                  uVar9 = uVar9 | 0x410;
                  goto LAB_144e154ec;
                }
                uVar5 = uVar5 + 1;
                puVar7 = puVar7 + 1;
              } while (uVar5 < uVar1);
            }
          }
          else {
            uVar5 = 0;
            puVar7 = puVar3;
            if (uVar1 != 0) {
LAB_144e15480:
              piVar10 = (int *)*puVar7;
              if ((param_4 <= (int)(uVar2 - *piVar10)) || (param_4 <= (int)-(uVar2 - *piVar10)))
              goto LAB_144e15494;
              uVar9 = uVar9 | 0x210;
LAB_144e154ec:
              *puVar8 = uVar9;
              *(int **)(puVar8 + 3) = piVar10;
            }
          }
LAB_144e154f3:
          if ((*(longlong *)(puVar8 + 3) == 0) && (uVar9 = 0, puVar7 = puVar3, uVar1 != 0)) {
            do {
              piVar10 = (int *)*puVar7;
              if ((*piVar10 <= (int)uVar2) && ((int)uVar2 <= *piVar10 + piVar10[1])) {
                *(int **)(puVar8 + 3) = piVar10;
                break;
              }
              uVar9 = uVar9 + 1;
              puVar7 = puVar7 + 1;
            } while (uVar9 < uVar1);
          }
        }
      }
      puVar8 = puVar8 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
LAB_144e15494:
  uVar5 = uVar5 + 1;
  puVar7 = puVar7 + 1;
  if (uVar1 <= uVar5) goto LAB_144e154f3;
  goto LAB_144e15480;
}



// FUNCTION 144e15560 FUN_144e15560 body=417 status=ok
// SIG undefined FUN_144e15560(void)

void FUN_144e15560(uint *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  char cVar9;
  ulonglong uVar10;
  uint uVar11;
  
  puVar7 = param_1 + ((longlong)param_2 * 9 + 6) * 2;
  cVar9 = (param_2 != 0) + '\x01';
  lVar2 = *(longlong *)(*(uint **)(puVar7 + 0xe) + 2);
  uVar11 = **(uint **)(puVar7 + 0xe);
  iVar6 = FUN_144b555e0(0x20,*(undefined4 *)
                              (((longlong)param_2 + 1) * 0xcc + *(longlong *)(param_1 + 10)));
  if (0x1e < iVar6) {
    iVar6 = 0x1e;
  }
  if ((1 < uVar11) && (uVar1 = *param_1, uVar1 != 0)) {
    uVar10 = (ulonglong)(uVar11 - 1);
    uVar5 = *(uint *)(lVar2 + 0x10);
    if (uVar1 < *(uint *)(lVar2 + 0x10)) {
      uVar5 = uVar1;
    }
    do {
      puVar8 = param_1;
      if (*(uint *)(lVar2 + 0x28) < *param_1) {
        puVar8 = (uint *)(lVar2 + 0x28);
      }
      uVar1 = *puVar8;
      if (uVar5 < uVar1) {
        lVar3 = *(longlong *)(param_1 + 2);
        FUN_144e14360(puVar7,lVar2 + 0x18);
        FUN_144e15320(puVar7,(ulonglong)uVar5 * 0x40 + lVar3,uVar1 - uVar5,iVar6,cVar9);
      }
      uVar11 = uVar11 - 1;
      uVar10 = uVar10 - 1;
      uVar5 = uVar1;
      lVar2 = lVar2 + 0x18;
    } while (uVar10 != 0);
  }
  if (uVar11 == 1) {
    uVar11 = *param_1;
    uVar4 = *(undefined8 *)(param_1 + 2);
    FUN_144e14360(puVar7,*(undefined8 *)(*(longlong *)(puVar7 + 0xe) + 8));
    FUN_144e15320(puVar7,uVar4,uVar11,iVar6,cVar9);
  }
  uVar11 = *param_1;
  if (uVar11 != 0) {
    puVar7 = (uint *)(*(longlong *)(param_1 + 2) + 0x1c);
    do {
      if ((*(longlong *)(puVar7 + 3) != 0) && ((*puVar7 & 0x10) == 0)) {
        *puVar7 = *puVar7 | 0x10;
      }
      puVar7 = puVar7 + 0x10;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return;
}



// FUNCTION 144e15710 FUN_144e15710 body=299 status=ok
// SIG undefined FUN_144e15710(void)

void FUN_144e15710(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar5 = *param_2;
  if (iVar5 != 0) {
    puVar3 = (uint *)(*(longlong *)(param_2 + 2) + 0x1c);
    do {
      if (((((char)puVar3[1] + 2U & 0xfb) == 0) ||
          ((*(char *)((longlong)puVar3 + 5) + 2U & 0xfb) == 0)) && ((*puVar3 & 0x10) == 0)) {
        iVar7 = *param_1;
        uVar1 = puVar3[5];
        if (iVar7 != 0) {
          piVar4 = param_1 + 3;
          do {
            if ((int)(uVar1 - piVar4[1]) < -param_1[0x207]) break;
            if (((int)uVar1 <= param_1[0x207] + *piVar4) &&
               (((char)param_1[0x208] != '\0' || ((int)(uVar1 - piVar4[1]) <= param_1[0x206])))) {
              uVar6 = piVar4[4];
              *puVar3 = *puVar3 | 0x30;
              puVar3[7] = uVar6;
            }
            piVar4 = piVar4 + 8;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        uVar6 = param_1[0x81];
        if (uVar6 != 0) {
          piVar4 = param_1 + (ulonglong)uVar6 * 8 + 0x7d;
          do {
            if ((int)(piVar4[-1] - uVar1) < -param_1[0x207]) break;
            if ((*piVar4 - param_1[0x207] <= (int)uVar1) &&
               (((char)param_1[0x208] != '\0' || ((int)(piVar4[-1] - uVar1) < param_1[0x206])))) {
              uVar2 = piVar4[4];
              *puVar3 = *puVar3 | 0x30;
              puVar3[7] = uVar2;
            }
            piVar4 = piVar4 + -8;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
      }
      puVar3 = puVar3 + 0x10;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}



// FUNCTION 144e15840 FUN_144e15840 body=184 status=ok
// SIG undefined FUN_144e15840(void)

void FUN_144e15840(int *param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = *param_1;
  uVar1 = *(undefined4 *)(((longlong)param_2 + 1) * 0xcc + *(longlong *)(param_1 + 10));
  if (iVar5 != 0) {
    piVar4 = (int *)(*(longlong *)(param_1 + 2) + 0x38);
    do {
      piVar2 = *(int **)(piVar4 + -4);
      if (piVar2 != (int *)0x0) {
        if (((uint)piVar4[-7] >> 9 & 1) == 0) {
          if (((uint)piVar4[-7] >> 10 & 1) != 0) {
            iVar3 = piVar2[3];
LAB_144e158d1:
            iVar3 = iVar3 + piVar2[2];
            goto LAB_144e158d4;
          }
          iVar3 = piVar4[-2] - *piVar2;
          if (iVar3 < 1) {
            iVar3 = FUN_144b42fe0(iVar3,uVar1);
            goto LAB_144e158d1;
          }
          if (iVar3 < piVar2[1]) {
            iVar3 = FUN_144b55580(iVar3,piVar2[3]);
            goto LAB_144e158d1;
          }
          iVar3 = FUN_144b42fe0(iVar3 - piVar2[1],uVar1);
          *piVar4 = piVar2[3] + iVar3 + piVar2[2];
        }
        else {
          iVar3 = piVar2[2];
LAB_144e158d4:
          *piVar4 = iVar3;
        }
        piVar4[-7] = piVar4[-7] | 0x20;
      }
      piVar4 = piVar4 + 0x10;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}



// FUNCTION 144e15900 FUN_144e15900 body=615 status=ok
// SIG undefined FUN_144e15900(void)

void FUN_144e15900(uint *param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulonglong *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  int *local_d0;
  int local_c8 [4];
  ulonglong local_b8 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar9 = *(ulonglong *)(param_1 + 2);
  uVar7 = 0;
  uVar2 = *(undefined8 *)(param_1 + 6);
  uVar13 = (ulonglong)*param_1 * 0x40 + uVar9;
  uVar1 = *(undefined4 *)(((longlong)param_2 + 1) * 0xcc + *(longlong *)(param_1 + 10));
  uVar12 = uVar9;
  if (uVar9 < uVar13) {
    do {
      uVar10 = uVar12 + 0x40;
      uVar4 = uVar7 + 1;
      if ((*(uint *)(uVar12 + 0x1c) & 0x10) == 0) {
        uVar4 = uVar7;
      }
      uVar12 = uVar10;
      uVar7 = uVar4;
    } while (uVar10 < uVar13);
    if (uVar4 != 0) {
      if (uVar4 < 0x11) {
        puVar8 = local_b8;
      }
      else {
        local_d0 = local_c8;
        local_d8 = 0;
        puVar8 = (ulonglong *)FUN_144b561b0(uVar2,8);
        if (local_c8[0] != 0) goto LAB_144e15b57;
      }
      uVar10 = 0;
      uVar12 = uVar9;
      do {
        if ((*(byte *)(uVar12 + 0x1c) & 0x10) != 0) {
          puVar3 = puVar8 + uVar10;
          while (puVar8 < puVar3) {
            if (*(int *)(puVar3[-1] + 0x30) <= *(int *)(uVar12 + 0x30)) break;
            *puVar3 = puVar3[-1];
            puVar3 = puVar3 + -1;
          }
          *puVar3 = uVar12;
          uVar10 = (ulonglong)((int)uVar10 + 1);
        }
        uVar12 = uVar12 + 0x40;
      } while (uVar12 < uVar13);
      puVar11 = (uint *)(uVar9 + 0x18);
      lVar14 = ((uVar13 - uVar9) - 1 >> 6) + 1;
      do {
        if ((puVar11[1] & 0x10) == 0) {
          uVar7 = *puVar11;
          if ((uVar7 & 2) != 0) {
            if ((((char)puVar11[2] == '\x04') ||
                ((char)puVar11[2] != *(char *)((longlong)puVar11 + 9))) ||
               (((puVar11[1] & 0x40) == 0 && ((uVar7 & 4) == 0)))) goto LAB_144e15b1c;
            *puVar11 = uVar7 & 0xfffffffd;
          }
          uVar9 = 0;
          uVar7 = (uint)uVar10;
          if (uVar7 == 0) {
LAB_144e15b01:
            uVar9 = *puVar8;
            iVar6 = puVar11[6] - *(int *)(uVar9 + 0x30);
LAB_144e15b0a:
            iVar6 = FUN_144b42fe0(iVar6,uVar1);
LAB_144e15b12:
            uVar7 = iVar6 + *(int *)(uVar9 + 0x38);
          }
          else {
            uVar4 = puVar11[6];
            do {
              if ((int)uVar4 < *(int *)(puVar8[uVar9] + 0x30)) break;
              uVar5 = (int)uVar9 + 1;
              uVar9 = (ulonglong)uVar5;
            } while (uVar5 < uVar7);
            if ((int)uVar9 == 0) goto LAB_144e15b01;
            uVar9 = puVar8[(int)uVar9 - 1];
            uVar5 = 0;
            uVar12 = uVar10;
            if (uVar7 == 0) {
LAB_144e15af1:
              uVar9 = puVar8[uVar5 - 1];
              iVar6 = uVar4 - *(int *)(uVar9 + 0x30);
              goto LAB_144e15b0a;
            }
            do {
              uVar5 = (int)uVar12 - 1;
              uVar13 = (ulonglong)uVar5;
              if (*(int *)(puVar8[uVar13] + 0x30) < (int)uVar4) break;
              uVar12 = uVar13;
            } while (uVar5 != 0);
            uVar5 = (uint)uVar12;
            if (uVar5 == uVar7) goto LAB_144e15af1;
            uVar12 = puVar8[uVar12];
            uVar7 = *(uint *)(uVar9 + 0x30);
            if (uVar4 != uVar7) {
              if (uVar4 == *(uint *)(uVar12 + 0x30)) {
                uVar7 = *(uint *)(uVar12 + 0x38);
                goto LAB_144e15b15;
              }
              iVar6 = FUN_144b55580(uVar4 - uVar7,*(int *)(uVar12 + 0x38) - *(int *)(uVar9 + 0x38),
                                    *(uint *)(uVar12 + 0x30) - uVar7);
              goto LAB_144e15b12;
            }
            uVar7 = *(uint *)(uVar9 + 0x38);
          }
LAB_144e15b15:
          puVar11[1] = puVar11[1] | 0x20;
          puVar11[8] = uVar7;
        }
LAB_144e15b1c:
        puVar11 = puVar11 + 0x10;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      if (puVar8 != local_b8) {
        FUN_144b56350(uVar2,puVar8);
      }
    }
  }
LAB_144e15b57:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_f8);
}



// FUNCTION 144e15b80 FUN_144e15b80 body=562 status=ok
// SIG undefined FUN_144e15b80(void)

void FUN_144e15b80(longlong param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  int local_res18;
  
  uVar1 = *(undefined4 *)((longlong)param_2 * 0xcc + 0xcc + *(longlong *)(param_1 + 0x28));
  local_res18 = *(int *)((longlong)param_2 * 0xcc + 0xd0 + *(longlong *)(param_1 + 0x28));
  iVar8 = *(int *)(param_1 + 4);
  puVar5 = *(ulonglong **)(param_1 + 0x10);
  do {
    if (iVar8 == 0) {
      return;
    }
    uVar9 = *puVar5;
    uVar6 = 0;
    uVar13 = 0;
    uVar12 = (ulonglong)(uint)puVar5[1] * 0x40 + uVar9;
    uVar4 = uVar9;
    if (uVar9 < uVar12) {
      do {
        if ((*(byte *)(uVar4 + 0x1c) & 0x20) != 0) {
          if (uVar13 == 0) {
            uVar13 = uVar4;
          }
          uVar6 = uVar6 + 1;
        }
        uVar4 = uVar4 + 0x40;
      } while (uVar4 < uVar12);
      uVar4 = uVar13;
      if (uVar6 < 2) {
        if (uVar6 == 1) {
          local_res18 = FUN_144b42fe0(*(undefined4 *)(uVar13 + 0x30),uVar1);
          local_res18 = *(int *)(uVar13 + 0x38) - local_res18;
        }
        for (; uVar9 < uVar12; uVar9 = uVar9 + 0x40) {
          if (uVar9 != uVar13) {
            iVar2 = FUN_144b42fe0(*(undefined4 *)(uVar9 + 0x30),uVar1);
            *(int *)(uVar9 + 0x38) = iVar2 + local_res18;
          }
        }
      }
      else {
        do {
          do {
            uVar9 = uVar4;
            uVar4 = *(ulonglong *)(uVar9 + 8);
            if (uVar4 == uVar13) goto LAB_144e15d67;
          } while ((*(byte *)(uVar4 + 0x1c) & 0x20) != 0);
          do {
            uVar4 = *(ulonglong *)(uVar4 + 8);
          } while ((*(byte *)(uVar4 + 0x1c) & 0x20) == 0);
          iVar2 = *(int *)(uVar9 + 0x30);
          iVar15 = *(int *)(uVar4 + 0x30);
          if (iVar15 < iVar2) {
            iVar10 = *(int *)(uVar4 + 0x38);
            iVar14 = *(int *)(uVar9 + 0x38);
            iVar11 = iVar2 - iVar15;
          }
          else {
            iVar10 = *(int *)(uVar9 + 0x38);
            iVar14 = *(int *)(uVar4 + 0x38);
            iVar11 = iVar15 - iVar2;
            iVar15 = iVar2;
          }
          uVar3 = 0x10000;
          if (0 < iVar11) {
            uVar3 = FUN_144b555e0(iVar14 - iVar10,iVar11);
          }
          uVar9 = *(ulonglong *)(uVar9 + 8);
          do {
            iVar2 = *(int *)(uVar9 + 0x30) - iVar15;
            uVar7 = uVar1;
            if ((iVar2 < 1) || (uVar7 = uVar3, iVar2 < iVar11)) {
              iVar2 = FUN_144b42fe0(iVar2,uVar7);
            }
            else {
              iVar2 = FUN_144b42fe0(iVar2 - iVar11,uVar1);
              iVar2 = iVar2 + (iVar14 - iVar10);
            }
            *(int *)(uVar9 + 0x38) = iVar2 + iVar10;
            uVar9 = *(ulonglong *)(uVar9 + 8);
          } while (uVar9 != uVar4);
        } while (uVar4 != uVar13);
      }
    }
LAB_144e15d67:
    iVar8 = iVar8 + -1;
    puVar5 = puVar5 + 2;
  } while( true );
}



// FUNCTION 144e15dc0 FUN_144e15dc0 body=158 status=ok
// SIG undefined FUN_144e15dc0(void)

void FUN_144e15dc0(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  lVar9 = (param_2 & 0xffffffff) * 0xcc;
  iVar3 = *(int *)(lVar9 + 8 + param_1);
  lVar2 = lVar9 + param_1;
  uVar4 = *(undefined4 *)(lVar9 + 0xcc + param_1);
  if (iVar3 != 0) {
    iVar6 = FUN_144b42fe0(*(undefined4 *)(lVar2 + 0xc),uVar4);
    piVar1 = (int *)(lVar2 + 0x10);
    *piVar1 = iVar6;
    *(uint *)(lVar2 + 0x14) = iVar6 + 0x20U & 0xffffffc0;
    puVar5 = (undefined4 *)(lVar2 + 0x18);
    while (iVar3 = iVar3 + -1, iVar3 != 0) {
      iVar7 = FUN_144b42fe0(*puVar5,uVar4);
      iVar8 = iVar7 - *piVar1;
      iVar6 = -iVar8;
      if (-1 < iVar8) {
        iVar6 = iVar8;
      }
      if (iVar6 < 0x80) {
        iVar7 = *piVar1;
      }
      puVar5[1] = iVar7;
      puVar5[2] = iVar7 + 0x20U & 0xffffffc0;
      puVar5 = puVar5 + 3;
    }
  }
  return;
}



// FUNCTION 144e15e60 FUN_144e15e60 body=311 status=ok
// SIG undefined FUN_144e15e60(void)

void FUN_144e15e60(undefined8 param_1,char param_2,uint param_3,short *param_4,uint *param_5,
                  uint *param_6)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  
  bVar1 = true;
  uVar9 = *param_5;
  uVar11 = *param_6;
  if (1 < param_3) {
    uVar10 = (ulonglong)((param_3 - 2 >> 1) + 1);
    do {
      bVar5 = false;
      if ((bVar1) || (param_2 != '\0')) {
        uVar12 = (uint)param_4[1];
        uVar13 = (int)*param_4 - uVar12;
        bVar1 = false;
        puVar8 = param_6;
        uVar6 = uVar11;
      }
      else {
        uVar12 = (uint)*param_4;
        bVar5 = true;
        uVar13 = (int)param_4[1] - uVar12;
        puVar8 = param_5;
        uVar6 = uVar9;
      }
      puVar8 = puVar8 + 1;
      if (uVar6 != 0) {
        while( true ) {
          uVar7 = (ulonglong)uVar6;
          if ((int)uVar12 < (int)*puVar8) break;
          if (uVar12 == *puVar8) {
            if ((int)uVar13 < 0) {
              if ((int)uVar13 < (int)puVar8[1]) {
                puVar8[1] = uVar13;
              }
            }
            else if ((int)puVar8[1] < (int)uVar13) {
              puVar8[1] = uVar13;
            }
            goto LAB_144e15f65;
          }
          puVar8 = puVar8 + 8;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) goto LAB_144e15f53;
        }
        if (uVar6 != 0) {
          puVar14 = puVar8 + uVar7 * 8;
          do {
            uVar6 = (int)uVar7 - 1;
            uVar7 = (ulonglong)uVar6;
            uVar2 = *(undefined8 *)(puVar8 + (ulonglong)uVar6 * 8 + 2);
            uVar3 = *(undefined8 *)(puVar8 + (ulonglong)uVar6 * 8 + 4);
            uVar4 = *(undefined8 *)(puVar8 + (ulonglong)uVar6 * 8 + 4 + 2);
            *(undefined8 *)puVar14 = *(undefined8 *)(puVar8 + (ulonglong)uVar6 * 8);
            *(undefined8 *)(puVar14 + 2) = uVar2;
            *(undefined8 *)(puVar14 + 4) = uVar3;
            *(undefined8 *)(puVar14 + 6) = uVar4;
            puVar14 = puVar14 + -8;
          } while (uVar6 != 0);
        }
      }
LAB_144e15f53:
      *puVar8 = uVar12;
      puVar8[1] = uVar13;
      if (bVar5) {
        uVar9 = uVar9 + 1;
      }
      else {
        uVar11 = uVar11 + 1;
      }
LAB_144e15f65:
      param_4 = param_4 + 2;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  *param_5 = uVar9;
  *param_6 = uVar11;
  return;
}



// FUNCTION 144e15fa0 FUN_144e15fa0 body=369 status=ok
// SIG undefined FUN_144e15fa0(void)

void FUN_144e15fa0(uint *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,int param_6,int param_7)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_7 == 0) {
    lVar4 = 0x204;
    puVar7 = param_1;
  }
  else {
    lVar4 = 0x60c;
    puVar7 = param_1 + 0x102;
  }
  puVar1 = (uint *)(lVar4 + (longlong)param_1);
  *puVar7 = 0;
  *puVar1 = 0;
  FUN_144e15e60(param_1,0,param_2,param_3,puVar7,puVar1);
  FUN_144e15e60(param_1,1,param_4,param_5,puVar7,puVar1);
  uVar9 = *puVar7;
  uVar2 = *puVar1;
  if (uVar9 != 0) {
    puVar5 = puVar7 + 1;
    uVar8 = uVar9;
    do {
      if ((1 < uVar8) && ((int)(puVar5[8] - *puVar5) < (int)puVar5[1])) {
        puVar5[1] = puVar5[8] - *puVar5;
      }
      puVar5[3] = *puVar5;
      puVar5[2] = *puVar5 + puVar5[1];
      puVar5 = puVar5 + 8;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if (uVar2 != 0) {
    puVar5 = puVar1 + 1;
    uVar8 = uVar2;
    do {
      if ((1 < uVar8) && ((int)puVar5[1] < (int)(*puVar5 - puVar5[8]))) {
        puVar5[1] = *puVar5 - puVar5[8];
      }
      puVar5[2] = *puVar5;
      puVar5[3] = *puVar5 + puVar5[1];
      puVar5 = puVar5 + 8;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  iVar6 = 1;
  do {
    if (uVar9 != 0) {
      puVar7[4] = puVar7[4] - param_6;
      uVar8 = puVar7[3];
      puVar7 = puVar7 + 1;
      while (uVar9 = uVar9 - 1, uVar9 != 0) {
        iVar3 = (int)(puVar7[0xb] - uVar8) / 2;
        if (iVar3 < param_6) {
          uVar8 = iVar3 + uVar8;
          puVar7[0xb] = uVar8;
        }
        else {
          uVar8 = uVar8 + param_6;
          puVar7[0xb] = puVar7[0xb] - param_6;
        }
        puVar7[2] = uVar8;
        uVar8 = puVar7[10];
        puVar7 = puVar7 + 8;
      }
      puVar7[2] = uVar8 + param_6;
    }
    iVar6 = iVar6 + -1;
    uVar9 = uVar2;
    puVar7 = puVar1;
  } while (-1 < iVar6);
  return;
}



// FUNCTION 144e16120 FUN_144e16120 body=506 status=ok
// SIG undefined FUN_144e16120(void)

void FUN_144e16120(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint local_res10;
  
  if (param_2 < 0x20c49ba) {
    *(bool *)(param_1 + 0x208) = param_2 * 0x7d < param_1[0x204] << 3;
  }
  else {
    *(bool *)(param_1 + 0x208) = param_2 < (param_1[0x204] << 3) / 0x7d;
  }
  iVar6 = param_1[0x205];
  while ((0 < iVar6 && (iVar1 = FUN_144b42fe0(iVar6,param_2), 0x20 < iVar1))) {
    iVar6 = iVar6 + -1;
  }
  param_1[0x206] = iVar6;
  local_res10 = 0;
  uVar7 = 0;
  do {
    piVar4 = param_1;
    if (uVar7 != 0) {
      if (uVar7 == 1) {
        piVar4 = param_1 + 0x81;
      }
      else if (uVar7 == 2) {
        piVar4 = param_1 + 0x102;
      }
      else {
        piVar4 = param_1 + 0x183;
      }
    }
    iVar6 = *piVar4;
    piVar4 = piVar4 + 1;
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      iVar1 = FUN_144b42fe0(piVar4[2],param_2);
      piVar4[7] = iVar1 + param_3;
      iVar1 = FUN_144b42fe0(piVar4[3],param_2);
      piVar4[6] = iVar1 + param_3;
      iVar1 = FUN_144b42fe0(*piVar4,param_2);
      piVar4[4] = iVar1 + param_3;
      iVar1 = FUN_144b42fe0(piVar4[1],param_2);
      piVar4[5] = iVar1;
      piVar4[4] = piVar4[4] + 0x20U & 0xffffffc0;
      piVar4 = piVar4 + 8;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 4);
  do {
    if (local_res10 == 0) {
      lVar5 = 0x408;
      piVar4 = param_1;
    }
    else {
      lVar5 = 0x60c;
      piVar4 = param_1 + 0x81;
    }
    piVar8 = piVar4 + 1;
    for (iVar6 = *piVar4; iVar6 != 0; iVar6 = iVar6 + -1) {
      piVar4 = (int *)(lVar5 + (longlong)param_1) + 1;
      for (iVar1 = *(int *)(lVar5 + (longlong)param_1); iVar1 != 0; iVar1 = iVar1 + -1) {
        iVar2 = *piVar8 - *piVar4;
        iVar3 = -iVar2;
        if (-1 < iVar2) {
          iVar3 = iVar2;
        }
        iVar3 = FUN_144b42fe0(iVar3,param_2);
        if (iVar3 < 0x40) {
          piVar8[7] = piVar4[7];
          piVar8[6] = piVar4[6];
          piVar8[4] = piVar4[4];
          piVar8[5] = piVar4[5];
          break;
        }
        piVar4 = piVar4 + 8;
      }
      piVar8 = piVar8 + 8;
    }
    local_res10 = local_res10 + 1;
    if (1 < local_res10) {
      return;
    }
  } while( true );
}



// FUNCTION 144e16360 FUN_144e16360 body=671 status=ok
// SIG undefined FUN_144e16360(void)

int FUN_144e16360(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  short *psVar5;
  short sVar6;
  uint uVar7;
  short sVar8;
  ulonglong uVar9;
  int *piVar10;
  ulonglong uVar11;
  int local_res20 [2];
  
  puVar4 = (undefined8 *)FUN_144b560d0(param_1,0x9c8,local_res20);
  if (local_res20[0] != 0) {
    *param_3 = (longlong)puVar4;
    return local_res20[0];
  }
  *puVar4 = param_1;
  *(uint *)(puVar4 + 0x1b) = (uint)*(ushort *)(param_2 + 0x78);
  piVar10 = (int *)((longlong)puVar4 + 0xe4);
  uVar7 = (uint)*(byte *)(param_2 + 0x7c);
  psVar5 = (short *)(param_2 + 0x80);
  if (*(byte *)(param_2 + 0x7c) != 0) {
    do {
      sVar6 = *psVar5;
      psVar5 = psVar5 + 1;
      *piVar10 = (int)sVar6;
      piVar10 = piVar10 + 3;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  psVar5 = (short *)(param_2 + 0x9a);
  *(uint *)((longlong)puVar4 + 0xd4) = *(byte *)(param_2 + 0x7c) + 1;
  *(uint *)((longlong)puVar4 + 0xc) = (uint)*(ushort *)(param_2 + 0x7a);
  piVar10 = (int *)(puVar4 + 3);
  uVar7 = (uint)*(byte *)(param_2 + 0x7d);
  if (*(byte *)(param_2 + 0x7d) != 0) {
    do {
      sVar6 = *psVar5;
      psVar5 = psVar5 + 1;
      *piVar10 = (int)sVar6;
      piVar10 = piVar10 + 3;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  lVar1 = param_2 + 0x28;
  *(uint *)(puVar4 + 1) = *(byte *)(param_2 + 0x7d) + 1;
  FUN_144e15fa0(puVar4 + 0x34,*(undefined1 *)(param_2 + 8),param_2 + 0xc,
                *(undefined1 *)(param_2 + 9),lVar1,*(undefined4 *)(param_2 + 0x74),0);
  lVar2 = param_2 + 0x58;
  sVar6 = 1;
  FUN_144e15fa0(puVar4 + 0x34,*(undefined1 *)(param_2 + 10),param_2 + 0x3c,
                *(undefined1 *)(param_2 + 0xb),lVar2,*(undefined4 *)(param_2 + 0x74),1);
  uVar9 = 0;
  uVar11 = uVar9;
  sVar8 = sVar6;
  if (*(byte *)(param_2 + 8) != 0) {
    do {
      uVar7 = (int)uVar11 + 2;
      sVar6 = *(short *)(param_2 + 0xc + (ulonglong)((int)uVar11 + 1) * 2) -
              *(short *)(param_2 + 0xc + uVar11 * 2);
      if (sVar6 <= sVar8) {
        sVar6 = sVar8;
      }
      uVar11 = (ulonglong)uVar7;
      sVar8 = sVar6;
    } while (uVar7 < *(byte *)(param_2 + 8));
  }
  uVar11 = uVar9;
  sVar8 = sVar6;
  if (*(byte *)(param_2 + 9) != 0) {
    do {
      uVar7 = (int)uVar11 + 2;
      sVar6 = *(short *)(lVar1 + (ulonglong)((int)uVar11 + 1) * 2) - *(short *)(lVar1 + uVar11 * 2);
      if (sVar6 <= sVar8) {
        sVar6 = sVar8;
      }
      uVar11 = (ulonglong)uVar7;
      sVar8 = sVar6;
    } while (uVar7 < *(byte *)(param_2 + 9));
  }
  uVar11 = uVar9;
  sVar8 = sVar6;
  if (*(byte *)(param_2 + 10) != 0) {
    do {
      uVar7 = (int)uVar11 + 2;
      sVar6 = *(short *)(param_2 + 0x3c + (ulonglong)((int)uVar11 + 1) * 2) -
              *(short *)(param_2 + 0x3c + uVar11 * 2);
      if (sVar6 <= sVar8) {
        sVar6 = sVar8;
      }
      uVar11 = (ulonglong)uVar7;
      sVar8 = sVar6;
    } while (uVar7 < *(byte *)(param_2 + 10));
  }
  sVar8 = sVar6;
  if (*(byte *)(param_2 + 0xb) != 0) {
    do {
      uVar7 = (int)uVar9 + 2;
      sVar6 = *(short *)(lVar2 + (ulonglong)((int)uVar9 + 1) * 2) - *(short *)(lVar2 + uVar9 * 2);
      if (sVar6 <= sVar8) {
        sVar6 = sVar8;
      }
      uVar9 = (ulonglong)uVar7;
      sVar8 = sVar6;
    } while (uVar7 < *(byte *)(param_2 + 0xb));
  }
  iVar3 = FUN_144b555e0(1000,(int)sVar6);
  if (*(int *)(param_2 + 0x6c) < iVar3) {
    iVar3 = *(int *)(param_2 + 0x6c);
  }
  *(int *)(puVar4 + 0x136) = iVar3;
  *(undefined4 *)((longlong)puVar4 + 0x9b4) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)((longlong)puVar4 + 0x9bc) = *(undefined4 *)(param_2 + 0x74);
  *(undefined8 *)((longlong)puVar4 + 0xcc) = 0;
  puVar4[0x33] = 0;
  *param_3 = (longlong)puVar4;
  return local_res20[0];
}



// FUNCTION 144e16600 FUN_144e16600 body=130 status=ok
// SIG undefined FUN_144e16600(void)

int FUN_144e16600(longlong param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int local_res10 [6];
  
  local_res10[0] = 0;
  uVar2 = param_2 + 7U >> 3;
  uVar3 = *(int *)(param_1 + 4) + 7U >> 3;
  if (uVar3 < uVar2) {
    uVar2 = uVar2 + 7 & 0xfffffff8;
    uVar1 = FUN_144b561b0(param_3,1,uVar3,uVar2,*(undefined8 *)(param_1 + 8),local_res10);
    *(undefined8 *)(param_1 + 8) = uVar1;
    if (local_res10[0] == 0) {
      *(uint *)(param_1 + 4) = uVar2 * 8;
    }
    return local_res10[0];
  }
  return 0;
}



// FUNCTION 144e16690 FUN_144e16690 body=126 status=ok
// SIG undefined FUN_144e16690(void)

void FUN_144e16690(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  for (iVar2 = *(int *)((longlong)param_1 + 4); iVar2 != 0; iVar2 = iVar2 + -1) {
    FUN_144b56350(param_2,puVar1[1]);
    puVar1[1] = 0;
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 3;
  }
  FUN_144b56350(param_2,param_1[1]);
  param_1[1] = 0;
  *param_1 = 0;
  return;
}



// FUNCTION 144e16710 FUN_144e16710 body=185 status=ok
// SIG undefined FUN_144e16710(void)

int FUN_144e16710(uint *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  int local_res8 [2];
  
  uVar5 = *param_1 + 1;
  if (param_1[1] < uVar5) {
    uVar4 = *param_1 + 8 & 0xfffffff8;
    local_res8[0] = 0;
    uVar3 = FUN_144b561b0(param_2,0x18,param_1[1],uVar4,*(undefined8 *)(param_1 + 2),local_res8);
    *(undefined8 *)(param_1 + 2) = uVar3;
    if (local_res8[0] != 0) {
      *param_3 = 0;
      return local_res8[0];
    }
    param_1[1] = uVar4;
  }
  lVar2 = *(longlong *)(param_1 + 2);
  lVar1 = (ulonglong)uVar5 - 1;
  *(undefined4 *)(lVar2 + lVar1 * 0x18) = 0;
  *(undefined4 *)(lVar2 + 0x10 + lVar1 * 0x18) = 0;
  *param_1 = uVar5;
  *param_3 = lVar2 + lVar1 * 0x18;
  return 0;
}



// FUNCTION 144e167d0 FUN_144e167d0 body=241 status=ok
// SIG undefined FUN_144e167d0(void)

ulonglong FUN_144e167d0(uint *param_1,longlong param_2,ulonglong param_3,int param_4,
                       undefined8 param_5)

{
  uint uVar1;
  ulonglong uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulonglong uVar8;
  int *local_res8;
  
  uVar2 = 0;
  if (*param_1 == 0) {
    uVar1 = FUN_144e16710(param_1,param_5,&local_res8);
    uVar2 = (ulonglong)uVar1;
    if (uVar1 == 0) goto LAB_144e16829;
  }
  else {
    local_res8 = (int *)(*(longlong *)(param_1 + 2) + ((ulonglong)*param_1 * 3 + -3) * 8);
  }
  if ((int)uVar2 != 0) {
    return uVar2;
  }
LAB_144e16829:
  uVar2 = FUN_144e16600(local_res8,param_4,param_5);
  uVar8 = uVar2 & 0xffffffff;
  if ((int)uVar2 == 0) {
    pbVar6 = *(byte **)(local_res8 + 2);
    *local_res8 = param_4;
    pbVar7 = (byte *)(((param_3 & 0xffffffff) >> 3) + param_2);
    iVar5 = 0x80 >> ((byte)param_3 & 7);
    iVar4 = 0x80;
    for (; param_4 != 0; param_4 = param_4 + -1) {
      bVar3 = *pbVar6 & ~(byte)iVar4;
      if ((*pbVar7 & (byte)iVar5) != 0) {
        bVar3 = bVar3 | (byte)iVar4;
      }
      iVar5 = iVar5 >> 1;
      *pbVar6 = bVar3;
      if (iVar5 == 0) {
        pbVar7 = pbVar7 + 1;
        iVar5 = 0x80;
      }
      iVar4 = iVar4 >> 1;
      if (iVar4 == 0) {
        pbVar6 = pbVar6 + 1;
        iVar4 = 0x80;
      }
      uVar2 = uVar8;
    }
  }
  return uVar2;
}



// FUNCTION 144e168d0 FUN_144e168d0 body=361 status=ok
// SIG undefined FUN_144e168d0(void)

ulonglong FUN_144e168d0(uint *param_1,uint param_2,uint param_3,undefined8 param_4)

{
  uint *puVar1;
  undefined8 *_Dst;
  undefined8 uVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  byte *pbVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  
  uVar10 = 0;
  uVar12 = param_3;
  if (param_3 < param_2) {
    uVar12 = param_2;
    param_2 = param_3;
  }
  if ((param_2 < uVar12) && (uVar12 < *param_1)) {
    lVar5 = *(longlong *)(param_1 + 2);
    uVar11 = *(uint *)(lVar5 + (ulonglong)param_2 * 0x18);
    puVar1 = (uint *)(lVar5 + (ulonglong)param_2 * 0x18);
    uVar4 = *(uint *)(lVar5 + (ulonglong)uVar12 * 0x18);
    _Dst = (undefined8 *)(lVar5 + (ulonglong)uVar12 * 0x18);
    if (uVar4 != 0) {
      if (uVar11 < uVar4) {
        uVar9 = FUN_144e16600(puVar1,uVar4,param_4);
        uVar10 = uVar9 & 0xffffffff;
        if ((int)uVar9 != 0) {
          return uVar9;
        }
        if (uVar11 < uVar4) {
          uVar9 = (ulonglong)uVar11;
          do {
            if (uVar11 < *puVar1) {
              pbVar13 = (byte *)((uVar9 >> 3) + *(longlong *)(puVar1 + 2));
              *pbVar13 = *pbVar13 & ~(byte)(0x80 >> ((byte)uVar11 & 7));
            }
            uVar11 = uVar11 + 1;
            uVar9 = uVar9 + 1;
          } while (uVar11 < uVar4);
        }
      }
      pbVar13 = (byte *)_Dst[1];
      pbVar6 = *(byte **)(puVar1 + 2);
      for (uVar11 = uVar4 + 7 >> 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        bVar3 = *pbVar13;
        pbVar13 = pbVar13 + 1;
        *pbVar6 = *pbVar6 | bVar3;
        pbVar6 = pbVar6 + 1;
      }
    }
    *(undefined4 *)_Dst = 0;
    *(undefined4 *)(_Dst + 2) = 0;
    uVar12 = (*param_1 - uVar12) - 1;
    if (0 < (int)uVar12) {
      uVar7 = *_Dst;
      uVar8 = _Dst[1];
      uVar2 = _Dst[2];
      memmove(_Dst,_Dst + 3,(ulonglong)uVar12 * 0x18);
      _Dst[(longlong)(int)uVar12 * 3] = uVar7;
      (_Dst + (longlong)(int)uVar12 * 3)[1] = uVar8;
      _Dst[(longlong)(int)uVar12 * 3 + 2] = uVar2;
    }
    *param_1 = *param_1 - 1;
  }
  return uVar10;
}



// FUNCTION 144e16a40 FUN_144e16a40 body=257 status=ok
// SIG undefined FUN_144e16a40(void)

ulonglong FUN_144e16a40(int *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulonglong uVar7;
  byte *pbVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar9 = 0;
  uVar11 = *param_1 - 1;
  if ((int)uVar11 < 1) {
    return 0;
  }
  do {
    uVar1 = uVar11 - 1;
    if (0 < (int)uVar11) {
      lVar4 = *(longlong *)(param_1 + 2);
      pbVar5 = *(byte **)(lVar4 + 8 + (ulonglong)uVar11 * 0x18);
      uVar2 = *(uint *)(lVar4 + (ulonglong)uVar11 * 0x18);
      uVar10 = uVar1;
      do {
        uVar7 = (ulonglong)uVar10;
        pbVar8 = *(byte **)(lVar4 + 8 + uVar7 * 0x18);
        uVar3 = *(uint *)(lVar4 + uVar7 * 0x18);
        pbVar6 = pbVar5;
        if (uVar2 < uVar3) {
          uVar3 = uVar2;
        }
        for (; 7 < uVar3; uVar3 = uVar3 - 8) {
          if ((*pbVar6 & *pbVar8) != 0) goto LAB_144e16af8;
          pbVar8 = pbVar8 + 1;
          pbVar6 = pbVar6 + 1;
        }
        if ((uVar3 != 0) && (((uint)(*pbVar8 & *pbVar6) & ~(0xff >> ((byte)uVar3 & 0x1f))) != 0)) {
LAB_144e16af8:
          uVar7 = FUN_144e168d0(param_1,uVar7,uVar11,param_2);
          uVar9 = uVar7 & 0xffffffff;
          if ((int)uVar7 != 0) {
            return uVar7;
          }
          break;
        }
        uVar10 = uVar10 - 1;
      } while (-1 < (int)uVar10);
    }
    uVar11 = uVar1;
    if ((int)uVar1 < 1) {
      return uVar9;
    }
  } while( true );
}



// FUNCTION 144e16b50 FUN_144e16b50 body=121 status=ok
// SIG undefined FUN_144e16b50(void)

void FUN_144e16b50(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  int iVar1;
  undefined1 local_res8 [8];
  
  if (*(uint *)(param_1 + 0x10) != 0) {
    *(undefined4 *)
     (*(longlong *)(param_1 + 0x18) + -8 + (ulonglong)*(uint *)(param_1 + 0x10) * 0x18) = param_5;
  }
  iVar1 = FUN_144e16710(param_1 + 0x10,param_6,local_res8);
  if (iVar1 == 0) {
    FUN_144e167d0(param_1 + 0x10,param_2,param_3,param_4,param_6);
  }
  return;
}



// FUNCTION 144e16bd0 FUN_144e16bd0 body=578 status=ok
// SIG undefined FUN_144e16bd0(void)

/* WARNING: Removing unreachable block (ram,0x000144e16e00) */

int * FUN_144e16bd0(uint *param_1,int param_2,int param_3,undefined8 param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  uint uVar5;
  int *piVar6;
  undefined8 uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar12;
  longlong lVar13;
  uint *puVar14;
  uint local_res18 [2];
  undefined8 local_res20;
  int *piVar11;
  
  puVar4 = param_5;
  piVar8 = (int *)0x0;
  uVar10 = 0;
  local_res18[0] = 0;
  iVar9 = param_3;
  if ((param_3 < 0) && (local_res18[0] = 1, iVar9 = 0, param_3 == -0x15)) {
    local_res18[0] = 3;
    param_2 = param_2 + -0x15;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = 0xffffffff;
  }
  uVar5 = *param_1;
  piVar6 = *(int **)(param_1 + 2);
  piVar11 = piVar8;
  local_res20 = param_4;
  if (uVar5 != 0) {
    do {
      uVar10 = (uint)piVar11;
      if ((*piVar6 == param_2) && (piVar6[1] == iVar9)) {
        if (uVar10 < uVar5) goto LAB_144e16d14;
        break;
      }
      uVar10 = uVar10 + 1;
      piVar11 = (int *)(ulonglong)uVar10;
      piVar6 = piVar6 + 3;
    } while (uVar10 < uVar5);
  }
  uVar2 = param_1[1];
  uVar1 = uVar5 + 1;
  piVar6 = piVar8;
  if (uVar1 < uVar2) {
LAB_144e16cd3:
    lVar3 = *(longlong *)(param_1 + 2);
    lVar13 = (ulonglong)uVar1 * 3 + -3;
    *(undefined8 *)(lVar3 + lVar13 * 4) = 0;
    piVar11 = (int *)(lVar3 + lVar13 * 4);
    piVar11[2] = 0;
    *param_1 = uVar1;
  }
  else {
    param_5._0_4_ = 0;
    piVar11 = piVar8;
    if (uVar2 < uVar1) {
      uVar5 = uVar5 + 8 & 0xfffffff8;
      uVar7 = FUN_144b561b0(param_4,0xc,uVar2,uVar5,*(int **)(param_1 + 2),&param_5);
      piVar6 = (int *)(ulonglong)(uint)param_5;
      *(undefined8 *)(param_1 + 2) = uVar7;
      if ((uint)param_5 == 0) {
        param_1[1] = uVar5;
        goto LAB_144e16ccf;
      }
    }
    else {
LAB_144e16ccf:
      if ((int)piVar6 == 0) goto LAB_144e16cd3;
    }
  }
  if ((int)piVar6 != 0) {
    return piVar6;
  }
  piVar11[2] = local_res18[0];
  *piVar11 = param_2;
  piVar11[1] = iVar9;
LAB_144e16d14:
  if (param_1[4] == 0) {
    if (param_1[5] == 0) {
      local_res18[0] = 0;
      uVar7 = FUN_144b561b0(local_res20,0x18,0,8,*(undefined8 *)(param_1 + 6),local_res18);
      *(undefined8 *)(param_1 + 6) = uVar7;
      if (local_res18[0] != 0) {
        return (int *)(ulonglong)local_res18[0];
      }
      param_1[5] = 8;
    }
    puVar14 = *(uint **)(param_1 + 6);
    *puVar14 = 0;
    puVar14[4] = 0;
    param_1[4] = 1;
  }
  else {
    puVar14 = (uint *)(*(longlong *)(param_1 + 6) + ((ulonglong)param_1[4] * 3 + -3) * 8);
  }
  if (*puVar14 <= uVar10) {
    uVar5 = FUN_144e16600(puVar14,uVar10 + 1,local_res20);
    piVar8 = (int *)(ulonglong)uVar5;
    if (uVar5 != 0) goto LAB_144e16ded;
    *puVar14 = uVar10 + 1;
  }
  pbVar12 = (byte *)((ulonglong)(uVar10 >> 3) + *(longlong *)(puVar14 + 2));
  *pbVar12 = *pbVar12 | (byte)(0x80 >> ((byte)uVar10 & 7));
LAB_144e16ded:
  if (((int)piVar8 == 0) && (puVar4 != (uint *)0x0)) {
    *puVar4 = uVar10;
  }
  return piVar8;
}



// FUNCTION 144e16e20 FUN_144e16e20 body=622 status=ok
// SIG undefined FUN_144e16e20(void)

/* WARNING: Removing unreachable block (ram,0x000144e17070) */

int FUN_144e16e20(longlong param_1,uint param_2,uint param_3,uint param_4,undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  byte *pbVar5;
  uint *puVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  int local_res8 [2];
  
  puVar6 = *(uint **)(param_1 + 0x28);
  iVar8 = *(int *)(param_1 + 0x20);
  if (iVar8 != 0) {
    do {
      uVar9 = *puVar6;
      if ((((param_2 < uVar9) &&
           (((uint)*(byte *)(((longlong)(int)param_2 >> 3) + *(longlong *)(puVar6 + 2)) &
            0x80 >> ((byte)param_2 & 7)) != 0)) ||
          ((param_3 < uVar9 &&
           (((uint)*(byte *)(((longlong)(int)param_3 >> 3) + *(longlong *)(puVar6 + 2)) &
            0x80 >> ((byte)param_3 & 7)) != 0)))) ||
         ((param_4 < uVar9 &&
          (((uint)*(byte *)(((longlong)(int)param_4 >> 3) + *(longlong *)(puVar6 + 2)) &
           0x80 >> ((byte)param_4 & 7)) != 0)))) break;
      puVar6 = puVar6 + 6;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  iVar2 = 0;
  if (iVar8 == 0) {
    uVar9 = *(int *)(param_1 + 0x20) + 1;
    if (*(uint *)(param_1 + 0x24) < uVar9) {
      local_res8[0] = 0;
      uVar4 = *(int *)(param_1 + 0x20) + 8U & 0xfffffff8;
      uVar3 = FUN_144b561b0(param_5,0x18,*(uint *)(param_1 + 0x24),uVar4,
                            *(undefined8 *)(param_1 + 0x28),local_res8);
      *(undefined8 *)(param_1 + 0x28) = uVar3;
      if (local_res8[0] != 0) {
        return local_res8[0];
      }
      *(uint *)(param_1 + 0x24) = uVar4;
    }
    lVar1 = *(longlong *)(param_1 + 0x28);
    lVar7 = (ulonglong)uVar9 * 3 + -3;
    *(undefined4 *)(lVar1 + lVar7 * 8) = 0;
    puVar6 = (uint *)(lVar1 + lVar7 * 8);
    puVar6[4] = 0;
    *(uint *)(param_1 + 0x20) = uVar9;
  }
  if (-1 < (int)param_2) {
    iVar8 = iVar2;
    if (param_2 < *puVar6) {
LAB_144e16fcb:
      pbVar5 = (byte *)((ulonglong)(param_2 >> 3) + *(longlong *)(puVar6 + 2));
      *pbVar5 = *pbVar5 | (byte)(0x80 >> ((byte)param_2 & 7));
    }
    else {
      iVar8 = FUN_144e16600(puVar6,param_2 + 1,param_5);
      if (iVar8 == 0) {
        *puVar6 = param_2 + 1;
        goto LAB_144e16fcb;
      }
    }
    if (iVar8 != 0) {
      return iVar8;
    }
  }
  if ((int)param_3 < 0) goto LAB_144e1702f;
  if (param_3 < *puVar6) {
LAB_144e17011:
    pbVar5 = (byte *)((ulonglong)(param_3 >> 3) + *(longlong *)(puVar6 + 2));
    *pbVar5 = *pbVar5 | (byte)(0x80 >> ((byte)param_3 & 7));
  }
  else {
    iVar2 = FUN_144e16600(puVar6,param_3 + 1,param_5);
    if (iVar2 == 0) {
      *puVar6 = param_3 + 1;
      goto LAB_144e17011;
    }
  }
  if (iVar2 != 0) {
    return iVar2;
  }
LAB_144e1702f:
  if (-1 < (int)param_4) {
    if (*puVar6 <= param_4) {
      iVar8 = FUN_144e16600(puVar6,param_4 + 1,param_5);
      if (iVar8 != 0) {
        return iVar8;
      }
      *puVar6 = param_4 + 1;
    }
    pbVar5 = (byte *)((ulonglong)(param_4 >> 3) + *(longlong *)(puVar6 + 2));
    *pbVar5 = *pbVar5 | (byte)(0x80 >> ((byte)param_4 & 7));
  }
  return 0;
}



// FUNCTION 144e17090 FUN_144e17090 body=766 status=ok
// SIG undefined FUN_144e17090(void)

void FUN_144e17090(undefined8 *param_1,uint param_2,int param_3,int *param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  int *piVar4;
  undefined8 uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int local_58;
  int local_54;
  int local_50 [2];
  undefined8 local_48;
  
  if (*(int *)(param_1 + 1) == 0) {
    if (1 < param_2) {
      param_2 = (uint)(param_2 != 0);
    }
    for (; 0 < param_3; param_3 = param_3 + -1) {
      local_48 = *param_1;
      iVar13 = 0;
      iVar9 = param_4[1];
      iVar14 = *param_4;
      if (iVar9 < 0) {
        iVar13 = 1;
        if (iVar9 == -0x15) {
          iVar13 = 3;
          iVar14 = iVar14 + -0x15;
        }
        iVar9 = 0;
      }
      uVar12 = *(uint *)(param_1 + (ulonglong)param_2 * 6 + 3);
      uVar8 = 0;
      piVar4 = (int *)param_1[(ulonglong)param_2 * 6 + 4];
      if (uVar12 != 0) {
        do {
          if ((*piVar4 == iVar14) && (piVar4[1] == iVar9)) {
            if (uVar8 < uVar12) goto LAB_144e17205;
            break;
          }
          uVar8 = uVar8 + 1;
          piVar4 = piVar4 + 3;
        } while (uVar8 < uVar12);
      }
      uVar2 = *(uint *)((longlong)param_1 + (ulonglong)param_2 * 0x30 + 0x1c);
      uVar6 = uVar12 + 1;
      iVar11 = 0;
      if (uVar2 <= uVar6) {
        local_58 = 0;
        if (uVar2 < uVar6) {
          uVar12 = uVar12 + 8 & 0xfffffff8;
          uVar5 = FUN_144b561b0(local_48,0xc,uVar2,uVar12,(int *)param_1[(ulonglong)param_2 * 6 + 4]
                                ,&local_58);
          param_1[(ulonglong)param_2 * 6 + 4] = uVar5;
          if (local_58 == 0) {
            *(uint *)((longlong)param_1 + (ulonglong)param_2 * 0x30 + 0x1c) = uVar12;
          }
        }
        iVar11 = local_58;
        if (local_58 != 0) goto LAB_144e17358;
      }
      lVar3 = param_1[(ulonglong)param_2 * 6 + 4];
      lVar1 = (ulonglong)uVar6 - 1;
      *(undefined8 *)(lVar3 + lVar1 * 0xc) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar1 * 0xc) = 0;
      piVar4 = (int *)(lVar3 + lVar1 * 0xc);
      *(uint *)(param_1 + (ulonglong)param_2 * 6 + 3) = uVar6;
      if (iVar11 != 0) {
LAB_144e17358:
        *(int *)(param_1 + 1) = iVar11;
        return;
      }
      *piVar4 = iVar14;
      piVar4[1] = iVar9;
      piVar4[2] = iVar13;
LAB_144e17205:
      iVar11 = 0;
      if (*(uint *)(param_1 + (ulonglong)param_2 * 6 + 5) == 0) {
        if (*(int *)((longlong)param_1 + (ulonglong)param_2 * 0x30 + 0x2c) == 0) {
          local_54 = 0;
          uVar5 = FUN_144b561b0(local_48,0x18,0,8,param_1[(ulonglong)param_2 * 6 + 6],&local_54);
          param_1[(ulonglong)param_2 * 6 + 6] = uVar5;
          iVar11 = local_54;
          if (local_54 != 0) goto LAB_144e17358;
          *(undefined4 *)((longlong)param_1 + (ulonglong)param_2 * 0x30 + 0x2c) = 8;
        }
        puVar10 = (uint *)param_1[(ulonglong)param_2 * 6 + 6];
        *puVar10 = 0;
        puVar10[4] = 0;
        *(undefined4 *)(param_1 + (ulonglong)param_2 * 6 + 5) = 1;
      }
      else {
        puVar10 = (uint *)(param_1[(ulonglong)param_2 * 6 + 6] +
                          ((ulonglong)*(uint *)(param_1 + (ulonglong)param_2 * 6 + 5) * 3 + -3) * 8)
        ;
      }
      if (iVar11 != 0) goto LAB_144e17358;
      if (*puVar10 <= uVar8) {
        uVar12 = uVar8 + 8 >> 3;
        uVar6 = puVar10[1] + 7 >> 3;
        local_50[0] = iVar11;
        if (uVar6 < uVar12) {
          uVar12 = uVar12 + 7 & 0xfffffff8;
          uVar5 = FUN_144b561b0(local_48,1,uVar6,uVar12,*(undefined8 *)(puVar10 + 2),local_50);
          *(undefined8 *)(puVar10 + 2) = uVar5;
          iVar11 = local_50[0];
          if (local_50[0] != 0) goto LAB_144e17358;
          puVar10[1] = uVar12 * 8;
        }
        iVar11 = local_50[0];
        if (local_50[0] != 0) goto LAB_144e17358;
        *puVar10 = uVar8 + 1;
      }
      pbVar7 = (byte *)((ulonglong)(uVar8 >> 3) + *(longlong *)(puVar10 + 2));
      *pbVar7 = *pbVar7 | (byte)(0x80 >> ((byte)uVar8 & 7));
      if (iVar11 != 0) goto LAB_144e17358;
      param_4 = param_4 + 2;
    }
  }
  return;
}



// FUNCTION 144e17390 FUN_144e17390 body=275 status=ok
// SIG undefined FUN_144e17390(void)

void FUN_144e17390(longlong *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined4 local_58 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((int)param_1[1] == 0) {
    iVar4 = 0;
    puVar1 = (undefined4 *)*param_1;
    if (1 < param_2) {
      param_2 = (uint)(param_2 != 0);
    }
    if ((int)param_1[2] == 1) {
      do {
        iVar2 = FUN_144b55630(param_3[1]);
        iVar3 = FUN_144b55630(*param_3);
        local_68 = local_58 + iVar4;
        iVar2 = FUN_144e16bd0(param_1 + (ulonglong)param_2 * 6 + 3,iVar3 >> 0x10,iVar2 >> 0x10,
                              puVar1);
        if (iVar2 != 0) goto LAB_144e17479;
        iVar4 = iVar4 + 1;
        param_3 = param_3 + 2;
      } while (iVar4 < 3);
      local_68 = puVar1;
      iVar2 = FUN_144e16e20(param_1 + (ulonglong)param_2 * 6 + 3,local_58[0],local_58[1],local_58[2]
                           );
      if (iVar2 == 0) goto LAB_144e17496;
    }
    else {
      iVar2 = 6;
    }
LAB_144e17479:
    *(int *)(param_1 + 1) = iVar2;
  }
LAB_144e17496:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
}



// FUNCTION 144e174b0 FUN_144e174b0 body=159 status=ok
// SIG undefined FUN_144e174b0(void)

void FUN_144e174b0(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 local_res8 [8];
  
  if (*(int *)(param_1 + 1) == 0) {
    uVar1 = *param_1;
    if (*(int *)(param_1 + 2) == 1) {
      if (*(uint *)(param_1 + 5) != 0) {
        *(undefined4 *)(param_1[6] + -8 + (ulonglong)*(uint *)(param_1 + 5) * 0x18) = param_2;
      }
      iVar2 = FUN_144e16710(param_1 + 5,uVar1,local_res8);
      if (iVar2 == 0) {
        if (*(uint *)(param_1 + 0xb) != 0) {
          *(undefined4 *)(param_1[0xc] + -8 + (ulonglong)*(uint *)(param_1 + 0xb) * 0x18) = param_2;
        }
        iVar2 = FUN_144e16710(param_1 + 0xb,uVar1,local_res8);
        if (iVar2 == 0) {
          return;
        }
        *(int *)(param_1 + 1) = iVar2;
        return;
      }
    }
    else {
      iVar2 = 6;
    }
    *(int *)(param_1 + 1) = iVar2;
  }
  return;
}



// FUNCTION 144e17550 FUN_144e17550 body=147 status=ok
// SIG undefined FUN_144e17550(void)

void FUN_144e17550(undefined8 *param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 1) == 0) {
    iVar1 = *(int *)(param_1 + 9);
    uVar2 = *param_1;
    if ((param_3 == iVar1 + *(int *)(param_1 + 3)) &&
       ((iVar3 = FUN_144e16b50(param_1 + 3,param_4,iVar1,*(int *)(param_1 + 3),param_2,uVar2),
        iVar3 != 0 || (iVar3 = FUN_144e16b50(param_1 + 9,param_4,0,iVar1,param_2,uVar2), iVar3 != 0)
        ))) {
      *(int *)(param_1 + 1) = iVar3;
    }
  }
  return;
}



// FUNCTION 144e175f0 FUN_144e175f0 body=158 status=ok
// SIG undefined FUN_144e175f0(void)

void FUN_144e175f0(undefined8 *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 1) == 0) {
    iVar1 = *(int *)(param_1 + 9);
    iVar2 = *(int *)(param_1 + 3);
    uVar3 = *param_1;
    if ((param_2 == iVar1 + iVar2) &&
       ((iVar4 = FUN_144e16b50(param_1 + 3,param_3,0,iVar2,0,uVar3), iVar4 != 0 ||
        (iVar4 = FUN_144e16b50(param_1 + 9,param_3,iVar2,iVar1,0,uVar3), iVar4 != 0)))) {
      *(int *)(param_1 + 1) = iVar4;
    }
  }
  return;
}



// FUNCTION 144e17690 FUN_144e17690 body=113 status=ok
// SIG undefined FUN_144e17690(void)

void FUN_144e17690(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 1) == 0) {
    uVar1 = *param_1;
    if (*(uint *)(param_1 + 5) != 0) {
      *(undefined4 *)(param_1[6] + -8 + (ulonglong)*(uint *)(param_1 + 5) * 0x18) = param_2;
    }
    iVar2 = FUN_144e16a40(param_1 + 7,uVar1);
    if (iVar2 == 0) {
      if (*(uint *)(param_1 + 0xb) != 0) {
        *(undefined4 *)(param_1[0xc] + -8 + (ulonglong)*(uint *)(param_1 + 0xb) * 0x18) = param_2;
      }
      FUN_144e16a40(param_1 + 0xd,uVar1);
    }
  }
  return;
}



// FUNCTION 144e17730 FUN_144e17730 body=90 status=ok
// SIG undefined FUN_144e17730(void)

void FUN_144e17730(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  int local_res18;
  int local_res1c;
  
  local_res18 = FUN_144b55630(*param_3);
  local_res18 = local_res18 >> 0x10;
  local_res1c = FUN_144b55630(param_3[1]);
  local_res1c = local_res1c >> 0x10;
  FUN_144e17090(param_1,param_2,1,&local_res18);
  return;
}



// FUNCTION 144e177b0 FUN_144e177b0 body=365 status=ok
// SIG undefined FUN_144e177b0(void)

void FUN_144e177b0(undefined8 *param_1,uint param_2,int param_3,longlong param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  int iVar9;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  longlong local_d8;
  int local_c8 [32];
  ulonglong local_48;
  
  if (param_3 < 1) {
    return;
  }
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar6 = 0;
  local_d8 = param_4;
  do {
    lVar4 = local_d8;
    iVar9 = param_3;
    if (0x10 < param_3) {
      iVar9 = 0x10;
    }
    lVar5 = 0;
    lVar7 = (longlong)(iVar9 * 2);
    if (0 < iVar9 * 2) {
      do {
        iVar6 = iVar6 + *(int *)(lVar4 + lVar5 * 4);
        iVar1 = FUN_144b55630(iVar6);
        local_c8[lVar5] = iVar1 >> 0x10;
        lVar5 = lVar5 + 1;
      } while (lVar5 < lVar7);
    }
    lVar4 = 0;
    if (0 < lVar7) {
      do {
        local_c8[lVar4 + 1] = local_c8[lVar4 + 1] - local_c8[lVar4];
        lVar4 = lVar4 + 2;
      } while (lVar4 < lVar7);
    }
    piVar8 = local_c8;
    if (*(int *)(param_1 + 1) == 0) {
      uVar2 = param_2;
      if (1 < param_2) {
        uVar2 = (uint)(param_2 != 0);
      }
      for (iVar1 = iVar9; 0 < iVar1; iVar1 = iVar1 + -1) {
        local_e8 = 0;
        iVar3 = FUN_144e16bd0(param_1 + (ulonglong)uVar2 * 6 + 3,*piVar8,piVar8[1],*param_1);
        if (iVar3 != 0) {
          *(int *)(param_1 + 1) = iVar3;
          break;
        }
        piVar8 = piVar8 + 2;
      }
    }
    param_3 = param_3 - iVar9;
    if (param_3 < 1) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
    }
  } while( true );
}



// FUNCTION 144e17930 FUN_144e17930 body=83 status=ok
// SIG undefined FUN_144e17930(void)

int FUN_144e17930(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int local_res10 [6];
  
  *param_2 = 0;
  puVar1 = (undefined8 *)FUN_144b560d0(param_1,8,local_res10);
  if (local_res10[0] == 0) {
    *puVar1 = param_1;
    *param_2 = puVar1;
    return 0;
  }
  return local_res10[0];
}



// FUNCTION 144e179c0 FUN_144e179c0 body=374 status=ok
// SIG undefined FUN_144e179c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144e179c0(longlong param_1,undefined8 *param_2)

{
  short *psVar1;
  int *piVar2;
  undefined1 auStack_4498 [32];
  undefined1 local_4478 [24];
  undefined1 *local_4460;
  ulonglong *local_4458;
  undefined8 local_43e8;
  undefined8 uStack_43e0;
  int local_43d8;
  int iStack_43d4;
  int iStack_43d0;
  int iStack_43cc;
  undefined8 local_43c8;
  undefined8 local_43c0;
  undefined8 uStack_43b8;
  undefined8 local_43b0;
  undefined8 uStack_43a8;
  undefined8 local_43a0;
  undefined1 local_4018 [16384];
  ulonglong local_18 [2];
  undefined8 uStack_8;
  
  uStack_8 = 0x144e179ca;
  local_18[0] = DAT_14c707940 ^ (ulonglong)auStack_4498;
  psVar1 = (short *)param_2[1];
  piVar2 = (int *)*param_2;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18[0] ^ (ulonglong)auStack_4498);
  }
  if (psVar1 != (short *)0x0) {
    if ((psVar1[1] == 0) || (*psVar1 < 1)) {
LAB_144e17b44:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18[0] ^ (ulonglong)auStack_4498);
    }
    if ((*(longlong *)(psVar1 + 0xc) != 0) &&
       ((*(longlong *)(psVar1 + 4) != 0 &&
        ((int)psVar1[1] ==
         *(short *)(*(longlong *)(psVar1 + 0xc) + (longlong)(*psVar1 + -1) * 2) + 1)))) {
      if (((*(uint *)(param_2 + 2) & 2) != 0) || ((*(uint *)(param_2 + 2) & 1) != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18[0] ^ (ulonglong)auStack_4498);
      }
      if (piVar2 != (int *)0x0) {
        if ((piVar2[1] == 0) || (*piVar2 == 0)) goto LAB_144e17b44;
        if (*(longlong *)(piVar2 + 4) != 0) {
          local_43c0 = *(undefined8 *)psVar1;
          uStack_43b8 = *(undefined8 *)(psVar1 + 4);
          local_4460 = local_4018;
          local_43b0 = *(undefined8 *)(psVar1 + 8);
          uStack_43a8 = *(undefined8 *)(psVar1 + 0xc);
          local_43a0 = *(undefined8 *)(psVar1 + 0x10);
          local_43e8 = *(undefined8 *)piVar2;
          uStack_43e0 = *(undefined8 *)(piVar2 + 2);
          local_43d8 = piVar2[4];
          iStack_43d4 = piVar2[5];
          iStack_43d0 = piVar2[6];
          iStack_43cc = piVar2[7];
          local_43c8 = *(undefined8 *)(piVar2 + 8);
          local_4458 = local_18;
          FUN_144e19ed0(local_4478);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18[0] ^ (ulonglong)auStack_4498);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18[0] ^ (ulonglong)auStack_4498);
}



// FUNCTION 144e17b60 FUN_144e17b60 body=32 status=ok
// SIG undefined FUN_144e17b60(void)

undefined8 FUN_144e17b60(longlong param_1)

{
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x60) + 0x10))
            (*(undefined8 *)(param_1 + 0x60),0,0);
  return 0;
}



// FUNCTION 144e17b90 FUN_144e17b90 body=96 status=ok
// SIG undefined FUN_144e17b90(void)

undefined8 FUN_144e17b90(longlong param_1,longlong param_2,longlong param_3,undefined4 *param_4)

{
  if (*(int *)(param_2 + 0x60) != *(int *)(param_1 + 0x20)) {
    return 6;
  }
  if (param_3 != 0) {
    FUN_144b5aea0(param_2 + 0x98,param_3);
  }
  if (param_4 != (undefined4 *)0x0) {
    FUN_144b5ada0(param_2 + 0x98,*param_4,param_4[1]);
  }
  return 0;
}



// FUNCTION 144e17c20 FUN_144e17c20 body=441 status=ok
// SIG undefined FUN_144e17c20(void)

void FUN_144e17c20(longlong param_1,longlong param_2,int param_3,int *param_4)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  int *local_c0;
  int local_b8 [4];
  int *local_a8;
  longlong local_a0;
  undefined4 local_98;
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar3 = param_2 + 0x98;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  piVar1 = (int *)(param_2 + 0x68);
  iVar7 = 0;
  local_b8[0] = 0;
  iVar8 = 0;
  if (*(int *)(param_2 + 0x60) != *(int *)(param_1 + 0x20)) {
    local_b8[0] = 6;
    goto LAB_144e17c7b;
  }
  if (param_3 != 2) goto LAB_144e17cca;
  if ((*(byte *)(*(longlong *)(param_2 + 0xf0) + 8) & 1) != 0) {
    FUN_144b56350(uVar4,*(undefined8 *)(param_2 + 0x78));
    *(undefined8 *)(param_2 + 0x78) = 0;
    puVar2 = (uint *)(*(longlong *)(param_2 + 0xf0) + 8);
    *puVar2 = *puVar2 & 0xfffffffe;
  }
  cVar5 = FUN_144b58410(param_2,2,param_4);
  if (cVar5 == '\0') {
    local_c0 = local_b8;
    local_c8 = 0;
    uVar6 = FUN_144b561b0(uVar4,*(undefined4 *)(param_2 + 0x70),0,*piVar1);
    *(undefined8 *)(param_2 + 0x78) = uVar6;
    iVar8 = 0;
    if (local_b8[0] != 0) goto LAB_144e17c7b;
    puVar2 = (uint *)(*(longlong *)(param_2 + 0xf0) + 8);
    *puVar2 = *puVar2 | 1;
    iVar7 = *(int *)(param_2 + 0x90) * -0x40;
    iVar8 = (*piVar1 - *(int *)(param_2 + 0x94)) * 0x40;
    if (param_4 != (int *)0x0) {
      iVar7 = iVar7 + *param_4;
      iVar8 = iVar8 + param_4[1];
    }
    if ((iVar7 != 0) || (iVar8 != 0)) {
      FUN_144b5ada0(lVar3,iVar7,iVar8);
    }
    local_98 = 0;
    local_a8 = piVar1;
    local_a0 = lVar3;
    local_b8[0] = (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60),&local_a8);
    if (local_b8[0] != 0) goto LAB_144e17c7b;
    *(undefined4 *)(param_2 + 0x60) = 0x62697473;
  }
  else {
    local_b8[0] = 0x62;
LAB_144e17c7b:
    if ((*(byte *)(*(longlong *)(param_2 + 0xf0) + 8) & 1) != 0) {
      FUN_144b56350(uVar4,*(undefined8 *)(param_2 + 0x78));
      *(undefined8 *)(param_2 + 0x78) = 0;
      puVar2 = (uint *)(*(longlong *)(param_2 + 0xf0) + 8);
      *puVar2 = *puVar2 & 0xfffffffe;
    }
  }
  if ((iVar7 != 0) || (iVar8 != 0)) {
    FUN_144b5ada0(lVar3,-iVar7,-iVar8);
  }
LAB_144e17cca:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_e8);
}



// FUNCTION 144e17df0 FUN_144e17df0 body=221 status=ok
// SIG undefined FUN_144e17df0(void)

ulonglong FUN_144e17df0(longlong param_1,int param_2,char param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (*(longlong *)(param_1 + 0x78) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x30);
    *(longlong *)(param_1 + 0x70) = lVar1;
    *(longlong *)(param_1 + 0x78) = lVar1;
    *(longlong *)(param_1 + 0x30) = lVar1 + 0x34;
  }
  if (*(ulonglong *)(param_1 + 0x28) <= *(ulonglong *)(param_1 + 0x30)) {
    *(undefined4 *)(param_1 + 0x38) = 0x62;
    return CONCAT71((int7)(*(ulonglong *)(param_1 + 0x28) >> 8),1);
  }
  *(undefined2 *)(*(longlong *)(param_1 + 0x70) + 0x18) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x20) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x1c) = 0;
  *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x10) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 8) = 0;
  *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x28) = 0;
  uVar2 = *(ulonglong *)(param_1 + 0x70);
  *(ushort *)(uVar2 + 0x18) = (ushort)*(byte *)(param_1 + 0x108);
  if (param_2 == 1) {
    uVar2 = *(ulonglong *)(param_1 + 0x70);
    *(ushort *)(uVar2 + 0x18) = *(ushort *)(uVar2 + 0x18) | 8;
    if (param_3 != '\0') {
      uVar2 = *(ulonglong *)(param_1 + 0x70);
      *(ushort *)(uVar2 + 0x18) = *(ushort *)(uVar2 + 0x18) | 0x20;
    }
  }
  else {
    if (param_2 != 2) {
      *(undefined4 *)(param_1 + 0x38) = 0x14;
      return CONCAT71((int7)(uVar2 >> 8),1);
    }
    if (param_3 != '\0') {
      uVar2 = *(ulonglong *)(param_1 + 0x70);
      *(ushort *)(uVar2 + 0x18) = *(ushort *)(uVar2 + 0x18) | 0x10;
    }
  }
  if (*(longlong *)(param_1 + 0x80) == 0) {
    uVar2 = *(ulonglong *)(param_1 + 0x70);
    *(ulonglong *)(param_1 + 0x80) = uVar2;
  }
  *(int *)(param_1 + 0x88) = param_2;
  *(undefined2 *)(param_1 + 0x6a) = 1;
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 144e17ed0 FUN_144e17ed0 body=150 status=ok
// SIG undefined FUN_144e17ed0(void)

longlong FUN_144e17ed0(longlong param_1,char param_2)

{
  longlong lVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  uint7 uVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x30) - *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x10);
  iVar3 = (int)(lVar4 >> 2);
  if (iVar3 < 0) {
    *(undefined4 *)(param_1 + 0x38) = 99;
    return CONCAT71((int7)(lVar4 >> 10),1);
  }
  if (0 < iVar3) {
    *(int *)(*(longlong *)(param_1 + 0x70) + 0x1c) = iVar3;
    if (param_2 != '\0') {
      uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x70) + 0x18);
      if ((uVar2 & 8) == 0) {
        uVar2 = uVar2 | 0x20;
      }
      else {
        uVar2 = uVar2 | 0x10;
      }
      *(ushort *)(*(longlong *)(param_1 + 0x70) + 0x18) = uVar2;
    }
    lVar4 = *(longlong *)(param_1 + 0x30);
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(longlong *)(param_1 + 0x70) = lVar4;
    *(longlong *)(param_1 + 0x30) = lVar4 + 0x34;
    *(undefined4 *)(lVar4 + 0x1c) = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x10) = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(param_1 + 0x70);
    *(short *)(param_1 + 0x68) = *(short *)(param_1 + 0x68) + 1;
  }
  uVar5 = (uint7)(*(ulonglong *)(param_1 + 0x28) >> 8);
  if (*(ulonglong *)(param_1 + 0x28) <= *(ulonglong *)(param_1 + 0x30)) {
    *(undefined4 *)(param_1 + 0x38) = 0x62;
    return CONCAT71(uVar5,1);
  }
  *(undefined1 *)(param_1 + 0x6b) = 0;
  return (ulonglong)uVar5 << 8;
}



// FUNCTION 144e17f70 FUN_144e17f70 body=148 status=ok
// SIG undefined FUN_144e17f70(void)

ulonglong FUN_144e17f70(longlong param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  
  lVar5 = *(longlong *)(param_1 + 0x20) + (longlong)*(int *)(param_1 + 0x3c) * -4;
  uVar2 = *(int *)(param_1 + 0x3c) - 1;
  piVar4 = (int *)(ulonglong)uVar2;
  lVar7 = (longlong)(int)uVar2;
  if (-1 < (int)uVar2) {
    do {
      if (*(int *)(lVar5 + lVar7 * 4) <= param_2) break;
      piVar4 = (int *)(ulonglong)((int)piVar4 - 1);
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
    iVar3 = (int)piVar4;
    if (-1 < iVar3) {
      piVar6 = (int *)(lVar5 + (longlong)iVar3 * 4);
      iVar1 = param_2;
      if (param_2 <= *(int *)(lVar5 + (longlong)iVar3 * 4)) goto LAB_144e18001;
      do {
        uVar2 = (int)piVar4 - 1;
        piVar4 = (int *)(ulonglong)uVar2;
        param_2 = *piVar6;
        *piVar6 = iVar1;
        piVar6 = piVar6 + -1;
        iVar1 = param_2;
      } while (-1 < (int)uVar2);
    }
  }
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -4;
  if (*(ulonglong *)(param_1 + 0x28) <= *(ulonglong *)(param_1 + 0x30)) {
    *(undefined4 *)(param_1 + 0x38) = 0x62;
    return CONCAT71((int7)(*(ulonglong *)(param_1 + 0x28) >> 8),1);
  }
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  piVar4 = (int *)(*(longlong *)(param_1 + 0x20) + (longlong)*(int *)(param_1 + 0x3c) * -4);
  *piVar4 = param_2;
LAB_144e18001:
  return (ulonglong)piVar4 & 0xffffffffffffff00;
}



// FUNCTION 144e18010 FUN_144e18010 body=338 status=ok
// SIG undefined FUN_144e18010(void)

undefined8 FUN_144e18010(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  
  uVar6 = *(ushort *)(param_1 + 0x68);
  lVar4 = *(longlong *)(param_1 + 0x78);
  if ((uVar6 < 2) || (lVar4 == 0)) {
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  else {
    do {
      plVar1 = (longlong *)(lVar4 + 8);
      if (uVar6 < 2) {
        *plVar1 = 0;
      }
      else {
        *plVar1 = *(longlong *)(lVar4 + 0x10) + (longlong)*(int *)(lVar4 + 0x1c) * 4;
      }
      if ((*(byte *)(lVar4 + 0x18) & 8) == 0) {
        iVar10 = *(int *)(lVar4 + 0x20);
        iVar7 = (iVar10 - *(int *)(lVar4 + 0x1c)) + 1;
        *(int *)(lVar4 + 0x20) = iVar7;
        *(longlong *)(lVar4 + 0x10) =
             *(longlong *)(lVar4 + 0x10) + (longlong)(*(int *)(lVar4 + 0x1c) + -1) * 4;
      }
      else {
        iVar7 = *(int *)(lVar4 + 0x20);
        iVar10 = iVar7 + -1 + *(int *)(lVar4 + 0x1c);
      }
      lVar9 = *(longlong *)(param_1 + 0x20) + (longlong)*(int *)(param_1 + 0x3c) * -4;
      iVar3 = *(int *)(param_1 + 0x3c) + -1;
      lVar4 = (longlong)iVar3;
      if (iVar3 < 0) {
LAB_144e180f1:
        *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -4;
        if (*(ulonglong *)(param_1 + 0x28) <= *(ulonglong *)(param_1 + 0x30)) {
          *(undefined4 *)(param_1 + 0x38) = 0x62;
          return 1;
        }
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
        *(int *)(*(longlong *)(param_1 + 0x20) + (longlong)*(int *)(param_1 + 0x3c) * -4) = iVar7;
      }
      else {
        do {
          if (*(int *)(lVar9 + lVar4 * 4) <= iVar7) break;
          iVar3 = iVar3 + -1;
          lVar4 = lVar4 + -1;
        } while (-1 < lVar4);
        if (iVar3 < 0) goto LAB_144e180f1;
        piVar5 = (int *)(lVar9 + (longlong)iVar3 * 4);
        iVar8 = iVar7;
        if (*(int *)(lVar9 + (longlong)iVar3 * 4) < iVar7) {
          do {
            iVar3 = iVar3 + -1;
            iVar7 = *piVar5;
            *piVar5 = iVar8;
            piVar5 = piVar5 + -1;
            iVar8 = iVar7;
          } while (-1 < iVar3);
          goto LAB_144e180f1;
        }
      }
      cVar2 = FUN_144e17f70(param_1,iVar10 + 1);
      if (cVar2 != '\0') {
        return 1;
      }
      lVar4 = *plVar1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return 0;
}



// FUNCTION 144e181d0 FUN_144e181d0 body=180 status=ok
// SIG undefined FUN_144e181d0(void)

void FUN_144e181d0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  param_1[0xc] = param_1[6];
  iVar1 = param_1[4] + 1 + param_1[2] >> 1;
  iVar3 = *param_1 + 1 + param_1[2] >> 1;
  param_1[2] = iVar3;
  iVar4 = param_1[6] + 1 + param_1[4] >> 1;
  param_1[10] = iVar4;
  param_1[0xd] = param_1[7];
  iVar2 = iVar3 + 1 + iVar1 >> 1;
  param_1[4] = iVar2;
  iVar3 = param_1[3];
  iVar1 = iVar1 + iVar4 + 1 >> 1;
  param_1[8] = iVar1;
  param_1[6] = iVar1 + iVar2 + 1 >> 1;
  iVar2 = param_1[1] + 1 + iVar3 >> 1;
  param_1[3] = iVar2;
  iVar3 = param_1[5] + 1 + iVar3 >> 1;
  iVar1 = param_1[5] + 1 + param_1[7] >> 1;
  param_1[0xb] = iVar1;
  iVar1 = iVar3 + 1 + iVar1 >> 1;
  param_1[9] = iVar1;
  iVar3 = iVar3 + 1 + iVar2 >> 1;
  param_1[5] = iVar3;
  param_1[7] = iVar1 + 1 + iVar3 >> 1;
  return;
}



// FUNCTION 144e18290 FUN_144e18290 body=427 status=ok
// SIG undefined FUN_144e18290(void)

ulonglong FUN_144e18290(undefined4 *param_1,int param_2,uint param_3,int param_4,uint param_5,
                       int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  byte bVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  param_4 = param_4 - param_2;
  iVar8 = param_5 - param_3;
  if (((iVar8 < 1) || ((int)param_5 < param_6)) || (param_7 < (int)param_3)) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar4 = 0;
  uVar3 = 0;
  if ((int)param_3 < param_6) {
    iVar1 = FUN_144b55580(param_4,param_6 - param_3,iVar8);
    param_2 = param_2 + iVar1;
    bVar5 = (byte)*param_1;
    param_6 = param_6 >> (bVar5 & 0x1f);
  }
  else {
    bVar5 = (byte)*param_1;
    param_6 = (int)param_3 >> (bVar5 & 0x1f);
    uVar4 = (ulonglong)(param_1[1] - 1 & param_3);
  }
  if (param_7 < (int)param_5) {
    param_7 = param_7 >> (bVar5 & 0x1f);
  }
  else {
    param_7 = (int)param_5 >> (bVar5 & 0x1f);
    uVar3 = param_1[1] - 1 & param_5;
  }
  if ((int)uVar4 < 1) {
    if (*(char *)((longlong)param_1 + 0x6b) != '\0') {
      *(longlong *)(param_1 + 0xc) = *(longlong *)(param_1 + 0xc) + -4;
      *(undefined1 *)((longlong)param_1 + 0x6b) = 0;
    }
  }
  else {
    if (param_6 == param_7) goto LAB_144e1842d;
    iVar1 = FUN_144b55580(param_4,param_1[1] - (int)uVar4,iVar8);
    param_2 = param_2 + iVar1;
    param_6 = param_6 + 1;
  }
  *(bool *)((longlong)param_1 + 0x6b) = uVar3 == 0;
  if (*(char *)((longlong)param_1 + 0x6a) != '\0') {
    *(int *)(*(longlong *)(param_1 + 0x1c) + 0x20) = param_6;
    *(undefined1 *)((longlong)param_1 + 0x6a) = 0;
  }
  iVar1 = (param_7 - param_6) + 1;
  if (*(ulonglong *)(param_1 + 10) <=
      (ulonglong)(*(longlong *)(param_1 + 0xc) + (longlong)iVar1 * 4)) {
    param_1[0xe] = 0x62;
    return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0xc) >> 8),1);
  }
  if (param_4 < 1) {
    iVar2 = FUN_144b56d10(param_1[1],-param_4,iVar8);
    iVar2 = -iVar2;
    param_4 = -(param_4 * param_1[1]);
    iVar7 = -1;
  }
  else {
    iVar2 = FUN_144b56d10(param_1[1],param_4,iVar8);
    param_4 = param_4 * param_1[1];
    iVar7 = 1;
  }
  piVar6 = *(int **)(param_1 + 0xc);
  uVar3 = -iVar8;
  for (; uVar4 = (ulonglong)uVar3, 0 < iVar1; iVar1 = iVar1 + -1) {
    *piVar6 = param_2;
    piVar6 = piVar6 + 1;
    param_2 = param_2 + iVar2;
    uVar3 = uVar3 + param_4 % iVar8;
    if (-1 < (int)uVar3) {
      uVar3 = uVar3 - iVar8;
      param_2 = param_2 + iVar7;
    }
  }
  *(int **)(param_1 + 0xc) = piVar6;
LAB_144e1842d:
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 144e18440 FUN_144e18440 body=383 status=ok
// SIG undefined FUN_144e18440(void)

ulonglong FUN_144e18440(undefined4 *param_1,int param_2,code *param_3,uint param_4,uint param_5)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  
  puVar2 = *(uint **)(param_1 + 0x10);
  uVar5 = (ulonglong)param_2;
  puVar8 = *(uint **)(param_1 + 0xc);
  uVar4 = puVar2[uVar5 * 2 + 1];
  uVar6 = uVar5;
  if (((int)param_4 <= (int)puVar2[1]) && (uVar6 = (ulonglong)param_5, (int)uVar4 <= (int)param_5))
  {
    iVar3 = param_1[1];
    uVar7 = -iVar3 & puVar2[1];
    if ((int)param_5 < (int)uVar7) {
      uVar7 = param_5;
    }
    uVar9 = param_4;
    if ((int)param_4 <= (int)uVar4) {
      uVar6 = (ulonglong)(iVar3 - 1U);
      param_4 = iVar3 + -1 + uVar4 & -iVar3;
      uVar9 = param_4;
      if ((ushort)((ushort)uVar4 & (ushort)(iVar3 - 1U)) == 0) {
        if (*(char *)((longlong)param_1 + 0x6b) != '\0') {
          puVar8 = puVar8 + -1;
          *(undefined1 *)((longlong)param_1 + 0x6b) = 0;
        }
        uVar6 = (ulonglong)puVar2[uVar5 * 2];
        *puVar8 = puVar2[uVar5 * 2];
        puVar8 = puVar8 + 1;
        uVar9 = param_4 + param_1[1];
      }
    }
    if (*(char *)((longlong)param_1 + 0x6a) != '\0') {
      uVar6 = *(ulonglong *)(param_1 + 0x1c);
      *(int *)(uVar6 + 0x20) = (int)param_4 >> ((byte)*param_1 & 0x1f);
      *(undefined1 *)((longlong)param_1 + 0x6a) = 0;
    }
    if ((int)uVar9 <= (int)uVar7) {
      iVar3 = (int)(uVar7 - uVar9) >> ((byte)*param_1 & 0x1f);
      uVar6 = (ulonglong)iVar3;
      puVar10 = puVar2;
      if (*(uint **)(param_1 + 10) <= puVar8 + uVar6 + 1) {
        param_1[0xe] = 0x62;
        uVar6 = CONCAT71((int7)(int3)((uint)iVar3 >> 8),1);
        goto LAB_144e185aa;
      }
      do {
        *(undefined1 *)((longlong)param_1 + 0x6b) = 0;
        uVar4 = puVar10[1];
        if ((int)uVar9 < (int)uVar4) {
          puVar1 = puVar10 + uVar5 * 2;
          iVar3 = uVar4 - puVar10[uVar5 * 2 + 1];
          if (iVar3 < (int)param_1[4]) {
            puVar11 = puVar10 + uVar5 * -2;
            uVar4 = (int)((*puVar10 - *puVar1) * (uVar9 - puVar10[uVar5 * 2 + 1])) / iVar3 + *puVar1
            ;
            uVar6 = (ulonglong)uVar4;
            *puVar8 = uVar4;
            puVar8 = puVar8 + 1;
            uVar9 = uVar9 + param_1[1];
          }
          else {
            uVar6 = (*param_3)(puVar10);
            puVar11 = puVar1;
          }
        }
        else {
          if (uVar4 == uVar9) {
            *(undefined1 *)((longlong)param_1 + 0x6b) = 1;
            uVar6 = (ulonglong)*puVar10;
            *puVar8 = *puVar10;
            puVar8 = puVar8 + 1;
            uVar9 = uVar9 + param_1[1];
          }
          puVar11 = puVar10 + uVar5 * -2;
        }
      } while ((puVar2 <= puVar11) && (puVar10 = puVar11, (int)uVar9 <= (int)uVar7));
    }
  }
  *(ulonglong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + uVar5 * -8;
  uVar6 = uVar6 & 0xffffffffffffff00;
LAB_144e185aa:
  *(uint **)(param_1 + 0xc) = puVar8;
  return uVar6;
}



// FUNCTION 144e185c0 FUN_144e185c0 body=479 status=ok
// SIG undefined FUN_144e185c0(void)

ulonglong FUN_144e185c0(longlong param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  bool bVar7;
  
  iVar4 = *(int *)(param_1 + 0x88);
  if (iVar4 == 0) {
    uVar2 = *(uint *)(param_1 + 0x5c);
    if ((int)uVar2 < param_3) {
      uVar6 = 1;
      cVar3 = FUN_144e17df0(param_1,1,
                            *(int *)(param_1 + 8) <=
                            (int)(((uVar2 - 1) + *(int *)(param_1 + 4) & -*(int *)(param_1 + 4)) -
                                 uVar2));
      if (cVar3 != '\0') {
        return uVar6 & 0xff;
      }
    }
    else if (param_3 < (int)uVar2) {
      iVar4 = uVar2 - (-*(int *)(param_1 + 4) & uVar2);
      bVar7 = SBORROW4(iVar4,*(int *)(param_1 + 8));
      iVar4 = iVar4 - *(int *)(param_1 + 8);
      goto LAB_144e186ca;
    }
  }
  else if (iVar4 == 1) {
    uVar2 = *(uint *)(param_1 + 0x5c);
    if (param_3 < (int)uVar2) {
      cVar3 = FUN_144e17ed0(param_1,*(int *)(param_1 + 8) <=
                                    (int)(uVar2 - (-*(int *)(param_1 + 4) & uVar2)));
      if (cVar3 != '\0') {
        return 1;
      }
      iVar4 = *(uint *)(param_1 + 0x5c) - (-*(int *)(param_1 + 4) & *(uint *)(param_1 + 0x5c));
      bVar7 = SBORROW4(iVar4,*(int *)(param_1 + 8));
      iVar4 = iVar4 - *(int *)(param_1 + 8);
LAB_144e186ca:
      uVar5 = 2;
      goto LAB_144e186cf;
    }
  }
  else if ((iVar4 == 2) && (iVar4 = *(int *)(param_1 + 0x5c), iVar4 < param_3)) {
    cVar3 = FUN_144e17ed0(param_1,CONCAT31((int3)((uint)iVar4 >> 8),
                                           *(int *)(param_1 + 8) <=
                                           (iVar4 + -1 + *(int *)(param_1 + 4) &
                                           -*(int *)(param_1 + 4)) - iVar4));
    if (cVar3 != '\0') {
      return 1;
    }
    iVar4 = (*(int *)(param_1 + 0x5c) + -1 + *(int *)(param_1 + 4) & -*(int *)(param_1 + 4)) -
            *(int *)(param_1 + 0x5c);
    uVar5 = 1;
    bVar7 = SBORROW4(iVar4,*(int *)(param_1 + 8));
    iVar4 = iVar4 - *(int *)(param_1 + 8);
LAB_144e186cf:
    cVar3 = FUN_144e17df0(param_1,uVar5,bVar7 == iVar4 < 0);
    if (cVar3 != '\0') {
      return 1;
    }
  }
  if (*(int *)(param_1 + 0x88) == 1) {
    cVar3 = FUN_144e18290(param_1,*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),
                          param_2,param_3,*(undefined4 *)(param_1 + 0x60),
                          *(undefined4 *)(param_1 + 100));
  }
  else {
    if (*(int *)(param_1 + 0x88) != 2) goto LAB_144e18787;
    cVar1 = *(char *)(param_1 + 0x6a);
    cVar3 = FUN_144e18290(param_1,*(undefined4 *)(param_1 + 0x58),-*(int *)(param_1 + 0x5c),param_2,
                          -param_3,-*(int *)(param_1 + 100),-*(int *)(param_1 + 0x60));
    if ((cVar1 != '\0') && (*(char *)(param_1 + 0x6a) == '\0')) {
      *(int *)(*(longlong *)(param_1 + 0x70) + 0x20) =
           -*(int *)(*(longlong *)(param_1 + 0x70) + 0x20);
    }
  }
  if (cVar3 != '\0') {
    return 1;
  }
LAB_144e18787:
  *(undefined4 *)(param_1 + 0x58) = param_2;
  *(int *)(param_1 + 0x5c) = param_3;
  return 0;
}



// FUNCTION 144e187a0 FUN_144e187a0 body=570 status=ok
// SIG undefined FUN_144e187a0(void)

undefined8
FUN_144e187a0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined1 uVar12;
  uint uVar13;
  bool bVar14;
  ulonglong uVar11;
  
  *(ulonglong *)(param_1 + 0x40) = param_1 + 0x10cU;
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x14) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 8) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0xc) = param_3;
  **(undefined4 **)(param_1 + 0x40) = param_4;
  *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 4) = param_5;
  do {
    piVar3 = *(int **)(param_1 + 0x40);
    uVar13 = piVar3[5];
    uVar1 = piVar3[1];
    iVar2 = *piVar3;
    uVar10 = uVar1;
    uVar8 = uVar13;
    if ((int)uVar13 <= (int)uVar1) {
      uVar10 = uVar13;
      uVar8 = uVar1;
    }
    if ((piVar3[3] < (int)uVar10) || ((int)uVar8 < piVar3[3])) {
      piVar3[8] = piVar3[4];
      iVar9 = (piVar3[4] + piVar3[2]) / 2;
      piVar3[6] = iVar9;
      iVar7 = (iVar2 + piVar3[2]) / 2;
      piVar3[2] = iVar7;
      piVar3[4] = (iVar7 + iVar9) / 2;
      piVar3[9] = uVar13;
      iVar9 = (int)(uVar13 + piVar3[3]) / 2;
      piVar3[7] = iVar9;
      iVar7 = (int)(uVar1 + piVar3[3]) / 2;
      piVar3[3] = iVar7;
      piVar3[5] = (iVar7 + iVar9) / 2;
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x10;
    }
    else if (uVar13 == uVar1) {
      *(int **)(param_1 + 0x40) = piVar3 + -4;
    }
    else {
      uVar10 = ((int)uVar1 <= (int)uVar13) + 1;
      uVar11 = (ulonglong)uVar10;
      if (*(uint *)(param_1 + 0x88) != uVar10) {
        if ((int)uVar13 < (int)uVar1) {
          iVar9 = (*(int *)(param_1 + 4) + -1 + uVar13 & -*(int *)(param_1 + 4)) - uVar13;
          bVar14 = SBORROW4(iVar9,*(int *)(param_1 + 8));
          iVar9 = iVar9 - *(int *)(param_1 + 8);
        }
        else {
          iVar9 = uVar13 - (-*(int *)(param_1 + 4) & uVar13);
          bVar14 = SBORROW4(iVar9,*(int *)(param_1 + 8));
          iVar9 = iVar9 - *(int *)(param_1 + 8);
        }
        uVar12 = bVar14 == iVar9 < 0;
        if ((*(uint *)(param_1 + 0x88) != 0) &&
           (cVar5 = FUN_144e17ed0(param_1,uVar12), cVar5 != '\0')) {
          return 1;
        }
        cVar5 = FUN_144e17df0(param_1,uVar11 & 0xffffffff,uVar12);
        if (cVar5 != '\0') {
          return 1;
        }
      }
      if ((int)uVar13 < (int)uVar1) {
        cVar6 = FUN_144e18440(param_1,2,&LAB_144e18170,*(undefined4 *)(param_1 + 0x60),
                              *(undefined4 *)(param_1 + 100));
      }
      else {
        lVar4 = *(longlong *)(param_1 + 0x40);
        iVar9 = *(int *)(param_1 + 0x60);
        iVar7 = *(int *)(param_1 + 100);
        *(int *)(lVar4 + 4) = -*(int *)(lVar4 + 4);
        *(int *)(lVar4 + 0xc) = -*(int *)(lVar4 + 0xc);
        *(int *)(lVar4 + 0x14) = -*(int *)(lVar4 + 0x14);
        cVar5 = *(char *)(param_1 + 0x6a);
        cVar6 = FUN_144e18440(param_1,2,&LAB_144e18170,-iVar7,-iVar9);
        if ((cVar5 != '\0') && (*(char *)(param_1 + 0x6a) == '\0')) {
          *(int *)(*(longlong *)(param_1 + 0x70) + 0x20) =
               -*(int *)(*(longlong *)(param_1 + 0x70) + 0x20);
        }
        *(int *)(lVar4 + 4) = -*(int *)(lVar4 + 4);
      }
      if (cVar6 != '\0') {
        return 1;
      }
    }
    if (*(ulonglong *)(param_1 + 0x40) < param_1 + 0x10cU) {
      *(int *)(param_1 + 0x58) = iVar2;
      *(uint *)(param_1 + 0x5c) = uVar1;
      return 0;
    }
  } while( true );
}



// FUNCTION 144e189e0 FUN_144e189e0 body=670 status=ok
// SIG undefined FUN_144e189e0(void)

undefined8
FUN_144e189e0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar14;
  uint uVar15;
  bool bVar16;
  ulonglong uVar13;
  
  *(ulonglong *)(param_1 + 0x40) = param_1 + 0x10cU;
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x1c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x14) = param_3;
  *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 8) = param_4;
  *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0xc) = param_5;
  **(undefined4 **)(param_1 + 0x40) = param_6;
  *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 4) = param_7;
  do {
    piVar3 = *(int **)(param_1 + 0x40);
    uVar15 = piVar3[7];
    uVar1 = piVar3[1];
    iVar7 = piVar3[5];
    iVar12 = piVar3[3];
    iVar2 = *piVar3;
    uVar9 = uVar15;
    uVar10 = uVar1;
    if ((int)uVar15 <= (int)uVar1) {
      uVar9 = uVar1;
      uVar10 = uVar15;
    }
    iVar8 = iVar7;
    if (iVar7 <= iVar12) {
      iVar8 = iVar12;
      iVar12 = iVar7;
    }
    if ((iVar12 < (int)uVar10) || ((int)uVar9 < iVar8)) {
      iVar7 = piVar3[2];
      iVar8 = iVar2 + 1 + iVar7 >> 1;
      piVar3[2] = iVar8;
      piVar3[0xc] = piVar3[6];
      iVar11 = piVar3[4] + 1 + piVar3[6] >> 1;
      iVar12 = piVar3[3];
      iVar7 = iVar7 + 1 + piVar3[4] >> 1;
      piVar3[10] = iVar11;
      iVar8 = iVar8 + 1 + iVar7 >> 1;
      piVar3[4] = iVar8;
      piVar3[0xd] = uVar15;
      iVar7 = iVar7 + iVar11 + 1 >> 1;
      piVar3[8] = iVar7;
      iVar11 = (int)(uVar1 + 1 + iVar12) >> 1;
      piVar3[6] = iVar7 + iVar8 + 1 >> 1;
      piVar3[3] = iVar11;
      iVar7 = piVar3[5] + 1 + iVar12 >> 1;
      iVar12 = (int)(piVar3[5] + 1 + uVar15) >> 1;
      piVar3[0xb] = iVar12;
      iVar12 = iVar7 + 1 + iVar12 >> 1;
      piVar3[9] = iVar12;
      iVar7 = iVar7 + 1 + iVar11 >> 1;
      piVar3[5] = iVar7;
      piVar3[7] = iVar12 + 1 + iVar7 >> 1;
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x18;
    }
    else if (uVar15 == uVar1) {
      *(int **)(param_1 + 0x40) = piVar3 + -6;
    }
    else {
      uVar10 = ((int)uVar1 < (int)uVar15) + 1;
      uVar13 = (ulonglong)uVar10;
      if (*(uint *)(param_1 + 0x88) != uVar10) {
        if ((int)uVar1 < (int)uVar15) {
          iVar7 = uVar15 - (-*(int *)(param_1 + 4) & uVar15);
          bVar16 = SBORROW4(iVar7,*(int *)(param_1 + 8));
          iVar7 = iVar7 - *(int *)(param_1 + 8);
        }
        else {
          iVar7 = (*(int *)(param_1 + 4) + -1 + uVar15 & -*(int *)(param_1 + 4)) - uVar15;
          bVar16 = SBORROW4(iVar7,*(int *)(param_1 + 8));
          iVar7 = iVar7 - *(int *)(param_1 + 8);
        }
        uVar14 = (ulonglong)(bVar16 == iVar7 < 0);
        if ((*(uint *)(param_1 + 0x88) != 0) &&
           (cVar5 = FUN_144e17ed0(param_1,uVar14), cVar5 != '\0')) {
          return 1;
        }
        cVar5 = FUN_144e17df0(param_1,uVar13 & 0xffffffff,uVar14 & 0xff);
        if (cVar5 != '\0') {
          return 1;
        }
      }
      if ((int)uVar1 < (int)uVar15) {
        lVar4 = *(longlong *)(param_1 + 0x40);
        iVar7 = *(int *)(param_1 + 0x60);
        iVar12 = *(int *)(param_1 + 100);
        *(int *)(lVar4 + 4) = -*(int *)(lVar4 + 4);
        *(int *)(lVar4 + 0xc) = -*(int *)(lVar4 + 0xc);
        *(int *)(lVar4 + 0x14) = -*(int *)(lVar4 + 0x14);
        *(int *)(lVar4 + 0x1c) = -*(int *)(lVar4 + 0x1c);
        cVar5 = *(char *)(param_1 + 0x6a);
        cVar6 = FUN_144e18440(param_1,3,FUN_144e181d0,-iVar12,-iVar7);
        if ((cVar5 != '\0') && (*(char *)(param_1 + 0x6a) == '\0')) {
          *(int *)(*(longlong *)(param_1 + 0x70) + 0x20) =
               -*(int *)(*(longlong *)(param_1 + 0x70) + 0x20);
        }
        *(int *)(lVar4 + 4) = -*(int *)(lVar4 + 4);
      }
      else {
        cVar6 = FUN_144e18440(param_1,3,FUN_144e181d0,*(undefined4 *)(param_1 + 0x60),
                              *(undefined4 *)(param_1 + 100));
      }
      if (cVar6 != '\0') {
        return 1;
      }
    }
    if (*(ulonglong *)(param_1 + 0x40) < param_1 + 0x10cU) {
      *(int *)(param_1 + 0x58) = iVar2;
      *(uint *)(param_1 + 0x5c) = uVar1;
      return 0;
    }
  } while( true );
}



// FUNCTION 144e18c80 FUN_144e18c80 body=899 status=ok
// SIG undefined FUN_144e18c80(void)

undefined1 FUN_144e18c80(longlong param_1,ushort param_2,ushort param_3,int param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  byte *pbVar16;
  byte *pbVar17;
  int *piVar18;
  int local_res10;
  
  lVar1 = *(longlong *)(param_1 + 0xc0);
  uVar13 = (ulonglong)param_3;
  piVar18 = (int *)(lVar1 + uVar13 * 8);
  uVar11 = (ulonglong)param_2;
  iVar9 = *(int *)(param_1 + 8);
  piVar6 = (int *)(lVar1 + uVar11 * 8);
  iVar3 = *(int *)(param_1 + 0xc);
  iVar15 = iVar3 * *piVar6 - iVar9;
  local_res10 = piVar6[1] * iVar3 - iVar9;
  iVar4 = *piVar18 * iVar3 - iVar9;
  iVar9 = *(int *)(lVar1 + 4 + uVar13 * 8) * iVar3 - iVar9;
  iVar3 = iVar15;
  iVar12 = iVar4;
  if (param_4 != 0) {
    iVar3 = local_res10;
    iVar12 = iVar9;
    local_res10 = iVar15;
    iVar9 = iVar4;
  }
  lVar1 = *(longlong *)(param_1 + 200);
  pbVar16 = (byte *)(lVar1 + uVar11);
  if ((*(byte *)(lVar1 + uVar11) & 4) != 0) {
    *(byte *)(param_1 + 0x108) = *(byte *)(lVar1 + uVar11) >> 5;
  }
  if ((*pbVar16 & 3) == 2) {
LAB_144e18fde:
    *(undefined4 *)(param_1 + 0x38) = 0x14;
  }
  else {
    if ((*pbVar16 & 3) == 0) {
      if ((*(byte *)(lVar1 + uVar13) & 3) == 1) {
        piVar18 = piVar18 + -2;
        iVar3 = iVar12;
      }
      else {
        iVar3 = (iVar12 + iVar3) / 2;
        iVar9 = (iVar9 + local_res10) / 2;
      }
      piVar6 = piVar6 + -2;
      pbVar16 = pbVar16 + -1;
      local_res10 = iVar9;
    }
    *(int *)(param_1 + 0x58) = iVar3;
    *(int *)(param_1 + 0x5c) = local_res10;
    do {
      if (piVar18 <= piVar6) {
        cVar2 = FUN_144e185c0(param_1,iVar3,local_res10);
LAB_144e18f9e:
        if (cVar2 != '\0') {
          return 1;
        }
        return 0;
      }
      pbVar17 = pbVar16 + 1;
      piVar7 = piVar6 + 2;
      if ((pbVar16[1] & 3) == 0) {
        iVar4 = *(int *)(param_1 + 0xc) * *piVar7 - *(int *)(param_1 + 8);
        iVar12 = piVar6[3] * *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8);
        piVar6 = piVar7;
        iVar9 = iVar4;
        if (param_4 != 0) {
          iVar9 = iVar12;
          iVar12 = iVar4;
        }
        while( true ) {
          if (piVar18 <= piVar6) {
            cVar2 = FUN_144e187a0(param_1,iVar9,iVar12,iVar3,local_res10);
            goto LAB_144e18f9e;
          }
          piVar7 = piVar6 + 2;
          pbVar16 = pbVar17 + 1;
          pbVar17 = pbVar17 + 1;
          iVar8 = *(int *)(param_1 + 0xc) * *piVar7 - *(int *)(param_1 + 8);
          iVar15 = piVar6[3] * *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8);
          iVar4 = iVar8;
          if (param_4 != 0) {
            iVar4 = iVar15;
            iVar15 = iVar8;
          }
          if ((*pbVar16 & 3) == 1) break;
          if ((*pbVar16 & 3) != 0) goto LAB_144e18fde;
          cVar2 = FUN_144e187a0(param_1,iVar9,iVar12,(iVar4 + iVar9) / 2,(iVar15 + iVar12) / 2);
          piVar6 = piVar7;
          iVar9 = iVar4;
          iVar12 = iVar15;
          if (cVar2 != '\0') {
            return 1;
          }
        }
        cVar2 = FUN_144e187a0(param_1,iVar9,iVar12,iVar4,iVar15);
      }
      else if ((pbVar16[1] & 3) == 1) {
        iVar4 = *(int *)(param_1 + 0xc) * *piVar7 - *(int *)(param_1 + 8);
        iVar12 = piVar6[3] * *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8);
        iVar9 = iVar4;
        if (param_4 != 0) {
          iVar9 = iVar12;
          iVar12 = iVar4;
        }
        cVar2 = FUN_144e185c0(param_1,iVar9,iVar12);
      }
      else {
        if ((piVar18 < piVar6 + 4) || ((pbVar16[2] & 3) != 2)) goto LAB_144e18fde;
        iVar9 = *(int *)(param_1 + 0xc);
        piVar7 = piVar6 + 6;
        iVar12 = *(int *)(param_1 + 8);
        pbVar17 = pbVar16 + 3;
        iVar5 = piVar6[2] * iVar9 - iVar12;
        iVar10 = piVar6[3] * iVar9 - iVar12;
        iVar4 = piVar6[4] * iVar9 - iVar12;
        iVar14 = piVar6[5] * iVar9 - iVar12;
        iVar15 = iVar14;
        iVar8 = iVar5;
        if (param_4 != 0) {
          iVar15 = iVar4;
          iVar4 = iVar14;
          iVar8 = iVar10;
          iVar10 = iVar5;
        }
        if (piVar18 < piVar7) {
          cVar2 = FUN_144e189e0(param_1,iVar8,iVar10,iVar4,iVar15,iVar3,local_res10);
          goto LAB_144e18f9e;
        }
        iVar5 = iVar9 * *piVar7 - iVar12;
        iVar12 = piVar6[7] * iVar9 - iVar12;
        iVar9 = iVar5;
        if (param_4 != 0) {
          iVar9 = iVar12;
          iVar12 = iVar5;
        }
        cVar2 = FUN_144e189e0(param_1,iVar8,iVar10,iVar4,iVar15,iVar9,iVar12);
      }
      piVar6 = piVar7;
      pbVar16 = pbVar17;
    } while (cVar2 == '\0');
  }
  return 1;
}



// FUNCTION 144e19010 FUN_144e19010 body=376 status=ok
// SIG undefined FUN_144e19010(void)

bool FUN_144e19010(longlong param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  uVar4 = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x20) + -0x34;
  lVar6 = *(longlong *)(param_1 + 0x30);
  *(undefined2 *)(param_1 + 0x6a) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(longlong *)(param_1 + 0x70) = lVar6;
  *(longlong *)(lVar6 + 0x10) = lVar6;
  *(undefined2 *)(param_1 + 0x68) = 0;
  uVar5 = uVar4;
  uVar7 = uVar4;
  if (0 < *(short *)(param_1 + 0xb8)) {
    do {
      *(undefined4 *)(param_1 + 0x88) = 0;
      *(undefined8 *)(param_1 + 0x80) = 0;
      cVar1 = FUN_144e18c80(param_1,uVar7 & 0xffff,
                            *(undefined2 *)(uVar5 + *(longlong *)(param_1 + 0xd0)),param_2);
      if (cVar1 != '\0') goto LAB_144e19184;
      iVar2 = *(int *)(param_1 + 4);
      uVar3 = *(uint *)(param_1 + 0x5c);
      uVar7 = (ulonglong)(*(ushort *)(uVar5 + *(longlong *)(param_1 + 0xd0)) + 1);
      if (((((uVar3 & iVar2 - 1U) == 0) && (*(int *)(param_1 + 0x60) <= (int)uVar3)) &&
          ((int)uVar3 <= *(int *)(param_1 + 100))) &&
         ((*(longlong *)(param_1 + 0x80) != 0 &&
          (((*(byte *)(*(longlong *)(param_1 + 0x70) + 0x18) ^
            *(byte *)(*(longlong *)(param_1 + 0x80) + 0x18)) & 8) == 0)))) {
        *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + -4;
      }
      lVar6 = *(longlong *)(param_1 + 0x70);
      if ((*(longlong *)(param_1 + 0x30) == *(longlong *)(lVar6 + 0x10)) ||
         ((*(byte *)(lVar6 + 0x18) & 8) == 0)) {
        iVar2 = (iVar2 + -1 + uVar3 & -iVar2) - uVar3;
        bVar8 = SBORROW4(iVar2,*(int *)(param_1 + 8));
        iVar2 = iVar2 - *(int *)(param_1 + 8);
      }
      else {
        uVar3 = uVar3 - (-iVar2 & uVar3);
        bVar8 = SBORROW4(uVar3,*(int *)(param_1 + 8));
        iVar2 = uVar3 - *(int *)(param_1 + 8);
      }
      cVar1 = FUN_144e17ed0(param_1,CONCAT31((int3)(uVar3 >> 8),bVar8 == iVar2 < 0));
      if (cVar1 != '\0') goto LAB_144e19184;
      if (*(longlong *)(param_1 + 0x80) != 0) {
        *(longlong *)(lVar6 + 0x28) = *(longlong *)(param_1 + 0x80);
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      uVar5 = uVar5 + 2;
    } while ((int)uVar3 < (int)*(short *)(param_1 + 0xb8));
  }
  cVar1 = FUN_144e18010(param_1);
  if (cVar1 == '\0') {
    bVar8 = *(ulonglong *)(param_1 + 0x28) <= *(ulonglong *)(param_1 + 0x30);
  }
  else {
LAB_144e19184:
    bVar8 = true;
  }
  return bVar8;
}



// FUNCTION 144e191c0 FUN_144e191c0 body=226 status=ok
// SIG undefined FUN_144e191c0(void)

void FUN_144e191c0(undefined4 *param_1,undefined8 param_2,uint param_3,uint param_4,longlong param_5
                  )

{
  ushort uVar1;
  int iVar2;
  short sVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  iVar8 = param_1[1];
  uVar9 = (param_3 - 1) + iVar8 & -iVar8;
  uVar7 = -iVar8 & param_4;
  if (((((*(byte *)(param_5 + 0x18) & 7) != 2) &&
       ((int)((param_4 - iVar8) - param_3) <= (int)param_1[5])) && (uVar9 != param_3)) &&
     (uVar7 != param_4)) {
    uVar7 = uVar9;
  }
  iVar10 = (int)uVar9 >> ((byte)*param_1 & 0x1f);
  iVar8 = (int)uVar7 >> ((byte)*param_1 & 0x1f);
  if (-1 < iVar8) {
    uVar1 = *(ushort *)(param_1 + 0x12);
    if (iVar10 < (int)(uint)uVar1) {
      iVar2 = 0;
      if (-1 < iVar10) {
        iVar2 = iVar10;
      }
      if ((int)(uint)uVar1 <= iVar8) {
        iVar8 = uVar1 - 1;
      }
      sVar3 = (short)(iVar2 >> 3);
      pbVar4 = (byte *)((longlong)(int)param_1[0x38] + *(longlong *)(param_1 + 0x14) +
                       (longlong)sVar3);
      bVar5 = ~(byte)(0x7f >> ((byte)iVar8 & 7));
      iVar8 = (int)(short)(iVar8 >> 3) - (int)sVar3;
      bVar6 = (byte)(0xff >> ((byte)iVar2 & 7));
      if (0 < iVar8) {
        *pbVar4 = *pbVar4 | bVar6;
        while (iVar8 = iVar8 + -1, 0 < iVar8) {
          pbVar4 = pbVar4 + 1;
          *pbVar4 = 0xff;
        }
        pbVar4[1] = pbVar4[1] | bVar5;
        return;
      }
      *pbVar4 = *pbVar4 | bVar5 & bVar6;
    }
  }
  return;
}



// FUNCTION 144e192b0 FUN_144e192b0 body=429 status=ok
// SIG undefined FUN_144e192b0(void)

void FUN_144e192b0(undefined4 *param_1,short param_2,int param_3,uint param_4,longlong param_5,
                  longlong param_6)

{
  byte *pbVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  iVar9 = param_1[1];
  uVar4 = -iVar9;
  uVar8 = param_3 + -1 + iVar9 & uVar4;
  uVar3 = uVar4 & param_4;
  uVar7 = uVar8;
  if ((int)uVar8 <= (int)uVar3) goto LAB_144e19409;
  uVar2 = *(ushort *)(param_5 + 0x18);
  uVar5 = uVar2 & 7;
  if (uVar8 != iVar9 + uVar3) {
    return;
  }
  uVar6 = uVar3;
  if ((uVar2 & 7) != 0) {
    if (uVar5 == 1) {
LAB_144e19334:
      if ((*(longlong *)(param_5 + 0x28) == param_6) && (*(int *)(param_5 + 0x1c) < 1)) {
        if ((uVar2 & 0x10) == 0) {
          return;
        }
        if ((int)(param_4 - param_3) < (int)param_1[2]) {
          return;
        }
      }
      if ((*(longlong *)(param_6 + 0x28) == param_5) && (*(int *)(param_5 + 0x20) == (int)param_2))
      {
        if ((uVar2 & 0x20) == 0) {
          return;
        }
        if ((int)(param_4 - param_3) < (int)param_1[2]) {
          return;
        }
      }
      if (uVar5 == 1) goto LAB_144e193a3;
    }
    else if (uVar5 != 4) {
      if (uVar5 != 5) {
        return;
      }
      goto LAB_144e19334;
    }
    uVar6 = (int)((param_4 - 1) + param_3) / 2 + param_1[2] & uVar4;
  }
LAB_144e193a3:
  if ((-1 < (int)uVar6) &&
     (uVar7 = uVar6, (int)(uint)*(ushort *)(param_1 + 0x12) <= (int)uVar6 >> ((byte)*param_1 & 0x1f)
     )) {
    uVar7 = uVar3;
  }
  if (uVar7 == uVar8) {
    uVar8 = uVar3;
  }
  iVar9 = (int)uVar8 >> ((byte)*param_1 & 0x1f);
  if (((-1 < iVar9) && (iVar9 < (int)(uint)*(ushort *)(param_1 + 0x12))) &&
     (((byte)(0x80 >> ((byte)iVar9 & 7)) &
      *(byte *)((longlong)((int)(short)(iVar9 >> 3) + param_1[0x38]) + *(longlong *)(param_1 + 0x14)
               )) != 0)) {
    return;
  }
LAB_144e19409:
  iVar9 = (int)uVar7 >> ((byte)*param_1 & 0x1f);
  if ((-1 < iVar9) && (iVar9 < (int)(uint)*(ushort *)(param_1 + 0x12))) {
    pbVar1 = (byte *)((longlong)((int)(short)(iVar9 >> 3) + param_1[0x38]) +
                     *(longlong *)(param_1 + 0x14));
    *pbVar1 = *pbVar1 | (byte)(0x80 >> ((byte)iVar9 & 7));
  }
  return;
}



// FUNCTION 144e194f0 FUN_144e194f0 body=429 status=ok
// SIG undefined FUN_144e194f0(void)

void FUN_144e194f0(undefined4 *param_1,short param_2,int param_3,uint param_4,longlong param_5,
                  longlong param_6)

{
  ushort uVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  
  iVar2 = param_1[1];
  uVar5 = -iVar2;
  uVar4 = param_3 + -1 + iVar2 & uVar5;
  uVar6 = uVar5 & param_4;
  uVar9 = uVar4;
  if ((int)uVar4 <= (int)uVar6) goto LAB_144e19646;
  uVar1 = *(ushort *)(param_5 + 0x18);
  uVar7 = uVar1 & 7;
  if (uVar4 != iVar2 + uVar6) {
    return;
  }
  uVar8 = uVar6;
  if ((uVar1 & 7) != 0) {
    if (uVar7 == 1) {
LAB_144e19571:
      if ((*(longlong *)(param_5 + 0x28) == param_6) && (*(int *)(param_5 + 0x1c) < 1)) {
        if ((uVar1 & 0x10) == 0) {
          return;
        }
        if ((int)(param_4 - param_3) < (int)param_1[2]) {
          return;
        }
      }
      if ((*(longlong *)(param_6 + 0x28) == param_5) && (*(int *)(param_5 + 0x20) == (int)param_2))
      {
        if ((uVar1 & 0x20) == 0) {
          return;
        }
        if ((int)(param_4 - param_3) < (int)param_1[2]) {
          return;
        }
      }
      if (uVar7 == 1) goto LAB_144e195e3;
    }
    else if (uVar7 != 4) {
      if (uVar7 != 5) {
        return;
      }
      goto LAB_144e19571;
    }
    uVar8 = (int)((param_4 - 1) + param_3) / 2 + param_1[2] & uVar5;
  }
LAB_144e195e3:
  if ((-1 < (int)uVar8) &&
     (uVar9 = uVar8, (uint)param_1[0x24] <= (uint)((int)uVar8 >> ((byte)*param_1 & 0x1f)))) {
    uVar9 = uVar6;
  }
  if (uVar9 == uVar4) {
    uVar4 = uVar6;
  }
  uVar4 = (int)uVar4 >> ((byte)*param_1 & 0x1f);
  if (((-1 < (int)uVar4) && (uVar4 < (uint)param_1[0x24])) &&
     ((*(byte *)((((longlong)param_2 >> 3) - (longlong)(int)(param_1[0x26] * uVar4)) +
                *(longlong *)(param_1 + 0x14)) & (byte)(0x80 >> ((byte)param_2 & 7))) != 0)) {
    return;
  }
LAB_144e19646:
  uVar9 = (int)uVar9 >> ((byte)*param_1 & 0x1f);
  if ((-1 < (int)uVar9) && (uVar9 < (uint)param_1[0x24])) {
    pbVar3 = (byte *)((((longlong)param_2 >> 3) - (longlong)(int)(param_1[0x26] * uVar9)) +
                     *(longlong *)(param_1 + 0x14));
    *pbVar3 = *pbVar3 | (byte)(0x80 >> ((byte)param_2 & 7));
  }
  return;
}



// FUNCTION 144e196b0 FUN_144e196b0 body=1707 status=ok
// SIG undefined FUN_144e196b0(void)

undefined8 FUN_144e196b0(undefined4 *param_1)

{
  int iVar1;
  uint *puVar2;
  uint **ppuVar3;
  longlong lVar4;
  ushort uVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  ushort uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  short sVar14;
  uint uVar15;
  uint **ppuVar16;
  short sVar17;
  uint *puVar18;
  short sVar19;
  ushort local_res8 [4];
  ushort local_res10 [4];
  ushort local_res18;
  short local_res20;
  uint *local_70;
  uint *local_68;
  uint *local_60;
  uint *local_58;
  
  puVar8 = *(uint **)(param_1 + 0x1e);
  puVar11 = (uint *)0x0;
  local_58 = (uint *)0x0;
  local_60 = (uint *)0x0;
  local_70 = (uint *)0x0;
  uVar12 = (int)param_1[0x18] >> ((byte)*param_1 & 0x1f);
  uVar15 = (int)param_1[0x19] >> ((byte)*param_1 & 0x1f);
  local_68 = (uint *)0x0;
  local_res10[0] = (ushort)uVar12;
  local_res8[0] = (ushort)uVar15;
  if (puVar8 != (uint *)0x0) {
    while( true ) {
      uVar10 = (ushort)puVar8[8];
      puVar18 = *(uint **)(puVar8 + 2);
      uVar5 = (short)puVar8[7] + -1 + uVar10;
      local_res8[0] = (ushort)uVar15;
      if ((short)uVar10 < (short)(ushort)uVar15) {
        local_res8[0] = uVar10;
      }
      ppuVar3 = &local_60;
      local_res10[0] = (ushort)uVar12;
      if ((short)(ushort)uVar12 < (short)uVar5) {
        local_res10[0] = uVar5;
      }
      *puVar8 = 0;
      for (puVar9 = local_60; (puVar9 != (uint *)0x0 && ((int)*puVar9 < 1));
          puVar9 = *(uint **)(puVar9 + 2)) {
        ppuVar3 = (uint **)(puVar9 + 2);
      }
      *(uint **)(puVar8 + 2) = puVar9;
      *ppuVar3 = puVar8;
      if (puVar18 == (uint *)0x0) break;
      uVar12 = (uint)local_res10[0];
      uVar15 = (uint)local_res8[0];
      puVar8 = puVar18;
    }
    local_58 = local_60;
  }
  puVar8 = local_58;
  if (param_1[0xf] == 0) {
    param_1[0xe] = 0x14;
    return 1;
  }
  local_60 = local_58;
  (**(code **)(param_1 + 0x3a))(param_1,local_res8,local_res10);
  for (puVar18 = puVar8; puVar18 != (uint *)0x0; puVar18 = *(uint **)(puVar18 + 2)) {
    puVar18[9] = puVar18[8] - (int)(short)local_res8[0];
  }
  iVar1 = param_1[0xf];
  sVar14 = 0;
  if ((0 < iVar1) &&
     (*(int *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * -4) == (int)(short)local_res8[0])) {
    param_1[0xf] = iVar1 + -1;
  }
  iVar1 = param_1[0xf];
  puVar18 = puVar11;
  local_res18 = local_res8[0];
  uVar10 = local_res8[0];
  do {
    if (iVar1 < 1) {
      if ((short)uVar10 <= (short)local_res10[0]) {
        do {
          (**(code **)(param_1 + 0x40))(param_1);
          uVar10 = uVar10 + 1;
        } while ((short)uVar10 <= (short)local_res10[0]);
      }
      return 0;
    }
    puVar9 = puVar11;
    if (puVar8 != (uint *)0x0) {
      puVar6 = puVar8;
      do {
        puVar9 = puVar6 + 9;
        *puVar9 = *puVar9 - (int)sVar14;
        puVar2 = *(uint **)(puVar6 + 2);
        if (*puVar9 == 0) {
          ppuVar3 = &local_60;
          for (puVar9 = puVar8; puVar9 != (uint *)0x0; puVar9 = *(uint **)(puVar9 + 2)) {
            if (puVar9 == puVar6) {
              *ppuVar3 = *(uint **)(puVar9 + 2);
              puVar8 = local_60;
              break;
            }
            ppuVar3 = (uint **)(puVar9 + 2);
          }
          if ((puVar6[6] & 8) == 0) {
            ppuVar3 = &local_68;
            for (; (puVar18 != (uint *)0x0 && ((int)*puVar18 <= (int)*puVar6));
                puVar18 = *(uint **)(puVar18 + 2)) {
              ppuVar3 = (uint **)(puVar18 + 2);
            }
            *(uint **)(puVar6 + 2) = puVar18;
            *ppuVar3 = puVar6;
            puVar18 = local_68;
          }
          else {
            ppuVar3 = &local_70;
            for (; (puVar11 != (uint *)0x0 && ((int)*puVar11 <= (int)*puVar6));
                puVar11 = *(uint **)(puVar11 + 2)) {
              ppuVar3 = (uint **)(puVar11 + 2);
            }
            *(uint **)(puVar6 + 2) = puVar11;
            *ppuVar3 = puVar6;
            puVar11 = local_70;
          }
        }
        puVar6 = puVar2;
        local_58 = puVar8;
        puVar9 = puVar11;
      } while (puVar2 != (uint *)0x0);
    }
    for (; puVar11 != (uint *)0x0; puVar11 = *(uint **)(puVar11 + 2)) {
      *puVar11 = **(uint **)(puVar11 + 4);
      lVar4 = -4;
      if ((puVar11[6] & 8) != 0) {
        lVar4 = 4;
      }
      puVar11[7] = puVar11[7] - 1;
      *(longlong *)(puVar11 + 4) = lVar4 + (longlong)*(uint **)(puVar11 + 4);
    }
    puVar11 = puVar18;
    puVar8 = puVar9;
    if (puVar9 != (uint *)0x0) {
      puVar6 = *(uint **)(puVar9 + 2);
      ppuVar3 = &local_70;
      while (puVar6 != (uint *)0x0) {
        ppuVar16 = (uint **)(puVar9 + 2);
        if ((int)*puVar6 < (int)*puVar9) {
          *ppuVar3 = puVar6;
          *ppuVar16 = *(uint **)(puVar6 + 2);
          *(uint **)(puVar6 + 2) = puVar9;
          puVar9 = local_70;
          puVar8 = local_70;
          ppuVar16 = &local_70;
        }
        else {
          puVar9 = *ppuVar16;
          if (puVar9 == (uint *)0x0) break;
        }
        ppuVar3 = ppuVar16;
        puVar6 = *(uint **)(puVar9 + 2);
      }
    }
    for (; puVar11 != (uint *)0x0; puVar11 = *(uint **)(puVar11 + 2)) {
      *puVar11 = **(uint **)(puVar11 + 4);
      lVar4 = -4;
      if ((puVar11[6] & 8) != 0) {
        lVar4 = 4;
      }
      puVar11[7] = puVar11[7] - 1;
      *(longlong *)(puVar11 + 4) = lVar4 + (longlong)*(uint **)(puVar11 + 4);
    }
    if (puVar18 != (uint *)0x0) {
      puVar11 = *(uint **)(puVar18 + 2);
      ppuVar3 = &local_68;
      puVar9 = puVar18;
      while (puVar11 != (uint *)0x0) {
        ppuVar16 = (uint **)(puVar9 + 2);
        if ((int)*puVar11 < (int)*puVar9) {
          *ppuVar3 = puVar11;
          *ppuVar16 = *(uint **)(puVar11 + 2);
          *(uint **)(puVar11 + 2) = puVar9;
          puVar9 = local_68;
          ppuVar16 = &local_68;
          puVar18 = local_68;
        }
        else {
          puVar9 = *ppuVar16;
          if (puVar9 == (uint *)0x0) break;
        }
        ppuVar3 = ppuVar16;
        puVar11 = *(uint **)(puVar9 + 2);
      }
    }
    sVar17 = *(short *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_1[0xf] * -4);
    sVar14 = sVar17 - uVar10;
    param_1[0xf] = param_1[0xf] + -1;
    local_res20 = sVar17;
    puVar11 = puVar8;
    if ((short)uVar10 < sVar17) {
LAB_144e19a30:
      uVar10 = local_res18;
      sVar19 = 0;
      puVar11 = puVar8;
      puVar9 = puVar18;
      if (puVar8 != (uint *)0x0) {
        do {
          uVar12 = *puVar11;
          uVar15 = *puVar9;
          uVar13 = uVar12;
          if ((int)uVar15 < (int)uVar12) {
            uVar13 = uVar15;
            uVar15 = uVar12;
          }
          iVar1 = param_1[1];
          uVar12 = -iVar1 & uVar13;
          uVar7 = iVar1 + -1 + uVar15 & -iVar1;
          if ((((iVar1 < (int)(uVar15 - uVar13)) || (uVar12 == uVar13)) || (uVar7 == uVar15)) ||
             (((int)uVar12 <= (int)uVar7 && (uVar7 != iVar1 + uVar12)))) {
            (**(code **)(param_1 + 0x3c))(param_1,uVar10,uVar13,uVar15,puVar11,puVar9);
          }
          else if ((puVar11[6] & 7) != 2) {
            *puVar11 = uVar13;
            sVar19 = sVar19 + 1;
            *puVar9 = uVar15;
            puVar11[9] = 1;
          }
          sVar17 = local_res20;
          uVar5 = local_res18;
          puVar6 = puVar11 + 2;
          puVar11 = *(uint **)puVar6;
          puVar9 = *(uint **)(puVar9 + 2);
        } while (*(uint **)puVar6 != (uint *)0x0);
        puVar11 = puVar8;
        puVar9 = puVar18;
        if (0 < sVar19) {
          do {
            if (puVar11[9] != 0) {
              puVar11[9] = 0;
              (**(code **)(param_1 + 0x3e))(param_1,uVar5,*puVar11,*puVar9,puVar11,puVar9);
            }
            puVar6 = puVar11 + 2;
            puVar11 = *(uint **)puVar6;
            puVar9 = *(uint **)(puVar9 + 2);
          } while (*(uint **)puVar6 != (uint *)0x0);
        }
      }
      (**(code **)(param_1 + 0x40))(param_1);
      local_res18 = local_res18 + 1;
      puVar11 = puVar8;
      uVar10 = local_res18;
      if ((short)local_res18 < sVar17) {
        for (; puVar11 != (uint *)0x0; puVar11 = *(uint **)(puVar11 + 2)) {
          *puVar11 = **(uint **)(puVar11 + 4);
          lVar4 = -4;
          if ((puVar11[6] & 8) != 0) {
            lVar4 = 4;
          }
          puVar11[7] = puVar11[7] - 1;
          *(longlong *)(puVar11 + 4) = lVar4 + (longlong)*(uint **)(puVar11 + 4);
        }
        puVar9 = puVar18;
        puVar11 = puVar8;
        if (puVar8 != (uint *)0x0) {
          puVar6 = *(uint **)(puVar8 + 2);
          ppuVar3 = &local_70;
          while (puVar6 != (uint *)0x0) {
            ppuVar16 = (uint **)(puVar8 + 2);
            if ((int)*puVar6 < (int)*puVar8) {
              *ppuVar3 = puVar6;
              *ppuVar16 = *(uint **)(puVar6 + 2);
              *(uint **)(puVar6 + 2) = puVar8;
              puVar8 = local_70;
              puVar11 = local_70;
              ppuVar16 = &local_70;
            }
            else {
              puVar8 = *ppuVar16;
              if (puVar8 == (uint *)0x0) break;
            }
            ppuVar3 = ppuVar16;
            puVar6 = *(uint **)(puVar8 + 2);
          }
        }
        for (; puVar8 = puVar11, puVar9 != (uint *)0x0; puVar9 = *(uint **)(puVar9 + 2)) {
          *puVar9 = **(uint **)(puVar9 + 4);
          lVar4 = -4;
          if ((puVar9[6] & 8) != 0) {
            lVar4 = 4;
          }
          puVar9[7] = puVar9[7] - 1;
          *(longlong *)(puVar9 + 4) = lVar4 + (longlong)*(uint **)(puVar9 + 4);
          puVar11 = puVar8;
        }
        if (puVar18 != (uint *)0x0) {
          puVar11 = *(uint **)(puVar18 + 2);
          ppuVar3 = &local_68;
          puVar9 = puVar18;
          while (puVar11 != (uint *)0x0) {
            ppuVar16 = (uint **)(puVar9 + 2);
            if ((int)*puVar11 < (int)*puVar9) {
              *ppuVar3 = puVar11;
              *ppuVar16 = *(uint **)(puVar11 + 2);
              *(uint **)(puVar11 + 2) = puVar9;
              puVar9 = local_68;
              ppuVar16 = &local_68;
              puVar18 = local_68;
            }
            else {
              puVar9 = *ppuVar16;
              if (puVar9 == (uint *)0x0) break;
            }
            ppuVar3 = ppuVar16;
            puVar11 = *(uint **)(puVar9 + 2);
          }
        }
        goto LAB_144e19a30;
      }
    }
joined_r0x000144e19c8e:
    puVar9 = puVar8;
    puVar8 = puVar18;
    if (puVar9 != (uint *)0x0) {
      puVar8 = *(uint **)(puVar9 + 2);
      if (puVar9[7] == 0) {
        ppuVar3 = &local_70;
        for (puVar6 = puVar11; puVar6 != (uint *)0x0; puVar6 = *(uint **)(puVar6 + 2)) {
          if (puVar6 == puVar9) {
            *ppuVar3 = *(uint **)(puVar6 + 2);
            puVar11 = local_70;
            break;
          }
          ppuVar3 = (uint **)(puVar6 + 2);
        }
      }
      goto joined_r0x000144e19c8e;
    }
joined_r0x000144e19cd3:
    puVar9 = puVar8;
    if (puVar9 != (uint *)0x0) {
      puVar8 = *(uint **)(puVar9 + 2);
      if (puVar9[7] == 0) {
        ppuVar3 = &local_68;
        for (puVar6 = puVar18; puVar6 != (uint *)0x0; puVar6 = *(uint **)(puVar6 + 2)) {
          if (puVar6 == puVar9) {
            *ppuVar3 = *(uint **)(puVar6 + 2);
            puVar18 = local_68;
            break;
          }
          ppuVar3 = (uint **)(puVar6 + 2);
        }
      }
      goto joined_r0x000144e19cd3;
    }
    iVar1 = param_1[0xf];
    puVar8 = local_58;
  } while( true );
}



// FUNCTION 144e19d60 FUN_144e19d60 body=362 status=ok
// SIG undefined FUN_144e19d60(void)

undefined4 FUN_144e19d60(longlong param_1,char param_2)

{
  short sVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  short sVar5;
  
  iVar4 = *(int *)(param_1 + 0x454);
  if (-1 < iVar4) {
    do {
      *(int *)(param_1 + 100) =
           (int)*(short *)(param_1 + 0x416 + (longlong)iVar4 * 4) * *(int *)(param_1 + 4);
      sVar1 = *(short *)(param_1 + 0x414 + (longlong)iVar4 * 4);
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(int *)(param_1 + 0x60) = (int)sVar1 * *(int *)(param_1 + 4);
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x18);
      cVar3 = FUN_144e19010(param_1,(int)param_2);
      if (cVar3 == '\0') {
        if (*(longlong *)(param_1 + 0x78) != 0) {
          cVar3 = FUN_144e196b0(param_1);
          if (cVar3 != '\0') {
            return *(undefined4 *)(param_1 + 0x38);
          }
        }
        *(int *)(param_1 + 0x454) = *(int *)(param_1 + 0x454) + -1;
      }
      else {
        if (*(int *)(param_1 + 0x38) != 0x62) {
          return 1;
        }
        iVar4 = *(int *)(param_1 + 0x454);
        *(undefined4 *)(param_1 + 0x38) = 0;
        sVar1 = *(short *)(param_1 + 0x414 + (longlong)iVar4 * 4);
        sVar2 = *(short *)(param_1 + 0x416 + (longlong)iVar4 * 4);
        if ((6 < iVar4) || (sVar5 = (short)(((int)sVar1 + (int)sVar2) / 2), sVar5 < sVar1)) {
          *(undefined4 *)(param_1 + 0x454) = 0;
          *(undefined4 *)(param_1 + 0x38) = 0x14;
          return 0x14;
        }
        *(short *)(param_1 + 0x414 + (longlong)(iVar4 + 1) * 4) = sVar5;
        *(short *)(param_1 + 0x416 + (longlong)(*(int *)(param_1 + 0x454) + 1) * 4) = sVar2;
        *(short *)(param_1 + 0x416 + (longlong)*(int *)(param_1 + 0x454) * 4) = sVar5 + -1;
        *(int *)(param_1 + 0x454) = *(int *)(param_1 + 0x454) + 1;
      }
      iVar4 = *(int *)(param_1 + 0x454);
    } while (-1 < iVar4);
  }
  return 0;
}



// FUNCTION 144e19ed0 FUN_144e19ed0 body=446 status=ok
// SIG undefined FUN_144e19ed0(void)

undefined8 FUN_144e19ed0(undefined4 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  
  uVar1 = param_1[0x36];
  if ((uVar1 >> 8 & 1) == 0) {
    *param_1 = 6;
    param_1[4] = 0x20;
    param_1[5] = 2;
  }
  else {
    *param_1 = 0xc;
    param_1[4] = 0x100;
    param_1[5] = 0x1e;
  }
  iVar3 = 1 << ((byte)*param_1 & 0x1f);
  param_1[1] = iVar3;
  param_1[2] = iVar3 >> 1;
  param_1[3] = iVar3 >> 6;
  if ((uVar1 & 8) == 0) {
    if ((uVar1 & 0x10) == 0) {
      *(undefined1 *)(param_1 + 0x42) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x42) = 4;
    }
    if ((uVar1 & 0x20) == 0) {
      *(char *)(param_1 + 0x42) = *(char *)(param_1 + 0x42) + '\x01';
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x42) = 2;
  }
  *(undefined1 **)(param_1 + 0x3a) = &LAB_144e19190;
  param_1[0x115] = 0;
  *(code **)(param_1 + 0x3c) = FUN_144e191c0;
  *(code **)(param_1 + 0x3e) = FUN_144e192b0;
  *(undefined1 **)(param_1 + 0x40) = &LAB_144e19460;
  *(byte *)((longlong)param_1 + 0x109) = ~(byte)(uVar1 >> 9) & 1;
  *(undefined2 *)(param_1 + 0x105) = 0;
  *(short *)((longlong)param_1 + 0x416) = *(short *)(param_1 + 0x24) + -1;
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_1 + 0x25);
  *(longlong *)(param_1 + 0x14) = *(longlong *)(param_1 + 0x28);
  if (0 < (int)param_1[0x26]) {
    *(longlong *)(param_1 + 0x14) =
         (longlong)((param_1[0x24] + -1) * param_1[0x26]) + *(longlong *)(param_1 + 0x28);
  }
  uVar2 = FUN_144e19d60(param_1,0);
  if ((int)uVar2 == 0) {
    if ((*(char *)((longlong)param_1 + 0x109) != '\0') && (*(char *)(param_1 + 0x42) != '\x02')) {
      param_1[0x115] = 0;
      *(undefined **)(param_1 + 0x3a) = &DAT_144e19470;
      *(undefined1 **)(param_1 + 0x3c) = &LAB_144e19480;
      *(code **)(param_1 + 0x3e) = FUN_144e194f0;
      *(undefined **)(param_1 + 0x40) = &DAT_144e196a0;
      *(undefined2 *)(param_1 + 0x105) = 0;
      *(short *)((longlong)param_1 + 0x416) = *(short *)(param_1 + 0x25) + -1;
      uVar2 = FUN_144e19d60(param_1,1);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 144e1a0f0 FUN_144e1a0f0 body=263 status=ok
// SIG undefined FUN_144e1a0f0(void)

undefined8 FUN_144e1a0f0(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(ulonglong *)(param_2 + 0x108) < param_1 + 0x14U) {
    FUN_144b5b5a0(param_2,8);
  }
  puVar1 = (undefined1 *)(param_1 + 0x13);
  uVar3 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 4),*(undefined1 *)(param_1 + 5)),
                            *(undefined1 *)(param_1 + 6)),*(undefined1 *)(param_1 + 7));
  uVar4 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x11)
                                    ),*(undefined1 *)(param_1 + 0x12)),*puVar1);
  if ((((uint)((int)*(undefined8 *)(param_2 + 0x108) - (int)param_1) < uVar3) || (uVar3 < 0x14)) ||
     (uVar3 - 0x14 >> 1 < uVar4)) {
    FUN_144b5b5a0(param_2,8);
  }
  if (0 < *(int *)(param_2 + 0x110)) {
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      puVar2 = puVar1 + 1;
      puVar1 = puVar1 + 2;
      if (*(uint *)(param_2 + 0x120) <= (uint)CONCAT11(*puVar2,*puVar1)) {
        FUN_144b5b5a0(param_2,0x10);
      }
    }
  }
  return 0;
}



// FUNCTION 144e1a200 FUN_144e1a200 body=376 status=ok
// SIG undefined FUN_144e1a200(void)

ulonglong FUN_144e1a200(longlong param_1)

{
  ulonglong uVar1;
  short *psVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(ulonglong *)(param_1 + 0x3f8);
  uVar3 = 0;
  if (uVar1 == 0) {
    if ((*(longlong *)(param_1 + 0x410) != 0) &&
       (((*(uint *)(param_1 + 4) & 0x7fff0000) != 0 || ((*(uint *)(param_1 + 8) & 0x8000) != 0)))) {
      uVar1 = FUN_144e226a0();
      *(ulonglong *)(param_1 + 0x3f8) = uVar1;
      return uVar1;
    }
    iVar6 = -1;
    iVar5 = -1;
    if (*(ushort *)(param_1 + 0x1d0) != 0) {
      psVar2 = *(short **)(param_1 + 0x1e8);
      uVar1 = uVar3;
      do {
        iVar4 = (int)uVar1;
        if ((psVar2[3] == 6) && (psVar2[4] != 0)) {
          if (((*psVar2 == 3) && ((ushort)psVar2[1] < 2)) && ((psVar2[2] == 0x409 || (iVar6 == -1)))
             ) {
            iVar6 = iVar4;
          }
          if (((*psVar2 == 1) && (psVar2[1] == 0)) && ((psVar2[2] == 0 || (iVar5 == -1)))) {
            iVar5 = iVar4;
          }
        }
        uVar1 = (ulonglong)(iVar4 + 1U);
        psVar2 = psVar2 + 0xc;
      } while ((int)(iVar4 + 1U) < (int)(uint)*(ushort *)(param_1 + 0x1d0));
      if ((-1 < iVar6) || (-1 < iVar5)) {
        if (iVar6 != -1) {
          uVar3 = FUN_144e222d0(*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x200),
                                *(short **)(param_1 + 0x1e8) + (longlong)iVar6 * 0xc,&LAB_144e21f60,
                                1);
          if (uVar3 != 0) goto LAB_144e1a356;
        }
        if (iVar5 != -1) {
          uVar3 = FUN_144e223f0(*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x200),
                                *(longlong *)(param_1 + 0x1e8) + (longlong)iVar5 * 0x18,
                                &LAB_144e21f60,1);
        }
LAB_144e1a356:
        *(ulonglong *)(param_1 + 0x3f8) = uVar3;
        return uVar3;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 144e1a3c0 FUN_144e1a3c0 body=136 status=ok
// SIG undefined FUN_144e1a3c0(void)

undefined8 FUN_144e1a3c0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int local_28 [2];
  undefined8 local_20;
  int local_18 [2];
  undefined8 local_10;
  
  uVar1 = FUN_144e1dd20(param_1,"CHARSET_REGISTRY",local_18);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_144e1dd20(param_1,"CHARSET_ENCODING",local_28);
    if ((int)uVar1 == 0) {
      if ((local_18[0] == 1) && (local_28[0] == 1)) {
        *param_2 = local_20;
        *param_3 = local_10;
        return uVar1;
      }
      uVar1 = 6;
    }
  }
  return uVar1;
}



// FUNCTION 144e1a4d0 FUN_144e1a4d0 body=206 status=ok
// SIG undefined FUN_144e1a4d0(void)

undefined8 FUN_144e1a4d0(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar3 = (undefined1 *)FUN_144e24800(lVar1 + 6,param_4);
  if (puVar3 == (undefined1 *)0x0) {
    return 0;
  }
  uVar5 = CONCAT31(CONCAT21(CONCAT11(*puVar3,puVar3[1]),puVar3[2]),puVar3[3]);
  uVar6 = CONCAT31(CONCAT21(CONCAT11(puVar3[4],puVar3[5]),puVar3[6]),puVar3[7]);
  if ((uVar5 != 0) && (iVar2 = FUN_144e246c0((ulonglong)uVar5 + lVar1,param_3), iVar2 != 0)) {
    uVar4 = (**(code **)(*(longlong *)(param_2 + 0x10) + 0x18))(param_2,param_3);
    return uVar4;
  }
  if (uVar6 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_144e24760((ulonglong)uVar6 + lVar1,param_3);
  }
  return uVar4;
}



// FUNCTION 144e1a5b0 FUN_144e1a5b0 body=214 status=ok
// SIG undefined FUN_144e1a5b0(void)

undefined8 FUN_144e1a5b0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar3 = (undefined1 *)FUN_144e24800(lVar1 + 6,param_3);
  if (puVar3 == (undefined1 *)0x0) {
    return 0xffffffff;
  }
  uVar4 = CONCAT31(CONCAT21(CONCAT11(*puVar3,puVar3[1]),puVar3[2]),puVar3[3]);
  uVar5 = CONCAT31(CONCAT21(CONCAT11(puVar3[4],puVar3[5]),puVar3[6]),puVar3[7]);
  if (uVar4 != 0) {
    iVar2 = FUN_144e246c0((ulonglong)uVar4 + lVar1,param_2);
    if (iVar2 != 0) {
      return 1;
    }
  }
  if (uVar5 != 0) {
    iVar2 = FUN_144e24760((ulonglong)uVar5 + lVar1,param_2);
    if (iVar2 != 0) {
      return 0;
    }
  }
  return 0xffffffff;
}



// FUNCTION 144e1a690 FUN_144e1a690 body=206 status=ok
// SIG undefined FUN_144e1a690(void)

short FUN_144e1a690(longlong param_1,uint *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  short sVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  sVar3 = 0;
  uVar6 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar2 + 0xc),*(undefined1 *)(lVar2 + 0xd)),
                            *(undefined1 *)(lVar2 + 0xe)),*(undefined1 *)(lVar2 + 0xf));
  uVar8 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar2 + 0x10),*(undefined1 *)(lVar2 + 0x11)),
                            *(undefined1 *)(lVar2 + 0x12)),*(undefined1 *)(lVar2 + 0x13));
  if (*param_2 != 0xffffffff) {
    uVar4 = *param_2 + 1;
    uVar7 = uVar6;
    if (uVar6 <= uVar4) {
      uVar7 = uVar4;
    }
    uVar6 = uVar7 - uVar6;
    if (uVar6 < uVar8) {
      puVar5 = (undefined1 *)((ulonglong)(uVar6 * 2) + lVar2 + 0x13);
      do {
        puVar1 = puVar5 + 1;
        puVar5 = puVar5 + 2;
        sVar3 = CONCAT11(*puVar1,*puVar5);
        if (sVar3 != 0) break;
        if (uVar7 == 0xffffffff) {
          return 0;
        }
        uVar7 = uVar7 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar8);
    }
    *param_2 = uVar7;
  }
  return sVar3;
}



// FUNCTION 144e1a760 FUN_144e1a760 body=1252 status=ok
// SIG undefined FUN_144e1a760(void)

ulonglong FUN_144e1a760(undefined8 param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  void *pvVar15;
  uint uVar16;
  uint local_res20 [2];
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  int local_64;
  void *local_60;
  void *local_58;
  int local_50;
  int local_4c;
  undefined8 local_48;
  
  puVar7 = *(undefined8 **)(param_2 + 0xb4);
  uVar9 = *(undefined8 *)(*(longlong *)(param_2 + 0x24) + 8);
  local_res20[0] = param_4;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)FUN_144b57b00(uVar9,&DAT_149a099b0);
    if (puVar7 == (undefined8 *)0x0) {
      return 0xb;
    }
    *(undefined8 **)(param_2 + 0xb4) = puVar7;
    *(undefined8 *)(param_2 + 0xa8) = *puVar7;
  }
  uVar8 = FUN_144b57b20(*(undefined8 *)(param_2 + 0x24),"postscript-cmaps",1);
  *(undefined8 *)(param_2 + 0xb6) = uVar8;
  if (*(longlong *)(param_2 + 0xb8) == 0) {
    uVar8 = FUN_144b55a90(uVar9,"truetype");
    uVar8 = FUN_144b57b20(uVar8,"multi-masters",0);
    *(undefined8 *)(param_2 + 0xb8) = uVar8;
  }
  if (*(longlong *)(param_2 + 0xba) == 0) {
    uVar9 = FUN_144b55a90(uVar9,"truetype");
    uVar9 = FUN_144b57b20(uVar9,"metrics-variations",0);
    *(undefined8 *)(param_2 + 0xba) = uVar9;
  }
  uVar10 = FUN_144e234f0(param_1,param_2);
  local_res20[0] = (uint)uVar10;
  if (local_res20[0] != 0) {
    return uVar10;
  }
  uVar9 = *(undefined8 *)(param_2 + 0x28);
  uVar13 = (param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f);
  uVar11 = uVar13 & 0xffff;
  uVar16 = uVar11 - 1;
  if (-1 < (int)param_3) {
    uVar16 = uVar11;
  }
  if ((int)uVar16 < (int)param_2[0x38]) {
LAB_144e1a8ab:
    uVar10 = FUN_144b597a0(uVar9,*(undefined4 *)
                                  (*(longlong *)(param_2 + 0x3a) + (longlong)(int)uVar16 * 4));
    local_res20[0] = (uint)uVar10;
    if (local_res20[0] != 0) {
      return uVar10;
    }
    uVar10 = (*(code *)puVar7[0x16])(param_2,uVar9);
    local_res20[0] = (uint)uVar10;
    if (local_res20[0] != 0) {
      return uVar10;
    }
    local_48 = *(undefined8 *)(param_2 + 0x26);
    iVar14 = (int)uVar13 >> 0x10;
    local_60 = (void *)0x0;
    local_58 = (void *)0x0;
    local_64 = iVar14;
    iVar5 = (**(code **)(param_2 + 0xa8))(param_2,0x66766172,uVar9,&local_74);
    if ((((iVar5 == 0) && (0x13 < local_74)) &&
        (iVar5 = FUN_144b59e60(uVar9,local_res20), local_res20[0] == 0)) &&
       ((uVar1 = FUN_144b59d40(uVar9,local_res20), local_res20[0] == 0 &&
        (local_res20[0] = FUN_144b597f0(uVar9,2), local_res20[0] == 0)))) {
      uVar2 = FUN_144b59d40(uVar9,local_res20);
      local_70 = (uint)uVar2;
      if (local_res20[0] != 0) goto LAB_144e1aa42;
      uVar3 = FUN_144b59d40(uVar9,local_res20);
      local_78 = (uint)uVar3;
      if (local_res20[0] != 0) goto LAB_144e1aa42;
      uVar4 = FUN_144b59d40(uVar9,local_res20);
      uVar16 = (uint)uVar4;
      local_68 = (uint)uVar4;
      if ((local_res20[0] != 0) ||
         (local_6c = FUN_144b59d40(uVar9,local_res20), local_res20[0] != 0)) goto LAB_144e1aa42;
      if (((iVar5 != 0x10000) || (uVar3 != 0x14)) || (0x3ffd < (ushort)(uVar2 - 1))) {
LAB_144e1aa52:
        uVar11 = (uint)uVar1;
        goto LAB_144e1aa55;
      }
      uVar13 = local_6c & 0xffff;
      if (((uVar13 != (uint)uVar2 * 4 + 4) && (uVar13 != (uint)uVar2 * 4 + 6)) || (0x7eff < uVar4))
      goto LAB_144e1aa52;
      uVar11 = (uint)uVar1;
      if (local_74 < uVar4 * uVar13 + uVar11 + ((uint)uVar2 + (uint)uVar2 * 4) * 4)
      goto LAB_144e1aa55;
      param_2[0x106] = param_2[0x106] | 1;
    }
    else {
LAB_144e1aa42:
      uVar11 = 0;
      uVar2 = 0;
      local_70 = 0;
      local_78 = 0;
      local_6c = 0;
LAB_144e1aa55:
      uVar16 = 0;
      local_68 = 0;
    }
    uVar13 = uVar16;
    if ((*(byte *)(param_2 + 0x106) & 1) != 0) {
      iVar5 = (uint)uVar2 * 4;
      local_4c = iVar5;
      local_60 = (void *)FUN_144b560d0(local_48,iVar5,local_res20);
      if ((local_res20[0] == 0) &&
         (local_58 = (void *)FUN_144b560d0(local_48,iVar5,local_res20), local_res20[0] == 0)) {
        iVar14 = FUN_144b59870(uVar9);
        local_50 = iVar14 + -0x10 + uVar11;
        iVar14 = local_50 + 8;
        if (uVar2 != 0) {
          uVar10 = (ulonglong)(uint)uVar2;
          pvVar15 = local_60;
          do {
            local_res20[0] = FUN_144b59890(uVar9,iVar14,pvVar15,4);
            iVar14 = iVar14 + local_78;
            pvVar15 = (void *)((longlong)pvVar15 + 4);
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        iVar14 = local_4c;
        uVar11 = local_6c;
        uVar12 = 0;
        iVar5 = local_50 + 4 + local_78 * uVar2;
        if (uVar16 != 0) {
          uVar10 = (ulonglong)(ushort)local_70;
          do {
            local_res20[0] = FUN_144b59890(uVar9,iVar5,local_58,iVar14);
            iVar6 = memcmp(local_60,local_58,uVar10 << 2);
            uVar13 = local_68;
            if (iVar6 == 0) break;
            uVar12 = uVar12 + 1;
            iVar5 = iVar5 + (uVar11 & 0xffff);
          } while (uVar12 < uVar16);
        }
        iVar14 = local_64;
        if (uVar12 == uVar16) {
          uVar13 = (uint)(ushort)((short)uVar13 + 1);
        }
      }
    }
    FUN_144b56350(local_48,local_60);
    FUN_144b56350(local_48,local_58);
    iVar5 = (**(code **)(param_2 + 0xa8))(param_2,0x676c7966,uVar9,0);
    if (((iVar5 != 0) &&
        (iVar5 = (**(code **)(param_2 + 0xa8))(param_2,0x43464632,uVar9,0), iVar5 != 0)) &&
       (iVar5 = (**(code **)(param_2 + 0xa8))(param_2,0x43464620,uVar9,0), iVar5 == 0)) {
      uVar13 = 0;
    }
    if ((int)(uVar13 & 0xffff) < iVar14) {
      if (-1 < (int)param_3) goto LAB_144e1ac0c;
      uVar13 = 0;
    }
    param_2[3] = uVar13 << 0x10;
    *param_2 = param_2[0x38];
    uVar10 = (ulonglong)local_res20[0];
    param_2[1] = param_3;
  }
  else {
    if ((int)param_3 < 0) {
      uVar16 = 0;
      goto LAB_144e1a8ab;
    }
LAB_144e1ac0c:
    uVar10 = 6;
  }
  return uVar10;
}



// FUNCTION 144e1ac50 FUN_144e1ac50 body=240 status=ok
// SIG undefined FUN_144e1ac50(void)

uint * FUN_144e1ac50(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint *puVar13;
  int local_res8 [2];
  
  uVar4 = *(uint *)(param_1 + 0x28);
  lVar12 = *(longlong *)(param_1 + 0x18);
  local_res8[0] = 0;
  uVar9 = uVar4 + 1;
  if (*(uint *)(param_1 + 0x2c) < uVar9) {
    *(undefined8 *)(param_1 + 0x38) = param_2;
    uVar6 = FUN_144b561b0(param_2,4,*(uint *)(param_1 + 0x2c),uVar9,*(undefined8 *)(param_1 + 0x30),
                          local_res8);
    *(undefined8 *)(param_1 + 0x30) = uVar6;
    if (local_res8[0] != 0) {
      return (uint *)0x0;
    }
    *(uint *)(param_1 + 0x2c) = uVar9;
  }
  puVar5 = *(uint **)(param_1 + 0x30);
  uVar8 = 0;
  if (uVar4 != 0) {
    lVar10 = lVar12 + 9;
    lVar11 = lVar12 + 8;
    lVar12 = lVar12 + 7;
    uVar7 = (ulonglong)uVar4;
    puVar13 = puVar5;
    do {
      puVar1 = (undefined1 *)(lVar12 + 3);
      puVar2 = (undefined1 *)(lVar11 + 3);
      lVar12 = lVar12 + 0xb;
      puVar3 = (undefined1 *)(lVar10 + 3);
      lVar11 = lVar11 + 0xb;
      lVar10 = lVar10 + 0xb;
      *puVar13 = (uint)CONCAT21(CONCAT11(*puVar1,*puVar2),*puVar3);
      uVar7 = uVar7 - 1;
      uVar8 = (ulonglong)uVar4;
      puVar13 = puVar13 + 1;
    } while (uVar7 != 0);
  }
  puVar5[uVar8] = 0;
  return puVar5;
}



// FUNCTION 144e1ad40 FUN_144e1ad40 body=2589 status=ok
// SIG undefined FUN_144e1ad40(void)

void FUN_144e1ad40(undefined8 param_1,longlong param_2,undefined8 param_3,uint param_4,int *param_5)

{
  ushort uVar1;
  short sVar2;
  longlong *plVar3;
  bool bVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  undefined8 uVar11;
  longlong lVar12;
  short sVar13;
  uint uVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined2 *puVar17;
  byte bVar18;
  int *piVar19;
  uint uVar20;
  int *piVar21;
  int *piVar22;
  longlong lVar23;
  bool bVar24;
  undefined1 auStack_b8 [32];
  longlong local_98;
  uint *local_90;
  uint local_88;
  char local_84;
  uint local_80;
  uint local_7c;
  longlong local_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 local_64;
  ushort local_60;
  ushort local_5e;
  int local_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = *(longlong *)(param_2 + 0x2d0);
  bVar4 = false;
  local_84 = '\0';
  if (0 < (int)param_4) {
    uVar16 = (ulonglong)param_4;
    bVar4 = false;
    do {
      if (*param_5 == 0x69677066) {
        local_84 = '\x01';
      }
      else if (*param_5 == 0x69677073) {
        bVar4 = true;
      }
      param_5 = param_5 + 4;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  if (*(longlong *)(*(longlong *)(param_2 + 0xd0) + 0x50) == 0) {
    piVar19 = *(int **)(param_2 + 0xf8);
    uVar16 = (ulonglong)*(ushort *)(param_2 + 0xf4);
    for (piVar21 = piVar19; piVar21 < piVar19 + uVar16 * 4; piVar21 = piVar21 + 4) {
      if ((*piVar21 == 0x676c7966) && (piVar21[3] != 0)) goto LAB_144e1ae43;
    }
    for (piVar21 = piVar19; piVar21 < piVar19 + uVar16 * 4; piVar21 = piVar21 + 4) {
      if ((*piVar21 == 0x43464620) && (piVar21[3] != 0)) goto LAB_144e1ae43;
    }
    piVar21 = piVar19 + uVar16 * 4;
    for (; piVar19 < piVar21; piVar19 = piVar19 + 4) {
      if ((*piVar19 == 0x43464632) && (piVar19[3] != 0)) goto LAB_144e1ae43;
    }
    bVar18 = 0;
  }
  else {
LAB_144e1ae43:
    bVar18 = 1;
  }
  bVar24 = false;
  iVar6 = (**(code **)(param_2 + 0x2a0))(param_2,0x73626978,param_1,0);
  lVar23 = local_78;
  piVar19 = (int *)0x0;
  local_80 = 0;
  if (iVar6 != 0) {
    local_80 = (uint)bVar18;
  }
  if (((char)local_80 == '\0') && (*(code **)(local_78 + 0x88) != (code *)0x0)) {
    local_88 = (**(code **)(local_78 + 0x88))(param_2,param_1);
    bVar24 = local_88 == 0;
    if ((!bVar24) || (uVar20 = 0, iVar6 == 0)) goto LAB_144e1aea5;
  }
  else {
LAB_144e1aea5:
    local_88 = (**(code **)(lVar23 + 0x30))(param_2,param_1);
    uVar20 = local_88;
    if (local_88 != 0) goto LAB_144e1b74e;
  }
  local_88 = uVar20;
  iVar6 = (**(code **)(param_2 + 0x2a0))(param_2,0x43424c43,param_1,0);
  iVar7 = (**(code **)(param_2 + 0x2a0))(param_2,0x43424454,param_1,0);
  lVar23 = local_78;
  if ((iVar6 == 0) || (iVar7 == 0)) {
    local_80 = local_80 & 0xffffff00;
  }
  if (0x3ff0 < (ushort)(*(short *)(param_2 + 0x112) - 0x10U)) goto LAB_144e1b74e;
  local_88 = (**(code **)(local_78 + 0x48))(param_2,param_1);
  local_88 = (**(code **)(lVar23 + 0x40))(param_2,param_1);
  local_88 = (**(code **)(lVar23 + 0x60))(param_2,param_1);
  uVar8 = (**(code **)(lVar23 + 0x58))(param_2,param_1);
  uVar20 = local_80;
  local_88 = uVar8;
  if (!bVar24) {
    local_88 = (**(code **)(lVar23 + 0x38))(param_2,param_1,0);
    uVar16 = (ulonglong)local_88;
    if (local_88 == 0) {
      local_88 = (**(code **)(lVar23 + 0xb8))(param_2,param_1);
      uVar16 = (ulonglong)local_88;
      if ((char)local_88 == -0x72) {
        uVar16 = 0x93;
LAB_144e1af87:
        local_88 = (uint)uVar16;
        plVar3 = *(longlong **)(*(longlong *)(param_2 + 0xd0) + 0x50);
        if ((plVar3 == (longlong *)0x0) || (*(longlong *)(*plVar3 + 0x10) == 0)) goto LAB_144e1b74e;
        *(undefined2 *)(param_2 + 0x15a) = 0;
        local_88 = 0;
        uVar20 = local_80;
      }
      else {
LAB_144e1afdb:
        uVar20 = local_80;
        if ((int)uVar16 != 0) goto LAB_144e1b74e;
      }
    }
    else {
      if ((char)local_88 != -0x72) goto LAB_144e1afdb;
      if (*(int *)(param_2 + 0xf0) != 0x74727565) {
        uVar16 = 0x8f;
        goto LAB_144e1af87;
      }
      local_88 = 0;
      uVar20 = 0;
    }
    local_88 = (**(code **)(lVar23 + 0x38))(param_2,param_1,CONCAT71((int7)(uVar16 >> 8),1));
    if ((local_88 == 0) &&
       (local_88 = (**(code **)(lVar23 + 0xb8))(param_2,param_1,1), local_88 == 0)) {
      *(undefined1 *)(param_2 + 400) = 1;
    }
    else if ((char)local_88 != -0x72) goto LAB_144e1b74e;
    local_88 = (**(code **)(lVar23 + 0x50))(param_2,param_1);
    if (local_88 != 0) {
      *(undefined2 *)(param_2 + 0x208) = 0xffff;
    }
  }
  if (*(code **)(lVar23 + 0xc0) != (code *)0x0) {
    local_88 = (**(code **)(lVar23 + 0xc0))(param_2,param_1);
  }
  if (*(code **)(lVar23 + 0xe0) != (code *)0x0) {
    local_88 = (**(code **)(lVar23 + 0xe0))(param_2,param_1);
    local_88 = (**(code **)(lVar23 + 0xe8))(param_2,param_1);
  }
  local_88 = (**(code **)(lVar23 + 0x80))(param_2,param_1);
  local_88 = (**(code **)(lVar23 + 0x78))(param_2,param_1);
  local_88 = (**(code **)(lVar23 + 0x70))(param_2,param_1);
  *(undefined8 *)(param_2 + 0x18) = 0;
  plVar3 = (longlong *)(param_2 + 0x18);
  *(uint *)(param_2 + 0x10) = (uint)*(ushort *)(param_2 + 0x174);
  *(undefined8 *)(param_2 + 0x20) = 0;
  if ((*(short *)(param_2 + 0x208) == -1) || ((*(ushort *)(param_2 + 0x248) & 0x100) == 0)) {
    local_88 = FUN_144e1be40(param_2,0x15,plVar3);
    if ((local_88 != 0) ||
       (((uVar14 = 0, *plVar3 == 0 &&
         (((local_84 == '\0' &&
           (local_88 = FUN_144e1be40(param_2,0x10,plVar3), uVar14 = local_88, local_88 != 0)) ||
          ((local_88 = uVar14, uVar14 = local_88, *plVar3 == 0 &&
           (local_88 = FUN_144e1be40(param_2,1,plVar3), uVar14 = local_88, local_88 != 0)))))) ||
        (local_88 = uVar14, local_88 = FUN_144e1be40(param_2,0x16,param_2 + 0x20), local_88 != 0))))
    goto LAB_144e1b74e;
    if (*(longlong *)(param_2 + 0x20) == 0) goto LAB_144e1b1bf;
  }
  else {
    if (((local_84 == '\0') && (local_88 = FUN_144e1be40(param_2,0x10,plVar3), local_88 != 0)) ||
       ((*plVar3 == 0 && (local_88 = FUN_144e1be40(param_2,1,plVar3), local_88 != 0))))
    goto LAB_144e1b74e;
LAB_144e1b1bf:
    if (((!bVar4) && (local_88 = FUN_144e1be40(param_2,0x11,param_2 + 0x20), local_88 != 0)) ||
       ((*(longlong *)(param_2 + 0x20) == 0 &&
        (local_88 = FUN_144e1be40(param_2,2,param_2 + 0x20), local_88 != 0)))) goto LAB_144e1b74e;
  }
  uVar14 = *(uint *)(param_2 + 8);
  if ((*(int *)(param_2 + 0x46c) - 2U < 2) || (*(longlong *)(param_2 + 0x4d8) != 0)) {
    uVar14 = uVar14 | 0x4000;
  }
  uVar9 = uVar14 | 1;
  if ((char)uVar20 != '\x01') {
    uVar9 = uVar14;
  }
  uVar14 = uVar9 | 0x18;
  if ((uVar8 == 0) && (*(int *)(param_2 + 0x270) != 0x30000)) {
    uVar14 = uVar9 | 0x218;
  }
  uVar8 = uVar14 | 4;
  if (*(int *)(param_2 + 0x27c) == 0) {
    uVar8 = uVar14;
  }
  uVar14 = uVar8 | 0x20;
  if (*(char *)(param_2 + 400) == '\0') {
    uVar14 = uVar8;
  }
  uVar8 = uVar14 | 0x40;
  if (*(int *)(param_2 + 0x490) == 0) {
    uVar8 = uVar14;
  }
  if ((*(byte *)(param_2 + 0x418) & 1) != 0) {
    piVar21 = *(int **)(param_2 + 0xf8);
    uVar16 = (ulonglong)*(ushort *)(param_2 + 0xf4);
    for (piVar22 = piVar21;
        (piVar10 = piVar19, piVar22 < piVar21 + uVar16 * 4 &&
        ((*piVar22 != 0x676c7966 || (piVar10 = piVar22, piVar22[3] == 0)))); piVar22 = piVar22 + 4)
    {
    }
    if (piVar10 != (int *)0x0) {
      for (piVar22 = piVar21;
          (piVar10 = piVar19, piVar22 < piVar21 + uVar16 * 4 &&
          ((*piVar22 != 0x67766172 || (piVar10 = piVar22, piVar22[3] == 0)))); piVar22 = piVar22 + 4
          ) {
      }
      if (piVar10 != (int *)0x0) {
        uVar8 = uVar8 | 0x100;
      }
    }
    piVar22 = piVar21 + uVar16 * 4;
    for (; piVar21 < piVar22; piVar21 = piVar21 + 4) {
      if ((*piVar21 == 0x43464632) && (piVar21[3] != 0)) {
        uVar8 = uVar8 | 0x100;
        break;
      }
    }
  }
  *(uint *)(param_2 + 8) = uVar8;
  if (((char)uVar20 == '\x01') && (*(short *)(param_2 + 0x208) != -1)) {
    uVar1 = *(ushort *)(param_2 + 0x248);
    if ((uVar1 & 0x200) == 0) {
      uVar8 = (uint)((uVar1 & 1) != 0);
      uVar20 = uVar8 | 2;
      if ((uVar1 & 0x20) == 0) {
        uVar20 = uVar8;
      }
    }
    else {
      uVar20 = 3;
      if ((uVar1 & 0x20) == 0) {
        uVar20 = 1;
      }
    }
  }
  else {
    uVar20 = (*(ushort *)(param_2 + 300) & 1) * 2;
    if ((*(ushort *)(param_2 + 300) & 2) != 0) {
      uVar20 = uVar20 | 1;
    }
  }
  *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | uVar20;
  FUN_144e21c80(param_2);
  bVar4 = false;
  piVar21 = piVar19;
  piVar22 = piVar19;
  if (*(int *)(param_2 + 0x38) < 1) {
LAB_144e1b42a:
    local_64 = 0x10003;
    local_68 = 0x756e6963;
    local_70 = param_2;
    uVar20 = FUN_144b57870(&DAT_149a1d990,0,&local_70,0);
    if (((uVar20 != 0) && ((uVar20 & 0xff) != 0xa3)) && ((uVar20 & 0xff) != 7)) goto LAB_144e1b74e;
    local_88 = 0;
  }
  else {
    do {
      puVar15 = &DAT_149a1da50;
      lVar23 = *(longlong *)((longlong)piVar22 + *(longlong *)(param_2 + 0x40));
      do {
        if ((*puVar15 == (uint)*(ushort *)(lVar23 + 0xc)) &&
           ((puVar15[1] == (uint)*(ushort *)(lVar23 + 0xe) || (puVar15[1] == 0xffffffff)))) {
          uVar20 = puVar15[2];
          goto LAB_144e1b3f2;
        }
        puVar15 = puVar15 + 3;
      } while (puVar15 < &DAT_149a1dad4);
      uVar20 = 0;
LAB_144e1b3f2:
      *(uint *)(lVar23 + 8) = uVar20;
      if ((uVar20 == 0x756e6963) || (uVar20 == 0x73796d62)) {
        bVar4 = true;
      }
      uVar20 = (int)piVar21 + 1;
      piVar21 = (int *)(ulonglong)uVar20;
      piVar22 = piVar22 + 2;
    } while ((int)uVar20 < *(int *)(param_2 + 0x38));
    if (!bVar4) goto LAB_144e1b42a;
  }
  uVar20 = *(uint *)(param_2 + 0x470);
  if (uVar20 != 0) {
    local_80 = (uint)*(ushort *)(param_2 + 0x112);
    local_7c = (uint)*(ushort *)(param_2 + 0x20a);
    lVar23 = *(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x30);
    if ((*(ushort *)(param_2 + 0x112) == 0) || (*(short *)(param_2 + 0x208) == -1)) {
      local_7c = 1;
      local_80 = 1;
    }
    local_90 = &local_88;
    local_98 = 0;
    local_70 = lVar23;
    uVar11 = FUN_144b561b0(lVar23,0x10,0,uVar20);
    *(undefined8 *)(param_2 + 0x30) = uVar11;
    if (local_88 != 0) goto LAB_144e1b74e;
    local_90 = &local_88;
    local_98 = 0;
    lVar12 = FUN_144b561b0(lVar23,4,0,uVar20);
    if (local_88 != 0) goto LAB_144e1b74e;
    piVar21 = piVar19;
    if (uVar20 != 0) {
      do {
        puVar17 = (undefined2 *)((longlong)piVar21 * 0x10 + *(longlong *)(param_2 + 0x30));
        local_88 = (**(code **)(local_78 + 0xd8))(param_2,piVar19,&local_60);
        if (local_88 == 0) {
          *puVar17 = (short)(local_4c >> 6);
          puVar17[1] = (short)((int)((uint)local_60 * (int)(short)local_7c +
                                    (local_80 >> 1 & 0x7fff)) / (int)(local_80 & 0xffff));
          *(uint *)(puVar17 + 4) = (uint)local_60 << 6;
          *(uint *)(puVar17 + 6) = (uint)local_5e << 6;
          *(uint *)(puVar17 + 2) = (uint)local_5e << 6;
          if ((local_60 != 0) && (local_5e != 0)) {
            *(int *)(lVar12 + (longlong)piVar21 * 4) = (int)piVar19;
            piVar21 = (int *)(ulonglong)((int)piVar21 + 1);
          }
        }
        uVar8 = (int)piVar19 + 1;
        piVar19 = (int *)(ulonglong)uVar8;
        lVar23 = local_70;
      } while (uVar8 < uVar20);
    }
    local_90 = &local_88;
    local_98 = lVar12;
    uVar11 = FUN_144b561b0(lVar23,4,uVar20,piVar21);
    if ((int)piVar21 != 0) {
      *(undefined8 *)(param_2 + 0x478) = uVar11;
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 2;
      *(int *)(param_2 + 0x28) = (int)piVar21;
    }
  }
  if ((*(uint *)(param_2 + 8) & 3) == 0) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 1;
  }
  if ((*(byte *)(param_2 + 8) & 1) == 0) goto LAB_144e1b74e;
  *(int *)(param_2 + 0x58) = (int)*(short *)(param_2 + 0x124);
  *(int *)(param_2 + 0x5c) = (int)*(short *)(param_2 + 0x126);
  *(int *)(param_2 + 0x60) = (int)*(short *)(param_2 + 0x128);
  *(int *)(param_2 + 100) = (int)*(short *)(param_2 + 0x12a);
  *(undefined2 *)(param_2 + 0x68) = *(undefined2 *)(param_2 + 0x112);
  if ((*(short *)(param_2 + 0x208) == -1) || ((*(byte *)(param_2 + 0x248) & 0x80) == 0)) {
    sVar13 = *(short *)(param_2 + 0x13c);
    *(short *)(param_2 + 0x6a) = sVar13;
    sVar2 = *(short *)(param_2 + 0x13e);
    *(short *)(param_2 + 0x6c) = sVar2;
    *(short *)(param_2 + 0x6e) = (*(short *)(param_2 + 0x140) - sVar2) + sVar13;
    if ((sVar13 == 0) && ((sVar2 == 0 && (*(short *)(param_2 + 0x208) != -1)))) {
      sVar13 = *(short *)(param_2 + 0x24e);
      if ((sVar13 != 0) || (*(short *)(param_2 + 0x250) != 0)) goto LAB_144e1b65f;
      *(short *)(param_2 + 0x6a) = *(short *)(param_2 + 0x254);
      *(short *)(param_2 + 0x6c) = -*(short *)(param_2 + 0x256);
      sVar13 = *(short *)(param_2 + 0x254) + *(short *)(param_2 + 0x256);
      goto LAB_144e1b67b;
    }
  }
  else {
    sVar13 = *(short *)(param_2 + 0x24e);
LAB_144e1b65f:
    *(short *)(param_2 + 0x6a) = sVar13;
    *(short *)(param_2 + 0x6c) = *(short *)(param_2 + 0x250);
    sVar13 = (*(short *)(param_2 + 0x252) - *(short *)(param_2 + 0x250)) + sVar13;
LAB_144e1b67b:
    *(short *)(param_2 + 0x6e) = sVar13;
  }
  *(undefined2 *)(param_2 + 0x70) = *(undefined2 *)(param_2 + 0x142);
  if (*(char *)(param_2 + 400) == '\0') {
    uVar5 = *(undefined2 *)(param_2 + 0x6e);
  }
  else {
    uVar5 = *(undefined2 *)(param_2 + 0x1a2);
  }
  *(undefined2 *)(param_2 + 0x72) = uVar5;
  *(short *)(param_2 + 0x74) = *(short *)(param_2 + 0x278) - *(short *)(param_2 + 0x27a) / 2;
  *(undefined2 *)(param_2 + 0x76) = *(undefined2 *)(param_2 + 0x27a);
LAB_144e1b74e:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
}



// FUNCTION 144e1b780 FUN_144e1b780 body=626 status=ok
// SIG undefined FUN_144e1b780(void)

void FUN_144e1b780(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    lVar2 = *(longlong *)(param_1 + 0x2d0);
    if (lVar2 != 0) {
      if (*(code **)(lVar2 + 0xa0) != (code *)0x0) {
        (**(code **)(lVar2 + 0xa0))();
      }
      if (*(code **)(lVar2 + 200) != (code *)0x0) {
        (**(code **)(lVar2 + 200))(param_1);
      }
      if (*(code **)(lVar2 + 0xf0) != (code *)0x0) {
        (**(code **)(lVar2 + 0xf0))(param_1);
        (**(code **)(lVar2 + 0xf8))(param_1);
      }
    }
    if (*(char *)(param_1 + 0x4b8) != '\0') {
      if (*(longlong *)(param_1 + 0x498) != 0) {
        FUN_144b59b40(*(undefined8 *)(param_1 + 0xa0),(longlong *)(param_1 + 0x498));
      }
      *(undefined8 *)(param_1 + 0x4a0) = 0;
      *(undefined8 *)(param_1 + 0x4a8) = 0;
      *(undefined4 *)(param_1 + 0x4b0) = 0;
    }
    FUN_144b59b40(*(undefined8 *)(param_1 + 0xa0),param_1 + 0x480);
    *(undefined8 *)(param_1 + 0x488) = 0;
    *(undefined8 *)(param_1 + 0x490) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0xe8));
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0xf8));
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined2 *)(param_1 + 0xf4) = 0;
    FUN_144b59b40(*(undefined8 *)(param_1 + 0xa0),param_1 + 0x290);
    *(undefined4 *)(param_1 + 0x298) = 0;
    *(undefined8 *)(param_1 + 0x42c) = 0;
    if (*(char *)(param_1 + 400) != '\0') {
      FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x1c0));
      *(undefined8 *)(param_1 + 0x1c0) = 0;
      FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x1c8));
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      *(undefined1 *)(param_1 + 400) = 0;
    }
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x300));
    *(undefined8 *)(param_1 + 0x300) = 0;
    *(undefined2 *)(param_1 + 0x2fa) = 0;
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x68))(param_1);
    }
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x478));
    *(undefined8 *)(param_1 + 0x478) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x3f8));
    *(undefined8 *)(param_1 + 0x3f8) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x420));
    *(undefined8 *)(param_1 + 0x420) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x378));
    *(undefined8 *)(param_1 + 0x378) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x380));
    *(undefined8 *)(param_1 + 0x380) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x390));
    *(undefined8 *)(param_1 + 0x390) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x3a0));
    *(undefined8 *)(param_1 + 0x3a0) = 0;
    *(undefined8 *)(param_1 + 0x2d0) = 0;
  }
  return;
}



// FUNCTION 144e1ba00 FUN_144e1ba00 body=1088 status=ok
// SIG undefined FUN_144e1ba00(void)

uint FUN_144e1ba00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint local_res10;
  uint local_res18;
  ulonglong local_68;
  
  local_res18 = 0;
  if (*(ulonglong *)(param_2 + 0x108) < param_1 + 4U) {
    FUN_144b5b5a0(param_2);
  }
  uVar6 = CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3));
  local_68 = (ulonglong)uVar6;
  uVar14 = (uint)uVar6;
  if (*(ulonglong *)(param_2 + 0x108) < local_68 + param_1) {
    if (0 < *(int *)(param_2 + 0x110)) {
      FUN_144b5b5a0(param_2);
    }
    uVar14 = (int)*(undefined8 *)(param_2 + 0x108) - (int)param_1;
    local_68 = (ulonglong)uVar14;
  }
  if (uVar14 < 0x10) {
    FUN_144b5b5a0(param_2);
  }
  bVar3 = *(byte *)(param_1 + 7);
  uVar4 = *(undefined1 *)(param_1 + 6);
  if ((1 < *(int *)(param_2 + 0x110)) && ((bVar3 & 1) != 0)) {
    FUN_144b5b5a0(param_2);
  }
  uVar6 = CONCAT11(uVar4,bVar3) >> 1;
  uVar20 = (uint)uVar6;
  if (uVar14 < uVar20 * 8 + 0x10) {
    FUN_144b5b5a0(param_2);
  }
  if (1 < *(int *)(param_2 + 0x110)) {
    uVar7 = CONCAT11(*(undefined1 *)(param_1 + 8),*(undefined1 *)(param_1 + 9));
    bVar3 = *(byte *)(param_1 + 0xb);
    uVar8 = CONCAT11(*(undefined1 *)(param_1 + 0xc),*(undefined1 *)(param_1 + 0xd));
    if (((uVar8 | uVar7) & 1) != 0) {
      FUN_144b5b5a0(param_2);
    }
    uVar14 = (uint)(uVar7 >> 1);
    if ((((uVar20 < uVar14) || (uVar14 * 2 < uVar20)) || ((uVar8 >> 1) + uVar14 != uVar20)) ||
       (uVar14 != 1 << (bVar3 & 0x1f))) {
      FUN_144b5b5a0(param_2);
    }
  }
  uVar16 = (ulonglong)(uVar20 * 2);
  lVar15 = param_1 + 0x10 + (ulonglong)(uVar20 * 2);
  lVar1 = param_1 + 0xe;
  lVar2 = uVar16 + lVar15;
  puVar9 = (undefined1 *)(uVar16 + uVar16 + lVar2);
  if ((1 < *(int *)(param_2 + 0x110)) &&
     (uVar10 = (ulonglong)(uVar20 * 2 - 2),
     CONCAT11(*(undefined1 *)(uVar10 + lVar1),*(undefined1 *)(uVar10 + 1 + lVar1)) != -1)) {
    FUN_144b5b5a0(param_2);
  }
  local_res10 = 0;
  uVar14 = 0;
  if (uVar6 != 0) {
    puVar11 = (undefined1 *)(lVar15 + -1);
    lVar15 = (uVar16 + lVar2) - lVar2;
    puVar17 = (undefined1 *)(lVar2 + -1);
    uVar19 = 0;
    uVar21 = 0;
    do {
      puVar12 = puVar11 + 1;
      puVar11 = puVar11 + 2;
      puVar18 = puVar17 + 2;
      uVar13 = (uint)CONCAT11(*puVar12,*puVar11);
      uVar22 = (uint)CONCAT11(puVar17[(lVar1 - lVar2) + 1],puVar18[lVar1 - lVar2]);
      uVar4 = puVar17[1];
      uVar5 = *puVar18;
      uVar6 = CONCAT11(puVar17[lVar15 + 1],puVar18[lVar15]);
      if (uVar22 < uVar13) {
        FUN_144b5b5a0(param_2,8);
      }
      if ((uVar13 <= uVar21) && (local_res10 != 0)) {
        if (*(int *)(param_2 + 0x110) < 1) {
          if ((uVar13 < uVar19) || (uVar22 < uVar21)) {
            local_res18 = local_res18 | 1;
          }
          else {
            local_res18 = local_res18 | 2;
          }
        }
        else {
          FUN_144b5b5a0(param_2,8);
        }
      }
      if (uVar6 != 0) {
        if (uVar6 == 0xffff) {
          if ((((1 < *(int *)(param_2 + 0x110)) || (local_res10 != uVar20 - 1)) ||
              (uVar13 != 0xffff)) || (uVar22 != 0xffff)) {
            FUN_144b5b5a0(param_2,8);
          }
        }
        else {
          puVar17 = puVar17 + (ulonglong)(uint)uVar6 + lVar15 + 1;
          if (*(int *)(param_2 + 0x110) < 1) {
            if (((local_res10 != uVar20 - 1) || (uVar13 != 0xffff)) || (uVar22 != 0xffff)) {
              if (puVar9 <= puVar17) {
                puVar12 = *(undefined1 **)(param_2 + 0x108);
                goto LAB_144e1bd54;
              }
              goto LAB_144e1bd5c;
            }
          }
          else {
            if (puVar9 <= puVar17) {
              puVar12 = (undefined1 *)(local_68 + param_1);
LAB_144e1bd54:
              if (puVar17 + ((uVar22 - uVar13) * 2 + 2) <= puVar12) goto LAB_144e1bd69;
            }
LAB_144e1bd5c:
            FUN_144b5b5a0(param_2,8);
          }
LAB_144e1bd69:
          if ((0 < *(int *)(param_2 + 0x110)) && (uVar13 < uVar22)) {
            puVar17 = puVar17 + -1;
            uVar16 = (ulonglong)(uVar22 - uVar13);
            do {
              puVar12 = puVar17 + 1;
              puVar17 = puVar17 + 2;
              if ((CONCAT11(*puVar12,*puVar17) != 0) &&
                 (*(uint *)(param_2 + 0x120) <=
                  (uint)(ushort)(CONCAT11(*puVar12,*puVar17) + CONCAT11(uVar4,uVar5)))) {
                FUN_144b5b5a0(param_2,0x10);
              }
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
        }
      }
      local_res10 = local_res10 + 1;
      puVar17 = puVar18;
      uVar14 = local_res18;
      uVar19 = uVar13;
      uVar21 = uVar22;
    } while (local_res10 < uVar20);
  }
  return uVar14;
}



// FUNCTION 144e1be40 FUN_144e1be40 body=554 status=ok
// SIG undefined FUN_144e1be40(void)

int FUN_144e1be40(longlong param_1,short param_2,undefined8 *param_3)

{
  short sVar1;
  short *psVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  short *psVar7;
  uint uVar8;
  code *pcVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  int local_res8 [2];
  
  uVar5 = *(undefined8 *)(param_1 + 0x98);
  uVar10 = 0xffffffff;
  bVar14 = false;
  local_res8[0] = 0;
  uVar8 = 0xffffffff;
  uVar11 = 0xffffffff;
  uVar12 = 0xffffffff;
  psVar2 = *(short **)(param_1 + 0x1e8);
  uVar6 = 0;
  psVar7 = psVar2;
  uVar13 = 0xffffffff;
  if (*(ushort *)(param_1 + 0x1d0) != 0) {
    do {
      uVar12 = uVar13;
      if ((psVar7[3] == param_2) && (psVar7[4] != 0)) {
        sVar1 = *psVar7;
        if (sVar1 == 0) {
LAB_144e1bf18:
          uVar12 = (uint)uVar6;
        }
        else if (sVar1 == 1) {
          if (psVar7[2] == 0) {
            uVar8 = (uint)uVar6;
          }
          else if (psVar7[1] == 0) {
            uVar10 = (uint)uVar6;
          }
        }
        else {
          if (sVar1 == 2) goto LAB_144e1bf18;
          if (((sVar1 == 3) && ((uVar11 == 0xffffffff || ((psVar7[2] & 0x3ffU) == 9)))) &&
             (((ushort)psVar7[1] < 2 || (psVar7[1] == 10)))) {
            uVar11 = (uint)uVar6;
            bVar14 = (psVar7[2] & 0x3ffU) == 9;
          }
        }
      }
      uVar6 = uVar6 + 1;
      psVar7 = psVar7 + 0xc;
      uVar13 = uVar12;
    } while (uVar6 < *(ushort *)(param_1 + 0x1d0));
  }
  pcVar9 = (code *)0x0;
  if (-1 < (int)uVar8) {
    uVar10 = uVar8;
  }
  if (((int)uVar11 < 0) || ((-1 < (int)uVar10 && (!bVar14)))) {
    if (-1 < (int)uVar10) {
      pcVar9 = FUN_144e22de0;
      psVar7 = psVar2 + (longlong)(int)uVar10 * 0xc;
      goto LAB_144e1bf9a;
    }
    if ((int)uVar12 < 0) goto LAB_144e1bf9a;
    psVar7 = psVar2 + (longlong)(int)uVar12 * 0xc;
  }
  else {
    psVar7 = psVar2 + (longlong)(int)uVar11 * 0xc;
    if ((1 < (ushort)psVar2[(longlong)(int)uVar11 * 0xc + 1]) &&
       (psVar2[(longlong)(int)uVar11 * 0xc + 1] != 10)) goto LAB_144e1bf9a;
  }
  pcVar9 = FUN_144e22d20;
LAB_144e1bf9a:
  if ((psVar7 == (short *)0x0) || (pcVar9 == (code *)0x0)) {
    local_res8[0] = 0;
    *param_3 = 0;
  }
  else {
    if (*(longlong *)(psVar7 + 8) == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x200);
      uVar4 = FUN_144b561b0(uVar5,1,0,psVar7[4],0,local_res8);
      *(undefined8 *)(psVar7 + 8) = uVar4;
      if (((local_res8[0] != 0) ||
          (local_res8[0] = FUN_144b597a0(uVar3,*(undefined4 *)(psVar7 + 6)), local_res8[0] != 0)) ||
         (local_res8[0] = FUN_144b59880(uVar3,*(undefined8 *)(psVar7 + 8),psVar7[4]),
         local_res8[0] != 0)) {
        FUN_144b56350(uVar5,*(undefined8 *)(psVar7 + 8));
        psVar7[8] = 0;
        psVar7[9] = 0;
        psVar7[10] = 0;
        psVar7[0xb] = 0;
        psVar7[4] = 0;
        *param_3 = 0;
        return local_res8[0];
      }
    }
    uVar5 = (*pcVar9)(psVar7,uVar5);
    *param_3 = uVar5;
  }
  return local_res8[0];
}



// FUNCTION 144e1c0b0 FUN_144e1c0b0 body=877 status=ok
// SIG undefined FUN_144e1c0b0(void)

int FUN_144e1c0b0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint local_res8 [2];
  undefined4 local_res18 [4];
  
  plVar1 = (longlong *)(param_1 + 0x460);
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x468) = 0;
  *(undefined4 *)(param_1 + 0x470) = 0;
  iVar5 = (**(code **)(param_1 + 0x2a0))(param_1,0x43424c43,param_2,local_res8);
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x46c) = 2;
  }
  else {
    iVar5 = (**(code **)(param_1 + 0x2a0))(param_1,0x45424c43,param_2,local_res8);
    if ((iVar5 == 0) ||
       (iVar5 = (**(code **)(param_1 + 0x2a0))(param_1,0x626c6f63,param_2,local_res8), iVar5 == 0))
    {
      *(undefined4 *)(param_1 + 0x46c) = 1;
    }
    else {
      iVar5 = (**(code **)(param_1 + 0x2a0))(param_1,0x73626978,param_2,local_res8);
      if (iVar5 != 0) goto LAB_144e1c371;
      *(undefined4 *)(param_1 + 0x46c) = 3;
    }
  }
  if (7 < local_res8[0]) {
    uVar6 = FUN_144b59870(param_2);
    uVar7 = *(uint *)(param_1 + 0x46c);
    if (uVar7 == 0) {
LAB_144e1c276:
      *(undefined8 *)(param_1 + 0x4c8) = 0;
      if (*(int *)(param_1 + 0x46c) == 3) {
        *(undefined4 *)(param_1 + 0x4c8) = uVar6;
        *(uint *)(param_1 + 0x4cc) = local_res8[0];
      }
      else if ((*(int *)(param_1 + 0x46c) != 0) &&
              (((iVar5 = (**(code **)(param_1 + 0x2a0))(param_1,0x43424454,param_2,local_res18),
                iVar5 == 0 ||
                (iVar5 = (**(code **)(param_1 + 0x2a0))(param_1,0x45424454,param_2,local_res18),
                iVar5 == 0)) ||
               (iVar5 = (**(code **)(param_1 + 0x2a0))(param_1,0x62646174,param_2,local_res18),
               iVar5 == 0)))) {
        uVar6 = FUN_144b59870(param_2);
        *(undefined4 *)(param_1 + 0x4c8) = uVar6;
        *(undefined4 *)(param_1 + 0x4cc) = local_res18[0];
      }
      if (*(int *)(param_1 + 0x4cc) == 0) {
        *(undefined4 *)(param_1 + 0x470) = 0;
      }
      return 0;
    }
    if (uVar7 < 3) {
      iVar5 = FUN_144b59b00(param_2,local_res8[0],plVar1);
      if (iVar5 != 0) goto LAB_144e1c371;
      puVar2 = (undefined1 *)*plVar1;
      *(uint *)(param_1 + 0x468) = local_res8[0];
      sVar3 = CONCAT11(*puVar2,puVar2[1]);
      uVar7 = CONCAT31(CONCAT21(CONCAT11(puVar2[4],puVar2[5]),puVar2[6]),puVar2[7]);
      if ((((sVar3 != 2) &&
           (uVar8 = (CONCAT21(sVar3,puVar2[2]) & 0xff) << 8 | (uint)(byte)puVar2[3], uVar8 != 0x200)
           ) && (sVar3 != 3)) && (uVar8 != 0x300)) {
        iVar5 = 2;
        goto LAB_144e1c371;
      }
      if (uVar7 < 0x10000) {
        if (local_res8[0] < uVar7 * 0x30 + 8) {
          uVar7 = (local_res8[0] - 8) / 0x30;
        }
        *(uint *)(param_1 + 0x470) = uVar7;
        goto LAB_144e1c276;
      }
    }
    else {
      if (uVar7 != 3) goto LAB_144e1c276;
      iVar5 = FUN_144b59990(param_2,8);
      if (iVar5 != 0) goto LAB_144e1c371;
      sVar3 = FUN_144b59ba0(param_2);
      sVar4 = FUN_144b59ba0(param_2);
      uVar7 = FUN_144b59be0(param_2);
      FUN_144b59ab0(param_2);
      if (sVar3 == 0) {
        iVar5 = 2;
        goto LAB_144e1c371;
      }
      if (((sVar4 - 1U & 0xfffd) == 0) && (uVar7 < 0x10000)) {
        if (local_res8[0] < uVar7 * 4 + 8) {
          uVar7 = local_res8[0] - 8 >> 2;
        }
        iVar5 = FUN_144b59870(param_2);
        iVar5 = FUN_144b597a0(param_2,iVar5 + -8);
        if (iVar5 == 0) {
          iVar5 = uVar7 * 4 + 8;
          *(int *)(param_1 + 0x468) = iVar5;
          iVar5 = FUN_144b59b00(param_2,iVar5,plVar1);
          if (iVar5 == 0) {
            *(uint *)(param_1 + 0x470) = uVar7;
            goto LAB_144e1c276;
          }
        }
        goto LAB_144e1c371;
      }
    }
  }
  iVar5 = 3;
LAB_144e1c371:
  if (*plVar1 != 0) {
    FUN_144b59b40(param_2,plVar1);
  }
  *(undefined8 *)(param_1 + 0x468) = 0;
  return iVar5;
}



// FUNCTION 144e1c420 FUN_144e1c420 body=49 status=ok
// SIG undefined FUN_144e1c420(void)

void FUN_144e1c420(longlong param_1)

{
  FUN_144b59b40(*(undefined8 *)(param_1 + 0xa0),param_1 + 0x460);
  *(undefined8 *)(param_1 + 0x468) = 0;
  *(undefined4 *)(param_1 + 0x470) = 0;
  return;
}



// FUNCTION 144e1c460 FUN_144e1c460 body=407 status=ok
// SIG undefined FUN_144e1c460(void)

undefined8 FUN_144e1c460(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *local_res8;
  
  iVar10 = *(int *)(param_1 + 0x28);
  lVar6 = *(longlong *)(param_1 + 0x18);
  local_res8 = (undefined1 *)((ulonglong)local_res8 & 0xffffffff00000000);
  uVar9 = iVar10 + 1;
  if (*(uint *)(param_1 + 0x2c) < uVar9) {
    *(undefined8 *)(param_1 + 0x38) = param_2;
    uVar8 = FUN_144b561b0(param_2,4,*(uint *)(param_1 + 0x2c),uVar9,*(undefined8 *)(param_1 + 0x30),
                          &local_res8);
    *(undefined8 *)(param_1 + 0x30) = uVar8;
    if ((int)local_res8 != 0) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = uVar9;
  }
  puVar11 = *(uint **)(param_1 + 0x30);
  if (iVar10 != 0) {
    local_res8 = (undefined1 *)(lVar6 + 7);
    puVar13 = (undefined1 *)(lVar6 + 6);
    puVar14 = (undefined1 *)(lVar6 + 9);
    puVar15 = (undefined1 *)(lVar6 + 8);
    do {
      uVar3 = puVar15[3];
      uVar4 = local_res8[3];
      puVar1 = puVar13 + 7;
      puVar13 = puVar13 + 0xb;
      uVar5 = puVar14[3];
      puVar2 = local_res8 + 7;
      local_res8 = local_res8 + 0xb;
      uVar9 = CONCAT31(CONCAT21(CONCAT11(*puVar1,*puVar2),puVar15[7]),puVar14[7]);
      uVar12 = CONCAT31(CONCAT21(CONCAT11(*puVar13,*local_res8),puVar15[0xb]),puVar14[0xb]);
      if (((uVar9 != 0) &&
          (iVar7 = FUN_144e246c0((ulonglong)uVar9 + *(longlong *)(param_1 + 0x18),param_3),
          iVar7 != 0)) ||
         ((uVar12 != 0 &&
          (iVar7 = FUN_144e24760((ulonglong)uVar12 + *(longlong *)(param_1 + 0x18),param_3),
          iVar7 != 0)))) {
        *puVar11 = (uint)CONCAT21(CONCAT11(uVar4,uVar3),uVar5);
        puVar11 = puVar11 + 1;
      }
      iVar10 = iVar10 + -1;
      puVar14 = puVar14 + 0xb;
      puVar15 = puVar15 + 0xb;
    } while (iVar10 != 0);
  }
  *puVar11 = 0;
  return *(undefined8 *)(param_1 + 0x30);
}



// FUNCTION 144e1c610 FUN_144e1c610 body=698 status=ok
// SIG undefined FUN_144e1c610(void)

undefined8 FUN_144e1c610(longlong param_1,uint param_2,ushort *param_3)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined8 uVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  
  if (*(longlong *)(param_1 + 0x478) == 0) {
    if (*(uint *)(param_1 + 0x470) <= param_2) {
      return 6;
    }
  }
  else {
    if (*(uint *)(param_1 + 0x28) <= param_2) {
      return 6;
    }
    param_2 = *(uint *)(*(longlong *)(param_1 + 0x478) + (ulonglong)param_2 * 4);
  }
  uVar3 = *(uint *)(param_1 + 0x46c);
  if (uVar3 == 0) {
    return 2;
  }
  if (2 < uVar3) {
    if (uVar3 != 3) {
      return 2;
    }
    lVar9 = (ulonglong)(param_2 * 4) + *(longlong *)(param_1 + 0x460);
    uVar4 = *(undefined8 *)(param_1 + 0xa0);
    iVar8 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar9 + 8),*(undefined1 *)(lVar9 + 9)),
                              *(undefined1 *)(lVar9 + 10)),*(undefined1 *)(lVar9 + 0xb));
    if (*(uint *)(param_1 + 0x4cc) < iVar8 + 4U) {
      uVar7 = 3;
    }
    else {
      uVar7 = FUN_144b597a0(uVar4,*(int *)(param_1 + 0x4c8) + iVar8);
      if (((int)uVar7 == 0) && (uVar7 = FUN_144b59990(uVar4,4), (int)uVar7 == 0)) {
        uVar5 = FUN_144b59ba0(uVar4);
        FUN_144b59ba0(uVar4);
        FUN_144b59ab0(uVar4);
        uVar2 = *(undefined2 *)(param_1 + 0x112);
        *param_3 = uVar5;
        param_3[1] = uVar5;
        lVar9 = (ulonglong)uVar5 << 6;
        uVar6 = FUN_144b55580((int)*(short *)(param_1 + 0x13c),lVar9,uVar2);
        *(undefined4 *)(param_3 + 6) = uVar6;
        uVar6 = FUN_144b55580((int)*(short *)(param_1 + 0x13e),lVar9,uVar2);
        *(undefined4 *)(param_3 + 8) = uVar6;
        uVar6 = FUN_144b55580(((int)*(short *)(param_1 + 0x140) - (int)*(short *)(param_1 + 0x13e))
                              + (int)*(short *)(param_1 + 0x13c),lVar9,uVar2);
        *(undefined4 *)(param_3 + 10) = uVar6;
        uVar6 = FUN_144b55580(*(undefined2 *)(param_1 + 0x142),lVar9,uVar2);
        *(undefined4 *)(param_3 + 0xc) = uVar6;
        uVar6 = FUN_144b55580(*param_3,0x400000,*(undefined2 *)(param_1 + 0x112));
        *(undefined4 *)(param_3 + 2) = uVar6;
        uVar6 = FUN_144b55580(param_3[1],0x400000,*(undefined2 *)(param_1 + 0x112));
        *(undefined4 *)(param_3 + 4) = uVar6;
        return 0;
      }
    }
    return uVar7;
  }
  lVar9 = *(longlong *)(param_1 + 0x460) + (ulonglong)(param_2 * 0x30);
  *param_3 = (ushort)*(byte *)(lVar9 + 0x34);
  param_3[1] = (ushort)*(byte *)(lVar9 + 0x35);
  *(int *)(param_3 + 6) = (int)*(char *)(lVar9 + 0x18) << 6;
  iVar8 = (int)*(char *)(lVar9 + 0x19);
  *(int *)(param_3 + 8) = iVar8 * 0x40;
  cVar1 = *(char *)(lVar9 + 0x21);
  if (iVar8 << 6 < 1) {
    if ((iVar8 << 6 != 0) || (*(int *)(param_3 + 6) != 0)) goto LAB_144e1c84a;
    if ((*(char *)(lVar9 + 0x20) == '\0') && (cVar1 == '\0')) {
      *(uint *)(param_3 + 6) = (uint)param_3[1] << 6;
      param_3[8] = 0;
      param_3[9] = 0;
      goto LAB_144e1c84a;
    }
    *(int *)(param_3 + 6) = (int)*(char *)(lVar9 + 0x20) << 6;
    iVar8 = (int)cVar1 << 6;
  }
  else {
    if (-1 < cVar1) goto LAB_144e1c84a;
    iVar8 = iVar8 * -0x40;
  }
  *(int *)(param_3 + 8) = iVar8;
LAB_144e1c84a:
  iVar8 = *(int *)(param_3 + 6) - *(int *)(param_3 + 8);
  *(int *)(param_3 + 10) = iVar8;
  if (iVar8 == 0) {
    *(uint *)(param_3 + 10) = (uint)param_3[1] * 0x40;
    *(uint *)(param_3 + 8) = *(int *)(param_3 + 6) + (uint)param_3[1] * -0x40;
  }
  *(uint *)(param_3 + 0xc) =
       ((int)*(char *)(lVar9 + 0x1f) + (int)*(char *)(lVar9 + 0x1e) + (uint)*(byte *)(lVar9 + 0x1a))
       * 0x40;
  uVar6 = FUN_144b55580(*param_3,0x400000,*(undefined2 *)(param_1 + 0x112));
  *(undefined4 *)(param_3 + 2) = uVar6;
  uVar6 = FUN_144b55580(param_3[1],0x400000,*(undefined2 *)(param_1 + 0x112));
  *(undefined4 *)(param_3 + 4) = uVar6;
  return 0;
}



// FUNCTION 144e1c8d0 FUN_144e1c8d0 body=365 status=ok
// SIG undefined FUN_144e1c8d0(void)

ulonglong FUN_144e1c8d0(longlong param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                       undefined8 param_5,longlong param_6,ulonglong param_7)

{
  uint *puVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 in_stack_ffffffffffffff88;
  uint uVar6;
  longlong lVar5;
  undefined8 in_stack_ffffffffffffff90;
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined8 local_48;
  undefined2 local_40;
  undefined1 local_3e;
  
  uVar6 = (uint)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  uVar3 = *(uint *)(param_1 + 0x46c);
  if (uVar3 == 0) {
LAB_144e1ca1f:
    uVar4 = 2;
  }
  else {
    if (uVar3 < 3) {
      uVar4 = FUN_144e251e0(local_58,param_1,param_2,param_7);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      param_7 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff90 >> 8),(char)(param_4 >> 0x16))
                & 0xffffffffffffff01;
      lVar5 = (ulonglong)uVar6 << 0x20;
      uVar4 = FUN_144e25440(local_58,param_3,0,0,lVar5,param_7);
    }
    else {
      if (uVar3 != 3) goto LAB_144e1ca1f;
      lVar5 = param_6;
      uVar4 = FUN_144e26290();
    }
    if (((((int)uVar4 == 0) && ((param_4 >> 0x14 & 1) == 0)) && ((param_4 >> 0x16 & 1) == 0)) &&
       (*(char *)(param_6 + 0x1a) == '\a')) {
      uVar2 = **(undefined8 **)(param_1 + 0x78);
      FUN_144b53f40(local_58);
      uVar3 = FUN_144b54160(uVar2,param_6,local_58,1,lVar5,param_7);
      uVar4 = (ulonglong)uVar3;
      if (uVar3 == 0) {
        *(undefined1 *)(param_6 + 0x1a) = local_3e;
        *(undefined4 *)(param_6 + 8) = local_50;
        *(undefined2 *)(param_6 + 0x18) = local_40;
        FUN_144b58730(*(undefined8 *)(param_1 + 0x78),local_48);
        puVar1 = (uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0xf0) + 8);
        *puVar1 = *puVar1 | 1;
      }
      else {
        FUN_144b54640(uVar2,local_58);
      }
    }
  }
  return uVar4;
}



// FUNCTION 144e1ca40 FUN_144e1ca40 body=460 status=ok
// SIG undefined FUN_144e1ca40(void)

int FUN_144e1ca40(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  short *psVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  int local_res8 [4];
  uint local_res18 [2];
  undefined1 *local_res20;
  
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  psVar5 = (short *)0x0;
  local_res20 = (undefined1 *)0x0;
  if (*(longlong *)(param_1 + 0x4d0) == 0) {
    return 3;
  }
  local_res8[0] = (**(code **)(param_1 + 0x2a0))(param_1,0x434f4c52,param_2,local_res18);
  if (local_res8[0] != 0) goto LAB_144e1cbe1;
  if (0xd < local_res18[0]) {
    local_res8[0] = FUN_144b59b00(param_2,local_res18[0],&local_res20);
    puVar4 = local_res20;
    if (local_res8[0] != 0) goto LAB_144e1cbe1;
    psVar5 = (short *)FUN_144b560d0(uVar3,0x28,local_res8);
    if (local_res8[0] != 0) goto LAB_144e1cbe1;
    uVar1 = *puVar4;
    uVar2 = puVar4[1];
    *psVar5 = CONCAT11(uVar1,uVar2);
    if (CONCAT11(uVar1,uVar2) == 0) {
      uVar6 = CONCAT11(puVar4[2],puVar4[3]);
      psVar5[1] = uVar6;
      uVar8 = CONCAT31(CONCAT21(CONCAT11(puVar4[4],puVar4[5]),puVar4[6]),puVar4[7]);
      if ((uVar8 < local_res18[0]) &&
         (((uint)uVar6 + (uint)uVar6 * 2) * 2 <= local_res18[0] - uVar8)) {
        uVar1 = puVar4[0xc];
        uVar7 = CONCAT31(CONCAT21(CONCAT11(puVar4[8],puVar4[9]),puVar4[10]),puVar4[0xb]);
        uVar2 = puVar4[0xd];
        psVar5[2] = CONCAT11(uVar1,uVar2);
        if ((uVar7 < local_res18[0]) && ((uint)CONCAT11(uVar1,uVar2) << 2 <= local_res18[0] - uVar7)
           ) {
          *(undefined1 **)(psVar5 + 4) = local_res20 + uVar8;
          *(undefined1 **)(psVar5 + 8) = local_res20 + uVar7;
          *(undefined1 **)(psVar5 + 0xc) = local_res20;
          *(uint *)(psVar5 + 0x10) = local_res18[0];
          *(short **)(param_1 + 0x4d8) = psVar5;
          return 0;
        }
      }
    }
  }
  local_res8[0] = 8;
LAB_144e1cbe1:
  FUN_144b59b40(param_2,&local_res20);
  FUN_144b56350(uVar3,psVar5);
  return local_res8[0];
}



// FUNCTION 144e1cc10 FUN_144e1cc10 body=67 status=ok
// SIG undefined FUN_144e1cc10(void)

void FUN_144e1cc10(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x4d8);
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  if (lVar1 != 0) {
    FUN_144b59b40(*(undefined8 *)(param_1 + 0xa0),lVar1 + 0x18);
    FUN_144b56350(uVar2,lVar1);
  }
  return;
}



// FUNCTION 144e1cca0 FUN_144e1cca0 body=375 status=ok
// SIG undefined FUN_144e1cca0(void)

ulonglong FUN_144e1cca0(longlong param_1,uint param_2,uint *param_3,uint *param_4,uint *param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong in_RAX;
  longlong lVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  
  lVar3 = *(longlong *)(param_1 + 0x4d8);
  if (lVar3 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  if (*(longlong *)(param_5 + 2) == 0) {
    iVar8 = 0;
    param_5[1] = 0;
    iVar7 = *(ushort *)(lVar3 + 2) - 1;
    if (-1 < iVar7) {
      do {
        uVar4 = (iVar7 - iVar8) / 2 + iVar8;
        in_RAX = (ulonglong)uVar4;
        puVar9 = (undefined1 *)((longlong)(int)(uVar4 * 6) + *(longlong *)(lVar3 + 8));
        if (CONCAT11(*puVar9,puVar9[1]) < param_2) {
          iVar8 = uVar4 + 1;
        }
        else {
          if (CONCAT11(*puVar9,puVar9[1]) <= param_2) {
            uVar1 = puVar9[3];
            uVar2 = puVar9[2];
            in_RAX = 0;
            uVar6 = CONCAT11(puVar9[4],puVar9[5]);
            if (uVar6 != 0) {
              *param_5 = (uint)uVar6;
              lVar5 = (ulonglong)CONCAT11(uVar2,uVar1) * 4;
              uVar4 = (int)lVar5 + (uint)uVar6 * 4;
              in_RAX = (ulonglong)uVar4;
              if (uVar4 <= *(uint *)(lVar3 + 0x20)) {
                *(longlong *)(param_5 + 2) = lVar5 + *(longlong *)(lVar3 + 0x10);
                goto LAB_144e1cdae;
              }
            }
            break;
          }
          iVar7 = uVar4 - 1;
        }
      } while (iVar8 <= iVar7);
    }
  }
  else {
LAB_144e1cdae:
    in_RAX = (ulonglong)*param_5;
    if (param_5[1] < *param_5) {
      *(longlong *)(param_5 + 2) = *(longlong *)(param_5 + 2) + 2;
      *param_3 = (uint)CONCAT11(*(undefined1 *)(*(longlong *)(param_5 + 2) + -2),
                                *(undefined1 *)(*(longlong *)(param_5 + 2) + -1));
      *(longlong *)(param_5 + 2) = *(longlong *)(param_5 + 2) + 2;
      uVar4 = (uint)CONCAT11(*(undefined1 *)(*(longlong *)(param_5 + 2) + -2),
                             *(undefined1 *)(*(longlong *)(param_5 + 2) + -1));
      *param_4 = uVar4;
      in_RAX = (ulonglong)*(uint *)(param_1 + 0x10);
      if ((*param_3 < *(uint *)(param_1 + 0x10)) &&
         ((uVar4 == 0xffff ||
          (in_RAX = (ulonglong)*(ushort *)(param_1 + 0x388), uVar4 < *(ushort *)(param_1 + 0x388))))
         ) {
        param_5[1] = param_5[1] + 1;
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 144e1ce20 FUN_144e1ce20 body=518 status=ok
// SIG undefined FUN_144e1ce20(void)

undefined8 FUN_144e1ce20(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  uint uVar16;
  
  if (*(ulonglong *)(param_2 + 0x108) < param_1 + 0x10U) {
    FUN_144b5b5a0(param_2,8);
  }
  puVar14 = (undefined1 *)(param_1 + 0xc);
  puVar13 = (undefined1 *)(param_1 + 0xd);
  puVar12 = (undefined1 *)(param_1 + 0xe);
  puVar15 = (undefined1 *)(param_1 + 0xf);
  uVar8 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 4),*(undefined1 *)(param_1 + 5)),
                            *(undefined1 *)(param_1 + 6)),*(undefined1 *)(param_1 + 7));
  uVar16 = CONCAT31(CONCAT21(CONCAT11(*puVar14,*puVar13),*puVar12),*puVar15);
  if ((((uint)((int)*(undefined8 *)(param_2 + 0x108) - (int)param_1) < uVar8) || (uVar8 < 0x10)) ||
     ((uVar8 - 0x10) / 0xc < uVar16)) {
    FUN_144b5b5a0(param_2,8);
  }
  uVar8 = 0;
  uVar11 = 0;
  if (uVar16 != 0) {
    do {
      puVar1 = puVar14 + 4;
      puVar2 = puVar14 + 8;
      puVar14 = puVar14 + 0xc;
      uVar4 = *puVar14;
      uVar10 = CONCAT31(CONCAT21(CONCAT11(*puVar1,puVar13[4]),puVar12[4]),puVar15[4]);
      puVar1 = puVar13 + 8;
      puVar13 = puVar13 + 0xc;
      puVar3 = puVar12 + 8;
      puVar12 = puVar12 + 0xc;
      uVar9 = CONCAT31(CONCAT21(CONCAT11(*puVar2,*puVar1),*puVar3),puVar15[8]);
      uVar5 = *puVar13;
      uVar6 = *puVar12;
      uVar7 = puVar15[0xc];
      if (uVar9 < uVar10) {
        FUN_144b5b5a0(param_2,8);
      }
      if ((uVar11 != 0) && (uVar10 <= uVar8)) {
        FUN_144b5b5a0(param_2,8);
      }
      if (0 < *(int *)(param_2 + 0x110)) {
        if ((*(uint *)(param_2 + 0x120) < uVar9 - uVar10) ||
           (*(uint *)(param_2 + 0x120) - (uVar9 - uVar10) <=
            CONCAT31(CONCAT21(CONCAT11(uVar4,uVar5),uVar6),uVar7))) {
          FUN_144b5b5a0(param_2,0x10);
        }
      }
      uVar11 = uVar11 + 1;
      puVar15 = puVar15 + 0xc;
      uVar8 = uVar9;
    } while (uVar11 < uVar16);
  }
  return 0;
}



// FUNCTION 144e1d030 FUN_144e1d030 body=1189 status=ok
// SIG undefined FUN_144e1d030(void)

ulonglong FUN_144e1d030(longlong param_1,uint param_2,longlong param_3,longlong param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  byte bVar10;
  void *_Src;
  int iVar11;
  void *_Dst;
  longlong lVar12;
  byte *pbVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  byte bVar17;
  byte bVar18;
  longlong lVar19;
  uint uVar20;
  uint local_54;
  uint local_4c;
  
  if (*(longlong *)(param_3 + 0x78) == 0) {
    *(undefined4 *)(param_3 + 0x90) = *(undefined4 *)(param_4 + 0x90);
    *(undefined4 *)(param_3 + 0x94) = *(undefined4 *)(param_4 + 0x94);
    *(undefined4 *)(param_3 + 0x6c) = *(undefined4 *)(param_4 + 0x6c);
    iVar8 = *(int *)(param_4 + 0x68);
    iVar11 = *(int *)(param_3 + 0x6c) * 4;
    *(int *)(param_3 + 0x70) = iVar11;
    *(undefined2 *)(param_3 + 0x80) = 0x100;
    *(int *)(param_3 + 0x68) = iVar8;
    *(undefined1 *)(param_3 + 0x82) = 7;
    uVar6 = FUN_144b58670(param_3);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    memset(*(void **)(param_3 + 0x78),0,(ulonglong)(uint)(iVar11 * iVar8));
  }
  else {
    iVar8 = *(int *)(param_4 + 0x90);
    iVar11 = *(int *)(param_3 + 0x90);
    iVar2 = *(int *)(param_4 + 0x94);
    iVar4 = iVar8;
    if (iVar11 < iVar8) {
      iVar4 = iVar11;
    }
    iVar3 = *(int *)(param_3 + 0x94);
    iVar14 = *(int *)(param_3 + 0x6c) + iVar11;
    iVar8 = *(int *)(param_4 + 0x6c) + iVar8;
    if (iVar8 < iVar14) {
      iVar8 = iVar14;
    }
    iVar7 = iVar3 - *(int *)(param_3 + 0x68);
    iVar5 = iVar2 - *(int *)(param_4 + 0x68);
    if (iVar7 < iVar5) {
      iVar5 = iVar7;
    }
    if (iVar2 < iVar3) {
      iVar2 = iVar3;
    }
    if ((((iVar4 != iVar11) || (iVar8 != iVar14)) || (iVar5 != iVar7)) || (iVar2 != iVar3)) {
      iVar8 = iVar8 - iVar4;
      lVar19 = FUN_144b560d0(*(undefined8 *)(param_1 + 0x98),iVar8 * 4 * (iVar2 - iVar5));
      if (local_4c != 0) {
        return (ulonglong)local_4c;
      }
      _Src = *(void **)(param_3 + 0x78);
      uVar15 = 0;
      _Dst = (void *)((longlong)((*(int *)(param_3 + 0x90) - iVar4) * 4) +
                     lVar19 + (iVar2 - *(int *)(param_3 + 0x94)) * iVar8 * 4);
      if (*(int *)(param_3 + 0x68) != 0) {
        do {
          memcpy(_Dst,_Src,(ulonglong)(uint)(*(int *)(param_3 + 0x6c) << 2));
          _Dst = (void *)((longlong)_Dst + (ulonglong)(uint)(iVar8 * 4));
          _Src = (void *)((longlong)_Src + (longlong)*(int *)(param_3 + 0x70));
          uVar15 = uVar15 + 1;
        } while (uVar15 < *(uint *)(param_3 + 0x68));
      }
      FUN_144b58730(param_3);
      *(int *)(param_3 + 0x90) = iVar4;
      *(int *)(param_3 + 0x68) = iVar2 - iVar5;
      *(int *)(param_3 + 0x70) = iVar8 * 4;
      *(int *)(param_3 + 0x94) = iVar2;
      *(int *)(param_3 + 0x6c) = iVar8;
      puVar1 = (uint *)(*(longlong *)(param_3 + 0xf0) + 8);
      *puVar1 = *puVar1 | 1;
      *(undefined4 *)(param_3 + 0x60) = 0x62697473;
    }
  }
  if (param_2 == 0xffff) {
    if (*(char *)(param_1 + 0x3a8) == '\0') {
      if ((*(longlong *)(param_1 + 0x380) == 0) ||
         ((*(byte *)(*(longlong *)(param_1 + 0x380) + (ulonglong)*(ushort *)(param_1 + 0x398) * 2) &
          2) == 0)) {
        bVar18 = 0;
        bVar17 = 0;
        bVar9 = 0;
        bVar10 = 0xff;
      }
      else {
        bVar18 = 0xff;
        bVar17 = 0xff;
        bVar9 = 0xff;
        bVar10 = 0xff;
      }
    }
    else {
      bVar18 = *(byte *)(param_1 + 0x3a9);
      bVar17 = *(byte *)(param_1 + 0x3aa);
      bVar9 = *(byte *)(param_1 + 0x3ab);
      bVar10 = *(byte *)(param_1 + 0x3ac);
    }
  }
  else {
    lVar19 = *(longlong *)(param_1 + 0x3a0);
    uVar6 = (ulonglong)param_2;
    bVar18 = *(byte *)(lVar19 + uVar6 * 4);
    bVar17 = *(byte *)(lVar19 + 1 + uVar6 * 4);
    bVar9 = *(byte *)(lVar19 + 2 + uVar6 * 4);
    bVar10 = *(byte *)(lVar19 + 3 + uVar6 * 4);
  }
  lVar19 = *(longlong *)(param_4 + 0x78);
  local_54 = 0;
  lVar12 = (longlong)
           ((*(int *)(param_3 + 0x94) - *(int *)(param_4 + 0x94)) * *(int *)(param_3 + 0x70)) +
           (longlong)((*(int *)(param_4 + 0x90) - *(int *)(param_3 + 0x90)) * 4) +
           *(longlong *)(param_3 + 0x78);
  if (*(int *)(param_4 + 0x68) != 0) {
    uVar15 = *(uint *)(param_4 + 0x6c);
    do {
      uVar6 = 0;
      if (uVar15 != 0) {
        uVar20 = 2;
        do {
          uVar15 = ((uint)*(byte *)(uVar6 + lVar19) * (uint)bVar10) / 0xff;
          iVar11 = 0xff - uVar15;
          iVar8 = (uint)*(byte *)((ulonglong)(uVar20 - 2) + lVar12) * iVar11;
          *(char *)((ulonglong)(uVar20 - 2) + lVar12) =
               (((char)(iVar8 / 0xff) + (char)(iVar8 >> 0x1f)) -
               (char)((longlong)iVar8 * 0x80808081 >> 0x3f)) + (char)((bVar18 * uVar15) / 0xff);
          iVar8 = (uint)*(byte *)((ulonglong)(uVar20 - 1) + lVar12) * iVar11;
          *(char *)((ulonglong)(uVar20 - 1) + lVar12) =
               (((char)(iVar8 / 0xff) + (char)(iVar8 >> 0x1f)) -
               (char)((longlong)iVar8 * 0x80808081 >> 0x3f)) + (char)((bVar17 * uVar15) / 0xff);
          iVar8 = (uint)*(byte *)((ulonglong)uVar20 + lVar12) * iVar11;
          *(byte *)((ulonglong)uVar20 + lVar12) =
               (((char)(iVar8 / 0xff) + (char)(iVar8 >> 0x1f)) -
               (char)((longlong)iVar8 * 0x80808081 >> 0x3f)) + (char)((bVar9 * uVar15) / 0xff);
          pbVar13 = (byte *)((ulonglong)(uVar20 + 1) + lVar12);
          iVar11 = (uint)*pbVar13 * iVar11;
          uVar16 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar16;
          uVar20 = uVar20 + 4;
          *pbVar13 = (((char)(iVar11 / 0xff) + (char)(iVar11 >> 0x1f)) -
                     (char)((longlong)iVar11 * 0x80808081 >> 0x3f)) + (char)uVar15;
          uVar15 = *(uint *)(param_4 + 0x6c);
        } while (uVar16 < uVar15);
      }
      local_54 = local_54 + 1;
      lVar19 = lVar19 + *(int *)(param_4 + 0x70);
      lVar12 = lVar12 + *(int *)(param_3 + 0x70);
    } while (local_54 < *(uint *)(param_4 + 0x68));
  }
  return 0;
}



// FUNCTION 144e1d4e0 FUN_144e1d4e0 body=1214 status=ok
// SIG undefined FUN_144e1d4e0(void)

ulonglong FUN_144e1d4e0(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  ushort *puVar5;
  undefined2 *puVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined1 *puVar9;
  ushort uVar10;
  undefined2 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  uint local_res8 [2];
  uint local_res18 [2];
  undefined1 *local_res20;
  
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  puVar5 = (ushort *)0x0;
  local_res20 = (undefined1 *)0x0;
  local_res8[0] = (**(code **)(param_1 + 0x2a0))(param_1,0x4350414c,param_2,local_res18);
  if (local_res8[0] != 0) goto LAB_144e1d966;
  if (0xb < local_res18[0]) {
    local_res8[0] = FUN_144b59b00(param_2,local_res18[0],&local_res20);
    puVar9 = local_res20;
    puVar5 = (ushort *)0x0;
    if ((local_res8[0] != 0) ||
       (puVar5 = (ushort *)FUN_144b560d0(uVar4,0x28,local_res8), local_res8[0] != 0))
    goto LAB_144e1d966;
    uVar2 = *puVar9;
    uVar3 = puVar9[1];
    *puVar5 = CONCAT11(uVar2,uVar3);
    if (CONCAT11(uVar2,uVar3) < 2) {
      *(ushort *)(param_1 + 0x388) = CONCAT11(puVar9[2],puVar9[3]);
      *(ushort *)(param_1 + 0x370) = CONCAT11(puVar9[4],puVar9[5]);
      uVar10 = CONCAT11(puVar9[6],puVar9[7]);
      puVar5[1] = uVar10;
      uVar8 = CONCAT31(CONCAT21(CONCAT11(puVar9[8],puVar9[9]),puVar9[10]),puVar9[0xb]);
      if (((((uint)*(ushort *)(param_1 + 0x370) * 2 + 0xc <= local_res18[0]) &&
           (uVar8 < local_res18[0])) && ((uint)uVar10 << 2 <= local_res18[0] - uVar8)) &&
         (*(ushort *)(param_1 + 0x388) <= uVar10)) {
        *(undefined1 **)(puVar5 + 8) = puVar9 + 0xc;
        *(undefined1 **)(puVar5 + 4) = local_res20 + uVar8;
        if (*puVar5 == 1) {
          uVar10 = *(ushort *)(param_1 + 0x370);
          uVar14 = (ulonglong)uVar10;
          if (local_res18[0] < (uint)uVar10 + (uint)uVar10 + 0x18) goto LAB_144e1d95f;
          puVar1 = puVar9 + 0xc + uVar14 * 2;
          uVar15 = CONCAT31(CONCAT21(CONCAT11(*puVar1,puVar9[uVar14 * 2 + 0xd]),puVar1[2]),puVar1[3]
                           );
          uVar8 = CONCAT31(CONCAT21(CONCAT11(puVar1[4],puVar1[5]),puVar1[6]),puVar1[7]);
          uVar16 = CONCAT31(CONCAT21(CONCAT11(puVar1[8],puVar1[9]),puVar1[10]),puVar1[0xb]);
          if (uVar15 != 0) {
            if ((local_res18[0] <= uVar15) ||
               (local_res18[0] - uVar15 < (uint)uVar10 + (uint)uVar10)) goto LAB_144e1d95f;
            puVar6 = (undefined2 *)FUN_144b561b0(uVar4,2,0,uVar14,0,local_res8);
            if (local_res8[0] != 0) goto LAB_144e1d966;
            uVar12 = 0;
            uVar14 = (ulonglong)*(ushort *)(param_1 + 0x370) * 2 + 1 >> 1;
            if (puVar6 + *(ushort *)(param_1 + 0x370) < puVar6) {
              uVar14 = uVar12;
            }
            if (uVar14 != 0) {
              puVar9 = local_res20 + ((ulonglong)uVar15 - 1);
              puVar11 = puVar6;
              do {
                puVar1 = puVar9 + 1;
                puVar9 = puVar9 + 2;
                uVar12 = uVar12 + 1;
                *puVar11 = CONCAT11(*puVar1,*puVar9);
                puVar11 = puVar11 + 1;
              } while (uVar12 < uVar14);
            }
            *(undefined2 **)(param_1 + 0x380) = puVar6;
          }
          uVar14 = 0;
          if (uVar8 != 0) {
            if ((local_res18[0] <= uVar8) ||
               (uVar10 = *(ushort *)(param_1 + 0x370),
               local_res18[0] - uVar8 < (uint)uVar10 + (uint)uVar10)) goto LAB_144e1d95f;
            puVar6 = (undefined2 *)FUN_144b561b0(uVar4,2,0,uVar10,0,local_res8);
            if (local_res8[0] != 0) goto LAB_144e1d966;
            uVar12 = (ulonglong)*(ushort *)(param_1 + 0x370) * 2 + 1 >> 1;
            if (puVar6 + *(ushort *)(param_1 + 0x370) < puVar6) {
              uVar12 = uVar14;
            }
            if (uVar12 != 0) {
              puVar9 = local_res20 + ((ulonglong)uVar8 - 1);
              puVar11 = puVar6;
              uVar13 = uVar14;
              do {
                puVar1 = puVar9 + 1;
                puVar9 = puVar9 + 2;
                uVar13 = uVar13 + 1;
                *puVar11 = CONCAT11(*puVar1,*puVar9);
                puVar11 = puVar11 + 1;
              } while (uVar13 < uVar12);
            }
            *(undefined2 **)(param_1 + 0x378) = puVar6;
          }
          if (uVar16 != 0) {
            if ((local_res18[0] <= uVar16) ||
               (uVar10 = *(ushort *)(param_1 + 0x388),
               local_res18[0] - uVar16 < (uint)uVar10 + (uint)uVar10)) goto LAB_144e1d95f;
            puVar6 = (undefined2 *)FUN_144b561b0(uVar4,2,0,uVar10,0,local_res8);
            if (local_res8[0] != 0) goto LAB_144e1d966;
            uVar12 = (ulonglong)*(ushort *)(param_1 + 0x388) * 2 + 1 >> 1;
            if (puVar6 + *(ushort *)(param_1 + 0x388) < puVar6) {
              uVar12 = uVar14;
            }
            if (uVar12 != 0) {
              puVar9 = local_res20 + ((ulonglong)uVar16 - 1);
              puVar11 = puVar6;
              do {
                puVar1 = puVar9 + 1;
                puVar9 = puVar9 + 2;
                uVar14 = uVar14 + 1;
                *puVar11 = CONCAT11(*puVar1,*puVar9);
                puVar11 = puVar11 + 1;
              } while (uVar14 < uVar12);
            }
            *(undefined2 **)(param_1 + 0x390) = puVar6;
          }
        }
        *(undefined1 **)(puVar5 + 0xc) = local_res20;
        *(uint *)(puVar5 + 0x10) = local_res18[0];
        *(ushort **)(param_1 + 0x4d0) = puVar5;
        uVar7 = FUN_144b561b0(uVar4,4,0,*(undefined2 *)(param_1 + 0x388),0,local_res8);
        *(undefined8 *)(param_1 + 0x3a0) = uVar7;
        if (local_res8[0] != 0) goto LAB_144e1d966;
        uVar14 = FUN_144e1d9f0(param_1,0);
        if ((int)uVar14 == 0) {
          return uVar14;
        }
      }
    }
  }
LAB_144e1d95f:
  local_res8[0] = 8;
LAB_144e1d966:
  FUN_144b59b40(param_2,&local_res20);
  FUN_144b56350(uVar4,puVar5);
  *(undefined8 *)(param_1 + 0x4d0) = 0;
  return (ulonglong)local_res8[0];
}



// FUNCTION 144e1d9a0 FUN_144e1d9a0 body=67 status=ok
// SIG undefined FUN_144e1d9a0(void)

void FUN_144e1d9a0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x4d0);
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  if (lVar1 != 0) {
    FUN_144b59b40(*(undefined8 *)(param_1 + 0xa0),lVar1 + 0x18);
    FUN_144b56350(uVar2,lVar1);
  }
  return;
}



// FUNCTION 144e1d9f0 FUN_144e1d9f0 body=160 status=ok
// SIG undefined FUN_144e1d9f0(void)

undefined8 FUN_144e1d9f0(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ushort uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x4d0);
  if ((lVar1 != 0) && (param_2 < *(ushort *)(param_1 + 0x370))) {
    puVar3 = (undefined1 *)((ulonglong)(param_2 * 2) + *(longlong *)(lVar1 + 0x10));
    uVar5 = CONCAT11(*puVar3,puVar3[1]);
    if ((uint)uVar5 + (uint)*(ushort *)(param_1 + 0x388) <= (uint)*(ushort *)(lVar1 + 2)) {
      puVar4 = *(undefined1 **)(param_1 + 0x3a0);
      puVar3 = puVar4 + (ulonglong)*(ushort *)(param_1 + 0x388) * 4;
      puVar2 = (undefined1 *)(*(longlong *)(lVar1 + 8) + (ulonglong)uVar5 * 4);
      for (; puVar4 < puVar3; puVar4 = puVar4 + 4) {
        *puVar4 = *puVar2;
        puVar4[1] = puVar2[1];
        puVar4[2] = puVar2[2];
        puVar4[3] = puVar2[3];
        puVar2 = puVar2 + 4;
      }
      return 0;
    }
    return 8;
  }
  return 6;
}



// FUNCTION 144e1da90 FUN_144e1da90 body=319 status=ok
// SIG undefined FUN_144e1da90(void)

undefined4 FUN_144e1da90(longlong param_1,uint param_2,undefined8 *param_3)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)param_2;
  if (param_1 == 0) {
    return 0x23;
  }
  if (*(ushort *)(param_1 + 0x174) <= param_2) {
    return 0x10;
  }
  lVar2 = *(longlong *)(param_1 + 0x2d8);
  if (lVar2 == 0) {
    return 7;
  }
  uVar4 = (**(code **)(lVar2 + 0x20))(0);
  *param_3 = uVar4;
  iVar3 = *(int *)(param_1 + 0x270);
  if (iVar3 == 0x10000) {
    if (0x101 < param_2) {
      return 0;
    }
  }
  else if (iVar3 == 0x20000) {
    if ((*(char *)(param_1 + 0x350) == '\0') && (iVar3 = FUN_144e25130(param_1), iVar3 != 0)) {
      return 0;
    }
    if (*(ushort *)(param_1 + 0x358) <= param_2) {
      return 0;
    }
    uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x360) + uVar5 * 2);
    if (0x101 < uVar1) {
      *param_3 = *(undefined8 *)
                  (*(longlong *)(param_1 + 0x368) + (longlong)(int)(uVar1 - 0x102) * 8);
      return 0;
    }
    uVar5 = (ulonglong)uVar1;
  }
  else {
    if (iVar3 != 0x25000) {
      return 0;
    }
    if ((*(char *)(param_1 + 0x350) == '\0') && (iVar3 = FUN_144e25130(param_1), iVar3 != 0)) {
      return 0;
    }
    if (*(ushort *)(param_1 + 0x358) <= param_2) {
      return 0;
    }
    uVar5 = (ulonglong)((int)*(char *)(*(longlong *)(param_1 + 0x360) + uVar5) + param_2);
  }
  uVar4 = (**(code **)(lVar2 + 0x20))(uVar5);
  *param_3 = uVar4;
  return 0;
}



// FUNCTION 144e1dbd0 FUN_144e1dbd0 body=333 status=ok
// SIG undefined FUN_144e1dbd0(void)

void FUN_144e1dbd0(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ushort uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  if (*(char *)(param_1 + 0x350) == '\0') {
    *(undefined1 *)(param_1 + 0x350) = 0;
    return;
  }
  if (*(int *)(param_1 + 0x270) != 0x20000) {
    if (*(int *)(param_1 + 0x270) != 0x25000) {
      *(undefined1 *)(param_1 + 0x350) = 0;
      return;
    }
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x360));
    *(undefined8 *)(param_1 + 0x360) = 0;
    *(undefined2 *)(param_1 + 0x358) = 0;
    *(undefined1 *)(param_1 + 0x350) = 0;
    return;
  }
  FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x360));
  uVar3 = 0;
  *(undefined8 *)(param_1 + 0x360) = 0;
  *(undefined2 *)(param_1 + 0x358) = 0;
  if (*(short *)(param_1 + 0x35a) != 0) {
    do {
      uVar2 = (ulonglong)uVar3;
      FUN_144b56350(uVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x368) + uVar2 * 8));
      uVar3 = uVar3 + 1;
      *(undefined8 *)(uVar2 * 8 + *(longlong *)(param_1 + 0x368)) = 0;
    } while (uVar3 < *(ushort *)(param_1 + 0x35a));
  }
  FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x368));
  *(undefined8 *)(param_1 + 0x368) = 0;
  *(undefined2 *)(param_1 + 0x35a) = 0;
  *(undefined1 *)(param_1 + 0x350) = 0;
  return;
}



// FUNCTION 144e1dd20 FUN_144e1dd20 body=549 status=ok
// SIG undefined FUN_144e1dd20(void)

int FUN_144e1dd20(longlong param_1,char *param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  undefined1 *puVar8;
  byte bVar9;
  uint uVar10;
  longlong lVar11;
  byte *pbVar12;
  uint uVar13;
  undefined1 *puVar14;
  ulonglong _MaxCount;
  ulonglong uVar15;
  
  lVar3 = *(longlong *)(param_1 + 0x80);
  *param_3 = 0;
  if ((*(char *)(param_1 + 0x4b8) == '\0') &&
     (iVar5 = FUN_144e23720(param_1,*(undefined8 *)(param_1 + 0xa0)), iVar5 != 0)) {
    return iVar5;
  }
  iVar5 = *(int *)(param_1 + 0x4b4);
  lVar4 = *(longlong *)(param_1 + 0x498);
  lVar11 = (ulonglong)(uint)(iVar5 * 4) + lVar4 + 8;
  if (lVar3 == 0) {
    return 6;
  }
  if (param_2 != (char *)0x0) {
    uVar15 = 0xffffffffffffffff;
    do {
      uVar15 = uVar15 + 1;
    } while (param_2[uVar15] != '\0');
    if (uVar15 == 0) {
      return 6;
    }
    if (iVar5 == 0) {
      return 6;
    }
    puVar8 = (undefined1 *)(lVar4 + 7);
    puVar14 = (undefined1 *)(lVar4 + 6);
    while( true ) {
      puVar1 = puVar8 + 2;
      puVar8 = puVar8 + 4;
      puVar2 = puVar14 + 2;
      puVar14 = puVar14 + 4;
      uVar13 = (uint)CONCAT11(*puVar14,*puVar8);
      if (CONCAT11(*puVar2,*puVar1) == *(short *)(lVar3 + 0x1a)) break;
      lVar11 = lVar11 + (ulonglong)(uVar13 * 10);
      iVar5 = iVar5 + -1;
      if (iVar5 == 0) {
        return 6;
      }
    }
    if (CONCAT11(*puVar14,*puVar8) == 0) {
      return 6;
    }
    pbVar12 = (byte *)(lVar11 + 5);
    do {
      bVar9 = *pbVar12;
      if ((bVar9 & 0x10) != 0) {
        uVar7 = CONCAT31(CONCAT21(CONCAT11(pbVar12[-5],pbVar12[-4]),pbVar12[-3]),pbVar12[-2]);
        uVar10 = CONCAT31(CONCAT21(CONCAT11(pbVar12[1],pbVar12[2]),pbVar12[3]),pbVar12[4]);
        if (((uVar7 < *(uint *)(param_1 + 0x4b0)) &&
            (_MaxCount = (ulonglong)(*(uint *)(param_1 + 0x4b0) - uVar7), uVar15 < _MaxCount)) &&
           (iVar5 = strncmp(param_2,(char *)((ulonglong)uVar7 + *(longlong *)(param_1 + 0x4a8)),
                            _MaxCount), iVar5 == 0)) {
          bVar9 = bVar9 & 0xf;
          if (bVar9 < 2) {
            if ((uVar10 < *(uint *)(param_1 + 0x4b0)) &&
               (pvVar6 = memchr((void *)((ulonglong)uVar10 + *(longlong *)(param_1 + 0x4a8)),0,
                                (ulonglong)*(uint *)(param_1 + 0x4b0)), pvVar6 != (void *)0x0)) {
              *param_3 = 1;
              *(ulonglong *)(param_3 + 2) = (ulonglong)uVar10 + *(longlong *)(param_1 + 0x4a8);
              return 0;
            }
          }
          else {
            if (bVar9 == 2) {
              *param_3 = 2;
              param_3[2] = uVar10;
              return 0;
            }
            if (bVar9 == 3) {
              *param_3 = 3;
              param_3[2] = uVar10;
              return 0;
            }
          }
        }
      }
      pbVar12 = pbVar12 + 10;
      uVar13 = uVar13 - 1;
      if (uVar13 == 0) {
        return 6;
      }
    } while( true );
  }
  return 6;
}



// FUNCTION 144e1df50 FUN_144e1df50 body=865 status=ok
// SIG undefined FUN_144e1df50(void)

longlong FUN_144e1df50(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  int *piVar20;
  uint uVar21;
  undefined1 *puVar22;
  uint *puVar23;
  undefined1 *puVar24;
  uint uVar25;
  
  lVar10 = *(longlong *)(param_1 + 0x18);
  puVar9 = (undefined1 *)FUN_144e24800(lVar10 + 6,param_3);
  if (puVar9 != (undefined1 *)0x0) {
    uVar13 = CONCAT31(CONCAT21(CONCAT11(*puVar9,puVar9[1]),puVar9[2]),puVar9[3]);
    uVar11 = CONCAT31(CONCAT21(CONCAT11(puVar9[4],puVar9[5]),puVar9[6]),puVar9[7]);
    if (uVar13 != 0) {
      if (uVar11 == 0) {
        lVar10 = FUN_144e248e0(param_1,(ulonglong)uVar13 + lVar10,param_2);
        return lVar10;
      }
      puVar24 = (undefined1 *)((ulonglong)uVar11 + lVar10);
      puVar22 = (undefined1 *)((ulonglong)uVar13 + lVar10);
      uVar13 = CONCAT31(CONCAT21(CONCAT11(*puVar24,puVar24[1]),puVar24[2]),puVar24[3]);
      puVar9 = puVar22;
      puVar15 = puVar24;
      iVar7 = FUN_144e24890(puVar22);
      uVar11 = CONCAT31(CONCAT21(CONCAT11(*puVar9,puVar9[1]),puVar9[2]),puVar9[3]);
      if (uVar13 == 0) {
        lVar10 = FUN_144e248e0(param_1,puVar9);
      }
      else if (iVar7 == 0) {
        lVar10 = FUN_144e24a20(param_1,puVar15);
      }
      else {
        iVar7 = FUN_144e24650(param_1,iVar7 + 1 + uVar13);
        if (iVar7 == 0) {
          iVar7 = 0;
          lVar10 = *(longlong *)(param_1 + 0x30);
          uVar18 = (uint)(byte)puVar22[7];
          puVar15 = puVar22 + 8;
          uVar14 = (uint)CONCAT21(CONCAT11(puVar22[4],puVar22[5]),puVar22[6]);
          uVar25 = 1;
          uVar17 = 1;
          puVar9 = puVar24 + 9;
          uVar21 = (uint)CONCAT21(CONCAT11(puVar24[4],puVar24[5]),puVar24[6]);
          lVar19 = 0;
          while( true ) {
            while (uVar21 <= uVar14 + uVar18) {
              if (uVar21 < uVar14) {
                iVar7 = iVar7 + 1;
                *(uint *)(lVar10 + lVar19 * 4) = uVar21;
                lVar19 = lVar19 + 1;
              }
              uVar17 = uVar17 + 1;
              if (uVar13 < uVar17) goto LAB_144e1e206;
              puVar22 = puVar9 + 1;
              uVar3 = *puVar9;
              puVar24 = puVar9 + 2;
              puVar9 = puVar9 + 5;
              uVar21 = (uint)CONCAT21(CONCAT11(uVar3,*puVar22),*puVar24);
            }
            uVar12 = 0;
            iVar7 = iVar7 + 1 + uVar18;
            do {
              iVar8 = uVar12 + uVar14;
              uVar12 = uVar12 + 1;
              *(int *)(lVar10 + lVar19 * 4) = iVar8;
              lVar19 = lVar19 + 1;
            } while (uVar12 <= uVar18);
            uVar25 = uVar25 + 1;
            if (uVar11 < uVar25) break;
            uVar18 = (uint)(byte)puVar15[3];
            uVar14 = (uint)CONCAT21(CONCAT11(*puVar15,puVar15[1]),puVar15[2]);
            puVar15 = puVar15 + 4;
          }
          if (uVar17 <= uVar13) {
            lVar19 = (longlong)iVar7;
            iVar7 = iVar7 + 1;
            *(uint *)(lVar10 + lVar19 * 4) = uVar21;
            if (uVar17 < uVar13) {
              lVar19 = (longlong)iVar7;
              puVar15 = puVar9 + -1;
              puVar22 = puVar9 + -2;
              puVar9 = puVar9 + -3;
              uVar16 = (ulonglong)(uVar13 - uVar17);
              iVar7 = iVar7 + (uVar13 - uVar17);
              puVar23 = (uint *)(lVar10 + lVar19 * 4);
              do {
                puVar24 = puVar22 + 3;
                puVar1 = puVar9 + 3;
                puVar9 = puVar9 + 5;
                puVar22 = puVar22 + 5;
                puVar2 = puVar15 + 3;
                puVar15 = puVar15 + 5;
                *puVar23 = (uint)CONCAT21(CONCAT11(*puVar1,*puVar24),*puVar2);
                uVar16 = uVar16 - 1;
                puVar23 = puVar23 + 1;
              } while (uVar16 != 0);
            }
            goto LAB_144e1e287;
          }
LAB_144e1e206:
          if (uVar25 <= uVar11) {
            lVar19 = (longlong)iVar7;
            uVar13 = 0;
            iVar7 = iVar7 + 1 + uVar18;
            piVar20 = (int *)(lVar10 + lVar19 * 4);
            do {
              iVar8 = uVar13 + uVar14;
              uVar13 = uVar13 + 1;
              *piVar20 = iVar8;
              piVar20 = piVar20 + 1;
            } while (uVar13 <= uVar18);
            if (uVar25 < uVar11) {
              lVar19 = (longlong)iVar7;
              uVar16 = (ulonglong)(uVar11 - uVar25);
              do {
                uVar3 = puVar15[1];
                uVar11 = 0;
                uVar4 = *puVar15;
                uVar5 = puVar15[2];
                bVar6 = puVar15[3];
                iVar7 = iVar7 + 1 + (uint)bVar6;
                do {
                  iVar8 = uVar11 + CONCAT21(CONCAT11(uVar4,uVar3),uVar5);
                  uVar11 = uVar11 + 1;
                  *(int *)(lVar10 + lVar19 * 4) = iVar8;
                  lVar19 = lVar19 + 1;
                } while (uVar11 <= bVar6);
                uVar16 = uVar16 - 1;
                puVar15 = puVar15 + 4;
              } while (uVar16 != 0);
            }
          }
LAB_144e1e287:
          *(undefined4 *)(lVar10 + (longlong)iVar7 * 4) = 0;
        }
        else {
          lVar10 = 0;
        }
      }
      return lVar10;
    }
    if (uVar11 != 0) {
      lVar10 = FUN_144e24a20(param_1,(ulonglong)uVar11 + lVar10,param_2);
      return lVar10;
    }
  }
  return 0;
}



// FUNCTION 144e1e2e0 FUN_144e1e2e0 body=608 status=ok
// SIG undefined FUN_144e1e2e0(void)

ulonglong FUN_144e1e2e0(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint local_res18 [4];
  
  uVar17 = 0;
  uVar15 = 0;
  uVar2 = (**(code **)(param_1 + 0x2a0))(param_1,0x6b65726e,param_2,local_res18);
  if ((int)uVar2 == 0) {
    if (local_res18[0] < 4) {
      return 0x8e;
    }
    uVar2 = FUN_144b59b00(param_2,local_res18[0],param_1 + 0x480);
    if ((int)uVar2 == 0) {
      lVar11 = *(longlong *)(param_1 + 0x480);
      uVar8 = 0;
      *(uint *)(param_1 + 0x488) = local_res18[0];
      uVar1 = lVar11 + (ulonglong)local_res18[0];
      uVar16 = (uint)CONCAT11(*(undefined1 *)(lVar11 + 2),*(undefined1 *)(lVar11 + 3));
      if (0x20 < uVar16) {
        uVar16 = 0x20;
      }
      if (uVar16 != 0) {
        uVar10 = 1;
        uVar4 = lVar11 + 4;
        do {
          if (uVar1 < uVar4 + 6) break;
          uVar5 = (uint)CONCAT11(*(undefined1 *)(uVar4 + 2),*(undefined1 *)(uVar4 + 3));
          if (uVar5 < 0xf) break;
          uVar6 = uVar5 + uVar4;
          uVar9 = uVar1;
          if (uVar6 <= uVar1) {
            uVar9 = uVar6;
          }
          if (((CONCAT11(*(undefined1 *)(uVar4 + 4),*(byte *)(uVar4 + 5)) < 0x100) &&
              ((*(byte *)(uVar4 + 5) & 3) == 1)) && (uVar4 + 0xe <= uVar9)) {
            lVar11 = uVar9 - (longlong)(uVar4 + 0xe);
            uVar5 = (uint)CONCAT11(*(undefined1 *)(uVar4 + 6),*(undefined1 *)(uVar4 + 7));
            if (lVar11 < (longlong)(ulonglong)(uVar5 * 6)) {
              uVar5 = (uint)(lVar11 / 6);
            }
            uVar17 = uVar17 | uVar10;
            if (uVar5 != 0) {
              iVar7 = uVar5 - 1;
              if (iVar7 != 0) {
                lVar11 = uVar4 + 0x13;
                lVar12 = uVar4 + 0x12;
                lVar13 = uVar4 + 0x11;
                lVar14 = uVar4 + 0x10;
                uVar5 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(uVar4 + 0xe),
                                                   *(undefined1 *)(uVar4 + 0xf)),
                                          *(undefined1 *)(uVar4 + 0x10)),
                                 *(undefined1 *)(uVar4 + 0x11));
                do {
                  uVar3 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar14 + 4),
                                                     *(undefined1 *)(lVar13 + 4)),
                                            *(undefined1 *)(lVar12 + 4)),*(undefined1 *)(lVar11 + 4)
                                  );
                  if (uVar3 <= uVar5) break;
                  lVar14 = lVar14 + 6;
                  lVar13 = lVar13 + 6;
                  lVar12 = lVar12 + 6;
                  lVar11 = lVar11 + 6;
                  iVar7 = iVar7 + -1;
                  uVar5 = uVar3;
                } while (iVar7 != 0);
                if (iVar7 != 0) goto LAB_144e1e4f0;
              }
              uVar15 = uVar15 | uVar10;
            }
          }
LAB_144e1e4f0:
          uVar8 = uVar8 + 1;
          uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
          uVar4 = uVar9;
        } while (uVar8 < uVar16);
      }
      uVar2 = uVar2 & 0xffffffff;
      *(uint *)(param_1 + 0x48c) = uVar8;
      *(uint *)(param_1 + 0x490) = uVar17;
      *(uint *)(param_1 + 0x494) = uVar15;
    }
  }
  return uVar2;
}



// FUNCTION 144e1e540 FUN_144e1e540 body=509 status=ok
// SIG undefined FUN_144e1e540(void)

uint FUN_144e1e540(longlong param_1,int param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar4;
  
  uVar7 = 0;
  iVar14 = *(int *)(param_1 + 0x48c);
  uVar13 = (ulonglong)*(uint *)(param_1 + 0x488) + *(longlong *)(param_1 + 0x480);
  uVar9 = *(longlong *)(param_1 + 0x480) + 4;
  uVar6 = 1;
  if (iVar14 == 0) {
    return 0;
  }
  do {
    if (uVar13 < uVar9 + 6) {
      return uVar7;
    }
    uVar4 = CONCAT11(*(undefined1 *)(uVar9 + 2),*(undefined1 *)(uVar9 + 3)) + uVar9;
    uVar15 = uVar13;
    if (uVar4 <= uVar13) {
      uVar15 = uVar4;
    }
    if ((*(uint *)(param_1 + 0x490) & uVar6) != 0) {
      puVar10 = (undefined1 *)(uVar9 + 0xe);
      uVar3 = (uint)CONCAT11(*(undefined1 *)(uVar9 + 6),*(undefined1 *)(uVar9 + 7));
      uVar4 = (ulonglong)uVar3;
      if ((longlong)(uVar15 - (longlong)puVar10) < (longlong)(ulonglong)(uVar3 * 6)) {
        uVar4 = (longlong)(uVar15 - (longlong)puVar10) / 6;
      }
      if (CONCAT11(*(undefined1 *)(uVar9 + 4),*(byte *)(uVar9 + 5)) < 0x100) {
        uVar11 = param_2 << 0x10 | param_3;
        uVar3 = (uint)uVar4;
        if ((*(uint *)(param_1 + 0x494) & uVar6) == 0) {
          while (uVar3 != 0) {
            if (CONCAT31(CONCAT21(CONCAT11(*puVar10,puVar10[1]),puVar10[2]),puVar10[3]) == uVar11) {
              bVar1 = puVar10[4];
              bVar2 = puVar10[5];
              goto LAB_144e1e6e3;
            }
            puVar10 = puVar10 + 6;
            uVar3 = (int)uVar4 - 1;
            uVar4 = (ulonglong)uVar3;
          }
        }
        else {
          uVar12 = 0;
          if (uVar3 != 0) {
LAB_144e1e642:
            uVar8 = (int)uVar4 + uVar12 >> 1;
            puVar5 = puVar10 + uVar8 * 6;
            uVar3 = CONCAT31(CONCAT21(CONCAT11(*puVar5,puVar5[1]),puVar5[2]),puVar5[3]);
            if (uVar3 != uVar11) break;
            bVar1 = puVar5[4];
            bVar2 = puVar5[5];
LAB_144e1e6e3:
            uVar3 = (int)(short)((ushort)bVar1 << 8) | (uint)bVar2;
            uVar7 = uVar7 + uVar3;
            if ((*(byte *)(uVar9 + 5) & 8) != 0) {
              uVar7 = uVar3;
            }
          }
        }
      }
    }
LAB_144e1e6f3:
    uVar6 = uVar6 * 2;
    iVar14 = iVar14 + -1;
    uVar9 = uVar15;
    if (iVar14 == 0) {
      return uVar7;
    }
  } while( true );
  if (uVar3 < uVar11) {
    uVar12 = uVar8 + 1;
  }
  else {
    uVar4 = (ulonglong)uVar8;
  }
  if ((uint)uVar4 <= uVar12) goto LAB_144e1e6f3;
  goto LAB_144e1e642;
}



// FUNCTION 144e1e740 FUN_144e1e740 body=115 status=ok
// SIG undefined FUN_144e1e740(void)

void FUN_144e1e740(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (param_3 == '\0') {
    iVar1 = (**(code **)(param_1 + 0x2a0))(param_1,0x68686561,param_2,0);
    if (iVar1 != 0) {
      return;
    }
    lVar2 = 0x138;
  }
  else {
    iVar1 = (**(code **)(param_1 + 0x2a0))(param_1,0x76686561);
    if (iVar1 != 0) {
      return;
    }
    lVar2 = 0x198;
  }
  param_1 = param_1 + lVar2;
  iVar1 = FUN_144b5a030(param_2,&DAT_149a1dc10,param_1);
  if (iVar1 == 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 144e1e7c0 FUN_144e1e7c0 body=123 status=ok
// SIG undefined FUN_144e1e7c0(void)

ulonglong FUN_144e1e7c0(longlong param_1,undefined8 param_2,char param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_res18 [4];
  
  if (param_3 == '\0') {
    uVar3 = 0x686d7478;
    lVar4 = 0x4c0;
    lVar5 = 0x42c;
  }
  else {
    uVar3 = 0x766d7478;
    lVar4 = 0x4c4;
    lVar5 = 0x430;
  }
  uVar2 = (**(code **)(param_1 + 0x2a0))(param_1,uVar3,param_2,local_res18);
  if ((int)uVar2 == 0) {
    *(undefined4 *)(lVar5 + param_1) = local_res18[0];
    uVar1 = FUN_144b59870(param_2);
    *(undefined4 *)(lVar4 + param_1) = uVar1;
    uVar2 = uVar2 & 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 144e1e840 FUN_144e1e840 body=518 status=ok
// SIG undefined FUN_144e1e840(void)

void FUN_144e1e840(longlong param_1,char param_2,uint param_3,short *param_4,ushort *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ushort uVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  int local_res8 [2];
  char local_res10;
  uint local_48;
  int local_44 [3];
  
  puVar1 = *(undefined8 **)(param_1 + 0x2e8);
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  if (param_2 == '\0') {
    iVar6 = *(int *)(param_1 + 0x4c0);
    lVar9 = 0x15a;
    iVar8 = *(int *)(param_1 + 0x42c);
  }
  else {
    iVar6 = *(int *)(param_1 + 0x4c4);
    lVar9 = 0x1ba;
    iVar8 = *(int *)(param_1 + 0x430);
  }
  uVar10 = iVar8 + iVar6;
  uVar3 = *(ushort *)(lVar9 + param_1);
  local_res10 = param_2;
  if (uVar3 != 0) {
    if (param_3 < uVar3) {
      if (iVar6 + param_3 * 4 + 4 <= uVar10) {
        local_res8[0] = FUN_144b597a0(uVar2);
        if (local_res8[0] == 0) {
          uVar3 = FUN_144b59d40(uVar2,local_res8);
          *param_5 = uVar3;
          if (local_res8[0] == 0) {
            sVar4 = FUN_144b59d40(uVar2,local_res8);
            *param_4 = sVar4;
            if (local_res8[0] == 0) goto LAB_144e1e91a;
          }
        }
      }
    }
    else {
      local_44[0] = iVar6 + -4 + (uint)uVar3 * 4;
      if (local_44[0] + 4U <= uVar10) {
        local_res8[0] = FUN_144b597a0(uVar2,local_44[0]);
        if (local_res8[0] == 0) {
          uVar5 = FUN_144b59d40(uVar2,local_res8);
          *param_5 = uVar5;
          if (local_res8[0] == 0) {
            if (uVar10 < local_44[0] + (param_3 - uVar3) * 2 + 6) {
              *param_4 = 0;
            }
            else {
              local_res8[0] = FUN_144b597a0(uVar2);
              if (local_res8[0] == 0) {
                sVar4 = FUN_144b59d40(uVar2,local_res8);
                *param_4 = sVar4;
              }
            }
            goto LAB_144e1e91a;
          }
        }
      }
    }
  }
  *param_4 = 0;
  *param_5 = 0;
LAB_144e1e91a:
  if (puVar1 != (undefined8 *)0x0) {
    local_48 = (uint)*param_5;
    local_44[0] = (int)*param_4;
    if (local_res10 == '\0') {
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)(param_1,param_3,&local_48);
      }
      pcVar7 = (code *)puVar1[1];
    }
    else {
      if ((code *)puVar1[3] != (code *)0x0) {
        (*(code *)puVar1[3])(param_1,param_3,&local_48);
      }
      pcVar7 = (code *)puVar1[4];
    }
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(param_1,param_3,local_44);
    }
    *param_5 = (ushort)local_48;
    *param_4 = (short)local_44[0];
  }
  return;
}



// FUNCTION 144e1ea50 FUN_144e1ea50 body=26 status=ok
// SIG undefined FUN_144e1ea50(void)

void FUN_144e1ea50(undefined8 param_1,undefined4 param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  FUN_144e241f0(param_1,local_res10,0);
  return;
}



// FUNCTION 144e1ea70 FUN_144e1ea70 body=90 status=ok
// SIG undefined FUN_144e1ea70(void)

ulonglong FUN_144e1ea70(longlong param_1,int *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  if ((*(char *)(param_1 + 0x28) != '\0') && (*(int *)(param_1 + 0x2c) == *param_2)) {
    FUN_144e240b0();
    if (*(char *)(param_1 + 0x28) != '\0') {
      uVar1 = *(uint *)(param_1 + 0x30);
      *param_2 = *(int *)(param_1 + 0x2c);
      return (ulonglong)uVar1;
    }
    return 0;
  }
  uVar2 = FUN_144e241f0(param_1,param_2,1);
  return uVar2;
}



// FUNCTION 144e1eb50 FUN_144e1eb50 body=78 status=ok
// SIG undefined FUN_144e1eb50(void)

undefined8 FUN_144e1eb50(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  pcVar2 = *(code **)(*(longlong *)(lVar1 + 0x2d8) + 8);
  if (pcVar2 == (code *)0x0) {
    return 7;
  }
  uVar3 = (*pcVar2)(*(undefined8 *)(lVar1 + 0x98),param_1,*(undefined4 *)(lVar1 + 0x10),
                    FUN_144e24b30,0,lVar1);
  return uVar3;
}



// FUNCTION 144e1eba0 FUN_144e1eba0 body=506 status=ok
// SIG undefined FUN_144e1eba0(void)

undefined8 FUN_144e1eba0(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  uint uVar16;
  
  if (*(ulonglong *)(param_2 + 0x108) < param_1 + 0x10U) {
    FUN_144b5b5a0(param_2,8);
  }
  puVar14 = (undefined1 *)(param_1 + 0xc);
  puVar13 = (undefined1 *)(param_1 + 0xd);
  puVar12 = (undefined1 *)(param_1 + 0xe);
  puVar15 = (undefined1 *)(param_1 + 0xf);
  uVar8 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 4),*(undefined1 *)(param_1 + 5)),
                            *(undefined1 *)(param_1 + 6)),*(undefined1 *)(param_1 + 7));
  uVar16 = CONCAT31(CONCAT21(CONCAT11(*puVar14,*puVar13),*puVar12),*puVar15);
  if ((((uint)((int)*(undefined8 *)(param_2 + 0x108) - (int)param_1) < uVar8) || (uVar8 < 0x10)) ||
     ((uVar8 - 0x10) / 0xc < uVar16)) {
    FUN_144b5b5a0(param_2,8);
  }
  uVar8 = 0;
  uVar11 = 0;
  if (uVar16 != 0) {
    do {
      puVar1 = puVar14 + 4;
      puVar2 = puVar14 + 8;
      puVar14 = puVar14 + 0xc;
      uVar4 = *puVar14;
      uVar10 = CONCAT31(CONCAT21(CONCAT11(*puVar1,puVar13[4]),puVar12[4]),puVar15[4]);
      puVar1 = puVar13 + 8;
      puVar13 = puVar13 + 0xc;
      puVar3 = puVar12 + 8;
      puVar12 = puVar12 + 0xc;
      uVar9 = CONCAT31(CONCAT21(CONCAT11(*puVar2,*puVar1),*puVar3),puVar15[8]);
      uVar5 = *puVar13;
      uVar6 = *puVar12;
      uVar7 = puVar15[0xc];
      if (uVar9 < uVar10) {
        FUN_144b5b5a0(param_2,8);
      }
      if ((uVar11 != 0) && (uVar10 <= uVar8)) {
        FUN_144b5b5a0(param_2,8);
      }
      if ((0 < *(int *)(param_2 + 0x110)) &&
         (*(uint *)(param_2 + 0x120) <= CONCAT31(CONCAT21(CONCAT11(uVar4,uVar5),uVar6),uVar7))) {
        FUN_144b5b5a0(param_2,0x10);
      }
      uVar11 = uVar11 + 1;
      puVar15 = puVar15 + 0xc;
      uVar8 = uVar9;
    } while (uVar11 < uVar16);
  }
  return 0;
}



// FUNCTION 144e1eda0 FUN_144e1eda0 body=43 status=ok
// SIG undefined FUN_144e1eda0(void)

void FUN_144e1eda0(longlong *param_1)

{
  FUN_144b56350(*(undefined8 *)(*param_1 + 0x98),param_1[4]);
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}



// FUNCTION 144e1ee40 FUN_144e1ee40 body=539 status=ok
// SIG undefined FUN_144e1ee40(void)

void FUN_144e1ee40(longlong param_1,longlong param_2)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  int *local_70;
  int local_68;
  ushort local_64 [2];
  int local_60;
  int iStack_5c;
  uint uStack_58;
  uint uStack_54;
  int local_50;
  ushort local_4c;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  uVar8 = 0;
  local_64[0] = 0;
  local_44 = FUN_144b59870(param_2);
  local_50 = FUN_144b59e60(param_2,&local_68);
  if (((local_68 == 0) &&
      (local_68 = FUN_144b5a030(param_2,&DAT_149a1dbf8,&local_50), local_68 == 0)) &&
     ((uVar7 = local_4c, local_50 == 0x4f54544f ||
      (local_68 = FUN_144e24b50(&local_50,param_2,local_64), uVar7 = local_64[0], local_68 == 0))))
  {
    *(int *)(param_1 + 0xf0) = local_50;
    local_70 = &local_68;
    *(ushort *)(param_1 + 0xf4) = uVar7;
    local_78 = 0;
    uVar5 = FUN_144b561b0(uVar5,0x10,0,uVar7);
    *(undefined8 *)(param_1 + 0xf8) = uVar5;
    if (((local_68 == 0) && (local_68 = FUN_144b597a0(param_2,local_44 + 0xc), local_68 == 0)) &&
       (local_68 = FUN_144b59990(param_2,(ulonglong)local_4c << 4), local_68 == 0)) {
      uVar7 = uVar8;
      uVar9 = uVar8;
      if (local_4c != 0) {
        do {
          iVar3 = FUN_144b59be0(param_2);
          local_60 = iVar3;
          iStack_5c = FUN_144b59be0(param_2);
          uVar4 = FUN_144b59be0(param_2);
          uStack_58 = uVar4;
          uStack_54 = FUN_144b59be0(param_2);
          if (uVar4 <= *(uint *)(param_2 + 8)) {
            uVar4 = *(uint *)(param_2 + 8) - uVar4;
            if (uVar4 < uStack_54) {
              if ((iVar3 != 0x686d7478) && (iVar3 != 0x766d7478)) goto LAB_144e1f01b;
              uStack_54 = uVar4 & 0xfffffffc;
            }
            if (uVar7 != 0) {
              uVar2 = uVar8;
              do {
                if (*(int *)(*(longlong *)(param_1 + 0xf8) + (ulonglong)uVar2 * 0x10) == iVar3)
                goto LAB_144e1f01b;
                uVar2 = uVar2 + 1;
              } while (uVar2 < uVar7);
            }
            uVar6 = (ulonglong)uVar7;
            uVar7 = uVar7 + 1;
            piVar1 = (int *)(*(longlong *)(param_1 + 0xf8) + uVar6 * 0x10);
            *piVar1 = local_60;
            piVar1[1] = iStack_5c;
            piVar1[2] = uStack_58;
            piVar1[3] = uStack_54;
          }
LAB_144e1f01b:
          uVar9 = uVar9 + 1;
        } while (uVar9 < local_4c);
      }
      *(ushort *)(param_1 + 0xf4) = uVar7;
      FUN_144b59ab0(param_2);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
}



// FUNCTION 144e1f110 FUN_144e1f110 body=153 status=ok
// SIG undefined FUN_144e1f110(void)

undefined8 FUN_144e1f110(longlong param_1,int param_2,int param_3,undefined8 param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  int *piVar5;
  
  if (param_2 == 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0xa0) + 8);
  }
  else {
    piVar3 = *(int **)(param_1 + 0xf8);
    piVar5 = piVar3 + (ulonglong)*(ushort *)(param_1 + 0xf4) * 4;
    while( true ) {
      if (piVar5 <= piVar3) {
        return 0x8e;
      }
      if ((*piVar3 == param_2) && (piVar3[3] != 0)) break;
      piVar3 = piVar3 + 4;
    }
    param_3 = param_3 + piVar3[2];
    iVar1 = piVar3[3];
  }
  iVar2 = iVar1;
  if ((param_5 != (int *)0x0) && (iVar2 = *param_5, iVar2 == 0)) {
    *param_5 = iVar1;
    return 0;
  }
  uVar4 = FUN_144b59890(*(undefined8 *)(param_1 + 0xa0),param_3,param_4,iVar2);
  return uVar4;
}



// FUNCTION 144e1f1b0 FUN_144e1f1b0 body=568 status=ok
// SIG undefined FUN_144e1f1b0(void)

ulonglong FUN_144e1f1b0(longlong *param_1,uint param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  ushort uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  longlong lVar13;
  uint local_res10 [6];
  
  if (0xffff < param_2) {
    return 0;
  }
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    local_res10[0] = param_2;
    uVar4 = FUN_144e23ba0(param_1,local_res10,0);
    return uVar4;
  }
  lVar13 = param_1[3];
  lVar2 = *param_1;
  uVar3 = CONCAT11(*(undefined1 *)(lVar13 + 6),*(undefined1 *)(lVar13 + 7));
  uVar4 = (ulonglong)(uVar3 & 0xfffffffe);
  uVar7 = (uint)(uVar3 >> 1);
  uVar9 = 0;
  if ((uVar7 != 0) && (uVar9 = 0, param_2 < 0x10000)) {
    uVar8 = 0;
    uVar6 = (ulonglong)(uVar3 & 0xfffffffe);
    uVar9 = 0;
    if (uVar3 >> 1 != 0) {
      puVar11 = (undefined1 *)(lVar13 + 0xe + uVar4 * 3);
      lVar13 = lVar13 + 0xd;
      while( true ) {
        puVar1 = puVar11 + 2;
        uVar5 = (uint)CONCAT11(*(undefined1 *)(lVar13 + 1),*(undefined1 *)(lVar13 + 2));
        uVar10 = (uint)CONCAT11(puVar1[uVar6 * -2],puVar1[uVar4 * -2 + 1]);
        uVar9 = 0;
        if (param_2 < uVar10) break;
        if (param_2 <= uVar5) {
          uVar12 = (int)(short)((ushort)(byte)puVar1[-uVar6] << 8) | (uint)(byte)puVar1[1 - uVar6];
          uVar3 = CONCAT11(*puVar1,(puVar1 + (1 - uVar6))[uVar4 * 2 - uVar6]);
          uVar9 = (uint)uVar3;
          if ((((uVar8 < uVar7 - 1) || (uVar10 != 0xffff)) || (uVar5 != 0xffff)) ||
             ((uVar3 == 0 ||
              (puVar11 + (ulonglong)uVar9 + 4 <=
               (undefined1 *)((ulonglong)*(uint *)(lVar2 + 0x298) + *(longlong *)(lVar2 + 0x290)))))
             ) {
            if (uVar9 == 0xffff) goto LAB_144e1f357;
            if (uVar3 != 0) {
              uVar4 = (ulonglong)(uVar9 + (param_2 - uVar10) * 2);
              uVar9 = 0;
              if ((CONCAT11(puVar1[uVar4],puVar1[uVar4 + 1]) != 0) &&
                 (uVar9 = uVar12 + CONCAT11(puVar1[uVar4],puVar1[uVar4 + 1]) & 0xffff,
                 *(uint *)(lVar2 + 0x10) <= uVar9)) {
                uVar9 = 0;
              }
              break;
            }
          }
          else {
            uVar12 = 1;
          }
          uVar9 = uVar12 + param_2 & 0xffff;
          break;
        }
LAB_144e1f357:
        uVar8 = uVar8 + 1;
        puVar11 = puVar1;
        lVar13 = lVar13 + 2;
        uVar9 = 0;
        if (uVar7 <= uVar8) break;
      }
    }
  }
  return (ulonglong)uVar9;
}



// FUNCTION 144e1f3f0 FUN_144e1f3f0 body=70 status=ok
// SIG undefined FUN_144e1f3f0(void)

void FUN_144e1f3f0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x2a0))(param_1,0x68656164,param_2,0);
  if (iVar1 == 0) {
    FUN_144b5a030(param_2,&DAT_149a1dd40,param_1 + 0x100);
  }
  return;
}



// FUNCTION 144e1f440 FUN_144e1f440 body=687 status=ok
// SIG undefined FUN_144e1f440(void)

uint FUN_144e1f440(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  byte *pbVar15;
  uint uVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  
  uVar5 = *param_2;
  if (0xfffe < uVar5) {
    return 0;
  }
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (uVar5 == *(uint *)(param_1 + 5)) {
      FUN_144e23a60();
      uVar11 = *(uint *)((longlong)param_1 + 0x2c);
      if (uVar11 != 0) {
        *param_2 = *(uint *)(param_1 + 5);
      }
    }
    else {
      uVar11 = FUN_144e23ba0(param_1,param_2,1);
    }
  }
  else {
    lVar1 = *param_1;
    uVar10 = 0;
    lVar2 = param_1[3];
    pbVar17 = (byte *)((ulonglong)*(uint *)(lVar1 + 0x298) + *(longlong *)(lVar1 + 0x290));
    uVar3 = CONCAT11(*(undefined1 *)(lVar2 + 6),*(undefined1 *)(lVar2 + 7));
    uVar6 = uVar3 & 0xfffffffe;
    uVar8 = (uint)(uVar3 >> 1);
    uVar11 = uVar10;
    if ((uVar8 != 0) && (uVar5 = uVar5 + 1, uVar11 = 0, uVar5 < 0x10000)) {
      uVar14 = (ulonglong)uVar6;
      uVar16 = 0;
      uVar11 = 0;
      if (uVar8 != 0) {
        lVar7 = lVar2 + 0xd;
        pbVar18 = (byte *)((ulonglong)uVar6 + 0xe + lVar2 + uVar14);
        do {
          pbVar19 = pbVar18 + 2;
          uVar6 = (uint)CONCAT11(*(undefined1 *)(lVar7 + 1),*(undefined1 *)(lVar7 + 2));
          uVar9 = (uint)CONCAT11(pbVar18[2 - uVar14],pbVar19[1 - uVar14]);
          if (uVar5 < uVar9) {
            uVar5 = uVar9;
          }
          uVar4 = uVar11;
          if (uVar5 <= uVar6) {
            do {
              pbVar15 = pbVar19 + uVar14;
              uVar13 = (uint)pbVar18[3] | (int)(short)((ushort)*pbVar19 << 8);
              uVar3 = CONCAT11(*pbVar15,pbVar15[1]);
              uVar12 = (uint)uVar3;
              if ((((uVar16 < uVar8 - 1) || (uVar9 != 0xffff)) || (uVar6 != 0xffff)) ||
                 ((uVar3 == 0 || (pbVar15 + (ulonglong)uVar12 + 2 <= pbVar17)))) {
                uVar4 = uVar11;
                if (uVar12 == 0xffff) break;
                if (uVar3 == 0) goto LAB_144e1f5c6;
                pbVar15 = pbVar15 + (uVar12 + (uVar5 - uVar9) * 2);
                if (pbVar17 < pbVar15) break;
                uVar11 = 0;
                if (CONCAT11(*pbVar15,pbVar15[1]) != 0) {
                  uVar11 = uVar13 + CONCAT11(*pbVar15,pbVar15[1]) & 0xffff;
                  if (*(uint *)(lVar1 + 0x10) <= uVar11) {
                    uVar11 = 0;
                    goto LAB_144e1f650;
                  }
                  goto LAB_144e1f64b;
                }
              }
              else {
                uVar13 = 1;
LAB_144e1f5c6:
                uVar12 = uVar13 + uVar5;
                uVar11 = uVar12 & 0xffff;
                if (uVar11 < *(uint *)(lVar1 + 0x10)) {
LAB_144e1f64b:
                  if (uVar11 != 0) goto LAB_144e1f6a6;
                }
                else {
                  uVar11 = 0;
                  if (((int)uVar12 < 0) && (-1 < (int)(uVar13 + uVar6))) {
                    uVar5 = -uVar13;
                    uVar11 = uVar10;
                  }
                  else {
                    uVar4 = uVar10;
                    if ((0xffff < (int)uVar12) || (uVar4 = uVar11, (int)(uVar13 + uVar6) < 0x10000))
                    break;
                    uVar5 = 0x10000 - uVar13;
                  }
                }
              }
LAB_144e1f650:
              if (0xfffe < uVar5) goto LAB_144e1f6a6;
              uVar5 = uVar5 + 1;
              uVar4 = uVar11;
            } while (uVar5 <= uVar6);
          }
          uVar11 = uVar4;
          uVar16 = uVar16 + 1;
          lVar7 = lVar7 + 2;
          pbVar18 = pbVar19;
        } while (uVar16 < uVar8);
      }
LAB_144e1f6a6:
      *param_2 = uVar5;
    }
  }
  return uVar11;
}



// FUNCTION 144e1f6f0 FUN_144e1f6f0 body=97 status=ok
// SIG undefined FUN_144e1f6f0(void)

void FUN_144e1f6f0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x2a0))(param_1,0x636d6170,param_2,param_1 + 0x298);
  if (iVar1 == 0) {
    iVar1 = FUN_144b59b00(param_2,*(undefined4 *)(param_1 + 0x298),param_1 + 0x290);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x298) = 0;
    }
  }
  return;
}



// FUNCTION 144e1f760 FUN_144e1f760 body=153 status=ok
// SIG undefined FUN_144e1f760(void)

void FUN_144e1f760(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x170);
  iVar2 = (**(code **)(param_1 + 0x2a0))(param_1,0x6d617870,param_2,0);
  if (iVar2 == 0) {
    iVar2 = FUN_144b5a030(param_2,&DAT_149a1df18,piVar1);
    if (iVar2 == 0) {
      *(undefined8 *)(param_1 + 0x176) = 0;
      *(undefined8 *)(param_1 + 0x17e) = 0;
      *(undefined8 *)(param_1 + 0x186) = 0;
      *(undefined2 *)(param_1 + 0x18e) = 0;
      if (0xffff < *piVar1) {
        iVar2 = FUN_144b5a030(param_2,&DAT_149a1df28,piVar1);
        if (iVar2 == 0) {
          if (*(ushort *)(param_1 + 0x184) < 0x40) {
            *(undefined2 *)(param_1 + 0x184) = 0x40;
          }
          if (0xfffb < *(ushort *)(param_1 + 0x180)) {
            *(undefined2 *)(param_1 + 0x180) = 0xfffb;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 144e1f800 FUN_144e1f800 body=883 status=ok
// SIG undefined FUN_144e1f800(void)

ulonglong FUN_144e1f800(longlong param_1,longlong param_2)

{
  short *psVar1;
  ushort uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint uVar6;
  ushort *puVar7;
  longlong lVar8;
  int iVar9;
  ushort *puVar10;
  uint uVar11;
  uint uVar12;
  uint local_res10 [2];
  int local_res18 [2];
  undefined8 local_res20;
  
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  psVar1 = (short *)(param_1 + 0x1d8);
  *(longlong *)(param_1 + 0x200) = param_2;
  local_res20 = uVar5;
  uVar4 = (**(code **)(param_1 + 0x2a0))(param_1,0x6e616d65,param_2,local_res18);
  local_res10[0] = (uint)uVar4;
  if (local_res10[0] == 0) {
    iVar3 = FUN_144b59870(param_2);
    uVar4 = FUN_144b5a030(param_2,&DAT_149a1df68,psVar1);
    local_res10[0] = (uint)uVar4;
    if (local_res10[0] == 0) {
      uVar11 = local_res18[0] + iVar3;
      uVar12 = *(int *)(param_1 + 0x1dc) * 0xc + 6 + iVar3;
      if (uVar11 < uVar12) {
        uVar4 = 0x91;
      }
      else {
        uVar6 = 0;
        if (*psVar1 == 1) {
          uVar4 = FUN_144b597a0(param_2,uVar12);
          local_res10[0] = (uint)uVar4;
          if (local_res10[0] != 0) {
            return uVar4;
          }
          uVar2 = FUN_144b59d40(param_2,local_res10);
          *(uint *)(param_1 + 0x1f0) = (uint)uVar2;
          if (local_res10[0] != 0) {
            return (ulonglong)local_res10[0];
          }
          uVar12 = uVar12 + (uint)uVar2 * 4 + 2;
          uVar5 = FUN_144b561b0(uVar5,0x10,0,uVar2,0,local_res10);
          *(undefined8 *)(param_1 + 0x1f8) = uVar5;
          if (local_res10[0] != 0) {
            return (ulonglong)local_res10[0];
          }
          uVar4 = FUN_144b59990(param_2,*(int *)(param_1 + 0x1f0) << 2);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          puVar7 = *(ushort **)(param_1 + 0x1f8);
          puVar10 = puVar7 + (ulonglong)*(uint *)(param_1 + 0x1f0) * 8;
          local_res10[0] = 0;
          if (puVar7 < puVar10) {
            local_res10[0] = 0;
            do {
              local_res10[0] = FUN_144b5a030(param_2,&DAT_149a1dfb0,puVar7);
              uVar6 = *(int *)(param_1 + 0x1e0) + iVar3 + *(int *)(puVar7 + 2);
              *(uint *)(puVar7 + 2) = uVar6;
              if ((uVar6 < uVar12) || (uVar11 < *puVar7 + uVar6)) {
                *puVar7 = 0;
              }
              puVar7 = puVar7 + 8;
            } while (puVar7 < puVar10);
          }
          FUN_144b59ab0(param_2);
          uVar6 = FUN_144b597a0(param_2,iVar3 + 6);
          uVar5 = local_res20;
        }
        local_res10[0] = uVar6;
        uVar5 = FUN_144b561b0(uVar5,0x18,0,*(undefined4 *)(param_1 + 0x1dc),0,local_res10);
        *(undefined8 *)(param_1 + 0x1e8) = uVar5;
        uVar4 = (ulonglong)local_res10[0];
        if ((local_res10[0] == 0) &&
           (uVar4 = FUN_144b59990(param_2,*(int *)(param_1 + 0x1dc) * 0xc), (int)uVar4 == 0)) {
          iVar9 = *(int *)(param_1 + 0x1dc);
          lVar8 = *(longlong *)(param_1 + 0x1e8);
          local_res10[0] = 0;
          if (iVar9 != 0) {
            local_res10[0] = 0;
            do {
              local_res10[0] = FUN_144b5a030(param_2,&DAT_149a1df80,lVar8);
              if ((local_res10[0] == 0) && (*(ushort *)(lVar8 + 8) != 0)) {
                uVar6 = *(int *)(param_1 + 0x1e0) + *(int *)(lVar8 + 0xc) + iVar3;
                *(uint *)(lVar8 + 0xc) = uVar6;
                if (((uVar12 <= uVar6) && (*(ushort *)(lVar8 + 8) + uVar6 <= uVar11)) &&
                   (((*psVar1 != 1 || (uVar2 = *(ushort *)(lVar8 + 4), uVar2 < 0x8000)) ||
                    ((uVar2 - 0x8000 < *(uint *)(param_1 + 0x1f0) &&
                     (*(short *)(*(longlong *)(param_1 + 0x1f8) + (ulonglong)(uVar2 - 0x8000) * 0x10
                                ) != 0)))))) {
                  lVar8 = lVar8 + 0x18;
                }
              }
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
          lVar8 = lVar8 - *(longlong *)(param_1 + 0x1e8);
          lVar8 = lVar8 / 6 + (lVar8 >> 0x3f);
          iVar3 = (int)(lVar8 >> 2) - (int)(lVar8 >> 0x3f);
          uVar5 = FUN_144b561b0(local_res20,0x18,*(undefined4 *)(param_1 + 0x1dc),iVar3,
                                *(longlong *)(param_1 + 0x1e8),local_res10);
          *(undefined8 *)(param_1 + 0x1e8) = uVar5;
          *(int *)(param_1 + 0x1dc) = iVar3;
          FUN_144b59ab0(param_2);
          *(undefined2 *)(param_1 + 0x1d0) = *(undefined2 *)(param_1 + 0x1dc);
          uVar4 = (ulonglong)local_res10[0];
        }
      }
    }
  }
  return uVar4;
}



// FUNCTION 144e1fba0 FUN_144e1fba0 body=183 status=ok
// SIG undefined FUN_144e1fba0(void)

void FUN_144e1fba0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  ushort *puVar2;
  
  iVar1 = (**(code **)(param_1 + 0x2a0))(param_1,0x4f532f32,param_2,0);
  if (iVar1 == 0) {
    puVar2 = (ushort *)(param_1 + 0x208);
    iVar1 = FUN_144b5a030(param_2,&DAT_149a1d610,puVar2);
    if (iVar1 == 0) {
      *(undefined8 *)(param_1 + 600) = 0;
      *(undefined8 *)(param_1 + 0x260) = 0;
      *(undefined4 *)(param_1 + 0x268) = 0;
      *(undefined2 *)(param_1 + 0x26c) = 0xffff;
      if (*puVar2 != 0) {
        iVar1 = FUN_144b5a030(param_2,&DAT_149a1d918,puVar2);
        if ((iVar1 == 0) && (1 < *puVar2)) {
          iVar1 = FUN_144b5a030(param_2,&DAT_149a1d928,puVar2);
          if ((iVar1 == 0) && (4 < *puVar2)) {
            FUN_144b5a030(param_2,&DAT_149a1d948,puVar2);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 144e1fcd0 FUN_144e1fcd0 body=70 status=ok
// SIG undefined FUN_144e1fcd0(void)

void FUN_144e1fcd0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x2a0))(param_1,0x706f7374,param_2,0);
  if (iVar1 == 0) {
    FUN_144b5a030(param_2,&DAT_149a1d958,param_1 + 0x270);
  }
  return;
}



// FUNCTION 144e1fd20 FUN_144e1fd20 body=70 status=ok
// SIG undefined FUN_144e1fd20(void)

void FUN_144e1fd20(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x2a0))(param_1,0x50434c54,param_2,0);
  if (iVar1 == 0) {
    FUN_144b5a030(param_2,&DAT_149a1da00,param_1 + 0x308);
  }
  return;
}



// FUNCTION 144e1fd70 FUN_144e1fd70 body=256 status=ok
// SIG undefined FUN_144e1fd70(void)

void FUN_144e1fd70(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = *(ulonglong *)(param_1 + 0x1e8);
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x10);
  if (uVar2 != 0) {
    uVar3 = uVar2 + (ulonglong)*(uint *)(param_1 + 0x1dc) * 0x18;
    for (; uVar2 < uVar3; uVar2 = uVar2 + 0x18) {
      FUN_144b56350(uVar1,*(undefined8 *)(uVar2 + 0x10));
      *(undefined8 *)(uVar2 + 0x10) = 0;
    }
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x1e8));
    *(undefined8 *)(param_1 + 0x1e8) = 0;
  }
  uVar2 = *(ulonglong *)(param_1 + 0x1f8);
  if (uVar2 != 0) {
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x1f0) * 0x10 + uVar2;
    for (; uVar2 < uVar3; uVar2 = uVar2 + 0x10) {
      FUN_144b56350(uVar1,*(undefined8 *)(uVar2 + 8));
      *(undefined8 *)(uVar2 + 8) = 0;
    }
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x1f8));
    *(undefined8 *)(param_1 + 0x1f8) = 0;
  }
  *(undefined8 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined2 *)(param_1 + 0x1d8) = 0;
  return;
}



// FUNCTION 144e1fe70 FUN_144e1fe70 body=322 status=ok
// SIG undefined FUN_144e1fe70(void)

ulonglong FUN_144e1fe70(longlong param_1,longlong param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  uint local_res8 [2];
  
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  uVar3 = (**(code **)(param_1 + 0x2a0))(param_1,0x67617370,param_2,0);
  local_res8[0] = (uint)uVar3;
  if (local_res8[0] == 0) {
    uVar3 = FUN_144b59990(param_2,4);
    local_res8[0] = (uint)uVar3;
    if (local_res8[0] == 0) {
      uVar2 = FUN_144b59ba0(param_2);
      *(undefined2 *)(param_1 + 0x2f8) = uVar2;
      uVar2 = FUN_144b59ba0(param_2);
      *(undefined2 *)(param_1 + 0x2fa) = uVar2;
      FUN_144b59ab0(param_2);
      if (1 < *(ushort *)(param_1 + 0x2f8)) {
        *(undefined2 *)(param_1 + 0x2fa) = 0;
        return 8;
      }
      uVar1 = *(ushort *)(param_1 + 0x2fa);
      uVar6 = (ulonglong)uVar1;
      uVar4 = FUN_144b561b0(uVar4,4,0,uVar1,0,local_res8);
      *(undefined8 *)(param_1 + 0x300) = uVar4;
      uVar3 = (ulonglong)local_res8[0];
      if ((local_res8[0] == 0) && (uVar3 = FUN_144b59990(param_2,(uint)uVar1 * 4), (int)uVar3 == 0))
      {
        puVar5 = *(undefined2 **)(param_1 + 0x300);
        local_res8[0] = 0;
        if (uVar1 != 0) {
          do {
            uVar2 = FUN_144b59ba0(param_2);
            *puVar5 = uVar2;
            uVar2 = FUN_144b59ba0(param_2);
            puVar5[1] = uVar2;
            puVar5 = puVar5 + 2;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        FUN_144b59ab0(param_2);
        uVar3 = (ulonglong)local_res8[0];
      }
    }
  }
  return uVar3;
}



// FUNCTION 144e1ffc0 FUN_144e1ffc0 body=71 status=ok
// SIG undefined FUN_144e1ffc0(void)

ulonglong FUN_144e1ffc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  ulonglong uVar1;
  undefined8 local_18 [2];
  
  uVar1 = FUN_144e1da90(param_1,param_2,local_18);
  if ((int)uVar1 == 0) {
    FUN_144b56430(param_3,local_18[0],param_4);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 144e20010 FUN_144e20010 body=70 status=ok
// SIG undefined FUN_144e20010(void)

void FUN_144e20010(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x2a0))(param_1,0x62686564,param_2,0);
  if (iVar1 == 0) {
    FUN_144b5a030(param_2,&DAT_149a1dd40,param_1 + 0x100);
  }
  return;
}



// FUNCTION 144e20060 FUN_144e20060 body=225 status=ok
// SIG undefined FUN_144e20060(void)

undefined8 FUN_144e20060(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  ushort uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(ulonglong *)(param_2 + 0x108) < param_1 + 10U) {
    FUN_144b5b5a0(param_2,8);
  }
  puVar3 = (undefined1 *)(param_1 + 9);
  uVar5 = (uint)CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3));
  uVar2 = CONCAT11(*(undefined1 *)(param_1 + 8),*puVar3);
  uVar4 = (uint)uVar2;
  if ((*(ulonglong *)(param_2 + 0x108) < (ulonglong)uVar5 + param_1) || (uVar5 < uVar4 * 2 + 10)) {
    FUN_144b5b5a0(param_2,8);
  }
  if ((0 < *(int *)(param_2 + 0x110)) && (uVar2 != 0)) {
    do {
      puVar1 = puVar3 + 1;
      puVar3 = puVar3 + 2;
      if (*(uint *)(param_2 + 0x120) <= (uint)CONCAT11(*puVar1,*puVar3)) {
        FUN_144b5b5a0(param_2,0x10);
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return 0;
}



// FUNCTION 144e20150 FUN_144e20150 body=398 status=ok
// SIG undefined FUN_144e20150(void)

uint FUN_144e20150(longlong param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  
  uVar9 = *(uint *)(param_1 + 0x10);
  if ((int)uVar9 < 0) {
    return 0;
  }
  uVar11 = 0xffffffff;
  if (uVar9 != 0xffffffff) {
    uVar11 = uVar9;
  }
  uVar9 = 0;
  if (uVar11 != 0) {
    lVar10 = 0;
    do {
      if ((uVar9 < *(ushort *)(param_1 + 0x174)) &&
         (lVar4 = *(longlong *)(param_1 + 0x2d8), lVar4 != 0)) {
        lVar6 = (**(code **)(lVar4 + 0x20))(0);
        iVar5 = *(int *)(param_1 + 0x270);
        if (iVar5 == 0x10000) {
          uVar8 = uVar9;
          if (uVar9 < 0x102) {
LAB_144e2027e:
            lVar6 = (**(code **)(lVar4 + 0x20))(uVar8);
          }
        }
        else if (iVar5 == 0x20000) {
          if (((*(char *)(param_1 + 0x350) != '\0') || (iVar5 = FUN_144e25130(param_1), iVar5 == 0))
             && (uVar9 < *(ushort *)(param_1 + 0x358))) {
            uVar3 = *(ushort *)(lVar10 + *(longlong *)(param_1 + 0x360));
            if (uVar3 < 0x102) {
              uVar8 = (uint)uVar3;
              goto LAB_144e2027e;
            }
            lVar6 = *(longlong *)
                     (*(longlong *)(param_1 + 0x368) + (longlong)(int)(uVar3 - 0x102) * 8);
          }
        }
        else if ((iVar5 == 0x25000) &&
                (((*(char *)(param_1 + 0x350) != '\0' ||
                  (iVar5 = FUN_144e25130(param_1), iVar5 == 0)) &&
                 (uVar9 < *(ushort *)(param_1 + 0x358))))) {
          uVar8 = (int)*(char *)(*(longlong *)(param_1 + 0x360) + (ulonglong)uVar9) + uVar9;
          goto LAB_144e2027e;
        }
        pcVar7 = param_2;
        do {
          cVar1 = *pcVar7;
          cVar2 = pcVar7[lVar6 - (longlong)param_2];
          if (cVar1 != cVar2) break;
          pcVar7 = pcVar7 + 1;
        } while (cVar2 != '\0');
        if (cVar1 == cVar2) {
          return uVar9;
        }
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 2;
    } while (uVar9 < uVar11);
  }
  return 0;
}



// FUNCTION 144e20340 FUN_144e20340 body=180 status=ok
// SIG undefined FUN_144e20340(void)

undefined8 FUN_144e20340(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  uint uVar4;
  
  if (*(ulonglong *)(param_2 + 0x108) < param_1 + 4U) {
    FUN_144b5b5a0(param_2,8);
  }
  uVar4 = (uint)CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3));
  if ((*(ulonglong *)(param_2 + 0x108) < (ulonglong)uVar4 + param_1) || (uVar4 < 0x106)) {
    FUN_144b5b5a0(param_2,8);
  }
  if (0 < *(int *)(param_2 + 0x110)) {
    pbVar3 = (byte *)(param_1 + 6);
    lVar2 = 0x100;
    do {
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      if (*(uint *)(param_2 + 0x120) <= (uint)bVar1) {
        FUN_144b5b5a0(param_2,0x10);
      }
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return 0;
}



// FUNCTION 144e20400 FUN_144e20400 body=207 status=ok
// SIG undefined FUN_144e20400(void)

short FUN_144e20400(longlong param_1,uint *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  short sVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  sVar3 = 0;
  uVar7 = *param_2 + 1;
  uVar5 = (uint)CONCAT11(*(undefined1 *)(lVar2 + 6),*(undefined1 *)(lVar2 + 7));
  uVar8 = (uint)CONCAT11(*(undefined1 *)(lVar2 + 8),*(undefined1 *)(lVar2 + 9));
  if (uVar7 < 0x10000) {
    uVar6 = uVar5;
    if (uVar5 <= uVar7) {
      uVar6 = uVar7;
    }
    uVar5 = uVar6 - uVar5;
    uVar7 = 0;
    if (uVar5 < uVar8) {
      puVar4 = (undefined1 *)((ulonglong)(uVar5 * 2) + lVar2 + 9);
      while( true ) {
        puVar1 = puVar4 + 1;
        puVar4 = puVar4 + 2;
        sVar3 = CONCAT11(*puVar1,*puVar4);
        uVar7 = uVar6;
        if (sVar3 != 0) break;
        if (0xfffe < uVar6) {
          return 0;
        }
        uVar6 = uVar6 + 1;
        uVar5 = uVar5 + 1;
        if (uVar8 <= uVar5) {
          *param_2 = 0;
          return 0;
        }
      }
    }
    *param_2 = uVar7;
  }
  return sVar3;
}



// FUNCTION 144e204d0 FUN_144e204d0 body=26 status=ok
// SIG undefined FUN_144e204d0(void)

void FUN_144e204d0(undefined8 param_1,undefined4 param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  FUN_144e244b0(param_1,local_res10,0);
  return;
}



// FUNCTION 144e204f0 FUN_144e204f0 body=90 status=ok
// SIG undefined FUN_144e204f0(void)

ulonglong FUN_144e204f0(longlong param_1,int *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  if ((*(char *)(param_1 + 0x28) != '\0') && (*(int *)(param_1 + 0x2c) == *param_2)) {
    FUN_144e243b0();
    if (*(char *)(param_1 + 0x28) != '\0') {
      uVar1 = *(uint *)(param_1 + 0x30);
      *param_2 = *(int *)(param_1 + 0x2c);
      return (ulonglong)uVar1;
    }
    return 0;
  }
  uVar2 = FUN_144e244b0(param_1,param_2,1);
  return uVar2;
}



// FUNCTION 144e20640 FUN_144e20640 body=53 status=ok
// SIG undefined FUN_144e20640(void)

void FUN_144e20640(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if ((*(longlong *)(param_1 + 0x38) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    FUN_144b56350();
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 144e20680 FUN_144e20680 body=508 status=ok
// SIG undefined FUN_144e20680(void)

undefined8 FUN_144e20680(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  
  if (*(ulonglong *)(param_2 + 0x108) < param_1 + 4U) {
    FUN_144b5b5a0(param_2,8);
  }
  uVar7 = (uint)CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3));
  puVar13 = (undefined1 *)((ulonglong)uVar7 + param_1);
  if ((*(undefined1 **)(param_2 + 0x108) < puVar13) || (uVar7 < 0x206)) {
    FUN_144b5b5a0(param_2,8);
  }
  lVar14 = 0x100;
  uVar7 = 0;
  puVar12 = (undefined1 *)(param_1 + 6);
  do {
    bVar2 = puVar12[1];
    puVar8 = puVar12 + 2;
    uVar3 = *puVar12;
    if ((1 < *(int *)(param_2 + 0x110)) && ((bVar2 & 7) != 0)) {
      FUN_144b5b5a0(param_2,8);
    }
    uVar11 = (uint)(ushort)(CONCAT11(uVar3,bVar2) >> 3);
    if (uVar11 <= uVar7) {
      uVar11 = uVar7;
    }
    uVar7 = uVar11;
    lVar14 = lVar14 + -1;
    puVar12 = puVar8;
  } while (lVar14 != 0);
  if (*(undefined1 **)(param_2 + 0x108) < puVar8 + (uVar7 * 8 + 8)) {
    FUN_144b5b5a0(param_2,8);
  }
  uVar15 = (ulonglong)(uVar7 + 1);
  do {
    uVar3 = puVar12[6];
    uVar11 = (uint)CONCAT11(puVar12[2],puVar12[3]);
    uVar4 = puVar12[4];
    uVar5 = puVar12[5];
    puVar9 = puVar12 + 8;
    uVar6 = puVar12[7];
    if (CONCAT11(puVar12[2],puVar12[3]) != 0) {
      if ((1 < *(int *)(param_2 + 0x110)) &&
         ((0xff < CONCAT11(*puVar12,puVar12[1]) || (0x100 - CONCAT11(*puVar12,puVar12[1]) < uVar11))
         )) {
        FUN_144b5b5a0(param_2,8);
      }
      if (CONCAT11(uVar3,uVar6) != 0) {
        if ((puVar9 + ((ulonglong)CONCAT11(uVar3,uVar6) - 2) < puVar8 + (uVar7 * 8 + 8)) ||
           (puVar13 < puVar9 + ((ulonglong)CONCAT11(uVar3,uVar6) - 2) + uVar11 * 2)) {
          FUN_144b5b5a0(param_2,9);
        }
        if (0 < *(int *)(param_2 + 0x110)) {
          puVar12 = puVar9 + uVar11 * 2;
          while (puVar9 < puVar12) {
            uVar3 = *puVar9;
            puVar10 = puVar9 + 2;
            puVar1 = puVar9 + 1;
            puVar9 = puVar10;
            if ((CONCAT11(uVar3,*puVar1) != 0) &&
               (*(uint *)(param_2 + 0x120) <=
                (uint)(ushort)(CONCAT11(uVar3,*puVar1) + CONCAT11(uVar4,uVar5)))) {
              FUN_144b5b5a0(param_2,0x10);
            }
          }
        }
      }
    }
    uVar15 = uVar15 - 1;
    puVar12 = puVar9;
  } while (uVar15 != 0);
  return 0;
}



// FUNCTION 144e20880 FUN_144e20880 body=805 status=ok
// SIG undefined FUN_144e20880(void)

undefined8 FUN_144e20880(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  uint uVar19;
  uint uVar20;
  
  if (*(ulonglong *)(param_2 + 0x108) < param_1 + 0x2010U) {
    FUN_144b5b5a0(param_2,8);
  }
  uVar11 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 4),*(undefined1 *)(param_1 + 5)),
                             *(undefined1 *)(param_1 + 6)),*(undefined1 *)(param_1 + 7));
  if (((uint)((int)*(undefined8 *)(param_2 + 0x108) - (int)param_1) < uVar11) || (uVar11 < 0x2010))
  {
    FUN_144b5b5a0(param_2,8);
  }
  puVar18 = (undefined1 *)(param_1 + 0x200c);
  puVar17 = (undefined1 *)(param_1 + 0x200d);
  puVar16 = (undefined1 *)(param_1 + 0x200e);
  puVar15 = (undefined1 *)(param_1 + 0x200f);
  uVar11 = CONCAT31(CONCAT21(CONCAT11(*puVar18,*(undefined1 *)(param_1 + 0x200d)),*puVar16),*puVar15
                   );
  if ((uint)((int)*(undefined8 *)(param_2 + 0x108) - ((int)param_1 + 0x2010)) / 0xc < uVar11) {
    FUN_144b5b5a0(param_2,8);
  }
  uVar13 = 0;
  uVar19 = 0;
  if (uVar11 != 0) {
    do {
      uVar3 = puVar17[4];
      uVar4 = puVar18[4];
      uVar5 = puVar18[8];
      puVar18 = puVar18 + 0xc;
      uVar6 = *puVar18;
      uVar12 = CONCAT31(CONCAT21(CONCAT11(uVar4,uVar3),puVar16[4]),puVar15[4]);
      uVar7 = puVar17[8];
      puVar17 = puVar17 + 0xc;
      puVar1 = puVar16 + 8;
      puVar16 = puVar16 + 0xc;
      puVar2 = puVar15 + 8;
      puVar15 = puVar15 + 0xc;
      uVar20 = CONCAT31(CONCAT21(CONCAT11(uVar5,uVar7),*puVar1),*puVar2);
      uVar8 = *puVar17;
      uVar9 = *puVar16;
      uVar10 = *puVar15;
      if (uVar20 < uVar12) {
        FUN_144b5b5a0(param_2,8);
      }
      if ((uVar19 != 0) && (uVar12 <= uVar13)) {
        FUN_144b5b5a0(param_2,8);
      }
      if (0 < *(int *)(param_2 + 0x110)) {
        uVar13 = uVar20 - uVar12;
        if ((*(uint *)(param_2 + 0x120) < uVar13) ||
           (*(uint *)(param_2 + 0x120) - uVar13 <=
            CONCAT31(CONCAT21(CONCAT11(uVar6,uVar8),uVar9),uVar10))) {
          FUN_144b5b5a0(param_2,0x10);
        }
        iVar14 = uVar13 + 1;
        if (CONCAT11(uVar4,uVar3) == 0) {
          if (CONCAT11(uVar5,uVar7) != 0) {
            FUN_144b5b5a0(param_2,8);
          }
          for (; iVar14 != 0; iVar14 = iVar14 + -1) {
            if ((*(byte *)((ulonglong)((uVar12 & 0xffff) >> 3) + 0xc + param_1) &
                (byte)(0x80 >> ((byte)(uVar12 & 0xffff) & 7))) != 0) {
              FUN_144b5b5a0(param_2,8);
            }
            uVar12 = uVar12 + 1;
          }
        }
        else {
          for (; iVar14 != 0; iVar14 = iVar14 + -1) {
            if ((*(byte *)((ulonglong)(uVar12 >> 0x13) + 0xc + param_1) &
                (byte)(0x80 >> ((byte)(uVar12 >> 0x10) & 7))) == 0) {
              FUN_144b5b5a0(param_2,8);
            }
            if ((*(byte *)((ulonglong)((uVar12 & 0xffff) >> 3) + 0xc + param_1) &
                (byte)(0x80 >> ((byte)(uVar12 & 0xffff) & 7))) == 0) {
              FUN_144b5b5a0(param_2,8);
            }
            uVar12 = uVar12 + 1;
          }
        }
      }
      uVar19 = uVar19 + 1;
      uVar13 = uVar20;
    } while (uVar19 < uVar11);
  }
  return 0;
}



// FUNCTION 144e20bf0 FUN_144e20bf0 body=1038 status=ok
// SIG undefined FUN_144e20bf0(void)

undefined8 FUN_144e20bf0(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined1 *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong local_58;
  
  if (*(ulonglong *)(param_2 + 0x108) < param_1 + 10U) {
    FUN_144b5b5a0(param_2,8);
  }
  puVar13 = (undefined1 *)(param_1 + 7);
  puVar12 = (undefined1 *)(param_1 + 8);
  puVar11 = (undefined1 *)(param_1 + 9);
  puVar17 = (undefined1 *)(param_1 + 6);
  uVar10 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3)),
                             *(undefined1 *)(param_1 + 4)),*(undefined1 *)(param_1 + 5));
  uVar5 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 6),*puVar13),*puVar12),*puVar11);
  if ((((uint)((int)*(undefined8 *)(param_2 + 0x108) - (int)param_1) < uVar10) || (uVar10 < 10)) ||
     ((uVar10 - 10) / 0xb < uVar5)) {
    FUN_144b5b5a0(param_2,8);
  }
  uVar16 = 1;
  if (uVar5 != 0) {
    local_58 = (ulonglong)uVar5;
    do {
      puVar9 = puVar17 + 7;
      puVar17 = puVar17 + 0xb;
      uVar8 = (uint)CONCAT21(CONCAT11(puVar13[3],puVar12[3]),puVar11[3]);
      puVar7 = puVar13 + 7;
      puVar13 = puVar13 + 0xb;
      puVar1 = puVar12 + 7;
      puVar12 = puVar12 + 0xb;
      puVar2 = puVar11 + 7;
      puVar11 = puVar11 + 0xb;
      uVar5 = CONCAT31(CONCAT21(CONCAT11(*puVar9,*puVar7),*puVar1),*puVar2);
      uVar14 = CONCAT31(CONCAT21(CONCAT11(*puVar17,*puVar13),*puVar12),*puVar11);
      if ((uVar10 <= uVar5) || (uVar10 <= uVar14)) {
        FUN_144b5b5a0(param_2,8);
      }
      if (uVar8 < uVar16) {
        FUN_144b5b5a0(param_2,8);
      }
      uVar16 = uVar8 + 1;
      if (uVar5 != 0) {
        uVar8 = 0;
        puVar9 = (undefined1 *)((ulonglong)uVar5 + 4 + param_1);
        if (*(undefined1 **)(param_2 + 0x108) < puVar9) {
          FUN_144b5b5a0(param_2,8);
        }
        uVar5 = CONCAT31(CONCAT21(CONCAT11(puVar9[-4],puVar9[-3]),puVar9[-2]),puVar9[-1]);
        if ((uint)((int)*(undefined8 *)(param_2 + 0x108) - (int)puVar9) >> 2 < uVar5) {
          FUN_144b5b5a0(param_2,8);
        }
        if (uVar5 != 0) {
          uVar18 = (ulonglong)uVar5;
          do {
            uVar5 = (uint)CONCAT21(CONCAT11(*puVar9,puVar9[1]),puVar9[2]);
            uVar6 = (byte)puVar9[3] + uVar5;
            if (0x10ffff < uVar6) {
              FUN_144b5b5a0(param_2,8);
            }
            if (uVar5 < uVar8) {
              FUN_144b5b5a0(param_2,8);
            }
            uVar8 = uVar6 + 1;
            uVar18 = uVar18 - 1;
            puVar9 = puVar9 + 4;
          } while (uVar18 != 0);
        }
      }
      if (uVar14 != 0) {
        uVar5 = 0;
        uVar18 = (ulonglong)uVar14 + 4 + param_1;
        if (*(ulonglong *)(param_2 + 0x108) < uVar18) {
          FUN_144b5b5a0(param_2,8);
        }
        lVar19 = uVar18 - 3;
        puVar9 = (undefined1 *)(uVar18 - 2);
        uVar8 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(uVar18 - 4),*(undefined1 *)(uVar18 - 3)),
                                  *puVar9),*(undefined1 *)(uVar18 - 1));
        if ((uint)((int)*(undefined8 *)(param_2 + 0x108) - (int)uVar18) / 5 < uVar8) {
          FUN_144b5b5a0(param_2,8);
        }
        if (uVar8 != 0) {
          uVar15 = (ulonglong)uVar8;
          puVar7 = (undefined1 *)(uVar18 - 1);
          do {
            puVar1 = puVar9 + 3;
            puVar9 = puVar9 + 5;
            puVar2 = (undefined1 *)(lVar19 + 3);
            uVar3 = *puVar9;
            lVar19 = lVar19 + 5;
            uVar8 = (uint)CONCAT21(CONCAT11(*puVar2,*puVar1),puVar7[3]);
            uVar4 = puVar7[5];
            if (0x10ffff < uVar8) {
              FUN_144b5b5a0(param_2,8);
            }
            if (uVar8 < uVar5) {
              FUN_144b5b5a0(param_2,8);
            }
            uVar5 = uVar8 + 1;
            if ((0 < *(int *)(param_2 + 0x110)) &&
               (*(uint *)(param_2 + 0x120) <= (uint)CONCAT11(uVar3,uVar4))) {
              FUN_144b5b5a0(param_2,0x10);
            }
            uVar15 = uVar15 - 1;
            puVar7 = puVar7 + 5;
          } while (uVar15 != 0);
        }
      }
      local_58 = local_58 - 1;
    } while (local_58 != 0);
  }
  return 0;
}



// FUNCTION 144e21000 FUN_144e21000 body=201 status=ok
// SIG undefined FUN_144e21000(void)

undefined8 FUN_144e21000(longlong param_1,short param_2,int *param_3,int *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  
  *param_3 = -1;
  *param_4 = -1;
  iVar4 = 0;
  if (*(short *)(param_1 + 0x1d0) != 0) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x1e8);
      if ((*(short *)(lVar3 + 6 + lVar1) == param_2) && (*(short *)(lVar3 + 8 + lVar1) != 0)) {
        if (((*(short *)(lVar3 + lVar1) == 3) && (*(ushort *)(lVar3 + 2 + lVar1) < 2)) &&
           ((*(short *)(lVar3 + 4 + lVar1) == 0x409 || (*param_3 == -1)))) {
          *param_3 = iVar4;
        }
        if (((*(short *)(lVar3 + lVar1) == 1) && (*(short *)(lVar3 + 2 + lVar1) == 0)) &&
           ((*(short *)(lVar3 + 4 + lVar1) == 0 || (*param_4 == -1)))) {
          *param_4 = iVar4;
        }
      }
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + 0x18;
    } while (iVar4 < (int)(uint)*(ushort *)(param_1 + 0x1d0));
  }
  if ((-1 < *param_3) || (uVar2 = 0, -1 < *param_4)) {
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 144e210d0 FUN_144e210d0 body=287 status=ok
// SIG undefined FUN_144e210d0(void)

int FUN_144e210d0(longlong param_1,uint param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  puVar6 = (undefined1 *)(lVar3 + 0x200c);
  iVar4 = CONCAT31(CONCAT21(CONCAT11(*puVar6,*(undefined1 *)(lVar3 + 0x200d)),
                            *(undefined1 *)(lVar3 + 0x200e)),*(undefined1 *)(lVar3 + 0x200f));
  puVar5 = (undefined1 *)(lVar3 + 0x200f);
  puVar7 = (undefined1 *)(lVar3 + 0x200d);
  puVar8 = (undefined1 *)(lVar3 + 0x200e);
  if (iVar4 != 0) {
    while( true ) {
      puVar1 = puVar6 + 4;
      puVar2 = puVar6 + 8;
      puVar6 = puVar6 + 0xc;
      uVar9 = CONCAT31(CONCAT21(CONCAT11(*puVar1,puVar7[4]),puVar8[4]),puVar5[4]);
      uVar10 = CONCAT31(CONCAT21(CONCAT11(*puVar6,puVar7[0xc]),puVar8[0xc]),puVar5[0xc]);
      if (param_2 < uVar9) break;
      if (param_2 <= CONCAT31(CONCAT21(CONCAT11(*puVar2,puVar7[8]),puVar8[8]),puVar5[8])) {
        if (uVar10 <= (uVar9 - param_2) - 1) {
          return (uVar10 - uVar9) + param_2;
        }
        return 0;
      }
      iVar4 = iVar4 + -1;
      puVar5 = puVar5 + 0xc;
      puVar7 = puVar7 + 0xc;
      puVar8 = puVar8 + 0xc;
      if (iVar4 == 0) {
        return 0;
      }
    }
  }
  return 0;
}



// FUNCTION 144e212e0 FUN_144e212e0 body=402 status=ok
// SIG undefined FUN_144e212e0(void)

uint FUN_144e212e0(longlong *param_1,uint *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  
  lVar3 = param_1[3];
  uVar10 = 0;
  iVar12 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar3 + 0x200c),
                                      *(undefined1 *)(lVar3 + 0x200d)),
                             *(undefined1 *)(lVar3 + 0x200e)),*(undefined1 *)(lVar3 + 0x200f));
  if (*param_2 == 0xffffffff) {
    return 0;
  }
  uVar4 = *param_2 + 1;
  uVar6 = 0;
  if (iVar12 != 0) {
    puVar13 = (undefined1 *)(lVar3 + 0x200c);
    puVar7 = (undefined1 *)(lVar3 + 0x200d);
    puVar8 = (undefined1 *)(lVar3 + 0x200e);
    puVar9 = (undefined1 *)(lVar3 + 0x200f);
    do {
      puVar1 = puVar13 + 4;
      puVar2 = puVar13 + 8;
      puVar13 = puVar13 + 0xc;
      uVar5 = CONCAT31(CONCAT21(CONCAT11(*puVar1,puVar7[4]),puVar8[4]),puVar9[4]);
      uVar11 = CONCAT31(CONCAT21(CONCAT11(*puVar13,puVar7[0xc]),puVar8[0xc]),puVar9[0xc]);
      uVar6 = uVar5;
      if (uVar5 <= uVar4) {
        uVar6 = uVar4;
      }
      while( true ) {
        uVar4 = uVar6;
        if ((CONCAT31(CONCAT21(CONCAT11(*puVar2,puVar7[8]),puVar8[8]),puVar9[8]) < uVar4) ||
           ((uVar5 - uVar4) - 1 < uVar11)) goto LAB_144e2143d;
        uVar10 = (uVar11 - uVar5) + uVar4;
        if (uVar10 != 0) break;
        uVar6 = 0;
        if (uVar4 == 0xffffffff) goto LAB_144e21463;
        uVar6 = uVar4 + 1;
      }
      uVar6 = uVar4;
      if (uVar10 < *(uint *)(*param_1 + 0x10)) break;
      uVar10 = 0;
LAB_144e2143d:
      iVar12 = iVar12 + -1;
      puVar7 = puVar7 + 0xc;
      puVar8 = puVar8 + 0xc;
      puVar9 = puVar9 + 0xc;
      uVar6 = 0;
    } while (iVar12 != 0);
  }
LAB_144e21463:
  *param_2 = uVar6;
  return uVar10;
}



// FUNCTION 144e21480 FUN_144e21480 body=444 status=ok
// SIG undefined FUN_144e21480(void)

short FUN_144e21480(longlong param_1,uint *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  short sVar11;
  uint uVar12;
  bool bVar13;
  
  sVar11 = 0;
  lVar2 = *(longlong *)(param_1 + 0x18);
  uVar4 = *param_2 + 1;
  if (0xffff < uVar4) {
    *param_2 = 0;
    return 0;
  }
LAB_144e214b0:
  if (0xffff < uVar4) goto LAB_144e21601;
  do {
    puVar8 = (undefined1 *)(lVar2 + 0x206);
    if (uVar4 >> 8 == 0) {
      uVar5 = (ulonglong)((uVar4 & 0xff) * 2);
      if (CONCAT11(*(undefined1 *)(lVar2 + 6 + uVar5),*(undefined1 *)(lVar2 + 7 + uVar5)) == 0) {
LAB_144e21510:
        if (puVar8 != (undefined1 *)0x0) {
          uVar7 = (uint)CONCAT11(*puVar8,puVar8[1]);
          uVar12 = (uint)CONCAT11(puVar8[2],puVar8[3]);
          uVar6 = uVar4 & 0xff;
          if ((uVar12 + uVar7 <= uVar6) && (uVar4 < 0x100)) break;
          if (CONCAT11(puVar8[6],puVar8[7]) == 0) {
            if (uVar4 == 0x100) goto LAB_144e21585;
          }
          else {
            uVar3 = uVar7;
            uVar10 = 0;
            if (uVar7 <= uVar6) {
              uVar3 = uVar6;
              uVar10 = uVar6 - uVar7;
            }
            uVar4 = (uVar4 & 0xffffff00) + uVar3;
            if (uVar10 < uVar12) {
              puVar9 = puVar8 + (ulonglong)((uint)CONCAT11(puVar8[6],puVar8[7]) + uVar10 * 2) + 5;
              do {
                puVar1 = puVar9 + 1;
                puVar9 = puVar9 + 2;
                if ((CONCAT11(*puVar1,*puVar9) != 0) &&
                   (sVar11 = CONCAT11(*puVar1,*puVar9) + CONCAT11(puVar8[4],puVar8[5]), sVar11 != 0)
                   ) {
                  *param_2 = uVar4;
                  return sVar11;
                }
                uVar10 = uVar10 + 1;
                uVar4 = uVar4 + 1;
              } while (uVar10 < uVar12);
            }
            if (CONCAT11(puVar8[2],puVar8[3]) != 0) {
              uVar4 = uVar4 - 1;
            }
          }
        }
      }
    }
    else {
      uVar5 = (ulonglong)((uVar4 >> 8) * 2);
      bVar13 = puVar8 + ((ulonglong)
                         CONCAT11(*(undefined1 *)(lVar2 + 6 + uVar5),
                                  *(undefined1 *)(lVar2 + 7 + uVar5)) & 0xfffffffffffffff8) !=
               puVar8;
      puVar8 = puVar8 + ((ulonglong)
                         CONCAT11(*(undefined1 *)(lVar2 + 6 + uVar5),
                                  *(undefined1 *)(lVar2 + 7 + uVar5)) & 0xfffffffffffffff8);
      if (bVar13) goto LAB_144e21510;
    }
LAB_144e21601:
    if (uVar4 < 0x100) {
      uVar4 = uVar4 + 1;
    }
    else {
      uVar4 = (uVar4 & 0xffffff00) + 0x100;
    }
    if (0xffff < uVar4) {
LAB_144e21585:
      *param_2 = 0;
      return sVar11;
    }
  } while( true );
  uVar4 = 0x100;
  goto LAB_144e214b0;
}



// FUNCTION 144e21670 FUN_144e21670 body=1088 status=ok
// SIG undefined FUN_144e21670(void)

int FUN_144e21670(longlong param_1,int param_2,int param_3,int param_4,ushort *param_5,
                 undefined8 param_6,undefined8 param_7,undefined4 param_8,char param_9,char param_10
                 )

{
  uint *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  code *pcVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 auStack_108 [32];
  int *local_e8;
  uint *local_e0;
  int *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  uint local_b8 [2];
  longlong local_b0;
  uint local_a8;
  uint local_a4;
  int local_a0 [2];
  longlong local_98;
  int local_90;
  uint local_8c;
  uint *local_88;
  undefined1 local_78 [80];
  
  local_88 = (uint *)(param_1 + 0x68);
  iVar6 = 0;
  local_b8[0] = 0;
  if (((param_2 < 0) || (param_3 < 0)) ||
     ((param_9 == '\0' &&
      ((((*(uint *)(param_1 + 0x6c) < (uint)param_5[1] + param_2 ||
         (*local_88 < (uint)*param_5 + param_3)) || (param_4 != 0x20)) ||
       (*(char *)(param_1 + 0x82) != '\a')))))) {
    return 6;
  }
  FUN_144b59760(local_78,param_7,param_8);
  local_b0 = png_create_read_struct("1.5.2",local_b8,FUN_144e21bb0,&DAT_144e21bf0);
  if (local_b0 == 0) {
    return 0x40;
  }
  local_98 = png_create_info_struct(local_b0);
  if (local_98 == 0) {
    local_b8[0] = 0x40;
    png_destroy_read_struct(&local_b0,0,0);
    return local_b8[0];
  }
  uVar3 = png_set_longjmp_fn(local_b0,longjmp,0x100);
  iVar2 = __intrinsic_setjmp(uVar3,auStack_108);
  if (iVar2 == 0) {
    png_set_read_fn(local_b0,local_78,FUN_144e21c00);
    png_read_info(local_b0,local_98);
    local_d8 = &local_90;
    local_c8 = 0;
    local_d0 = 0;
    local_e0 = &local_a8;
    local_e8 = local_a0;
    png_get_IHDR(local_b0,local_98,&local_8c,&local_a4);
    puVar1 = local_88;
    if (local_b8[0] != 0) goto LAB_144e21a71;
    if ((param_9 == '\0') && ((local_8c != param_5[1] || (local_a4 != *param_5))))
    goto LAB_144e21a71;
    if (param_9 != '\0') {
      *param_5 = (ushort)local_a4;
      param_5[1] = (ushort)local_8c;
      local_88[1] = local_8c & 0xffff;
      *local_88 = (uint)*param_5;
      *(undefined1 *)((longlong)local_88 + 0x1a) = 7;
      local_88[2] = local_88[1] << 2;
      *(undefined2 *)(local_88 + 6) = 0x100;
      if ((0x7fff < *local_88) || (0x7fff < local_88[1])) {
        local_b8[0] = 10;
        goto LAB_144e21a71;
      }
    }
    if (local_a8 == 3) {
      png_set_palette_to_rgb(local_b0);
    }
    if (local_a8 == 0) {
      png_set_expand_gray_1_2_4_to_8(local_b0);
    }
    iVar2 = png_get_valid(local_b0,local_98,0x10);
    if (iVar2 != 0) {
      png_set_tRNS_to_alpha(local_b0);
    }
    if (local_a0[0] == 0x10) {
      png_set_strip_16(local_b0);
    }
    if (local_a0[0] < 8) {
      png_set_packing(local_b0);
    }
    if ((local_a8 & 0xfffffffb) == 0) {
      png_set_gray_to_rgb(local_b0);
    }
    if (local_90 != 0) {
      png_set_interlace_handling(local_b0);
    }
    png_set_filler(local_b0,0xff,1);
    png_read_update_info(local_b0,local_98);
    local_d8 = &local_90;
    local_c8 = 0;
    local_d0 = 0;
    local_e0 = &local_a8;
    local_e8 = local_a0;
    png_get_IHDR(local_b0,local_98,&local_8c,&local_a4);
    if ((local_a0[0] == 8) && ((local_a8 - 2 & 0xfffffffb) == 0)) {
      if (param_10 == '\0') {
        pcVar5 = FUN_144e21ab0;
        if (local_a8 == 2) {
          pcVar5 = (code *)&LAB_144e21b70;
        }
        png_set_read_user_transform_fn(local_b0,pcVar5);
        if (param_9 != '\0') {
          local_b8[0] = FUN_144b58670(param_1,puVar1[2] * *puVar1);
          if (local_b8[0] != 0) goto LAB_144e21a71;
        }
        local_e0 = local_b8;
        local_e8 = (int *)0x0;
        plVar4 = (longlong *)FUN_144b561b0(param_6,8,0,local_a4);
        if (local_b8[0] == 0) {
          if (0 < (int)local_a4) {
            plVar7 = plVar4;
            do {
              iVar2 = iVar6 + param_3;
              iVar6 = iVar6 + 1;
              *plVar7 = (longlong)(int)(iVar2 * puVar1[2]) + *(longlong *)(puVar1 + 4) +
                        (longlong)(param_2 * 4);
              plVar7 = plVar7 + 1;
            } while (iVar6 < (int)local_a4);
          }
          png_read_image(local_b0,plVar4);
          FUN_144b56350(param_6,plVar4);
          png_read_end(local_b0,local_98);
        }
        else {
          local_b8[0] = 0x40;
        }
      }
      goto LAB_144e21a71;
    }
  }
  local_b8[0] = 3;
LAB_144e21a71:
  png_destroy_read_struct(&local_b0,&local_98,0);
  FUN_144b59780(local_78);
  return local_b8[0];
}



// FUNCTION 144e21ab0 FUN_144e21ab0 body=178 status=ok
// SIG undefined FUN_144e21ab0(void)

void FUN_144e21ab0(undefined8 param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  ulonglong uVar5;
  byte bVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  byte bVar10;
  
  uVar2 = *(uint *)(param_2 + 8);
  uVar5 = 0;
  if (uVar2 != 0) {
    do {
      pbVar3 = (byte *)(uVar5 + param_3);
      bVar1 = pbVar3[3];
      if (bVar1 == 0) {
        pbVar3[0] = 0;
        pbVar3[1] = 0;
        pbVar3[2] = 0;
        pbVar3[3] = 0;
      }
      else {
        bVar6 = *pbVar3;
        bVar8 = pbVar3[1];
        bVar10 = pbVar3[2];
        uVar4 = (uint)bVar1;
        if (uVar4 != 0xff) {
          uVar7 = bVar6 * uVar4 + 0x80;
          uVar9 = bVar8 * uVar4 + 0x80;
          uVar4 = bVar10 * uVar4 + 0x80;
          bVar6 = (byte)((uVar7 >> 8) + uVar7 >> 8);
          bVar8 = (byte)((uVar9 >> 8) + uVar9 >> 8);
          bVar10 = (byte)((uVar4 >> 8) + uVar4 >> 8);
        }
        *pbVar3 = bVar10;
        pbVar3[1] = bVar8;
        pbVar3[2] = bVar6;
        pbVar3[3] = bVar1;
      }
      uVar4 = (int)uVar5 + 4;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < uVar2);
  }
  return;
}



// FUNCTION 144e21bb0 FUN_144e21bb0 body=54 status=ok
// SIG undefined FUN_144e21bb0(void)

void FUN_144e21bb0(undefined8 param_1)

{
  undefined4 *puVar1;
  _JBTYPE *_Buf;
  
  puVar1 = (undefined4 *)png_get_error_ptr();
  *puVar1 = 0x40;
  _Buf = (_JBTYPE *)png_set_longjmp_fn(param_1,longjmp,0x100);
                    /* WARNING: Subroutine does not return */
  longjmp(_Buf,1);
}



// FUNCTION 144e21c00 FUN_144e21c00 body=119 status=ok
// SIG undefined FUN_144e21c00(void)

void FUN_144e21c00(undefined8 param_1,void *param_2,ulonglong param_3)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  
  lVar3 = png_get_io_ptr();
  iVar2 = FUN_144b59990(lVar3,param_3 & 0xffffffff);
  if (iVar2 == 0) {
    memcpy(param_2,*(void **)(lVar3 + 0x38),param_3);
    FUN_144b59ab0(lVar3);
    return;
  }
  puVar4 = (undefined4 *)png_get_error_ptr(param_1);
  *puVar4 = 0x54;
  png_error(param_1,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 144e21c80 FUN_144e21c80 body=702 status=ok
// SIG undefined FUN_144e21c80(void)

void FUN_144e21c80(longlong param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 auStack_1e8 [32];
  undefined1 *local_1c8;
  uint local_1c0;
  undefined **local_1b8;
  undefined4 local_1b0;
  undefined1 *local_1a8;
  uint local_1a0;
  undefined1 *local_198;
  longlong local_190;
  undefined *local_188;
  longlong local_180;
  undefined4 local_178;
  undefined2 local_174;
  undefined2 local_172;
  uint local_170;
  undefined1 *local_168;
  longlong local_160;
  undefined8 local_158;
  undefined1 local_148 [276];
  int local_34;
  uint local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_168 = *(undefined1 **)(param_1 + 0x290);
  local_198 = local_168 + *(uint *)(param_1 + 0x298);
  local_158 = *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 8);
  local_1c8 = local_168;
  local_190 = param_1;
  if (((local_168 != (undefined1 *)0x0) && (local_168 + 4 <= local_198)) &&
     (local_1c8 = local_168 + 2, CONCAT11(*local_168,local_168[1]) == 0)) {
    local_1c0 = (uint)CONCAT11(local_168[2],local_168[3]);
    puVar1 = local_168 + 4;
    while ((local_1c8 = puVar1, local_1c0 != 0 && (puVar1 + 8 <= local_198))) {
      local_174 = CONCAT11(*puVar1,puVar1[1]);
      local_172 = CONCAT11(puVar1[2],puVar1[3]);
      local_178 = 0;
      local_1c8 = puVar1 + 8;
      local_170 = CONCAT31(CONCAT21(CONCAT11(puVar1[4],puVar1[5]),puVar1[6]),puVar1[7]);
      local_180 = local_190;
      if ((local_170 != 0) && (local_170 <= *(int *)(local_190 + 0x298) - 2U)) {
        local_1a8 = local_168 + local_170;
        local_1a0 = (uint)CONCAT11(*local_1a8,local_1a8[1]);
        local_1b8 = &PTR_DAT_149a1dc60;
        do {
          local_188 = *local_1b8;
          if (*(uint *)(local_188 + 0x50) == local_1a0) {
            local_1b0 = 0;
            FUN_144b5b580(local_148,local_1a8,local_198,0);
            local_28 = (uint)*(ushort *)(local_190 + 0x174);
            iVar2 = __intrinsic_setjmp(local_148,auStack_1e8);
            if (iVar2 == 0) {
              local_1b0 = (**(code **)(local_188 + 0x58))(local_1a8,local_148);
            }
            if ((local_34 == 0) &&
               (iVar2 = FUN_144b57870(local_188,local_1a8,&local_180), iVar2 == 0)) {
              *(undefined4 *)(local_160 + 0x20) = local_1b0;
            }
            break;
          }
          local_1b8 = local_1b8 + 1;
        } while (*local_1b8 != (undefined *)0x0);
      }
      local_1c0 = local_1c0 - 1;
      puVar1 = local_1c8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_1e8);
}



// FUNCTION 144e21fc0 FUN_144e21fc0 body=710 status=ok
// SIG undefined FUN_144e21fc0(void)

void FUN_144e21fc0(longlong param_1,uint param_2,uint param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  longlong lVar9;
  uint uVar10;
  
  iVar1 = (int)(param_2 + ((int)param_2 >> 0x1f & 0xfU)) >> 4;
  pbVar8 = (byte *)((iVar1 << 4) + param_1);
  iVar1 = -iVar1;
  uVar3 = param_3;
  uVar4 = param_3;
  uVar5 = param_3;
  if (iVar1 != 0) {
    lVar9 = -(longlong)iVar1;
    pbVar7 = pbVar8 + (longlong)iVar1 * 0x10 + 8;
    do {
      param_3 = (*(int *)(pbVar7 + -8) * -0x34f28000 |
                (uint)(*(int *)(pbVar7 + -8) * 0x239b961b) >> 0x11) * -0x54f16877 ^ param_3;
      param_3 = ((param_3 >> 0xd | param_3 << 0x13) + uVar3) * 5 + 0x561ccd1b;
      uVar3 = (*(int *)(pbVar7 + -4) * -0x68770000 |
              (uint)(*(int *)(pbVar7 + -4) * -0x54f16877) >> 0x10) * 0x38b34ae5 ^ uVar3;
      uVar3 = ((uVar3 >> 0xf | uVar3 << 0x11) + uVar4) * 5 + 0xbcaa747;
      uVar4 = ((uint)(*(int *)pbVar7 * 0x38b34ae5) >> 0xf | *(int *)pbVar7 * -0x6a360000) *
              -0x5e1c746d ^ uVar4;
      uVar4 = ((uVar4 << 0xf | uVar4 >> 0x11) + 0xeaf5d271 + uVar5) * 5;
      uVar5 = ((uint)(*(int *)(pbVar7 + 4) * -0x5e1c746d) >> 0xe | *(int *)(pbVar7 + 4) * 0x2e4c0000
              ) * 0x239b961b ^ uVar5;
      uVar5 = ((uVar5 << 0xd | uVar5 >> 0x13) + param_3) * 5 + 0x32ac3b17;
      lVar9 = lVar9 + -1;
      pbVar7 = pbVar7 + 0x10;
    } while (lVar9 != 0);
  }
  uVar2 = 0;
  switch(param_2 & 0xf) {
  case 0xf:
    uVar2 = (uint)pbVar8[0xe] << 0x10;
  case 0xe:
    uVar2 = uVar2 ^ (uint)pbVar8[0xd] << 8;
  case 0xd:
    uVar5 = uVar5 ^ ((pbVar8[0xc] ^ uVar2) * -0x5e1c746d >> 0xe | (pbVar8[0xc] ^ uVar2) * 0x2e4c0000
                    ) * 0x239b961b;
  case 0xc:
    uVar2 = (uint)pbVar8[0xb] << 0x18;
  case 0xb:
    uVar2 = uVar2 ^ (uint)pbVar8[10] << 0x10;
  case 10:
    uVar2 = uVar2 ^ (uint)pbVar8[9] << 8;
  case 9:
    uVar4 = uVar4 ^ ((pbVar8[8] ^ uVar2) * 0x38b34ae5 >> 0xf | (pbVar8[8] ^ uVar2) * -0x6a360000) *
                    -0x5e1c746d;
  case 8:
    uVar2 = (uint)pbVar8[7] << 0x18;
  case 7:
    uVar2 = uVar2 ^ (uint)pbVar8[6] << 0x10;
  case 6:
    uVar2 = uVar2 ^ (uint)pbVar8[5] << 8;
  case 5:
    uVar3 = uVar3 ^ ((pbVar8[4] ^ uVar2) * -0x68770000 | (pbVar8[4] ^ uVar2) * -0x54f16877 >> 0x10)
                    * 0x38b34ae5;
  case 4:
    uVar2 = (uint)pbVar8[3] << 0x18;
  case 3:
    uVar2 = uVar2 ^ (uint)pbVar8[2] << 0x10;
  case 2:
    uVar2 = uVar2 ^ (uint)pbVar8[1] << 8;
  case 1:
    param_3 = param_3 ^ ((*pbVar8 ^ uVar2) * -0x34f28000 | (*pbVar8 ^ uVar2) * 0x239b961b >> 0x11) *
                        -0x54f16877;
  default:
    uVar2 = (param_3 ^ param_2) + (uVar5 ^ param_2) + (uVar4 ^ param_2) + (uVar3 ^ param_2);
    uVar6 = (uVar2 >> 0x10 ^ uVar2) * -0x7a143595;
    uVar10 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    uVar3 = (uVar3 ^ param_2) + uVar2;
    uVar3 = (uVar3 >> 0x10 ^ uVar3) * -0x7a143595;
    uVar6 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar6 = uVar6 >> 0x10 ^ uVar6;
    uVar3 = (uVar4 ^ param_2) + uVar2;
    uVar3 = (uVar3 >> 0x10 ^ uVar3) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar3 = uVar3 >> 0x10 ^ uVar3;
    uVar2 = (uVar5 ^ param_2) + uVar2;
    uVar5 = (uVar2 >> 0x10 ^ uVar2) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    uVar5 = uVar5 >> 0x10 ^ uVar5;
    iVar1 = (uVar10 >> 0x10 ^ uVar10) + uVar5 + uVar3 + uVar6;
    *param_4 = iVar1;
    param_4[1] = uVar6 + iVar1;
    param_4[2] = uVar3 + iVar1;
    param_4[3] = uVar5 + iVar1;
    return;
  }
}



// FUNCTION 144e222d0 FUN_144e222d0 body=278 status=ok
// SIG undefined FUN_144e222d0(void)

char * FUN_144e222d0(undefined8 param_1,longlong param_2,longlong param_3,code *param_4)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  int local_res18 [2];
  
  local_res18[0] = 0;
  pcVar3 = (char *)FUN_144b560d0(param_1,(*(ushort *)(param_3 + 8) >> 1) + 1,local_res18);
  if (local_res18[0] == 0) {
    local_res18[0] = FUN_144b597a0(param_2,*(undefined4 *)(param_3 + 0xc));
    if ((local_res18[0] == 0) &&
       (local_res18[0] = FUN_144b59990(param_2,*(undefined2 *)(param_3 + 8)), local_res18[0] == 0))
    {
      pcVar4 = *(char **)(param_2 + 0x38);
      uVar6 = (uint)(*(ushort *)(param_3 + 8) >> 1);
      pcVar5 = pcVar3;
      while (((uVar6 != 0 && (*pcVar4 == '\0')) && (iVar2 = (*param_4)((int)pcVar4[1]), iVar2 != 0))
            ) {
        pcVar1 = pcVar4 + 1;
        pcVar4 = pcVar4 + 2;
        *pcVar5 = *pcVar1;
        pcVar5 = pcVar5 + 1;
        uVar6 = uVar6 - 1;
      }
      if (uVar6 == 0) {
        *pcVar5 = '\0';
      }
      FUN_144b59ab0(param_2);
      if (uVar6 == 0) {
        return pcVar3;
      }
    }
    FUN_144b56350(param_1,pcVar3);
    *(undefined2 *)(param_3 + 8) = 0;
    *(undefined4 *)(param_3 + 0xc) = 0;
    FUN_144b56350(param_1,*(undefined8 *)(param_3 + 0x10));
    *(undefined8 *)(param_3 + 0x10) = 0;
  }
  return (char *)0x0;
}



// FUNCTION 144e223f0 FUN_144e223f0 body=263 status=ok
// SIG undefined FUN_144e223f0(void)

char * FUN_144e223f0(undefined8 param_1,longlong param_2,longlong param_3,code *param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  int local_res18 [2];
  
  local_res18[0] = 0;
  pcVar3 = (char *)FUN_144b560d0(param_1,*(ushort *)(param_3 + 8) + 1,local_res18);
  if (local_res18[0] == 0) {
    local_res18[0] = FUN_144b597a0(param_2,*(undefined4 *)(param_3 + 0xc));
    if ((local_res18[0] == 0) &&
       (local_res18[0] = FUN_144b59990(param_2,*(undefined2 *)(param_3 + 8)), local_res18[0] == 0))
    {
      uVar4 = (uint)*(ushort *)(param_3 + 8);
      pcVar6 = *(char **)(param_2 + 0x38);
      pcVar5 = pcVar3;
      if (*(ushort *)(param_3 + 8) != 0) {
        do {
          iVar2 = (*param_4)((int)*pcVar6);
          if (iVar2 == 0) break;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          *pcVar5 = cVar1;
          pcVar5 = pcVar5 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      if (uVar4 == 0) {
        *pcVar5 = '\0';
      }
      FUN_144b59ab0(param_2);
      if (uVar4 == 0) {
        return pcVar3;
      }
    }
    FUN_144b56350(param_1,pcVar3);
    *(undefined4 *)(param_3 + 0xc) = 0;
    *(undefined2 *)(param_3 + 8) = 0;
    FUN_144b56350(param_1,*(undefined8 *)(param_3 + 0x10));
    *(undefined8 *)(param_3 + 0x10) = 0;
  }
  return (char *)0x0;
}



// FUNCTION 144e22500 FUN_144e22500 body=388 status=ok
// SIG undefined FUN_144e22500(void)

void FUN_144e22500(uint param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  bool bVar8;
  byte local_18 [8];
  ulonglong local_10;
  
  pbVar6 = local_18;
  local_10 = DAT_14c707940 ^ (ulonglong)local_18;
  if (param_1 == 0) {
    *param_2 = 0x30;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)local_18);
  }
  pbVar4 = param_2;
  if ((int)param_1 < 0) {
    pbVar4 = param_2 + 1;
    *param_2 = 0x2d;
    param_1 = -param_1;
  }
  uVar7 = (int)param_1 >> 0x10 & 0xffff;
  if (uVar7 != 0) {
    do {
      uVar3 = (int)uVar7 / 10;
      *pbVar6 = (char)uVar7 + (char)uVar3 * -10 + '0';
      pbVar6 = pbVar6 + 1;
      uVar7 = uVar3;
    } while (0 < (int)uVar3);
    if (local_18 < pbVar6) {
      do {
        pbVar1 = pbVar6 + -1;
        pbVar6 = pbVar6 + -1;
        *pbVar4 = *pbVar1;
        pbVar4 = pbVar4 + 1;
      } while (local_18 < pbVar6);
    }
  }
  if ((param_1 & 0xffff) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)local_18);
  }
  *pbVar4 = 0x2e;
  iVar5 = 0;
  uVar7 = (param_1 & 0xffff) * 10 + 5;
  pbVar6 = pbVar4;
  do {
    pbVar6 = pbVar6 + 1;
    uVar3 = uVar7 & 0xffff;
    *pbVar6 = (char)(uVar7 >> 0x10) + 0x30;
    uVar7 = 0;
    if (uVar3 == 0) break;
    iVar5 = iVar5 + 1;
    uVar7 = uVar3 * 10;
  } while (iVar5 < 5);
  if ((longlong)pbVar6 - (longlong)pbVar4 == 5) {
    if ((uVar7 < 0x542e0) && (*pbVar6 == 0x31)) {
      *pbVar6 = 0x30;
    }
    else {
      if (uVar7 == 0x2a120) {
        bVar2 = *pbVar6;
        bVar8 = (bVar2 & 1) == 0;
      }
      else {
        if (0x2a11f < uVar7) goto LAB_144e22661;
        bVar2 = *pbVar6;
        bVar8 = bVar2 == 0x30;
      }
      if (!bVar8) {
        *pbVar6 = bVar2 - 1;
      }
    }
  }
LAB_144e22661:
  bVar2 = *pbVar6;
  while (bVar2 == 0x30) {
    *pbVar6 = 0;
    pbVar6 = pbVar6 + -1;
    bVar2 = *pbVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)local_18);
}



// FUNCTION 144e226a0 FUN_144e226a0 body=1637 status=ok
// SIG undefined FUN_144e226a0(void)

void FUN_144e226a0(longlong param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  short *psVar6;
  longlong lVar7;
  longlong lVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  char *pcVar14;
  uint uVar15;
  longlong lVar16;
  char *pcVar17;
  int iVar18;
  uint *puVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  undefined1 auStack_98 [32];
  longlong *local_78;
  int local_68;
  uint local_64;
  char *local_60;
  int *local_58;
  longlong local_50;
  char *local_48;
  undefined1 local_40 [12];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  lVar16 = -1;
  lVar21 = *(longlong *)(param_1 + 0x2e0);
  uVar22 = 0;
  bVar4 = false;
  if (*(longlong *)(param_1 + 0x420) == 0) {
    uVar1 = *(ushort *)(param_1 + 0x1d0);
    bVar3 = true;
    uVar15 = 0xffffffff;
    uVar12 = 0xffffffff;
    uVar20 = (uint)uVar1;
    bVar5 = bVar4;
    if (uVar1 != 0) {
      psVar6 = *(short **)(param_1 + 0x1e8);
      uVar10 = uVar22;
      do {
        if ((psVar6[3] == 0x19) && (psVar6[4] != 0)) {
          if (((*psVar6 == 3) && ((ushort)psVar6[1] < 2)) &&
             ((psVar6[2] == 0x409 || (uVar12 == 0xffffffff)))) {
            uVar12 = uVar10;
          }
          if (((*psVar6 == 1) && (psVar6[1] == 0)) && ((psVar6[2] == 0 || (uVar15 == 0xffffffff))))
          {
            uVar15 = uVar10;
          }
        }
        uVar10 = uVar10 + 1;
        psVar6 = psVar6 + 0xc;
      } while ((int)uVar10 < (int)uVar20);
      if ((-1 < (int)uVar12) || (-1 < (int)uVar15)) {
        bVar5 = bVar3;
      }
    }
    if (!bVar5) {
      uVar10 = 0xffffffff;
      uVar15 = uVar10;
      uVar12 = uVar10;
      bVar5 = bVar4;
      if (uVar20 != 0) {
        psVar6 = *(short **)(param_1 + 0x1e8);
        uVar11 = uVar22;
        do {
          if ((psVar6[3] == 0x10) && (psVar6[4] != 0)) {
            if (((*psVar6 == 3) && ((ushort)psVar6[1] < 2)) &&
               ((psVar6[2] == 0x409 || (uVar12 == 0xffffffff)))) {
              uVar12 = uVar11;
            }
            if (((*psVar6 == 1) && (psVar6[1] == 0)) && ((psVar6[2] == 0 || (uVar15 == 0xffffffff)))
               ) {
              uVar15 = uVar11;
            }
          }
          uVar11 = uVar11 + 1;
          psVar6 = psVar6 + 0xc;
        } while ((int)uVar11 < (int)(uint)uVar1);
        if ((-1 < (int)uVar12) || (-1 < (int)uVar15)) {
          bVar5 = bVar3;
        }
      }
      if (!bVar5) {
        uVar15 = uVar10;
        uVar12 = uVar10;
        if (uVar1 == 0) {
LAB_144e22871:
          bVar3 = bVar4;
        }
        else {
          psVar6 = *(short **)(param_1 + 0x1e8);
          uVar10 = uVar22;
          do {
            if ((psVar6[3] == 1) && (psVar6[4] != 0)) {
              if (((*psVar6 == 3) && ((ushort)psVar6[1] < 2)) &&
                 ((psVar6[2] == 0x409 || (uVar12 == 0xffffffff)))) {
                uVar12 = uVar10;
              }
              if (((*psVar6 == 1) && (psVar6[1] == 0)) &&
                 ((psVar6[2] == 0 || (uVar15 == 0xffffffff)))) {
                uVar15 = uVar10;
              }
            }
            uVar10 = uVar10 + 1;
            psVar6 = psVar6 + 0xc;
          } while ((int)uVar10 < (int)uVar20);
          if (((int)uVar12 < 0) && ((int)uVar15 < 0)) goto LAB_144e22871;
        }
        if (!bVar3) goto LAB_144e22cf9;
      }
    }
    if (uVar12 == 0xffffffff) {
LAB_144e228ba:
      if (uVar15 == 0xffffffff) goto LAB_144e22cf9;
      local_78 = (longlong *)((ulonglong)local_78 & 0xffffffffffffff00);
      lVar7 = FUN_144e223f0(*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x200),
                            *(longlong *)(param_1 + 0x1e8) + (longlong)(int)uVar15 * 0x18,
                            &LAB_144e21f90);
      if (lVar7 == 0) goto LAB_144e22cf9;
    }
    else {
      local_78 = (longlong *)((ulonglong)local_78 & 0xffffffffffffff00);
      lVar7 = FUN_144e222d0(uVar2,*(undefined8 *)(param_1 + 0x200),
                            *(longlong *)(param_1 + 0x1e8) + (longlong)(int)uVar12 * 0x18,
                            &LAB_144e21f90);
      if (lVar7 == 0) goto LAB_144e228ba;
    }
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (*(char *)(lVar7 + lVar8) != '\0');
    if (0x5b < (uint)lVar8) {
      lVar8 = 0x5b;
      *(undefined1 *)(lVar7 + 0x5b) = 0;
    }
    *(longlong *)(param_1 + 0x420) = lVar7;
    *(int *)(param_1 + 0x428) = (int)lVar8;
  }
  local_78 = &local_50;
  (**(code **)(lVar21 + 0x50))(param_1,&local_64,&local_58,0);
  if (((*(uint *)(param_1 + 4) & 0x7fff0000) == 0) || ((*(uint *)(param_1 + 8) & 0x8000) != 0)) {
LAB_144e22ab9:
    lVar21 = *(longlong *)(local_50 + 0x10);
    pcVar14 = (char *)FUN_144b560d0(uVar2,*(int *)(param_1 + 0x428) + local_64 * 0x11 + 1,&local_68)
    ;
    if (local_68 != 0) goto LAB_144e22cf9;
    pcVar17 = *(char **)(param_1 + 0x420);
    pcVar13 = pcVar14;
    do {
      cVar9 = *pcVar17;
      pcVar17 = pcVar17 + 1;
      *pcVar13 = cVar9;
      pcVar13 = pcVar13 + 1;
    } while (cVar9 != '\0');
    pcVar17 = pcVar14 + *(uint *)(param_1 + 0x428);
    if (local_64 != 0) {
      pcVar13 = (char *)(lVar21 + 0x14);
      do {
        if (*local_58 != *(int *)(pcVar13 + -8)) {
          *pcVar17 = '_';
          pcVar17 = (char *)FUN_144e22500(*local_58,pcVar17 + 1);
          cVar9 = pcVar13[3];
          if ((cVar9 != ' ') &&
             (((iVar18 = (int)cVar9, iVar18 - 0x30U < 10 || (iVar18 - 0x41U < 0x1a)) ||
              (iVar18 - 0x61U < 0x1a)))) {
            *pcVar17 = cVar9;
            pcVar17 = pcVar17 + 1;
          }
          cVar9 = pcVar13[2];
          if ((cVar9 != ' ') &&
             (((iVar18 = (int)cVar9, iVar18 - 0x30U < 10 || (iVar18 - 0x41U < 0x1a)) ||
              (iVar18 - 0x61U < 0x1a)))) {
            *pcVar17 = cVar9;
            pcVar17 = pcVar17 + 1;
          }
          cVar9 = (char)((uint)*(undefined4 *)pcVar13 >> 8);
          if ((cVar9 != ' ') &&
             (((iVar18 = (int)cVar9, iVar18 - 0x30U < 10 || (iVar18 - 0x41U < 0x1a)) ||
              (iVar18 - 0x61U < 0x1a)))) {
            *pcVar17 = cVar9;
            pcVar17 = pcVar17 + 1;
          }
          cVar9 = *pcVar13;
          if ((cVar9 != ' ') &&
             (((iVar18 = (int)cVar9, iVar18 - 0x30U < 10 || (iVar18 - 0x41U < 0x1a)) ||
              (iVar18 - 0x61U < 0x1a)))) {
            *pcVar17 = cVar9;
            pcVar17 = pcVar17 + 1;
          }
        }
        local_58 = local_58 + 1;
        uVar22 = uVar22 + 1;
        pcVar13 = pcVar13 + 0x20;
      } while (uVar22 < local_64);
    }
  }
  else {
    lVar21 = *(longlong *)(param_1 + 0x2d0);
    lVar7 = (longlong)(int)(((int)*(uint *)(param_1 + 4) >> 0x10 & 0x7fffU) - 1);
    uVar15 = *(uint *)(*(longlong *)(local_50 + 0x18) + 0xc + lVar7 * 0x10);
    local_48 = (char *)0x0;
    if (((uVar15 == 6) || (uVar15 - 0x100 < 0x7f00)) &&
       ((**(code **)(lVar21 + 0x120))(param_1,uVar15 & 0xffff,&local_48), local_48 != (char *)0x0))
    {
      do {
        lVar21 = lVar16;
        lVar16 = lVar21 + 1;
      } while (local_48[lVar16] != '\0');
      pcVar17 = local_48 + lVar21 + 2;
      pcVar14 = local_48;
    }
    else {
      (**(code **)(lVar21 + 0x120))
                (param_1,*(undefined2 *)(*(longlong *)(local_50 + 0x18) + 8 + lVar7 * 0x10),
                 &local_60);
      if (local_60 == (char *)0x0) goto LAB_144e22ab9;
      do {
        lVar16 = lVar16 + 1;
      } while (local_60[lVar16] != '\0');
      pcVar14 = (char *)FUN_144b560d0(uVar2,*(int *)(param_1 + 0x428) + 2 + (int)lVar16,&local_68);
      if (local_68 != 0) goto LAB_144e22cf9;
      pcVar17 = *(char **)(param_1 + 0x420);
      pcVar13 = pcVar14;
      do {
        cVar9 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        *pcVar13 = cVar9;
        pcVar13 = pcVar13 + 1;
      } while (cVar9 != '\0');
      uVar22 = *(uint *)(param_1 + 0x428);
      pcVar14[uVar22] = '-';
      pcVar17 = pcVar14 + uVar22 + 1;
      cVar9 = *local_60;
      pcVar13 = local_60;
      while (cVar9 != '\0') {
        iVar18 = (int)*pcVar13;
        if (((iVar18 - 0x30U < 10) || (iVar18 - 0x41U < 0x1a)) || (iVar18 - 0x61U < 0x1a)) {
          *pcVar17 = *pcVar13;
          pcVar17 = pcVar17 + 1;
        }
        pcVar13 = pcVar13 + 1;
        cVar9 = *pcVar13;
      }
      *pcVar17 = '\0';
      pcVar17 = pcVar17 + 1;
      FUN_144b56350(uVar2,local_60);
      local_60 = (char *)0x0;
    }
  }
  if (0x7f < (longlong)pcVar17 - (longlong)pcVar14) {
    FUN_144e21fc0(pcVar14,(int)pcVar17 - (int)pcVar14,0x75bcd15,local_40);
    puVar19 = &local_34;
    pcVar14 = pcVar14 + *(uint *)(param_1 + 0x428);
    lVar21 = 4;
    *pcVar14 = '-';
    pcVar14[0x21] = '.';
    pcVar14[0x22] = '.';
    pcVar14[0x23] = '.';
    pcVar14[0x24] = '\0';
    pcVar14 = pcVar14 + 0x20;
    do {
      uVar22 = *puVar19;
      puVar19 = puVar19 + -1;
      *pcVar14 = (&DAT_149a1dfa0)[uVar22 & 0xf];
      pcVar14[-1] = (&DAT_149a1dfa0)[uVar22 >> 4 & 0xf];
      pcVar14[-2] = (&DAT_149a1dfa0)[uVar22 >> 8 & 0xf];
      pcVar14[-3] = (&DAT_149a1dfa0)[uVar22 >> 0xc & 0xf];
      pcVar14[-4] = (&DAT_149a1dfa0)[uVar22 >> 0x10 & 0xf];
      pcVar14[-5] = (&DAT_149a1dfa0)[uVar22 >> 0x14 & 0xf];
      pcVar14[-6] = (&DAT_149a1dfa0)[uVar22 >> 0x18 & 0xf];
      pcVar14[-7] = (&DAT_149a1dfa0)[uVar22 >> 0x1c];
      lVar21 = lVar21 + -1;
      pcVar14 = pcVar14 + -8;
    } while (lVar21 != 0);
  }
LAB_144e22cf9:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
}



// FUNCTION 144e22d20 FUN_144e22d20 body=178 status=ok
// SIG undefined FUN_144e22d20(void)

undefined1 * FUN_144e22d20(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  ushort uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  int local_res8 [2];
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  uVar8 = 0;
  uVar3 = *(ushort *)(param_1 + 8) >> 1;
  puVar5 = (undefined1 *)FUN_144b561b0(param_2,1,0,uVar3 + 1,0,local_res8);
  if (local_res8[0] != 0) {
    return (undefined1 *)0x0;
  }
  if (uVar3 != 0) {
    puVar6 = (undefined1 *)(lVar2 + -1);
    puVar9 = puVar5;
    do {
      puVar1 = puVar6 + 1;
      puVar6 = puVar6 + 2;
      uVar4 = (uint)CONCAT11(*puVar1,*puVar6);
      if (uVar4 == 0) break;
      if (0x5f < uVar4 - 0x20) {
        uVar4 = 0x3f;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      *puVar9 = (char)uVar4;
      puVar9 = puVar9 + 1;
    } while (uVar7 < uVar3);
  }
  puVar5[uVar8] = 0;
  return puVar5;
}



// FUNCTION 144e22de0 FUN_144e22de0 body=159 status=ok
// SIG undefined FUN_144e22de0(void)

byte * FUN_144e22de0(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  ulonglong uVar7;
  int local_res8 [2];
  
  uVar1 = *(ushort *)(param_1 + 8);
  pbVar5 = *(byte **)(param_1 + 0x10);
  uVar7 = 0;
  pbVar3 = (byte *)FUN_144b561b0(param_2,1,0,uVar1 + 1,0,local_res8);
  if (local_res8[0] != 0) {
    return (byte *)0x0;
  }
  pbVar4 = pbVar3;
  if (uVar1 != 0) {
    do {
      bVar2 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      if (bVar2 == 0) break;
      if (0x5f < bVar2 - 0x20) {
        bVar2 = 0x3f;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      *pbVar4 = bVar2;
      pbVar4 = pbVar4 + 1;
    } while (uVar6 < uVar1);
  }
  pbVar3[uVar7] = 0;
  return pbVar3;
}



// FUNCTION 144e22e80 FUN_144e22e80 body=39 status=ok
// SIG undefined FUN_144e22e80(void)

void FUN_144e22e80(undefined8 *param_1)

{
  FUN_144b56350(param_1[6],*param_1);
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0;
  param_1[5] = 0;
  return;
}



// FUNCTION 144e22ed0 FUN_144e22ed0 body=1541 status=ok
// SIG undefined FUN_144e22ed0(void)

void FUN_144e22ed0(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  longlong *plVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  int *local_b0;
  int local_a8 [2];
  undefined8 local_a0;
  ulonglong local_98;
  uint *local_90;
  longlong *local_88;
  longlong local_80;
  undefined1 local_78 [4];
  int local_74;
  uint local_70;
  ushort local_6c;
  uint local_68;
  uint local_60;
  int local_5c;
  int local_58;
  uint local_54;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar13 = *(undefined8 *)(param_1 + 0x30);
  uVar16 = 0;
  local_a8[0] = 0;
  local_90 = (uint *)0x0;
  local_88 = (longlong *)0x0;
  local_a0 = uVar13;
  local_80 = param_2;
  local_a8[0] = FUN_144b5a030(param_1,&DAT_149a1dbb8,local_78);
  if (((((local_a8[0] != 0) || (local_74 == 0x774f4646)) || (local_74 == 0x74746366)) ||
      ((local_70 != *(uint *)(param_1 + 8) || (local_6c == 0)))) ||
     ((local_70 <= ((uint)local_6c + (uint)local_6c * 4) * 4 + 0x2c ||
      ((uVar7 = (uint)local_6c * 0x10 + 0xc, local_68 <= uVar7 || ((local_68 & 3) != 0))))))
  goto LAB_144e22f88;
  if (local_60 == 0) {
    if ((local_5c != 0) || (local_58 != 0)) goto LAB_144e22f88;
  }
  else if ((local_5c != 0) && (local_58 == 0)) goto LAB_144e22f88;
  if ((local_54 == 0) && (local_50 != 0)) goto LAB_144e22f88;
  puVar4 = (undefined1 *)FUN_144b560d0(uVar13,uVar7,local_a8);
  uVar5 = uVar16;
  if (local_a8[0] == 0) {
    uVar5 = FUN_144b560d0(uVar13,0x48,local_a8);
    uVar7 = 0;
    local_98 = uVar5;
    if (local_a8[0] == 0) {
      uVar3 = (uint)local_6c;
      uVar15 = uVar16;
      if (local_6c != 0) {
        do {
          uVar7 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar7;
          uVar3 = uVar3 >> 1;
        } while (uVar3 != 0);
      }
      *puVar4 = (char)((uint)local_74 >> 0x18);
      puVar4[1] = (char)((uint)local_74 >> 0x10);
      puVar4[2] = (char)((uint)local_74 >> 8);
      puVar4[3] = (undefined1)local_74;
      puVar4[4] = (char)(local_6c >> 8);
      puVar4[5] = (undefined1)local_6c;
      bVar6 = (byte)(uVar7 - 1);
      iVar8 = 1 << (bVar6 & 0x1f);
      iVar9 = iVar8 * 0x10;
      iVar8 = (uint)local_6c * 0x10 + iVar8 * -0x10;
      puVar4[6] = (char)((uint)iVar9 >> 8);
      puVar4[7] = (char)iVar9;
      puVar4[8] = (char)(uVar7 - 1 >> 8);
      puVar4[9] = bVar6;
      puVar4[10] = (char)((uint)iVar8 >> 8);
      local_b0 = local_a8;
      puVar4[0xb] = (char)iVar8;
      local_b8 = (undefined1 *)0x0;
      local_90 = (uint *)FUN_144b561b0(uVar13,0x18,0,local_6c);
      if (local_a8[0] == 0) {
        local_b0 = local_a8;
        local_b8 = (undefined1 *)0x0;
        local_88 = (longlong *)FUN_144b561b0(uVar13,8,0,local_6c);
        if ((local_a8[0] == 0) &&
           (local_a8[0] = FUN_144b59990(param_1,((uint)local_6c + (uint)local_6c * 4) * 4),
           local_a8[0] == 0)) {
          puVar11 = local_90;
          plVar12 = local_88;
          uVar5 = uVar16;
          uVar15 = uVar16;
          if (local_6c != 0) {
            do {
              uVar7 = FUN_144b59be0(param_1);
              *puVar11 = uVar7;
              uVar7 = FUN_144b59be0(param_1);
              puVar11[1] = uVar7;
              uVar7 = FUN_144b59be0(param_1);
              puVar11[2] = uVar7;
              uVar7 = FUN_144b59be0(param_1);
              puVar11[3] = uVar7;
              uVar7 = FUN_144b59be0(param_1);
              puVar11[4] = uVar7;
              uVar7 = *puVar11;
              if (uVar7 <= (uint)uVar15) {
                FUN_144b59ab0(param_1);
                goto LAB_144e233bc;
              }
              *plVar12 = (longlong)puVar11;
              uVar3 = (int)uVar5 + 1;
              puVar11 = puVar11 + 6;
              uVar13 = local_a0;
              plVar12 = plVar12 + 1;
              uVar5 = (ulonglong)uVar3;
              uVar15 = (ulonglong)uVar7;
            } while ((int)uVar3 < (int)(uint)local_6c);
          }
          FUN_144b59ab0(param_1);
          plVar12 = local_88;
          qsort(local_88,(ulonglong)local_6c,8,(_PtFuncCompare *)&LAB_144e22eb0);
          uVar3 = (uint)local_6c * 0x10 + 0xc;
          uVar7 = ((uint)local_6c + (uint)local_6c * 4) * 4 + 0x2c;
          uVar5 = uVar16;
          if (local_6c != 0) {
            do {
              lVar2 = *plVar12;
              if ((((*(uint *)(lVar2 + 4) != uVar7) ||
                   (uVar10 = *(uint *)(lVar2 + 8), local_70 < uVar10)) ||
                  (local_70 - uVar10 < *(uint *)(lVar2 + 4))) ||
                 (((uVar1 = *(uint *)(lVar2 + 0xc), local_68 < uVar1 || (local_68 - uVar1 < uVar3))
                  || (uVar1 < uVar10)))) goto LAB_144e233bc;
              *(uint *)(lVar2 + 0x14) = uVar3;
              uVar7 = uVar7 + (uVar10 + 3 & 0xfffffffc);
              uVar10 = (int)uVar5 + 1;
              plVar12 = plVar12 + 1;
              uVar3 = uVar3 + (uVar1 + 3 & 0xfffffffc);
              uVar5 = (ulonglong)uVar10;
            } while ((int)uVar10 < (int)(uint)local_6c);
          }
          if (local_60 == 0) {
LAB_144e23267:
            if (local_54 != 0) {
              uVar7 = uVar7 + 3 & 0xfffffffc;
              if ((local_54 != uVar7) || (local_70 < local_54 + local_50)) goto LAB_144e233bc;
              uVar7 = uVar7 + local_50;
            }
            if ((uVar3 == local_68) && (uVar7 == local_70)) {
              local_b0 = local_a8;
              local_b8 = puVar4;
              puVar4 = (undefined1 *)FUN_144b561b0(uVar13,1,(uint)local_6c * 0x10 + 0xc);
              uVar13 = local_a0;
              uVar5 = local_98;
              if (local_a8[0] == 0) {
                if (local_6c != 0) {
                  puVar11 = local_90 + 4;
                  puVar14 = puVar4 + 0xc;
                  do {
                    *puVar14 = *(undefined1 *)((longlong)puVar11 + -0xd);
                    puVar14[1] = *(undefined1 *)((longlong)puVar11 + -0xe);
                    puVar14[2] = (char)(puVar11[-4] >> 8);
                    puVar14[3] = (char)puVar11[-4];
                    puVar14[4] = *(undefined1 *)((longlong)puVar11 + 3);
                    puVar14[5] = *(undefined1 *)((longlong)puVar11 + 2);
                    puVar14[6] = (char)(*puVar11 >> 8);
                    puVar14[7] = (char)*puVar11;
                    puVar14[8] = *(undefined1 *)((longlong)puVar11 + 7);
                    puVar14[9] = *(undefined1 *)((longlong)puVar11 + 6);
                    puVar14[10] = (char)(puVar11[1] >> 8);
                    puVar14[0xb] = (char)puVar11[1];
                    puVar14[0xc] = *(undefined1 *)((longlong)puVar11 + -1);
                    puVar14[0xd] = *(undefined1 *)((longlong)puVar11 + -2);
                    puVar14[0xe] = (char)(puVar11[-1] >> 8);
                    puVar14[0xf] = (char)puVar11[-1];
                    local_a8[0] = FUN_144b597a0(param_1,puVar11[-3]);
                    uVar5 = local_98;
                    if ((local_a8[0] != 0) ||
                       (local_a8[0] = FUN_144b59990(param_1,puVar11[-2]), uVar5 = local_98,
                       local_a8[0] != 0)) goto LAB_144e233cb;
                    uVar7 = puVar11[-1];
                    if (puVar11[-2] == uVar7) {
                      memcpy(puVar4 + puVar11[1],*(void **)(param_1 + 0x38),(ulonglong)uVar7);
                    }
                    else {
                      local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,puVar11[-2]);
                      local_a0 = CONCAT44(local_a0._4_4_,uVar7);
                      local_a8[0] = FUN_1451d4220(uVar13,puVar4 + puVar11[1],&local_a0,
                                                  *(undefined8 *)(param_1 + 0x38));
                      uVar5 = local_98;
                      if (local_a8[0] != 0) goto LAB_144e233cb;
                      if ((uint)local_a0 != puVar11[-1]) {
                        local_a8[0] = 8;
                        goto LAB_144e233cb;
                      }
                    }
                    FUN_144b59ab0(param_1);
                    for (uVar7 = puVar11[1] + puVar11[-1]; (uVar7 & 3) != 0; uVar7 = uVar7 + 1) {
                      puVar4[uVar7] = 0;
                    }
                    uVar7 = (int)uVar16 + 1;
                    uVar16 = (ulonglong)uVar7;
                    puVar11 = puVar11 + 6;
                    puVar14 = puVar14 + 0x10;
                  } while ((int)uVar7 < (int)(uint)local_6c);
                }
                uVar5 = local_98;
                FUN_144b59760(local_98,puVar4,local_68);
                lVar2 = local_80;
                *(undefined8 *)(uVar5 + 0x30) = *(undefined8 *)(param_1 + 0x30);
                *(code **)(uVar5 + 0x28) = FUN_144e22e80;
                FUN_144b59710(*(undefined8 *)(local_80 + 0xa0),*(uint *)(local_80 + 8) >> 10 & 1);
                puVar11 = (uint *)(lVar2 + 8);
                *puVar11 = *puVar11 & 0xfffffbff;
                *(ulonglong *)(lVar2 + 0xa0) = uVar5;
              }
              goto LAB_144e233cb;
            }
          }
          else if ((local_60 == uVar7) && (local_60 + local_5c <= local_70)) {
            uVar7 = uVar7 + local_5c;
            goto LAB_144e23267;
          }
LAB_144e233bc:
          local_a8[0] = 8;
          uVar5 = local_98;
          uVar13 = local_a0;
        }
      }
    }
  }
LAB_144e233cb:
  FUN_144b56350(uVar13,local_90);
  FUN_144b56350(uVar13,local_88);
  if (local_a8[0] != 0) {
    FUN_144b56350(uVar13,puVar4);
    FUN_144b59780(uVar5);
    FUN_144b56350(uVar13,uVar5);
  }
LAB_144e22f88:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
}



// FUNCTION 144e234f0 FUN_144e234f0 body=559 status=ok
// SIG undefined FUN_144e234f0(void)

ulonglong FUN_144e234f0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  uint local_res8 [2];
  
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar7 = 0;
  *(undefined8 *)(param_2 + 0xd8) = 0;
  *(undefined4 *)(param_2 + 0xe0) = 0;
  uVar1 = FUN_144b59870();
  iVar2 = FUN_144b59e60(param_1,local_res8);
  while( true ) {
    if (local_res8[0] != 0) {
      return (ulonglong)local_res8[0];
    }
    if (iVar2 != 0x774f4646) break;
    uVar3 = FUN_144b597a0(param_1,uVar1);
    local_res8[0] = (uint)uVar3;
    if (local_res8[0] != 0) {
      return uVar3;
    }
    uVar3 = FUN_144e22ed0(param_1,param_2);
    local_res8[0] = (uint)uVar3;
    if (local_res8[0] != 0) {
      return uVar3;
    }
    param_1 = *(longlong *)(param_2 + 0xa0);
    uVar1 = FUN_144b59870(param_1);
    iVar2 = FUN_144b59e60(param_1,local_res8);
  }
  if (((((iVar2 != 0x10000) && (iVar2 != 0x74746366)) && (iVar2 != 0x4f54544f)) &&
      ((iVar2 != 0x74727565 && (iVar2 != 0x74797031)))) &&
     ((iVar2 != -0x5a949d9c && ((iVar2 != -0x5a938c8c && (iVar2 != 0x20000)))))) {
    return 2;
  }
  *(undefined4 *)(param_2 + 0xd8) = 0x74746366;
  if (iVar2 != 0x74746366) {
    *(undefined4 *)(param_2 + 0xdc) = 0x10000;
    *(undefined4 *)(param_2 + 0xe0) = 1;
    puVar5 = (undefined4 *)FUN_144b560d0(uVar4,4,local_res8);
    *(undefined4 **)(param_2 + 0xe8) = puVar5;
    if (local_res8[0] != 0) {
      return (ulonglong)local_res8[0];
    }
    *puVar5 = uVar1;
    return 0;
  }
  uVar3 = FUN_144b5a030(param_1,&DAT_149a1ddb8,param_2 + 0xd8);
  local_res8[0] = (uint)uVar3;
  if (local_res8[0] != 0) {
    return uVar3;
  }
  uVar6 = *(uint *)(param_2 + 0xe0);
  if (uVar6 == 0) {
    return 8;
  }
  if (*(uint *)(param_1 + 8) >> 5 < uVar6) {
    return 10;
  }
  uVar4 = FUN_144b561b0(uVar4,4,0,uVar6,0,local_res8);
  *(undefined8 *)(param_2 + 0xe8) = uVar4;
  if (local_res8[0] != 0) {
    return (ulonglong)local_res8[0];
  }
  uVar3 = FUN_144b59990(param_1,*(int *)(param_2 + 0xe0) << 2);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  local_res8[0] = 0;
  uVar3 = uVar7;
  if (0 < *(int *)(param_2 + 0xe0)) {
    do {
      uVar1 = FUN_144b59be0(param_1);
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      *(undefined4 *)(uVar3 + *(longlong *)(param_2 + 0xe8)) = uVar1;
      uVar3 = uVar3 + 4;
    } while ((int)uVar6 < *(int *)(param_2 + 0xe0));
  }
  FUN_144b59ab0(param_1);
  return (ulonglong)local_res8[0];
}



// FUNCTION 144e23720 FUN_144e23720 body=523 status=ok
// SIG undefined FUN_144e23720(void)

undefined4 FUN_144e23720(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int *piVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  
  puVar3 = (undefined8 *)(param_1 + 0x498);
  *puVar3 = 0;
  *(undefined8 *)(param_1 + 0x4a0) = 0;
  *(undefined8 *)(param_1 + 0x4a8) = 0;
  *(undefined8 *)(param_1 + 0x4b0) = 0;
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  piVar7 = *(int **)(param_1 + 0xf8);
  piVar11 = piVar7 + (ulonglong)*(ushort *)(param_1 + 0xf4) * 4;
  while( true ) {
    if (piVar11 <= piVar7) {
      return 8;
    }
    if ((*piVar7 == 0x42444620) && (piVar7[3] != 0)) break;
    piVar7 = piVar7 + 4;
  }
  uVar4 = piVar7[3];
  iVar6 = FUN_144b597a0(param_2,piVar7[2]);
  if (iVar6 != 0) {
    return 8;
  }
  if (uVar4 < 8) {
    return 8;
  }
  iVar6 = FUN_144b59b00(param_2,uVar4,puVar3);
  if (iVar6 != 0) {
    return 8;
  }
  puVar5 = (undefined1 *)*puVar3;
  *(undefined1 **)(param_1 + 0x4a0) = puVar5 + uVar4;
  uVar13 = (uint)CONCAT11(puVar5[2],puVar5[3]);
  uVar8 = CONCAT31(CONCAT21(CONCAT11(puVar5[4],puVar5[5]),puVar5[6]),puVar5[7]);
  if ((((CONCAT11(*puVar5,puVar5[1]) == 1) && (7 < uVar8)) && (uVar13 <= uVar8 - 8 >> 2)) &&
     (uVar8 + 1 <= uVar4)) {
    *(uint *)(param_1 + 0x4b0) = uVar4 - uVar8;
    puVar9 = puVar5 + 8;
    lVar12 = 0;
    *(uint *)(param_1 + 0x4b4) = uVar13;
    *(undefined1 **)(param_1 + 0x4a8) = puVar5 + uVar8;
    puVar10 = puVar9 + uVar13 * 4;
    lVar14 = 0;
    if (1 < uVar13) {
      uVar15 = (ulonglong)((uVar13 - 2 >> 1) + 1);
      do {
        uVar13 = uVar13 - 2;
        puVar1 = puVar9 + 6;
        lVar12 = lVar12 + (ulonglong)CONCAT11(puVar9[2],puVar9[3]) * 10;
        puVar2 = puVar9 + 7;
        puVar9 = puVar9 + 8;
        lVar14 = lVar14 + (ulonglong)CONCAT11(*puVar1,*puVar2) * 10;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    if (uVar13 != 0) {
      puVar10 = puVar10 + (ulonglong)CONCAT11(puVar9[2],puVar9[3]) * 10;
    }
    if (puVar10 + lVar14 + lVar12 <= puVar5 + uVar8) {
      *(undefined1 *)(param_1 + 0x4b8) = 1;
      return 0;
    }
  }
  FUN_144b59b40(param_2,puVar3);
  *puVar3 = 0;
  *(undefined8 *)(param_1 + 0x4a0) = 0;
  *(undefined8 *)(param_1 + 0x4a8) = 0;
  *(undefined8 *)(param_1 + 0x4b0) = 0;
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  return 8;
}



// FUNCTION 144e23930 FUN_144e23930 body=302 status=ok
// SIG undefined FUN_144e23930(void)

undefined8 FUN_144e23930(longlong *param_1,uint param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  
  uVar5 = *(uint *)(param_1 + 6);
  if (param_2 < uVar5) {
    uVar6 = uVar5 * 2;
    uVar9 = param_2 * 2;
    do {
      puVar10 = (undefined1 *)(param_1[3] + 0xe + (ulonglong)uVar9);
      uVar1 = puVar10[1];
      uVar2 = *puVar10;
      puVar10 = puVar10 + (uVar6 + 2);
      *(uint *)((longlong)param_1 + 0x3c) = (uint)CONCAT11(uVar2,uVar1);
      uVar3 = puVar10[1];
      uVar4 = *puVar10;
      pbVar11 = puVar10 + uVar6;
      *(uint *)(param_1 + 7) = (uint)CONCAT11(uVar4,uVar3);
      pbVar12 = pbVar11 + uVar6;
      *(uint *)(param_1 + 8) = (int)(short)((ushort)*pbVar11 << 8) | (uint)pbVar11[1];
      uVar7 = CONCAT11(*pbVar12,pbVar12[1]);
      uVar8 = (uint)uVar7;
      if ((((uVar5 - 1 <= param_2) && (CONCAT11(uVar4,uVar3) == 0xffff)) &&
          (CONCAT11(uVar2,uVar1) == 0xffff)) &&
         ((uVar7 != 0 &&
          ((byte *)((ulonglong)*(uint *)(*param_1 + 0x298) + *(longlong *)(*param_1 + 0x290)) <
           pbVar12 + (ulonglong)uVar8 + 2)))) {
        *(undefined4 *)(param_1 + 8) = 1;
LAB_144e23a3b:
        *(uint *)((longlong)param_1 + 0x34) = param_2;
        param_1[9] = 0;
        return 0;
      }
      if (uVar8 != 0xffff) {
        if (uVar7 != 0) {
          *(uint *)((longlong)param_1 + 0x34) = param_2;
          param_1[9] = (longlong)(pbVar12 + uVar8);
          return 0;
        }
        goto LAB_144e23a3b;
      }
      param_2 = param_2 + 1;
      uVar9 = uVar9 + 2;
    } while (param_2 < uVar5);
  }
  return 0xffffffff;
}



// FUNCTION 144e23a60 FUN_144e23a60 body=314 status=ok
// SIG undefined FUN_144e23a60(void)

void FUN_144e23a60(longlong *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  
  lVar4 = *param_1;
  uVar2 = *(uint *)(lVar4 + 0x298);
  lVar5 = *(longlong *)(lVar4 + 0x290);
  if (*(uint *)(param_1 + 5) < 0xffff) {
    uVar7 = *(uint *)(param_1 + 7);
    uVar9 = *(uint *)(param_1 + 5) + 1;
    if (uVar9 < uVar7) {
      uVar9 = uVar7;
    }
LAB_144e23aa0:
    uVar3 = *(uint *)((longlong)param_1 + 0x3c);
    iVar6 = (int)param_1[8];
    if (uVar9 <= uVar3) {
      if (param_1[9] == 0) {
        do {
          uVar8 = iVar6 + uVar9;
          uVar7 = uVar8 & 0xffff;
          if (uVar7 < *(uint *)(lVar4 + 0x10)) {
            if (uVar7 != 0) {
              *(uint *)(param_1 + 5) = uVar9;
              *(uint *)((longlong)param_1 + 0x2c) = uVar7;
              return;
            }
          }
          else if (((int)uVar8 < 0) && (-1 < (int)(iVar6 + uVar3))) {
            uVar9 = -iVar6;
          }
          else {
            if ((0xffff < (int)uVar8) || ((int)(iVar6 + uVar3) < 0x10000)) break;
            uVar9 = 0x10000 - iVar6;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 <= uVar3);
      }
      else {
        uVar10 = (ulonglong)((uVar9 - uVar7) * 2) + param_1[9];
        if (uVar10 <= (ulonglong)uVar2 + lVar5) {
          puVar11 = (undefined1 *)(uVar10 - 1);
          do {
            puVar1 = puVar11 + 1;
            puVar11 = puVar11 + 2;
            if ((CONCAT11(*puVar1,*puVar11) != 0) &&
               (uVar7 = (uint)CONCAT11(*puVar1,*puVar11) + iVar6 & 0xffff, uVar7 != 0)) {
              *(uint *)(param_1 + 5) = uVar9;
              *(uint *)((longlong)param_1 + 0x2c) = uVar7;
              return;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 <= uVar3);
        }
      }
    }
    iVar6 = FUN_144e23930(param_1,*(int *)((longlong)param_1 + 0x34) + 1);
    if (-1 < iVar6) {
      uVar7 = *(uint *)(param_1 + 7);
      if (uVar9 < uVar7) {
        uVar9 = uVar7;
      }
      goto LAB_144e23aa0;
    }
  }
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  return;
}



// FUNCTION 144e23ba0 FUN_144e23ba0 body=1293 status=ok
// SIG undefined FUN_144e23ba0(void)

uint FUN_144e23ba0(longlong *param_1,uint *param_2,char param_3)

{
  ushort uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  
  uVar10 = *param_2;
  pbVar8 = (byte *)((ulonglong)*(uint *)(*param_1 + 0x298) + *(longlong *)(*param_1 + 0x290));
  lVar13 = param_1[3];
  uVar1 = CONCAT11(*(undefined1 *)(lVar13 + 6),*(undefined1 *)(lVar13 + 7));
  uVar19 = uVar1 & 0xfffffffe;
  if ((uVar1 & 0xfffe) == 0) {
    return 0;
  }
  uVar21 = 0xffff;
  uVar22 = (uint)(uVar1 >> 1);
  if (param_3 != '\0') {
    uVar10 = uVar10 + 1;
  }
  uVar9 = 0;
  uVar15 = 0;
  uVar16 = uVar22;
  if (uVar1 >> 1 == 0) goto LAB_144e23ca6;
  uVar15 = uVar19 + 2;
  uVar17 = uVar22;
  do {
    uVar16 = uVar17 + uVar9 >> 1;
    puVar3 = (undefined1 *)(lVar13 + 0xe + (ulonglong)(uVar16 * 2));
    puVar4 = puVar3 + uVar15;
    uVar21 = (uint)CONCAT11(*puVar3,puVar3[1]);
    uVar14 = (uint)CONCAT11(*puVar4,puVar4[1]);
    uVar20 = uVar16;
    if (uVar14 <= uVar10) {
      if (uVar10 <= uVar21) {
        pbVar5 = puVar4 + uVar19;
        pbVar6 = pbVar5 + uVar19;
        uVar20 = (int)(short)((ushort)*pbVar5 << 8) | (uint)pbVar5[1];
        uVar18 = (ulonglong)(uint)CONCAT11(*pbVar6,pbVar6[1]);
        if ((((uVar22 - 1 <= uVar16) && (uVar14 == 0xffff)) && (uVar21 == 0xffff)) &&
           ((CONCAT11(*pbVar6,pbVar6[1]) != 0 && (pbVar8 < pbVar6 + uVar18 + 2)))) {
          uVar20 = 1;
          uVar18 = 0;
        }
        uVar11 = (uint)uVar18;
        if ((*(byte *)(param_1 + 4) & 2) != 0) {
          uVar7 = uVar16 + 1;
          uVar12 = uVar7;
          if (uVar11 != 0xffff) {
            uVar12 = uVar16;
          }
          uVar9 = uVar17 + uVar9 >> 1;
          goto joined_r0x000144e23d57;
        }
        if (uVar11 != 0xffff) goto LAB_144e23f78;
        break;
      }
      uVar9 = uVar16 + 1;
      uVar20 = uVar17;
    }
    uVar17 = uVar20;
  } while (uVar9 < uVar17);
LAB_144e23c96:
  uVar15 = 0;
  goto LAB_144e23ca6;
joined_r0x000144e23d57:
  uVar17 = uVar12;
  if (uVar9 != 0) {
    uVar12 = uVar9 - 1;
    puVar3 = (undefined1 *)(lVar13 + 0xe + (ulonglong)(uVar12 * 2));
    uVar11 = (uint)CONCAT11(*puVar3,puVar3[1]);
    if (uVar11 < uVar10) {
      lVar13 = param_1[3];
      goto LAB_144e23ded;
    }
    puVar3 = puVar3 + uVar15;
    lVar13 = param_1[3];
    pbVar5 = puVar3 + uVar19;
    uVar14 = (uint)CONCAT11(*puVar3,puVar3[1]);
    pbVar6 = pbVar5 + uVar19;
    uVar20 = (int)(short)((ushort)*pbVar5 << 8) | (uint)pbVar5[1];
    uVar18 = (ulonglong)(uint)CONCAT11(*pbVar6,pbVar6[1]);
    uVar21 = uVar11;
    uVar9 = uVar12;
    if (CONCAT11(*pbVar6,pbVar6[1]) == 0xffff) {
      uVar12 = uVar17;
    }
    goto joined_r0x000144e23d57;
  }
LAB_144e23ded:
  uVar11 = (uint)uVar18;
  if (uVar17 == uVar7) {
    if (uVar9 != uVar16) {
      puVar3 = (undefined1 *)((ulonglong)(uVar16 * 2) + 0xe + lVar13);
      puVar4 = puVar3 + uVar15;
      uVar21 = (uint)CONCAT11(*puVar3,puVar3[1]);
      pbVar5 = puVar4 + uVar19;
      uVar14 = (uint)CONCAT11(*puVar4,puVar4[1]);
      pbVar6 = pbVar5 + uVar19;
      uVar20 = (int)(short)((ushort)*pbVar5 << 8) | (uint)pbVar5[1];
      uVar18 = (ulonglong)CONCAT11(*pbVar6,pbVar6[1]);
    }
    uVar11 = (uint)uVar18;
    uVar17 = uVar16;
    if (uVar7 < uVar22) {
      uVar9 = uVar7 * 2;
      do {
        uVar11 = (uint)uVar18;
        puVar3 = (undefined1 *)((ulonglong)uVar9 + 0xe + lVar13);
        pbVar6 = puVar3 + uVar15;
        uVar12 = (uint)CONCAT11(*pbVar6,pbVar6[1]);
        if (uVar10 < uVar12) break;
        pbVar5 = pbVar6 + uVar19;
        lVar13 = param_1[3];
        pbVar6 = pbVar5 + uVar19;
        uVar20 = (int)(short)((ushort)*pbVar5 << 8) | (uint)pbVar5[1];
        uVar11 = (uint)CONCAT11(*pbVar6,pbVar6[1]);
        uVar18 = (ulonglong)uVar11;
        if (uVar11 != 0xffff) {
          uVar17 = uVar7;
        }
        uVar7 = uVar7 + 1;
        uVar9 = uVar9 + 2;
        uVar21 = (uint)CONCAT11(*puVar3,puVar3[1]);
        uVar14 = uVar12;
      } while (uVar7 < uVar22);
    }
    uVar9 = uVar7 - 1;
    bVar23 = uVar17 == uVar16;
    uVar16 = uVar9;
    if (bVar23) goto LAB_144e23c96;
  }
  uVar16 = uVar17;
  if (uVar16 != uVar9) {
    puVar3 = (undefined1 *)(param_1[3] + 0xe + (ulonglong)(uVar16 * 2));
    puVar4 = puVar3 + uVar15;
    uVar21 = (uint)CONCAT11(*puVar3,puVar3[1]);
    pbVar5 = puVar4 + uVar19;
    uVar14 = (uint)CONCAT11(*puVar4,puVar4[1]);
    pbVar6 = pbVar5 + uVar19;
    uVar20 = (int)(short)((ushort)*pbVar5 << 8) | (uint)pbVar5[1];
    uVar11 = (uint)CONCAT11(*pbVar6,pbVar6[1]);
  }
LAB_144e23f78:
  if (uVar11 == 0) {
    uVar19 = uVar20 + uVar10;
    uVar15 = uVar19 & 0xffff;
    if (param_3 == '\0') {
      return uVar15;
    }
    if (*(uint *)(*param_1 + 0x10) <= uVar15) {
      if (((int)uVar19 < 0) && (-1 < (int)(uVar20 + uVar21))) {
        uVar10 = -uVar20;
        uVar15 = 0;
      }
      else {
        uVar15 = 0;
        if (((int)uVar19 < 0x10000) && (uVar15 = 0, 0xffff < (int)(uVar20 + uVar21))) {
          uVar10 = 0x10000 - uVar20;
          uVar15 = 0;
        }
      }
    }
  }
  else {
    pbVar6 = pbVar6 + (uVar11 + (uVar10 - uVar14) * 2);
    if ((param_3 == '\0') || (uVar15 = 0, pbVar6 <= pbVar8)) {
      uVar15 = 0;
      if ((CONCAT11(*pbVar6,pbVar6[1]) != 0) &&
         (uVar15 = uVar20 + CONCAT11(*pbVar6,pbVar6[1]) & 0xffff,
         *(uint *)(*param_1 + 0x10) <= uVar15)) {
        uVar15 = 0;
      }
    }
  }
LAB_144e23ca6:
  if (param_3 != '\0') {
    if ((uVar21 < uVar10) && (uVar16 = uVar16 + 1, uVar16 == uVar22)) {
      uVar15 = 0;
    }
    else {
      iVar2 = FUN_144e23930(param_1,uVar16);
      if (iVar2 == 0) {
        *(uint *)(param_1 + 5) = uVar10;
        if (uVar15 == 0) {
          *(uint *)(param_1 + 5) = uVar10;
          FUN_144e23a60(param_1);
          uVar15 = *(uint *)((longlong)param_1 + 0x2c);
        }
        else {
          *(uint *)((longlong)param_1 + 0x2c) = uVar15;
        }
        if (uVar15 != 0) {
          *param_2 = *(uint *)(param_1 + 5);
        }
      }
      else if (uVar15 != 0) {
        *param_2 = uVar10;
      }
    }
  }
  return uVar15;
}



// FUNCTION 144e240b0 FUN_144e240b0 body=319 status=ok
// SIG undefined FUN_144e240b0(void)

void FUN_144e240b0(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (*(int *)((longlong)param_1 + 0x2c) != -1) {
    uVar7 = *(uint *)((longlong)param_1 + 0x34);
    uVar1 = *(int *)((longlong)param_1 + 0x2c) + 1;
    if (uVar7 < *(uint *)(param_1 + 7)) {
      uVar4 = uVar7 * 0xc;
      do {
        lVar3 = (ulonglong)uVar4 + param_1[3];
        uVar5 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar3 + 0x10),
                                           *(undefined1 *)(lVar3 + 0x11)),
                                  *(undefined1 *)(lVar3 + 0x12)),*(undefined1 *)(lVar3 + 0x13));
        uVar6 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar3 + 0x18),
                                           *(undefined1 *)(lVar3 + 0x19)),
                                  *(undefined1 *)(lVar3 + 0x1a)),*(undefined1 *)(lVar3 + 0x1b));
        uVar2 = uVar5;
        if (uVar5 <= uVar1) {
          uVar2 = uVar1;
        }
        while( true ) {
          uVar1 = uVar2;
          if ((CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar3 + 0x14),
                                          *(undefined1 *)(lVar3 + 0x15)),
                                 *(undefined1 *)(lVar3 + 0x16)),*(undefined1 *)(lVar3 + 0x17)) <
               uVar1) || ((uVar5 - uVar1) - 1 < uVar6)) goto LAB_144e241b9;
          uVar2 = (uVar6 - uVar5) + uVar1;
          if (uVar2 != 0) break;
          if (uVar1 == 0xffffffff) goto LAB_144e241c8;
          uVar2 = uVar1 + 1;
        }
        if (uVar2 < *(uint *)(*param_1 + 0x10)) {
          *(uint *)((longlong)param_1 + 0x2c) = uVar1;
          *(uint *)(param_1 + 6) = uVar2;
          *(uint *)((longlong)param_1 + 0x34) = uVar7;
          return;
        }
LAB_144e241b9:
        uVar7 = uVar7 + 1;
        uVar4 = uVar4 + 0xc;
      } while (uVar7 < *(uint *)(param_1 + 7));
    }
  }
LAB_144e241c8:
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}



// FUNCTION 144e241f0 FUN_144e241f0 body=435 status=ok
// SIG undefined FUN_144e241f0(void)

uint FUN_144e241f0(longlong *param_1,uint *param_2,char param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  lVar1 = param_1[3];
  uVar2 = 0;
  uVar9 = *param_2;
  uVar10 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar1 + 0xc),*(undefined1 *)(lVar1 + 0xd)),
                             *(undefined1 *)(lVar1 + 0xe)),*(undefined1 *)(lVar1 + 0xf));
  if (uVar10 != 0) {
    uVar8 = 0xffffffff;
    if (param_3 != '\0') {
      if (0xfffffffe < uVar9) {
        return 0;
      }
      uVar9 = uVar9 + 1;
    }
    uVar7 = 0;
    uVar3 = 0;
    uVar5 = uVar10;
    if (uVar10 != 0) {
      do {
        uVar3 = uVar5 + uVar7 >> 1;
        lVar4 = (ulonglong)(uVar3 * 0xc) + lVar1;
        uVar11 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar4 + 0x10),
                                            *(undefined1 *)(lVar4 + 0x11)),
                                   *(undefined1 *)(lVar4 + 0x12)),*(undefined1 *)(lVar4 + 0x13));
        uVar8 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar4 + 0x14),
                                           *(undefined1 *)(lVar4 + 0x15)),
                                  *(undefined1 *)(lVar4 + 0x16)),*(undefined1 *)(lVar4 + 0x17));
        uVar6 = uVar3;
        if (uVar11 <= uVar9) {
          if (uVar9 <= uVar8) {
            uVar2 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar4 + 0x18),
                                               *(undefined1 *)(lVar4 + 0x19)),
                                      *(undefined1 *)(lVar4 + 0x1a)),*(undefined1 *)(lVar4 + 0x1b));
            if ((uVar11 - uVar9) - 1 < uVar2) {
              uVar2 = 0;
            }
            else {
              uVar2 = (uVar2 - uVar11) + uVar9;
            }
            break;
          }
          uVar7 = uVar3 + 1;
          uVar6 = uVar5;
        }
        uVar5 = uVar6;
      } while (uVar7 < uVar6);
    }
    if (param_3 != '\0') {
      if ((uVar8 < uVar9) && (uVar3 = uVar3 + 1, uVar3 == uVar10)) {
        return 0;
      }
      *(undefined1 *)(param_1 + 5) = 1;
      *(uint *)((longlong)param_1 + 0x2c) = uVar9;
      *(uint *)((longlong)param_1 + 0x34) = uVar3;
      uVar9 = 0;
      if (uVar2 < *(uint *)(*param_1 + 0x10)) {
        uVar9 = uVar2;
      }
      if (uVar9 == 0) {
        FUN_144e240b0(param_1);
        uVar2 = 0;
        if ((char)param_1[5] != '\0') {
          uVar2 = *(uint *)(param_1 + 6);
        }
      }
      else {
        *(uint *)(param_1 + 6) = uVar9;
        uVar2 = uVar9;
      }
      *param_2 = *(uint *)((longlong)param_1 + 0x2c);
    }
  }
  return uVar2;
}



// FUNCTION 144e243b0 FUN_144e243b0 body=246 status=ok
// SIG undefined FUN_144e243b0(void)

void FUN_144e243b0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(int *)((longlong)param_1 + 0x2c) != -1) {
    uVar4 = *(uint *)((longlong)param_1 + 0x34);
    uVar3 = *(int *)((longlong)param_1 + 0x2c) + 1;
    if (uVar4 < *(uint *)(param_1 + 7)) {
      uVar5 = uVar4 * 0xc;
      do {
        lVar2 = (ulonglong)uVar5 + param_1[3];
        uVar1 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar2 + 0x10),
                                           *(undefined1 *)(lVar2 + 0x11)),
                                  *(undefined1 *)(lVar2 + 0x12)),*(undefined1 *)(lVar2 + 0x13));
        if (uVar1 <= uVar3) {
          uVar1 = uVar3;
        }
        uVar3 = uVar1;
        if (((uVar3 <= CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar2 + 0x14),
                                                  *(undefined1 *)(lVar2 + 0x15)),
                                         *(undefined1 *)(lVar2 + 0x16)),
                                *(undefined1 *)(lVar2 + 0x17))) &&
            (uVar1 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar2 + 0x18),
                                                *(undefined1 *)(lVar2 + 0x19)),
                                       *(undefined1 *)(lVar2 + 0x1a)),*(undefined1 *)(lVar2 + 0x1b))
            , uVar1 != 0)) && (uVar1 < *(uint *)(*param_1 + 0x10))) {
          *(uint *)((longlong)param_1 + 0x2c) = uVar3;
          *(uint *)(param_1 + 6) = uVar1;
          *(uint *)((longlong)param_1 + 0x34) = uVar4;
          return;
        }
        uVar4 = uVar4 + 1;
        uVar5 = uVar5 + 0xc;
      } while (uVar4 < *(uint *)(param_1 + 7));
    }
  }
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}



// FUNCTION 144e244b0 FUN_144e244b0 body=412 status=ok
// SIG undefined FUN_144e244b0(void)

uint FUN_144e244b0(longlong *param_1,uint *param_2,char param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  lVar1 = param_1[3];
  uVar10 = *param_2;
  uVar2 = 0;
  uVar9 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar1 + 0xc),*(undefined1 *)(lVar1 + 0xd)),
                            *(undefined1 *)(lVar1 + 0xe)),*(undefined1 *)(lVar1 + 0xf));
  if (uVar9 != 0) {
    uVar8 = 0xffffffff;
    if (param_3 != '\0') {
      if (0xfffffffe < uVar10) {
        return 0;
      }
      uVar10 = uVar10 + 1;
    }
    uVar6 = 0;
    uVar7 = 0;
    uVar4 = uVar9;
    if (uVar9 != 0) {
      do {
        uVar7 = uVar4 + uVar6 >> 1;
        lVar3 = (ulonglong)(uVar7 * 0xc) + lVar1;
        uVar8 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar3 + 0x14),
                                           *(undefined1 *)(lVar3 + 0x15)),
                                  *(undefined1 *)(lVar3 + 0x16)),*(undefined1 *)(lVar3 + 0x17));
        uVar5 = uVar7;
        if (CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar3 + 0x10),*(undefined1 *)(lVar3 + 0x11)),
                              *(undefined1 *)(lVar3 + 0x12)),*(undefined1 *)(lVar3 + 0x13)) <=
            uVar10) {
          if (uVar10 <= uVar8) {
            uVar2 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar3 + 0x18),
                                               *(undefined1 *)(lVar3 + 0x19)),
                                      *(undefined1 *)(lVar3 + 0x1a)),*(undefined1 *)(lVar3 + 0x1b));
            break;
          }
          uVar6 = uVar7 + 1;
          uVar5 = uVar4;
        }
        uVar4 = uVar5;
      } while (uVar6 < uVar5);
    }
    if (param_3 != '\0') {
      if ((uVar8 < uVar10) && (uVar7 = uVar7 + 1, uVar7 == uVar9)) {
        return 0;
      }
      *(undefined1 *)(param_1 + 5) = 1;
      *(uint *)((longlong)param_1 + 0x2c) = uVar10;
      *(uint *)((longlong)param_1 + 0x34) = uVar7;
      uVar10 = 0;
      if (uVar2 < *(uint *)(*param_1 + 0x10)) {
        uVar10 = uVar2;
      }
      if (uVar10 == 0) {
        FUN_144e243b0(param_1);
        uVar2 = 0;
        if ((char)param_1[5] != '\0') {
          uVar2 = *(uint *)(param_1 + 6);
        }
      }
      else {
        *(uint *)(param_1 + 6) = uVar10;
        uVar2 = uVar10;
      }
      *param_2 = *(uint *)((longlong)param_1 + 0x2c);
    }
  }
  return uVar2;
}



// FUNCTION 144e24650 FUN_144e24650 body=102 status=ok
// SIG undefined FUN_144e24650(void)

int FUN_144e24650(longlong param_1,uint param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int local_res10 [6];
  
  local_res10[0] = 0;
  if (*(uint *)(param_1 + 0x2c) < param_2) {
    *(undefined8 *)(param_1 + 0x38) = param_3;
    uVar1 = FUN_144b561b0(param_3,4,*(uint *)(param_1 + 0x2c),param_2,
                          *(undefined8 *)(param_1 + 0x30),local_res10);
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    if (local_res10[0] != 0) {
      return local_res10[0];
    }
    *(uint *)(param_1 + 0x2c) = param_2;
  }
  return 0;
}



// FUNCTION 144e246c0 FUN_144e246c0 body=156 status=ok
// SIG undefined FUN_144e246c0(void)

undefined8 FUN_144e246c0(undefined1 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar3 = CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]);
  if (uVar3 != 0) {
    do {
      uVar2 = uVar3 + uVar4 >> 1;
      uVar1 = (uint)CONCAT21(CONCAT11(param_1[(ulonglong)(uVar2 * 4) + 4],
                                      param_1[(ulonglong)(uVar2 * 4) + 5]),
                             param_1[(ulonglong)(uVar2 * 4) + 6]);
      if (uVar1 <= param_2) {
        if (param_2 <= (byte)param_1[(ulonglong)(uVar2 * 4) + 7] + uVar1) {
          return 1;
        }
        uVar4 = uVar2 + 1;
        uVar2 = uVar3;
      }
      uVar3 = uVar2;
    } while (uVar4 < uVar3);
  }
  return 0;
}



// FUNCTION 144e24760 FUN_144e24760 body=152 status=ok
// SIG undefined FUN_144e24760(void)

undefined2 FUN_144e24760(undefined1 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar3 = CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]);
  if (uVar3 != 0) {
    do {
      uVar2 = uVar3 + uVar4 >> 1;
      uVar1 = (uint)CONCAT21(CONCAT11(param_1[(ulonglong)(uVar2 * 5) + 4],
                                      param_1[(ulonglong)(uVar2 * 5) + 5]),
                             param_1[(ulonglong)(uVar2 * 5) + 6]);
      if (uVar1 <= param_2) {
        if (param_2 <= uVar1) {
          return CONCAT11(param_1[(ulonglong)(uVar2 * 5) + 7],param_1[(ulonglong)(uVar2 * 5) + 8]);
        }
        uVar4 = uVar2 + 1;
        uVar2 = uVar3;
      }
      uVar3 = uVar2;
    } while (uVar4 < uVar3);
  }
  return 0;
}



// FUNCTION 144e24800 FUN_144e24800 body=141 status=ok
// SIG undefined FUN_144e24800(void)

undefined1 * FUN_144e24800(undefined1 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar3 = CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]);
  if (uVar3 != 0) {
    do {
      uVar2 = uVar3 + uVar4 >> 1;
      uVar1 = (uint)CONCAT21(CONCAT11(param_1[(ulonglong)(uVar2 * 0xb) + 4],
                                      param_1[(ulonglong)(uVar2 * 0xb) + 5]),
                             param_1[(ulonglong)(uVar2 * 0xb) + 6]);
      if (uVar1 <= param_2) {
        if (param_2 <= uVar1) {
          return param_1 + (ulonglong)(uVar2 * 0xb) + 7;
        }
        uVar4 = uVar2 + 1;
        uVar2 = uVar3;
      }
      uVar3 = uVar2;
    } while (uVar4 < uVar3);
  }
  return (undefined1 *)0x0;
}



// FUNCTION 144e24890 FUN_144e24890 body=66 status=ok
// SIG undefined FUN_144e24890(void)

int FUN_144e24890(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  
  pbVar3 = param_1 + 7;
  iVar2 = 0;
  for (iVar4 = CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]); iVar4 != 0;
      iVar4 = iVar4 + -1) {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 4;
    iVar2 = iVar2 + 1 + (uint)bVar1;
  }
  return iVar2;
}



// FUNCTION 144e248e0 FUN_144e248e0 body=309 status=ok
// SIG undefined FUN_144e248e0(void)

undefined8 FUN_144e248e0(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int local_res8 [2];
  
  pbVar1 = param_2 + 7;
  iVar5 = 0;
  for (iVar7 = CONCAT31(CONCAT21(CONCAT11(*param_2,param_2[1]),param_2[2]),param_2[3]); iVar7 != 0;
      iVar7 = iVar7 + -1) {
    bVar2 = *pbVar1;
    pbVar1 = pbVar1 + 4;
    iVar5 = iVar5 + 1 + (uint)bVar2;
  }
  uVar3 = iVar5 + 1;
  local_res8[0] = 0;
  iVar7 = CONCAT31(CONCAT21(CONCAT11(*param_2,param_2[1]),param_2[2]),param_2[3]);
  if (*(uint *)(param_1 + 0x2c) < uVar3) {
    *(undefined8 *)(param_1 + 0x38) = param_3;
    uVar4 = FUN_144b561b0(param_3,4,*(uint *)(param_1 + 0x2c),uVar3,*(undefined8 *)(param_1 + 0x30),
                          local_res8);
    *(undefined8 *)(param_1 + 0x30) = uVar4;
    if (local_res8[0] != 0) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = uVar3;
  }
  puVar6 = *(uint **)(param_1 + 0x30);
  for (; iVar7 != 0; iVar7 = iVar7 + -1) {
    uVar3 = (uint)CONCAT21(CONCAT11(param_2[4],param_2[5]),param_2[6]);
    iVar5 = (byte)param_2[7] + 1;
    do {
      *puVar6 = uVar3;
      uVar3 = uVar3 + 1;
      puVar6 = puVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    param_2 = param_2 + 4;
  }
  *puVar6 = 0;
  return *(undefined8 *)(param_1 + 0x30);
}



// FUNCTION 144e24a20 FUN_144e24a20 body=264 status=ok
// SIG undefined FUN_144e24a20(void)

uint * FUN_144e24a20(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  uint *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int local_res8 [2];
  
  puVar7 = param_2 + 1;
  puVar9 = param_2 + 2;
  puVar10 = param_2 + 3;
  local_res8[0] = 0;
  uVar8 = CONCAT31(CONCAT21(CONCAT11(*param_2,param_2[1]),*puVar9),*puVar10);
  uVar1 = uVar8 + 1;
  if (*(uint *)(param_1 + 0x2c) < uVar1) {
    *(undefined8 *)(param_1 + 0x38) = param_3;
    uVar6 = FUN_144b561b0(param_3,4,*(uint *)(param_1 + 0x2c),uVar1,*(undefined8 *)(param_1 + 0x30),
                          local_res8);
    *(undefined8 *)(param_1 + 0x30) = uVar6;
    if (local_res8[0] != 0) {
      return (uint *)0x0;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
  }
  puVar5 = *(uint **)(param_1 + 0x30);
  uVar13 = 0;
  if (uVar8 != 0) {
    uVar13 = (ulonglong)uVar8;
    uVar12 = (ulonglong)uVar8;
    puVar11 = puVar5;
    do {
      puVar2 = puVar7 + 3;
      puVar3 = puVar9 + 3;
      puVar7 = puVar7 + 5;
      puVar4 = puVar10 + 3;
      puVar9 = puVar9 + 5;
      puVar10 = puVar10 + 5;
      *puVar11 = (uint)CONCAT21(CONCAT11(*puVar2,*puVar3),*puVar4);
      uVar12 = uVar12 - 1;
      puVar11 = puVar11 + 1;
    } while (uVar12 != 0);
  }
  puVar5[uVar13] = 0;
  return puVar5;
}



// FUNCTION 144e24b30 FUN_144e24b30 body=24 status=ok
// SIG undefined FUN_144e24b30(void)

undefined8 FUN_144e24b30(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res18 [2];
  
  FUN_144e1da90(param_1,param_2,local_res18);
  return local_res18[0];
}



// FUNCTION 144e24b50 FUN_144e24b50 body=406 status=ok
// SIG undefined FUN_144e24b50(void)

void FUN_144e24b50(longlong param_1,longlong param_2,short *param_3)

{
  short sVar1;
  ushort uVar2;
  int iVar4;
  undefined1 auStack_88 [32];
  int local_68 [2];
  short *local_60;
  int local_58 [2];
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  uint uVar3;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = 0;
  iVar4 = *(int *)(param_1 + 0xc) + 0xc;
  sVar1 = 0;
  local_60 = param_3;
  local_68[0] = FUN_144b597a0(param_2,iVar4);
  if (local_68[0] == 0) {
    if (*(short *)(param_1 + 4) != 0) {
      local_68[0] = 0;
      do {
        local_68[0] = FUN_144b5a030(param_2,&DAT_149a1d898,local_58);
        if (local_68[0] != 0) {
          *(short *)(param_1 + 4) = (short)uVar3 + -1;
          break;
        }
        if (((local_50 <= *(uint *)(param_2 + 8)) &&
            ((((local_4c <= *(uint *)(param_2 + 8) - local_50 || (local_58[0] == 0x686d7478)) ||
              (local_58[0] == 0x766d7478)) &&
             ((sVar1 = sVar1 + 1, local_58[0] == 0x68656164 || (local_58[0] == 0x62686564)))))) &&
           ((local_4c < 0x36 ||
            (((local_68[0] = FUN_144b597a0(param_2,local_50 + 0xc), local_68[0] != 0 ||
              (FUN_144b59e60(param_2,local_68), local_68[0] != 0)) ||
             (local_68[0] = FUN_144b597a0(param_2,(uVar3 + 1) * 0x10 + iVar4), local_68[0] != 0)))))
           ) goto LAB_144e24cd9;
        uVar2 = (short)uVar3 + 1;
        uVar3 = (uint)uVar2;
      } while (uVar2 < *(ushort *)(param_1 + 4));
    }
    *local_60 = sVar1;
  }
LAB_144e24cd9:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
}



// FUNCTION 144e24d00 FUN_144e24d00 body=788 status=ok
// SIG undefined FUN_144e24d00(void)

int FUN_144e24d00(longlong param_1,longlong param_2,uint param_3)

{
  undefined8 uVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  ushort *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  int iVar10;
  ushort *puVar11;
  undefined8 *puVar12;
  ushort uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  int local_res10 [2];
  
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  puVar15 = (undefined8 *)0x0;
  uVar3 = FUN_144b59d40(param_2,local_res10);
  uVar16 = (ulonglong)uVar3;
  if (local_res10[0] != 0) {
    return local_res10[0];
  }
  if (*(ushort *)(param_1 + 0x174) < uVar3) {
    return 3;
  }
  puVar6 = (ushort *)FUN_144b561b0(uVar1,2,0,uVar3,0,local_res10);
  puVar7 = puVar15;
  if ((local_res10[0] == 0) &&
     (local_res10[0] = FUN_144b59990(param_2,(uint)uVar3 + (uint)uVar3), puVar7 = (undefined8 *)0x0,
     local_res10[0] == 0)) {
    puVar11 = puVar6;
    uVar14 = uVar16;
    if (uVar3 != 0) {
      do {
        uVar4 = FUN_144b59ba0(param_2);
        *puVar11 = uVar4;
        uVar14 = uVar14 - 1;
        puVar11 = puVar11 + 1;
      } while (uVar14 != 0);
    }
    FUN_144b59ab0(param_2);
    puVar11 = puVar6;
    if (uVar3 != 0) {
      do {
        if ((0x101 < *puVar11) && (iVar10 = *puVar11 - 0x101, (int)puVar15 < iVar10)) {
          puVar15 = (undefined8 *)(ulonglong)(ushort)iVar10;
        }
        uVar16 = uVar16 - 1;
        puVar11 = puVar11 + 1;
      } while (uVar16 != 0);
    }
    uVar4 = (ushort)puVar15;
    puVar7 = (undefined8 *)FUN_144b561b0(uVar1,8,0,puVar15,0,local_res10);
    if (local_res10[0] == 0) {
      uVar13 = 0;
      if (uVar4 != 0) {
        do {
          uVar5 = FUN_144b59870(param_2);
          puVar12 = puVar7;
          if (param_3 <= uVar5) {
            if (uVar13 < uVar4) goto LAB_144e24f71;
            break;
          }
          bVar2 = FUN_144b59cc0(param_2,local_res10);
          uVar16 = (ulonglong)bVar2;
          if (local_res10[0] != 0) goto LAB_144e24fc0;
          if ((param_3 < bVar2) || (uVar5 = FUN_144b59870(param_2), param_3 - bVar2 < uVar5)) {
            iVar10 = FUN_144b59870(param_2);
            uVar16 = (ulonglong)(param_3 - iVar10);
            if ((int)(param_3 - iVar10) < 0) {
              uVar16 = 0;
            }
          }
          uVar8 = FUN_144b561b0(uVar1,1,0,(int)uVar16 + 1,0,local_res10);
          puVar7[uVar13] = uVar8;
          if ((local_res10[0] != 0) ||
             (local_res10[0] = FUN_144b59880(param_2,uVar8), local_res10[0] != 0))
          goto LAB_144e24fc0;
          uVar14 = (ulonglong)uVar13;
          uVar13 = uVar13 + 1;
          *(undefined1 *)(uVar16 + puVar7[uVar14]) = 0;
        } while (uVar13 < uVar4);
      }
      goto LAB_144e24f39;
    }
  }
LAB_144e24fdd:
  FUN_144b56350(uVar1,puVar7);
  FUN_144b56350(uVar1,puVar6);
  return local_res10[0];
LAB_144e24fc0:
  do {
    FUN_144b56350(uVar1,*puVar12);
    *puVar12 = 0;
    puVar15 = (undefined8 *)((longlong)puVar15 + -1);
    puVar12 = puVar12 + 1;
  } while (puVar15 != (undefined8 *)0x0);
  goto LAB_144e24fdd;
  while( true ) {
    uVar13 = uVar13 + 1;
    *puVar9 = 0;
    if (uVar4 <= uVar13) break;
LAB_144e24f71:
    puVar9 = (undefined1 *)FUN_144b561b0(uVar1,1,0,1,0,local_res10);
    puVar7[uVar13] = puVar9;
    if (local_res10[0] != 0) goto LAB_144e24fc0;
  }
LAB_144e24f39:
  *(ushort *)(param_1 + 0x358) = uVar3;
  *(ushort *)(param_1 + 0x35a) = uVar4;
  *(ushort **)(param_1 + 0x360) = puVar6;
  *(undefined8 **)(param_1 + 0x368) = puVar7;
  return 0;
}



// FUNCTION 144e25020 FUN_144e25020 body=262 status=ok
// SIG undefined FUN_144e25020(void)

int FUN_144e25020(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  ushort uVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int local_res18 [2];
  
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  local_res18[0] = param_3;
  uVar2 = FUN_144b59d40(param_2,local_res18);
  if (local_res18[0] == 0) {
    if ((*(ushort *)(param_1 + 0x174) < uVar2) || (0x101 < uVar2 - 1)) {
      local_res18[0] = 3;
    }
    else {
      iVar5 = 0;
      pcVar3 = (char *)FUN_144b561b0(uVar1,1,0,uVar2,0,local_res18);
      if ((local_res18[0] == 0) &&
         (local_res18[0] = FUN_144b59880(param_2,pcVar3,uVar2), local_res18[0] == 0)) {
        pcVar4 = pcVar3;
        if (uVar2 != 0) {
          do {
            if ((*pcVar4 + iVar5 < 0) || ((int)(uint)uVar2 < *pcVar4 + iVar5)) {
              local_res18[0] = 3;
              goto LAB_144e250f7;
            }
            iVar5 = iVar5 + 1;
            pcVar4 = pcVar4 + 1;
          } while (iVar5 < (int)(uint)uVar2);
        }
        *(ushort *)(param_1 + 0x358) = uVar2;
        local_res18[0] = 0;
        *(char **)(param_1 + 0x360) = pcVar3;
      }
      else {
LAB_144e250f7:
        FUN_144b56350(uVar1,pcVar3);
      }
    }
  }
  return local_res18[0];
}



// FUNCTION 144e25130 FUN_144e25130 body=171 status=ok
// SIG undefined FUN_144e25130(void)

undefined8 FUN_144e25130(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  int local_res8 [2];
  
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  uVar4 = (**(code **)(param_1 + 0x2a0))(param_1,0x706f7374,uVar2,local_res8);
  if ((int)uVar4 == 0) {
    iVar3 = FUN_144b59870(uVar2);
    iVar1 = *(int *)(param_1 + 0x270);
    uVar4 = FUN_144b597f0(uVar2,0x20);
    if ((int)uVar4 == 0) {
      if (iVar1 == 0x20000) {
        uVar4 = FUN_144e24d00(param_1,uVar2,iVar3 + local_res8[0]);
      }
      else if (iVar1 == 0x25000) {
        uVar4 = FUN_144e25020(param_1,uVar2,iVar3 + local_res8[0]);
      }
      else {
        uVar4 = 3;
      }
      *(undefined1 *)(param_1 + 0x350) = 1;
    }
  }
  return uVar4;
}



// FUNCTION 144e251e0 FUN_144e251e0 body=339 status=ok
// SIG undefined FUN_144e251e0(void)

ulonglong FUN_144e251e0(longlong *param_1,longlong param_2,uint param_3,longlong param_4)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  lVar4 = *(longlong *)(param_2 + 0xa0);
  iVar1 = *(int *)(*(longlong *)(param_2 + 0x478) + (ulonglong)param_3 * 4);
  if (*(int *)(param_2 + 0x4cc) == 0) {
    uVar2 = 0x8e;
  }
  else {
    uVar2 = FUN_144b597a0(lVar4,*(undefined4 *)(param_2 + 0x4c8));
    if ((int)uVar2 == 0) {
      *param_1 = param_2;
      param_1[1] = lVar4;
      lVar4 = *(longlong *)(param_2 + 0x78);
      param_1[3] = param_4;
      param_1[2] = lVar4 + 0x68;
      *(short *)(param_1 + 4) = (short)(uVar2 & 0xffffffff);
      *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(param_2 + 0x4c8);
      *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x4cc);
      param_1[7] = *(longlong *)(param_2 + 0x460);
      uVar3 = iVar1 * 0x30;
      param_1[8] = (ulonglong)*(uint *)(param_2 + 0x468) + *(longlong *)(param_2 + 0x460);
      if (uVar3 + 0x37 <= *(uint *)(param_2 + 0x468)) {
        lVar4 = (ulonglong)uVar3 + param_1[7];
        uVar3 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar4 + 8),*(undefined1 *)(lVar4 + 9)),
                                  *(undefined1 *)(lVar4 + 10)),*(undefined1 *)(lVar4 + 0xb));
        *(uint *)((longlong)param_1 + 0x2c) = uVar3;
        uVar5 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar4 + 0x10),
                                           *(undefined1 *)(lVar4 + 0x11)),
                                  *(undefined1 *)(lVar4 + 0x12)),*(undefined1 *)(lVar4 + 0x13));
        *(uint *)(param_1 + 6) = uVar5;
        *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)(lVar4 + 0x36);
        if ((uVar3 <= *(uint *)(param_2 + 0x468)) &&
           (uVar5 <= *(uint *)(param_2 + 0x468) - uVar3 >> 3)) {
          return uVar2 & 0xffffffff;
        }
      }
      uVar2 = 3;
    }
  }
  return uVar2;
}



// FUNCTION 144e25340 FUN_144e25340 body=242 status=ok
// SIG undefined FUN_144e25340(void)

undefined8 FUN_144e25340(longlong *param_1,char param_2)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  uint *puVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  
  puVar4 = (uint *)param_1[2];
  if ((char)param_1[4] == '\0') {
    return 6;
  }
  uVar2 = *(ushort *)param_1[3];
  uVar3 = ((ushort *)param_1[3])[1];
  puVar4[1] = (uint)uVar3;
  uVar8 = (uint)uVar2;
  *puVar4 = uVar8;
  cVar1 = *(char *)((longlong)param_1 + 0x22);
  if (cVar1 == '\x01') {
    *(undefined1 *)((longlong)puVar4 + 0x1a) = 1;
    puVar4[2] = uVar3 + 7 >> 3;
    uVar5 = 2;
  }
  else {
    uVar6 = (uint)uVar3;
    if (cVar1 == '\x02') {
      *(undefined1 *)((longlong)puVar4 + 0x1a) = 3;
      puVar4[2] = uVar6 + 3 >> 2;
      uVar5 = 4;
    }
    else if (cVar1 == '\x04') {
      *(undefined1 *)((longlong)puVar4 + 0x1a) = 4;
      puVar4[2] = uVar6 + 1 >> 1;
      uVar5 = 0x10;
    }
    else if (cVar1 == '\b') {
      puVar4[2] = uVar6;
      uVar5 = 0x100;
      *(undefined1 *)((longlong)puVar4 + 0x1a) = 2;
    }
    else {
      if (cVar1 != ' ') {
        return 3;
      }
      puVar4[2] = (uint)uVar3 << 2;
      uVar5 = 0x100;
      *(undefined1 *)((longlong)puVar4 + 0x1a) = 7;
    }
  }
  *(undefined2 *)(puVar4 + 6) = uVar5;
  if ((uVar8 * puVar4[2] == 0) || (param_2 != '\0')) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_144b58670(*(undefined8 *)(*param_1 + 0x78));
    if ((int)uVar7 == 0) {
      *(undefined1 *)((longlong)param_1 + 0x21) = 1;
      return uVar7;
    }
  }
  return uVar7;
}



// FUNCTION 144e25440 FUN_144e25440 body=1234 status=ok
// SIG undefined FUN_144e25440(void)

undefined8
FUN_144e25440(longlong param_1,uint param_2,undefined4 param_3,undefined4 param_4,uint param_5,
             undefined1 param_6)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  char *pcVar7;
  ushort *puVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  char *pcVar17;
  
  puVar15 = (undefined1 *)((ulonglong)*(uint *)(param_1 + 0x2c) + *(longlong *)(param_1 + 0x38));
  pcVar7 = *(char **)(param_1 + 0x40);
  iVar11 = *(int *)(param_1 + 0x30);
  puVar16 = puVar15;
  if (100 < param_5) {
    return 8;
  }
  for (; iVar11 != 0; iVar11 = iVar11 + -1) {
    uVar12 = (uint)CONCAT11(*puVar16,puVar16[1]);
    if ((uVar12 <= param_2) && (param_2 <= CONCAT11(puVar16[2],puVar16[3]))) {
      uVar10 = CONCAT31(CONCAT21(CONCAT11(puVar16[4],puVar16[5]),puVar16[6]),puVar16[7]);
      if ((uint)((int)pcVar7 - (int)puVar15) < uVar10) {
        return 8;
      }
      puVar15 = puVar15 + uVar10;
      if (puVar15 + 8 <= pcVar7) {
        uVar1 = puVar15[2];
        uVar2 = puVar15[4];
        uVar3 = puVar15[3];
        puVar16 = puVar15 + 8;
        uVar4 = puVar15[5];
        uVar5 = puVar15[6];
        uVar6 = puVar15[7];
        switch(CONCAT11(*puVar15,puVar15[1])) {
        case 1:
          puVar16 = puVar16 + (param_2 - uVar12) * 4;
          if (puVar16 + 8 <= pcVar7) {
            uVar10 = CONCAT31(CONCAT21(CONCAT11(*puVar16,puVar16[1]),puVar16[2]),puVar16[3]);
            uVar12 = CONCAT31(CONCAT21(CONCAT11(puVar16[4],puVar16[5]),puVar16[6]),puVar16[7]);
            if (uVar10 != uVar12) goto LAB_144e258b7;
          }
          break;
        case 2:
          if (puVar15 + 0x14 <= pcVar7) {
            puVar8 = *(ushort **)(param_1 + 0x18);
            iVar11 = CONCAT31(CONCAT21(CONCAT11(*puVar16,puVar15[9]),puVar15[10]),puVar15[0xb]);
            if (puVar15 + 0x11 <= pcVar7) {
              *puVar8 = (ushort)(byte)puVar15[0xc];
              puVar8[1] = (ushort)(byte)puVar15[0xd];
              puVar8[2] = (short)(char)puVar15[0xe];
              puVar8[3] = (short)(char)puVar15[0xf];
              puVar8[4] = (ushort)(byte)puVar15[0x10];
              if (puVar15 + 0x14 <= pcVar7) {
                puVar8[5] = (short)(char)puVar15[0x11];
                puVar8[6] = (short)(char)puVar15[0x12];
                puVar8[7] = (ushort)(byte)puVar15[0x13];
                uVar10 = (param_2 - uVar12) * iVar11;
                *(undefined1 *)(param_1 + 0x20) = 1;
                uVar12 = iVar11 + uVar10;
                goto LAB_144e258b7;
              }
            }
          }
          break;
        case 3:
          puVar16 = puVar16 + (param_2 - uVar12) * 2;
          if (puVar16 + 4 <= pcVar7) {
            uVar10 = (uint)CONCAT11(*puVar16,puVar16[1]);
            uVar12 = (uint)CONCAT11(puVar16[2],puVar16[3]);
            if (uVar10 != uVar12) goto LAB_144e258b7;
          }
          break;
        case 4:
          pcVar17 = puVar15 + 0xc;
          if ((((pcVar17 <= pcVar7) &&
               (uVar14 = CONCAT31(CONCAT21(CONCAT11(puVar15[8],puVar15[9]),puVar15[10]),puVar15[0xb]
                                 ), puVar15 + 0x10 <= pcVar7)) &&
              (uVar14 <= (int)((longlong)pcVar7 - (longlong)pcVar17 >> 2) - 1U)) &&
             (uVar13 = 0, uVar14 != 0)) goto LAB_144e25740;
          break;
        case 5:
        case 0x13:
          if (puVar15 + 0x18 <= pcVar7) {
            puVar8 = *(ushort **)(param_1 + 0x18);
            iVar11 = CONCAT31(CONCAT21(CONCAT11(*puVar16,puVar15[9]),puVar15[10]),puVar15[0xb]);
            if (puVar15 + 0x11 <= pcVar7) {
              *puVar8 = (ushort)(byte)puVar15[0xc];
              puVar8[1] = (ushort)(byte)puVar15[0xd];
              puVar8[2] = (short)(char)puVar15[0xe];
              puVar8[3] = (short)(char)puVar15[0xf];
              puVar8[4] = (ushort)(byte)puVar15[0x10];
              if (puVar15 + 0x14 <= pcVar7) {
                puVar8[5] = (short)(char)puVar15[0x11];
                puVar8[6] = (short)(char)puVar15[0x12];
                puVar8[7] = (ushort)(byte)puVar15[0x13];
                *(undefined1 *)(param_1 + 0x20) = 1;
                puVar16 = puVar15 + 0x17;
                uVar12 = CONCAT31(CONCAT21(CONCAT11(puVar15[0x14],puVar15[0x15]),puVar15[0x16]),
                                  *puVar16);
                if ((uVar12 <= (uint)((longlong)pcVar7 - (longlong)(puVar15 + 0x18) >> 1)) &&
                   (uVar10 = 0, uVar12 != 0)) goto LAB_144e25880;
              }
            }
          }
        }
      }
      break;
    }
    puVar16 = puVar16 + 8;
  }
  goto switchD_144e25575_caseD_6;
  while (uVar10 = uVar10 + 1, uVar10 < uVar12) {
LAB_144e25880:
    puVar15 = puVar16 + 1;
    puVar16 = puVar16 + 2;
    if (CONCAT11(*puVar15,*puVar16) == param_2) {
      if (uVar10 < uVar12) {
        uVar10 = uVar10 * iVar11;
        uVar12 = iVar11 + uVar10;
        goto LAB_144e258b7;
      }
      break;
    }
  }
  goto switchD_144e25575_caseD_6;
  while( true ) {
    pcVar17 = pcVar17 + 4;
    uVar13 = uVar13 + 1;
    if (uVar14 <= uVar13) break;
LAB_144e25740:
    if (CONCAT11(*pcVar17,pcVar17[1]) == param_2) {
      uVar10 = (uint)CONCAT11(pcVar17[2],pcVar17[3]);
      uVar12 = (uint)CONCAT11(pcVar17[6],pcVar17[7]);
      if (uVar13 < uVar14) {
LAB_144e258b7:
        if (uVar10 <= uVar12) {
          uVar9 = FUN_144e25fd0(param_1,CONCAT11(uVar1,uVar3),
                                CONCAT31(CONCAT21(CONCAT11(uVar2,uVar4),uVar5),uVar6) + uVar10,
                                uVar12 - uVar10,param_3,param_4,param_5,param_6);
          return uVar9;
        }
      }
      break;
    }
  }
switchD_144e25575_caseD_6:
  uVar9 = 0x9d;
  if (param_5 != 0) {
    uVar9 = 0x15;
  }
  return uVar9;
}



// FUNCTION 144e25960 FUN_144e25960 body=472 status=ok
// SIG undefined FUN_144e25960(void)

undefined8 FUN_144e25960(longlong param_1,byte *param_2,byte *param_3,uint param_4,int param_5)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint *puVar4;
  sbyte sVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  
  puVar4 = *(uint **)(param_1 + 0x10);
  uVar6 = (uint)(*(ushort **)(param_1 + 0x18))[1];
  uVar3 = puVar4[2];
  uVar2 = **(ushort **)(param_1 + 0x18);
  uVar13 = (uint)uVar2;
  uVar8 = *(byte *)(param_1 + 0x22) * uVar6;
  if ((((-1 < (int)param_4) && (uVar6 + param_4 <= puVar4[1])) && (-1 < param_5)) &&
     ((uVar13 + param_5 <= *puVar4 && (param_2 + (int)((uVar8 + 7 >> 3) * uVar13) <= param_3)))) {
    pbVar7 = (byte *)((longlong)(int)(uVar3 * param_5 + ((int)param_4 >> 3)) +
                     *(longlong *)(puVar4 + 4));
    param_4 = param_4 & 7;
    if (param_4 == 0) {
      if (uVar2 != 0) {
        do {
          pbVar12 = pbVar7;
          uVar6 = uVar8;
          if (7 < uVar8) {
            uVar9 = (ulonglong)(uVar8 >> 3);
            uVar6 = uVar8 + (uVar8 >> 3) * -8;
            do {
              bVar1 = *param_2;
              param_2 = param_2 + 1;
              *pbVar12 = *pbVar12 | bVar1;
              pbVar12 = pbVar12 + 1;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          if (0 < (int)uVar6) {
            *pbVar12 = *pbVar12 | (byte)(0xff00 >> ((byte)uVar6 & 0x1f)) & *param_2;
            param_2 = param_2 + 1;
          }
          uVar13 = uVar13 - 1;
          pbVar7 = pbVar7 + (int)uVar3;
        } while (0 < (int)uVar13);
      }
    }
    else if (uVar2 != 0) {
      do {
        uVar11 = 0;
        sVar5 = (sbyte)param_4;
        pbVar12 = pbVar7;
        uVar6 = uVar8;
        if (7 < uVar8) {
          uVar9 = (ulonglong)(uVar8 >> 3);
          uVar6 = uVar8 + (uVar8 >> 3) * -8;
          do {
            uVar10 = uVar11 | *param_2;
            param_2 = param_2 + 1;
            uVar11 = uVar10 << 8;
            *pbVar12 = *pbVar12 | (byte)(uVar10 >> sVar5);
            pbVar12 = pbVar12 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        if (0 < (int)uVar6) {
          uVar11 = uVar11 | 0xff00U >> ((byte)uVar6 & 0x1f) & (uint)*param_2;
          param_2 = param_2 + 1;
        }
        *pbVar12 = *pbVar12 | (byte)(uVar11 >> sVar5);
        if (8 < (int)(uVar6 + param_4)) {
          pbVar12[1] = pbVar12[1] | (byte)((uVar11 << 8) >> sVar5);
        }
        uVar13 = uVar13 - 1;
        pbVar7 = pbVar7 + (int)uVar3;
      } while (0 < (int)uVar13);
      return 0;
    }
    return 0;
  }
  return 3;
}



// FUNCTION 144e25b40 FUN_144e25b40 body=583 status=ok
// SIG undefined FUN_144e25b40(void)

undefined8 FUN_144e25b40(longlong param_1,byte *param_2,byte *param_3,uint param_4,int param_5)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  
  puVar3 = *(uint **)(param_1 + 0x10);
  uVar11 = (uint)(*(ushort **)(param_1 + 0x18))[1];
  uVar6 = **(ushort **)(param_1 + 0x18);
  uVar14 = (uint)uVar6;
  uVar2 = puVar3[2];
  uVar15 = *(byte *)(param_1 + 0x22) * uVar11;
  if ((((-1 < (int)param_4) && (uVar11 + param_4 <= puVar3[1])) && (-1 < param_5)) &&
     ((uVar14 + param_5 <= *puVar3 && (param_2 + ((int)(uVar15 * uVar14 + 7) >> 3) <= param_3)))) {
    if ((uVar15 != 0) && (uVar6 != 0)) {
      uVar8 = param_4 & 7;
      uVar7 = 0;
      uVar5 = 0;
      pbVar9 = (byte *)((longlong)(int)(uVar2 * param_5 + ((int)param_4 >> 3)) +
                       *(longlong *)(puVar3 + 4));
      uVar11 = uVar14;
      if (uVar6 != 0) {
        do {
          pbVar13 = pbVar9;
          uVar12 = uVar15;
          if (uVar8 != 0) {
            if ((int)(8 - uVar8) <= (int)uVar15) {
              uVar12 = 8 - uVar8;
            }
            if (uVar11 == uVar14) {
              uVar5 = (ushort)*param_2;
              param_2 = param_2 + 1;
              uVar7 = uVar8;
            }
            else if ((int)uVar7 < (int)uVar12) {
              if (param_2 < param_3) {
                uVar5 = uVar5 | *param_2;
                param_2 = param_2 + 1;
              }
              uVar7 = uVar7 + (8 - uVar12);
            }
            else {
              uVar5 = uVar5 >> 8;
              uVar7 = uVar7 - uVar12;
            }
            pbVar13 = pbVar9 + 1;
            uVar6 = uVar5 >> ((byte)uVar7 & 0x1f);
            uVar5 = uVar5 << 8;
            *pbVar9 = *pbVar9 | ~(-1 << ((byte)uVar12 & 0x1f)) <<
                                (((char)-uVar12 - (char)uVar8) + 8U & 0x1f) & (byte)uVar6;
            uVar12 = -uVar12 + uVar15;
          }
          bVar4 = (byte)uVar7;
          if (7 < (int)uVar12) {
            uVar10 = (ulonglong)(uVar12 >> 3);
            uVar12 = uVar12 + (uVar12 >> 3) * -8;
            do {
              bVar1 = *param_2;
              param_2 = param_2 + 1;
              uVar6 = uVar5 | bVar1;
              uVar5 = (ushort)bVar1 << 8;
              *pbVar13 = *pbVar13 | (byte)(uVar6 >> (bVar4 & 0x1f));
              pbVar13 = pbVar13 + 1;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          if (0 < (int)uVar12) {
            if ((int)uVar7 < (int)uVar12) {
              if (param_2 < param_3) {
                uVar5 = uVar5 | *param_2;
                param_2 = param_2 + 1;
              }
              *pbVar13 = *pbVar13 |
                         (byte)(uVar5 >> (bVar4 & 0x1f)) & (byte)(0xff00 >> ((byte)uVar12 & 0x1f));
              uVar7 = uVar7 + (8 - uVar12);
              uVar5 = uVar5 << 8;
            }
            else {
              *pbVar13 = *pbVar13 |
                         (byte)(uVar5 >> (bVar4 & 0x1f)) & (byte)(0xff00 >> ((byte)uVar12 & 0x1f));
              uVar7 = uVar7 - uVar12;
            }
          }
          uVar11 = uVar11 - 1;
          pbVar9 = pbVar9 + (int)uVar2;
        } while (0 < (int)uVar11);
      }
      return 0;
    }
    return 0;
  }
  return 3;
}



// FUNCTION 144e25d90 FUN_144e25d90 body=405 status=ok
// SIG undefined FUN_144e25d90(void)

int FUN_144e25d90(longlong param_1,undefined1 *param_2,undefined1 *param_3,int param_4,int param_5,
                 int param_6)

{
  undefined1 *puVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  byte bVar9;
  undefined1 uVar10;
  longlong lVar11;
  ushort uVar12;
  int iVar13;
  undefined1 *puVar14;
  uint uVar15;
  
  lVar11 = *(longlong *)(param_1 + 0x18);
  puVar14 = param_2 + 2;
  iVar13 = 0;
  cVar4 = *(char *)(lVar11 + 6);
  cVar5 = *(char *)(lVar11 + 4);
  bVar6 = *(byte *)(lVar11 + 8);
  cVar7 = *(char *)(lVar11 + 10);
  cVar8 = *(char *)(lVar11 + 0xc);
  bVar9 = *(byte *)(lVar11 + 0xe);
  if (puVar14 <= param_3) {
    uVar12 = CONCAT11(*param_2,param_2[1]);
    if (puVar14 + (uint)uVar12 * 4 <= param_3) {
      uVar15 = 0;
      if (uVar12 != 0) {
        do {
          uVar10 = *puVar14;
          puVar1 = puVar14 + 1;
          pcVar2 = puVar14 + 2;
          pcVar3 = puVar14 + 3;
          puVar14 = puVar14 + 4;
          iVar13 = FUN_144e25440(param_1,CONCAT11(uVar10,*puVar1),*pcVar2 + param_4,
                                 *pcVar3 + param_5,param_6 + 1,0);
          if (iVar13 != 0) break;
          uVar15 = uVar15 + 1;
        } while (uVar15 < uVar12);
      }
      *(short *)(*(longlong *)(param_1 + 0x18) + 4) = (short)cVar5;
      *(short *)(*(longlong *)(param_1 + 0x18) + 6) = (short)cVar4;
      *(ushort *)(*(longlong *)(param_1 + 0x18) + 8) = (ushort)bVar6;
      *(short *)(*(longlong *)(param_1 + 0x18) + 10) = (short)cVar7;
      *(short *)(*(longlong *)(param_1 + 0x18) + 0xc) = (short)cVar8;
      *(ushort *)(*(longlong *)(param_1 + 0x18) + 0xe) = (ushort)bVar9;
      *(ushort *)(*(longlong *)(param_1 + 0x18) + 2) =
           (ushort)*(byte *)(*(longlong *)(param_1 + 0x10) + 4);
      **(ushort **)(param_1 + 0x18) = (ushort)**(byte **)(param_1 + 0x10);
      return iVar13;
    }
  }
  return 3;
}



// FUNCTION 144e25f30 FUN_144e25f30 body=159 status=ok
// SIG undefined FUN_144e25f30(void)

undefined8
FUN_144e25f30(longlong *param_1,undefined1 *param_2,longlong param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined8 uVar1;
  uint uVar2;
  
  if (3 < param_3 - (longlong)param_2) {
    uVar2 = CONCAT31(CONCAT21(CONCAT11(*param_2,param_2[1]),param_2[2]),param_2[3]);
    if (uVar2 <= (uint)((int)param_3 - (int)(param_2 + 4))) {
      uVar1 = FUN_144e21670(*(undefined8 *)(*param_1 + 0x78),param_4,param_5,
                            *(undefined1 *)((longlong)param_1 + 0x22),param_1[3],
                            *(undefined8 *)(param_1[1] + 0x30),param_2 + 4,uVar2,0,0);
      return uVar1;
    }
  }
  return 3;
}



// FUNCTION 144e25fd0 FUN_144e25fd0 body=583 status=ok
// SIG undefined FUN_144e25fd0(void)

ulonglong FUN_144e25fd0(longlong param_1,int param_2,int param_3,uint param_4,undefined4 param_5,
                       undefined4 param_6,undefined4 param_7,char param_8)

{
  byte *pbVar1;
  ushort uVar2;
  undefined8 uVar3;
  ushort *puVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  code *pcVar8;
  byte *pbVar9;
  uint uVar10;
  byte *local_res8;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  if ((param_4 == 0) || (*(uint *)(param_1 + 0x28) < param_3 + param_4)) {
    return 6;
  }
  uVar6 = FUN_144b597a0(uVar3,*(int *)(param_1 + 0x24) + param_3);
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  uVar6 = FUN_144b59b00(uVar3,(ulonglong)param_4,&local_res8);
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  pbVar1 = local_res8 + param_4;
  pbVar9 = local_res8;
  switch(param_2 + -1) {
  case 0:
  case 1:
  case 7:
  case 0x10:
    puVar4 = *(ushort **)(param_1 + 0x18);
    pbVar9 = local_res8 + 5;
    if (pbVar1 < pbVar9) goto LAB_144e260af;
    *puVar4 = (ushort)*local_res8;
    puVar4[1] = (ushort)local_res8[1];
    puVar4[2] = (short)(char)local_res8[2];
    puVar4[3] = (short)(char)local_res8[3];
    puVar4[4] = (ushort)local_res8[4];
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    *(undefined1 *)(param_1 + 0x20) = 1;
    break;
  default:
switchD_144e26068_caseD_2:
    break;
  case 5:
  case 6:
  case 8:
  case 0x11:
    puVar4 = *(ushort **)(param_1 + 0x18);
    if (local_res8 + 5 <= pbVar1) {
      *puVar4 = (ushort)*local_res8;
      puVar4[1] = (ushort)local_res8[1];
      puVar4[2] = (short)(char)local_res8[2];
      puVar4[3] = (short)(char)local_res8[3];
      pbVar9 = local_res8 + 8;
      puVar4[4] = (ushort)local_res8[4];
      if (pbVar9 <= pbVar1) {
        puVar4[5] = (short)(char)local_res8[5];
        puVar4[6] = (short)(char)local_res8[6];
        puVar4[7] = (ushort)local_res8[7];
        *(undefined1 *)(param_1 + 0x20) = 1;
        goto switchD_144e26068_caseD_2;
      }
    }
LAB_144e260af:
    uVar5 = 6;
    goto LAB_144e261dd;
  }
  uVar5 = 0;
  switch(param_2 + -1) {
  case 0:
  case 5:
    pcVar8 = FUN_144e25960;
    break;
  case 1:
  case 6:
    uVar2 = (*(ushort **)(param_1 + 0x18))[1];
    uVar7 = (uint)**(ushort **)(param_1 + 0x18);
    uVar10 = (uVar2 + 7 >> 3) * uVar7;
    if ((uVar10 <= uVar7 * uVar2 + 7 >> 3) || (uVar10 - ((int)pbVar1 - (int)pbVar9) != 0))
    goto switchD_144e26127_caseD_4;
    pcVar8 = FUN_144e25960;
    break;
  default:
    uVar5 = 8;
    goto LAB_144e261dd;
  case 4:
switchD_144e26127_caseD_4:
    pcVar8 = FUN_144e25b40;
    break;
  case 7:
    pbVar9 = pbVar9 + 1;
    if (pbVar1 < pbVar9) goto LAB_144e261dd;
  case 8:
    pcVar8 = FUN_144e25d90;
    break;
  case 0x10:
  case 0x11:
  case 0x12:
    pcVar8 = FUN_144e25f30;
  }
  if (((*(char *)(param_1 + 0x21) != '\0') || (uVar5 = FUN_144e25340(param_1,param_8), uVar5 == 0))
     && (param_8 == '\0')) {
    uVar5 = (*pcVar8)(param_1,pbVar9,pbVar1,param_5,param_6,param_7);
  }
LAB_144e261dd:
  FUN_144b59b40(uVar3,&local_res8);
  return (ulonglong)uVar5;
}



// FUNCTION 144e26290 FUN_144e26290 body=685 status=ok
// SIG undefined FUN_144e26290(void)

ulonglong FUN_144e26290(longlong param_1,uint param_2,uint param_3,longlong param_4,
                       undefined8 param_5,short *param_6,undefined1 param_7)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  ushort local_res10 [4];
  undefined1 local_res18 [8];
  
  iVar10 = 0;
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x478) + (ulonglong)param_2 * 4);
  param_6[0] = 0;
  param_6[1] = 0;
  lVar8 = (ulonglong)(uint)(iVar6 * 4) + *(longlong *)(param_1 + 0x460);
  uVar9 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar8 + 8),*(undefined1 *)(lVar8 + 9)),
                            *(undefined1 *)(lVar8 + 10)),*(undefined1 *)(lVar8 + 0xb));
  if (param_3 <= *(uint *)(param_1 + 0x10)) {
    do {
      if ((*(uint *)(param_1 + 0x4cc) <= uVar9) ||
         (*(uint *)(param_1 + 0x4cc) - uVar9 < param_3 * 4 + 0xc)) {
        return 3;
      }
      uVar7 = FUN_144b597a0(param_4,uVar9 + 4 + param_3 * 4 + *(int *)(param_1 + 0x4c8));
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      uVar7 = FUN_144b59990(param_4,8);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      uVar4 = FUN_144b59be0(param_4);
      uVar5 = FUN_144b59be0(param_4);
      FUN_144b59ab0(param_4);
      if (uVar4 == uVar5) {
        return 0x9d;
      }
      if (uVar5 <= uVar4) {
        return 3;
      }
      if (uVar5 - uVar4 < 8) {
        return 3;
      }
      if (*(int *)(param_1 + 0x4cc) - uVar9 < uVar5) {
        return 3;
      }
      uVar7 = FUN_144b597a0(param_4,uVar4 + uVar9 + *(int *)(param_1 + 0x4c8));
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      uVar7 = FUN_144b59990(param_4,uVar5 - uVar4);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      sVar1 = FUN_144b59ba0(param_4);
      sVar2 = FUN_144b59ba0(param_4);
      iVar6 = FUN_144b59be0(param_4);
      if (iVar6 != 0x64757065) {
        if (iVar6 != 0x6a706720) {
          if (iVar6 == 0x706e6720) {
            uVar9 = FUN_144e21670(*(undefined8 *)(param_1 + 0x78),0,0,0x20,param_6,
                                  *(undefined8 *)(param_4 + 0x30),*(undefined8 *)(param_4 + 0x38),
                                  (uVar5 - uVar4) + -8,1,param_7);
            goto LAB_144e264b9;
          }
          if ((iVar6 != 0x7267626c) && (iVar6 != 0x74696666)) {
            uVar9 = 7;
            goto LAB_144e264b9;
          }
        }
        uVar9 = 2;
LAB_144e264b9:
        FUN_144b59ab0(param_4);
        if (uVar9 == 0) {
          FUN_144e1e840(param_1,0,param_3,local_res18,local_res10);
          param_6[3] = *param_6 - sVar2;
          param_6[2] = sVar1;
          param_6[4] = (short)((int)((uint)*(ushort *)(*(longlong *)(param_1 + 0x80) + 0x18) *
                                    (uint)local_res10[0]) / (int)(uint)*(ushort *)(param_1 + 0x112))
          ;
        }
        return (ulonglong)uVar9;
      }
      if (3 < iVar10) {
        uVar9 = 3;
        goto LAB_144e264b9;
      }
      uVar3 = FUN_144b59ba0(param_4);
      param_3 = (uint)uVar3;
      FUN_144b59ab0(param_4);
      iVar10 = iVar10 + 1;
    } while ((uint)uVar3 <= *(uint *)(param_1 + 0x10));
  }
  return 6;
}



// FUNCTION 144e26540 FUN_144e26540 body=79 status=ok
// SIG undefined FUN_144e26540(void)

undefined8 FUN_144e26540(int *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  FUN_144e26ad0(param_2,(iVar1 << 2) >> 8,(iVar2 << 2) >> 8);
  *(int *)(param_2 + 0x14c) = iVar2 << 2;
  *(int *)(param_2 + 0x148) = iVar1 << 2;
  return 0;
}



// FUNCTION 144e26590 FUN_144e26590 body=35 status=ok
// SIG undefined FUN_144e26590(void)

undefined8 FUN_144e26590(int *param_1,undefined8 param_2)

{
  FUN_144e26b80(param_2,*param_1 << 2,param_1[1] << 2);
  return 0;
}



// FUNCTION 144e265c0 FUN_144e265c0 body=28 status=ok
// SIG undefined FUN_144e265c0(void)

undefined8 FUN_144e265c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144e26ee0(param_3,param_1,param_2);
  return 0;
}



// FUNCTION 144e265e0 FUN_144e265e0 body=31 status=ok
// SIG undefined FUN_144e265e0(void)

undefined8
FUN_144e265e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_144e270c0(param_4,param_1,param_2,param_3);
  return 0;
}



// FUNCTION 144e26600 FUN_144e26600 body=497 status=ok
// SIG undefined FUN_144e26600(void)

void FUN_144e26600(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  short *psVar2;
  int *piVar3;
  undefined1 auStack_1e8 [32];
  int local_1c8;
  int iStack_1c4;
  int iStack_1c0;
  int iStack_1bc;
  undefined1 local_1b8 [264];
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_40;
  int local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  psVar2 = (short *)param_2[1];
  piVar3 = (int *)*param_2;
  if (param_1 == 0) goto LAB_144e26628;
  uVar1 = *(uint *)(param_2 + 2);
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_1e8);
  }
  if (psVar2 != (short *)0x0) {
    if ((psVar2[1] != 0) && (0 < *psVar2)) {
      if ((*(longlong *)(psVar2 + 0xc) == 0) ||
         ((*(longlong *)(psVar2 + 4) == 0 ||
          ((int)psVar2[1] !=
           *(short *)(*(longlong *)(psVar2 + 0xc) + (longlong)(*psVar2 + -1) * 2) + 1))))
      goto LAB_144e26671;
      local_68 = *(undefined8 *)psVar2;
      uStack_60 = *(undefined8 *)(psVar2 + 4);
      local_58 = *(undefined4 *)(psVar2 + 8);
      uStack_54 = *(undefined4 *)(psVar2 + 10);
      uStack_50 = *(undefined4 *)(psVar2 + 0xc);
      uStack_4c = *(undefined4 *)(psVar2 + 0xe);
      local_48 = *(undefined8 *)(psVar2 + 0x10);
      if ((uVar1 & 2) == 0) {
        if (piVar3 == (int *)0x0) {
LAB_144e26628:
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_1e8);
        }
        if ((piVar3[1] == 0) || (*piVar3 == 0)) goto LAB_144e267ff;
        local_40 = *(longlong *)(piVar3 + 4);
        if (local_40 == 0) goto LAB_144e26628;
        if (-1 < piVar3[2]) {
          local_40 = (ulonglong)(uint)(piVar3[2] * (*piVar3 + -1)) + local_40;
        }
        local_38 = piVar3[2];
        local_30 = 0;
        local_28 = 0;
      }
      else {
        if (param_2[3] == 0) goto LAB_144e267ff;
        local_28 = param_2[7];
        local_30 = param_2[3];
      }
      if (((byte)uVar1 & 6) == 6) {
        local_1c8 = *(int *)(param_2 + 8);
        iStack_1c4 = *(int *)((longlong)param_2 + 0x44);
        local_ac = *(int *)(param_2 + 9);
        local_a4 = *(int *)((longlong)param_2 + 0x4c);
        iStack_1c0 = local_ac;
        iStack_1bc = local_a4;
        local_a8 = iStack_1c4;
        local_b0 = local_1c8;
      }
      else {
        local_ac = piVar3[1];
        local_a4 = *piVar3;
        local_a8 = 0;
        local_b0 = 0;
      }
      if ((local_b0 < local_ac) && (local_a8 < local_a4)) {
        FUN_144e27820(local_1b8);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_1e8);
      }
    }
LAB_144e267ff:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_1e8);
  }
LAB_144e26671:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_1e8);
}



// FUNCTION 144e26820 FUN_144e26820 body=83 status=ok
// SIG undefined FUN_144e26820(void)

int FUN_144e26820(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int local_res10 [6];
  
  *param_2 = 0;
  puVar1 = (undefined8 *)FUN_144b560d0(param_1,8,local_res10);
  if (local_res10[0] == 0) {
    *puVar1 = param_1;
    *param_2 = puVar1;
    return 0;
  }
  return local_res10[0];
}



// FUNCTION 144e268b0 FUN_144e268b0 body=70 status=ok
// SIG undefined FUN_144e268b0(void)

undefined8 FUN_144e268b0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  *(undefined4 *)(lVar1 + 0x158) = 0xffffffeb;
  *(undefined8 *)(lVar1 + 0x15c) = 0;
  *(undefined4 *)(lVar1 + 0x164) = 0;
  *(undefined8 *)(lVar1 + 0x168) = 0x15;
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x60) + 0x10))
            (*(undefined8 *)(param_1 + 0x60),0,0);
  return 0;
}



// FUNCTION 144e26910 FUN_144e26910 body=96 status=ok
// SIG undefined FUN_144e26910(void)

undefined8 FUN_144e26910(longlong param_1,longlong param_2,longlong param_3,undefined4 *param_4)

{
  if (*(int *)(param_2 + 0x60) != *(int *)(param_1 + 0x20)) {
    return 6;
  }
  if (param_3 != 0) {
    FUN_144b5aea0(param_2 + 0x98,param_3);
  }
  if (param_4 != (undefined4 *)0x0) {
    FUN_144b5ada0(param_2 + 0x98,*param_4,param_4[1]);
  }
  return 0;
}



// FUNCTION 144e269a0 FUN_144e269a0 body=35 status=ok
// SIG undefined FUN_144e269a0(void)

void FUN_144e269a0(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 != 1) {
    iVar1 = param_3;
  }
  FUN_144e27a60(param_1,param_2,iVar1,param_4,0);
  return;
}



// FUNCTION 144e269d0 FUN_144e269d0 body=22 status=ok
// SIG undefined FUN_144e269d0(void)

void FUN_144e269d0(void)

{
  FUN_144e27a60();
  return;
}



// FUNCTION 144e269f0 FUN_144e269f0 body=22 status=ok
// SIG undefined FUN_144e269f0(void)

void FUN_144e269f0(void)

{
  FUN_144e27a60();
  return;
}



// FUNCTION 144e26a10 FUN_144e26a10 body=191 status=ok
// SIG undefined FUN_144e26a10(void)

void FUN_144e26a10(_JBTYPE *param_1)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  iVar2 = (int)param_1[0x10].Part[0];
  lVar5 = (longlong)(*(int *)((longlong)param_1[0x10].Part + 4) - (int)param_1[0x11].Part[0]);
  plVar1 = (longlong *)(param_1[0x12].Part[1] + lVar5 * 8);
  for (piVar3 = *(int **)(param_1[0x12].Part[1] + lVar5 * 8);
      (piVar3 != (int *)0x0 && (*piVar3 <= iVar2)); piVar3 = *(int **)(piVar3 + 4)) {
    if (*piVar3 == iVar2) {
      piVar3[2] = piVar3[2] + (int)param_1[0x11].Part[1];
      piVar3[1] = piVar3[1] + *(int *)((longlong)param_1[0x11].Part + 0xc);
      return;
    }
    plVar1 = (longlong *)(piVar3 + 4);
  }
  uVar4 = param_1[0x14].Part[0];
  if ((longlong)uVar4 < (longlong)param_1[0x13].Part[1]) {
    piVar3 = (int *)(param_1[0x13].Part[0] + uVar4 * 0x18);
    param_1[0x14].Part[0] = uVar4 + 1;
    *piVar3 = iVar2;
    piVar3[2] = (int)param_1[0x11].Part[1];
    piVar3[1] = *(int *)((longlong)param_1[0x11].Part + 0xc);
    *(longlong *)(piVar3 + 4) = *plVar1;
    *plVar1 = (longlong)piVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  longjmp(param_1,1);
}



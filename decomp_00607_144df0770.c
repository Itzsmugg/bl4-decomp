// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144df0770 FUN_144df0770 body=908 status=ok
// SIG undefined FUN_144df0770(void)

void FUN_144df0770(longlong param_1,ulonglong *param_2)

{
  void *_Src;
  undefined8 *puVar1;
  ulonglong uVar2;
  byte *pbVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  void *_Dst;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  int local_res10 [2];
  int local_res18;
  undefined8 *local_res20;
  
  puVar1 = *(undefined8 **)(param_1 + 0x2a0);
  uVar2 = param_2[4];
  local_res20 = puVar1;
  (*(code *)param_2[7])(param_2);
  if (((char *)*param_2 < (char *)param_2[2]) && (*(char *)*param_2 == '[')) {
    (*(code *)param_2[8])(param_2);
    (*(code *)param_2[7])(param_2);
    if (((char *)*param_2 < (char *)param_2[2]) && (*(char *)*param_2 == ']')) {
      return;
    }
    *(undefined4 *)(param_2 + 3) = 3;
    return;
  }
  local_res18 = (*(code *)param_2[9])(param_2);
  uVar10 = (ulonglong)local_res18;
  if (local_res18 < 0) {
    *(undefined4 *)(param_2 + 3) = 3;
    return;
  }
  if ((*param_2 <= param_2[2]) &&
     (uVar8 = (longlong)(param_2[2] - *param_2) >> 3, (longlong)uVar8 < (longlong)uVar10)) {
    local_res18 = (int)uVar8;
    uVar10 = uVar8 & 0xffffffff;
    if (param_2[0x56] == 0) {
      uVar8 = FUN_144b560d0(uVar2,0x28,local_res10);
      param_2[0x56] = uVar8;
      if ((local_res10[0] != 0) ||
         (local_res10[0] = FUN_144b59150(uVar8,uVar2), local_res10[0] != 0)) goto LAB_144df0ab8;
    }
  }
  (*(code *)param_2[8])(param_2);
  if ((int)param_2[3] != 0) {
    return;
  }
  (*(code *)param_2[7])(param_2);
  if (((int)param_2[0x49] != 0) ||
     (local_res10[0] = (**(code **)*puVar1)(param_2 + 0x4a,uVar10 & 0xffffffff,uVar2),
     local_res10[0] == 0)) {
    iVar9 = 0;
    if (*param_2 + 4 < param_2[2]) {
      do {
        iVar5 = strncmp((char *)*param_2,"dup",3);
        if (iVar5 != 0) break;
        (*(code *)param_2[8])(param_2);
        iVar5 = (*(code *)param_2[9])(param_2);
        pbVar3 = (byte *)param_2[2];
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x50);
        (*(code *)param_2[7])(param_2);
        if ((pbVar3 <= (byte *)*param_2) || (9 < *(byte *)*param_2 - 0x30)) {
LAB_144df0abd:
          if (lVar4 != 0) {
            return;
          }
          *(undefined4 *)(param_2 + 3) = 3;
          return;
        }
        uVar6 = (*(code *)param_2[9])(param_2);
        (*(code *)param_2[8])(param_2);
        _Src = (void *)(*param_2 + 1);
        if (((int)uVar6 < 0) || ((longlong)pbVar3 - (longlong)_Src <= (longlong)(int)uVar6))
        goto LAB_144df0abd;
        *param_2 = (longlong)(int)(uVar6 + 1) + *param_2;
        if ((int)param_2[3] != 0) {
          return;
        }
        (*(code *)param_2[8])(param_2);
        if ((int)param_2[3] != 0) {
          return;
        }
        (*(code *)param_2[7])(param_2);
        if (((char *)*param_2 + 4 < (char *)param_2[2]) &&
           (iVar7 = strncmp((char *)*param_2,"put",3), iVar7 == 0)) {
          (*(code *)param_2[8])(param_2);
          (*(code *)param_2[7])(param_2);
        }
        if (param_2[0x56] != 0) {
          FUN_144b59260(iVar5,iVar9,param_2[0x56],uVar2);
          iVar5 = iVar9;
        }
        if ((int)param_2[0x49] == 0) {
          if ((int)*(uint *)(param_1 + 0x118) < 0) {
            local_res10[0] = (*(code *)param_2[0x54])(param_2 + 0x4a,iVar5,_Src,uVar6);
          }
          else {
            if (uVar6 < *(uint *)(param_1 + 0x118)) {
              local_res10[0] = 3;
              goto LAB_144df0ab8;
            }
            _Dst = (void *)FUN_144b560d0(uVar2,uVar6,local_res10);
            if (local_res10[0] != 0) goto LAB_144df0ab8;
            memcpy(_Dst,_Src,(ulonglong)uVar6);
            (*(code *)local_res20[4])(_Dst,(ulonglong)uVar6,0x10ea);
            local_res10[0] =
                 (*(code *)param_2[0x54])
                           (param_2 + 0x4a,iVar5,
                            (longlong)_Dst + (longlong)*(int *)(param_1 + 0x118),
                            uVar6 - *(int *)(param_1 + 0x118));
            FUN_144b56350(uVar2,_Dst);
          }
          if (local_res10[0] != 0) goto LAB_144df0ab8;
        }
        iVar9 = iVar9 + 1;
      } while (*param_2 + 4 < param_2[2]);
    }
    if ((int)param_2[0x49] != 0) {
      return;
    }
    *(int *)(param_2 + 0x49) = local_res18;
    return;
  }
LAB_144df0ab8:
  *(int *)(param_2 + 3) = local_res10[0];
  return;
}



// FUNCTION 144df0b00 FUN_144df0b00 body=1575 status=ok
// SIG undefined FUN_144df0b00(void)

void FUN_144df0b00(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char *pcVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  void *_Dst;
  longlong lVar9;
  byte *pbVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong *plVar14;
  byte *pbVar15;
  longlong *plVar16;
  undefined1 auStack_b8 [32];
  int local_98;
  char local_94;
  int local_90;
  undefined8 *local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  byte *local_68;
  void *local_60;
  longlong local_58;
  int local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  pbVar10 = (byte *)param_2[2];
  lVar9 = *param_2;
  local_78 = param_2[4];
  uVar11 = 0;
  local_88 = *(undefined8 **)(param_1 + 0x2a0);
  local_94 = '\0';
  local_90 = 0;
  local_80 = param_1;
  local_68 = pbVar10;
  iVar5 = (*(code *)param_2[9])(param_2);
  lVar3 = local_78;
  if (-1 < iVar5) {
    lVar9 = (longlong)pbVar10 - lVar9 >> 3;
    if (lVar9 < iVar5) {
      iVar5 = (int)lVar9;
    }
    local_50 = iVar5;
    if ((iVar5 == 0) || ((int)param_2[3] != 0)) goto LAB_144df0f04;
    if ((int)param_2[0x24] == 0) {
      local_98 = (**(code **)*local_88)(param_2 + 0x31,iVar5 + 6,local_78);
      iVar7 = local_98;
      if (((local_98 != 0) ||
          (local_98 = (**(code **)*local_88)(param_2 + 0x25,iVar5 + 6,lVar3), iVar7 = local_98,
          local_98 != 0)) ||
         (local_98 = (**(code **)*local_88)(param_2 + 0x3d,4,lVar3), iVar7 = local_98, local_98 != 0
         )) goto LAB_144df0f01;
    }
    (*(code *)param_2[7])(param_2);
    pbVar10 = (byte *)*param_2;
    if (pbVar10 < local_68) {
      local_70 = 0;
      uVar12 = uVar11;
      pbVar15 = local_68;
LAB_144df0c22:
      iVar5 = (int)uVar12;
      if ((pbVar10 + 3 < pbVar15) &&
         (((bVar4 = pbVar10[3], bVar4 < 0x3d &&
           ((0x1000832100003601U >> ((ulonglong)bVar4 & 0x3f) & 1) != 0)) ||
          (((byte)(bVar4 - 0x3e) < 0x40 &&
           ((0xa0000000a0000001U >> ((ulonglong)(byte)(bVar4 - 0x3e) & 0x3f) & 1) != 0)))))) {
        if ((((*pbVar10 == 100) && (pbVar10[1] == 0x65)) && (pbVar10[2] == 0x66)) && (iVar5 != 0))
        goto LAB_144df0eb7;
        if (((*pbVar10 == 0x65) && (pbVar10[1] == 0x6e)) && (pbVar10[2] == 100)) goto LAB_144df0eb2;
      }
      (*(code *)param_2[8])(param_2);
      if (pbVar15 <= (byte *)*param_2) goto LAB_144df0efc;
      if ((int)param_2[3] != 0) goto LAB_144df0f04;
      if (*pbVar10 != 0x2f) {
LAB_144df0ea0:
        iVar5 = (int)uVar12;
        (*(code *)param_2[7])(param_2);
        pbVar10 = (byte *)*param_2;
        if (pbVar15 <= pbVar10) goto LAB_144df0eb2;
        goto LAB_144df0c22;
      }
      if (pbVar15 <= pbVar10 + 2) goto LAB_144df0efc;
      pbVar10 = pbVar10 + 1;
      pbVar15 = (byte *)param_2[2];
      uVar13 = (int)*param_2 - (int)pbVar10;
      local_58 = *(longlong *)(*(longlong *)(local_80 + 0xd0) + 0x50);
      (*(code *)param_2[7])(param_2);
      if (((byte *)*param_2 < pbVar15) && (*(byte *)*param_2 - 0x30 < 10)) {
        uVar6 = (*(code *)param_2[9])(param_2);
        (*(code *)param_2[8])(param_2);
        local_60 = (void *)(*param_2 + 1);
        if ((-1 < (int)uVar6) && ((longlong)(int)uVar6 < (longlong)pbVar15 - (longlong)local_60)) {
          *param_2 = (longlong)(int)(uVar6 + 1) + *param_2;
          if ((int)param_2[3] != 0) goto LAB_144df0f04;
          pbVar15 = local_68;
          if ((int)param_2[0x24] == 0) {
            local_98 = (*(code *)param_2[0x2f])(param_2 + 0x25,uVar12,pbVar10,uVar13 + 1);
            iVar7 = local_98;
            if (local_98 == 0) {
              *(undefined1 *)((ulonglong)uVar13 + *(longlong *)(local_70 + param_2[0x2a])) = 0;
              if (*pbVar10 == 0x2e) {
                uVar8 = uVar11;
                do {
                  pcVar2 = ".notdef" + uVar8;
                  uVar8 = uVar8 + 1;
                  if (*pcVar2 != *(char *)(*(longlong *)(local_70 + param_2[0x2a]) + -1 + uVar8))
                  goto LAB_144df0dc2;
                } while (uVar8 != 8);
                local_94 = '\x01';
                local_90 = iVar5;
              }
LAB_144df0dc2:
              if (((int)*(uint *)(local_80 + 0x118) < 0) || (local_50 + 5 <= iVar5)) {
                local_98 = (*(code *)param_2[0x3b])(param_2 + 0x31,uVar12,local_60,uVar6);
              }
              else {
                if (uVar6 <= *(uint *)(local_80 + 0x118)) goto LAB_144df0efc;
                _Dst = (void *)FUN_144b560d0(local_78,uVar6,&local_98);
                iVar7 = local_98;
                if (local_98 != 0) goto LAB_144df0f01;
                memcpy(_Dst,local_60,(ulonglong)uVar6);
                (*(code *)local_88[4])(_Dst,(ulonglong)uVar6,0x10ea);
                local_98 = (*(code *)param_2[0x3b])
                                     (param_2 + 0x31,uVar12,
                                      (longlong)*(int *)(local_80 + 0x118) + (longlong)_Dst,
                                      uVar6 - *(int *)(local_80 + 0x118));
                FUN_144b56350(local_78,_Dst);
              }
              iVar7 = local_98;
              if (local_98 == 0) {
                uVar12 = (ulonglong)(iVar5 + 1);
                local_70 = local_70 + 8;
                pbVar15 = local_68;
                goto LAB_144df0ea0;
              }
            }
            goto LAB_144df0f01;
          }
          goto LAB_144df0ea0;
        }
      }
      if (local_58 != 0) goto LAB_144df0f04;
    }
  }
LAB_144df0efc:
  iVar7 = 3;
  goto LAB_144df0f01;
LAB_144df0eb2:
  if (iVar5 == 0) goto LAB_144df0efc;
LAB_144df0eb7:
  plVar16 = param_2 + 0x25;
  plVar14 = param_2 + 0x31;
  *(int *)(param_2 + 0x24) = iVar5;
  if (local_94 != '\0') {
    do {
      pcVar2 = ".notdef" + uVar11;
      uVar11 = uVar11 + 1;
      if (*pcVar2 != *(char *)(*(longlong *)param_2[0x2a] + -1 + uVar11)) {
        plVar1 = param_2 + 0x3d;
        iVar7 = (*(code *)param_2[0x47])
                          (plVar1,0,*(longlong *)param_2[0x2a],*(undefined4 *)param_2[0x2b]);
        local_98 = iVar7;
        if ((iVar7 != 0) ||
           (iVar7 = (*(code *)param_2[0x47])
                              (plVar1,1,*(undefined8 *)param_2[0x36],*(undefined4 *)param_2[0x37]),
           iVar5 = local_90, local_98 = iVar7, iVar7 != 0)) goto LAB_144df0f01;
        lVar9 = (longlong)local_90 * 4;
        lVar3 = (longlong)local_90 * 8;
        iVar7 = (*(code *)param_2[0x47])
                          (plVar1,2,*(undefined8 *)(lVar3 + param_2[0x2a]),
                           *(undefined4 *)(lVar9 + param_2[0x2b]));
        local_98 = iVar7;
        if ((iVar7 != 0) ||
           ((((iVar7 = (*(code *)param_2[0x47])
                                 (plVar1,3,*(undefined8 *)(lVar3 + param_2[0x36]),
                                  *(undefined4 *)(param_2[0x37] + lVar9)), local_98 = iVar7,
              iVar7 != 0 ||
              (iVar7 = (*(code *)param_2[0x2f])
                                 (plVar16,iVar5,*(undefined8 *)param_2[0x42],
                                  *(undefined4 *)param_2[0x43]), local_98 = iVar7, iVar7 != 0)) ||
             (iVar7 = (*(code *)param_2[0x3b])
                                (plVar14,iVar5,*(undefined8 *)(param_2[0x42] + 8),
                                 *(undefined4 *)(param_2[0x43] + 4)), local_98 = iVar7, iVar7 != 0))
            || ((iVar7 = (*(code *)param_2[0x2f])
                                   (plVar16,0,*(undefined8 *)(param_2[0x42] + 0x10),
                                    *(undefined4 *)(param_2[0x43] + 8)), local_98 = iVar7,
                iVar7 != 0 ||
                (iVar7 = (*(code *)param_2[0x3b])
                                   (plVar14,0,*(undefined8 *)(param_2[0x42] + 0x18),
                                    *(undefined4 *)(param_2[0x43] + 0xc)), iVar7 != 0))))))
        goto LAB_144df0f01;
        break;
      }
    } while (uVar11 != 8);
    goto LAB_144df0f04;
  }
  local_50 = 0xde1f78b;
  local_4c = 0xe;
  iVar7 = (*(code *)param_2[0x47])
                    (param_2 + 0x3d,0,*(undefined8 *)param_2[0x2a],*(undefined4 *)param_2[0x2b]);
  local_98 = iVar7;
  if (((iVar7 == 0) &&
      (iVar7 = (*(code *)param_2[0x47])
                         (param_2 + 0x3d,1,*(undefined8 *)param_2[0x36],*(undefined4 *)param_2[0x37]
                         ), local_98 = iVar7, iVar7 == 0)) &&
     ((iVar7 = (*(code *)param_2[0x2f])(plVar16,0,".notdef",8), local_98 = iVar7, iVar7 == 0 &&
      (((iVar7 = (*(code *)param_2[0x3b])(plVar14,0,&local_50,5), local_98 = iVar7, iVar7 == 0 &&
        (iVar7 = (*(code *)param_2[0x2f])
                           (plVar16,iVar5,*(undefined8 *)param_2[0x42],*(undefined4 *)param_2[0x43])
        , local_98 = iVar7, iVar7 == 0)) &&
       (iVar7 = (*(code *)param_2[0x3b])
                          (plVar14,iVar5,*(undefined8 *)(param_2[0x42] + 8),
                           *(undefined4 *)(param_2[0x43] + 4)), iVar7 == 0)))))) {
    *(int *)(param_2 + 0x24) = (int)param_2[0x24] + 1;
    goto LAB_144df0f04;
  }
LAB_144df0f01:
  *(int *)(param_2 + 3) = iVar7;
LAB_144df0f04:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
}



// FUNCTION 144df1150 FUN_144df1150 body=117 status=ok
// SIG undefined FUN_144df1150(void)

void FUN_144df1150(longlong *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  
  if (*(longlong *)param_1[7] != 0) {
    puVar1 = *(undefined8 **)(*param_1 + 0x300);
    lVar3 = FUN_144b55a90(*(undefined8 *)(*(longlong *)(*param_1 + 0x90) + 8),"pshinter");
    if (((lVar3 != 0) && (puVar1 != (undefined8 *)0x0)) &&
       (pcVar2 = (code *)*puVar1, pcVar2 != (code *)0x0)) {
      lVar3 = (*pcVar2)(lVar3);
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 0x10))(*(undefined8 *)param_1[7]);
      }
    }
    *(undefined8 *)param_1[7] = 0;
  }
  return;
}



// FUNCTION 144df11d0 FUN_144df11d0 body=146 status=ok
// SIG undefined FUN_144df11d0(void)

undefined8 FUN_144df11d0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  
  puVar1 = *(undefined8 **)(*param_1 + 0x300);
  lVar3 = FUN_144b55a90(*(undefined8 *)(*(longlong *)(*param_1 + 0x90) + 8),"pshinter");
  if (((lVar3 == 0) || (puVar1 == (undefined8 *)0x0)) ||
     (pcVar2 = (code *)*puVar1, pcVar2 == (code *)0x0)) {
    lVar3 = 0;
  }
  else {
    lVar3 = (*pcVar2)(lVar3);
  }
  FUN_144b57e90(*param_1,param_2);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 8))
              (*(undefined8 *)param_1[7],*(undefined4 *)((longlong)param_1 + 0x1c),(int)param_1[4],0
               ,0);
  }
  return 0;
}



// FUNCTION 144df1270 FUN_144df1270 body=142 status=ok
// SIG undefined FUN_144df1270(void)

ulonglong FUN_144df1270(longlong *param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 local_res8;
  
  puVar3 = *(undefined8 **)(*param_1 + 0x300);
  lVar2 = FUN_144b55a90(*(undefined8 *)(*(longlong *)(*param_1 + 0x90) + 8),"pshinter");
  if ((((lVar2 != 0) && (puVar3 != (undefined8 *)0x0)) &&
      (pcVar1 = (code *)*puVar3, pcVar1 != (code *)0x0)) &&
     (puVar3 = (undefined8 *)(*pcVar1)(lVar2), puVar3 != (undefined8 *)0x0)) {
    uVar4 = (*(code *)*puVar3)(*(undefined8 *)(*param_1 + 0x98),*param_1 + 0x114,&local_res8);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    *(undefined8 *)param_1[7] = local_res8;
    return uVar4 & 0xffffffff;
  }
  return 0;
}



// FUNCTION 144df1300 FUN_144df1300 body=996 status=ok
// SIG undefined FUN_144df1300(void)

uint FUN_144df1300(undefined8 param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  longlong *plVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  undefined2 extraout_var;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  char *pcVar12;
  longlong lVar13;
  char *pcVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined4 local_res20 [2];
  undefined4 *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  *param_2 = 1;
  local_res20[0] = param_4;
  lVar9 = FUN_144b57b20(*(undefined8 *)(param_2 + 0x24),"postscript-cmaps",1);
  *(longlong *)(param_2 + 0xa6) = lVar9;
  lVar10 = FUN_144b57b00(*(undefined8 *)(*(longlong *)(param_2 + 0x24) + 8),"psaux");
  *(longlong *)(param_2 + 0xa8) = lVar10;
  if (lVar10 == 0) {
    return 0xb;
  }
  uVar11 = FUN_144b57b00(*(undefined8 *)(*(longlong *)(param_2 + 0x24) + 8),"pshinter");
  *(undefined8 *)(param_2 + 0xc0) = uVar11;
  uVar7 = FUN_144df4fb0(param_2);
  if (uVar7 != 0) {
    return uVar7;
  }
  if (param_3 < 0) {
    return 0;
  }
  if ((short)param_3 != 0) {
    return 6;
  }
  param_2[2] = param_2[2] | 0xa11;
  lVar16 = 0;
  param_2[1] = 0;
  param_2[4] = param_2[0x90];
  if (*(char *)(param_2 + 0x41) != '\0') {
    param_2[2] = param_2[2] | 4;
  }
  if (*(longlong *)(param_2 + 0xb8) != 0) {
    param_2[2] = param_2[2] | 0x100;
  }
  pcVar14 = *(char **)(param_2 + 0x3c);
  *(char **)(param_2 + 6) = pcVar14;
  *(undefined8 *)(param_2 + 8) = 0;
  if (pcVar14 == (char *)0x0) {
    lVar13 = 0;
    if (*(longlong *)(param_2 + 0x76) != 0) {
      lVar13 = *(longlong *)(param_2 + 0x76);
    }
    *(longlong *)(param_2 + 6) = lVar13;
  }
  else {
    pcVar12 = *(char **)(param_2 + 0x3a);
    if (pcVar12 != (char *)0x0) {
      cVar1 = *pcVar12;
      while (cVar1 != '\0') {
        cVar2 = *pcVar14;
        if (cVar1 == cVar2) {
          pcVar14 = pcVar14 + 1;
LAB_144df142e:
          pcVar12 = pcVar12 + 1;
        }
        else {
          if ((cVar1 == ' ') || (cVar1 == '-')) goto LAB_144df142e;
          if ((cVar2 != ' ') && (cVar2 != '-')) {
            if (*pcVar14 == '\0') {
              *(char **)(param_2 + 8) = pcVar12;
            }
            goto LAB_144df1476;
          }
          pcVar14 = pcVar14 + 1;
        }
        cVar1 = *pcVar12;
      }
      *(char **)(param_2 + 8) = "Regular";
    }
  }
LAB_144df1476:
  if (*(longlong *)(param_2 + 8) == 0) {
    pcVar14 = "Regular";
    if (*(char **)(param_2 + 0x3e) != (char *)0x0) {
      pcVar14 = *(char **)(param_2 + 0x3e);
    }
    *(char **)(param_2 + 8) = pcVar14;
  }
  param_2[3] = 0;
  param_2[3] = (uint)(param_2[0x40] != 0);
  lVar13 = *(longlong *)(param_2 + 0x3e);
  lVar17 = lVar16;
  if (lVar13 == 0) goto LAB_144df1507;
  do {
    lVar15 = lVar17 + 1;
    if (*(char *)(lVar13 + lVar17) != (&DAT_149eea5a7)[lVar17]) goto LAB_144df14f0;
    lVar17 = lVar15;
  } while (lVar15 != 5);
  goto LAB_144df1503;
  while (lVar16 = lVar17, lVar17 != 6) {
LAB_144df14f0:
    lVar17 = lVar16 + 1;
    if (*(char *)(lVar13 + lVar16) != "Black"[lVar16]) goto LAB_144df1507;
  }
LAB_144df1503:
  param_2[3] = param_2[3] | 2;
LAB_144df1507:
  param_2[10] = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  param_2[0x16] = (int)*(short *)((longlong)param_2 + 0x27e);
  param_2[0x17] = (int)*(short *)((longlong)param_2 + 0x282);
  param_2[0x18] = param_2[0xa1] + 0xffff >> 0x10;
  param_2[0x19] = param_2[0xa2] + 0xffff >> 0x10;
  if (*(short *)(param_2 + 0x1a) == 0) {
    *(undefined2 *)(param_2 + 0x1a) = 1000;
  }
  sVar3 = *(short *)(param_2 + 0x19);
  sVar4 = *(short *)(param_2 + 0x17);
  *(short *)((longlong)param_2 + 0x6a) = sVar3;
  *(short *)(param_2 + 0x1b) = sVar4;
  sVar6 = (short)((((uint)*(ushort *)(param_2 + 0x1a) + (uint)*(ushort *)(param_2 + 0x1a) * 2) * 4)
                 / 10);
  *(short *)((longlong)param_2 + 0x6e) = sVar6;
  if ((int)sVar6 < (int)sVar3 - (int)sVar4) {
    *(short *)((longlong)param_2 + 0x6e) = sVar3 - sVar4;
  }
  *(undefined2 *)(param_2 + 0x1c) = *(undefined2 *)(param_2 + 0x18);
  iVar8 = FUN_144df4730(param_2,local_res20);
  if (iVar8 == 0) {
    FUN_144b55630(local_res20[0]);
    *(undefined2 *)(param_2 + 0x1c) = extraout_var;
  }
  uVar7 = 0;
  *(undefined2 *)((longlong)param_2 + 0x72) = *(undefined2 *)((longlong)param_2 + 0x6e);
  *(undefined2 *)(param_2 + 0x1d) = *(undefined2 *)((longlong)param_2 + 0x106);
  *(undefined2 *)((longlong)param_2 + 0x76) = *(undefined2 *)(param_2 + 0x42);
  if (lVar9 != 0) {
    plVar5 = *(longlong **)(lVar10 + 0x40);
    local_2c = 0x10003;
    local_30 = 0x756e6963;
    local_38 = param_2;
    uVar7 = FUN_144b57870(plVar5[3],0,&local_38,0);
    if (((uVar7 == 0) || ((uVar7 & 0xff) == 0xa3)) || ((uVar7 & 0xff) == 7)) {
      iVar8 = param_2[0x78];
      uVar7 = 0;
      if (iVar8 == 1) {
        local_30 = 0x41444243;
        local_2c = 0x20007;
        lVar9 = plVar5[2];
      }
      else if (iVar8 == 2) {
        local_30 = 0x41444f42;
        local_2c = 7;
        lVar9 = *plVar5;
      }
      else if (iVar8 == 3) {
        local_30 = 0x6c617431;
        local_2c = 0x30007;
        lVar9 = plVar5[3];
      }
      else {
        if (iVar8 != 4) {
          return 0;
        }
        local_30 = 0x41444245;
        local_2c = 0x10007;
        lVar9 = plVar5[1];
      }
      if (lVar9 != 0) {
        uVar7 = FUN_144b57870(lVar9,0,&local_38,0);
      }
    }
  }
  return uVar7;
}



// FUNCTION 144df16f0 FUN_144df16f0 body=568 status=ok
// SIG undefined FUN_144df16f0(void)

void FUN_144df16f0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    if (*(longlong *)(param_1 + 0x2f8) != 0) {
      FUN_144b56350(uVar1);
      *(undefined8 *)(param_1 + 0x2f8) = 0;
      *(undefined4 *)(param_1 + 0x2f0) = 0;
    }
    FUN_144df2ca0(param_1);
    *(undefined8 *)(param_1 + 0x2e0) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0xd8));
    *(undefined8 *)(param_1 + 0xd8) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0xe0));
    *(undefined8 *)(param_1 + 0xe0) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0xe8));
    *(undefined8 *)(param_1 + 0xe8) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0xf0));
    *(undefined8 *)(param_1 + 0xf0) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0xf8));
    *(undefined8 *)(param_1 + 0xf8) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 600));
    *(undefined8 *)(param_1 + 600) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x250));
    *(undefined8 *)(param_1 + 0x250) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x248));
    *(undefined8 *)(param_1 + 0x248) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x228));
    *(undefined8 *)(param_1 + 0x228) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x230));
    *(undefined8 *)(param_1 + 0x230) = 0;
    FUN_144b591d0(*(undefined8 *)(param_1 + 0x238),uVar1);
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x238));
    *(undefined8 *)(param_1 + 0x238) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x208));
    *(undefined8 *)(param_1 + 0x208) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x210));
    *(undefined8 *)(param_1 + 0x210) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x218));
    *(undefined8 *)(param_1 + 0x218) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x1f8));
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x200));
    *(undefined8 *)(param_1 + 0x200) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x1d8));
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    lVar2 = *(longlong *)(param_1 + 0x2a8);
    if (lVar2 != 0) {
      FUN_144b56350(uVar1,*(undefined8 *)(lVar2 + 0x30));
      *(undefined8 *)(lVar2 + 0x30) = 0;
      *(undefined4 *)(lVar2 + 0x38) = 0;
      FUN_144b56350(uVar1,*(undefined8 *)(lVar2 + 0x20));
      *(undefined8 *)(lVar2 + 0x20) = 0;
      *(undefined4 *)(lVar2 + 0x28) = 0;
      FUN_144b56350(uVar1,lVar2);
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 144df1930 FUN_144df1930 body=87 status=ok
// SIG undefined FUN_144df1930(void)

undefined8 FUN_144df1930(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x300);
  if (lVar1 != 0) {
    lVar2 = FUN_144b55a90(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) + 8),
                          "pshinter");
    if (lVar2 != 0) {
      uVar3 = (**(code **)(lVar1 + 8))(lVar2);
      *(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x28) = uVar3;
    }
  }
  return 0;
}



// FUNCTION 144df1a50 FUN_144df1a50 body=640 status=ok
// SIG undefined FUN_144df1a50(void)

ulonglong FUN_144df1a50(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint local_res8 [2];
  undefined1 local_58 [16];
  longlong local_48;
  code *local_40;
  longlong local_38;
  
  lVar6 = *(longlong *)(param_1 + 0x2a8);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  local_res8[0] = 2;
  if (lVar6 != 0) {
    FUN_144b56350(uVar1,*(undefined8 *)(lVar6 + 0x30));
    *(undefined8 *)(lVar6 + 0x30) = 0;
    *(undefined4 *)(lVar6 + 0x38) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(lVar6 + 0x20));
    *(undefined8 *)(lVar6 + 0x20) = 0;
    *(undefined4 *)(lVar6 + 0x28) = 0;
    FUN_144b56350(uVar1,lVar6);
    *(undefined8 *)(param_1 + 0x2a8) = 0;
  }
  lVar6 = FUN_144b560d0(uVar1,0x40,local_res8);
  uVar7 = (ulonglong)local_res8[0];
  if (local_res8[0] == 0) {
    uVar7 = FUN_144b59990(param_2,*(undefined4 *)(param_2 + 8));
    local_res8[0] = (uint)uVar7;
    if (local_res8[0] == 0) {
      uVar3 = *(undefined4 *)(param_1 + 0x280);
      uVar4 = *(undefined4 *)(param_1 + 0x284);
      uVar5 = *(undefined4 *)(param_1 + 0x288);
      *(undefined4 *)(lVar6 + 4) = *(undefined4 *)(param_1 + 0x27c);
      *(undefined4 *)(lVar6 + 8) = uVar3;
      *(undefined4 *)(lVar6 + 0xc) = uVar4;
      *(undefined4 *)(lVar6 + 0x10) = uVar5;
      *(undefined4 *)(lVar6 + 0x14) = *(undefined4 *)(param_1 + 0x288);
      *(undefined4 *)(lVar6 + 0x18) = *(undefined4 *)(param_1 + 0x280);
      lVar2 = *(longlong *)(param_1 + 0x2a0);
      if ((*(undefined8 **)(lVar2 + 0x48) != (undefined8 *)0x0) &&
         (local_res8[0] =
               (*(code *)**(undefined8 **)(lVar2 + 0x48))
                         (local_58,*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38),
                          *(undefined8 *)(param_2 + 0x40)), local_res8[0] == 0)) {
        local_40 = FUN_144df43f0;
        local_48 = lVar6;
        local_38 = param_1 + 0xd8;
        local_res8[0] = (**(code **)(*(longlong *)(lVar2 + 0x48) + 0x10))(local_58);
        (**(code **)(*(longlong *)(lVar2 + 0x48) + 8))(local_58);
      }
      if ((char)local_res8[0] == '\x02') {
        if (((6 < *(uint *)(param_2 + 8)) && (*(byte *)(*(longlong *)(param_2 + 0x38) + 1) < 4)) &&
           (*(uint *)(*(longlong *)(param_2 + 0x38) + 2) == *(uint *)(param_2 + 8))) {
          local_res8[0] = FUN_144df44d0(param_1,param_2,lVar6);
        }
      }
      if (local_res8[0] == 0) {
        uVar3 = *(undefined4 *)(lVar6 + 8);
        uVar4 = *(undefined4 *)(lVar6 + 0xc);
        uVar5 = *(undefined4 *)(lVar6 + 0x10);
        *(undefined4 *)(param_1 + 0x27c) = *(undefined4 *)(lVar6 + 4);
        *(undefined4 *)(param_1 + 0x280) = uVar3;
        *(undefined4 *)(param_1 + 0x284) = uVar4;
        *(undefined4 *)(param_1 + 0x288) = uVar5;
        *(int *)(param_1 + 0x58) = (int)*(short *)(lVar6 + 6);
        *(int *)(param_1 + 0x5c) = (int)*(short *)(lVar6 + 10);
        *(int *)(param_1 + 0x60) = *(int *)(lVar6 + 0xc) + 0xffff >> 0x10;
        *(int *)(param_1 + 100) = *(int *)(lVar6 + 0x10) + 0xffff >> 0x10;
        *(short *)(param_1 + 0x6a) = (short)((uint)(*(int *)(lVar6 + 0x14) + 0x8000) >> 0x10);
        *(short *)(param_1 + 0x6c) = (short)((uint)(*(int *)(lVar6 + 0x18) + 0x8000) >> 0x10);
        if (*(int *)(lVar6 + 0x38) != 0) {
          *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x40;
          *(longlong *)(param_1 + 0x2a8) = lVar6;
          lVar6 = 0;
        }
      }
      FUN_144b59ab0(param_2);
      uVar7 = (ulonglong)local_res8[0];
    }
  }
  if (lVar6 != 0) {
    FUN_144b56350(uVar1,*(undefined8 *)(lVar6 + 0x30));
    *(undefined8 *)(lVar6 + 0x30) = 0;
    *(undefined4 *)(lVar6 + 0x38) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(lVar6 + 0x20));
    *(undefined8 *)(lVar6 + 0x20) = 0;
    *(undefined4 *)(lVar6 + 0x28) = 0;
    FUN_144b56350(uVar1,lVar6);
    uVar7 = (ulonglong)local_res8[0];
  }
  return uVar7;
}



// FUNCTION 144df1cd0 FUN_144df1cd0 body=193 status=ok
// SIG undefined FUN_144df1cd0(void)

undefined4 FUN_144df1cd0(longlong param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x2a8);
  if (lVar2 != 0) {
    uVar6 = 0;
    if (*(int *)(lVar2 + 0x28) != 0) {
      do {
        lVar3 = *(longlong *)(lVar2 + 0x20);
        if (*(int *)(lVar3 + uVar6 * 0x14) == param_3) {
          iVar4 = *(int *)(lVar3 + 4 + uVar6 * 0x14);
          if (param_2 < iVar4) {
            iVar4 = *(int *)(lVar3 + 8 + uVar6 * 0x14);
          }
          else {
            iVar1 = *(int *)(lVar3 + 0xc + uVar6 * 0x14);
            if (iVar1 < param_2) {
              iVar4 = *(int *)(lVar3 + 0x10 + uVar6 * 0x14);
            }
            else {
              iVar4 = FUN_144b55580(param_2 - iVar4,
                                    *(int *)(lVar3 + 0x10 + uVar6 * 0x14) -
                                    *(int *)(lVar3 + 8 + uVar6 * 0x14),iVar1 - iVar4);
              iVar4 = iVar4 + *(int *)(lVar3 + 8 + uVar6 * 0x14);
            }
          }
          *param_4 = iVar4;
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(lVar2 + 0x28));
    }
    return 0;
  }
  return 6;
}



// FUNCTION 144df1da0 FUN_144df1da0 body=415 status=ok
// SIG undefined FUN_144df1da0(void)

void FUN_144df1da0(longlong param_1,int param_2,uint param_3,ulonglong param_4,int *param_5)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 auStack_7e8 [32];
  undefined8 local_7c8;
  undefined8 local_7c0;
  undefined1 local_7b8;
  undefined4 local_7b0;
  code *local_7a8;
  undefined1 local_798 [8];
  undefined1 local_790 [24];
  undefined1 local_778 [8];
  longlong local_770;
  undefined4 local_738;
  undefined1 local_71c;
  undefined1 local_71a;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_7e8;
  if ((param_4 & 0x10) == 0) {
    local_7a8 = FUN_144df5650;
    local_7c0 = *(undefined8 *)(param_1 + 0x2e0);
    local_7b0 = 0;
    local_7b8 = 0;
    local_7c8 = *(undefined8 *)(param_1 + 0x248);
    iVar2 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 0x2a0) + 0x18))
                      (local_778,param_1,0,0);
    if (iVar2 == 0) {
      local_104 = *(undefined4 *)(param_1 + 0x220);
      uVar4 = 0;
      local_100 = *(undefined8 *)(param_1 + 0x228);
      local_f8 = *(undefined8 *)(param_1 + 0x230);
      local_f0 = *(undefined8 *)(param_1 + 0x238);
      local_58 = *(undefined8 *)(param_1 + 0x2f8);
      local_50 = *(undefined4 *)(param_1 + 0x2f0);
      local_71a = 1;
      local_71c = 0;
      if (param_3 != 0) {
        do {
          local_798[0] = 0;
          iVar2 = FUN_144df5460(local_778,param_2 + uVar4,local_790,local_798);
          if (iVar2 == 0) {
            plVar1 = *(longlong **)(*(longlong *)(local_770 + 0xd0) + 0x50);
            if (plVar1 != (longlong *)0x0) {
              (**(code **)(*plVar1 + 8))(plVar1[1],local_790);
            }
            iVar2 = FUN_144b55630(local_738);
            *param_5 = iVar2 >> 0x10;
          }
          else {
            *param_5 = 0;
          }
          uVar4 = uVar4 + 1;
          param_5 = param_5 + 1;
        } while (uVar4 < param_3);
      }
    }
  }
  else if (param_3 != 0) {
    for (uVar3 = (ulonglong)param_3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *param_5 = 0;
      param_5 = param_5 + 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_7e8);
}



// FUNCTION 144df1f50 FUN_144df1f50 body=1131 status=ok
// SIG undefined FUN_144df1f50(void)

void FUN_144df1f50(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined1 auStack_838 [32];
  undefined8 local_818;
  undefined8 local_810;
  undefined1 local_808;
  uint local_800;
  code *local_7f8;
  char local_7e8;
  char local_7e7;
  int local_7e4;
  uint local_7e0;
  undefined8 local_7d8;
  undefined8 local_7d0;
  undefined4 local_7c8;
  undefined1 local_7b8 [32];
  longlong local_798;
  undefined4 local_780;
  undefined4 local_778;
  undefined4 local_774;
  byte local_75b;
  longlong local_758;
  undefined4 local_144;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  int local_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  ulonglong local_118;
  undefined8 local_98;
  undefined4 local_90;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_838;
  lVar2 = *(longlong *)(param_1 + 8);
  local_7e8 = '\0';
  puVar3 = *(undefined8 **)(*(longlong *)(lVar2 + 0x2a0) + 0x18);
  if ((param_3 < *(uint *)(lVar2 + 0x10)) ||
     (*(longlong *)(*(longlong *)(lVar2 + 0xd0) + 0x50) != 0)) {
    if ((param_4 >> 10 & 1) != 0) {
      param_4 = param_4 | 3;
    }
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0xfc) = 0x10000;
      *(undefined4 *)(param_1 + 0x100) = 0x10000;
    }
    else {
      *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 0x1c);
      *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x20);
    }
    *(undefined4 *)(param_1 + 0x60) = 0x6f75746c;
    *(undefined4 *)(param_1 + 0x98) = 0;
    local_7f8 = FUN_144df5650;
    local_808 = (param_4 & 3) == 0;
    *(undefined1 *)(param_1 + 0xf8) = local_808;
    *(byte *)(param_1 + 0xf9) = ~(byte)param_4 & 1;
    local_800 = (int)param_4 >> 0x10 & 0xf;
    local_810 = *(undefined8 *)(lVar2 + 0x2e0);
    local_818 = *(undefined8 *)(lVar2 + 0x248);
    iVar6 = (*(code *)*puVar3)(local_7b8,lVar2,param_2,param_1);
    if (iVar6 == 0) {
      local_75b = (byte)(param_4 >> 10) & 1;
      local_144 = *(undefined4 *)(lVar2 + 0x220);
      local_140 = *(undefined8 *)(lVar2 + 0x228);
      local_138 = *(undefined8 *)(lVar2 + 0x230);
      local_130 = *(undefined8 *)(lVar2 + 0x238);
      local_98 = *(undefined8 *)(lVar2 + 0x2f8);
      local_90 = *(undefined4 *)(lVar2 + 0x2f0);
      local_7e4 = FUN_144df5460(local_7b8,param_3,&local_7d0,&local_7e8);
      if (local_7e4 == 0) {
        local_7e7 = *(char *)(param_1 + 0xf8);
        local_78 = local_128;
        iStack_74 = iStack_124;
        iStack_70 = iStack_120;
        iStack_6c = iStack_11c;
        local_7d8 = local_118;
        (*(code *)puVar3[1])();
        *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) & 1;
        *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) | 4;
        if ((param_4 >> 10 & 1) == 0) {
          iVar6 = FUN_144b55630(local_778);
          *(int *)(param_1 + 0x40) = iVar6 >> 0x10;
          iVar6 = FUN_144b55630(local_778);
          *(int *)(param_1 + 0x50) = iVar6 >> 0x10;
          *(undefined1 *)(*(longlong *)(param_1 + 0xf0) + 0xc) = 0;
          local_7e0 = param_4 & 0x10;
          if (local_7e0 == 0) {
            iVar6 = FUN_144b55630(local_774);
            *(int *)(param_1 + 0x4c) = iVar6 >> 0x10;
            iVar6 = FUN_144b55630(local_774);
            iVar6 = iVar6 >> 0x10;
          }
          else {
            iVar6 = *(int *)(lVar2 + 0x288) - *(int *)(lVar2 + 0x280) >> 0x10;
            *(int *)(param_1 + 0x4c) = iVar6;
          }
          *(int *)(param_1 + 0x54) = iVar6;
          *(undefined4 *)(param_1 + 0x60) = 0x6f75746c;
          if ((param_2 != 0) && (*(ushort *)(param_2 + 0x1a) < 0x18)) {
            *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) | 0x100;
          }
          if ((((local_78 != 0x10000) || (iStack_6c != 0x10000)) || (iStack_74 != 0)) ||
             (iStack_70 != 0)) {
            FUN_144b5aea0(param_1 + 0x98,&local_78);
            uVar7 = FUN_144b42fe0(*(undefined4 *)(param_1 + 0x40),local_78);
            *(undefined4 *)(param_1 + 0x40) = uVar7;
            uVar7 = FUN_144b42fe0(*(undefined4 *)(param_1 + 0x4c),iStack_6c);
            *(undefined4 *)(param_1 + 0x4c) = uVar7;
          }
          iVar6 = local_7d8._4_4_;
          if (((int)local_118 != 0) || (local_7d8._4_4_ != 0)) {
            FUN_144b5ada0(param_1 + 0x98,local_118 & 0xffffffff,local_7d8._4_4_);
            *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + (int)local_118;
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar6;
          }
          if (((param_4 & 1) == 0) || (local_7e8 != '\0')) {
            uVar7 = *(undefined4 *)(param_1 + 0xfc);
            uVar1 = *(undefined4 *)(param_1 + 0x100);
            puVar9 = *(undefined4 **)(local_798 + 8);
            if (((local_7e7 == '\0') || (local_758 == 0)) &&
               (iVar6 = (int)*(short *)(local_798 + 2), 0 < *(short *)(local_798 + 2))) {
              do {
                uVar8 = FUN_144b42fe0(*puVar9,uVar7);
                *puVar9 = uVar8;
                uVar8 = FUN_144b42fe0(puVar9[1],uVar1);
                iVar6 = iVar6 + -1;
                puVar9[1] = uVar8;
                puVar9 = puVar9 + 2;
              } while (0 < iVar6);
            }
            uVar7 = FUN_144b42fe0(*(undefined4 *)(param_1 + 0x40),uVar7);
            *(undefined4 *)(param_1 + 0x40) = uVar7;
            uVar7 = FUN_144b42fe0(*(undefined4 *)(param_1 + 0x4c),uVar1);
            *(undefined4 *)(param_1 + 0x4c) = uVar7;
          }
          FUN_144b488a0(param_1 + 0x98,&local_68);
          *(int *)(param_1 + 0x38) = local_68;
          *(int *)(param_1 + 0x30) = local_60 - local_68;
          *(int *)(param_1 + 0x34) = local_5c - local_64;
          *(int *)(param_1 + 0x3c) = local_5c;
          if (local_7e0 != 0) {
            FUN_144b58340(param_1 + 0x30,*(undefined4 *)(param_1 + 0x4c));
          }
        }
        else {
          lVar4 = *(longlong *)(param_1 + 0xf0);
          iVar6 = FUN_144b55630(local_780);
          *(int *)(param_1 + 0x38) = iVar6 >> 0x10;
          iVar6 = FUN_144b55630(local_778);
          *(int *)(param_1 + 0x40) = iVar6 >> 0x10;
          *(int *)(lVar4 + 0x10) = local_78;
          *(int *)(lVar4 + 0x14) = iStack_74;
          *(int *)(lVar4 + 0x18) = iStack_70;
          *(int *)(lVar4 + 0x1c) = iStack_6c;
          *(ulonglong *)(lVar4 + 0x20) = local_118;
          *(undefined1 *)(lVar4 + 0xc) = 1;
        }
        *(undefined8 *)(param_1 + 0xd0) = local_7d0;
        *(undefined4 *)(param_1 + 0xd8) = local_7c8;
        plVar5 = *(longlong **)(*(longlong *)(lVar2 + 0xd0) + 0x50);
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 8))(plVar5[1],&local_7d0);
          *(undefined8 *)(param_1 + 0xd0) = 0;
          *(undefined4 *)(param_1 + 0xd8) = 0;
        }
      }
      else {
        (*(code *)puVar3[1])(local_7b8);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_838);
}



// FUNCTION 144df2440 FUN_144df2440 body=701 status=ok
// SIG undefined FUN_144df2440(void)

void FUN_144df2440(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  int *piVar3;
  char *_Str1;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong **pplVar15;
  uint *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auStack_d8 [32];
  int local_b8 [4];
  uint local_a8;
  uint local_a4;
  undefined8 local_a0;
  int local_98 [16];
  longlong *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar1 = *(uint **)(param_1 + 0x2e0);
  lVar13 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  local_b8[0] = 6;
  local_58[0] = param_2;
  if (puVar1 != (uint *)0x0) {
    local_a8 = puVar1[1];
    local_a4 = *puVar1;
    local_b8[0] = 0;
    if (local_a8 != 0) {
      uVar17 = (ulonglong)local_a8;
      piVar11 = local_98 + 1;
      puVar16 = puVar1 + 0x2c;
      puVar7 = puVar1;
      do {
        puVar7 = puVar7 + 2;
        piVar3 = *(int **)puVar16;
        *(undefined8 *)(piVar11 + -3) = *(undefined8 *)puVar7;
        piVar11[-1] = *piVar3;
        *piVar11 = piVar3[(int)((byte)puVar16[-2] - 1)];
        uVar17 = uVar17 - 1;
        piVar11 = piVar11 + 4;
        puVar16 = puVar16 + 6;
      } while (uVar17 != 0);
    }
  }
  uVar4 = local_a8;
  uVar17 = (ulonglong)local_a8;
  if ((local_b8[0] == 0) &&
     (puVar7 = (uint *)FUN_144b560d0(uVar2,(local_a8 + 1) * 0x20,local_b8), local_b8[0] == 0)) {
    puVar7[1] = local_a4;
    *(uint **)(puVar7 + 4) = puVar7 + 8;
    *puVar7 = uVar4;
    puVar7[2] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    if (uVar4 != 0) {
      piVar11 = local_98;
      lVar14 = lVar13;
      uVar18 = uVar17;
LAB_144df2580:
      *(undefined8 *)(lVar14 + *(longlong *)(puVar7 + 4)) = *(undefined8 *)(piVar11 + -2);
      *(int *)(lVar14 + 8 + *(longlong *)(puVar7 + 4)) = *piVar11 << 0x10;
      *(int *)(lVar14 + 0x10 + *(longlong *)(puVar7 + 4)) = piVar11[1] << 0x10;
      lVar9 = *(longlong *)(puVar7 + 4);
      *(int *)(lVar9 + 0xc + lVar14) =
           (*(int *)(lVar9 + 0x10 + lVar14) + *(int *)(lVar9 + 8 + lVar14)) / 2;
      *(undefined4 *)(lVar14 + 0x18 + *(longlong *)(puVar7 + 4)) = 0xffffffff;
      *(undefined4 *)(lVar14 + 0x14 + *(longlong *)(puVar7 + 4)) = 0xffffffff;
      puVar12 = (undefined8 *)(*(longlong *)(puVar7 + 4) + lVar14);
      _Str1 = (char *)*puVar12;
      lVar9 = lVar13;
      if (_Str1 != (char *)0x0) {
        do {
          lVar10 = lVar9 + 1;
          lVar8 = lVar13;
          if (_Str1[lVar9] != "Weight"[lVar9]) goto LAB_144df2611;
          lVar9 = lVar10;
        } while (lVar10 != 7);
        *(undefined4 *)((longlong)puVar12 + 0x14) = 0x77676874;
      }
      goto LAB_144df2657;
    }
LAB_144df2679:
    FUN_144df5a20(*(undefined8 *)(puVar1 + 0x44),local_58,puVar1[1]);
    if (uVar4 != 0) {
      pplVar15 = local_58;
      lVar14 = lVar13;
      do {
        uVar6 = FUN_144df5950((longlong)puVar1 + lVar13 + 0xa8,*(undefined4 *)pplVar15);
        lVar14 = lVar14 + 0x20;
        pplVar15 = (longlong **)((longlong)pplVar15 + 4);
        lVar13 = lVar13 + 0x18;
        *(undefined4 *)(*(longlong *)(puVar7 + 4) + -0x14 + lVar14) = uVar6;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    *param_2 = (longlong)puVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
  while (lVar8 = lVar9, lVar9 != 6) {
LAB_144df2611:
    lVar9 = lVar8 + 1;
    if (_Str1[lVar8] != "Width"[lVar8]) {
      iVar5 = strcmp(_Str1,"OpticalSize");
      if (iVar5 == 0) {
        *(undefined4 *)((longlong)puVar12 + 0x14) = 0x6f70737a;
      }
      goto LAB_144df2657;
    }
  }
  *(undefined4 *)((longlong)puVar12 + 0x14) = 0x77647468;
LAB_144df2657:
  piVar11 = piVar11 + 4;
  lVar14 = lVar14 + 0x20;
  uVar18 = uVar18 - 1;
  param_2 = local_58[0];
  if (uVar18 == 0) goto LAB_144df2679;
  goto LAB_144df2580;
}



// FUNCTION 144df2710 FUN_144df2710 body=66 status=ok
// SIG undefined FUN_144df2710(void)

undefined8 FUN_144df2710(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144df5ae0();
  if ((int)uVar1 == 0) {
    if (param_2 != 0) {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x8000;
      return uVar1;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffff7fff;
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 144df2760 FUN_144df2760 body=149 status=ok
// SIG undefined FUN_144df2760(void)

void FUN_144df2760(longlong param_1,uint param_2,void *param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x2e0);
  if (lVar1 != 0) {
    uVar6 = *(uint *)(lVar1 + 4);
    FUN_144df5a20(*(undefined8 *)(lVar1 + 0x108),local_28);
    uVar2 = param_2;
    if (uVar6 < param_2) {
      uVar2 = uVar6;
    }
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = (ulonglong)uVar2;
      memcpy(param_3,local_28,(ulonglong)uVar2 << 2);
    }
    if ((uint)uVar4 < param_2) {
      puVar5 = (undefined4 *)((longlong)param_3 + uVar4 * 4);
      for (uVar3 = (ulonglong)(param_2 - (uint)uVar4); uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = 0x8000;
        puVar5 = puVar5 + 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 144df2800 FUN_144df2800 body=387 status=ok
// SIG undefined FUN_144df2800(void)

void FUN_144df2800(longlong param_1,uint param_2,longlong param_3)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  int *piVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  int *piVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  undefined1 auStack_a8 [32];
  undefined4 local_88 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = *(longlong *)(param_1 + 0x2e0);
  if (lVar3 != 0) {
    uVar9 = *(uint *)(lVar3 + 4);
    if (uVar9 < param_2) {
      param_2 = uVar9;
    }
    uVar12 = 0;
    if (uVar9 != 0) {
      do {
        uVar16 = 0xffffffff;
        piVar4 = *(int **)(lVar3 + 8 + (uVar12 + 7) * 0x18);
        pbVar1 = (byte *)(lVar3 + (uVar12 + 7) * 0x18);
        puVar5 = *(undefined4 **)(pbVar1 + 0x10);
        if ((uint)uVar12 < param_2) {
          iVar8 = *(int *)(param_3 + uVar12 * 4);
        }
        else {
          iVar8 = (piVar4[(int)(*pbVar1 - 1)] - *piVar4) / 2;
        }
        bVar2 = *pbVar1;
        uVar6 = 0;
        piVar11 = piVar4;
        if (bVar2 == 0) {
LAB_144df291b:
          uVar7 = *puVar5;
        }
        else {
          do {
            uVar10 = uVar6;
            if (iVar8 == *piVar11) goto LAB_144df28e9;
            uVar14 = uVar10;
            if (iVar8 < *piVar11) break;
            uVar9 = (int)uVar10 + 1;
            uVar6 = (ulonglong)uVar9;
            piVar11 = piVar11 + 1;
            uVar14 = 0xffffffff;
            uVar16 = uVar10;
          } while (uVar9 < bVar2);
          iVar15 = (int)uVar16;
          if (iVar15 < 0) goto LAB_144df291b;
          iVar13 = (int)uVar14;
          if (iVar13 < 0) {
            uVar10 = (ulonglong)(int)(bVar2 - 1);
LAB_144df28e9:
            uVar7 = puVar5[uVar10];
          }
          else {
            uVar7 = FUN_144b55580(iVar8 - piVar4[iVar15],puVar5[iVar13] - puVar5[iVar15],
                                  piVar4[iVar13] - piVar4[iVar15]);
          }
        }
        local_88[uVar12] = uVar7;
        uVar9 = (uint)uVar12 + 1;
        uVar12 = (ulonglong)uVar9;
      } while (uVar9 < *(uint *)(lVar3 + 4));
    }
    iVar8 = FUN_144df5ae0(param_1,*(undefined4 *)(lVar3 + 4),local_88);
    if (iVar8 == 0) {
      if (param_2 == 0) {
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffff7fff;
      }
      else {
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x8000;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
}



// FUNCTION 144df29a0 FUN_144df29a0 body=36 status=ok
// SIG undefined FUN_144df29a0(void)

void FUN_144df29a0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_144df5ae0(param_1,0,0);
  if (iVar1 == 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffff7fff;
  }
  return;
}



// FUNCTION 144df29d0 FUN_144df29d0 body=250 status=ok
// SIG undefined FUN_144df29d0(void)

void FUN_144df29d0(longlong param_1,uint param_2,undefined4 *param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x2e0);
  if (lVar1 != 0) {
    uVar7 = *(uint *)(lVar1 + 4);
    FUN_144df5a20(*(undefined8 *)(lVar1 + 0x108),local_58);
    uVar2 = param_2;
    if (uVar7 < param_2) {
      uVar2 = uVar7;
    }
    lVar4 = 0;
    uVar7 = 0;
    if (uVar2 != 0) {
      uVar5 = (ulonglong)uVar2;
      puVar6 = param_3;
      do {
        uVar3 = FUN_144df5950(lVar1 + 0xa8 + lVar4,
                              *(undefined4 *)
                               (((longlong)local_58 - (longlong)param_3) + (longlong)puVar6));
        lVar4 = lVar4 + 0x18;
        *puVar6 = uVar3;
        puVar6 = puVar6 + 1;
        uVar5 = uVar5 - 1;
        uVar7 = uVar2;
      } while (uVar5 != 0);
    }
    if (uVar7 < param_2) {
      puVar6 = param_3 + uVar7;
      for (uVar5 = (ulonglong)(param_2 - uVar7); uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
}



// FUNCTION 144df2ae0 FUN_144df2ae0 body=417 status=ok
// SIG undefined FUN_144df2ae0(void)

void FUN_144df2ae0(longlong param_1,uint param_2)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  ulonglong uVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined1 auStack_a8 [32];
  int local_88 [4];
  undefined4 local_78 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar17 = 4;
  if (param_2 < 5) {
    uVar17 = param_2;
  }
  if (uVar17 != 0) {
    uVar14 = (ulonglong)uVar17;
    piVar11 = local_88;
    do {
      iVar6 = FUN_144b55630();
      *piVar11 = iVar6 >> 0x10;
      piVar11 = piVar11 + 1;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  lVar3 = *(longlong *)(param_1 + 0x2e0);
  if (lVar3 != 0) {
    uVar8 = *(uint *)(lVar3 + 4);
    if (uVar8 < uVar17) {
      uVar17 = uVar8;
    }
    uVar14 = 0;
    if (uVar8 != 0) {
      do {
        uVar16 = 0xffffffff;
        piVar11 = *(int **)(lVar3 + 8 + (uVar14 + 7) * 0x18);
        pbVar1 = (byte *)(lVar3 + (uVar14 + 7) * 0x18);
        puVar4 = *(undefined4 **)(pbVar1 + 0x10);
        if ((uint)uVar14 < uVar17) {
          iVar6 = local_88[uVar14];
        }
        else {
          iVar6 = (piVar11[(int)(*pbVar1 - 1)] - *piVar11) / 2;
        }
        bVar2 = *pbVar1;
        uVar5 = 0;
        piVar10 = piVar11;
        if (bVar2 == 0) {
LAB_144df2c2b:
          uVar7 = *puVar4;
        }
        else {
          do {
            uVar9 = uVar5;
            if (iVar6 == *piVar10) goto LAB_144df2bf9;
            uVar13 = uVar9;
            if (iVar6 < *piVar10) break;
            uVar8 = (int)uVar9 + 1;
            uVar5 = (ulonglong)uVar8;
            piVar10 = piVar10 + 1;
            uVar13 = 0xffffffff;
            uVar16 = uVar9;
          } while (uVar8 < bVar2);
          iVar15 = (int)uVar16;
          if (iVar15 < 0) goto LAB_144df2c2b;
          iVar12 = (int)uVar13;
          if (iVar12 < 0) {
            uVar9 = (ulonglong)(int)(bVar2 - 1);
LAB_144df2bf9:
            uVar7 = puVar4[uVar9];
          }
          else {
            uVar7 = FUN_144b55580(iVar6 - piVar11[iVar15],puVar4[iVar12] - puVar4[iVar15],
                                  piVar11[iVar12] - piVar11[iVar15]);
          }
        }
        local_78[uVar14] = uVar7;
        uVar8 = (uint)uVar14 + 1;
        uVar14 = (ulonglong)uVar8;
      } while (uVar8 < *(uint *)(lVar3 + 4));
    }
    iVar6 = FUN_144df5ae0(param_1,*(undefined4 *)(lVar3 + 4),local_78);
    if (iVar6 == 0) {
      if (uVar17 == 0) {
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffff7fff;
      }
      else {
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x8000;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_a8);
}



// FUNCTION 144df2ca0 FUN_144df2ca0 body=363 status=ok
// SIG undefined FUN_144df2ca0(void)

void FUN_144df2ca0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint *puVar8;
  
  puVar8 = *(uint **)(param_1 + 0x2e0);
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  if (puVar8 != (uint *)0x0) {
    uVar1 = *puVar8;
    uVar6 = (ulonglong)uVar1;
    uVar2 = puVar8[1];
    uVar7 = (ulonglong)uVar2;
    FUN_144b56350(uVar3,*(undefined8 *)(puVar8 + 10));
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    if (1 < uVar1) {
      puVar4 = puVar8 + 0xc;
      for (uVar5 = (ulonglong)(uVar1 - 1); uVar5 != 0; uVar5 = uVar5 - 1) {
        puVar4[0] = 0;
        puVar4[1] = 0;
        puVar4 = puVar4 + 2;
      }
    }
    FUN_144b56350(uVar3,*(undefined8 *)(puVar8 + 0x6a));
    puVar8[0x6a] = 0;
    puVar8[0x6b] = 0;
    FUN_144b56350(uVar3,*(undefined8 *)(puVar8 + 0x48));
    puVar8[0x48] = 0;
    puVar8[0x49] = 0;
    FUN_144b56350(uVar3,*(undefined8 *)(puVar8 + 0x8e));
    puVar8[0x8e] = 0;
    puVar8[0x8f] = 0;
    if (uVar1 != 0) {
      puVar4 = puVar8 + 0x46;
      do {
        puVar4[0x22] = 0;
        puVar4[0x23] = 0;
        puVar4[0] = 0;
        puVar4[1] = 0;
        puVar4[0x46] = 0;
        puVar4[0x47] = 0;
        puVar4 = puVar4 + 2;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    FUN_144b56350(uVar3,*(undefined8 *)(puVar8 + 0x42));
    puVar8[0x42] = 0;
    puVar8[0x43] = 0;
    puVar8[0x44] = 0;
    puVar8[0x45] = 0;
    uVar6 = uVar7;
    puVar4 = puVar8;
    if (uVar2 != 0) {
      do {
        puVar4 = puVar4 + 2;
        FUN_144b56350(uVar3,*(undefined8 *)puVar4);
        puVar4[0] = 0;
        puVar4[1] = 0;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    if (uVar2 != 0) {
      puVar8 = puVar8 + 0x2c;
      do {
        FUN_144b56350(uVar3,*(undefined8 *)puVar8);
        puVar8[0] = 0;
        puVar8[1] = 0;
        *(undefined1 *)(puVar8 + -2) = 0;
        puVar8 = puVar8 + 6;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    FUN_144b56350(uVar3,*(undefined8 *)(param_1 + 0x2e0));
    *(undefined8 *)(param_1 + 0x2e0) = 0;
  }
  return;
}



// FUNCTION 144df2e10 FUN_144df2e10 body=266 status=ok
// SIG undefined FUN_144df2e10(void)

undefined8 FUN_144df2e10(longlong param_1,uint param_2,longlong param_3)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  
  puVar1 = *(uint **)(param_1 + 0x2e0);
  if (puVar1 == (uint *)0x0) {
    return 6;
  }
  if (param_2 == 0) {
    if (param_3 == 0) {
      uVar4 = 0;
      if (*puVar1 == 0) {
        return 0;
      }
      do {
        uVar3 = (ulonglong)uVar4;
        uVar4 = uVar4 + 1;
        *(undefined4 *)(uVar3 * 4 + *(longlong *)(puVar1 + 0x42)) =
             *(undefined4 *)(uVar3 * 4 + *(longlong *)(puVar1 + 0x44));
      } while (uVar4 < *puVar1);
      return 0;
    }
  }
  else if (param_3 == 0) {
    return 6;
  }
  uVar4 = *puVar1;
  if (param_2 < *puVar1) {
    uVar4 = param_2;
  }
  uVar2 = 0;
  if (uVar4 != 0) {
    uVar3 = (ulonglong)uVar4;
    lVar5 = 0;
    do {
      *(undefined4 *)(lVar5 + *(longlong *)(puVar1 + 0x42)) = *(undefined4 *)(lVar5 + param_3);
      uVar3 = uVar3 - 1;
      lVar5 = lVar5 + 4;
      uVar2 = uVar4;
    } while (uVar3 != 0);
  }
  if (uVar2 < *puVar1) {
    do {
      uVar3 = (ulonglong)uVar2;
      uVar2 = uVar2 + 1;
      *(undefined4 *)(*(longlong *)(puVar1 + 0x42) + uVar3 * 4) = 0;
    } while (uVar2 < *puVar1);
  }
  if (param_2 == 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffff7fff;
    return 0;
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x8000;
  return 0;
}



// FUNCTION 144df2f20 FUN_144df2f20 body=142 status=ok
// SIG undefined FUN_144df2f20(void)

undefined8 FUN_144df2f20(longlong param_1,uint *param_2,longlong param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  ulonglong uVar4;
  
  puVar2 = *(uint **)(param_1 + 0x2e0);
  if (puVar2 != (uint *)0x0) {
    uVar1 = *puVar2;
    if (uVar1 <= *param_2) {
      uVar3 = 0;
      if (uVar1 != 0) {
        do {
          uVar4 = (ulonglong)uVar3;
          uVar3 = uVar3 + 1;
          *(undefined4 *)(uVar4 * 4 + param_3) =
               *(undefined4 *)(uVar4 * 4 + *(longlong *)(puVar2 + 0x42));
        } while (uVar3 < *puVar2);
      }
      if (uVar3 < *param_2) {
        do {
          uVar4 = (ulonglong)uVar3;
          uVar3 = uVar3 + 1;
          *(undefined4 *)(param_3 + uVar4 * 4) = 0;
        } while (uVar3 < *param_2);
      }
      *param_2 = *puVar2;
      return 0;
    }
    *param_2 = uVar1;
  }
  return 6;
}



// FUNCTION 144df2fb0 FUN_144df2fb0 body=383 status=ok
// SIG undefined FUN_144df2fb0(void)

void FUN_144df2fb0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  void *_Dst;
  uint uVar2;
  longlong *plVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_c8 [32];
  int local_a8;
  int local_a4 [3];
  int local_98 [24];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar5 = 0;
  local_a8 = 0;
  (**(code **)(param_2 + 0x78))(param_2,local_98,4,local_a4);
  if (local_a4[0] < 0) {
    *(undefined4 *)(param_2 + 0x18) = 0xa2;
  }
  else if ((local_a4[0] == 0) || (4 < local_a4[0])) {
    *(undefined4 *)(param_2 + 0x18) = 3;
  }
  else {
    local_a8 = FUN_144df56b0(param_1,0);
    if (local_a8 == 0) {
      plVar3 = *(longlong **)(param_1 + 0x2e0);
      uVar1 = *(undefined8 *)(param_1 + 0x98);
      if (local_a4[0] < 1) {
        *(undefined4 *)(param_2 + 0x18) = 0;
      }
      else {
        piVar4 = local_98;
        do {
          plVar3 = plVar3 + 1;
          if (**(char **)piVar4 == '/') {
            *(char **)piVar4 = *(char **)piVar4 + 1;
          }
          uVar2 = piVar4[2] - *piVar4;
          if (uVar2 == 0) {
            *(undefined4 *)(param_2 + 0x18) = 3;
            goto LAB_144df3103;
          }
          if (*plVar3 != 0) {
            FUN_144b56350(uVar1);
          }
          _Dst = (void *)FUN_144b560d0(uVar1,uVar2 + 1,&local_a8);
          *plVar3 = (longlong)_Dst;
          if (local_a8 != 0) break;
          memcpy(_Dst,*(void **)piVar4,(ulonglong)uVar2);
          iVar5 = iVar5 + 1;
          *(undefined1 *)((ulonglong)uVar2 + (longlong)_Dst) = 0;
          piVar4 = piVar4 + 6;
        } while (iVar5 < local_a4[0]);
        *(int *)(param_2 + 0x18) = local_a8;
      }
    }
    else {
      *(int *)(param_2 + 0x18) = local_a8;
    }
  }
LAB_144df3103:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_c8);
}



// FUNCTION 144df3140 FUN_144df3140 body=38 status=ok
// SIG undefined FUN_144df3140(void)

undefined8 FUN_144df3140(longlong param_1,ulonglong param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_144b56430(param_3,*(undefined8 *)(*(longlong *)(param_1 + 0x248) + (param_2 & 0xffffffff) * 8)
                ,param_4);
  return 0;
}



// FUNCTION 144df3170 FUN_144df3170 body=129 status=ok
// SIG undefined FUN_144df3170(void)

ulonglong FUN_144df3170(longlong param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  if (0 < *(int *)(param_1 + 0x240)) {
    plVar5 = *(longlong **)(param_1 + 0x248);
    uVar6 = uVar4;
    do {
      pcVar3 = param_2;
      do {
        cVar1 = *pcVar3;
        cVar2 = pcVar3[*plVar5 - (longlong)param_2];
        if (cVar1 != cVar2) break;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) {
        return uVar6;
      }
      uVar6 = (ulonglong)((int)uVar6 + 1);
      uVar4 = uVar4 + 1;
      plVar5 = plVar5 + 1;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x240));
  }
  return 0;
}



// FUNCTION 144df3210 FUN_144df3210 body=533 status=ok
// SIG undefined FUN_144df3210(void)

void FUN_144df3210(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_278 [32];
  int local_258;
  int local_254;
  int local_250;
  longlong local_248;
  longlong local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228 [12];
  undefined8 local_1c8 [48];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_240 = param_1;
  (*(code *)param_2[0xf])(param_2,local_1c8,0x10,&local_254);
  if (local_254 < 0) {
    *(undefined4 *)(param_2 + 3) = 0xa2;
  }
  else if ((local_254 == 0) || (0x10 < local_254)) {
    *(undefined4 *)(param_2 + 3) = 3;
  }
  else {
    local_238 = *param_2;
    iVar2 = 0;
    local_230 = param_2[2];
    local_248 = *(longlong *)(param_1 + 0x2e0);
    local_250 = 0;
    if (0 < local_254) {
      lVar8 = 0;
      do {
        iVar6 = local_250;
        *param_2 = local_1c8[lVar8 * 3];
        param_2[2] = local_1c8[lVar8 * 3 + 1];
        (*(code *)param_2[0xf])(param_2,local_228,4,&local_258);
        iVar4 = local_258;
        if (lVar8 == 0) {
          if ((local_258 < 1) || (4 < local_258)) {
LAB_144df3408:
            *(undefined4 *)(param_2 + 3) = 3;
            goto LAB_144df33ec;
          }
          iVar2 = FUN_144df56b0(param_1,local_254,local_258);
          if (iVar2 != 0) {
            *(int *)(param_2 + 3) = iVar2;
            goto LAB_144df33ec;
          }
          local_248 = *(longlong *)(param_1 + 0x2e0);
          iVar2 = iVar4;
        }
        else if (local_258 != iVar2) goto LAB_144df3408;
        lVar1 = local_248;
        iVar4 = 0;
        if (0 < local_258) {
          puVar5 = local_228;
          lVar7 = 0;
          do {
            *param_2 = *puVar5;
            param_2[2] = puVar5[1];
            uVar3 = (*(code *)param_2[10])(param_2,0);
            puVar5 = puVar5 + 3;
            iVar4 = iVar4 + 1;
            *(undefined4 *)(lVar7 + *(longlong *)(lVar1 + 0x28 + lVar8 * 8)) = uVar3;
            lVar7 = lVar7 + 4;
            iVar6 = local_250;
          } while (iVar4 < local_258);
        }
        local_250 = iVar6 + 1;
        lVar8 = lVar8 + 1;
        param_1 = local_240;
      } while (local_250 < local_254);
    }
    *param_2 = local_238;
    param_2[2] = local_230;
    *(undefined4 *)(param_2 + 3) = 0;
  }
LAB_144df33ec:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_278);
}



// FUNCTION 144df3510 FUN_144df3510 body=2245 status=ok
// SIG undefined FUN_144df3510(void)

uint FUN_144df3510(longlong param_1,undefined4 param_2,uint param_3,uint *param_4,uint param_5)

{
  uint uVar1;
  uint *puVar2;
  void *pvVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar1 = 0;
  if ((int)param_5 < 0) {
    param_5 = uVar1;
  }
  uVar4 = uVar1;
  switch(param_2) {
  case 0:
    uVar4 = 1;
    if ((param_4 != (uint *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x261);
    }
    break;
  case 1:
    if (((param_3 < 4) && (uVar4 = 4, param_4 != (uint *)0x0)) && (3 < param_5)) {
      if (param_3 == 0) {
        uVar1 = *(uint *)(param_1 + 0x264);
      }
      else {
        if (param_3 == 1) {
          *param_4 = *(uint *)(param_1 + 0x268);
          break;
        }
        if (param_3 == 2) {
          *param_4 = *(uint *)(param_1 + 0x26c);
          break;
        }
        if (param_3 == 3) {
          *param_4 = *(uint *)(param_1 + 0x270);
          break;
        }
      }
      *param_4 = uVar1;
    }
    break;
  case 2:
    if (param_3 < 4) {
      uVar1 = 0;
      uVar4 = 4;
      if ((param_4 != (uint *)0x0) && (3 < param_5)) {
        if (param_3 == 0) {
          uVar1 = *(uint *)(param_1 + 0x27c);
        }
        else {
          if (param_3 == 1) {
            *param_4 = *(uint *)(param_1 + 0x280);
            break;
          }
          if (param_3 == 2) {
            *param_4 = *(uint *)(param_1 + 0x284);
            break;
          }
          if (param_3 == 3) {
            *param_4 = *(uint *)(param_1 + 0x288);
            break;
          }
        }
        *param_4 = uVar1;
      }
    }
    break;
  case 3:
    uVar4 = 1;
    if ((param_4 != (uint *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x260);
    }
    break;
  case 4:
    pvVar3 = *(void **)(param_1 + 0x1d8);
    if (pvVar3 == (void *)0x0) break;
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (*(char *)((longlong)pvVar3 + lVar6) != '\0');
    goto LAB_144df36aa;
  case 5:
    uVar4 = 4;
    if ((param_4 != (uint *)0x0) && (3 < param_5)) {
      *param_4 = *(uint *)(param_1 + 0x114);
    }
    break;
  case 6:
    uVar4 = 4;
    if ((param_4 != (uint *)0x0) && (3 < param_5)) {
      *param_4 = *(uint *)(param_1 + 0x240);
    }
    break;
  case 7:
    if (param_3 < *(uint *)(param_1 + 0x240)) {
      uVar5 = 0xffffffffffffffff;
      pvVar3 = *(void **)(*(longlong *)(param_1 + 0x248) + (ulonglong)param_3 * 8);
      do {
        uVar5 = uVar5 + 1;
      } while (*(char *)((longlong)pvVar3 + uVar5) != '\0');
      uVar4 = (int)uVar5 + 1;
      if ((param_4 != (uint *)0x0) && (uVar4 <= param_5)) {
        memcpy(param_4,pvVar3,(ulonglong)uVar4);
        *(undefined1 *)((uVar5 & 0xffffffff) + (longlong)param_4) = 0;
      }
    }
    break;
  case 8:
    if (*(uint *)(param_1 + 0x240) <= param_3) break;
    uVar5 = (ulonglong)param_3;
    uVar1 = *(uint *)(*(longlong *)(param_1 + 600) + uVar5 * 4);
    uVar4 = uVar1 + 1;
    if ((param_4 == (uint *)0x0) || (param_5 < uVar4)) break;
    lVar6 = *(longlong *)(param_1 + 0x250);
    goto LAB_144df379b;
  case 9:
    uVar4 = 4;
    if ((param_4 != (uint *)0x0) && (3 < param_5)) {
      *param_4 = *(uint *)(param_1 + 0x1e0);
    }
    break;
  case 10:
    if ((*(int *)(param_1 + 0x1e0) == 1) && (param_3 < *(uint *)(param_1 + 0x1e8))) {
      uVar5 = 0xffffffffffffffff;
      pvVar3 = *(void **)(*(longlong *)(param_1 + 0x200) + (ulonglong)param_3 * 8);
      do {
        uVar5 = uVar5 + 1;
      } while (*(char *)((longlong)pvVar3 + uVar5) != '\0');
      uVar4 = (int)uVar5 + 1;
      if ((param_4 != (uint *)0x0) && (uVar4 <= param_5)) {
        memcpy(param_4,pvVar3,uVar5 & 0xffffffff);
        *(undefined1 *)((uVar5 & 0xffffffff) + (longlong)param_4) = 0;
      }
    }
    break;
  case 0xb:
    uVar4 = 4;
    if ((param_4 != (uint *)0x0) && (3 < param_5)) {
      *param_4 = *(uint *)(param_1 + 0x220);
    }
    break;
  case 0xc:
    if (*(longlong *)(param_1 + 0x238) == 0) {
      if (*(uint *)(param_1 + 0x220) <= param_3) break;
    }
    else {
      puVar2 = (uint *)FUN_144b592a0(param_3);
      if (puVar2 == (uint *)0x0) break;
      param_3 = *puVar2;
    }
    lVar6 = *(longlong *)(param_1 + 0x228);
    if (lVar6 == 0) break;
    uVar5 = (ulonglong)param_3;
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x230) + uVar5 * 4);
    uVar4 = uVar1 + 1;
    if ((param_4 == (uint *)0x0) || (param_5 < uVar4)) break;
LAB_144df379b:
    memcpy(param_4,*(void **)(lVar6 + uVar5 * 8),(ulonglong)uVar1);
    *(undefined1 *)((ulonglong)(uVar4 - 1) + (longlong)param_4) = 0;
    break;
  case 0xd:
    uVar4 = 2;
    if ((param_4 != (uint *)0x0) && (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x18c);
    }
    break;
  case 0xe:
    uVar4 = 2;
    if ((param_4 != (uint *)0x0) && (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x18e);
    }
    break;
  case 0xf:
    uVar4 = 1;
    if ((param_4 != (uint *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x11c);
    }
    break;
  case 0x10:
    if (((param_3 < *(byte *)(param_1 + 0x11c)) && (uVar4 = 2, param_4 != (uint *)0x0)) &&
       (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x120 + (ulonglong)param_3 * 2);
    }
    break;
  case 0x11:
    uVar4 = 4;
    if ((param_4 != (uint *)0x0) && (3 < param_5)) {
      *param_4 = *(uint *)(param_1 + 0x188);
    }
    break;
  case 0x12:
    uVar4 = 1;
    if ((param_4 != (uint *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x11d);
    }
    break;
  case 0x13:
    if (((param_3 < *(byte *)(param_1 + 0x11d)) && (uVar4 = 2, param_4 != (uint *)0x0)) &&
       (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x13c + (ulonglong)param_3 * 2);
    }
    break;
  case 0x14:
    uVar4 = 1;
    if ((param_4 != (uint *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x11e);
    }
    break;
  case 0x15:
    if (((param_3 < *(byte *)(param_1 + 0x11e)) && (uVar4 = 2, param_4 != (uint *)0x0)) &&
       (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x150 + (ulonglong)param_3 * 2);
    }
    break;
  case 0x16:
    uVar4 = 1;
    if ((param_4 != (uint *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x11f);
    }
    break;
  case 0x17:
    if (((param_3 < *(byte *)(param_1 + 0x11f)) && (uVar4 = 2, param_4 != (uint *)0x0)) &&
       (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x16c + (ulonglong)param_3 * 2);
    }
    break;
  case 0x18:
    uVar4 = 4;
    if ((param_4 != (uint *)0x0) && (3 < param_5)) {
      *param_4 = *(uint *)(param_1 + 0x180);
    }
    break;
  case 0x19:
    uVar4 = 4;
    if ((param_4 != (uint *)0x0) && (3 < param_5)) {
      *param_4 = *(uint *)(param_1 + 0x184);
    }
    break;
  case 0x1a:
    uVar4 = 1;
    if ((param_4 != (uint *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 400);
    }
    break;
  case 0x1b:
    if (((param_3 < *(byte *)(param_1 + 400)) && (uVar4 = 2, param_4 != (uint *)0x0)) &&
       (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x194 + (ulonglong)param_3 * 2);
    }
    break;
  case 0x1c:
    uVar4 = 1;
    if ((param_4 != (uint *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x191);
    }
    break;
  case 0x1d:
    if (((param_3 < *(byte *)(param_1 + 0x191)) && (uVar4 = 2, param_4 != (uint *)0x0)) &&
       (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x1ae + (ulonglong)param_3 * 2);
    }
    break;
  case 0x1e:
    uVar4 = 1;
    if ((param_4 != (uint *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x192);
    }
    break;
  case 0x1f:
    uVar4 = 1;
    if ((param_4 != (uint *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x193);
    }
    break;
  case 0x20:
    if (((param_3 < 2) && (uVar4 = 2, param_4 != (uint *)0x0)) && (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x1d4 + (ulonglong)param_3 * 2);
    }
    break;
  case 0x21:
    uVar4 = 4;
    if ((param_4 != (uint *)0x0) && (3 < param_5)) {
      *param_4 = *(uint *)(param_1 + 0x118);
    }
    break;
  case 0x22:
    uVar4 = 4;
    if ((param_4 != (uint *)0x0) && (3 < param_5)) {
      *param_4 = *(uint *)(param_1 + 0x1d0);
    }
    break;
  case 0x23:
    uVar4 = 4;
    if ((param_4 != (uint *)0x0) && (3 < param_5)) {
      *param_4 = *(uint *)(param_1 + 0x1cc);
    }
    break;
  case 0x24:
    pvVar3 = *(void **)(param_1 + 0xd8);
    if (pvVar3 == (void *)0x0) break;
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (*(char *)((longlong)pvVar3 + lVar6) != '\0');
    goto LAB_144df36aa;
  case 0x25:
    pvVar3 = *(void **)(param_1 + 0xe0);
    if (pvVar3 == (void *)0x0) break;
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (*(char *)((longlong)pvVar3 + lVar6) != '\0');
    goto LAB_144df36aa;
  case 0x26:
    pvVar3 = *(void **)(param_1 + 0xe8);
    if (pvVar3 == (void *)0x0) break;
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (*(char *)((longlong)pvVar3 + lVar6) != '\0');
    goto LAB_144df36aa;
  case 0x27:
    pvVar3 = *(void **)(param_1 + 0xf0);
    if (pvVar3 == (void *)0x0) break;
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (*(char *)((longlong)pvVar3 + lVar6) != '\0');
    goto LAB_144df36aa;
  case 0x28:
    pvVar3 = *(void **)(param_1 + 0xf8);
    if (pvVar3 == (void *)0x0) break;
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (*(char *)((longlong)pvVar3 + lVar6) != '\0');
LAB_144df36aa:
    uVar4 = (int)lVar6 + 1;
    if ((param_4 != (uint *)0x0) && (uVar4 <= param_5)) {
      memcpy(param_4,pvVar3,(ulonglong)uVar4);
    }
    break;
  case 0x29:
    uVar4 = 1;
    if ((param_4 != (uint *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x104);
    }
    break;
  case 0x2a:
    uVar4 = 2;
    if ((param_4 != (uint *)0x0) && (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x106);
    }
    break;
  case 0x2b:
    uVar4 = 2;
    if ((param_4 != (uint *)0x0) && (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x108);
    }
    break;
  case 0x2c:
    uVar4 = 2;
    if ((param_4 != (uint *)0x0) && (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x110);
    }
    break;
  case 0x2d:
    uVar4 = 4;
    if ((param_4 != (uint *)0x0) && (3 < param_5)) {
      *param_4 = *(uint *)(param_1 + 0x100);
    }
  }
  if (uVar4 == 0) {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



// FUNCTION 144df3e90 FUN_144df3e90 body=611 status=ok
// SIG undefined FUN_144df3e90(void)

void FUN_144df3e90(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  longlong alStack_338 [9];
  undefined *puStack_2f0;
  undefined1 auStack_2e8 [32];
  undefined8 local_2c8;
  int *local_2c0;
  int local_2b8;
  int local_2b4;
  int local_2b0 [2];
  undefined8 local_2a8;
  longlong local_2a0;
  longlong local_298;
  undefined1 local_288 [96];
  longlong local_228 [60];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  uVar5 = *(undefined8 *)(param_1 + 0x98);
  local_2b8 = 0;
  puStack_2f0 = (undefined *)0x144df3edd;
  local_2a8 = uVar5;
  (*(code *)param_2[0xf])(param_2,local_288,4,local_2b0);
  if (local_2b0[0] < 0) {
    *(undefined4 *)(param_2 + 3) = 0xa2;
  }
  else if ((local_2b0[0] == 0) || (4 < local_2b0[0])) {
    *(undefined4 *)(param_2 + 3) = 3;
  }
  else {
    local_2a0 = *param_2;
    local_298 = param_2[2];
    puStack_2f0 = (undefined *)0x144df3f1e;
    local_2b8 = FUN_144df56b0(param_1,0);
    if (local_2b8 == 0) {
      lVar1 = *(longlong *)(param_1 + 0x2e0);
      iVar8 = 0;
      if (0 < local_2b0[0]) {
        plVar6 = (longlong *)(lVar1 + 0xb0);
        do {
          *param_2 = *(longlong *)((longlong)plVar6 + ((longlong)alStack_338 - lVar1));
          param_2[2] = *(longlong *)((longlong)alStack_338 + (8 - lVar1) + (longlong)plVar6);
          puStack_2f0 = (undefined *)0x144df3fb0;
          (*(code *)param_2[0xf])(param_2,local_228,0x14,&local_2b4);
          if (((local_2b4 < 1) || (0x14 < local_2b4)) || (*plVar6 != 0)) {
            *(undefined4 *)(param_2 + 3) = 3;
            goto LAB_144df40c7;
          }
          local_2c0 = &local_2b8;
          local_2c8 = 0;
          puStack_2f0 = (undefined *)0x144df3ff7;
          lVar3 = FUN_144b561b0(uVar5,4,0,local_2b4 * 2);
          *plVar6 = lVar3;
          if (local_2b8 != 0) {
            *(int *)(param_2 + 3) = local_2b8;
            goto LAB_144df40c7;
          }
          iVar4 = 0;
          *(char *)(plVar6 + -1) = (char)local_2b4;
          plVar6[1] = lVar3 + (longlong)local_2b4 * 4;
          if (0 < local_2b4) {
            plVar7 = local_228;
            lVar3 = 0;
            do {
              *param_2 = *plVar7 + 1;
              param_2[2] = plVar7[1] + -1;
              puStack_2f0 = (undefined *)0x144df404a;
              uVar2 = (*(code *)param_2[9])(param_2);
              *(undefined4 *)(lVar3 + *plVar6) = uVar2;
              puStack_2f0 = (undefined *)0x144df4058;
              uVar2 = (*(code *)param_2[10])(param_2,0);
              plVar7 = plVar7 + 3;
              iVar4 = iVar4 + 1;
              *(undefined4 *)(lVar3 + plVar6[1]) = uVar2;
              uVar5 = local_2a8;
              lVar3 = lVar3 + 4;
            } while (iVar4 < local_2b4);
          }
          iVar8 = iVar8 + 1;
          plVar6 = plVar6 + 3;
        } while (iVar8 < local_2b0[0]);
      }
      *param_2 = local_2a0;
      param_2[2] = local_298;
      *(int *)(param_2 + 3) = local_2b8;
    }
    else {
      *(int *)(param_2 + 3) = local_2b8;
    }
  }
LAB_144df40c7:
                    /* WARNING: Subroutine does not return */
  puStack_2f0 = &UNK_144df40d7;
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_2e8);
}



// FUNCTION 144df4100 FUN_144df4100 body=318 status=ok
// SIG undefined FUN_144df4100(void)

void FUN_144df4100(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined1 auStack_1f8 [32];
  int local_1d8 [4];
  undefined8 local_1c8 [48];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  piVar8 = *(int **)(param_1 + 0x2e0);
  uVar6 = 0;
  (*(code *)param_2[0xf])(param_2,local_1c8,0x10,local_1d8);
  if (local_1d8[0] < 0) {
    *(undefined4 *)(param_2 + 3) = 0xa2;
    goto LAB_144df4174;
  }
  if ((local_1d8[0] == 0) || (0x10 < local_1d8[0])) {
LAB_144df416d:
    *(undefined4 *)(param_2 + 3) = 3;
  }
  else {
    if ((piVar8 == (int *)0x0) || (*piVar8 == 0)) {
      iVar3 = FUN_144df56b0(param_1,local_1d8[0],0);
      if (iVar3 != 0) {
        *(int *)(param_2 + 3) = iVar3;
        goto LAB_144df4174;
      }
      piVar8 = *(int **)(param_1 + 0x2e0);
    }
    else if (*piVar8 != local_1d8[0]) goto LAB_144df416d;
    uVar1 = *param_2;
    uVar2 = param_2[2];
    if (0 < local_1d8[0]) {
      puVar9 = local_1c8;
      uVar7 = uVar6;
      do {
        *param_2 = *puVar9;
        param_2[2] = puVar9[1];
        uVar4 = (*(code *)param_2[10])(param_2,0);
        puVar9 = puVar9 + 3;
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        *(undefined4 *)(uVar7 + *(longlong *)(piVar8 + 0x42)) = uVar4;
        *(undefined4 *)(uVar7 + *(longlong *)(piVar8 + 0x44)) = uVar4;
        uVar7 = uVar7 + 4;
      } while ((int)uVar5 < local_1d8[0]);
    }
    *param_2 = uVar1;
    param_2[2] = uVar2;
    *(undefined4 *)(param_2 + 3) = 0;
  }
LAB_144df4174:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1f8);
}



// FUNCTION 144df4250 FUN_144df4250 body=38 status=ok
// SIG undefined FUN_144df4250(void)

void FUN_144df4250(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(param_2 + 0x68))(param_2,0,0,0);
  *(undefined4 *)(param_1 + 0x2f0) = uVar1;
  return;
}



// FUNCTION 144df4290 FUN_144df4290 body=318 status=ok
// SIG undefined FUN_144df4290(void)

void FUN_144df4290(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar3 = (**(code **)(param_2 + 0x68))(param_2,6,&local_38);
  if (iVar3 < 6) {
    *(undefined4 *)(param_2 + 0x18) = 3;
  }
  else {
    iVar3 = local_2c;
    if (local_2c < 0) {
      iVar3 = -local_2c;
    }
    if (iVar3 != 0) {
      if (iVar3 != 0x10000) {
        uVar2 = FUN_144b555e0(1000,iVar3);
        *(undefined2 *)(param_1 + 0x68) = uVar2;
        local_38 = FUN_144b555e0(local_38,iVar3);
        local_34 = FUN_144b555e0(local_34,iVar3);
        local_30 = FUN_144b555e0(local_30,iVar3);
        local_28 = FUN_144b555e0(local_28,iVar3);
        local_24 = FUN_144b555e0(local_24,iVar3);
        bVar4 = local_2c < 0;
        local_2c = 0x10000;
        if (bVar4) {
          local_2c = -0x10000;
        }
      }
      *(undefined4 *)(param_1 + 0x264) = local_38;
      *(undefined4 *)(param_1 + 0x26c) = local_34;
      *(int *)(param_1 + 0x270) = local_2c;
      *(undefined4 *)(param_1 + 0x268) = local_30;
      cVar1 = FUN_144b570a0(param_1 + 0x264);
      if (cVar1 != '\0') {
        *(int *)(param_1 + 0x274) = local_28 >> 0x10;
        *(int *)(param_1 + 0x278) = local_24 >> 0x10;
        goto LAB_144df43c1;
      }
    }
    *(undefined4 *)(param_2 + 0x18) = 3;
  }
LAB_144df43c1:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 144df43f0 FUN_144df43f0 body=189 status=ok
// SIG undefined FUN_144df43f0(void)

int FUN_144df43f0(char *param_1,ulonglong param_2,longlong param_3)

{
  char *_Str1;
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  
  if (0xffff < param_2) {
    return 0;
  }
  iVar3 = 0;
  if (0 < *(int *)(param_3 + 0x168)) {
    lVar4 = 0;
    do {
      _Str1 = *(char **)(lVar4 + *(longlong *)(param_3 + 0x170));
      if ((_Str1 != (char *)0x0) && (*_Str1 == *param_1)) {
        uVar2 = 0xffffffffffffffff;
        do {
          uVar2 = uVar2 + 1;
        } while (_Str1[uVar2] != '\0');
        if ((uVar2 == param_2) && (iVar1 = strncmp(_Str1,param_1,param_2), iVar1 == 0)) {
          return iVar3;
        }
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < *(int *)(param_3 + 0x168));
  }
  return 0;
}



// FUNCTION 144df44d0 FUN_144df44d0 body=594 status=ok
// SIG undefined FUN_144df44d0(void)

int FUN_144df44d0(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  ushort *puVar8;
  longlong lVar9;
  ushort *puVar10;
  uint uVar11;
  ushort *puVar12;
  int local_res10 [2];
  
  puVar10 = *(ushort **)(param_2 + 0x38);
  lVar9 = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  puVar12 = *(ushort **)(param_2 + 0x40);
  local_res10[0] = 0;
  if ((ushort *)((longlong)puVar10 + 0x65U) <= puVar12) {
    uVar4 = *(ushort *)((longlong)puVar10 + 99);
    if (((puVar12 < (ushort *)((longlong)puVar10 + (ulonglong)uVar4 + 0x87)) ||
        (*(ushort *)((longlong)puVar10 + (ulonglong)uVar4 + 0x75) < 0x12)) ||
       (puVar8 = (ushort *)
                 ((ulonglong)*(uint *)((longlong)puVar10 + (ulonglong)uVar4 + 0x83) +
                 (longlong)puVar10), puVar8 == puVar10)) {
      return 0;
    }
    puVar10 = puVar8 + 1;
    if (puVar10 <= puVar12) {
      uVar11 = (uint)*puVar8;
      *(uint *)(param_3 + 0x38) = uVar11;
      if ((ushort *)((ulonglong)(uVar11 * 4) + (longlong)puVar10) <= puVar12) {
        if (uVar11 == 0) {
          return 0;
        }
        puVar6 = (undefined4 *)FUN_144b561b0(uVar2,0x10,0,uVar11,0,local_res10);
        *(undefined4 **)(param_3 + 0x30) = puVar6;
        if (local_res10[0] == 0) {
          lVar3 = *(longlong *)(param_1 + 0x88);
          puVar12 = (ushort *)((ulonglong)(uint)(*(int *)(param_3 + 0x38) << 2) + (longlong)puVar10)
          ;
          if (0 < *(int *)(param_1 + 0x38)) {
            plVar7 = *(longlong **)(param_1 + 0x40);
            do {
              if (*(short *)(*plVar7 + 0xc) == 7) {
                local_res10[0] = FUN_144b55340(param_1);
                if (local_res10[0] != 0) goto LAB_144df46e8;
                break;
              }
              lVar9 = lVar9 + 1;
              plVar7 = plVar7 + 1;
            } while (lVar9 < *(int *)(param_1 + 0x38));
          }
          for (; puVar10 < puVar12; puVar10 = puVar10 + 2) {
            uVar5 = FUN_144b42f90(param_1,(char)*puVar10);
            *puVar6 = uVar5;
            uVar5 = FUN_144b42f90(param_1,*(undefined1 *)((longlong)puVar10 + 1));
            puVar6[1] = uVar5;
            bVar1 = *(byte *)((longlong)puVar10 + 3);
            uVar4 = puVar10[1];
            puVar6[3] = 0;
            puVar6[2] = (int)(short)((ushort)bVar1 << 8) | (uint)(byte)uVar4;
            puVar6 = puVar6 + 4;
          }
          if (lVar3 != 0) {
            local_res10[0] = FUN_144b55340(param_1,lVar3);
          }
          if ((local_res10[0] == 0) &&
             (qsort(*(void **)(param_3 + 0x30),(ulonglong)*(uint *)(param_3 + 0x38),0x10,
                    (_PtFuncCompare *)&LAB_144df44b0), local_res10[0] == 0)) {
            return 0;
          }
        }
        goto LAB_144df46e8;
      }
    }
  }
  local_res10[0] = 2;
LAB_144df46e8:
  FUN_144b56350(uVar2,*(undefined8 *)(param_3 + 0x30));
  *(undefined8 *)(param_3 + 0x30) = 0;
  *(undefined4 *)(param_3 + 0x38) = 0;
  return local_res10[0];
}



// FUNCTION 144df4730 FUN_144df4730 body=364 status=ok
// SIG undefined FUN_144df4730(void)

void FUN_144df4730(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_7d8 [32];
  undefined8 local_7b8;
  undefined8 local_7b0;
  undefined1 local_7a8;
  undefined4 local_7a0;
  code *local_798;
  undefined1 local_788 [8];
  undefined1 local_780 [24];
  undefined1 local_768 [8];
  longlong local_760;
  int local_728;
  undefined1 local_70c;
  undefined1 local_70a;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_7d8;
  lVar1 = *(longlong *)(param_1 + 0x2a0);
  local_798 = FUN_144df5650;
  iVar4 = 0;
  *param_2 = 0;
  local_7b0 = *(undefined8 *)(param_1 + 0x2e0);
  local_7a0 = 0;
  local_7a8 = 0;
  local_7b8 = *(undefined8 *)(param_1 + 0x248);
  iVar3 = (*(code *)**(undefined8 **)(lVar1 + 0x18))(local_768,param_1,0,0);
  if (iVar3 == 0) {
    local_f4 = *(undefined4 *)(param_1 + 0x220);
    local_f0 = *(undefined8 *)(param_1 + 0x228);
    local_e8 = *(undefined8 *)(param_1 + 0x230);
    local_e0 = *(undefined8 *)(param_1 + 0x238);
    local_48 = *(undefined8 *)(param_1 + 0x2f8);
    local_40 = *(undefined4 *)(param_1 + 0x2f0);
    *param_2 = 0;
    local_70a = 1;
    local_70c = 0;
    if (0 < *(int *)(param_1 + 0x240)) {
      do {
        local_788[0] = 0;
        iVar3 = FUN_144df5460(local_768,iVar4,local_780,local_788);
        if ((iVar3 == 0) &&
           (plVar2 = *(longlong **)(*(longlong *)(local_760 + 0xd0) + 0x50),
           plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 8))(plVar2[1],local_780);
        }
        if ((iVar4 == 0) || (*param_2 < local_728)) {
          *param_2 = local_728;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x240));
    }
    (**(code **)(*(longlong *)(lVar1 + 0x18) + 8))(local_768);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_7d8);
}



// FUNCTION 144df48b0 FUN_144df48b0 body=530 status=ok
// SIG undefined FUN_144df48b0(void)

int FUN_144df48b0(longlong *param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  longlong lVar4;
  short sVar5;
  undefined4 uVar6;
  int local_res8 [2];
  int local_res10 [2];
  
  (*(code *)**(undefined8 **)(param_4 + 8))(param_1,0,0,param_3);
  param_1[0x12] = (longlong)param_2;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x15] = 0;
  *(undefined2 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb6) = 0;
  local_res8[0] = FUN_144df6200(param_2,"%!PS-AdobeFont",0xe);
  if (((local_res8[0] == 0) ||
      (((char)local_res8[0] == '\x02' &&
       (local_res8[0] = FUN_144df6200(param_2,"%!FontType",10), local_res8[0] == 0)))) &&
     (local_res8[0] = FUN_144b597a0(param_2,0), local_res8[0] == 0)) {
    sVar2 = FUN_144b59d40(param_2,local_res10);
    sVar5 = 0;
    iVar1 = local_res10[0];
    uVar6 = 0;
    if ((local_res10[0] == 0) &&
       (sVar5 = sVar2, iVar1 = local_res10[0], (ushort)(sVar2 + 0x7fffU) < 2)) {
      uVar3 = FUN_144b59f90(param_2,local_res10);
      iVar1 = local_res10[0];
      uVar6 = 0;
      if (local_res10[0] == 0) {
        iVar1 = local_res10[0];
        uVar6 = uVar3;
      }
    }
    local_res8[0] = iVar1;
    if (local_res8[0] == 0) {
      if (sVar5 == -0x7fff) {
        *(undefined1 *)((longlong)param_1 + 0xb4) = 1;
      }
      else {
        local_res8[0] = FUN_144b597a0(param_2);
        if (local_res8[0] != 0) goto LAB_144df4a22;
        uVar6 = (undefined4)param_2[1];
      }
      if (param_2[4] == 0) {
        param_1[0x13] = (ulonglong)*(uint *)((longlong)param_2 + 0xc) + *param_2;
        *(undefined4 *)(param_1 + 0x14) = uVar6;
        *(undefined1 *)((longlong)param_1 + 0xb5) = 1;
        local_res8[0] = FUN_144b597f0(param_2);
        if (local_res8[0] == 0) {
LAB_144df4a94:
          lVar4 = param_1[0x13];
          param_1[1] = lVar4;
          param_1[2] = (ulonglong)*(uint *)(param_1 + 0x14) + lVar4;
          *param_1 = lVar4;
          return 0;
        }
      }
      else {
        lVar4 = FUN_144b560d0(param_3,uVar6,local_res8);
        param_1[0x13] = lVar4;
        if ((local_res8[0] == 0) &&
           (local_res8[0] = FUN_144b59880(param_2,lVar4,uVar6), local_res8[0] == 0)) {
          *(undefined4 *)(param_1 + 0x14) = uVar6;
          goto LAB_144df4a94;
        }
      }
    }
  }
LAB_144df4a22:
  if (*(char *)((longlong)param_1 + 0xb5) != '\0') {
    return local_res8[0];
  }
  FUN_144b56350(param_3,param_1[0x13]);
  param_1[0x13] = 0;
  return local_res8[0];
}



// FUNCTION 144df4ad0 FUN_144df4ad0 body=1233 status=ok
// SIG undefined FUN_144df4ad0(void)

/* WARNING: Type propagation algorithm not settling */

uint FUN_144df4ad0(longlong *param_1,longlong param_2)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  void *pvVar10;
  void *pvVar11;
  longlong lVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  byte *_Buf;
  short sVar16;
  int iVar17;
  uint local_res8 [2];
  uint local_res18 [4];
  
  lVar12 = param_1[0x12];
  lVar9 = param_1[4];
  local_res8[0] = 0;
  if (*(char *)((longlong)param_1 + 0xb4) == '\0') {
    pcVar13 = (char *)param_1[0x13];
    pcVar14 = pcVar13 + *(uint *)(param_1 + 0x14);
    pcVar15 = pcVar13;
    do {
      if ((((*pcVar15 == 'e') && (pcVar15 + 9 < pcVar14)) && (pcVar15[1] == 'e')) &&
         (((pcVar15[2] == 'x' && (pcVar15[3] == 'e')) && (pcVar15[4] == 'c')))) {
        pcVar15 = pcVar15 + 10;
        *param_1 = (longlong)pcVar13;
        param_1[2] = (longlong)pcVar15;
        while (pcVar13 < pcVar15) {
          if (((*pcVar13 == 'e') && (pcVar13 + 5 < pcVar15)) &&
             ((pcVar13[1] == 'e' &&
              (((pcVar13[2] == 'x' && (pcVar13[3] == 'e')) && (pcVar13[4] == 'c')))))) {
            param_1[2] = (ulonglong)*(uint *)(param_1 + 0x14) + param_1[0x13];
            (*(code *)param_1[8])(param_1);
            _Buf = (byte *)*param_1;
            pbVar2 = (byte *)param_1[2];
            pvVar10 = memchr(_Buf,10,(longlong)pbVar2 - (longlong)_Buf);
            if ((pvVar10 == (void *)0x0) ||
               (pvVar11 = memchr(_Buf,0xd,(longlong)pbVar2 - (longlong)_Buf), pvVar11 < pvVar10)) {
              bVar3 = true;
            }
            else {
              bVar3 = false;
            }
            while( true ) {
              if (pbVar2 <= _Buf) {
                return 3;
              }
              bVar1 = *_Buf;
              if ((((bVar1 != 0x20) && (bVar1 != 9)) && ((!bVar3 || (bVar1 != 0xd)))) &&
                 (bVar1 != 10)) break;
              _Buf = _Buf + 1;
            }
            if (pbVar2 <= _Buf) {
              return 3;
            }
            uVar7 = ((int)param_1[0x14] - (int)_Buf) + (int)param_1[0x13];
            if (*(char *)((longlong)param_1 + 0xb5) == '\0') {
              param_1[0x15] = param_1[0x13];
              param_1[0x13] = 0;
              *(undefined4 *)(param_1 + 0x14) = 0;
              *(undefined1 *)((longlong)param_1 + 0xb6) = 1;
            }
            else {
              lVar12 = FUN_144b560d0(lVar9,uVar7 + 1,local_res8);
              param_1[0x15] = lVar12;
              if (local_res8[0] != 0) {
                return local_res8[0];
              }
            }
            *(uint *)(param_1 + 0x16) = uVar7;
            if (((_Buf + 3 < pbVar2) &&
                (((bVar1 = *_Buf, bVar1 - 0x30 < 10 || (bVar1 - 0x61 < 6)) || (bVar1 - 0x41 < 6))))
               && ((((bVar1 = _Buf[1], bVar1 - 0x30 < 10 || (bVar1 - 0x61 < 6)) ||
                    (bVar1 - 0x41 < 6)) &&
                   ((((bVar1 = _Buf[2], bVar1 - 0x30 < 10 || (bVar1 - 0x61 < 6)) ||
                     (bVar1 - 0x41 < 6)) &&
                    (((bVar1 = _Buf[3], bVar1 - 0x30 < 10 || (bVar1 - 0x61 < 6)) ||
                     (bVar1 - 0x41 < 6)))))))) {
              *param_1 = (longlong)_Buf;
              (**(code **)(*(longlong *)(param_2 + 8) + 0x30))
                        (param_1,param_1[0x15],uVar7,local_res18,0);
              *(uint *)(param_1 + 0x16) = local_res18[0];
              *(undefined1 *)((ulonglong)local_res18[0] + param_1[0x15]) = 0;
            }
            else {
              memmove((void *)param_1[0x15],_Buf,(ulonglong)uVar7);
            }
            goto LAB_144df4f2e;
          }
          (*(code *)param_1[8])(param_1);
          if ((int)param_1[3] != 0) break;
          (*(code *)param_1[7])(param_1);
          pcVar13 = (char *)*param_1;
        }
        pcVar13 = (char *)param_1[0x13];
        pcVar14 = pcVar13 + *(uint *)(param_1 + 0x14);
      }
      else {
        pcVar15 = pcVar15 + 1;
      }
    } while (pcVar15 < pcVar14);
  }
  else {
    uVar5 = FUN_144b59870(lVar12);
    *(undefined4 *)(param_1 + 0x16) = 0;
    while( true ) {
      iVar17 = 0;
      sVar4 = FUN_144b59d40(lVar12,local_res18);
      sVar16 = 0;
      if (((local_res18[0] == 0) && (sVar16 = sVar4, (ushort)(sVar4 + 0x7fffU) < 2)) &&
         (iVar6 = FUN_144b59f90(lVar12,local_res18), local_res18[0] == 0)) {
        iVar17 = iVar6;
      }
      if (local_res18[0] != 0) {
        return local_res18[0];
      }
      if (sVar16 != -0x7ffe) break;
      *(int *)(param_1 + 0x16) = (int)param_1[0x16] + iVar17;
      uVar7 = FUN_144b597f0(lVar12,iVar17);
      if (uVar7 != 0) {
        return uVar7;
      }
      local_res8[0] = 0;
    }
    if ((int)param_1[0x16] != 0) {
      local_res8[0] = FUN_144b597a0(lVar12,uVar5);
      if (local_res8[0] != 0) {
        return local_res8[0];
      }
      lVar9 = FUN_144b560d0(lVar9,(int)param_1[0x16],local_res8);
      param_1[0x15] = lVar9;
      if (local_res8[0] != 0) {
        return local_res8[0];
      }
      iVar17 = 0;
      *(undefined4 *)(param_1 + 0x16) = 0;
      while( true ) {
        sVar4 = FUN_144b59d40(lVar12,local_res18);
        iVar6 = iVar17;
        sVar16 = 0;
        if (((local_res18[0] == 0) && (sVar16 = sVar4, (ushort)(sVar4 + 0x7fffU) < 2)) &&
           (iVar8 = FUN_144b59f90(lVar12,local_res18), local_res18[0] == 0)) {
          iVar6 = iVar8;
        }
        if ((local_res18[0] != 0) || (sVar16 != -0x7ffe)) break;
        uVar7 = FUN_144b59880(lVar12,(ulonglong)*(uint *)(param_1 + 0x16) + param_1[0x15],iVar6);
        if (uVar7 != 0) {
          return uVar7;
        }
        *(int *)(param_1 + 0x16) = (int)param_1[0x16] + iVar6;
        local_res8[0] = 0;
      }
      local_res8[0] = 0;
LAB_144df4f2e:
      (**(code **)(param_2 + 0x20))(param_1[0x15],(int)param_1[0x16],0xd971);
      if (3 < *(uint *)(param_1 + 0x16)) {
        *(undefined1 *)param_1[0x15] = 0x20;
        *(undefined1 *)(param_1[0x15] + 1) = 0x20;
        *(undefined1 *)(param_1[0x15] + 2) = 0x20;
        *(undefined1 *)(param_1[0x15] + 3) = 0x20;
        lVar12 = param_1[0x15];
        param_1[1] = lVar12;
        param_1[2] = (ulonglong)*(uint *)(param_1 + 0x16) + lVar12;
        *param_1 = lVar12;
        return local_res8[0];
      }
    }
  }
  return 3;
}



// FUNCTION 144df4fb0 FUN_144df4fb0 body=1193 status=ok
// SIG undefined FUN_144df4fb0(void)

int FUN_144df4fb0(longlong param_1)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  longlong lVar4;
  char *pcVar5;
  undefined8 uVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 uVar9;
  ulonglong uVar11;
  longlong lVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int local_res8 [2];
  uint local_res10;
  undefined1 local_2f8 [152];
  undefined8 local_260;
  undefined4 local_258;
  undefined8 local_250;
  undefined4 local_248;
  undefined4 local_240;
  int local_21c;
  longlong local_210;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1a8;
  undefined8 local_170;
  int local_158;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_b0;
  undefined8 local_a8;
  int local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_48;
  ulonglong uVar10;
  
  uVar6 = *(undefined8 *)(param_1 + 0x2a0);
  memset(local_2f8,0,0x2c0);
  *(undefined8 *)(param_1 + 0x2e8) = 0xffffffffffffffff;
  uVar11 = 0;
  uVar13 = 0;
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  *(undefined4 *)(param_1 + 0x184) = 7;
  *(undefined4 *)(param_1 + 0x188) = 1;
  *(undefined4 *)(param_1 + 0x118) = 4;
  *(undefined4 *)(param_1 + 0x1c8) = 0xf5c;
  *(undefined4 *)(param_1 + 0x180) = 0x27a000;
  local_res8[0] =
       FUN_144df48b0(local_2f8,*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0x98),uVar6
                    );
  if ((((local_res8[0] == 0) &&
       (local_res8[0] = FUN_144df5d40(param_1,local_2f8,local_260,local_258), local_res8[0] == 0))
      && (local_res8[0] = FUN_144df4ad0(local_2f8,uVar6), local_res8[0] == 0)) &&
     (local_res8[0] = FUN_144df5d40(param_1,local_2f8,local_250,local_248), local_res8[0] == 0)) {
    *(byte *)(param_1 + 0x11c) = *(byte *)(param_1 + 0x11c) & 0xfe;
    piVar3 = *(int **)(param_1 + 0x2e0);
    if ((piVar3 != (int *)0x0) && (*piVar3 != 1 << ((byte)piVar3[1] & 0x1f))) {
      FUN_144df2ca0(param_1);
    }
    lVar4 = *(longlong *)(param_1 + 0x2e0);
    if (((lVar4 != 0) && (*(int *)(lVar4 + 0x2f8) != 0)) &&
       (*(int *)(lVar4 + 0x2f8) != *(int *)(lVar4 + 4))) {
      *(undefined4 *)(lVar4 + 0x2f8) = 0;
    }
    piVar3 = *(int **)(param_1 + 0x2e0);
    if ((piVar3 != (int *)0x0) && ((*piVar3 == 0 || (piVar3[1] == 0)))) {
      FUN_144df2ca0(param_1);
    }
    lVar4 = *(longlong *)(param_1 + 0x2e0);
    if ((lVar4 != 0) && (uVar10 = uVar11, *(uint *)(lVar4 + 4) != 0)) {
      do {
        if (*(char *)(lVar4 + (uVar10 + 7) * 0x18) == '\0') {
          FUN_144df2ca0(param_1);
          break;
        }
        uVar8 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar8;
      } while (uVar8 < *(uint *)(lVar4 + 4));
    }
    if (*(longlong *)(param_1 + 0x2e0) == 0) {
      *(undefined4 *)(param_1 + 0x2f0) = 0;
    }
    else if (*(int *)(param_1 + 0x2f0) != 0) {
      uVar6 = FUN_144b561b0(*(undefined8 *)(param_1 + 0x98),4,0,*(int *)(param_1 + 0x2f0),0,
                            local_res8);
      *(undefined8 *)(param_1 + 0x2f8) = uVar6;
      if (local_res8[0] != 0) {
        *(undefined4 *)(param_1 + 0x2f0) = 0;
        goto LAB_144df543d;
      }
    }
    *(undefined4 *)(param_1 + 0x240) = local_1d8;
    if (local_90 != 0) {
      *(undefined4 *)(param_1 + 0x220) = local_b0;
      *(undefined8 *)(param_1 + 0x208) = local_a8;
      *(undefined8 *)(param_1 + 0x228) = local_80;
      *(undefined8 *)(param_1 + 0x230) = local_78;
      *(undefined8 *)(param_1 + 0x238) = local_48;
      local_90 = 0;
      local_48 = 0;
    }
    if ((*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x50) == 0) && (local_158 == 0)) {
      local_res8[0] = 3;
    }
    *(undefined8 *)(param_1 + 0x210) = local_170;
    *(undefined8 *)(param_1 + 0x250) = local_148;
    *(undefined8 *)(param_1 + 600) = local_140;
    *(undefined8 *)(param_1 + 0x218) = local_1d0;
    *(undefined8 *)(param_1 + 0x248) = local_1a8;
    local_158 = 0;
    local_1d0 = 0;
    local_1a8 = 0;
    if (*(int *)(param_1 + 0x1e0) == 1) {
      uVar9 = 0;
      local_res10 = 0;
      uVar10 = uVar11;
      uVar16 = uVar11;
      uVar17 = uVar11;
      uVar18 = uVar11;
      if (0 < local_21c) {
LAB_144df52e0:
        iVar15 = 0;
        *(undefined2 *)(*(longlong *)(param_1 + 0x1f8) + uVar17) = 0;
        *(char **)(uVar16 + *(longlong *)(param_1 + 0x200)) = ".notdef";
        pcVar5 = *(char **)(uVar16 + local_210);
        iVar14 = (int)uVar10;
        if ((pcVar5 != (char *)0x0) && (0 < *(int *)(param_1 + 0x240))) {
          do {
            lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x248) + (longlong)iVar15 * 8);
            pcVar7 = pcVar5;
            do {
              cVar1 = *pcVar7;
              cVar2 = pcVar7[lVar4 - (longlong)pcVar5];
              if (cVar1 != cVar2) break;
              pcVar7 = pcVar7 + 1;
            } while (cVar2 != '\0');
            if (cVar1 == cVar2) {
              lVar12 = 0;
              *(short *)(*(longlong *)(param_1 + 0x1f8) + uVar17) = (short)iVar15;
              *(longlong *)(uVar16 + *(longlong *)(param_1 + 0x200)) = lVar4;
              goto LAB_144df5392;
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < *(int *)(param_1 + 0x240));
          uVar11 = (ulonglong)local_res10;
        }
        goto LAB_144df53c8;
      }
LAB_144df53f3:
      *(undefined4 *)(param_1 + 0x1ec) = uVar13;
      *(undefined4 *)(param_1 + 0x1e8) = local_240;
      *(undefined4 *)(param_1 + 0x1f0) = uVar9;
    }
    if (1000 < *(uint *)(param_1 + 0x184)) {
      *(undefined4 *)(param_1 + 0x184) = 7;
    }
    if (1000 < *(uint *)(param_1 + 0x188)) {
      *(undefined4 *)(param_1 + 0x188) = 1;
    }
  }
LAB_144df543d:
  FUN_144df6100(local_2f8);
  return local_res8[0];
  while (lVar12 != 8) {
LAB_144df5392:
    pcVar5 = ".notdef" + lVar12;
    lVar12 = lVar12 + 1;
    if (*pcVar5 != *(char *)(lVar4 + -1 + lVar12)) {
      uVar11 = (ulonglong)local_res10;
      if (iVar14 < (int)uVar18) {
        uVar18 = uVar10;
      }
      if ((int)local_res10 <= iVar14) {
        local_res10 = iVar14 + 1;
        uVar11 = (ulonglong)local_res10;
      }
      goto LAB_144df53c8;
    }
  }
  uVar11 = (ulonglong)local_res10;
LAB_144df53c8:
  uVar9 = (undefined4)uVar11;
  uVar13 = (undefined4)uVar18;
  uVar10 = (ulonglong)(iVar14 + 1U);
  uVar16 = uVar16 + 8;
  uVar17 = uVar17 + 2;
  if (local_21c <= (int)(iVar14 + 1U)) goto LAB_144df53f3;
  goto LAB_144df52e0;
}



// FUNCTION 144df5460 FUN_144df5460 body=469 status=ok
// SIG undefined FUN_144df5460(void)

void FUN_144df5460(longlong param_1,uint param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_738 [32];
  undefined1 local_718 [808];
  undefined1 *local_3f0;
  int local_338 [3];
  int local_32c;
  undefined1 local_328 [720];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_738;
  lVar1 = *(longlong *)(param_1 + 8);
  uVar9 = (ulonglong)param_2;
  lVar2 = *(longlong *)(lVar1 + 0x2a0);
  uVar5 = *(undefined4 *)(lVar1 + 0x268);
  uVar6 = *(undefined4 *)(lVar1 + 0x26c);
  uVar7 = *(undefined4 *)(lVar1 + 0x270);
  plVar3 = *(longlong **)(*(longlong *)(lVar1 + 0xd0) + 0x50);
  lVar4 = *(longlong *)(lVar2 + 0x18);
  *(undefined4 *)(param_1 + 0x690) = *(undefined4 *)(lVar1 + 0x264);
  *(undefined4 *)(param_1 + 0x694) = uVar5;
  *(undefined4 *)(param_1 + 0x698) = uVar6;
  *(undefined4 *)(param_1 + 0x69c) = uVar7;
  *(undefined8 *)(param_1 + 0x6a0) = *(undefined8 *)(lVar1 + 0x274);
  if (plVar3 == (longlong *)0x0) {
    *param_3 = *(undefined8 *)(*(longlong *)(lVar1 + 0x250) + uVar9 * 8);
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(*(longlong *)(lVar1 + 600) + uVar9 * 4);
  }
  else {
    iVar8 = (**(code **)*plVar3)(plVar3[1],uVar9);
    if (iVar8 != 0) goto LAB_144df5625;
  }
  if (*(char *)(param_1 + 0x5e) == '\0') {
    (**(code **)(lVar2 + 0x30))(local_718,param_1,1);
    (**(code **)(lVar2 + 0x38))(lVar1,lVar1 + 0x114,local_328);
    local_3f0 = local_328;
    iVar8 = (**(code **)(lVar4 + 0x18))(local_718,*param_3,*(undefined4 *)(param_3 + 1));
    if ((char)iVar8 == -0x5c) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0xf8) = 0;
      *param_4 = 1;
      iVar8 = (**(code **)(lVar4 + 0x18))(local_718,*param_3,*(undefined4 *)(param_3 + 1));
    }
  }
  else {
    iVar8 = (**(code **)(lVar4 + 0x10))(param_1,*param_3,*(undefined4 *)(param_3 + 1));
  }
  if (((iVar8 == 0) && (plVar3 != (longlong *)0x0)) && (*(longlong *)(*plVar3 + 0x10) != 0)) {
    local_338[0] = FUN_144b55630(*(undefined4 *)(param_1 + 0x38));
    local_338[0] = local_338[0] >> 0x10;
    local_338[1] = 0;
    local_338[2] = FUN_144b55630(*(undefined4 *)(param_1 + 0x40));
    local_338[2] = local_338[2] >> 0x10;
    local_32c = FUN_144b55630(*(undefined4 *)(param_1 + 0x44));
    local_32c = local_32c >> 0x10;
    (**(code **)(*plVar3 + 0x10))(plVar3[1],uVar9,0,local_338);
    *(int *)(param_1 + 0x38) = local_338[0] << 0x10;
    *(int *)(param_1 + 0x40) = local_338[2] << 0x10;
    *(int *)(param_1 + 0x44) = local_32c << 0x10;
  }
LAB_144df5625:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_738);
}



// FUNCTION 144df5650 FUN_144df5650 body=88 status=ok
// SIG undefined FUN_144df5650(void)

ulonglong FUN_144df5650(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined1 local_res18 [16];
  undefined1 local_18 [16];
  
  local_res18[0] = 0;
  uVar2 = FUN_144df5460(param_1,param_2,local_18,local_res18);
  if (((int)uVar2 == 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xd0) + 0x50),
     plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 8))(plVar1[1],local_18);
    uVar2 = uVar2 & 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 144df56b0 FUN_144df56b0 body=663 status=ok
// SIG undefined FUN_144df56b0(void)

int FUN_144df56b0(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint *puVar8;
  ulonglong uVar9;
  int local_res8 [2];
  
  puVar2 = *(uint **)(param_1 + 0x2e0);
  uVar5 = *(undefined8 *)(param_1 + 0x98);
  local_res8[0] = 0;
  if (puVar2 == (uint *)0x0) {
    puVar2 = (uint *)FUN_144b560d0(uVar5,0x300,local_res8);
    if (local_res8[0] != 0) {
      return local_res8[0];
    }
    puVar2[0xbe] = 0;
    *(uint **)(param_1 + 0x2e0) = puVar2;
  }
  if (param_2 == 0) {
LAB_144df5897:
    if (param_3 != 0) {
      if ((puVar2[1] != 0) && (puVar2[1] != param_3)) goto LAB_144df58a6;
      puVar2[1] = param_3;
    }
    uVar1 = *puVar2;
    uVar7 = puVar2[1];
    if (((uVar1 != 0) && (uVar7 != 0)) && (*(longlong *)(puVar2 + 10) == 0)) {
      uVar5 = FUN_144b561b0(uVar5,4,0,uVar1 * uVar7,0,local_res8);
      *(undefined8 *)(puVar2 + 10) = uVar5;
      if ((local_res8[0] == 0) && (1 < uVar1)) {
        uVar9 = (ulonglong)(uVar1 - 1);
        puVar8 = puVar2 + 0xc;
        uVar1 = uVar7;
        do {
          uVar6 = (ulonglong)uVar1;
          uVar1 = uVar1 + uVar7;
          *(ulonglong *)puVar8 = *(longlong *)(puVar2 + 10) + uVar6 * 4;
          uVar9 = uVar9 - 1;
          puVar8 = puVar8 + 2;
        } while (uVar9 != 0);
      }
    }
  }
  else {
    if (*puVar2 == 0) {
      uVar3 = FUN_144b561b0(uVar5,0x38,0,param_2,0,local_res8);
      *(undefined8 *)(puVar2 + 0x48) = uVar3;
      if (local_res8[0] != 0) {
        return local_res8[0];
      }
      uVar3 = FUN_144b561b0(uVar5,0xc4,0,param_2,0,local_res8);
      *(undefined8 *)(puVar2 + 0x6a) = uVar3;
      if (local_res8[0] != 0) {
        return local_res8[0];
      }
      uVar3 = FUN_144b561b0(uVar5,0x10,0,param_2,0,local_res8);
      *(undefined8 *)(puVar2 + 0x8e) = uVar3;
      if (local_res8[0] != 0) {
        return local_res8[0];
      }
      lVar4 = FUN_144b561b0(uVar5,4,0,param_2 * 2,0,local_res8);
      *(longlong *)(puVar2 + 0x42) = lVar4;
      if (local_res8[0] != 0) {
        return local_res8[0];
      }
      *(ulonglong *)(puVar2 + 0x44) = lVar4 + (ulonglong)param_2 * 4;
      *(longlong *)(puVar2 + 0x46) = param_1 + 0xd8;
      *(longlong *)(puVar2 + 0x68) = param_1 + 0x114;
      *(longlong *)(puVar2 + 0x8c) = param_1 + 0x27c;
      uVar9 = 2;
      if (1 < param_2) {
        do {
          uVar1 = (int)uVar9 - 1;
          uVar7 = (int)uVar9 + 1;
          *(longlong *)(puVar2 + uVar9 * 2 + 0x46) =
               *(longlong *)(puVar2 + (ulonglong)uVar1 * 2 + 0x46) + 0x38;
          *(longlong *)(puVar2 + uVar9 * 2 + 0x68) =
               *(longlong *)(puVar2 + (ulonglong)uVar1 * 2 + 0x68) + 0xc4;
          *(longlong *)(puVar2 + uVar9 * 2 + 0x8c) =
               *(longlong *)(puVar2 + (ulonglong)uVar1 * 2 + 0x8c) + 0x10;
          uVar9 = (ulonglong)uVar7;
        } while (uVar7 <= param_2);
      }
      *puVar2 = param_2;
      goto LAB_144df5897;
    }
    if (*puVar2 == param_2) goto LAB_144df5897;
LAB_144df58a6:
    local_res8[0] = 3;
  }
  return local_res8[0];
}



// FUNCTION 144df5950 FUN_144df5950 body=201 status=ok
// SIG undefined FUN_144df5950(void)

int FUN_144df5950(byte *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  
  piVar3 = *(int **)(param_1 + 0x10);
  if (param_2 <= *piVar3) {
    return **(int **)(param_1 + 8) << 0x10;
  }
  bVar1 = *param_1;
  iVar8 = 1;
  if (1 < bVar1) {
    lVar6 = 1;
    piVar5 = piVar3;
    do {
      piVar5 = piVar5 + 1;
      if (param_2 <= *piVar5) {
        lVar6 = *(longlong *)(param_1 + 8);
        lVar7 = (longlong)(iVar8 + -1);
        iVar2 = *(int *)(lVar6 + lVar7 * 4);
        iVar4 = FUN_144b555e0(param_2 - piVar3[lVar7],piVar3[iVar8] - piVar3[lVar7]);
        return iVar4 * (*(int *)((longlong)iVar8 * 4 + lVar6) - iVar2) + iVar2 * 0x10000;
      }
      iVar8 = iVar8 + 1;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (longlong)(ulonglong)bVar1);
  }
  return *(int *)(*(longlong *)(param_1 + 8) + (longlong)(int)(bVar1 - 1) * 4) << 0x10;
}



// FUNCTION 144df5a20 FUN_144df5a20 body=186 status=ok
// SIG undefined FUN_144df5a20(void)

void FUN_144df5a20(longlong param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (param_3 == 1) {
    *param_2 = iVar1;
    return;
  }
  if (param_3 == 2) {
    *param_2 = iVar1 + *(int *)(param_1 + 0xc);
    param_2[1] = *(int *)(param_1 + 8) + *(int *)(param_1 + 0xc);
    return;
  }
  if (param_3 == 3) {
    *param_2 = iVar1 + *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x1c)
    ;
    param_2[1] = *(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x1c) +
                 *(int *)(param_1 + 0x18);
    param_2[2] = *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x1c) +
                 *(int *)(param_1 + 0x18);
    return;
  }
  *param_2 = iVar1 + *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0xc) +
             *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x2c) +
             *(int *)(param_1 + 0x24);
  param_2[1] = *(int *)(param_1 + 8) + *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x38) +
               *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x1c) +
               *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x18);
  param_2[2] = *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x34) +
               *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x3c) +
               *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x18);
  param_2[3] = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x38) +
               *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x3c) +
               *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x24);
  return;
}



// FUNCTION 144df5ae0 FUN_144df5ae0 body=218 status=ok
// SIG undefined FUN_144df5ae0(void)

int FUN_144df5ae0(longlong param_1,uint param_2,longlong param_3)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  puVar1 = *(uint **)(param_1 + 0x2e0);
  bVar2 = 0;
  if (puVar1 == (uint *)0x0) {
    return 6;
  }
  if (puVar1[1] < param_2) {
    param_2 = puVar1[1];
  }
  uVar7 = 0;
  bVar3 = 0;
  if (*puVar1 != 0) {
    do {
      bVar2 = bVar3;
      uVar5 = 0;
      iVar8 = 0x10000;
      if (puVar1[1] != 0) {
        do {
          uVar6 = (uint)uVar5;
          if (uVar6 < param_2) {
            iVar4 = *(int *)(param_3 + uVar5 * 4);
            if (((uint)uVar7 >> (uVar6 & 0x1f) & 1) == 0) {
              iVar4 = 0x10000 - iVar4;
            }
            if (iVar4 < 1) {
              iVar8 = 0;
              break;
            }
            if (iVar4 < 0x10000) {
              iVar8 = FUN_144b42fe0(iVar8);
            }
          }
          else {
            iVar8 = iVar8 >> 1;
          }
          uVar5 = (ulonglong)(uVar6 + 1);
        } while (uVar6 + 1 < puVar1[1]);
      }
      if (*(int *)(*(longlong *)(puVar1 + 0x42) + uVar7 * 4) != iVar8) {
        *(int *)(*(longlong *)(puVar1 + 0x42) + uVar7 * 4) = iVar8;
        bVar2 = 1;
      }
      uVar6 = (uint)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      bVar3 = bVar2;
    } while (uVar6 < *puVar1);
  }
  return bVar2 - 1;
}



// FUNCTION 144df5bc0 FUN_144df5bc0 body=350 status=ok
// SIG undefined FUN_144df5bc0(void)

int FUN_144df5bc0(int *param_1,int *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int **ppiVar3;
  int *piVar4;
  int iVar5;
  int *local_res8;
  
  iVar1 = 0;
  local_res8 = *(int **)(param_1 + 0xb8);
  iVar5 = 0;
  piVar4 = local_res8;
  if ((local_res8 != (int *)0x0) && (*local_res8 == 0)) {
    piVar4 = (int *)0x0;
  }
  if (*(int *)(param_3 + 0xc) == 0xb) {
    (**(code **)(param_3 + 0x10))(param_1,param_2);
    return param_2[6];
  }
  iVar2 = 0;
  switch(*(undefined4 *)(param_3 + 8)) {
  case 2:
    local_res8 = param_1 + 0x44;
    goto LAB_144df5cd2;
  case 3:
    local_res8 = param_1 + 0x36;
    ppiVar3 = &local_res8;
    if (piVar4 != (int *)0x0) {
      iVar5 = *piVar4;
      ppiVar3 = (int **)(piVar4 + 0x46);
    }
    goto LAB_144df5cdf;
  case 4:
    local_res8 = param_1 + 0x45;
    ppiVar3 = &local_res8;
    iVar5 = iVar2;
    if (piVar4 != (int *)0x0) {
      iVar5 = *piVar4;
      ppiVar3 = (int **)(piVar4 + 0x68);
    }
    goto LAB_144df5cdf;
  case 5:
    local_res8 = param_1 + 0x9f;
    ppiVar3 = &local_res8;
    iVar5 = iVar2;
    if (piVar4 != (int *)0x0) {
      ppiVar3 = (int **)(piVar4 + 0x8c);
      iVar5 = *piVar4;
    }
    goto LAB_144df5cdf;
  case 6:
    local_res8 = param_2;
    break;
  case 7:
    local_res8 = param_1;
    break;
  case 8:
    break;
  default:
    local_res8 = param_1 + 0x36;
LAB_144df5cd2:
  }
  ppiVar3 = &local_res8;
  iVar5 = iVar2;
LAB_144df5cdf:
  if (*ppiVar3 != (int *)0x0) {
    if (*(int *)(param_3 + 0xc) - 9U < 2) {
      iVar1 = (**(code **)(param_2 + 0x22))(param_2,param_3,ppiVar3,iVar5,0);
    }
    else {
      iVar1 = (**(code **)(param_2 + 0x20))();
    }
  }
  return iVar1;
}



// FUNCTION 144df5d40 FUN_144df5d40 body=954 status=ok
// SIG undefined FUN_144df5d40(void)

/* WARNING: Removing unreachable block (ram,0x000144df6098) */

ulonglong FUN_144df5d40(longlong param_1,longlong *param_2,longlong param_3,uint param_4)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  byte *pbVar7;
  char *_Str1;
  byte *pbVar8;
  byte *pbVar9;
  undefined **ppuVar10;
  
  pbVar8 = (byte *)((ulonglong)param_4 + param_3);
  *param_2 = param_3;
  pbVar9 = (byte *)0x0;
  param_2[2] = (longlong)pbVar8;
  *(undefined4 *)(param_2 + 3) = 0;
  bVar3 = false;
  (*(code *)param_2[7])(param_2);
  pbVar7 = (byte *)*param_2;
  while (((pbVar7 < pbVar8 &&
          ((pbVar7 = (byte *)*param_2, *pbVar7 != 0x65 ||
           (((pbVar7 + 6 != pbVar8 &&
             ((pbVar8 <= pbVar7 + 6 ||
              (((bVar1 = pbVar7[5], 0x3c < bVar1 ||
                ((0x1000832100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) &&
               ((0x3f < (byte)(bVar1 - 0x3e) ||
                ((0xa0000000a0000001U >> ((ulonglong)(byte)(bVar1 - 0x3e) & 0x3f) & 1) == 0))))))))
            || (iVar4 = strncmp((char *)pbVar7,"eexec",5), iVar4 != 0)))))) &&
         ((*pbVar7 != 99 ||
          (((pbVar7 + 10 != pbVar8 &&
            ((pbVar8 <= pbVar7 + 10 ||
             (((bVar1 = pbVar7[9], 0x3c < bVar1 ||
               ((0x1000832100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) &&
              ((0x3f < (byte)(bVar1 - 0x3e) ||
               ((0xa0000000a0000001U >> ((ulonglong)(byte)(bVar1 - 0x3e) & 0x3f) & 1) == 0))))))))
           || (iVar4 = strncmp((char *)pbVar7,"closefile",9), iVar4 != 0))))))) {
    if (((*pbVar7 == 0x46) &&
        ((pbVar7 + 0xe == pbVar8 ||
         ((pbVar7 + 0xe < pbVar8 &&
          (((bVar1 = pbVar7[0xd], bVar1 < 0x3d &&
            ((0x1000832100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) != 0)) ||
           (((byte)(bVar1 - 0x3e) < 0x40 &&
            ((0xa0000000a0000001U >> ((ulonglong)(byte)(bVar1 - 0x3e) & 0x3f) & 1) != 0)))))))))) &&
       (iVar4 = strncmp((char *)pbVar7,"FontDirectory",0xd), iVar4 == 0)) {
      if ((*(uint *)((longlong)param_2 + 700) & 1) != 0) {
        *(uint *)((longlong)param_2 + 700) = *(uint *)((longlong)param_2 + 700) | 2;
      }
      *param_2 = *param_2 + 0xd;
    }
    else {
      bVar1 = *pbVar7;
      if (bVar1 - 0x30 < 10) {
        (*(code *)param_2[8])(param_2);
        if ((int)param_2[3] != 0) break;
        bVar3 = true;
        pbVar9 = pbVar7;
      }
      else {
        if (((((bVar1 == 0x52) && (pbVar7 + 6 < pbVar8)) && (pbVar7[1] == 0x44)) && (bVar3)) ||
           (((bVar1 == 0x2d && (pbVar7 + 6 < pbVar8)) && ((pbVar7[1] == 0x7c && (bVar3)))))) {
          pbVar7 = (byte *)param_2[2];
          *param_2 = (longlong)pbVar9;
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x50);
          (*(code *)param_2[7])(param_2);
          if ((pbVar7 <= (byte *)*param_2) || (9 < *(byte *)*param_2 - 0x30)) {
LAB_144df60e7:
            if (lVar2 == 0) {
              *(undefined4 *)(param_2 + 3) = 3;
            }
            return 3;
          }
          iVar4 = (*(code *)param_2[9])(param_2);
          (*(code *)param_2[8])(param_2);
          if ((iVar4 < 0) || ((longlong)(pbVar7 + (-1 - *param_2)) <= (longlong)iVar4))
          goto LAB_144df60e7;
          *param_2 = (longlong)(iVar4 + 1) + *param_2;
          if ((int)param_2[3] != 0) {
            return 3;
          }
        }
        else if ((bVar1 == 0x2f) && (pbVar7 + 2 < pbVar8)) {
          pbVar7 = pbVar7 + 1;
          *param_2 = (longlong)pbVar7;
          (*(code *)param_2[8])(param_2);
          if ((int)param_2[3] != 0) break;
          uVar6 = (int)*param_2 - (int)pbVar7;
          if ((uVar6 - 1 < 0x15) && ((byte *)*param_2 < pbVar8)) {
            _Str1 = "version";
            ppuVar10 = &PTR_s_version_149a099c0;
            bVar1 = *pbVar7;
            do {
              if (bVar1 == *_Str1) {
                uVar5 = 0xffffffffffffffff;
                do {
                  uVar5 = uVar5 + 1;
                } while (_Str1[uVar5] != 0);
                if ((uVar6 == uVar5) && (iVar4 = memcmp(pbVar7,_Str1,(ulonglong)uVar6), iVar4 == 0))
                {
                  if (((*(uint *)(ppuVar10 + 5) & (*(uint *)((longlong)param_2 + 700) & 1) + 1) != 0
                      ) && (((*(uint *)((longlong)param_2 + 700) & 2) == 0 ||
                            (iVar4 = strcmp(_Str1,"CharStrings"), iVar4 == 0)))) {
                    uVar5 = FUN_144df5bc0(param_1,param_2,ppuVar10);
                    *(int *)(param_2 + 3) = (int)uVar5;
                    if ((int)uVar5 != 0) {
                      if ((char)uVar5 != -0x5e) {
                        return uVar5;
                      }
                      *(undefined4 *)(param_2 + 3) = 0;
                    }
                  }
                  break;
                }
              }
              _Str1 = ppuVar10[6];
              ppuVar10 = ppuVar10 + 6;
            } while ((byte *)_Str1 != (byte *)0x0);
          }
        }
        else {
          (*(code *)param_2[8])(param_2);
          if ((int)param_2[3] != 0) break;
        }
        bVar3 = false;
      }
    }
    (*(code *)param_2[7])(param_2);
    pbVar7 = (byte *)*param_2;
  }
  return (ulonglong)*(uint *)(param_2 + 3);
}



// FUNCTION 144df6100 FUN_144df6100 body=248 status=ok
// SIG undefined FUN_144df6100(void)

void FUN_144df6100(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  if (*(code **)(param_1 + 0x118) != (code *)0x0) {
    (**(code **)(param_1 + 0x118))(param_1 + 0xc0);
  }
  if (*(code **)(param_1 + 0x1e0) != (code *)0x0) {
    (**(code **)(param_1 + 0x1e0))(param_1 + 0x188);
  }
  if (*(code **)(param_1 + 0x180) != (code *)0x0) {
    (**(code **)(param_1 + 0x180))(param_1 + 0x128);
  }
  if (*(code **)(param_1 + 0x240) != (code *)0x0) {
    (**(code **)(param_1 + 0x240))(param_1 + 0x1e8);
  }
  if (*(code **)(param_1 + 0x2a8) != (code *)0x0) {
    (**(code **)(param_1 + 0x2a8))(param_1 + 0x250);
  }
  FUN_144b591d0(*(undefined8 *)(param_1 + 0x2b0),uVar1);
  FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x2b0));
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0xa8));
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (*(char *)(param_1 + 0xb5) == '\0') {
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x98));
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000144df61f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x30))(param_1);
  return;
}



// FUNCTION 144df6200 FUN_144df6200 body=214 status=ok
// SIG undefined FUN_144df6200(void)

ulonglong FUN_144df6200(longlong param_1,void *param_2,ulonglong param_3)

{
  short sVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  short sVar5;
  uint local_res20 [2];
  
  uVar3 = FUN_144b597a0(param_1,0);
  if ((int)uVar3 == 0) {
    sVar1 = FUN_144b59d40(param_1,local_res20);
    uVar3 = (ulonglong)local_res20[0];
    sVar5 = 0;
    if ((local_res20[0] == 0) && (sVar5 = sVar1, (ushort)(sVar1 + 0x7fffU) < 2)) {
      FUN_144b59f90(param_1,local_res20);
      uVar3 = (ulonglong)local_res20[0];
    }
    if (((int)uVar3 == 0) &&
       (((sVar5 == -0x7fff || (uVar3 = FUN_144b597a0(param_1,0), (int)uVar3 == 0)) &&
        (uVar3 = FUN_144b59990(param_1,param_3 & 0xffffffff), (int)uVar3 == 0)))) {
      iVar2 = memcmp(*(void **)(param_1 + 0x38),param_2,param_3);
      uVar4 = 0;
      if (iVar2 != 0) {
        uVar4 = 2;
      }
      FUN_144b59ab0(param_1);
      uVar3 = (ulonglong)uVar4;
    }
  }
  return uVar3;
}



// FUNCTION 144df62e0 FUN_144df62e0 body=465 status=ok
// SIG undefined FUN_144df62e0(void)

longlong * FUN_144df62e0(longlong param_1,int param_2,uint param_3,uint param_4,uint *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  ushort local_res8 [4];
  undefined1 local_38 [16];
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  plVar5 = (longlong *)0x0;
  uVar4 = *(uint *)(param_1 + 8);
  if ((uVar4 & 8) == 0) {
LAB_144df63fd:
    plVar2 = plVar5;
    plVar6 = plVar5;
    if (param_3 != 0) {
      do {
        plVar2 = *(longlong **)(param_1 + 0x80);
        if (lVar1 == 0) {
          return (longlong *)0x25;
        }
        uVar4 = param_4 | 0x103;
        if (plVar2 != (longlong *)0x0) {
          uVar4 = param_4;
        }
        plVar3 = plVar5;
        if ((((uVar4 & 1) == 0) && (plVar3 = plVar2, plVar2 != (longlong *)0x0)) &&
           (*plVar2 != *(longlong *)(lVar1 + 8))) {
          return (longlong *)&DAT_00000023;
        }
        plVar2 = (longlong *)FUN_144dfa5e0(lVar1,plVar3,(int)plVar6 + param_2);
        if ((int)plVar2 != 0) {
          return plVar2;
        }
        if ((param_4 & 0x10) == 0) {
          uVar4 = *(uint *)(lVar1 + 0x50);
        }
        else {
          uVar4 = *(uint *)(lVar1 + 0x54);
        }
        *param_5 = uVar4;
        uVar4 = (int)plVar6 + 1;
        param_5 = param_5 + 1;
        plVar6 = (longlong *)(ulonglong)uVar4;
      } while (uVar4 < param_3);
    }
  }
  else {
    if ((param_4 & 0x10) == 0) {
      if ((((*(uint *)(param_1 + 4) & 0x7fff0000) == 0) && ((uVar4 >> 0xf & 1) == 0)) ||
         ((*(byte *)(param_1 + 0x418) & 2) != 0)) {
        if (*(short *)(param_1 + 0x15a) != 0) {
          if (param_3 == 0) {
            return (longlong *)0x0;
          }
          do {
            (**(code **)(*(longlong *)(param_1 + 0x2d0) + 0x118))
                      (param_1,0,(int)plVar5 + param_2,local_38,local_res8);
            uVar4 = (int)plVar5 + 1;
            plVar5 = (longlong *)(ulonglong)uVar4;
            *param_5 = (uint)local_res8[0];
            param_5 = param_5 + 1;
          } while (uVar4 < param_3);
          return (longlong *)0x0;
        }
        goto LAB_144df63fd;
      }
    }
    else if ((((*(uint *)(param_1 + 4) & 0x7fff0000) == 0) && ((uVar4 >> 0xf & 1) == 0)) ||
            ((*(byte *)(param_1 + 0x418) & 0x10) != 0)) {
      if (*(char *)(param_1 + 400) != '\0') {
        if (param_3 == 0) {
          return (longlong *)0x0;
        }
        do {
          (**(code **)(*(longlong *)(param_1 + 0x2d0) + 0x118))
                    (param_1,1,(int)plVar5 + param_2,local_38,local_res8);
          uVar4 = (int)plVar5 + 1;
          plVar5 = (longlong *)(ulonglong)uVar4;
          *param_5 = (uint)local_res8[0];
          param_5 = param_5 + 1;
        } while (uVar4 < param_3);
        return (longlong *)0x0;
      }
      goto LAB_144df63fd;
    }
    plVar2 = (longlong *)&DAT_00000007;
  }
  return plVar2;
}



// FUNCTION 144df64c0 FUN_144df64c0 body=490 status=ok
// SIG undefined FUN_144df64c0(void)

void FUN_144df64c0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60 [6];
  int local_48 [6];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 0x38);
  lVar9 = *(longlong *)(param_1 + 0x20);
  piVar1 = (int *)(lVar3 + 0x30);
  local_68 = lVar3;
  if (lVar9 + 0x30U <= *(ulonglong *)(param_1 + 0x28)) {
    lVar8 = 0;
    iVar10 = 0x7fffffff;
    lVar11 = 6;
    *(undefined1 *)(lVar3 + 0x40) = 1;
    iVar12 = -0x80000000;
    do {
      iVar6 = FUN_144dfb330(param_1,lVar9);
      lVar4 = local_68;
      lVar9 = lVar9 + 8;
      *(int *)((longlong)local_60 + lVar8) = iVar6;
      if (iVar6 != 0) {
        iVar6 = *(int *)((longlong)local_48 + lVar8);
        if (iVar12 < iVar6) {
          iVar12 = iVar6;
        }
        if (iVar6 < iVar10) {
          iVar10 = iVar6;
        }
      }
      lVar8 = lVar8 + 4;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    if ((iVar12 + 9U < 10) && ((uint)(iVar12 - iVar10) < 10)) {
      lVar9 = 0;
      do {
        iVar10 = *(int *)((longlong)local_60 + lVar9);
        iVar6 = 0;
        if (iVar10 != 0) {
          iVar2 = *(int *)(&DAT_149a0bc48 +
                          (longlong)(iVar12 - *(int *)((longlong)local_48 + lVar9)) * 4);
          iVar6 = iVar2 >> 1;
          if (iVar10 < 0) {
            if (iVar6 + -0x80000000 < iVar10) {
              iVar7 = iVar10 - iVar6;
            }
            else {
              iVar7 = -0x80000000;
            }
          }
          else {
            iVar7 = iVar6 + iVar10;
            if (0x7fffffff - iVar6 <= iVar10) {
              iVar7 = 0x7fffffff;
            }
          }
          iVar6 = iVar7 % iVar2;
          *(int *)((longlong)local_60 + lVar9) = iVar7 / iVar2;
        }
        lVar9 = lVar9 + 4;
      } while (lVar9 < 0x18);
      *piVar1 = local_60[0];
      *(int *)(lVar3 + 0x38) = local_60[1];
      *(int *)(lVar3 + 0x34) = local_60[2];
      *(int *)(lVar3 + 0x3c) = local_60[3];
      *(int *)(local_68 + 0x48) = local_60[4];
      *(int *)(local_68 + 0x4c) = local_60[5];
      *(undefined4 *)(local_68 + 0x44) = *(undefined4 *)(&DAT_149a0bc48 + (longlong)iVar12 * -4);
      cVar5 = FUN_144b570a0(piVar1,iVar6);
      if (cVar5 != '\0') goto LAB_144df666c;
    }
    piVar1[0] = 0x10000;
    piVar1[1] = 0;
    *(undefined4 *)(lVar3 + 0x38) = 0;
    *(undefined4 *)(lVar3 + 0x3c) = 0x10000;
    *(undefined8 *)(lVar4 + 0x48) = 0;
    *(undefined4 *)(lVar4 + 0x44) = 1;
  }
LAB_144df666c:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
}



// FUNCTION 144df66c0 FUN_144df66c0 body=233 status=ok
// SIG undefined FUN_144df66c0(void)

undefined8 FUN_144df66c0(longlong param_1,uint param_2,undefined8 param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 1000);
  if (*(char *)(lVar4 + 0x24) == '\x02') {
    uVar2 = FUN_144b55a90(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 8),&DAT_149a099b0);
    puVar3 = (undefined8 *)FUN_144b57b20(uVar2,"glyph-dict",0);
    if ((puVar3 != (undefined8 *)0x0) && ((code *)*puVar3 != (code *)0x0)) {
      uVar2 = (*(code *)*puVar3)(param_1,(ulonglong)param_2,param_3,param_4);
      return uVar2;
    }
  }
  else if (*(longlong *)(lVar4 + 0x10e0) != 0) {
    uVar1 = *(ushort *)(*(longlong *)(lVar4 + 0x4d8) + (ulonglong)param_2 * 2);
    if (uVar1 != 0xffff) {
      if (uVar1 < 0x187) {
        lVar4 = (**(code **)(*(longlong *)(lVar4 + 0x10e0) + 0x28))();
      }
      else {
        if (*(uint *)(lVar4 + 0x5c0) <= uVar1 - 0x187) {
          return 0;
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x5c8) + (ulonglong)(uVar1 - 0x187) * 8);
      }
      if (lVar4 != 0) {
        FUN_144b56430(param_3,lVar4,param_4);
      }
    }
    return 0;
  }
  return 0xb;
}



// FUNCTION 144df67b0 FUN_144df67b0 body=376 status=ok
// SIG undefined FUN_144df67b0(void)

undefined8 FUN_144df67b0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (puVar1 + 4 <= *(undefined8 **)(param_1 + 0x28)) {
    pcVar3 = (char *)*puVar1;
    iVar6 = 0x7fffffff;
    if (*pcVar3 == '\x1e') {
      iVar4 = FUN_144dfafe0(pcVar3,*(undefined8 *)(param_1 + 0x10),0,0);
    }
    else {
      iVar4 = FUN_144dfaf30(pcVar3,*(undefined8 *)(param_1 + 0x10));
      if (iVar4 < 0x8000) {
        if (iVar4 < -0x7fff) {
          iVar4 = -0x7fffffff;
        }
        else {
          iVar4 = iVar4 << 0x10;
        }
      }
      else {
        iVar4 = 0x7fffffff;
      }
    }
    uVar5 = FUN_144b55630(iVar4);
    *(undefined4 *)(lVar2 + 0x54) = uVar5;
    pcVar3 = (char *)puVar1[1];
    if (*pcVar3 == '\x1e') {
      iVar4 = FUN_144dfafe0(pcVar3,*(undefined8 *)(param_1 + 0x10),0,0);
    }
    else {
      iVar4 = FUN_144dfaf30(pcVar3,*(undefined8 *)(param_1 + 0x10));
      if (iVar4 < 0x8000) {
        if (iVar4 < -0x7fff) {
          iVar4 = -0x7fffffff;
        }
        else {
          iVar4 = iVar4 << 0x10;
        }
      }
      else {
        iVar4 = 0x7fffffff;
      }
    }
    uVar5 = FUN_144b55630(iVar4);
    *(undefined4 *)(lVar2 + 0x58) = uVar5;
    pcVar3 = (char *)puVar1[2];
    if (*pcVar3 == '\x1e') {
      iVar4 = FUN_144dfafe0(pcVar3,*(undefined8 *)(param_1 + 0x10),0,0);
    }
    else {
      iVar4 = FUN_144dfaf30(pcVar3,*(undefined8 *)(param_1 + 0x10));
      if (iVar4 < 0x8000) {
        if (iVar4 < -0x7fff) {
          iVar4 = -0x7fffffff;
        }
        else {
          iVar4 = iVar4 << 0x10;
        }
      }
      else {
        iVar4 = 0x7fffffff;
      }
    }
    uVar5 = FUN_144b55630(iVar4);
    *(undefined4 *)(lVar2 + 0x5c) = uVar5;
    pcVar3 = (char *)puVar1[3];
    if (*pcVar3 == '\x1e') {
      iVar6 = FUN_144dfafe0(pcVar3,*(undefined8 *)(param_1 + 0x10),0,0);
    }
    else {
      iVar4 = FUN_144dfaf30(pcVar3,*(undefined8 *)(param_1 + 0x10));
      if (iVar4 < 0x8000) {
        if (iVar4 < -0x7fff) {
          iVar6 = -0x7fffffff;
        }
        else {
          iVar6 = iVar4 << 0x10;
        }
      }
    }
    uVar5 = FUN_144b55630(iVar6);
    *(undefined4 *)(lVar2 + 0x60) = uVar5;
    return 0;
  }
  return 0xa1;
}



// FUNCTION 144df6930 FUN_144df6930 body=210 status=ok
// SIG undefined FUN_144df6930(void)

undefined8 FUN_144df6930(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  char *pcVar3;
  int iVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (*(undefined8 **)(param_1 + 0x28) < puVar1 + 2) {
    return 0xa1;
  }
  pcVar3 = (char *)*puVar1;
  if (*pcVar3 == '\x1e') {
    iVar4 = FUN_144dfafe0(pcVar3,*(undefined8 *)(param_1 + 0x10),0,0);
    iVar4 = iVar4 >> 0x10;
  }
  else if (*pcVar3 == -1) {
    iVar4 = (int)(short)(CONCAT21(CONCAT11(pcVar3[1],pcVar3[2]),pcVar3[3]) + 0x80 >> 8);
  }
  else {
    iVar4 = FUN_144dfaf30(pcVar3,*(undefined8 *)(param_1 + 0x10));
  }
  if (-1 < iVar4) {
    *(int *)(lVar2 + 0x78) = iVar4;
    iVar4 = FUN_144df8fb0(param_1,puVar1 + 1);
    if (-1 < iVar4) {
      *(int *)(lVar2 + 0x74) = iVar4;
      return 0;
    }
  }
  return 3;
}



// FUNCTION 144df6a10 FUN_144df6a10 body=321 status=ok
// SIG undefined FUN_144df6a10(void)

ulonglong FUN_144df6a10(longlong param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  uint uVar10;
  
  lVar5 = *(longlong *)(param_1 + 1000);
  if (*(char *)(lVar5 + 0x24) == '\x02') {
    uVar4 = FUN_144b55a90(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 8),&DAT_149a099b0);
    lVar5 = FUN_144b57b20(uVar4,"glyph-dict",0);
    if ((lVar5 != 0) && (*(code **)(lVar5 + 8) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000144df6a7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)(lVar5 + 8))(param_1,param_2);
      return uVar6;
    }
    return 0;
  }
  lVar7 = FUN_144b57b20(*(undefined8 *)(param_1 + 0x90),"postscript-cmaps",1);
  if ((lVar7 != 0) && (uVar6 = 0, *(int *)(lVar5 + 0x20) != 0)) {
    do {
      uVar3 = *(ushort *)(*(longlong *)(lVar5 + 0x4d8) + uVar6 * 2);
      if (uVar3 < 0x187) {
        lVar8 = (**(code **)(lVar7 + 0x28))(uVar3);
LAB_144df6b06:
        if (lVar8 != 0) {
          pcVar9 = param_2;
          do {
            cVar1 = *pcVar9;
            cVar2 = pcVar9[lVar8 - (longlong)param_2];
            if (cVar1 != cVar2) break;
            pcVar9 = pcVar9 + 1;
          } while (cVar2 != '\0');
          if (cVar1 == cVar2) {
            return uVar6;
          }
        }
      }
      else if (uVar3 - 0x187 < *(uint *)(lVar5 + 0x5c0)) {
        lVar8 = *(longlong *)(*(longlong *)(lVar5 + 0x5c8) + (ulonglong)(uVar3 - 0x187) * 8);
        goto LAB_144df6b06;
      }
      uVar10 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar10;
    } while (uVar10 < *(uint *)(lVar5 + 0x20));
  }
  return 0;
}



// FUNCTION 144df6b60 FUN_144df6b60 body=221 status=ok
// SIG undefined FUN_144df6b60(void)

undefined8 FUN_144df6b60(longlong param_1)

{
  longlong lVar1;
  char *pcVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (*(undefined8 **)(param_1 + 0x28) < *(undefined8 **)(param_1 + 0x20) + 5) {
    return 0xa1;
  }
  pcVar2 = (char *)**(undefined8 **)(param_1 + 0x20);
  if (*pcVar2 == '\x1e') {
    iVar3 = FUN_144dfafe0(pcVar2,*(undefined8 *)(param_1 + 0x10),0,0);
    iVar3 = iVar3 >> 0x10;
  }
  else if (*pcVar2 == -1) {
    iVar3 = (int)(short)(CONCAT21(CONCAT11(pcVar2[1],pcVar2[2]),pcVar2[3]) + 0x80 >> 8);
  }
  else {
    iVar3 = FUN_144dfaf30(pcVar2,*(undefined8 *)(param_1 + 0x10));
  }
  if (iVar3 - 2U < 0xf) {
    *(short *)(lVar1 + 0xb0) = (short)iVar3;
    *(short *)(lVar1 + 0xb2) =
         (short)((longlong)(ulonglong)(uint)(*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x20)) >>
                3) + -4;
    *(short *)(param_1 + 0x40) = (short)iVar3;
    *(undefined2 *)(param_1 + 0x42) = *(undefined2 *)(lVar1 + 0xb2);
    return 0;
  }
  return 3;
}



// FUNCTION 144df6c40 FUN_144df6c40 body=395 status=ok
// SIG undefined FUN_144df6c40(void)

undefined8 FUN_144df6c40(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (*(undefined8 **)(param_1 + 0x28) < puVar1 + 3) {
    return 0xa1;
  }
  pcVar3 = (char *)*puVar1;
  if (*pcVar3 == '\x1e') {
    iVar4 = FUN_144dfafe0(pcVar3,*(undefined8 *)(param_1 + 0x10),0,0);
    iVar4 = iVar4 >> 0x10;
  }
  else if (*pcVar3 == -1) {
    iVar4 = (int)(short)(CONCAT21(CONCAT11(pcVar3[1],pcVar3[2]),pcVar3[3]) + 0x80 >> 8);
  }
  else {
    iVar4 = FUN_144dfaf30(pcVar3,*(undefined8 *)(param_1 + 0x10));
  }
  *(int *)(lVar2 + 0x84) = iVar4;
  pcVar3 = (char *)puVar1[1];
  if (*pcVar3 == '\x1e') {
    iVar4 = FUN_144dfafe0(pcVar3,*(undefined8 *)(param_1 + 0x10),0,0);
    iVar4 = iVar4 >> 0x10;
  }
  else if (*pcVar3 == -1) {
    iVar4 = (int)(short)(CONCAT21(CONCAT11(pcVar3[1],pcVar3[2]),pcVar3[3]) + 0x80 >> 8);
  }
  else {
    iVar4 = FUN_144dfaf30(pcVar3,*(undefined8 *)(param_1 + 0x10));
  }
  *(int *)(lVar2 + 0x88) = iVar4;
  pcVar3 = (char *)puVar1[2];
  if (*pcVar3 == '\x1e') {
    iVar4 = FUN_144dfafe0(pcVar3,*(undefined8 *)(param_1 + 0x10),0,0);
    *(int *)(lVar2 + 0x8c) = iVar4 >> 0x10;
    return 0;
  }
  if (*pcVar3 == -1) {
    *(int *)(lVar2 + 0x8c) =
         (int)(short)(CONCAT21(CONCAT11(pcVar3[1],pcVar3[2]),pcVar3[3]) + 0x80 >> 8);
    return 0;
  }
  uVar5 = FUN_144dfaf30(pcVar3,*(undefined8 *)(param_1 + 0x10));
  *(undefined4 *)(lVar2 + 0x8c) = uVar5;
  return 0;
}



// FUNCTION 144df6de0 FUN_144df6de0 body=608 status=ok
// SIG undefined FUN_144df6de0(void)

ulonglong FUN_144df6de0(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint local_res8 [2];
  
  lVar2 = *(longlong *)(param_1 + 1000);
  uVar7 = 0;
  local_res8[0] = 0;
  if (lVar2 == 0) {
    return 0;
  }
  if (*(longlong *)(lVar2 + 0x10f0) == 0) {
    puVar5 = (ulonglong *)FUN_144b560d0(*(undefined8 *)(param_1 + 0x98),0x38,local_res8);
    if (local_res8[0] != 0) {
      return (ulonglong)local_res8[0];
    }
    uVar1 = *(uint *)(lVar2 + 0x5e0);
    uVar6 = uVar7;
    if (uVar1 != 0xffff) {
      if (uVar1 < 0x187) {
        if (*(longlong *)(lVar2 + 0x10e0) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = (**(code **)(*(longlong *)(lVar2 + 0x10e0) + 0x28))();
        }
      }
      else if (uVar1 - 0x187 < *(uint *)(lVar2 + 0x5c0)) {
        uVar6 = *(ulonglong *)(*(longlong *)(lVar2 + 0x5c8) + (ulonglong)(uVar1 - 0x187) * 8);
      }
    }
    *puVar5 = uVar6;
    uVar1 = *(uint *)(lVar2 + 0x5e4);
    uVar6 = uVar7;
    if (uVar1 != 0xffff) {
      if (uVar1 < 0x187) {
        if (*(longlong *)(lVar2 + 0x10e0) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = (**(code **)(*(longlong *)(lVar2 + 0x10e0) + 0x28))();
        }
      }
      else if (uVar1 - 0x187 < *(uint *)(lVar2 + 0x5c0)) {
        uVar6 = *(ulonglong *)(*(longlong *)(lVar2 + 0x5c8) + (ulonglong)(uVar1 - 0x187) * 8);
      }
    }
    puVar5[1] = uVar6;
    uVar1 = *(uint *)(lVar2 + 0x5ec);
    uVar6 = uVar7;
    if (uVar1 != 0xffff) {
      if (uVar1 < 0x187) {
        if (*(longlong *)(lVar2 + 0x10e0) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = (**(code **)(*(longlong *)(lVar2 + 0x10e0) + 0x28))();
        }
      }
      else if (uVar1 - 0x187 < *(uint *)(lVar2 + 0x5c0)) {
        uVar6 = *(ulonglong *)(*(longlong *)(lVar2 + 0x5c8) + (ulonglong)(uVar1 - 0x187) * 8);
      }
    }
    puVar5[2] = uVar6;
    uVar1 = *(uint *)(lVar2 + 0x5f0);
    uVar6 = uVar7;
    if (uVar1 != 0xffff) {
      if (uVar1 < 0x187) {
        if (*(longlong *)(lVar2 + 0x10e0) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = (**(code **)(*(longlong *)(lVar2 + 0x10e0) + 0x28))();
        }
      }
      else if (uVar1 - 0x187 < *(uint *)(lVar2 + 0x5c0)) {
        uVar6 = *(ulonglong *)(*(longlong *)(lVar2 + 0x5c8) + (ulonglong)(uVar1 - 0x187) * 8);
      }
    }
    puVar5[3] = uVar6;
    uVar1 = *(uint *)(lVar2 + 0x5f4);
    if (uVar1 != 0xffff) {
      if (uVar1 < 0x187) {
        uVar7 = 0;
        if (*(longlong *)(lVar2 + 0x10e0) != 0) {
          uVar7 = (**(code **)(*(longlong *)(lVar2 + 0x10e0) + 0x28))();
        }
      }
      else if (uVar1 - 0x187 < *(uint *)(lVar2 + 0x5c0)) {
        uVar7 = *(ulonglong *)(*(longlong *)(lVar2 + 0x5c8) + (ulonglong)(uVar1 - 0x187) * 8);
      }
    }
    puVar5[4] = uVar7;
    *(undefined4 *)(puVar5 + 5) = *(undefined4 *)(lVar2 + 0x5fc);
    *(undefined1 *)((longlong)puVar5 + 0x2c) = *(undefined1 *)(lVar2 + 0x5f8);
    *(undefined2 *)((longlong)puVar5 + 0x2e) = *(undefined2 *)(lVar2 + 0x600);
    *(undefined2 *)(puVar5 + 6) = *(undefined2 *)(lVar2 + 0x604);
    *(ulonglong **)(lVar2 + 0x10f0) = puVar5;
    uVar7 = (ulonglong)local_res8[0];
  }
  puVar3 = *(undefined8 **)(lVar2 + 0x10f0);
  uVar4 = puVar3[1];
  *param_2 = *puVar3;
  param_2[1] = uVar4;
  uVar4 = puVar3[3];
  param_2[2] = puVar3[2];
  param_2[3] = uVar4;
  uVar4 = puVar3[5];
  param_2[4] = puVar3[4];
  param_2[5] = uVar4;
  param_2[6] = puVar3[6];
  return uVar7;
}



// FUNCTION 144df7040 FUN_144df7040 body=81 status=ok
// SIG undefined FUN_144df7040(void)

undefined8 FUN_144df7040(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x170) != 0)) {
    if (*(char *)(*(longlong *)(lVar1 + 0x170) + 0x239) != '\0') {
      return 0xa0;
    }
    uVar2 = FUN_144df8fb0(param_1,*(undefined8 *)(param_1 + 0x20));
    *(undefined4 *)(lVar1 + 0x168) = uVar2;
    return 0;
  }
  return 3;
}



// FUNCTION 144df70a0 FUN_144df70a0 body=391 status=ok
// SIG undefined FUN_144df70a0(void)

int FUN_144df70a0(longlong param_1,undefined2 *param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  ushort uVar4;
  ushort *puVar5;
  char *pcVar6;
  byte *pbVar7;
  byte *_Str;
  int iVar8;
  int local_res8 [2];
  
  lVar3 = *(longlong *)(param_1 + 1000);
  local_res8[0] = 0;
  if (lVar3 == 0) {
    return 0;
  }
  iVar8 = 0;
  if (*(longlong *)(lVar3 + 0x1138) != 0) goto LAB_144df71fe;
  puVar5 = (ushort *)FUN_144b560d0(*(undefined8 *)(param_1 + 0x98),2,local_res8);
  if (local_res8[0] != 0) {
    return local_res8[0];
  }
  *puVar5 = 0;
  uVar2 = *(uint *)(lVar3 + 0x660);
  if (uVar2 != 0xffff) {
    if (uVar2 < 0x187) {
      if (*(longlong *)(lVar3 + 0x10e0) != 0) {
        pcVar6 = (char *)(**(code **)(*(longlong *)(lVar3 + 0x10e0) + 0x28))();
        goto LAB_144df7146;
      }
    }
    else if (uVar2 - 0x187 < *(uint *)(lVar3 + 0x5c0)) {
      pcVar6 = *(char **)(*(longlong *)(lVar3 + 0x5c8) + (ulonglong)(uVar2 - 0x187) * 8);
LAB_144df7146:
      if ((pcVar6 != (char *)0x0) && (pcVar6 = strstr(pcVar6,"/FSType"), pcVar6 != (char *)0x0)) {
        _Str = (byte *)(pcVar6 + 7);
        pbVar7 = (byte *)strstr((char *)_Str,"def");
        if (pbVar7 != (byte *)0x0) {
          for (; _Str != pbVar7; _Str = _Str + 1) {
            bVar1 = *_Str;
            if ((byte)(bVar1 - 0x30) < 10) {
              if (0x1997 < *puVar5) {
LAB_144df71eb:
                *puVar5 = 0;
                break;
              }
              uVar4 = *puVar5 * 10;
              *puVar5 = uVar4;
              *puVar5 = (char)*_Str + -0x30 + uVar4;
            }
            else if ((0x20 < bVar1) || ((0x100002400U >> ((longlong)(char)bVar1 & 0x3fU) & 1) == 0))
            goto LAB_144df71eb;
          }
        }
      }
    }
  }
  *(ushort **)(lVar3 + 0x1138) = puVar5;
  iVar8 = local_res8[0];
LAB_144df71fe:
  *param_2 = **(undefined2 **)(lVar3 + 0x1138);
  return iVar8;
}



// FUNCTION 144df7230 FUN_144df7230 body=246 status=ok
// SIG undefined FUN_144df7230(void)

undefined8 FUN_144df7230(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if ((lVar1 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x170), lVar2 == 0)) {
    return 3;
  }
  uVar4 = *(uint *)(lVar2 + 0x268);
  if (((((*(char *)(lVar2 + 0x238) == '\0') || (*(int *)(lVar2 + 0x248) != *(int *)(lVar1 + 0x168)))
       || (*(uint *)(lVar2 + 0x24c) != uVar4)) ||
      ((uVar4 != 0 &&
       (iVar3 = memcmp(*(void **)(lVar2 + 0x270),*(void **)(lVar2 + 0x250),(ulonglong)uVar4 << 2),
       iVar3 != 0)))) &&
     (uVar5 = FUN_144df78c0((char *)(lVar2 + 0x238),*(undefined4 *)(lVar1 + 0x168),uVar4,
                            *(undefined8 *)(lVar2 + 0x270)), (int)uVar5 != 0)) {
    return uVar5;
  }
  uVar4 = FUN_144df8fb0(param_1,*(longlong *)(param_1 + 0x28) + -8);
  if (*(uint *)(param_1 + 0x30) < uVar4) {
    uVar5 = 3;
  }
  else {
    uVar5 = FUN_144dfa1a0(lVar2,param_1,uVar4);
    *(undefined1 *)(lVar2 + 0x239) = 1;
  }
  return uVar5;
}



// FUNCTION 144df7350 FUN_144df7350 body=141 status=ok
// SIG undefined FUN_144df7350(void)

undefined4 FUN_144df7350(longlong param_1)

{
  longlong lVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 == 0) {
    return 3;
  }
  pcVar2 = (char *)**(undefined8 **)(param_1 + 0x20);
  if (*pcVar2 == '\x1e') {
    iVar3 = FUN_144dfafe0(pcVar2,*(undefined8 *)(param_1 + 0x10),0,0);
    uVar4 = iVar3 >> 0x10;
  }
  else if (*pcVar2 == -1) {
    uVar4 = (uint)(short)(CONCAT21(CONCAT11(pcVar2[1],pcVar2[2]),pcVar2[3]) + 0x80 >> 8);
  }
  else {
    uVar4 = FUN_144dfaf30(pcVar2,*(undefined8 *)(param_1 + 0x10));
  }
  if (0x201 < uVar4) {
    uVar4 = 0x201;
  }
  if (uVar4 < 0x201) {
    uVar4 = 0x201;
  }
  *(uint *)(lVar1 + 0xb8) = uVar4;
  return 0;
}



// FUNCTION 144df73e0 FUN_144df73e0 body=124 status=ok
// SIG undefined FUN_144df73e0(void)

undefined8 FUN_144df73e0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  lVar1 = *(longlong *)(param_1 + 1000);
  if (((*(byte *)(param_1 + 8) & 8) != 0) && (*(longlong *)(param_1 + 0x2d0) != 0)) {
    uVar2 = FUN_144b55a90(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 8),&DAT_149a099b0);
    puVar3 = (undefined8 *)FUN_144b57b20(uVar2,"postscript-font-name",0);
    if ((puVar3 != (undefined8 *)0x0) && ((code *)*puVar3 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000144df7447. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)*puVar3)(param_1);
      return uVar2;
    }
  }
  return *(undefined8 *)(lVar1 + 0x5b0);
}



// FUNCTION 144df7460 FUN_144df7460 body=149 status=ok
// SIG undefined FUN_144df7460(void)

undefined8 FUN_144df7460(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (((undefined *)param_1[2] == &DAT_149a0a790) || ((undefined *)param_1[2] == &DAT_149a0a7e0)) {
    return 0x96;
  }
  uVar1 = FUN_144b55a90(*(undefined8 *)(*(longlong *)(*param_1 + 0x90) + 8),&DAT_149a099b0);
  puVar2 = (undefined8 *)FUN_144b57b20(uVar1,"tt-cmaps",0);
  if ((puVar2 != (undefined8 *)0x0) && ((code *)*puVar2 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000144df74d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)*puVar2)(param_1,param_2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 144df7500 FUN_144df7500 body=502 status=ok
// SIG undefined FUN_144df7500(void)

int FUN_144df7500(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  byte *_Dst;
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *local_68 [4];
  undefined8 local_48;
  
  lVar1 = param_1[1];
  _Dst = (byte *)(param_2 + 0xc0);
  *(undefined8 **)(param_2 + 0x240) = param_1;
  *(undefined1 *)(param_2 + 0x239) = 0;
  iVar3 = 0;
  if ((*(int *)(param_2 + 0x74) != 0) && (iVar3 = 0, *(int *)(param_2 + 0x78) != 0)) {
    memset(_Dst,0,0x178);
    *(undefined4 *)(param_2 + 0x188) = 7;
    *(undefined4 *)(param_2 + 0x18c) = 1;
    *(undefined4 *)(param_2 + 0x20c) = 0xffffffff;
    *(undefined4 *)(param_2 + 0x214) = 0xf5c;
    *(undefined4 *)(param_2 + 0x184) = 0x27a000;
    *(longlong *)(param_2 + 0x230) = param_2;
    *(undefined4 *)(param_2 + 0x268) = param_3;
    *(undefined8 *)(param_2 + 0x270) = param_4;
    if (*(char *)((longlong)param_1 + 0x2c) == '\0') {
      iVar3 = 0x61;
    }
    else {
      iVar3 = *(int *)(param_1 + 0xd3) + 1;
    }
    uVar4 = 0x2000;
    if (*(char *)((longlong)param_1 + 0x2c) != '\0') {
      uVar4 = 0x5000;
    }
    iVar2 = FUN_144df9020(local_68,uVar4,_Dst,*param_1,iVar3,*(undefined2 *)(param_2 + 0xb0),
                          *(undefined2 *)(param_2 + 0xb2));
    iVar3 = 0;
    if (iVar2 == 0) {
      iVar3 = FUN_144b597a0(lVar1,*(int *)(param_1 + 3) + *(int *)(param_2 + 0x74));
      if (iVar3 == 0) {
        iVar3 = FUN_144b59990(lVar1,*(undefined4 *)(param_2 + 0x78));
        if (iVar3 == 0) {
          iVar3 = FUN_144df90f0(local_68,*(undefined8 *)(lVar1 + 0x38),*(undefined8 *)(lVar1 + 0x40)
                               );
          FUN_144b59ab0(lVar1);
          if (iVar3 == 0) {
            *_Dst = *_Dst & 0xfe;
            iVar2 = *(int *)(param_2 + 0x218);
            if (iVar2 < 0) {
              *(int *)(param_2 + 0x218) = -iVar2;
            }
            else if (iVar2 == 0) {
              *(undefined4 *)(param_2 + 0x218) = 0x3ade68b1;
            }
            if (1000 < *(uint *)(param_2 + 0x188)) {
              *(undefined4 *)(param_2 + 0x188) = 7;
            }
            if (1000 < *(uint *)(param_2 + 0x18c)) {
              *(undefined4 *)(param_2 + 0x18c) = 1;
            }
          }
        }
      }
    }
    *(undefined8 *)(param_2 + 0x280) = *(undefined8 *)(param_2 + 0x278);
    *(undefined4 *)(param_2 + 0x288) = 0;
    FUN_144b56350(*local_68[0],local_48);
  }
  return iVar3;
}



// FUNCTION 144df7700 FUN_144df7700 body=184 status=ok
// SIG undefined FUN_144df7700(void)

ulonglong FUN_144df7700(char *param_1,uint param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  ulonglong in_RAX;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  
  puVar2 = *(undefined1 **)(param_1 + 8);
  if (puVar2 != (undefined1 *)0x0) {
    in_RAX = 0;
    if (*param_1 == '\0') {
      return (ulonglong)(byte)puVar2[param_2];
    }
    if (*param_1 == '\x03') {
      if (param_2 - *(int *)(param_1 + 0x14) < *(uint *)(param_1 + 0x18)) {
        return (ulonglong)(byte)param_1[0x1c];
      }
      pbVar4 = puVar2 + 2;
      uVar6 = (uint)CONCAT11(*puVar2,puVar2[1]);
      while( true ) {
        if (param_2 < uVar6) {
          return 0;
        }
        bVar1 = *pbVar4;
        pbVar5 = pbVar4 + 3;
        uVar3 = (uint)CONCAT11(pbVar4[1],pbVar4[2]);
        if (param_2 < uVar3) break;
        pbVar4 = pbVar5;
        uVar6 = uVar3;
        if (puVar2 + *(uint *)(param_1 + 0x10) <= pbVar5) {
          return 0;
        }
      }
      *(uint *)(param_1 + 0x18) = uVar3 - uVar6;
      *(uint *)(param_1 + 0x14) = uVar6;
      param_1[0x1c] = bVar1;
      return (ulonglong)bVar1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 144df77c0 FUN_144df77c0 body=190 status=ok
// SIG undefined FUN_144df77c0(void)

undefined8
FUN_144df77c0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 1000);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else if (*(int *)(lVar1 + 0x664) == 0xffff) {
    uVar2 = 6;
  }
  else {
    if (param_2 != (undefined8 *)0x0) {
      if (*(longlong *)(lVar1 + 0x10f8) == 0) {
        uVar2 = FUN_144df94e0(lVar1);
        *(undefined8 *)(lVar1 + 0x10f8) = uVar2;
      }
      *param_2 = *(undefined8 *)(lVar1 + 0x10f8);
    }
    if (param_3 != (undefined8 *)0x0) {
      if (*(longlong *)(&DAT_00001100 + lVar1) == 0) {
        uVar2 = FUN_144df94e0(lVar1,*(undefined4 *)(lVar1 + 0x668));
        *(undefined8 *)(&DAT_00001100 + lVar1) = uVar2;
      }
      *param_3 = *(undefined8 *)(&DAT_00001100 + lVar1);
    }
    uVar2 = 0;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)(lVar1 + 0x66c);
    }
  }
  return uVar2;
}



// FUNCTION 144df7880 FUN_144df7880 body=62 status=ok
// SIG undefined FUN_144df7880(void)

undefined4 FUN_144df7880(char *param_1,int param_2,uint param_3,void *param_4)

{
  int iVar1;
  
  if (((*param_1 != '\0') && (*(int *)(param_1 + 0x10) == param_2)) &&
     (*(uint *)(param_1 + 0x14) == param_3)) {
    if ((param_3 != 0) &&
       (iVar1 = memcmp(param_4,*(void **)(param_1 + 0x18),(ulonglong)param_3 << 2), iVar1 != 0)) {
      return 1;
    }
    return 0;
  }
  return 1;
}



// FUNCTION 144df78c0 FUN_144df78c0 body=687 status=ok
// SIG undefined FUN_144df78c0(void)

int FUN_144df78c0(undefined1 *param_1,uint param_2,uint param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  void *_Dst;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  int *piVar16;
  uint uVar17;
  int *piVar18;
  int local_res18 [2];
  int *local_res20;
  
  lVar6 = *(longlong *)(param_1 + 8);
  local_res18[0] = 0;
  uVar7 = *(undefined8 *)(lVar6 + 0x10);
  if ((((param_3 != 0) && (param_4 == (int *)0x0)) ||
      ((*param_1 = 0, param_3 != 0 && (param_3 != *(ushort *)(lVar6 + 0x1128))))) ||
     (*(uint *)(lVar6 + 0x1118) <= param_2)) {
    return 3;
  }
  piVar16 = (int *)((ulonglong)param_2 * 0x10 + *(longlong *)(lVar6 + 0x1120));
  uVar12 = *piVar16 + 1;
  local_res20 = param_4;
  uVar11 = FUN_144b561b0(uVar7,1,*(int *)(param_1 + 0x20) << 2,uVar12 * 4,
                         *(undefined8 *)(param_1 + 0x28),local_res18);
  *(undefined8 *)(param_1 + 0x28) = uVar11;
  if (local_res18[0] == 0) {
    uVar17 = 0;
    *(uint *)(param_1 + 0x20) = uVar12;
    if (uVar12 != 0) {
      lVar15 = 0;
      piVar18 = param_4;
      do {
        param_4 = piVar18;
        if (uVar17 == 0) {
          *(undefined4 *)(lVar15 + *(longlong *)(param_1 + 0x28)) = 0x10000;
        }
        else {
          uVar1 = *(uint *)(*(longlong *)(piVar16 + 2) + (ulonglong)(uVar17 - 1) * 4);
          lVar8 = *(longlong *)(lVar6 + 0x1130);
          if (*(uint *)(lVar6 + 0x112c) <= uVar1) {
            return 3;
          }
          if (param_3 == 0) {
            *(undefined4 *)(lVar15 + *(longlong *)(param_1 + 0x28)) = 0;
          }
          else {
            *(undefined4 *)(lVar15 + *(longlong *)(param_1 + 0x28)) = 0x10000;
            if (param_3 != 0) {
              lVar14 = 0;
              uVar13 = (ulonglong)param_3;
              do {
                lVar9 = *(longlong *)(lVar8 + (ulonglong)uVar1 * 8);
                iVar2 = *(int *)(lVar9 + lVar14);
                iVar3 = *(int *)(lVar9 + 4 + lVar14);
                if (((iVar3 < iVar2) || (iVar4 = *(int *)(lVar9 + 8 + lVar14), iVar4 < iVar3)) ||
                   (((iVar2 < 0 && (0 < iVar4)) || (iVar3 == 0)))) {
LAB_144df7a7b:
                  uVar10 = 0x10000;
                }
                else {
                  iVar5 = *piVar18;
                  if ((iVar5 < iVar2) || (iVar4 < iVar5)) {
                    uVar10 = 0;
                  }
                  else {
                    if (iVar5 == iVar3) goto LAB_144df7a7b;
                    if (iVar5 < iVar3) {
                      uVar10 = FUN_144b555e0(iVar5 - iVar2,iVar3 - iVar2);
                    }
                    else {
                      uVar10 = FUN_144b555e0(iVar4 - iVar5,iVar4 - iVar3);
                    }
                  }
                }
                uVar10 = FUN_144b42fe0(*(undefined4 *)(*(longlong *)(param_1 + 0x28) + lVar15),
                                       uVar10);
                lVar14 = lVar14 + 0xc;
                piVar18 = piVar18 + 1;
                *(undefined4 *)(lVar15 + *(longlong *)(param_1 + 0x28)) = uVar10;
                uVar13 = uVar13 - 1;
                param_4 = local_res20;
              } while (uVar13 != 0);
            }
          }
        }
        uVar17 = uVar17 + 1;
        lVar15 = lVar15 + 4;
        piVar18 = param_4;
      } while (uVar17 < uVar12);
    }
    *(uint *)(param_1 + 0x10) = param_2;
    if (param_3 != 0) {
      _Dst = (void *)FUN_144b561b0(uVar7,1,*(int *)(param_1 + 0x14) << 2,param_3 * 4,
                                   *(undefined8 *)(param_1 + 0x18),local_res18);
      *(void **)(param_1 + 0x18) = _Dst;
      if (local_res18[0] != 0) {
        return local_res18[0];
      }
      memcpy(_Dst,param_4,(ulonglong)param_3 << 2);
    }
    *(uint *)(param_1 + 0x14) = param_3;
    *param_1 = 1;
  }
  return local_res18[0];
}



// FUNCTION 144df7d40 FUN_144df7d40 body=103 status=ok
// SIG undefined FUN_144df7d40(void)

undefined8 FUN_144df7d40(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + 1000);
  if (*(longlong *)(lVar2 + 0x4d8) == 0) {
    return 0xa3;
  }
  pcVar3 = *(code **)(*(longlong *)(lVar2 + 0x10e0) + 8);
  if (pcVar3 == (code *)0x0) {
    return 7;
  }
  uVar4 = (*pcVar3)(*(undefined8 *)(lVar1 + 0x98),param_1,*(undefined4 *)(lVar2 + 0x20),
                    &LAB_144dfa4b0,0,lVar1);
  return uVar4;
}



// FUNCTION 144df7db0 FUN_144df7db0 body=100 status=ok
// SIG undefined FUN_144df7db0(void)

longlong FUN_144df7db0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_144b56cb0(&PTR_s_font_format_149a0b320);
  if (lVar1 == 0) {
    if ((param_1 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
      plVar2 = (longlong *)FUN_144b55a90(*(longlong *)(param_1 + 8),&DAT_149a099b0);
      if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144df7e03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar1 = (**(code **)(*plVar2 + 0x30))(plVar2,param_2);
        return lVar1;
      }
    }
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 144df7e20 FUN_144df7e20 body=43 status=ok
// SIG undefined FUN_144df7e20(void)

void FUN_144df7e20(longlong *param_1)

{
  FUN_144b56350(*(undefined8 *)(*param_1 + 0x98),param_1[4]);
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}



// FUNCTION 144df7e90 FUN_144df7e90 body=348 status=ok
// SIG undefined FUN_144df7e90(void)

void FUN_144df7e90(longlong *param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auStack_128 [32];
  int local_108 [4];
  undefined1 local_f8 [208];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_108[0] = 0;
  puVar3 = *(undefined8 **)(*(longlong *)(*param_1 + 1000) + 0x10d8);
  lVar2 = FUN_144b55a90(*(undefined8 *)(*(longlong *)(*param_1 + 0x90) + 8),"pshinter");
  if ((((lVar2 == 0) || (puVar3 == (undefined8 *)0x0)) ||
      (pcVar1 = (code *)*puVar3, pcVar1 == (code *)0x0)) ||
     (puVar3 = (undefined8 *)(*pcVar1)(lVar2), puVar3 == (undefined8 *)0x0)) {
LAB_144df7fd1:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  else {
    lVar2 = *(longlong *)(*param_1 + 1000);
    lVar4 = FUN_144b560d0(*(undefined8 *)(*param_1 + 0x98),0x808,local_108);
    if (local_108[0] == 0) {
      FUN_144dfccf0(lVar2 + 0x5e0,local_f8);
      local_108[0] = (*(code *)*puVar3)(*(undefined8 *)(*param_1 + 0x98),local_f8,lVar4);
      if (local_108[0] == 0) {
        uVar5 = *(uint *)(lVar2 + 0x8b0);
        uVar6 = (ulonglong)uVar5;
        do {
          if (uVar5 == 0) {
            *(longlong *)param_1[7] = lVar4;
            goto LAB_144df7fd1;
          }
          local_108[0] = 0;
          uVar5 = (int)uVar6 - 1;
          uVar6 = (ulonglong)uVar5;
          FUN_144dfccf0(*(undefined8 *)(lVar2 + 0x8b8 + uVar6 * 8),local_f8);
          local_108[0] = (*(code *)*puVar3)(*(undefined8 *)(*param_1 + 0x98),local_f8,
                                            lVar4 + 8 + uVar6 * 8);
        } while (local_108[0] == 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_128);
}



// FUNCTION 144df8010 FUN_144df8010 body=184 status=ok
// SIG undefined FUN_144df8010(void)

void FUN_144df8010(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  
  lVar6 = *param_1;
  uVar1 = *(undefined8 *)(lVar6 + 0x98);
  puVar2 = *(undefined8 **)param_1[7];
  lVar3 = *(longlong *)(lVar6 + 1000);
  if (puVar2 != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(lVar3 + 0x10d8);
    lVar6 = FUN_144b55a90(*(undefined8 *)(*(longlong *)(lVar6 + 0x90) + 8),"pshinter");
    if ((((lVar6 != 0) && (puVar4 != (undefined8 *)0x0)) &&
        (pcVar5 = (code *)*puVar4, pcVar5 != (code *)0x0)) && (lVar6 = (*pcVar5)(lVar6), lVar6 != 0)
       ) {
      (**(code **)(lVar6 + 0x10))(*puVar2);
      uVar7 = *(uint *)(lVar3 + 0x8b0);
      uVar8 = (ulonglong)uVar7;
      while (uVar7 != 0) {
        uVar7 = (int)uVar8 - 1;
        uVar8 = (ulonglong)uVar7;
        (**(code **)(lVar6 + 0x10))(puVar2[uVar8 + 1]);
      }
    }
    FUN_144b56350(uVar1,puVar2);
  }
  return;
}



// FUNCTION 144df80d0 FUN_144df80d0 body=408 status=ok
// SIG undefined FUN_144df80d0(void)

undefined8 FUN_144df80d0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 *local_res8;
  
  lVar8 = *param_1;
  if ((*(byte *)(lVar8 + 8) & 2) != 0) {
    iVar5 = (**(code **)(*(longlong *)(lVar8 + 0x2d0) + 0xd0))(lVar8,param_2,&local_res8);
    if (iVar5 == 0) {
      uVar9 = FUN_144df8270(param_1,(ulonglong)local_res8 & 0xffffffff);
      return uVar9;
    }
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  FUN_144b57e90(*param_1,param_2);
  puVar2 = *(undefined8 **)(*(longlong *)(*param_1 + 1000) + 0x10d8);
  lVar8 = FUN_144b55a90(*(undefined8 *)(*(longlong *)(*param_1 + 0x90) + 8),"pshinter");
  if ((((lVar8 != 0) && (puVar2 != (undefined8 *)0x0)) &&
      (pcVar3 = (code *)*puVar2, pcVar3 != (code *)0x0)) && (lVar8 = (*pcVar3)(lVar8), lVar8 != 0))
  {
    lVar4 = *(longlong *)(*param_1 + 1000);
    iVar5 = *(int *)(lVar4 + 0x624);
    local_res8 = *(undefined8 **)param_1[7];
    (**(code **)(lVar8 + 8))
              (*local_res8,*(undefined4 *)((longlong)param_1 + 0x1c),(int)param_1[4],0,0);
    uVar10 = *(uint *)(lVar4 + 0x8b0);
    uVar11 = (ulonglong)uVar10;
    while (uVar10 != 0) {
      uVar10 = (int)uVar11 - 1;
      uVar11 = (ulonglong)uVar10;
      iVar1 = *(int *)(*(longlong *)(lVar4 + 0x8b8 + uVar11 * 8) + 0x44);
      if (iVar5 == iVar1) {
        uVar6 = *(undefined4 *)((longlong)param_1 + 0x1c);
        uVar7 = (undefined4)param_1[4];
      }
      else {
        uVar6 = FUN_144b55580(*(undefined4 *)((longlong)param_1 + 0x1c),iVar5,iVar1);
        uVar7 = FUN_144b55580((int)param_1[4],iVar5,iVar1);
      }
      (**(code **)(lVar8 + 8))(local_res8[uVar11 + 1],uVar6,uVar7,0,0);
    }
  }
  return 0;
}



// FUNCTION 144df8270 FUN_144df8270 body=366 status=ok
// SIG undefined FUN_144df8270(void)

undefined8 FUN_144df8270(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  
  *(undefined4 *)(param_1 + 8) = param_2;
  FUN_144b57d60(*param_1);
  puVar3 = *(undefined8 **)(*(longlong *)(*param_1 + 1000) + 0x10d8);
  lVar8 = FUN_144b55a90(*(undefined8 *)(*(longlong *)(*param_1 + 0x90) + 8),"pshinter");
  if (((lVar8 != 0) && (puVar3 != (undefined8 *)0x0)) &&
     (pcVar4 = (code *)*puVar3, pcVar4 != (code *)0x0)) {
    lVar8 = (*pcVar4)(lVar8);
    if (lVar8 != 0) {
      lVar5 = *(longlong *)(*param_1 + 1000);
      iVar1 = *(int *)(lVar5 + 0x624);
      puVar3 = *(undefined8 **)param_1[7];
      (**(code **)(lVar8 + 8))
                (*puVar3,*(undefined4 *)((longlong)param_1 + 0x1c),(int)param_1[4],0,0);
      uVar9 = *(uint *)(lVar5 + 0x8b0);
      uVar10 = (ulonglong)uVar9;
      while (uVar9 != 0) {
        uVar9 = (int)uVar10 - 1;
        uVar10 = (ulonglong)uVar9;
        iVar2 = *(int *)(*(longlong *)(lVar5 + 0x8b8 + uVar10 * 8) + 0x44);
        if (iVar1 == iVar2) {
          uVar6 = *(undefined4 *)((longlong)param_1 + 0x1c);
          uVar7 = (undefined4)param_1[4];
        }
        else {
          uVar6 = FUN_144b55580(*(undefined4 *)((longlong)param_1 + 0x1c),iVar1,iVar2);
          uVar7 = FUN_144b55580((int)param_1[4],iVar1,iVar2);
        }
        (**(code **)(lVar8 + 8))(puVar3[uVar10 + 1],uVar6,uVar7,0,0);
      }
      return 0;
    }
    return 0;
  }
  return 0;
}



// FUNCTION 144df83f0 FUN_144df83f0 body=94 status=ok
// SIG undefined FUN_144df83f0(void)

undefined8 FUN_144df83f0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 1000) + 0x10d8);
  if (lVar1 != 0) {
    lVar2 = FUN_144b55a90(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) + 8),
                          "pshinter");
    if (lVar2 != 0) {
      uVar3 = (**(code **)(lVar1 + 0x10))(lVar2);
      *(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x28) = uVar3;
    }
  }
  return 0;
}



// FUNCTION 144df8450 FUN_144df8450 body=2472 status=ok
// SIG undefined FUN_144df8450(void)

ulonglong FUN_144df8450(undefined8 param_1,undefined4 *param_2,ulonglong param_3,undefined4 param_4,
                       undefined8 param_5)

{
  char cVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  char *pcVar13;
  longlong lVar14;
  ulonglong uVar15;
  char *pcVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  uint uVar20;
  undefined4 *puVar21;
  uint uVar22;
  uint uVar23;
  bool bVar24;
  bool local_res10;
  uint local_58;
  undefined1 local_54;
  char local_53;
  ulonglong local_50;
  undefined4 *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  longlong local_38;
  undefined8 local_30;
  
  local_res10 = true;
  local_54 = 0;
  local_53 = '\0';
  uVar12 = *(undefined8 *)(*(longlong *)(param_2 + 0x24) + 8);
  lVar10 = FUN_144b57b00(uVar12,&DAT_149a099b0);
  if (lVar10 == 0) {
    return 0xb;
  }
  local_38 = FUN_144b57b20(*(undefined8 *)(param_2 + 0x24),"postscript-cmaps",1);
  local_50 = FUN_144b57b00(uVar12,"pshinter");
  lVar11 = FUN_144b57b00(uVar12,"psaux");
  if (lVar11 == 0) {
    return 0xb;
  }
  *(longlong *)(param_2 + 0xbc) = lVar11;
  local_30 = FUN_144b57b20(*(undefined8 *)(param_2 + 0x24),"cff-load",1);
  local_58 = FUN_144b597a0(param_1,0);
  if (local_58 != 0) {
    return (ulonglong)local_58;
  }
  uVar22 = (uint)param_3;
  local_58 = (**(code **)(lVar10 + 8))(param_1,param_2,param_3 & 0xffffffff,param_4,param_5);
  if (local_58 == 0) {
    if (param_2[0x3c] != 0x4f54544f) {
      return 2;
    }
    if ((int)uVar22 < 0) {
      return 0;
    }
    local_53 = '\x01';
    local_58 = (**(code **)(param_2 + 0xa8))(param_2,0x68656164,param_1,0);
    local_res10 = local_58 != 0;
    if (local_res10) {
      local_58 = (**(code **)(lVar10 + 0x40))(param_2,param_1);
    }
    else {
      local_58 = (**(code **)(lVar10 + 0x10))(param_1,param_2,param_3 & 0xffffffff,param_4,param_5);
    }
    if (local_58 != 0) {
      return (ulonglong)local_58;
    }
    local_58 = (**(code **)(param_2 + 0xa8))(param_2,0x43464632,param_1,0);
    if (local_58 == 0) {
      local_54 = 1;
      *(undefined1 *)(param_2 + 0x102) = 1;
    }
    if ((char)local_58 == -0x72) {
      local_58 = (**(code **)(param_2 + 0xa8))(param_2,0x43464620,param_1,0);
    }
  }
  else {
    local_58 = FUN_144b597a0(param_1,0);
  }
  if (local_58 != 0) {
    return (ulonglong)local_58;
  }
  local_58 = 0;
  puVar21 = *(undefined4 **)(param_2 + 0x26);
  local_48 = puVar21;
  lVar10 = FUN_144b560d0(puVar21,0x1140,&local_58);
  if (local_58 != 0) {
    return (ulonglong)local_58;
  }
  *(longlong *)(param_2 + 0xfa) = lVar10;
  local_58 = FUN_144df9790(uVar12,param_1,param_3 & 0xffffffff,lVar10,param_2,local_res10,local_54);
  if (local_58 != 0) {
    return (ulonglong)local_58;
  }
  if ((int)uVar22 < 0) {
    *param_2 = *(undefined4 *)(lVar10 + 0x1c);
    return 0;
  }
  *(ulonglong *)(lVar10 + 0x10d8) = local_50;
  *(undefined8 *)(lVar10 + 0x10e8) = local_30;
  *(longlong *)(lVar10 + 0x10e0) = local_38;
  param_3 = param_3 & 0xffff;
  param_2[1] = (int)param_3;
  param_2[4] = *(undefined4 *)(lVar10 + 0x20);
  local_50 = CONCAT44(local_50._4_4_,(int)param_3);
  if ((*(int *)(lVar10 + 0x664) == 0xffff) && (local_38 == 0)) {
    return 0xb;
  }
  lVar11 = *(longlong *)(param_2 + 0xba);
  uVar20 = 0;
  if ((((param_2[2] & 0x100) != 0) && (*(longlong *)(param_2 + 0xb8) != 0)) && (uVar22 >> 0x10 != 0)
     ) {
    local_58 = (**(code **)(*(longlong *)(param_2 + 0xb8) + 0x38))(param_2,uVar22 >> 0x10);
    if (local_58 != 0) {
      return (ulonglong)local_58;
    }
    uVar20 = local_58;
    if (lVar11 != 0) {
      (**(code **)(lVar11 + 0x38))(param_2);
      uVar20 = local_58;
    }
  }
  local_58 = uVar20;
  if (*(char *)(lVar10 + 0x620) == '\0') {
    uVar22 = 1000;
    if (local_res10 == false) {
      uVar22 = (uint)*(ushort *)(param_2 + 0x1a);
    }
    *(uint *)(lVar10 + 0x624) = uVar22;
  }
  iVar19 = *(int *)(lVar10 + 0x61c);
  if (iVar19 == 0) {
    iVar19 = *(int *)(lVar10 + 0x618);
  }
  if (iVar19 < 0) {
    iVar19 = -iVar19;
  }
  if (iVar19 != 0x10000) {
    uVar9 = FUN_144b555e0(*(undefined4 *)(lVar10 + 0x624),iVar19);
    *(undefined4 *)(lVar10 + 0x624) = uVar9;
    uVar9 = FUN_144b555e0(*(undefined4 *)(lVar10 + 0x610),iVar19);
    *(undefined4 *)(lVar10 + 0x610) = uVar9;
    uVar9 = FUN_144b555e0(*(undefined4 *)(lVar10 + 0x618),iVar19);
    *(undefined4 *)(lVar10 + 0x618) = uVar9;
    uVar9 = FUN_144b555e0(*(undefined4 *)(lVar10 + 0x614),iVar19);
    *(undefined4 *)(lVar10 + 0x614) = uVar9;
    uVar9 = FUN_144b555e0(*(undefined4 *)(lVar10 + 0x61c),iVar19);
    *(undefined4 *)(lVar10 + 0x61c) = uVar9;
    uVar9 = FUN_144b555e0(*(undefined4 *)(lVar10 + 0x628),iVar19);
    *(undefined4 *)(lVar10 + 0x628) = uVar9;
    uVar9 = FUN_144b555e0(*(undefined4 *)(lVar10 + 0x62c),iVar19);
    *(undefined4 *)(lVar10 + 0x62c) = uVar9;
  }
  *(int *)(lVar10 + 0x628) = (int)*(short *)(lVar10 + 0x62a);
  *(int *)(lVar10 + 0x62c) = (int)*(short *)(lVar10 + 0x62e);
  uVar15 = (ulonglong)*(uint *)(lVar10 + 0x8b0);
  if (*(uint *)(lVar10 + 0x8b0) != 0) {
    do {
      uVar22 = (int)uVar15 - 1;
      uVar15 = (ulonglong)uVar22;
      lVar11 = *(longlong *)(lVar10 + 0x8b8 + uVar15 * 8);
      if (*(char *)(lVar11 + 0x40) == '\0') {
        uVar9 = *(undefined4 *)(lVar10 + 0x614);
        uVar7 = *(undefined4 *)(lVar10 + 0x618);
        uVar8 = *(undefined4 *)(lVar10 + 0x61c);
        *(undefined4 *)(lVar11 + 0x30) = *(undefined4 *)(lVar10 + 0x610);
        *(undefined4 *)(lVar11 + 0x34) = uVar9;
        *(undefined4 *)(lVar11 + 0x38) = uVar7;
        *(undefined4 *)(lVar11 + 0x3c) = uVar8;
        *(undefined8 *)(lVar11 + 0x48) = *(undefined8 *)(lVar10 + 0x628);
        uVar9 = *(undefined4 *)(lVar10 + 0x624);
LAB_144df88b2:
        *(undefined4 *)(lVar11 + 0x44) = uVar9;
      }
      else if (*(char *)(lVar10 + 0x620) != '\0') {
        uVar20 = *(uint *)(lVar10 + 0x624);
        if ((uVar20 < 2) || (uVar23 = *(uint *)(lVar11 + 0x44), uVar23 < 2)) {
          uVar23 = 1;
        }
        else if (uVar20 < uVar23) {
          uVar23 = uVar20;
        }
        FUN_144b56d60(lVar10 + 0x610,lVar11 + 0x30,uVar23);
        FUN_144b573b0(lVar11 + 0x48,lVar10 + 0x610,uVar23);
        uVar9 = FUN_144b55580(*(undefined4 *)(lVar11 + 0x44),*(undefined4 *)(lVar10 + 0x624),uVar23)
        ;
        goto LAB_144df88b2;
      }
      iVar19 = *(int *)(lVar11 + 0x3c);
      if (iVar19 == 0) {
        iVar19 = *(int *)(lVar11 + 0x38);
      }
      if (iVar19 < 0) {
        iVar19 = -iVar19;
      }
      if (iVar19 != 0x10000) {
        uVar9 = FUN_144b555e0(*(undefined4 *)(lVar11 + 0x44),iVar19);
        *(undefined4 *)(lVar11 + 0x44) = uVar9;
        uVar9 = FUN_144b555e0(*(undefined4 *)(lVar11 + 0x30),iVar19);
        *(undefined4 *)(lVar11 + 0x30) = uVar9;
        uVar9 = FUN_144b555e0(*(undefined4 *)(lVar11 + 0x38),iVar19);
        *(undefined4 *)(lVar11 + 0x38) = uVar9;
        uVar9 = FUN_144b555e0(*(undefined4 *)(lVar11 + 0x34),iVar19);
        *(undefined4 *)(lVar11 + 0x34) = uVar9;
        uVar9 = FUN_144b555e0(*(undefined4 *)(lVar11 + 0x3c),iVar19);
        *(undefined4 *)(lVar11 + 0x3c) = uVar9;
        uVar9 = FUN_144b555e0(*(undefined4 *)(lVar11 + 0x48),iVar19);
        *(undefined4 *)(lVar11 + 0x48) = uVar9;
        uVar9 = FUN_144b555e0(*(undefined4 *)(lVar11 + 0x4c),iVar19);
        *(undefined4 *)(lVar11 + 0x4c) = uVar9;
      }
      *(int *)(lVar11 + 0x48) = (int)*(short *)(lVar11 + 0x4a);
      *(int *)(lVar11 + 0x4c) = (int)*(short *)(lVar11 + 0x4e);
    } while (uVar22 != 0);
    param_3 = local_50 & 0xffffffff;
    puVar21 = local_48;
  }
  if (local_res10 == false) goto LAB_144df8c84;
  *param_2 = *(undefined4 *)(lVar10 + 0x1c);
  if (*(int *)(lVar10 + 0x664) == 0xffff) {
    iVar19 = *(int *)(lVar10 + 0x500);
  }
  else {
    iVar19 = *(int *)(lVar10 + 0x4e8) + 1;
  }
  param_2[4] = iVar19;
  param_2[0x16] = (int)*(short *)(lVar10 + 0x636);
  param_2[0x17] = (int)*(short *)(lVar10 + 0x63a);
  sVar3 = *(short *)(param_2 + 0x17);
  param_2[0x18] = *(int *)(lVar10 + 0x63c) + 0xffff >> 0x10;
  param_2[0x19] = *(int *)(lVar10 + 0x640) + 0xffff >> 0x10;
  uVar4 = *(ushort *)(lVar10 + 0x624);
  sVar5 = *(short *)(param_2 + 0x19);
  *(ushort *)(param_2 + 0x1a) = uVar4;
  *(short *)((longlong)param_2 + 0x6a) = sVar5;
  *(short *)(param_2 + 0x1b) = sVar3;
  sVar6 = (short)((((uint)uVar4 + (uint)uVar4 * 2) * 4) / 10);
  *(short *)((longlong)param_2 + 0x6e) = sVar6;
  if ((int)sVar6 < (int)sVar5 - (int)sVar3) {
    *(short *)((longlong)param_2 + 0x6e) = sVar5 - sVar3;
  }
  *(undefined2 *)(param_2 + 0x1d) = *(undefined2 *)(lVar10 + 0x602);
  *(undefined2 *)((longlong)param_2 + 0x76) = *(undefined2 *)(lVar10 + 0x606);
  if ((*(int *)(lVar10 + 0x5f0) != 0) && (lVar11 = FUN_144df94e0(lVar10), lVar11 != 0)) {
    uVar12 = FUN_144b56360(puVar21,lVar11,&local_50);
    *(undefined8 *)(param_2 + 6) = uVar12;
  }
  if (*(longlong *)(param_2 + 6) == 0) {
    lVar11 = FUN_144df96e0(lVar10,param_3);
    *(longlong *)(param_2 + 6) = lVar11;
    if (lVar11 != 0) {
      FUN_144dfceb0(lVar11);
    }
    if (*(longlong *)(param_2 + 6) != 0) goto LAB_144df8a82;
    lVar11 = FUN_144df94e0(lVar10,*(undefined4 *)(lVar10 + 0x68c));
    if (lVar11 != 0) {
      uVar12 = FUN_144b56360(puVar21,lVar11,&local_50);
      *(undefined8 *)(param_2 + 6) = uVar12;
    }
  }
  else {
LAB_144df8a82:
    pcVar13 = (char *)FUN_144df94e0(lVar10,*(undefined4 *)(lVar10 + 0x5ec));
    pcVar16 = *(char **)(param_2 + 6);
    if ((pcVar13 != (char *)0x0) && (pcVar16 != (char *)0x0)) {
      cVar1 = *pcVar13;
      while (cVar1 != '\0') {
        cVar1 = *pcVar13;
        cVar2 = *pcVar16;
        if (cVar1 == cVar2) {
          pcVar16 = pcVar16 + 1;
LAB_144df8abf:
          pcVar13 = pcVar13 + 1;
        }
        else {
          if ((cVar1 == ' ') || (cVar1 == '-')) goto LAB_144df8abf;
          if ((cVar2 != ' ') && (cVar2 != '-')) {
            if ((*pcVar16 == '\0') && (*pcVar13 != '\0')) {
              lVar11 = FUN_144b56360(puVar21,pcVar13,&local_50);
              FUN_144dfcf80(*(undefined8 *)(param_2 + 6),lVar11);
              if (lVar11 != 0) {
                *(longlong *)(param_2 + 8) = lVar11;
                goto LAB_144df8b54;
              }
            }
            break;
          }
          pcVar16 = pcVar16 + 1;
        }
        cVar1 = *pcVar13;
      }
    }
  }
  uVar12 = FUN_144b56360(puVar21,"Regular",&local_50);
  *(undefined8 *)(param_2 + 8) = uVar12;
LAB_144df8b54:
  uVar22 = 0x819;
  if (local_53 == '\0') {
    uVar22 = 0x811;
  }
  uVar20 = uVar22 | 4;
  if (*(char *)(lVar10 + 0x5f8) == '\0') {
    uVar20 = uVar22;
  }
  lVar11 = 0;
  param_2[2] = param_2[2] | uVar20;
  bVar24 = *(int *)(lVar10 + 0x5fc) != 0;
  uVar22 = *(uint *)(lVar10 + 0x5f4);
  uVar20 = (uint)bVar24;
  if (uVar22 != 0xffff) {
    if (uVar22 < 0x187) {
      if (*(longlong *)(lVar10 + 0x10e0) == 0) goto LAB_144df8c3b;
      lVar14 = (**(code **)(*(longlong *)(lVar10 + 0x10e0) + 0x28))();
    }
    else {
      lVar14 = lVar11;
      if (uVar22 - 0x187 < *(uint *)(lVar10 + 0x5c0)) {
        lVar14 = *(longlong *)(*(longlong *)(lVar10 + 0x5c8) + (ulonglong)(uVar22 - 0x187) * 8);
      }
    }
    lVar17 = lVar11;
    if (lVar14 != 0) {
      do {
        lVar18 = lVar17 + 1;
        if (*(char *)(lVar14 + lVar17) != (&DAT_149eea5a7)[lVar17]) goto LAB_144df8c20;
        lVar17 = lVar18;
      } while (lVar18 != 5);
      goto LAB_144df8c35;
    }
  }
  goto LAB_144df8c3b;
  while (lVar11 = lVar17, lVar17 != 6) {
LAB_144df8c20:
    lVar17 = lVar11 + 1;
    if (*(char *)(lVar14 + lVar11) != "Black"[lVar11]) goto LAB_144df8c3b;
  }
LAB_144df8c35:
  uVar20 = bVar24 | 2;
LAB_144df8c3b:
  if ((((uVar20 & 2) == 0) && (*(char **)(param_2 + 8) != (char *)0x0)) &&
     ((iVar19 = strncmp(*(char **)(param_2 + 8),"Bold",4), iVar19 == 0 ||
      (iVar19 = strncmp(*(char **)(param_2 + 8),"Black",5), iVar19 == 0)))) {
    uVar20 = uVar20 | 2;
  }
  param_2[3] = uVar20;
LAB_144df8c84:
  if (((*(int *)(lVar10 + 0x664) != 0xffff) ||
      (param_2[2] = param_2[2] | 0x200, *(int *)(lVar10 + 0x664) != 0xffff)) &&
     (local_res10 != false)) {
    param_2[2] = param_2[2] | 0x1000;
  }
  uVar22 = param_2[0xe];
  if (uVar22 != 0) {
    uVar15 = 0;
    do {
      lVar11 = *(longlong *)(*(longlong *)(param_2 + 0x10) + uVar15 * 8);
      sVar3 = *(short *)(lVar11 + 0xc);
      if (((sVar3 == 3) && (*(short *)(lVar11 + 0xe) == 1)) || (sVar3 == 0)) {
        uVar15 = (ulonglong)local_58;
        goto LAB_144df8d70;
      }
      uVar20 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar20;
    } while (uVar20 < uVar22);
  }
  if ((local_res10 == false) || (*(int *)(lVar10 + 0x664) == 0xffff)) {
    local_3c = 0x10003;
    local_40 = 0x756e6963;
    local_48 = param_2;
    uVar20 = FUN_144b57870(&DAT_149a0a7e0,0,&local_48,0);
    uVar15 = (ulonglong)uVar20;
    if ((uVar20 == 0) || (((uVar20 & 0xff) == 0xa3 || ((uVar20 & 0xff) == 7)))) {
      local_58 = 0;
      uVar15 = 0;
      if ((*(longlong *)(param_2 + 0x22) == 0) && (uVar15 = 0, uVar22 != param_2[0xe])) {
        *(undefined8 *)(param_2 + 0x22) =
             *(undefined8 *)(*(longlong *)(param_2 + 0x10) + (ulonglong)uVar22 * 8);
      }
LAB_144df8d70:
      if (*(int *)(lVar10 + 200) != 0) {
        if (*(int *)(lVar10 + 0xc4) == 0) {
          local_3c = 7;
          local_40 = 0x41444f42;
        }
        else if (*(int *)(lVar10 + 0xc4) == 1) {
          local_3c = 0x10007;
          local_40 = 0x41444245;
        }
        else {
          local_40 = 0x41444243;
          local_3c = 0x20007;
        }
        local_48 = param_2;
        uVar22 = FUN_144b57870(&DAT_149a0a790,0,&local_48,0);
        uVar15 = (ulonglong)uVar22;
      }
    }
  }
  else {
    uVar15 = (ulonglong)local_58;
  }
  return uVar15;
}



// FUNCTION 144df8e00 FUN_144df8e00 body=123 status=ok
// SIG undefined FUN_144df8e00(void)

void FUN_144df8e00(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    if (*(longlong *)(param_1 + 0x2d0) != 0) {
      (**(code **)(*(longlong *)(param_1 + 0x2d0) + 0x18))();
    }
    if (*(longlong *)(param_1 + 1000) != 0) {
      FUN_144df9e90();
      FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 1000));
      *(undefined8 *)(param_1 + 1000) = 0;
    }
    if (*(longlong *)(param_1 + 0x2e0) != 0) {
      (**(code **)(*(longlong *)(param_1 + 0x2e0) + 0x58))(param_1);
    }
    *(undefined8 *)(param_1 + 0x410) = 0;
  }
  return;
}



// FUNCTION 144df8f30 FUN_144df8f30 body=43 status=ok
// SIG undefined FUN_144df8f30(void)

undefined8 FUN_144df8f30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x2d0);
  *param_4 = 0;
  if (lVar1 != 0) {
    uVar2 = (**(code **)(lVar1 + 0xa8))();
    *(undefined4 *)param_4 = uVar2;
  }
  return 0;
}



// FUNCTION 144df8fb0 FUN_144df8fb0 body=98 status=ok
// SIG undefined FUN_144df8fb0(void)

ulonglong FUN_144df8fb0(longlong param_1,undefined8 *param_2)

{
  char *pcVar1;
  int iVar2;
  ulonglong uVar3;
  
  pcVar1 = (char *)*param_2;
  if (*pcVar1 == '\x1e') {
    iVar2 = FUN_144dfafe0(pcVar1,*(undefined8 *)(param_1 + 0x10),0,0);
    return (ulonglong)(uint)(iVar2 >> 0x10);
  }
  if (*pcVar1 == -1) {
    return (ulonglong)
           (uint)(int)(short)(CONCAT21(CONCAT11(pcVar1[1],pcVar1[2]),pcVar1[3]) + 0x80 >> 8);
  }
  uVar3 = FUN_144dfaf30(pcVar1,*(undefined8 *)(param_1 + 0x10));
  return uVar3;
}



// FUNCTION 144df9020 FUN_144df9020 body=196 status=ok
// SIG undefined FUN_144df9020(void)

int FUN_144df9020(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined4 param_5,int param_6,undefined2 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_4;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 8) = (undefined2)param_6;
  param_1[7] = param_3;
  *(undefined2 *)((longlong)param_1 + 0x42) = param_7;
  *(undefined4 *)((longlong)param_1 + 0x34) = param_2;
  *param_1 = param_4;
  uVar2 = FUN_144b561b0(uVar1,8,0,param_5,0,&param_6);
  param_1[4] = uVar2;
  if (param_6 != 0) {
    FUN_144b56350(uVar1,uVar2);
    param_1[4] = 0;
    return param_6;
  }
  param_1[5] = uVar2;
  *(undefined4 *)(param_1 + 6) = param_5;
  return 0;
}



// FUNCTION 144df90f0 FUN_144df90f0 body=978 status=ok
// SIG undefined FUN_144df90f0(void)

ulonglong FUN_144df90f0(longlong param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  uint local_res8;
  
  uVar9 = 0;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x20);
  local_res8 = 0;
  *(byte **)(param_1 + 8) = param_2;
  *(byte **)(param_1 + 0x10) = param_3;
  *(byte **)(param_1 + 0x18) = param_2;
  if (param_3 <= param_2) {
    return 0;
  }
  do {
    iVar3 = 0x7fffffff;
    iVar6 = 0x7fffffff;
    bVar1 = *param_2;
    uVar4 = (uint)bVar1;
    if (((bVar1 < 0x1b) || (bVar1 == 0x1f)) || (bVar1 == 0xff)) {
      uVar12 = (longlong)*(undefined8 **)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3;
      uVar11 = (uint)uVar12;
      if (*(uint *)(param_1 + 0x30) <= uVar11) {
        return 6;
      }
      **(undefined8 **)(param_1 + 0x28) = param_2;
      if (bVar1 == 0xc) {
        param_2 = param_2 + 1;
        if (param_3 <= param_2) {
          return 6;
        }
        uVar4 = *param_2 | 0x100;
      }
      piVar8 = (int *)&DAT_149a0a870;
      do {
        if (piVar8[1] == (uVar4 | *(uint *)(param_1 + 0x34))) {
          piVar7 = (int *)((ulonglong)(uint)piVar8[2] + *(longlong *)(param_1 + 0x38));
          if ((*piVar8 != 6) && (uVar11 == 0)) {
            return 6;
          }
          switch(*piVar8) {
          case 1:
          case 4:
          case 5:
            pcVar2 = (char *)**(undefined8 **)(param_1 + 0x20);
            if (*pcVar2 == '\x1e') {
              iVar6 = FUN_144dfafe0(pcVar2,*(undefined8 *)(param_1 + 0x10),0,0);
              iVar6 = iVar6 >> 0x10;
              break;
            }
            if (*pcVar2 != -1) {
              iVar6 = FUN_144dfaf30(pcVar2,*(undefined8 *)(param_1 + 0x10));
              break;
            }
            iVar6 = (int)(short)(CONCAT21(CONCAT11(pcVar2[1],pcVar2[2]),pcVar2[3]) + 0x80 >> 8);
            goto LAB_144df9380;
          case 2:
            pcVar2 = (char *)**(undefined8 **)(param_1 + 0x20);
            if (*pcVar2 == '\x1e') {
              iVar6 = FUN_144dfafe0(pcVar2,*(undefined8 *)(param_1 + 0x10),0,0);
            }
            else {
              iVar5 = FUN_144dfaf30(pcVar2,*(undefined8 *)(param_1 + 0x10));
joined_r0x000144df9362:
              if (iVar5 < 0x8000) {
                if (iVar5 < -0x7fff) {
                  iVar6 = -0x7fffffff;
                }
                else {
                  iVar6 = iVar5 << 0x10;
                }
              }
            }
            break;
          case 3:
            pcVar2 = (char *)**(undefined8 **)(param_1 + 0x20);
            if (*pcVar2 == '\x1e') {
              iVar6 = FUN_144dfafe0(pcVar2,*(undefined8 *)(param_1 + 0x10),3);
            }
            else {
              uVar4 = FUN_144dfaf30(pcVar2,*(undefined8 *)(param_1 + 0x10));
              if ((int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) < 0x20c49c) {
                iVar5 = uVar4 * 1000;
                iVar6 = iVar3;
                goto joined_r0x000144df9362;
              }
              iVar6 = -0x7fffffff;
              if (0 < (int)uVar4) {
                iVar6 = iVar3;
              }
            }
            break;
          case 6:
            puVar10 = *(undefined8 **)(param_1 + 0x20);
            uVar12 = uVar12 & 0xffffffff;
            if ((uint)piVar8[6] < uVar11) {
              uVar12 = (ulonglong)(uint)piVar8[6];
            }
            iVar6 = 0;
            *(char *)((ulonglong)(uint)piVar8[7] + *(longlong *)(param_1 + 0x38)) = (char)uVar12;
            if ((int)uVar12 != 0) {
              do {
                pcVar2 = (char *)*puVar10;
                if (*pcVar2 == '\x1e') {
                  iVar3 = FUN_144dfafe0(pcVar2,*(undefined8 *)(param_1 + 0x10),0,0);
                  iVar3 = iVar3 >> 0x10;
                }
                else if (*pcVar2 == -1) {
                  iVar3 = (int)(short)(CONCAT21(CONCAT11(pcVar2[1],pcVar2[2]),pcVar2[3]) + 0x80 >> 8
                                      );
                }
                else {
                  iVar3 = FUN_144dfaf30(pcVar2,*(undefined8 *)(param_1 + 0x10));
                }
                iVar6 = iVar6 + iVar3;
                puVar10 = puVar10 + 1;
                if ((char)piVar8[3] == '\x01') {
                  *(char *)piVar7 = (char)iVar6;
                }
                else if ((char)piVar8[3] == '\x02') {
                  *(short *)piVar7 = (short)iVar6;
                }
                else {
                  *piVar7 = iVar6;
                }
                piVar7 = (int *)((longlong)piVar7 + (ulonglong)*(byte *)(piVar8 + 3));
                uVar4 = (int)uVar12 - 1;
                uVar12 = (ulonglong)uVar4;
              } while (uVar4 != 0);
              uVar9 = (ulonglong)local_res8;
            }
            goto LAB_144df9468;
          default:
            uVar12 = (**(code **)(piVar8 + 4))(param_1);
            local_res8 = (uint)uVar12;
            uVar9 = uVar12 & 0xffffffff;
            if (local_res8 != 0) {
              return uVar12;
            }
            goto LAB_144df9468;
          }
          uVar9 = (ulonglong)local_res8;
LAB_144df9380:
          if ((char)piVar8[3] == '\x01') {
            *(char *)piVar7 = (char)iVar6;
          }
          else if ((char)piVar8[3] == '\x02') {
            *(short *)piVar7 = (short)iVar6;
          }
          else {
            *piVar7 = iVar6;
          }
          break;
        }
        piVar8 = piVar8 + 8;
      } while (*piVar8 != 0);
LAB_144df9468:
      if (*piVar8 != 8) {
        *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x20);
      }
    }
    else {
      if (*(uint *)(param_1 + 0x30) <=
          (uint)((longlong)*(undefined8 **)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3)) {
        return 6;
      }
      **(undefined8 **)(param_1 + 0x28) = param_2;
      *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
      if (bVar1 == 0x1e) {
        do {
          param_2 = param_2 + 1;
          if (param_3 <= param_2) {
            return uVar9;
          }
        } while (((*param_2 & 0xf0) != 0xf0) && ((*param_2 & 0xf) != 0xf));
      }
      else if (bVar1 == 0x1c) {
        param_2 = param_2 + 2;
      }
      else if (bVar1 == 0x1d) {
        param_2 = param_2 + 4;
      }
      else if (0xf6 < bVar1) {
        param_2 = param_2 + 1;
      }
    }
    param_2 = param_2 + 1;
    if (param_3 <= param_2) {
      return uVar9;
    }
  } while( true );
}



// FUNCTION 144df94e0 FUN_144df94e0 body=63 status=ok
// SIG undefined FUN_144df94e0(void)

undefined8 FUN_144df94e0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0xffff) {
    if (param_2 < 0x187) {
      if (*(longlong *)(param_1 + 0x10e0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000144df951b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*(longlong *)(param_1 + 0x10e0) + 0x28))(param_2);
        return uVar1;
      }
    }
    else if (param_2 - 0x187 < *(uint *)(param_1 + 0x5c0)) {
      return *(undefined8 *)(*(longlong *)(param_1 + 0x5c8) + (ulonglong)(param_2 - 0x187) * 8);
    }
  }
  return 0;
}



// FUNCTION 144df9520 FUN_144df9520 body=448 status=ok
// SIG undefined FUN_144df9520(void)

ulonglong FUN_144df9520(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  byte local_res8 [8];
  
  uVar11 = 0;
  uVar10 = (ulonglong)param_2;
  if ((param_1 == (longlong *)0x0) || (*(uint *)(param_1 + 2) <= param_2)) {
    return 6;
  }
  uVar4 = 0;
  lVar3 = *param_1;
  lVar5 = param_1[4];
  if (lVar5 == 0) {
    uVar11 = FUN_144b597a0(lVar3,*(int *)((longlong)param_1 + 0xc) + (int)param_1[1] +
                                 *(byte *)((longlong)param_1 + 0x14) * param_2);
    if ((int)uVar11 != 0) {
      return uVar11;
    }
    uVar7 = 0;
    uVar4 = FUN_144b59880(*param_1,local_res8,*(undefined1 *)((longlong)param_1 + 0x14));
    uVar8 = uVar7;
    if (uVar4 == 0) {
      lVar5 = 0;
      uVar8 = 0;
      if ((ulonglong)*(byte *)((longlong)param_1 + 0x14) != 0) {
        do {
          pbVar1 = local_res8 + lVar5;
          lVar5 = lVar5 + 1;
          uVar7 = uVar7 << 8 | (uint)*pbVar1;
          uVar8 = uVar7;
        } while (lVar5 < (longlong)(ulonglong)*(byte *)((longlong)param_1 + 0x14));
      }
    }
    if (uVar4 != 0) {
      return (ulonglong)uVar4;
    }
    uVar11 = 0;
    uVar4 = 0;
    if (uVar8 != 0) {
      do {
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
        uVar6 = 0;
        uVar7 = FUN_144b59880(*param_1,local_res8,*(undefined1 *)((longlong)param_1 + 0x14));
        uVar11 = (ulonglong)uVar7;
        uVar4 = uVar6;
        if (uVar7 == 0) {
          lVar5 = 0;
          uVar4 = 0;
          if ((ulonglong)*(byte *)((longlong)param_1 + 0x14) != 0) {
            do {
              pbVar1 = local_res8 + lVar5;
              lVar5 = lVar5 + 1;
              uVar6 = uVar6 << 8 | (uint)*pbVar1;
              uVar4 = uVar6;
            } while (lVar5 < (longlong)(ulonglong)*(byte *)((longlong)param_1 + 0x14));
          }
        }
      } while ((uVar4 == 0) && (uVar9 < *(uint *)(param_1 + 2)));
    }
  }
  else {
    uVar8 = *(uint *)(lVar5 + uVar10 * 4);
    if (uVar8 != 0) {
      do {
        uVar7 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar7;
        uVar4 = *(uint *)(lVar5 + uVar10 * 4);
        if (uVar4 != 0) break;
      } while (uVar7 < *(uint *)(param_1 + 2));
    }
  }
  iVar2 = *(int *)(lVar3 + 8);
  if ((iVar2 + 1U < uVar4) || ((iVar2 - uVar4) + 1 < *(uint *)(param_1 + 3))) {
    uVar4 = (iVar2 - (int)param_1[3]) + 1;
  }
  if ((uVar8 == 0) || (uVar4 <= uVar8)) {
    *param_3 = 0;
    *param_4 = 0;
  }
  else {
    *param_4 = uVar4 - uVar8;
    if (param_1[5] == 0) {
      uVar11 = FUN_144b597a0(lVar3,(int)param_1[3] + -1 + uVar8);
      if ((int)uVar11 == 0) {
        uVar11 = FUN_144b59b00(lVar3,uVar4 - uVar8,param_3);
      }
    }
    else {
      *param_3 = param_1[5] + -1 + (ulonglong)uVar8;
    }
  }
  return uVar11;
}



// FUNCTION 144df96e0 FUN_144df96e0 body=175 status=ok
// SIG undefined FUN_144df96e0(void)

void * FUN_144df96e0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  void *_Dst;
  int local_res8 [4];
  uint local_res18 [2];
  void *local_res20;
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return (void *)0x0;
  }
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x30);
  local_res8[0] = FUN_144df9520((undefined8 *)(param_1 + 0x30),param_2,&local_res20,local_res18);
  if (local_res8[0] == 0) {
    _Dst = (void *)FUN_144b560d0(uVar1,local_res18[0] + 1,local_res8);
    if (local_res8[0] == 0) {
      if (local_res18[0] != 0) {
        memcpy(_Dst,local_res20,(ulonglong)local_res18[0]);
      }
      *(undefined1 *)((ulonglong)local_res18[0] + (longlong)_Dst) = 0;
    }
    if (*(longlong *)(param_1 + 0x58) == 0) {
      FUN_144b59b40(*(undefined8 *)(param_1 + 0x30),&local_res20);
    }
    return _Dst;
  }
  return (void *)0x0;
}



// FUNCTION 144df9790 FUN_144df9790 body=1786 status=ok
// SIG undefined FUN_144df9790(void)

ulonglong FUN_144df9790(undefined8 param_1,longlong param_2,uint param_3,undefined8 *param_4,
                       undefined8 param_5,char param_6,char param_7)

{
  byte bVar1;
  undefined1 uVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  uint local_res8 [2];
  int local_res10;
  ulonglong local_res20;
  undefined8 in_stack_ffffffffffffff38;
  undefined4 uVar15;
  undefined8 in_stack_ffffffffffffff40;
  undefined4 uVar16;
  uint local_a8;
  longlong local_a0 [2];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  longlong local_70 [2];
  uint local_60;
  undefined8 local_50;
  longlong local_48 [2];
  
  uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff40 >> 0x20);
  uVar11 = *(ulonglong *)(param_2 + 0x30);
  local_res20 = uVar11;
  memset(param_4,0,0x1140);
  local_a0[0] = 0;
  local_a0[1] = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  iVar4 = FUN_144b59870(param_2);
  *(char *)((longlong)param_4 + 0x2c) = param_7;
  *param_4 = param_1;
  param_4[1] = param_2;
  param_4[2] = uVar11;
  *(int *)(param_4 + 3) = iVar4;
  local_res10 = iVar4;
  local_res8[0] = FUN_144b5a030(param_2,&DAT_149a0b308,param_4);
  uVar11 = (ulonglong)local_res8[0];
  if (local_res8[0] != 0) goto LAB_144df9e3c;
  if (param_7 == '\0') {
    bVar1 = FUN_144b59cc0(param_2,local_res8);
    uVar11 = (ulonglong)local_res8[0];
    if (local_res8[0] != 0) goto LAB_144df9e3c;
    if (((*(char *)((longlong)param_4 + 0x24) == '\x01') &&
        (3 < *(byte *)((longlong)param_4 + 0x26))) && (bVar1 < 5)) goto LAB_144df9899;
LAB_144df9e34:
    uVar11 = 2;
  }
  else {
    if ((*(char *)((longlong)param_4 + 0x24) != '\x02') || (*(byte *)((longlong)param_4 + 0x26) < 5)
       ) goto LAB_144df9e34;
    uVar3 = FUN_144b59d40(param_2,local_res8);
    uVar11 = (ulonglong)local_res8[0];
    *(uint *)(param_4 + 5) = (uint)uVar3;
    if (local_res8[0] != 0) goto LAB_144df9e3c;
LAB_144df9899:
    local_res8[0] = FUN_144b597a0(param_2,(uint)*(byte *)((longlong)param_4 + 0x26) + iVar4);
    if (local_res8[0] != 0) {
LAB_144df9e2e:
      uVar11 = (ulonglong)local_res8[0];
      if (param_6 == '\0') goto LAB_144df9e3c;
      goto LAB_144df9e34;
    }
    if (param_7 == '\0') {
      local_res8[0] = FUN_144dfb400(param_4 + 6,param_2,0,0);
      if (local_res8[0] == 0) {
        if ((*(uint *)(param_4 + 8) < 2) ||
           (*(uint *)(param_4 + 8) <= *(uint *)((longlong)param_4 + 0x4c))) {
          local_res8[0] = FUN_144dfb400(param_4 + 0xa4,param_2,0,0);
          uVar11 = (ulonglong)local_res8[0];
          if (local_res8[0] != 0) goto LAB_144df9e3c;
          local_res8[0] = FUN_144dfb400(local_a0,param_2,1,0);
          uVar11 = (ulonglong)local_res8[0];
          if (local_res8[0] != 0) goto LAB_144df9e3c;
          local_res8[0] = FUN_144dfb400(param_4 + 0x12,param_2,1,0);
          uVar11 = (ulonglong)local_res8[0];
          if (local_res8[0] != 0) goto LAB_144df9e3c;
          local_res8[0] = FUN_144dfb800(local_a0,param_4 + 0xb9,param_4 + 0xba,param_4 + 0xbb);
          uVar11 = (ulonglong)local_res8[0];
          if (local_res8[0] != 0) goto LAB_144df9e3c;
          if (*(uint *)(param_4 + 8) <= *(uint *)(param_4 + 0xa6)) goto LAB_144df9930;
          uVar11 = 3;
        }
        else {
          uVar11 = (ulonglong)(3 - (param_6 != '\0'));
        }
        goto LAB_144df9e39;
      }
      goto LAB_144df9e2e;
    }
    param_4[0xa4] = 0;
    param_4[0xa5] = 0;
    param_4[0xa6] = 0;
    param_4[0xa7] = 0;
    param_4[0xa8] = 0;
    param_4[0xa9] = 0;
    uVar5 = FUN_144b59870(param_2);
    *(undefined4 *)((longlong)param_4 + 0x53c) = *(undefined4 *)(param_4 + 5);
    *(undefined4 *)(param_4 + 0xa7) = uVar5;
    local_res8[0] = FUN_144b597f0(param_2);
    uVar11 = (ulonglong)local_res8[0];
    if (local_res8[0] != 0) goto LAB_144df9e3c;
    local_res8[0] = FUN_144dfb400(param_4 + 0x12,param_2,1,param_7);
    uVar11 = (ulonglong)local_res8[0];
    if (local_res8[0] != 0) goto LAB_144df9e3c;
LAB_144df9930:
    uVar13 = 0;
    *(undefined4 *)(param_4 + 0xb8) = (undefined4)local_90;
    if (param_6 == '\0') {
      local_a8 = 0;
      if (*(uint *)(param_4 + 8) < 2) goto LAB_144df9a55;
      uVar11 = 3;
    }
    else {
      local_a8 = param_3 & 0xffff;
      if (((int)param_3 < 1) || (local_a8 < *(uint *)(param_4 + 8))) {
        *(undefined4 *)((longlong)param_4 + 0x1c) = *(undefined4 *)(param_4 + 8);
LAB_144df9a55:
        if ((int)param_3 < 0) goto LAB_144df9e3c;
        uVar14 = 0x1000;
        uVar5 = 0x1000;
        if (param_7 != '\0') {
          uVar5 = 0x3000;
        }
        uVar9 = CONCAT44(uVar15,local_res10);
        local_res8[0] =
             FUN_144dfc820(param_4 + 0xbc,param_4 + 0xa4,local_a8,param_2,uVar9,
                           CONCAT44(uVar16,uVar5),param_4,param_5);
        uVar15 = (undefined4)((ulonglong)uVar9 >> 0x20);
        uVar11 = (ulonglong)local_res8[0];
        if (local_res8[0] != 0) goto LAB_144df9e3c;
        local_res8[0] = FUN_144b597a0(param_2,local_res10 + *(int *)(param_4 + 0xca));
        uVar11 = (ulonglong)local_res8[0];
        if (local_res8[0] != 0) goto LAB_144df9e3c;
        local_res8[0] = FUN_144dfb400(param_4 + 0x9e,param_2,0,param_7);
        uVar11 = (ulonglong)local_res8[0];
        if (local_res8[0] != 0) goto LAB_144df9e3c;
        if ((*(int *)((longlong)param_4 + 0x664) == 0xffff) && (param_7 == '\0')) {
          *(undefined4 *)(param_4 + 0x116) = 0;
          local_res8[0] = 0;
        }
        else {
          local_res8[0] =
               FUN_144dfbfe0(param_4 + 0x223,param_2,local_res10,
                             *(undefined4 *)((longlong)param_4 + 0x694));
          uVar11 = (ulonglong)local_res8[0];
          if (local_res8[0] != 0) goto LAB_144df9e3c;
          local_res8[0] = FUN_144b597a0(param_2,local_res10 + *(int *)((longlong)param_4 + 0x684));
          uVar11 = (ulonglong)local_res8[0];
          if (local_res8[0] != 0) goto LAB_144df9e3c;
          local_res8[0] = FUN_144dfb400(local_70,param_2,0,param_7);
          uVar11 = (ulonglong)local_res8[0];
          if (local_res8[0] != 0) goto LAB_144df9e3c;
          if (local_60 < 0x101) {
            uVar9 = 0;
            *(uint *)(param_4 + 0x116) = local_60;
            lVar6 = FUN_144b561b0(local_res20,0x2d0,0,local_60,0,local_res8);
            uVar15 = (undefined4)((ulonglong)uVar9 >> 0x20);
            uVar11 = (ulonglong)local_res8[0];
            if (local_res8[0] == 0) {
              if (local_60 != 0) {
                plVar8 = param_4 + 0x117;
                uVar7 = (ulonglong)local_60;
                do {
                  *plVar8 = lVar6;
                  plVar8 = plVar8 + 1;
                  lVar6 = lVar6 + 0x2d0;
                  uVar7 = uVar7 - 1;
                } while (uVar7 != 0);
              }
              if (local_60 != 0) {
                uVar7 = uVar13;
                uVar12 = local_res8[0];
                if (param_7 != '\0') {
                  uVar14 = 0x4000;
                }
                do {
                  local_res8[0] = uVar12;
                  uVar9 = CONCAT44((int)((ulonglong)uVar9 >> 0x20),local_res10);
                  local_res8[0] =
                       FUN_144dfc820(param_4[uVar7 + 0x117],local_70,uVar7,param_2,uVar9,uVar14,
                                     param_4,param_5);
                  uVar15 = (undefined4)((ulonglong)uVar9 >> 0x20);
                  uVar11 = (ulonglong)local_res8[0];
                  if (local_res8[0] != 0) goto LAB_144df9c81;
                  uVar10 = (int)uVar7 + 1;
                  uVar7 = (ulonglong)uVar10;
                  uVar12 = 0;
                } while (uVar10 < local_60);
              }
              if ((param_7 == '\0') || (1 < local_60)) {
                local_res8[0] =
                     FUN_144dfb9c0(param_4 + 0x217,*(undefined4 *)(param_4 + 0xa0),param_2,
                                   local_res10 + *(int *)(param_4 + 0xd1));
                uVar11 = (ulonglong)local_res8[0];
              }
            }
          }
LAB_144df9c81:
          if (local_70[0] != 0) {
            uVar9 = *(undefined8 *)(local_70[0] + 0x30);
            if (local_48[0] != 0) {
              FUN_144b59b40(local_70[0],local_48);
            }
            FUN_144b56350(uVar9,local_50);
            uVar11 = (ulonglong)local_res8[0];
          }
          if ((int)uVar11 != 0) goto LAB_144df9e3c;
        }
        if (*(int *)(param_4 + 0xca) == 0) {
          uVar11 = 3;
          goto LAB_144df9e39;
        }
        *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_4 + 0xa0);
        local_res20 = local_res20 & 0xffffffff00000000;
        uVar9 = *(undefined8 *)(param_4[0x12] + 0x30);
        param_4[0xb7] = 0;
        uVar11 = uVar13;
        if (param_4[0x16] == 0) {
          uVar7 = FUN_144dfb620(param_4 + 0x12);
          local_res20 = CONCAT44(local_res20._4_4_,(int)uVar7);
          uVar11 = uVar7 & 0xffffffff;
          if ((int)uVar7 == 0) goto LAB_144df9cfc;
        }
        else {
LAB_144df9cfc:
          if (*(int *)(param_4 + 0x14) != 0) {
            uVar15 = 0;
            plVar8 = (longlong *)
                     FUN_144b561b0(uVar9,8,0,*(int *)(param_4 + 0x14) + 1,0,&local_res20);
            uVar11 = local_res20 & 0xffffffff;
            if ((int)local_res20 == 0) {
              lVar6 = param_4[0x17];
              uVar12 = 1;
              *plVar8 = lVar6;
              if (*(int *)(param_4 + 0x14) != 0) {
                do {
                  uVar11 = (ulonglong)uVar12;
                  uVar10 = *(int *)(param_4[0x16] + uVar11 * 4) - 1;
                  if ((uint)uVar13 <= uVar10) {
                    if (*(uint *)((longlong)param_4 + 0xac) < uVar10) {
                      uVar10 = *(uint *)((longlong)param_4 + 0xac);
                    }
                    uVar13 = (ulonglong)uVar10;
                  }
                  uVar12 = uVar12 + 1;
                  plVar8[uVar11] = uVar13 + lVar6;
                } while (uVar12 <= *(uint *)(param_4 + 0x14));
              }
              uVar11 = local_res20 & 0xffffffff;
              param_4[0xb7] = plVar8;
            }
          }
        }
        iVar4 = local_res10;
        local_res8[0] = (uint)uVar11;
        if (local_res8[0] == 0) {
          if ((param_7 == (char)uVar11) && (*(int *)(param_4 + 4) != 0)) {
            if ((*(int *)((longlong)param_4 + 0x664) == 0xffff) || (param_6 == (char)uVar11)) {
              uVar2 = 0;
            }
            else {
              uVar2 = 1;
            }
            local_res8[0] =
                 FUN_144dfbc10(param_4 + 0x9a,*(int *)(param_4 + 4),param_2,local_res10,
                               CONCAT44(uVar15,*(undefined4 *)(param_4 + 0xc9)),uVar2);
            uVar11 = (ulonglong)local_res8[0];
            if (local_res8[0] != 0) goto LAB_144df9e3c;
            if (*(int *)((longlong)param_4 + 0x664) == 0xffff) {
              local_res8[0] =
                   FUN_144dfc3f0(param_4 + 0x18,param_4 + 0x9a,*(undefined4 *)(param_4 + 4),param_2,
                                 iVar4,*(undefined4 *)((longlong)param_4 + 0x64c));
              uVar11 = (ulonglong)local_res8[0];
              if (local_res8[0] != 0) goto LAB_144df9e3c;
            }
          }
          uVar9 = FUN_144df96e0(param_4,local_a8);
          uVar11 = (ulonglong)local_res8[0];
          param_4[0xb6] = uVar9;
        }
        goto LAB_144df9e3c;
      }
      uVar11 = 6;
    }
  }
LAB_144df9e39:
  local_res8[0] = (uint)uVar11;
LAB_144df9e3c:
  if (local_a0[0] != 0) {
    uVar9 = *(undefined8 *)(local_a0[0] + 0x30);
    if (local_78 != 0) {
      FUN_144b59b40(local_a0[0],&local_78);
    }
    FUN_144b56350(uVar9,local_80);
    uVar11 = (ulonglong)local_res8[0];
  }
  return uVar11;
}



// FUNCTION 144df9e90 FUN_144df9e90 body=778 status=ok
// SIG undefined FUN_144df9e90(void)

void FUN_144df9e90(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x30);
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      FUN_144b59b40();
    }
    FUN_144b56350(uVar2,*(undefined8 *)(param_1 + 0xb0));
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  if (*(longlong *)(param_1 + 0x520) != 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x520) + 0x30);
    if (*(longlong *)(param_1 + 0x548) != 0) {
      FUN_144b59b40();
    }
    FUN_144b56350(uVar2,*(undefined8 *)(param_1 + 0x540));
    *(undefined8 *)(param_1 + 0x520) = 0;
    *(undefined8 *)(param_1 + 0x528) = 0;
    *(undefined8 *)(param_1 + 0x530) = 0;
    *(undefined8 *)(param_1 + 0x538) = 0;
    *(undefined8 *)(param_1 + 0x540) = 0;
    *(undefined8 *)(param_1 + 0x548) = 0;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x30);
    if (*(longlong *)(param_1 + 0x58) != 0) {
      FUN_144b59b40();
    }
    FUN_144b56350(uVar2,*(undefined8 *)(param_1 + 0x50));
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  if (*(longlong *)(param_1 + 0x4f0) != 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x4f0) + 0x30);
    if (*(longlong *)(param_1 + 0x518) != 0) {
      FUN_144b59b40();
    }
    FUN_144b56350(uVar2,*(undefined8 *)(param_1 + 0x510));
    *(undefined8 *)(param_1 + 0x4f0) = 0;
    *(undefined8 *)(param_1 + 0x4f8) = 0;
    *(undefined8 *)(param_1 + 0x500) = 0;
    *(undefined8 *)(param_1 + 0x508) = 0;
    *(undefined8 *)(param_1 + 0x510) = 0;
    *(undefined8 *)(param_1 + 0x518) = 0;
  }
  if (*(int *)(param_1 + 0x8b0) != 0) {
    do {
      FUN_144dfcc50(uVar1,*(undefined8 *)(param_1 + 0x8b8 + uVar3 * 8));
      uVar4 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 0x8b0));
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x8b8));
    *(undefined8 *)(param_1 + 0x8b8) = 0;
  }
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x30);
  FUN_144b56350(uVar2,*(undefined8 *)(param_1 + 0x4e0));
  *(undefined8 *)(param_1 + 0x4e0) = 0;
  *(undefined4 *)(param_1 + 0x4e8) = 0;
  FUN_144b56350(uVar2,*(undefined8 *)(param_1 + 0x4d8));
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  *(undefined8 *)(param_1 + 0x4d0) = 0;
  FUN_144dfbf10(param_1 + 0x1118,uVar1);
  FUN_144dfcc50(uVar1,param_1 + 0x5e0);
  if (*(longlong *)(param_1 + 0x10c0) != 0) {
    FUN_144b59b40(*(undefined8 *)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 0x10c8) = 0;
  *(undefined1 *)(param_1 + 0x10b8) = 0;
  *(undefined4 *)(param_1 + 0x10bc) = 0;
  FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x10f0));
  *(undefined8 *)(param_1 + 0x10f0) = 0;
  FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x5b0));
  *(undefined8 *)(param_1 + 0x5b0) = 0;
  FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x5b8));
  *(undefined8 *)(param_1 + 0x5b8) = 0;
  FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x5c8));
  *(undefined8 *)(param_1 + 0x5c8) = 0;
  FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x5d0));
  *(undefined8 *)(param_1 + 0x5d0) = 0;
  if (*(code **)(param_1 + 0x1110) != (code *)0x0) {
    (**(code **)(param_1 + 0x1110))(*(undefined8 *)(param_1 + 0x1108));
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x1108));
    *(undefined8 *)(param_1 + 0x1108) = 0;
  }
  FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x1138));
  *(undefined8 *)(param_1 + 0x1138) = 0;
  return;
}



// FUNCTION 144dfa1a0 FUN_144dfa1a0 body=774 status=ok
// SIG undefined FUN_144dfa1a0(void)

int FUN_144dfa1a0(longlong param_1,longlong param_2,uint param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar13;
  ulonglong local_res10;
  int local_res18 [2];
  ulonglong uVar12;
  
  uVar10 = *(int *)(param_1 + 600) * param_3;
  local_res10 = (ulonglong)param_3;
  local_res18[0] = 0;
  uVar11 = (uint)((*(longlong *)(param_2 + 0x28) - *(longlong *)(param_2 + 0x20)) + -8 >> 3);
  if (uVar11 < uVar10) {
    return 0xa1;
  }
  uVar4 = *(uint *)(param_1 + 0x28c);
  iVar5 = param_3 * 5;
  if (uVar4 < (uint)(*(int *)(param_1 + 0x288) + iVar5)) {
    uVar12 = *(ulonglong *)(param_1 + 0x278);
    uVar1 = *(ulonglong *)(param_1 + 0x280);
    uVar7 = FUN_144b561b0(*(undefined8 *)(*(longlong *)(param_1 + 0x240) + 0x10),1,uVar4,
                          uVar4 + iVar5,uVar12,local_res18);
    *(ulonglong *)(param_1 + 0x278) = uVar7;
    if (local_res18[0] != 0) {
      return local_res18[0];
    }
    *(int *)(param_1 + 0x28c) = *(int *)(param_1 + 0x28c) + iVar5;
    *(ulonglong *)(param_1 + 0x280) = *(uint *)(param_1 + 0x288) + uVar7;
    if ((uVar12 != 0) && (uVar7 != uVar12)) {
      puVar8 = *(ulonglong **)(param_2 + 0x20);
      if (puVar8 < *(ulonglong **)(param_2 + 0x28)) {
        do {
          uVar2 = *puVar8;
          if ((uVar12 <= uVar2) && (uVar2 < uVar1)) {
            *puVar8 = uVar2 + (uVar7 - uVar12);
          }
          puVar8 = puVar8 + 1;
        } while (puVar8 < *(ulonglong **)(param_2 + 0x28));
      }
    }
  }
  *(int *)(param_1 + 0x288) = *(int *)(param_1 + 0x288) + iVar5;
  uVar11 = uVar11 - uVar10;
  uVar4 = param_3 + uVar11;
  uVar10 = uVar4;
  if (param_3 != 0) {
    do {
      uVar12 = (ulonglong)uVar11;
      piVar13 = *(int **)(param_1 + 0x260);
      pcVar3 = *(char **)(uVar12 * 8 + *(longlong *)(param_2 + 0x20));
      if (*pcVar3 == '\x1e') {
        iVar5 = FUN_144dfafe0(pcVar3,*(undefined8 *)(param_2 + 0x10),0,0);
        iVar5 = iVar5 >> 0x10;
      }
      else if (*pcVar3 == -1) {
        iVar5 = (int)(short)(CONCAT21(CONCAT11(pcVar3[1],pcVar3[2]),pcVar3[3]) + 0x80 >> 8);
      }
      else {
        iVar5 = FUN_144dfaf30(pcVar3,*(undefined8 *)(param_2 + 0x10));
      }
      iVar5 = iVar5 << 0x10;
      if (1 < *(uint *)(param_1 + 600)) {
        uVar9 = 1;
        do {
          piVar13 = piVar13 + 1;
          pcVar3 = *(char **)(*(longlong *)(param_2 + 0x20) + (ulonglong)uVar10 * 8);
          if (*pcVar3 == '\x1e') {
            iVar6 = FUN_144dfafe0(pcVar3,*(undefined8 *)(param_2 + 0x10),0,0);
            iVar6 = iVar6 >> 0x10;
          }
          else if (*pcVar3 == -1) {
            iVar6 = (int)(short)(CONCAT21(CONCAT11(pcVar3[1],pcVar3[2]),pcVar3[3]) + 0x80 >> 8);
          }
          else {
            iVar6 = FUN_144dfaf30(pcVar3,*(undefined8 *)(param_2 + 0x10));
          }
          uVar10 = uVar10 + 1;
          uVar9 = uVar9 + 1;
          iVar5 = iVar5 + *piVar13 * iVar6;
        } while (uVar9 < *(uint *)(param_1 + 600));
      }
      uVar11 = uVar11 + 1;
      *(undefined8 *)(uVar12 * 8 + *(longlong *)(param_2 + 0x20)) = *(undefined8 *)(param_1 + 0x280)
      ;
      **(undefined1 **)(param_1 + 0x280) = 0xff;
      *(longlong *)(param_1 + 0x280) = *(longlong *)(param_1 + 0x280) + 1;
      **(undefined1 **)(param_1 + 0x280) = (char)((uint)iVar5 >> 0x18);
      *(longlong *)(param_1 + 0x280) = *(longlong *)(param_1 + 0x280) + 1;
      **(undefined1 **)(param_1 + 0x280) = (char)((uint)iVar5 >> 0x10);
      *(longlong *)(param_1 + 0x280) = *(longlong *)(param_1 + 0x280) + 1;
      **(undefined1 **)(param_1 + 0x280) = (char)((uint)iVar5 >> 8);
      *(longlong *)(param_1 + 0x280) = *(longlong *)(param_1 + 0x280) + 1;
      **(undefined1 **)(param_1 + 0x280) = (char)iVar5;
      *(longlong *)(param_1 + 0x280) = *(longlong *)(param_1 + 0x280) + 1;
      local_res10 = local_res10 - 1;
    } while (local_res10 != 0);
  }
  *(ulonglong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x20) + (ulonglong)uVar4 * 8;
  return local_res18[0];
}



// FUNCTION 144dfa510 FUN_144dfa510 body=103 status=ok
// SIG undefined FUN_144dfa510(void)

void FUN_144dfa510(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0xd0) + 0x50);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1[1],param_2,&local_18);
    *param_3 = local_18;
    *param_4 = local_10;
    return;
  }
  FUN_144df9520(*(longlong *)(param_1 + 1000) + 0x4f0);
  return;
}



// FUNCTION 144dfa580 FUN_144dfa580 body=94 status=ok
// SIG undefined FUN_144dfa580(void)

void FUN_144dfa580(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 0x50);
  if (plVar1 != (longlong *)0x0) {
    local_18 = *param_2;
    local_10 = param_3;
    (**(code **)(*plVar1 + 8))(plVar1[1],&local_18);
    return;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 1000) + 0x518) == 0) {
    FUN_144b59b40(*(undefined8 *)(*(longlong *)(param_1 + 1000) + 0x4f0));
    return;
  }
  return;
}



// FUNCTION 144dfa5e0 FUN_144dfa5e0 body=2357 status=ok
// SIG undefined FUN_144dfa5e0(void)

void FUN_144dfa5e0(longlong param_1,longlong *param_2,uint param_3,uint param_4)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  byte bVar9;
  char cVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  ulonglong uVar18;
  undefined1 auStack_948 [32];
  uint *local_928;
  undefined8 local_920;
  code *local_918;
  code *local_910;
  ushort local_908 [2];
  char local_904;
  uint local_900;
  short local_8fc [2];
  uint local_8f8;
  undefined8 local_8f0;
  undefined8 *local_8e8;
  longlong *local_8e0;
  undefined8 local_8d8;
  undefined8 local_8d0;
  uint local_8c8;
  undefined1 local_8b8 [56];
  uint local_880;
  int local_878;
  int local_874;
  byte local_85e;
  longlong local_858;
  code *local_840;
  undefined4 local_550;
  undefined1 local_547;
  undefined8 local_468;
  int local_460;
  int local_45c;
  undefined8 local_458;
  ushort local_450;
  short local_44e;
  short local_44c;
  ushort local_44a;
  int local_448;
  int iStack_444;
  int iStack_440;
  int iStack_43c;
  undefined1 local_438 [992];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_948;
  lVar3 = *(longlong *)(param_1 + 8);
  uVar18 = (ulonglong)param_3;
  local_904 = '\0';
  local_468 = *(ulonglong *)(lVar3 + 0x2f0);
  lVar4 = *(longlong *)(lVar3 + 1000);
  local_8e8 = *(undefined8 **)(local_468 + 0x50);
  uVar15 = 0;
  local_8e0 = param_2;
  if ((*(int *)(lVar4 + 0x664) == 0xffff) || (*(longlong *)(lVar4 + 0x4e0) == 0)) {
    if (*(uint *)(lVar4 + 0x20) <= param_3) goto LAB_144dfaf06;
  }
  else if (param_3 != 0) {
    if (param_3 <= *(uint *)(lVar4 + 0x4e8)) {
      uVar15 = (uint)*(ushort *)(*(longlong *)(lVar4 + 0x4e0) + uVar18 * 2);
    }
    uVar18 = (ulonglong)uVar15;
    if (uVar15 == 0) goto LAB_144dfaf06;
  }
  if ((param_4 >> 10 & 1) != 0) {
    param_4 = param_4 | 3;
  }
  *(undefined4 *)(param_1 + 0xfc) = 0x10000;
  *(undefined4 *)(param_1 + 0x100) = 0x10000;
  if (param_2 != (longlong *)0x0) {
    *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(int *)(param_1 + 0x100) = (int)param_2[4];
    lVar5 = *(longlong *)(*param_2 + 0x2d0);
    if ((((int)param_2[8] != -1) && (*(longlong *)(lVar5 + 0xc0) != 0)) && ((param_4 & 8) == 0)) {
      local_918 = (code *)&local_458;
      local_920 = param_1 + 0x68;
      local_928 = *(uint **)(*param_2 + 0xa0);
      iVar11 = (**(code **)(lVar5 + 0x90))(lVar3,(int)param_2[8],uVar18,param_4);
      if (iVar11 == 0) {
        *(uint *)(param_1 + 0x30) = (uint)local_458._2_2_ << 6;
        *(uint *)(param_1 + 0x34) = (uint)(ushort)local_458 << 6;
        *(int *)(param_1 + 0x38) = (int)local_458._4_2_ << 6;
        *(int *)(param_1 + 0x3c) = (int)local_458._6_2_ << 6;
        *(uint *)(param_1 + 0x40) = (uint)local_450 << 6;
        *(int *)(param_1 + 0x44) = (int)local_44e << 6;
        *(int *)(param_1 + 0x48) = (int)local_44c << 6;
        *(undefined4 *)(param_1 + 0x98) = 0;
        *(uint *)(param_1 + 0x4c) = (uint)local_44a << 6;
        *(undefined4 *)(param_1 + 0x60) = 0x62697473;
        if ((param_4 & 0x10) == 0) {
          *(int *)(param_1 + 0x90) = (int)local_458._4_2_;
          *(int *)(param_1 + 0x94) = (int)local_458._6_2_;
        }
        else {
          *(int *)(param_1 + 0x90) = (int)local_44e;
          *(int *)(param_1 + 0x94) = (int)local_44c;
        }
        local_928 = (uint *)local_908;
        (**(code **)(*(longlong *)(lVar3 + 0x2d0) + 0x118))(lVar3,0,uVar18,&local_900);
        *(uint *)(param_1 + 0x50) = (uint)local_908[0];
        if ((*(char *)(lVar3 + 400) == '\0') || (*(short *)(lVar3 + 0x1ba) == 0)) {
          if (*(short *)(lVar3 + 0x208) == -1) {
            *(int *)(param_1 + 0x54) =
                 (int)*(short *)(lVar3 + 0x13c) - (int)*(short *)(lVar3 + 0x13e);
          }
          else {
            *(int *)(param_1 + 0x54) =
                 (int)*(short *)(lVar3 + 0x24e) - (int)*(short *)(lVar3 + 0x250);
          }
        }
        else {
          local_928 = (uint *)local_908;
          (**(code **)(*(longlong *)(lVar3 + 0x2d0) + 0x118))(lVar3,1,uVar18,&local_900);
          *(uint *)(param_1 + 0x54) = (uint)local_908[0];
        }
        goto LAB_144dfaf06;
      }
    }
  }
  if ((param_4 >> 0xe & 1) == 0) {
    if (*(int *)(lVar4 + 0x8b0) == 0) {
      local_448 = *(int *)(lVar4 + 0x610);
      iStack_444 = *(int *)(lVar4 + 0x614);
      iStack_440 = *(int *)(lVar4 + 0x618);
      iStack_43c = *(int *)(lVar4 + 0x61c);
      uVar16 = *(ulonglong *)(lVar4 + 0x628);
      local_8d8 = uVar16;
    }
    else {
      bVar9 = FUN_144df7700(lVar4 + 0x10b8,uVar18);
      if (*(uint *)(lVar4 + 0x8b0) <= (uint)bVar9) {
        bVar9 = *(char *)(lVar4 + 0x8b0) - 1;
      }
      local_900 = *(uint *)(lVar4 + 0x624);
      lVar5 = lVar4 + (ulonglong)bVar9 * 8;
      lVar6 = *(longlong *)(lVar5 + 0x8b8);
      local_8f8 = *(uint *)(lVar6 + 0x44);
      local_448 = *(int *)(lVar6 + 0x30);
      iStack_444 = *(int *)(lVar6 + 0x34);
      iStack_440 = *(int *)(lVar6 + 0x38);
      iStack_43c = *(int *)(lVar6 + 0x3c);
      uVar16 = *(ulonglong *)(*(longlong *)(lVar5 + 0x8b8) + 0x48);
      local_8d8 = uVar16;
      if (local_900 != local_8f8) {
        uVar12 = FUN_144b55580(*(undefined4 *)(param_1 + 0xfc),local_900,local_8f8);
        *(undefined4 *)(param_1 + 0xfc) = uVar12;
        uVar12 = FUN_144b55580(*(undefined4 *)(param_1 + 0x100),local_900,local_8f8);
        *(undefined4 *)(param_1 + 0x100) = uVar12;
        local_904 = '\x01';
      }
    }
    *(undefined4 *)(param_1 + 0x60) = 0x6f75746c;
    *(undefined2 *)(param_1 + 0x9a) = 0;
    local_458 = (undefined2 *)(param_1 + 0x98);
    *local_458 = 0;
    local_910 = FUN_144dfa580;
    *(byte *)(param_1 + 0xf9) = ~(byte)param_4 & 1;
    local_8f8 = CONCAT31((uint3)(param_4 >> 9),~(byte)(param_4 >> 1)) & 0xffffff01;
    local_918 = FUN_144dfa510;
    *(char *)(param_1 + 0xf8) = (char)local_8f8;
    local_920 = CONCAT44(local_920._4_4_,(int)param_4 >> 0x10) & 0xffffffff0000000f;
    local_928 = (uint *)CONCAT71(local_928._1_7_,(char)local_8f8);
    (*(code *)*local_8e8)(local_8b8,lVar3,param_2,param_1);
    if ((param_4 & 0x100) != 0) {
      local_547 = 1;
    }
    local_85e = (byte)(param_4 >> 10) & 1;
    puVar7 = *(undefined8 **)(*(longlong *)(lVar3 + 0xd0) + 0x50);
    if (puVar7 == (undefined8 *)0x0) {
      iVar11 = FUN_144df9520(*(longlong *)(lVar3 + 1000) + 0x4f0,uVar18,&local_8f0,&local_900);
    }
    else {
      iVar11 = (**(code **)*puVar7)(puVar7[1],uVar18,&local_8d0);
      local_8f0 = local_8d0;
      local_900 = local_8c8;
    }
    if ((iVar11 == 0) && (iVar11 = (*(code *)local_8e8[1])(local_8b8,local_8e0,uVar18), iVar11 == 0)
       ) {
      (**(code **)(local_468 + 0x30))(local_438,local_8b8,0);
      iVar11 = (*(code *)local_8e8[2])(local_438,local_8f0,local_900);
      if ((char)iVar11 == -0x5c) {
        local_8f8 = local_8f8 & 0xffffff00;
        local_904 = '\x01';
        *(undefined1 *)(param_1 + 0xf8) = 0;
        iVar11 = (*(code *)local_8e8[2])(local_438,local_8f0,local_900);
      }
      plVar8 = *(longlong **)(*(longlong *)(lVar3 + 0xd0) + 0x50);
      if (plVar8 == (longlong *)0x0) {
        if (*(longlong *)(*(longlong *)(lVar3 + 1000) + 0x518) == 0) {
          FUN_144b59b40(*(undefined8 *)(*(longlong *)(lVar3 + 1000) + 0x4f0),&local_8f0);
        }
      }
      else {
        local_8d0 = local_8f0;
        local_8c8 = local_900;
        (**(code **)(*plVar8 + 8))(plVar8[1],&local_8d0);
      }
      if (iVar11 == 0) {
        if (*(longlong *)(*(longlong *)(lVar3 + 0xd0) + 0x50) == 0) {
          if (*(longlong *)(lVar4 + 0x510) != 0) {
            *(ulonglong *)(param_1 + 0xd0) =
                 (ulonglong)*(uint *)(*(longlong *)(lVar4 + 0x510) + uVar18 * 4) +
                 *(longlong *)(lVar4 + 0x518) + -1;
            *(uint *)(param_1 + 0xd8) = local_900;
          }
        }
        else {
          *(undefined8 *)(param_1 + 0xd0) = 0;
          *(undefined4 *)(param_1 + 0xd8) = 0;
        }
        (*local_840)(local_8b8);
        plVar8 = *(longlong **)(*(longlong *)(lVar3 + 0xd0) + 0x50);
        if ((plVar8 != (longlong *)0x0) && (*(longlong *)(*plVar8 + 0x10) != 0)) {
          local_460 = local_878;
          local_45c = local_874;
          local_468 = (ulonglong)local_880;
          iVar11 = (**(code **)(*plVar8 + 0x10))(plVar8[1],uVar18,0,&local_468);
          local_878 = local_460;
          local_874 = local_45c;
          local_880 = (uint)local_468;
          if (iVar11 != 0) goto LAB_144dfaf06;
        }
        if ((param_4 >> 10 & 1) == 0) {
          if (*(short *)(lVar3 + 0x15a) == 0) {
            *(undefined4 *)(param_1 + 0x40) = local_550;
            *(undefined4 *)(param_1 + 0x50) = local_550;
          }
          else {
            local_928 = (uint *)local_908;
            local_8fc[0] = 0;
            local_908[0] = 0;
            (**(code **)(*(longlong *)(lVar3 + 0x2d0) + 0x118))(lVar3,0,uVar18,local_8fc);
            *(uint *)(param_1 + 0x40) = (uint)local_908[0];
            *(int *)(param_1 + 0x38) = (int)local_8fc[0];
            *(uint *)(param_1 + 0x50) = (uint)local_908[0];
          }
          *(undefined1 *)(*(longlong *)(param_1 + 0xf0) + 0xc) = 0;
          if ((*(char *)(lVar3 + 400) == '\0') || (*(short *)(lVar3 + 0x1ba) == 0)) {
            cVar10 = '\0';
          }
          else {
            cVar10 = '\x01';
          }
          local_908[0] = CONCAT11(local_908[0]._1_1_,cVar10);
          if (cVar10 == '\0') {
            if (*(short *)(lVar3 + 0x208) == -1) {
              sVar1 = *(short *)(lVar3 + 0x13e);
              sVar2 = *(short *)(lVar3 + 0x13c);
            }
            else {
              sVar1 = *(short *)(lVar3 + 0x250);
              sVar2 = *(short *)(lVar3 + 0x24e);
            }
            *(int *)(param_1 + 0x4c) = (int)sVar2 - (int)sVar1;
          }
          else {
            local_928 = &local_900;
            local_8fc[0] = 0;
            local_900 = local_900 & 0xffff0000;
            (**(code **)(*(longlong *)(lVar3 + 0x2d0) + 0x118))(lVar3,1,uVar18,local_8fc);
            *(int *)(param_1 + 0x48) = (int)local_8fc[0];
            *(uint *)(param_1 + 0x4c) = local_900 & 0xffff;
          }
          *(undefined4 *)(param_1 + 0xb8) = 0;
          *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x4c);
          *(undefined4 *)(param_1 + 0x60) = 0x6f75746c;
          if (local_8e0 != (longlong *)0x0) {
            uVar12 = *(undefined4 *)(param_1 + 0xb8);
            if (*(ushort *)((longlong)local_8e0 + 0x1a) < 0x18) {
              uVar12 = 0x100;
            }
            *(undefined4 *)(param_1 + 0xb8) = uVar12;
          }
          *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) | 4;
          if ((((local_448 != 0x10000) || (iStack_43c != 0x10000)) || (iStack_444 != 0)) ||
             (iStack_440 != 0)) {
            FUN_144b5aea0(param_1 + 0x98,&local_448);
            uVar12 = FUN_144b42fe0(*(undefined4 *)(param_1 + 0x40),local_448);
            *(undefined4 *)(param_1 + 0x40) = uVar12;
            uVar12 = FUN_144b42fe0(*(undefined4 *)(param_1 + 0x4c),iStack_43c);
            *(undefined4 *)(param_1 + 0x4c) = uVar12;
          }
          iVar11 = local_8d8._4_4_;
          if (((int)uVar16 != 0) || (local_8d8._4_4_ != 0)) {
            FUN_144b5ada0(param_1 + 0x98,uVar16 & 0xffffffff,local_8d8._4_4_);
            *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + (int)uVar16;
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar11;
          }
          if (((param_4 & 1) == 0) || (local_904 != '\0')) {
            puVar17 = *(undefined4 **)(param_1 + 0xa0);
            uVar12 = *(undefined4 *)(param_1 + 0x100);
            uVar14 = *(undefined4 *)(param_1 + 0xfc);
            if ((((char)local_8f8 == '\0') || (local_858 == 0)) &&
               (iVar11 = (int)*(short *)(param_1 + 0x9a), 0 < *(short *)(param_1 + 0x9a))) {
              do {
                uVar13 = FUN_144b42fe0(*puVar17,uVar14);
                *puVar17 = uVar13;
                uVar13 = FUN_144b42fe0(puVar17[1],uVar12);
                iVar11 = iVar11 + -1;
                puVar17[1] = uVar13;
                puVar17 = puVar17 + 2;
              } while (0 < iVar11);
            }
            uVar14 = FUN_144b42fe0(*(undefined4 *)(param_1 + 0x40),uVar14);
            *(undefined4 *)(param_1 + 0x40) = uVar14;
            uVar12 = FUN_144b42fe0(*(undefined4 *)(param_1 + 0x4c),uVar12);
            *(undefined4 *)(param_1 + 0x4c) = uVar12;
          }
          FUN_144b488a0(local_458,&local_468);
          *(uint *)(param_1 + 0x38) = (uint)local_468;
          *(int *)(param_1 + 0x30) = local_460 - (uint)local_468;
          *(int *)(param_1 + 0x34) = local_45c - local_468._4_4_;
          *(int *)(param_1 + 0x3c) = local_45c;
          if ((char)local_908[0] == '\0') {
            if ((param_4 & 0x10) != 0) {
              FUN_144b58340((int *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x4c));
            }
          }
          else {
            *(uint *)(param_1 + 0x44) = (uint)local_468 - *(int *)(param_1 + 0x40) / 2;
          }
        }
        else {
          lVar3 = *(longlong *)(param_1 + 0xf0);
          *(uint *)(param_1 + 0x38) = local_880;
          *(undefined4 *)(param_1 + 0x40) = local_550;
          *(int *)(lVar3 + 0x10) = local_448;
          *(int *)(lVar3 + 0x14) = iStack_444;
          *(int *)(lVar3 + 0x18) = iStack_440;
          *(int *)(lVar3 + 0x1c) = iStack_43c;
          *(ulonglong *)(lVar3 + 0x20) = uVar16;
          *(undefined1 *)(lVar3 + 0xc) = 1;
        }
      }
    }
  }
LAB_144dfaf06:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_948);
}



// FUNCTION 144dfaf30 FUN_144dfaf30 body=166 status=ok
// SIG undefined FUN_144dfaf30(void)

uint FUN_144dfaf30(byte *param_1,byte *param_2)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if (bVar1 == 0x1c) {
    if (param_1 + 3 <= param_2) {
      return (int)(short)((ushort)param_1[1] << 8) | (uint)param_1[2];
    }
  }
  else if (bVar1 == 0x1d) {
    if (param_1 + 5 <= param_2) {
      return CONCAT31(CONCAT21(CONCAT11(param_1[1],param_1[2]),param_1[3]),param_1[4]);
    }
  }
  else {
    if (bVar1 < 0xf7) {
      return bVar1 - 0x8b;
    }
    if (bVar1 < 0xfb) {
      if (param_1 + 2 <= param_2) {
        return (param_1[1] - 0xf694) + (uint)bVar1 * 0x100;
      }
    }
    else if (param_1 + 2 <= param_2) {
      return ((uint)bVar1 * -0x100 + 0xfa94) - (uint)param_1[1];
    }
  }
  return 0;
}



// FUNCTION 144dfafe0 FUN_144dfafe0 body=847 status=ok
// SIG undefined FUN_144dfafe0(void)

int FUN_144dfafe0(byte *param_1,byte *param_2,int param_3,int *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  
  iVar14 = 0;
  bVar2 = false;
  bVar1 = false;
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  uVar12 = 0;
  iVar8 = 0;
  iVar15 = 0;
  iVar9 = 0;
  iVar10 = 0;
  iVar4 = 4;
  while( true ) {
    while( true ) {
      if ((iVar4 != 0) && (param_1 = param_1 + 1, iVar5 = 0, param_2 <= param_1))
      goto LAB_144dfb154;
      bVar6 = *param_1 >> ((byte)iVar4 & 0x1f);
      iVar4 = 4 - iVar4;
      uVar7 = bVar6 & 0xf;
      if (uVar7 != 0xe) break;
      bVar2 = true;
    }
    if (9 < uVar7) break;
    iVar5 = (int)uVar12;
    if (iVar5 < 0xccccccc) {
      if (((bVar6 & 0xf) != 0) || (iVar5 != 0)) {
        iVar9 = iVar9 + 1;
        uVar12 = (ulonglong)(uVar7 + iVar5 * 10);
      }
    }
    else {
      iVar15 = iVar15 + 1;
    }
  }
  iVar5 = iVar14;
  if (uVar7 == 10) {
    while( true ) {
      if ((iVar4 != 0) && (param_1 = param_1 + 1, param_2 <= param_1)) goto LAB_144dfb154;
      bVar6 = *param_1 >> ((byte)iVar4 & 0x1f);
      iVar4 = 4 - iVar4;
      uVar7 = bVar6 & 0xf;
      if (9 < uVar7) break;
      iVar14 = (int)uVar12;
      if (((bVar6 & 0xf) == 0) && (iVar14 == 0)) {
        iVar15 = iVar15 + -1;
      }
      else if ((iVar14 < 0xccccccc) && (iVar10 < 9)) {
        iVar10 = iVar10 + 1;
        uVar12 = (ulonglong)(uVar7 + iVar14 * 10);
      }
    }
  }
  iVar11 = (int)uVar12;
  iVar14 = 0;
  bVar3 = false;
  if (uVar7 - 0xb < 2) {
    while( true ) {
      bVar1 = bVar3;
      iVar8 = iVar14;
      if ((iVar4 != 0) && (param_1 = param_1 + 1, param_2 <= param_1)) goto LAB_144dfb154;
      bVar6 = (byte)iVar4;
      iVar4 = 4 - iVar4;
      uVar13 = *param_1 >> (bVar6 & 0x1f) & 0xf;
      if (9 < uVar13) break;
      if (iVar8 < 0x3e9) {
        iVar14 = uVar13 + iVar8 * 10;
        bVar3 = bVar1;
      }
      else {
        iVar14 = iVar8;
        bVar3 = true;
      }
    }
    if (uVar7 == 0xc) {
      iVar8 = -iVar8;
    }
  }
  if (iVar11 == 0) goto LAB_144dfb154;
  if (bVar1) {
    if (uVar7 == 0xc) goto LAB_144dfb154;
  }
  else {
    iVar8 = iVar8 + iVar15 + param_3;
    if (param_4 != (int *)0x0) {
      iVar10 = iVar10 + iVar9;
      iVar8 = iVar8 + iVar9;
      if (5 < iVar10) {
        if (iVar11 / *(int *)(&DAT_149a0bc48 + (longlong)(iVar10 + -5) * 4) < 0x8000) {
          iVar5 = FUN_144b555e0(uVar12,*(int *)(&DAT_149a0bc48 + (longlong)(iVar10 + -5) * 4));
          *param_4 = iVar8 + -5;
        }
        else {
          iVar5 = FUN_144b555e0(uVar12,*(undefined4 *)(&DAT_149a0bc48 + (longlong)(iVar10 + -4) * 4)
                               );
          *param_4 = iVar8 + -4;
        }
        goto LAB_144dfb154;
      }
      if (0x7fff < iVar11) {
        iVar5 = FUN_144b555e0(uVar12,10);
        *param_4 = (iVar8 - iVar10) + 1;
        goto LAB_144dfb154;
      }
      if (iVar8 < 1) {
LAB_144dfb211:
        iVar8 = iVar8 - iVar10;
      }
      else {
        iVar14 = 5;
        if (iVar8 < 5) {
          iVar14 = iVar8;
        }
        if (iVar14 - iVar10 < 1) goto LAB_144dfb211;
        iVar8 = iVar8 - iVar14;
        iVar11 = iVar11 * *(int *)(&DAT_149a0bc48 + (longlong)(iVar14 - iVar10) * 4);
        if (0x7fff < iVar11) {
          *param_4 = iVar8 + 1;
          iVar5 = (iVar11 / 10) * 0x10000;
          goto LAB_144dfb154;
        }
      }
      *param_4 = iVar8;
      iVar5 = iVar11 << 0x10;
      goto LAB_144dfb154;
    }
    iVar9 = iVar9 + iVar8;
    iVar10 = iVar10 - iVar8;
    if (iVar9 < 6) {
      if (iVar9 < -5) goto LAB_144dfb154;
      if (iVar9 < 0) {
        iVar10 = iVar10 + iVar9;
        uVar12 = (longlong)iVar11 / (longlong)*(int *)(&DAT_149a0bc48 + (longlong)iVar9 * -4) &
                 0xffffffff;
      }
      if (iVar10 == 10) {
        iVar10 = 9;
        uVar12 = (ulonglong)(uint)((int)uVar12 / 10);
      }
      else if (iVar10 < 1) {
        iVar5 = (int)uVar12 * *(int *)(&DAT_149a0bc48 + (longlong)iVar10 * -4);
        if (iVar5 < 0x8000) {
          iVar5 = iVar5 * 0x10000;
          goto LAB_144dfb154;
        }
        goto LAB_144dfb14e;
      }
      if ((int)uVar12 / *(int *)(&DAT_149a0bc48 + (longlong)iVar10 * 4) < 0x8000) {
        iVar5 = FUN_144b555e0(uVar12,*(int *)(&DAT_149a0bc48 + (longlong)iVar10 * 4));
      }
      goto LAB_144dfb154;
    }
  }
LAB_144dfb14e:
  iVar5 = 0x7fffffff;
LAB_144dfb154:
  iVar14 = -iVar5;
  if (!bVar2) {
    iVar14 = iVar5;
  }
  return iVar14;
}



// FUNCTION 144dfb330 FUN_144dfb330 body=202 status=ok
// SIG undefined FUN_144dfb330(void)

ulonglong FUN_144dfb330(longlong param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  ulonglong uVar4;
  int *piVar5;
  int iVar6;
  
  pcVar2 = (char *)*param_2;
  if (*pcVar2 == '\x1e') {
    uVar4 = FUN_144dfafe0(pcVar2,*(undefined8 *)(param_1 + 0x10),0,param_3);
    return uVar4;
  }
  iVar3 = FUN_144dfaf30(pcVar2,param_2[1]);
  if (iVar3 < 0x8000) {
    *param_3 = 0;
    return (ulonglong)(uint)(iVar3 << 0x10);
  }
  piVar5 = &DAT_149a0bc5c;
  iVar6 = 5;
  do {
    if (iVar3 < *piVar5) break;
    iVar6 = iVar6 + 1;
    piVar5 = piVar5 + 1;
  } while ((longlong)piVar5 < 0x149a0bc70);
  iVar1 = *(int *)(&DAT_149a0bc48 + (longlong)(iVar6 + -5) * 4);
  if (0x7fff < iVar3 / iVar1) {
    *param_3 = iVar6 + -4;
    uVar4 = FUN_144b555e0(iVar3,*(undefined4 *)(&DAT_149a0bc48 + (longlong)(iVar6 + -4) * 4));
    return uVar4;
  }
  *param_3 = iVar6 + -5;
  uVar4 = FUN_144b555e0(iVar3,iVar1);
  return uVar4;
}



// FUNCTION 144dfb400 FUN_144dfb400 body=419 status=ok
// SIG undefined FUN_144dfb400(void)

ulonglong FUN_144dfb400(longlong *param_1,longlong param_2,char param_3,char param_4)

{
  undefined8 uVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  ulonglong uVar8;
  byte local_res8 [8];
  uint local_res20 [2];
  
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = param_2;
  uVar4 = FUN_144b59870(param_2);
  *(undefined4 *)(param_1 + 1) = uVar4;
  if (param_4 == '\0') {
    uVar3 = FUN_144b59d40(param_2,local_res20);
    uVar5 = (uint)uVar3;
    if (local_res20[0] != 0) goto LAB_144dfb578;
    *(undefined4 *)((longlong)param_1 + 0xc) = 3;
  }
  else {
    uVar5 = FUN_144b59e60();
    if (local_res20[0] != 0) goto LAB_144dfb578;
    *(undefined4 *)((longlong)param_1 + 0xc) = 5;
  }
  if (uVar5 == 0) {
    return (ulonglong)local_res20[0];
  }
  bVar2 = FUN_144b59cc0(param_2,local_res20);
  if (local_res20[0] != 0) goto LAB_144dfb578;
  if ((byte)(bVar2 - 1) < 4) {
    iVar7 = (uVar5 + 1) * (uint)bVar2;
    *(uint *)(param_1 + 2) = uVar5;
    *(byte *)((longlong)param_1 + 0x14) = bVar2;
    *(int *)(param_1 + 3) = *(int *)((longlong)param_1 + 0xc) + iVar7 + (int)param_1[1];
    local_res20[0] = FUN_144b597f0(param_2,iVar7 - (uint)bVar2);
    if (local_res20[0] != 0) goto LAB_144dfb578;
    uVar5 = 0;
    local_res20[0] = FUN_144b59880(*param_1,local_res8,*(undefined1 *)((longlong)param_1 + 0x14));
    if ((local_res20[0] == 0) && (*(byte *)((longlong)param_1 + 0x14) != 0)) {
      pbVar6 = local_res8;
      uVar8 = (ulonglong)*(byte *)((longlong)param_1 + 0x14);
      do {
        bVar2 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        uVar5 = uVar5 << 8 | (uint)bVar2;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    if (local_res20[0] != 0) goto LAB_144dfb578;
    if (uVar5 != 0) {
      *(uint *)((longlong)param_1 + 0x1c) = uVar5 - 1;
      if (param_3 == '\0') {
        uVar8 = FUN_144b597f0(param_2);
        local_res20[0] = (uint)uVar8;
      }
      else {
        uVar8 = FUN_144b59b00(param_2,uVar5 - 1,param_1 + 5);
        local_res20[0] = (uint)uVar8;
      }
      if (local_res20[0] == 0) {
        return uVar8;
      }
      goto LAB_144dfb578;
    }
  }
  local_res20[0] = 8;
LAB_144dfb578:
  FUN_144b56350(uVar1,param_1[4]);
  param_1[4] = 0;
  return (ulonglong)local_res20[0];
}



// FUNCTION 144dfb5b0 FUN_144dfb5b0 body=98 status=ok
// SIG undefined FUN_144dfb5b0(void)

void FUN_144dfb5b0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    if (param_1[5] != 0) {
      FUN_144b59b40(lVar1,param_1 + 5);
    }
    FUN_144b56350(uVar2,param_1[4]);
    param_1[4] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  return;
}



// FUNCTION 144dfb620 FUN_144dfb620 body=472 status=ok
// SIG undefined FUN_144dfb620(void)

int FUN_144dfb620(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint *puVar4;
  longlong lVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  int local_res8 [2];
  
  lVar2 = *param_1;
  local_res8[0] = 0;
  uVar3 = *(undefined8 *)(lVar2 + 0x30);
  if (((int)param_1[2] == 0) || (param_1[4] != 0)) {
    return 0;
  }
  iVar8 = (int)param_1[2] + 1;
  bVar1 = *(byte *)((longlong)param_1 + 0x14);
  uVar7 = (uint)bVar1 * iVar8;
  lVar5 = FUN_144b561b0(uVar3,4,0,iVar8,0,local_res8);
  param_1[4] = lVar5;
  if (((local_res8[0] == 0) &&
      (local_res8[0] = FUN_144b597a0(lVar2,*(int *)((longlong)param_1 + 0xc) + (int)param_1[1]),
      local_res8[0] == 0)) && (local_res8[0] = FUN_144b59990(lVar2,uVar7), local_res8[0] == 0)) {
    pbVar6 = *(byte **)(lVar2 + 0x38);
    puVar4 = (uint *)param_1[4];
    pbVar9 = pbVar6 + uVar7;
    if (bVar1 == 1) {
      for (; pbVar6 < pbVar9; pbVar6 = pbVar6 + 1) {
        *puVar4 = (uint)*pbVar6;
        puVar4 = puVar4 + 1;
      }
    }
    else if (bVar1 == 2) {
      for (; pbVar6 < pbVar9; pbVar6 = pbVar6 + 2) {
        *puVar4 = (uint)CONCAT11(*pbVar6,pbVar6[1]);
        puVar4 = puVar4 + 1;
      }
    }
    else if (bVar1 == 3) {
      for (; pbVar6 < pbVar9; pbVar6 = pbVar6 + 3) {
        *puVar4 = (uint)CONCAT21(CONCAT11(*pbVar6,pbVar6[1]),pbVar6[2]);
        puVar4 = puVar4 + 1;
      }
    }
    else {
      for (; pbVar6 < pbVar9; pbVar6 = pbVar6 + 4) {
        *puVar4 = CONCAT31(CONCAT21(CONCAT11(*pbVar6,pbVar6[1]),pbVar6[2]),pbVar6[3]);
        puVar4 = puVar4 + 1;
      }
    }
    FUN_144b59ab0(lVar2);
    if (local_res8[0] == 0) {
      return 0;
    }
  }
  FUN_144b56350(uVar3,param_1[4]);
  param_1[4] = 0;
  return local_res8[0];
}



// FUNCTION 144dfb800 FUN_144dfb800 body=447 status=ok
// SIG undefined FUN_144dfb800(void)

ulonglong FUN_144dfb800(longlong *param_1,undefined8 *param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint local_res8 [2];
  undefined8 *local_res10;
  longlong local_40;
  
  uVar9 = 0;
  local_40 = 0;
  local_res8[0] = 0;
  uVar3 = *(undefined8 *)(*param_1 + 0x30);
  *param_2 = 0;
  uVar7 = uVar9;
  local_res10 = param_2;
  if (param_1[4] == 0) {
    uVar5 = FUN_144dfb620(param_1);
    local_res8[0] = (uint)uVar5;
    uVar7 = uVar5 & 0xffffffff;
    if (local_res8[0] != 0) {
      return uVar5;
    }
  }
  iVar2 = (int)param_1[2];
  iVar10 = *(int *)((longlong)param_1 + 0x1c) + iVar2;
  if (iVar2 != 0) {
    plVar6 = (longlong *)FUN_144b561b0(uVar3,8,0,iVar2 + 1,0,local_res8);
    uVar7 = (ulonglong)local_res8[0];
    if (local_res8[0] == 0) {
      if (param_3 != (longlong *)0x0) {
        local_40 = FUN_144b560d0(uVar3,iVar10,local_res8);
        if (local_res8[0] != 0) {
          return (ulonglong)local_res8[0];
        }
      }
      lVar4 = param_1[5];
      lVar13 = local_40;
      if (param_3 == (longlong *)0x0) {
        lVar13 = lVar4;
      }
      uVar11 = 1;
      *plVar6 = lVar13;
      uVar7 = uVar9;
      if ((int)param_1[2] != 0) {
        do {
          uVar12 = (ulonglong)uVar11;
          uVar8 = *(int *)(param_1[4] + uVar12 * 4) - 1;
          uVar5 = uVar7;
          if ((uint)uVar7 <= uVar8) {
            uVar5 = (ulonglong)uVar8;
            if (*(uint *)((longlong)param_1 + 0x1c) < uVar8) {
              uVar5 = (ulonglong)*(uint *)((longlong)param_1 + 0x1c);
            }
          }
          if (param_3 == (longlong *)0x0) {
            plVar6[uVar12] = uVar5 + lVar4;
          }
          else {
            lVar13 = uVar9 + uVar5 + local_40;
            plVar1 = plVar6 + uVar12;
            *plVar1 = lVar13;
            if ((uint)uVar5 != (uint)uVar7) {
              memcpy((void *)plVar6[uVar11 - 1],(void *)(uVar7 + lVar4),lVar13 - plVar6[uVar11 - 1])
              ;
              *(undefined1 *)*plVar1 = 0;
              *plVar1 = *plVar1 + 1;
              uVar9 = (ulonglong)((int)uVar9 + 1);
            }
          }
          uVar11 = uVar11 + 1;
          uVar7 = uVar5;
        } while (uVar11 <= *(uint *)(param_1 + 2));
      }
      *local_res10 = plVar6;
      if (param_3 != (longlong *)0x0) {
        *param_3 = local_40;
      }
      if (param_4 != (int *)0x0) {
        *param_4 = iVar10;
      }
      uVar7 = (ulonglong)local_res8[0];
    }
  }
  return uVar7;
}



// FUNCTION 144dfb9c0 FUN_144dfb9c0 body=223 status=ok
// SIG undefined FUN_144dfb9c0(void)

ulonglong FUN_144dfb9c0(char *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  ulonglong uVar4;
  uint local_18 [4];
  
  uVar4 = FUN_144b597a0(param_3,param_4);
  local_18[0] = (uint)uVar4;
  if (local_18[0] == 0) {
    cVar1 = FUN_144b59cc0(param_3,local_18);
    if (local_18[0] == 0) {
      *param_1 = cVar1;
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      if (cVar1 == '\0') {
        *(undefined4 *)(param_1 + 0x10) = param_2;
        uVar4 = FUN_144b59b00(param_3,param_2,param_1 + 8);
        return uVar4;
      }
      if (cVar1 != '\x03') {
        return 3;
      }
      uVar2 = FUN_144b59d40(param_3,local_18);
      if (local_18[0] == 0) {
        if (uVar2 == 0) {
          return 3;
        }
        iVar3 = (uint)uVar2 + (uint)uVar2 * 2 + 2;
        *(int *)(param_1 + 0x10) = iVar3;
        uVar4 = FUN_144b59b00(param_3,iVar3,param_1 + 8);
        return uVar4;
      }
    }
    uVar4 = (ulonglong)local_18[0];
  }
  return uVar4;
}



// FUNCTION 144dfbaa0 FUN_144dfbaa0 body=356 status=ok
// SIG undefined FUN_144dfbaa0(void)

int FUN_144dfbaa0(longlong param_1,uint param_2,undefined8 param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  undefined8 uVar9;
  int iVar10;
  ulonglong uVar11;
  ushort *puVar12;
  longlong lVar13;
  uint uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  ushort uVar20;
  ushort uVar21;
  ushort uVar22;
  ushort uVar23;
  ushort uVar24;
  ushort uVar25;
  ushort uVar26;
  ushort uVar27;
  ushort uVar28;
  ushort uVar29;
  ushort uVar30;
  int local_res8 [2];
  
  uVar11 = 0;
  uVar23 = 0;
  uVar14 = 0;
  local_res8[0] = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    return 0;
  }
  if (param_2 != 0) {
    if ((0xf < param_2) && (1 < DAT_14c707900)) {
      uVar15 = 0;
      uVar16 = 0;
      uVar17 = 0;
      uVar18 = 0;
      uVar19 = 0;
      uVar20 = 0;
      uVar21 = 0;
      uVar22 = 0;
      uVar23 = 0;
      uVar24 = 0;
      uVar25 = 0;
      uVar26 = 0;
      uVar27 = 0;
      uVar28 = 0;
      uVar29 = 0;
      uVar30 = 0;
      do {
        iVar10 = (int)uVar11;
        puVar12 = (ushort *)(*(longlong *)(param_1 + 8) + uVar11 * 2);
        uVar1 = *puVar12;
        uVar2 = puVar12[1];
        uVar3 = puVar12[2];
        uVar4 = puVar12[3];
        uVar5 = puVar12[4];
        uVar6 = puVar12[5];
        uVar7 = puVar12[6];
        uVar8 = puVar12[7];
        uVar14 = iVar10 + 0x10;
        uVar11 = (ulonglong)uVar14;
        uVar15 = (uVar15 < uVar1) * uVar1 | (uVar15 >= uVar1) * uVar15;
        uVar16 = (uVar16 < uVar2) * uVar2 | (uVar16 >= uVar2) * uVar16;
        uVar17 = (uVar17 < uVar3) * uVar3 | (uVar17 >= uVar3) * uVar17;
        uVar18 = (uVar18 < uVar4) * uVar4 | (uVar18 >= uVar4) * uVar18;
        uVar19 = (uVar19 < uVar5) * uVar5 | (uVar19 >= uVar5) * uVar19;
        uVar20 = (uVar20 < uVar6) * uVar6 | (uVar20 >= uVar6) * uVar20;
        uVar21 = (uVar21 < uVar7) * uVar7 | (uVar21 >= uVar7) * uVar21;
        uVar22 = (uVar22 < uVar8) * uVar8 | (uVar22 >= uVar8) * uVar22;
        puVar12 = (ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)(iVar10 + 8) * 2);
        uVar1 = *puVar12;
        uVar2 = puVar12[1];
        uVar3 = puVar12[2];
        uVar4 = puVar12[3];
        uVar5 = puVar12[4];
        uVar6 = puVar12[5];
        uVar7 = puVar12[6];
        uVar8 = puVar12[7];
        uVar23 = (uVar23 < uVar1) * uVar1 | (uVar23 >= uVar1) * uVar23;
        uVar24 = (uVar24 < uVar2) * uVar2 | (uVar24 >= uVar2) * uVar24;
        uVar25 = (uVar25 < uVar3) * uVar3 | (uVar25 >= uVar3) * uVar25;
        uVar26 = (uVar26 < uVar4) * uVar4 | (uVar26 >= uVar4) * uVar26;
        uVar27 = (uVar27 < uVar5) * uVar5 | (uVar27 >= uVar5) * uVar27;
        uVar28 = (uVar28 < uVar6) * uVar6 | (uVar28 >= uVar6) * uVar28;
        uVar29 = (uVar29 < uVar7) * uVar7 | (uVar29 >= uVar7) * uVar29;
        uVar30 = (uVar30 < uVar8) * uVar8 | (uVar30 >= uVar8) * uVar30;
      } while (uVar14 < (param_2 & 0xfffffff0));
      uVar23 = (uVar15 < uVar23) * uVar23 | (uVar15 >= uVar23) * uVar15;
      uVar24 = (uVar16 < uVar24) * uVar24 | (uVar16 >= uVar24) * uVar16;
      uVar25 = (uVar17 < uVar25) * uVar25 | (uVar17 >= uVar25) * uVar17;
      uVar26 = (uVar18 < uVar26) * uVar26 | (uVar18 >= uVar26) * uVar18;
      uVar27 = (uVar19 < uVar27) * uVar27 | (uVar19 >= uVar27) * uVar19;
      uVar28 = (uVar20 < uVar28) * uVar28 | (uVar20 >= uVar28) * uVar20;
      uVar29 = (uVar21 < uVar29) * uVar29 | (uVar21 >= uVar29) * uVar21;
      uVar30 = (uVar22 < uVar30) * uVar30 | (uVar22 >= uVar30) * uVar22;
      uVar23 = (uVar23 < uVar27) * uVar27 | (uVar23 >= uVar27) * uVar23;
      uVar24 = (uVar24 < uVar28) * uVar28 | (uVar24 >= uVar28) * uVar24;
      uVar25 = (uVar25 < uVar29) * uVar29 | (uVar25 >= uVar29) * uVar25;
      uVar26 = (uVar26 < uVar30) * uVar30 | (uVar26 >= uVar30) * uVar26;
      uVar23 = (uVar23 < uVar25) * uVar25 | (uVar23 >= uVar25) * uVar23;
      uVar24 = (uVar24 < uVar26) * uVar26 | (uVar24 >= uVar26) * uVar24;
      uVar23 = (uVar23 < uVar24) * uVar24 | (uVar23 >= uVar24) * uVar23;
    }
    if (uVar14 < param_2) {
      puVar12 = (ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar14 * 2);
      uVar11 = (ulonglong)(param_2 - uVar14);
      do {
        if (uVar23 < *puVar12) {
          uVar23 = *puVar12;
        }
        puVar12 = puVar12 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  uVar9 = FUN_144b561b0(param_3,2,0,uVar23 + 1,0,local_res8);
  *(undefined8 *)(param_1 + 0x10) = uVar9;
  if (local_res8[0] == 0) {
    iVar10 = param_2 - 1;
    if (-1 < iVar10) {
      lVar13 = (longlong)iVar10 * 2;
      do {
        lVar13 = lVar13 + -2;
        *(short *)(*(longlong *)(param_1 + 0x10) +
                  (ulonglong)*(ushort *)(*(longlong *)(param_1 + 8) + 2 + lVar13) * 2) =
             (short)iVar10;
        iVar10 = iVar10 + -1;
      } while (-1 < iVar10);
    }
    *(uint *)(param_1 + 0x18) = (uint)uVar23;
    *(uint *)(param_1 + 0x1c) = param_2;
  }
  return local_res8[0];
}



// FUNCTION 144dfbc10 FUN_144dfbc10 body=765 status=ok
// SIG undefined FUN_144dfbc10(void)

ulonglong FUN_144dfbc10(uint *param_1,uint param_2,longlong param_3,int param_4,uint param_5,
                       char param_6)

{
  undefined8 uVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  undefined2 uVar5;
  undefined2 *puVar6;
  void *_Dst;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  undefined *_Src;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint local_res18 [2];
  
  uVar1 = *(undefined8 *)(param_3 + 0x30);
  uVar7 = (ulonglong)param_2;
  local_res18[0] = 0;
  if (param_5 < 3) {
    param_1[1] = param_5;
    if (param_5 == 0) {
      if (param_2 < 0xe6) {
        _Dst = (void *)FUN_144b561b0(uVar1,2,0,uVar7,0,local_res18);
        *(void **)(param_1 + 2) = _Dst;
        if (local_res18[0] != 0) goto LAB_144dfbec6;
        _Src = &DAT_149a0b3d0;
        goto LAB_144dfbe98;
      }
    }
    else if (param_5 == 1) {
      if (param_2 < 0xa7) {
        _Dst = (void *)FUN_144b561b0(uVar1,2,0,uVar7,0,local_res18);
        *(void **)(param_1 + 2) = _Dst;
        if (local_res18[0] != 0) goto LAB_144dfbec6;
        _Src = &DAT_149a0b5a0;
        goto LAB_144dfbe98;
      }
    }
    else if ((param_5 == 2) && (param_2 < 0x58)) {
      _Dst = (void *)FUN_144b561b0(uVar1,2,0,uVar7,0,local_res18);
      *(void **)(param_1 + 2) = _Dst;
      if (local_res18[0] != 0) goto LAB_144dfbec6;
      _Src = &DAT_149a0b6f0;
LAB_144dfbe98:
      memcpy(_Dst,_Src,uVar7 * 2);
      goto LAB_144dfbea6;
    }
LAB_144dfbd66:
    local_res18[0] = 3;
  }
  else {
    param_1[1] = param_4 + param_5;
    local_res18[0] = FUN_144b597a0(param_3);
    if (local_res18[0] != 0) goto LAB_144dfbec6;
    bVar2 = FUN_144b59cc0(param_3,local_res18);
    *param_1 = (uint)bVar2;
    if (local_res18[0] != 0) goto LAB_144dfbec6;
    puVar6 = (undefined2 *)FUN_144b561b0(uVar1,2,0,uVar7,0,local_res18);
    *(undefined2 **)(param_1 + 2) = puVar6;
    if (local_res18[0] != 0) goto LAB_144dfbec6;
    *puVar6 = 0;
    if (*param_1 == 0) {
      if (param_2 != 0) {
        local_res18[0] = FUN_144b59990(param_3,param_2 * 2 + -2);
        if (local_res18[0] != 0) goto LAB_144dfbec6;
        if (1 < param_2) {
          uVar11 = (ulonglong)(param_2 - 1);
          lVar9 = 2;
          do {
            uVar5 = FUN_144b59ba0(param_3);
            *(undefined2 *)(lVar9 + *(longlong *)(param_1 + 2)) = uVar5;
            uVar11 = uVar11 - 1;
            lVar9 = lVar9 + 2;
          } while (uVar11 != 0);
        }
        FUN_144b59ab0(param_3);
      }
    }
    else {
      if (1 < *param_1 - 1) goto LAB_144dfbd66;
      uVar11 = 1;
      if (1 < param_2) {
        while (uVar3 = FUN_144b59d40(param_3,local_res18), local_res18[0] == 0) {
          if (*param_1 == 2) {
            uVar4 = FUN_144b59d40();
            uVar12 = (uint)uVar4;
          }
          else {
            bVar2 = FUN_144b59cc0(param_3,local_res18);
            uVar12 = (uint)bVar2;
          }
          if (local_res18[0] != 0) break;
          if (0xffff - uVar12 < (uint)uVar3) {
            uVar12 = 0xffff - uVar3;
          }
          lVar9 = uVar11 * 2;
          uVar8 = 0;
          while (uVar8 <= uVar12) {
            uVar8 = uVar8 + 1;
            uVar10 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar10;
            *(ushort *)(lVar9 + *(longlong *)(param_1 + 2)) = uVar3;
            lVar9 = lVar9 + 2;
            uVar3 = uVar3 + 1;
            if (param_2 <= uVar10) goto LAB_144dfbea6;
          }
        }
        goto LAB_144dfbec6;
      }
    }
LAB_144dfbea6:
    if (param_6 == '\0') {
      uVar7 = (ulonglong)local_res18[0];
    }
    else {
      uVar7 = FUN_144dfbaa0(param_1,uVar7,uVar1);
      local_res18[0] = (uint)uVar7;
    }
    if ((int)uVar7 == 0) {
      return uVar7;
    }
  }
LAB_144dfbec6:
  FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 2));
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 4));
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return (ulonglong)local_res18[0];
}



// FUNCTION 144dfbf10 FUN_144dfbf10 body=208 status=ok
// SIG undefined FUN_144dfbf10(void)

void FUN_144dfbf10(uint *param_1,undefined8 param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if ((*(longlong *)(param_1 + 6) != 0) && (uVar3 = 0, param_1[5] != 0)) {
    do {
      lVar1 = uVar3 * 8;
      FUN_144b56350(param_2,*(undefined8 *)(lVar1 + *(longlong *)(param_1 + 6)));
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      *(undefined8 *)(lVar1 + *(longlong *)(param_1 + 6)) = 0;
    } while (uVar2 < param_1[5]);
  }
  FUN_144b56350(param_2,*(undefined8 *)(param_1 + 6));
  param_1[6] = 0;
  param_1[7] = 0;
  if ((*(longlong *)(param_1 + 2) != 0) && (uVar3 = 0, *param_1 != 0)) {
    do {
      FUN_144b56350(param_2,*(undefined8 *)(*(longlong *)(param_1 + 2) + 8 + uVar3 * 0x10));
      uVar2 = (int)uVar3 + 1;
      *(undefined8 *)(*(longlong *)(param_1 + 2) + 8 + uVar3 * 0x10) = 0;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *param_1);
  }
  FUN_144b56350(param_2,*(undefined8 *)(param_1 + 2));
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



// FUNCTION 144dfbfe0 FUN_144dfbfe0 body=1026 status=ok
// SIG undefined FUN_144dfbfe0(void)

int FUN_144dfbfe0(uint *param_1,longlong param_2,int param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  short sVar4;
  ushort uVar5;
  undefined2 uVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  uint *puVar17;
  ulonglong uVar18;
  int local_res20 [2];
  
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  uVar16 = 0;
  uVar18 = 0;
  local_res20[0] = 3;
  uVar12 = uVar16;
  if (param_4 != 0) {
    local_res20[0] = FUN_144b597a0(param_2,param_3 + param_4);
    if ((local_res20[0] != 0) ||
       (local_res20[0] = FUN_144b597f0(param_2,2), uVar12 = uVar18, local_res20[0] != 0))
    goto LAB_144dfc39c;
    iVar9 = FUN_144b59870(param_2);
    sVar4 = FUN_144b59d40(param_2,local_res20);
    if (local_res20[0] != 0) goto LAB_144dfc39c;
    if (sVar4 != 1) {
      local_res20[0] = 3;
      goto LAB_144dfc39c;
    }
    iVar10 = FUN_144b59e60(param_2,local_res20);
    if (local_res20[0] != 0) goto LAB_144dfc39c;
    uVar5 = FUN_144b59d40(param_2,local_res20);
    *param_1 = (uint)uVar5;
    if ((local_res20[0] != 0) ||
       (uVar12 = FUN_144b561b0(uVar3,4,0,uVar5,0,local_res20), local_res20[0] != 0))
    goto LAB_144dfc39c;
    uVar18 = uVar16;
    if (*param_1 != 0) {
      do {
        uVar11 = FUN_144b59e60(param_2,local_res20);
        *(undefined4 *)(uVar12 + uVar18 * 4) = uVar11;
        if (local_res20[0] != 0) goto LAB_144dfc39c;
        uVar15 = (int)uVar18 + 1;
        uVar18 = (ulonglong)uVar15;
      } while (uVar15 < *param_1);
    }
    local_res20[0] = FUN_144b597a0(param_2,iVar10 + iVar9);
    if (local_res20[0] != 0) goto LAB_144dfc39c;
    uVar6 = FUN_144b59d40(param_2,local_res20);
    *(undefined2 *)(param_1 + 4) = uVar6;
    if (local_res20[0] != 0) goto LAB_144dfc39c;
    uVar5 = FUN_144b59d40(param_2,local_res20);
    param_1[5] = (uint)uVar5;
    if (local_res20[0] != 0) goto LAB_144dfc39c;
    uVar13 = FUN_144b561b0(uVar3,8,0,uVar5,0,local_res20);
    *(undefined8 *)(param_1 + 6) = uVar13;
    if (local_res20[0] != 0) goto LAB_144dfc39c;
    if (param_1[5] != 0) {
      do {
        uVar18 = 0;
        plVar1 = (longlong *)(*(longlong *)(param_1 + 6) + uVar16 * 8);
        lVar14 = FUN_144b561b0(uVar3,0xc,0,(short)param_1[4],0,local_res20);
        *plVar1 = lVar14;
        if (local_res20[0] != 0) goto LAB_144dfc39c;
        if ((short)param_1[4] != 0) {
          do {
            piVar2 = (int *)(*plVar1 + uVar18 * 0xc);
            sVar4 = FUN_144b59d40(param_2,local_res20);
            if (((local_res20[0] != 0) ||
                (sVar7 = FUN_144b59d40(param_2,local_res20), local_res20[0] != 0)) ||
               (sVar8 = FUN_144b59d40(param_2,local_res20), local_res20[0] != 0))
            goto LAB_144dfc39c;
            uVar15 = (int)uVar18 + 1;
            uVar18 = (ulonglong)uVar15;
            piVar2[2] = (int)sVar8 << 2;
            *piVar2 = (int)sVar4 << 2;
            piVar2[1] = (int)sVar7 << 2;
          } while (uVar15 < (ushort)param_1[4]);
        }
        uVar15 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar15;
      } while (uVar15 < param_1[5]);
    }
    uVar16 = 0;
    uVar13 = FUN_144b561b0(uVar3,0x10,0,*param_1,0,local_res20);
    *(undefined8 *)(param_1 + 2) = uVar13;
    if (local_res20[0] != 0) goto LAB_144dfc39c;
    if (*param_1 != 0) {
      do {
        puVar17 = (uint *)(uVar16 * 0x10 + *(longlong *)(param_1 + 2));
        local_res20[0] = FUN_144b597a0(param_2,*(int *)(uVar12 + uVar16 * 4) + iVar9);
        if ((local_res20[0] != 0) ||
           (local_res20[0] = FUN_144b597f0(param_2,4), local_res20[0] != 0)) goto LAB_144dfc39c;
        uVar5 = FUN_144b59d40(param_2,local_res20);
        *puVar17 = (uint)uVar5;
        if (local_res20[0] != 0) goto LAB_144dfc39c;
        uVar18 = 0;
        uVar13 = FUN_144b561b0(uVar3,4,0,uVar5,0,local_res20);
        *(undefined8 *)(puVar17 + 2) = uVar13;
        if (local_res20[0] != 0) goto LAB_144dfc39c;
        if (*puVar17 != 0) {
          do {
            uVar5 = FUN_144b59d40(param_2,local_res20);
            *(uint *)(*(longlong *)(puVar17 + 2) + uVar18 * 4) = (uint)uVar5;
            if (local_res20[0] != 0) goto LAB_144dfc39c;
            uVar15 = (int)uVar18 + 1;
            uVar18 = (ulonglong)uVar15;
          } while (uVar15 < *puVar17);
        }
        uVar15 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar15;
      } while (uVar15 < *param_1);
    }
  }
  local_res20[0] = 0;
LAB_144dfc39c:
  FUN_144b56350(uVar3,uVar12);
  if (local_res20[0] != 0) {
    FUN_144dfbf10(param_1,uVar3);
  }
  return local_res20[0];
}



// FUNCTION 144dfc3f0 FUN_144dfc3f0 body=1066 status=ok
// SIG undefined FUN_144dfc3f0(void)

int FUN_144dfc3f0(uint *param_1,longlong param_2,uint param_3,longlong param_4,int param_5,
                 uint param_6)

{
  uint uVar1;
  ushort uVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  short sVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uVar14;
  byte *pbVar15;
  uint uVar16;
  int iVar17;
  int local_res10 [2];
  
  uVar16 = 0;
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 8) == 0) {
    return 3;
  }
  puVar13 = param_1 + 0x83;
  lVar8 = 0x100;
  do {
    *(undefined2 *)(puVar13 + -0x80) = 0;
    *(undefined2 *)puVar13 = 0;
    puVar13 = (uint *)((longlong)puVar13 + 2);
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  if (param_6 < 2) {
    if (param_6 == 0) {
      lVar8 = 4;
      puVar13 = param_1 + 3;
      puVar10 = (undefined8 *)&DAT_149a0b7a0;
      do {
        uVar3 = puVar10[1];
        *(undefined8 *)puVar13 = *puVar10;
        *(undefined8 *)(puVar13 + 2) = uVar3;
        uVar3 = puVar10[3];
        *(undefined8 *)(puVar13 + 4) = puVar10[2];
        *(undefined8 *)(puVar13 + 6) = uVar3;
        uVar3 = puVar10[5];
        *(undefined8 *)(puVar13 + 8) = puVar10[4];
        *(undefined8 *)(puVar13 + 10) = uVar3;
        uVar3 = puVar10[7];
        *(undefined8 *)(puVar13 + 0xc) = puVar10[6];
        *(undefined8 *)(puVar13 + 0xe) = uVar3;
        uVar3 = puVar10[9];
        *(undefined8 *)(puVar13 + 0x10) = puVar10[8];
        *(undefined8 *)(puVar13 + 0x12) = uVar3;
        uVar3 = puVar10[0xb];
        *(undefined8 *)(puVar13 + 0x14) = puVar10[10];
        *(undefined8 *)(puVar13 + 0x16) = uVar3;
        uVar14 = *(uint *)((longlong)puVar10 + 100);
        uVar11 = *(uint *)(puVar10 + 0xd);
        uVar7 = *(uint *)((longlong)puVar10 + 0x6c);
        puVar13[0x18] = *(uint *)(puVar10 + 0xc);
        puVar13[0x19] = uVar14;
        puVar13[0x1a] = uVar11;
        puVar13[0x1b] = uVar7;
        uVar14 = *(uint *)((longlong)puVar10 + 0x74);
        uVar11 = *(uint *)(puVar10 + 0xf);
        uVar7 = *(uint *)((longlong)puVar10 + 0x7c);
        puVar13[0x1c] = *(uint *)(puVar10 + 0xe);
        puVar13[0x1d] = uVar14;
        puVar13[0x1e] = uVar11;
        puVar13[0x1f] = uVar7;
        lVar8 = lVar8 + -1;
        puVar13 = puVar13 + 0x20;
        puVar10 = puVar10 + 0x10;
      } while (lVar8 != 0);
    }
    else {
      if (param_6 != 1) {
        return 3;
      }
      lVar8 = 4;
      puVar13 = param_1 + 3;
      puVar10 = (undefined8 *)&DAT_149a0b9a0;
      do {
        uVar3 = puVar10[1];
        *(undefined8 *)puVar13 = *puVar10;
        *(undefined8 *)(puVar13 + 2) = uVar3;
        uVar3 = puVar10[3];
        *(undefined8 *)(puVar13 + 4) = puVar10[2];
        *(undefined8 *)(puVar13 + 6) = uVar3;
        uVar3 = puVar10[5];
        *(undefined8 *)(puVar13 + 8) = puVar10[4];
        *(undefined8 *)(puVar13 + 10) = uVar3;
        uVar3 = puVar10[7];
        *(undefined8 *)(puVar13 + 0xc) = puVar10[6];
        *(undefined8 *)(puVar13 + 0xe) = uVar3;
        uVar3 = puVar10[9];
        *(undefined8 *)(puVar13 + 0x10) = puVar10[8];
        *(undefined8 *)(puVar13 + 0x12) = uVar3;
        uVar3 = puVar10[0xb];
        *(undefined8 *)(puVar13 + 0x14) = puVar10[10];
        *(undefined8 *)(puVar13 + 0x16) = uVar3;
        uVar14 = *(uint *)((longlong)puVar10 + 100);
        uVar11 = *(uint *)(puVar10 + 0xd);
        uVar7 = *(uint *)((longlong)puVar10 + 0x6c);
        puVar13[0x18] = *(uint *)(puVar10 + 0xc);
        puVar13[0x19] = uVar14;
        puVar13[0x1a] = uVar11;
        puVar13[0x1b] = uVar7;
        uVar14 = *(uint *)((longlong)puVar10 + 0x74);
        uVar11 = *(uint *)(puVar10 + 0xf);
        uVar7 = *(uint *)((longlong)puVar10 + 0x7c);
        puVar13[0x1c] = *(uint *)(puVar10 + 0xe);
        puVar13[0x1d] = uVar14;
        puVar13[0x1e] = uVar11;
        puVar13[0x1f] = uVar7;
        lVar8 = lVar8 + -1;
        puVar13 = puVar13 + 0x20;
        puVar10 = puVar10 + 0x10;
      } while (lVar8 != 0);
    }
    puVar13 = param_1 + 3;
    param_1[2] = 0;
    iVar17 = FUN_144dfbaa0(param_2,param_3,*(undefined8 *)(param_4 + 0x30));
    if (iVar17 == 0) {
      do {
        uVar2 = (ushort)*puVar13;
        if (((uVar2 == 0) || (*(uint *)(param_2 + 0x18) < (uint)uVar2)) ||
           (uVar2 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uint)uVar2 * 2),
           uVar2 == 0)) {
          *(ushort *)(puVar13 + 0x80) = 0;
          *(ushort *)puVar13 = 0;
        }
        else {
          *(ushort *)(puVar13 + 0x80) = uVar2;
          param_1[2] = uVar16 + 1;
        }
        uVar16 = uVar16 + 1;
        puVar13 = (uint *)((longlong)puVar13 + 2);
      } while (uVar16 < 0x100);
    }
  }
  else {
    param_1[1] = param_5 + param_6;
    local_res10[0] = FUN_144b597a0(param_4);
    if (local_res10[0] != 0) {
      return local_res10[0];
    }
    bVar4 = FUN_144b59cc0(param_4,local_res10);
    *param_1 = (uint)bVar4;
    if (local_res10[0] != 0) {
      return local_res10[0];
    }
    bVar4 = FUN_144b59cc0(param_4,local_res10);
    if (local_res10[0] != 0) {
      return local_res10[0];
    }
    uVar14 = (uint)bVar4;
    if ((*param_1 & 0x7f) == 0) {
      param_1[2] = bVar4 + 1;
      local_res10[0] = FUN_144b59990(param_4,bVar4);
      if (local_res10[0] != 0) {
        return local_res10[0];
      }
      pbVar15 = *(byte **)(param_4 + 0x38);
      uVar16 = 1;
      if (uVar14 != 0) {
        do {
          bVar4 = *pbVar15;
          pbVar15 = pbVar15 + 1;
          if (uVar16 < param_3) {
            *(short *)((longlong)param_1 + (ulonglong)bVar4 * 2 + 0x20c) = (short)uVar16;
            *(undefined2 *)((longlong)param_1 + (ulonglong)bVar4 * 2 + 0xc) =
                 *(undefined2 *)(*(longlong *)(param_2 + 8) + (ulonglong)uVar16 * 2);
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 <= uVar14);
      }
      FUN_144b59ab0(param_4);
    }
    else {
      if ((*param_1 & 0x7f) != 1) {
        return 3;
      }
      param_1[2] = 0;
      if (uVar14 != 0) {
        uVar11 = 1;
        do {
          bVar4 = FUN_144b59cc0(param_4,local_res10);
          if (local_res10[0] != 0) {
            return local_res10[0];
          }
          bVar5 = FUN_144b59cc0(param_4,local_res10);
          if (local_res10[0] != 0) {
            return local_res10[0];
          }
          uVar7 = bVar5 + 1;
          if (param_1[2] < uVar7) {
            param_1[2] = uVar7;
          }
          uVar7 = uVar7 + uVar11;
          if (uVar11 < uVar7) {
            iVar17 = bVar4 - uVar11;
            do {
              if (uVar11 < param_3) {
                uVar1 = iVar17 + uVar11;
                if (uVar1 < 0x100) {
                  *(short *)((longlong)param_1 + (ulonglong)uVar1 * 2 + 0x20c) = (short)uVar11;
                  *(undefined2 *)((longlong)param_1 + (ulonglong)uVar1 * 2 + 0xc) =
                       *(undefined2 *)(*(longlong *)(param_2 + 8) + (ulonglong)uVar11 * 2);
                }
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < uVar7);
          }
          uVar16 = uVar16 + 1;
          uVar11 = uVar7;
        } while (uVar16 < uVar14);
      }
      if (0x100 < param_1[2]) {
        param_1[2] = 0x100;
      }
    }
    iVar17 = local_res10[0];
    if ((((*param_1 & 0x80) != 0) &&
        (bVar4 = FUN_144b59cc0(param_4,local_res10), iVar17 = local_res10[0], local_res10[0] == 0))
       && (uVar12 = 0, bVar4 != 0)) {
      do {
        bVar5 = FUN_144b59cc0(param_4,local_res10);
        if (local_res10[0] != 0) {
          return local_res10[0];
        }
        sVar6 = FUN_144b59d40(param_4,local_res10);
        if (local_res10[0] != 0) {
          return local_res10[0];
        }
        *(short *)((longlong)param_1 + (ulonglong)bVar5 * 2 + 0xc) = sVar6;
        if (param_3 != 0) {
          uVar9 = 0;
          do {
            if (*(short *)(*(longlong *)(param_2 + 8) + uVar9 * 2) == sVar6) {
              *(short *)((longlong)param_1 + (ulonglong)bVar5 * 2 + 0x20c) = (short)uVar9;
              break;
            }
            uVar16 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar16;
          } while (uVar16 < param_3);
        }
        uVar16 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar16;
        iVar17 = 0;
      } while (uVar16 < bVar4);
    }
  }
  return iVar17;
}



// FUNCTION 144dfc820 FUN_144dfc820 body=1063 status=ok
// SIG undefined FUN_144dfc820(void)

ulonglong FUN_144dfc820(undefined4 *param_1,undefined8 *param_2,undefined4 param_3,
                       undefined8 param_4,int param_5,uint param_6,undefined8 *param_7,
                       longlong param_8)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  longlong local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  int iStack_54;
  undefined4 *local_50;
  undefined8 local_48;
  
  lVar2 = param_8;
  iStack_54 = param_6;
  uVar11 = 0;
  local_98 = 0;
  lVar1 = *(longlong *)(param_8 + 0x2f0);
  bVar12 = (param_6 - 0x3000 & 0xffffefff) == 0;
  param_6 = CONCAT31(param_6._1_3_,bVar12);
  uVar7 = 0x60;
  if (bVar12) {
    uVar7 = 0x201;
  }
  local_88 = (undefined8 *)*param_7;
  local_90 = *local_88;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_48 = 0;
  local_50 = param_1;
  local_68 = FUN_144b561b0(local_90,8,0,uVar7,0,&param_8);
  uVar9 = local_68;
  if ((uint)param_8 != 0) {
    FUN_144b56350(local_90);
    local_68 = 0;
    uVar9 = local_60;
    uVar7 = local_58;
  }
  local_58 = uVar7;
  local_60 = uVar9;
  uVar10 = (ulonglong)(uint)param_8;
  if ((uint)param_8 != 0) goto LAB_144dfcc1b;
  memset(param_1,0,0xbc);
  param_1[8] = 0xff9c0000;
  uVar7 = 0x30;
  if ((char)param_6 != '\0') {
    uVar7 = 0x201;
  }
  param_1[9] = 0x320000;
  param_1[0x2e] = uVar7;
  param_1[0xb] = 2;
  param_1[0xc] = 0x10000;
  param_1[0xf] = 0x10000;
  param_1[0x27] = 0x2210;
  *param_1 = 0xffff;
  param_1[1] = 0xffff;
  param_1[2] = 0xffff;
  param_1[3] = 0xffff;
  param_1[4] = 0xffff;
  param_1[5] = 0xffff;
  param_1[0x20] = 0xffff;
  param_1[0x21] = 0xffff;
  param_1[0x22] = 0xffff;
  param_1[0x2b] = 0xffff;
  if (*(int *)(param_2 + 2) == 0) {
    uVar5 = FUN_144b597a0(param_4,*(undefined4 *)(param_2 + 3));
    uVar10 = (ulonglong)uVar5;
    if (uVar5 != 0) goto LAB_144dfcc1b;
    uVar5 = FUN_144b59b00(param_4,*(undefined4 *)((longlong)param_2 + 0x1c),&local_98);
    uVar10 = (ulonglong)uVar5;
    if (uVar5 != 0) goto LAB_144dfcc1b;
    uVar5 = *(uint *)((longlong)param_2 + 0x1c);
LAB_144dfca0e:
    uVar4 = FUN_144df90f0(&local_88,local_98,(ulonglong)uVar5 + local_98);
  }
  else {
    uVar4 = FUN_144df9520(param_2,param_3,&local_98,&param_8);
    uVar5 = (uint)param_8;
    if (uVar4 == 0) goto LAB_144dfca0e;
  }
  uVar10 = (ulonglong)uVar4;
  uVar9 = param_4;
  if (*(int *)(param_2 + 2) == 0) {
LAB_144dfca37:
    FUN_144b59b40(uVar9,&local_98);
  }
  else if (param_2[5] == 0) {
    uVar9 = *param_2;
    goto LAB_144dfca37;
  }
  if ((uVar4 == 0) && (param_1[0x21] == 0xffff)) {
    uVar5 = FUN_144df7500(param_7,param_1,0,0);
    uVar10 = (ulonglong)uVar5;
    if (uVar5 == 0) {
      cVar3 = (char)param_6;
      if ((char)param_6 == '\0') {
        iVar6 = *(int *)(*(longlong *)(lVar2 + 0xd0) + 0x5c);
        if (iVar6 == -1) {
          lVar2 = *(longlong *)(lVar2 + 0x90);
          param_1[0xb2] = *(undefined4 *)(lVar2 + 0x60);
          if (*(int *)(lVar2 + 0x60) != 0) {
            do {
              iVar6 = (**(code **)(lVar1 + 0x28))(*(undefined4 *)(lVar2 + 0x60));
              *(int *)(lVar2 + 0x60) = iVar6;
            } while (iVar6 < 0);
          }
        }
        else {
          param_1[0xb2] = iVar6;
          if (*(int *)(*(longlong *)(lVar2 + 0xd0) + 0x5c) != 0) {
            do {
              uVar7 = (**(code **)(lVar1 + 0x28))
                                (*(undefined4 *)(*(longlong *)(lVar2 + 0xd0) + 0x5c));
              *(undefined4 *)(*(longlong *)(lVar2 + 0xd0) + 0x5c) = uVar7;
            } while (*(int *)(*(longlong *)(lVar2 + 0xd0) + 0x5c) < 0);
          }
        }
        if (param_1[0xb2] == 0) {
          param_1[0xb2] = param_1[0x86];
        }
      }
      if (param_1[0x87] != 0) {
        uVar5 = FUN_144b597a0(param_4,param_1[0x1d] + param_1[0x87] + param_5);
        uVar10 = (ulonglong)uVar5;
        if (uVar5 == 0) {
          plVar8 = (longlong *)(param_1 + 0xa4);
          uVar5 = FUN_144dfb400(plVar8,param_4,1,cVar3);
          uVar10 = (ulonglong)uVar5;
          if (uVar5 == 0) {
            param_6 = 0;
            uVar9 = *(undefined8 *)(*plVar8 + 0x30);
            *(undefined8 *)(param_1 + 0xb0) = 0;
            uVar10 = uVar11;
            if (*(longlong *)(param_1 + 0xac) == 0) {
              param_6 = FUN_144dfb620(plVar8);
              uVar10 = (ulonglong)param_6;
              if (param_6 != 0) goto LAB_144dfcc1b;
            }
            if (param_1[0xa8] != 0) {
              plVar8 = (longlong *)FUN_144b561b0(uVar9,8,0,param_1[0xa8] + 1,0,&param_6);
              uVar10 = (ulonglong)param_6;
              if (param_6 == 0) {
                lVar1 = *(longlong *)(param_1 + 0xae);
                uVar5 = 1;
                *plVar8 = lVar1;
                if (param_1[0xa8] != 0) {
                  do {
                    uVar10 = (ulonglong)uVar5;
                    uVar4 = *(int *)(*(longlong *)(param_1 + 0xac) + uVar10 * 4) - 1;
                    if ((uint)uVar11 <= uVar4) {
                      if ((uint)param_1[0xab] < uVar4) {
                        uVar4 = param_1[0xab];
                      }
                      uVar11 = (ulonglong)uVar4;
                    }
                    uVar5 = uVar5 + 1;
                    plVar8[uVar10] = uVar11 + lVar1;
                  } while (uVar5 <= (uint)param_1[0xa8]);
                }
                uVar10 = 0;
                *(longlong **)(param_1 + 0xb0) = plVar8;
              }
            }
          }
        }
      }
    }
  }
LAB_144dfcc1b:
  FUN_144b56350(*local_88,local_68);
  return uVar10;
}



// FUNCTION 144dfcc50 FUN_144dfcc50 body=148 status=ok
// SIG undefined FUN_144dfcc50(void)

void FUN_144dfcc50(undefined8 param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_144dfb5b0(param_2 + 0x290);
    FUN_144b56350(param_1,*(undefined8 *)(param_2 + 0x2c0));
    *(undefined8 *)(param_2 + 0x2c0) = 0;
    FUN_144b56350(param_1,*(undefined8 *)(param_2 + 0x250));
    *(undefined8 *)(param_2 + 0x250) = 0;
    FUN_144b56350(param_1,*(undefined8 *)(param_2 + 0x260));
    *(undefined8 *)(param_2 + 0x260) = 0;
    FUN_144b56350(param_1,*(undefined8 *)(param_2 + 0x278));
    *(undefined8 *)(param_2 + 0x278) = 0;
  }
  return;
}



// FUNCTION 144dfccf0 FUN_144dfccf0 body=446 status=ok
// SIG undefined FUN_144dfccf0(void)

void FUN_144dfccf0(longlong param_1,void *param_2)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  
  memset(param_2,0,0xc4);
  bVar1 = *(byte *)(param_1 + 0xc0);
  *(byte *)((longlong)param_2 + 8) = bVar1;
  uVar5 = (ulonglong)bVar1;
  if (bVar1 != 0) {
    puVar3 = (undefined2 *)((longlong)param_2 + 0xc);
    puVar4 = (undefined2 *)(param_1 + 0xc4);
    do {
      uVar2 = *puVar4;
      puVar4 = puVar4 + 2;
      *puVar3 = uVar2;
      puVar3 = puVar3 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  bVar1 = *(byte *)(param_1 + 0xc1);
  *(byte *)((longlong)param_2 + 9) = bVar1;
  uVar5 = (ulonglong)bVar1;
  if (bVar1 != 0) {
    puVar3 = (undefined2 *)((longlong)param_2 + 0x28);
    puVar4 = (undefined2 *)(param_1 + 0xfc);
    do {
      uVar2 = *puVar4;
      puVar4 = puVar4 + 2;
      *puVar3 = uVar2;
      puVar3 = puVar3 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  bVar1 = *(byte *)(param_1 + 0xc2);
  *(byte *)((longlong)param_2 + 10) = bVar1;
  uVar5 = (ulonglong)bVar1;
  if (bVar1 != 0) {
    puVar3 = (undefined2 *)((longlong)param_2 + 0x3c);
    puVar4 = (undefined2 *)(param_1 + 0x124);
    do {
      uVar2 = *puVar4;
      puVar4 = puVar4 + 2;
      *puVar3 = uVar2;
      puVar3 = puVar3 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  bVar1 = *(byte *)(param_1 + 0xc3);
  *(byte *)((longlong)param_2 + 0xb) = bVar1;
  uVar5 = (ulonglong)bVar1;
  if (bVar1 != 0) {
    puVar3 = (undefined2 *)((longlong)param_2 + 0x58);
    puVar4 = (undefined2 *)(param_1 + 0x15c);
    do {
      uVar2 = *puVar4;
      puVar4 = puVar4 + 2;
      *puVar3 = uVar2;
      puVar3 = puVar3 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  *(undefined4 *)((longlong)param_2 + 0x6c) = *(undefined4 *)(param_1 + 0x184);
  *(undefined4 *)((longlong)param_2 + 0x70) = *(undefined4 *)(param_1 + 0x188);
  *(undefined4 *)((longlong)param_2 + 0x74) = *(undefined4 *)(param_1 + 0x18c);
  *(undefined2 *)((longlong)param_2 + 0x78) = *(undefined2 *)(param_1 + 400);
  *(undefined2 *)((longlong)param_2 + 0x7a) = *(undefined2 *)(param_1 + 0x194);
  bVar1 = *(byte *)(param_1 + 0x198);
  *(byte *)((longlong)param_2 + 0x7c) = bVar1;
  uVar5 = (ulonglong)bVar1;
  if (bVar1 != 0) {
    puVar4 = (undefined2 *)((longlong)param_2 + 0x80);
    puVar3 = (undefined2 *)(param_1 + 0x19c);
    do {
      uVar2 = *puVar3;
      puVar3 = puVar3 + 2;
      *puVar4 = uVar2;
      puVar4 = puVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  bVar1 = *(byte *)(param_1 + 0x199);
  *(byte *)((longlong)param_2 + 0x7d) = bVar1;
  uVar5 = (ulonglong)bVar1;
  if (bVar1 != 0) {
    puVar4 = (undefined2 *)((longlong)param_2 + 0x9a);
    puVar3 = (undefined2 *)(param_1 + 0x1d0);
    do {
      uVar2 = *puVar3;
      puVar3 = puVar3 + 2;
      *puVar4 = uVar2;
      puVar4 = puVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  *(undefined1 *)((longlong)param_2 + 0x7e) = *(undefined1 *)(param_1 + 0x204);
  *(undefined4 *)((longlong)param_2 + 0xb8) = *(undefined4 *)(param_1 + 0x210);
  *(undefined4 *)((longlong)param_2 + 4) = *(undefined4 *)(param_1 + 0x20c);
  return;
}



// FUNCTION 144dfceb0 FUN_144dfceb0 body=202 status=ok
// SIG undefined FUN_144dfceb0(void)

void FUN_144dfceb0(char *param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (param_1[lVar3] != '\0');
  iVar2 = (int)lVar3 + 1;
  bVar1 = true;
  while( true ) {
    if ((iVar2 < 7) || (param_1[6] != '+')) {
      return;
    }
    if (0x19 < (byte)(*param_1 + 0xbfU)) {
      bVar1 = false;
    }
    if (0x19 < (byte)(param_1[1] + 0xbfU)) {
      bVar1 = false;
    }
    if (0x19 < (byte)(param_1[2] + 0xbfU)) {
      bVar1 = false;
    }
    if (0x19 < (byte)(param_1[3] + 0xbfU)) {
      bVar1 = false;
    }
    if (0x19 < (byte)(param_1[4] + 0xbfU)) {
      bVar1 = false;
    }
    if (0x19 < (byte)(param_1[5] + 0xbfU)) break;
    if (!bVar1) {
      return;
    }
    if (7 < (longlong)iVar2) {
      pcVar4 = param_1 + 7;
      pcVar5 = param_1;
      for (lVar3 = (longlong)iVar2 + -7; lVar3 != 0; lVar3 = lVar3 + -1) {
        *pcVar5 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      }
    }
    iVar2 = iVar2 + -7;
  }
  return;
}



// FUNCTION 144dfcf80 FUN_144dfcf80 body=212 status=ok
// SIG undefined FUN_144dfcf80(void)

void FUN_144dfcf80(char *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  int iVar6;
  
  lVar4 = -1;
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (param_1[lVar2] != '\0');
  do {
    lVar4 = lVar4 + 1;
  } while (*(char *)(param_2 + lVar4) != '\0');
  iVar3 = (int)lVar4;
  iVar1 = (int)lVar2;
  if (iVar3 < iVar1) {
    iVar6 = 1;
    lVar2 = (longlong)iVar3;
    if (0 < lVar2) {
      pcVar5 = param_1 + (longlong)iVar1 + -1;
      lVar4 = 1;
      do {
        if (*pcVar5 != pcVar5[((lVar2 - iVar1) - (longlong)param_1) + param_2]) break;
        iVar6 = iVar6 + 1;
        lVar4 = lVar4 + 1;
        pcVar5 = pcVar5 + -1;
      } while (lVar4 <= lVar2);
    }
    if (iVar3 < iVar6) {
      iVar1 = (iVar1 - iVar3) + -1;
      if (0 < iVar1) {
        pcVar5 = param_1 + iVar1;
        do {
          if ((0x3f < (byte)(*pcVar5 - 0x20U)) ||
             ((0x8000000000002801U >> ((ulonglong)(byte)(*pcVar5 - 0x20U) & 0x3f) & 1) == 0)) break;
          pcVar5 = pcVar5 + -1;
          iVar1 = iVar1 + -1;
        } while (pcVar5 != param_1 && -1 < (longlong)pcVar5 - (longlong)param_1);
        if (0 < iVar1) {
          param_1[iVar1 + 1] = '\0';
        }
      }
    }
  }
  return;
}



// FUNCTION 144dfd060 FUN_144dfd060 body=123 status=ok
// SIG undefined FUN_144dfd060(void)

undefined8 FUN_144dfd060(longlong *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  
  FUN_144b57e90(*param_1);
  puVar1 = *(undefined8 **)(*param_1 + 0x1d8);
  lVar3 = FUN_144b55a90(*(undefined8 *)(*(longlong *)(*param_1 + 0x90) + 8),"pshinter");
  if (((lVar3 != 0) && (puVar1 != (undefined8 *)0x0)) &&
     (pcVar2 = (code *)*puVar1, pcVar2 != (code *)0x0)) {
    lVar3 = (*pcVar2)(lVar3);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 8))
                (*(undefined8 *)param_1[7],*(undefined4 *)((longlong)param_1 + 0x1c),(int)param_1[4]
                 ,0,0);
    }
  }
  return 0;
}



// FUNCTION 144dfd0e0 FUN_144dfd0e0 body=669 status=ok
// SIG undefined FUN_144dfd0e0(void)

ulonglong FUN_144dfd0e0(undefined8 param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  char *pcVar9;
  longlong lVar10;
  char *pcVar11;
  longlong lVar12;
  longlong lVar13;
  
  *param_2 = 1;
  if (*(longlong *)(param_2 + 0x38) == 0) {
    lVar6 = FUN_144b57b00(*(undefined8 *)(*(longlong *)(param_2 + 0x24) + 8),"psaux");
    if (lVar6 == 0) {
      return 0xb;
    }
    *(longlong *)(param_2 + 0x38) = lVar6;
  }
  if (*(longlong *)(param_2 + 0x76) == 0) {
    uVar7 = FUN_144b57b00(*(undefined8 *)(*(longlong *)(param_2 + 0x24) + 8),"pshinter");
    *(undefined8 *)(param_2 + 0x76) = uVar7;
  }
  uVar8 = FUN_144b597a0(param_1,0);
  if ((int)uVar8 != 0) {
    return uVar8;
  }
  uVar8 = FUN_144dfe2a0(param_2,param_3);
  if ((int)uVar8 != 0) {
    return uVar8;
  }
  if (param_3 < 0) {
    return uVar8;
  }
  if ((short)param_3 != 0) {
    return 6;
  }
  lVar6 = 0;
  param_2[2] = param_2[2] | 0x811;
  param_2[0xe] = 0;
  param_2[1] = 0;
  param_2[4] = param_2[0x6b];
  if (*(char *)(param_2 + 0x4f) != '\0') {
    param_2[2] = param_2[2] | 4;
  }
  *(undefined8 *)(param_2 + 6) = *(undefined8 *)(param_2 + 0x4a);
  pcVar11 = *(char **)(param_2 + 6);
  *(char **)(param_2 + 8) = "Regular";
  if (pcVar11 == (char *)0x0) {
    lVar10 = *(longlong *)(param_2 + 6);
    if (*(longlong *)(param_2 + 0x3a) != 0) {
      lVar10 = *(longlong *)(param_2 + 0x3a);
    }
    *(longlong *)(param_2 + 6) = lVar10;
  }
  else {
    pcVar9 = *(char **)(param_2 + 0x48);
    if (pcVar9 != (char *)0x0) {
      cVar1 = *pcVar9;
      while (cVar1 != '\0') {
        cVar2 = *pcVar11;
        if (cVar1 == cVar2) {
          pcVar11 = pcVar11 + 1;
LAB_144dfd20c:
          pcVar9 = pcVar9 + 1;
        }
        else {
          if ((cVar1 == ' ') || (cVar1 == '-')) goto LAB_144dfd20c;
          if ((cVar2 != ' ') && (cVar2 != '-')) {
            if (*pcVar11 == '\0') {
              *(char **)(param_2 + 8) = pcVar9;
            }
            break;
          }
          pcVar11 = pcVar11 + 1;
        }
        cVar1 = *pcVar9;
      }
    }
  }
  param_2[3] = 0;
  param_2[3] = (uint)(param_2[0x4e] != 0);
  lVar10 = *(longlong *)(param_2 + 0x4c);
  lVar13 = lVar6;
  if (lVar10 == 0) goto LAB_144dfd2b8;
  do {
    lVar12 = lVar13 + 1;
    if (*(char *)(lVar10 + lVar13) != (&DAT_149eea5a7)[lVar13]) goto LAB_144dfd2a0;
    lVar13 = lVar12;
  } while (lVar12 != 5);
  goto LAB_144dfd2b4;
  while (lVar6 = lVar13, lVar13 != 6) {
LAB_144dfd2a0:
    lVar13 = lVar6 + 1;
    if (*(char *)(lVar10 + lVar6) != "Black"[lVar6]) goto LAB_144dfd2b8;
  }
LAB_144dfd2b4:
  param_2[3] = param_2[3] | 2;
LAB_144dfd2b8:
  param_2[10] = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  param_2[0x16] = (int)*(short *)((longlong)param_2 + 0x14a);
  param_2[0x17] = (int)*(short *)((longlong)param_2 + 0x14e);
  param_2[0x18] = param_2[0x54] + 0xffff >> 0x10;
  param_2[0x19] = param_2[0x55] + 0xffff >> 0x10;
  if (*(short *)(param_2 + 0x1a) == 0) {
    *(undefined2 *)(param_2 + 0x1a) = 1000;
  }
  sVar3 = *(short *)(param_2 + 0x19);
  sVar4 = *(short *)(param_2 + 0x17);
  *(short *)((longlong)param_2 + 0x6a) = sVar3;
  *(short *)(param_2 + 0x1b) = sVar4;
  sVar5 = (short)((((uint)*(ushort *)(param_2 + 0x1a) + (uint)*(ushort *)(param_2 + 0x1a) * 2) * 4)
                 / 10);
  *(short *)((longlong)param_2 + 0x6e) = sVar5;
  if ((int)sVar5 < (int)sVar3 - (int)sVar4) {
    *(short *)((longlong)param_2 + 0x6e) = sVar3 - sVar4;
  }
  *(undefined2 *)(param_2 + 0x1d) = *(undefined2 *)((longlong)param_2 + 0x13e);
  *(undefined2 *)((longlong)param_2 + 0x76) = *(undefined2 *)(param_2 + 0x50);
  return uVar8 & 0xffffffff;
}



// FUNCTION 144dfd380 FUN_144dfd380 body=457 status=ok
// SIG undefined FUN_144dfd380(void)

void FUN_144dfd380(longlong param_1)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar3;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    uVar3 = 0;
    if (*(longlong *)(param_1 + 0x1d0) != 0) {
      uVar5 = uVar3;
      if (0 < *(int *)(param_1 + 0x1b0)) {
        do {
          lVar4 = *(longlong *)(param_1 + 0x1d0) + uVar5;
          if (*(undefined8 **)(lVar4 + 8) != (undefined8 *)0x0) {
            FUN_144b56350(uVar1,**(undefined8 **)(lVar4 + 8));
            **(undefined8 **)(lVar4 + 8) = 0;
            FUN_144b56350(uVar1,*(undefined8 *)(lVar4 + 8));
            *(undefined8 *)(lVar4 + 8) = 0;
          }
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar2;
          uVar5 = uVar5 + 0x10;
        } while ((int)uVar2 < *(int *)(param_1 + 0x1b0));
      }
      FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x1d0));
      *(undefined8 *)(param_1 + 0x1d0) = 0;
    }
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x110));
    *(undefined8 *)(param_1 + 0x110) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x118));
    *(undefined8 *)(param_1 + 0x118) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x120));
    *(undefined8 *)(param_1 + 0x120) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x128));
    *(undefined8 *)(param_1 + 0x128) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x130));
    *(undefined8 *)(param_1 + 0x130) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x1b8));
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined4 *)(param_1 + 0x1b0) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0xe8));
    *(undefined8 *)(param_1 + 0xe8) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0xf8));
    *(undefined8 *)(param_1 + 0xf8) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x100));
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x1e0));
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x1e8));
    *(undefined8 *)(param_1 + 0x1e8) = 0;
  }
  return;
}



// FUNCTION 144dfd600 FUN_144dfd600 body=895 status=ok
// SIG undefined FUN_144dfd600(void)

void FUN_144dfd600(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined1 auStack_828 [32];
  undefined8 local_808;
  undefined8 local_800;
  undefined1 local_7f8;
  uint local_7f0;
  code *local_7e8;
  char local_7d8;
  char local_7d7;
  undefined8 local_7d0;
  undefined2 *local_7c8;
  undefined1 local_7b8 [32];
  longlong local_798;
  undefined4 local_780;
  undefined4 local_778;
  byte local_75b;
  longlong local_758;
  int local_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  ulonglong local_118;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_828;
  lVar2 = *(longlong *)(param_1 + 8);
  lVar3 = *(longlong *)(lVar2 + 0xe0);
  if (param_3 < *(uint *)(lVar2 + 0x10)) {
    if ((param_4 >> 10 & 1) != 0) {
      param_4 = param_4 | 3;
    }
    *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 0x1c);
    local_7f8 = (param_4 & 3) == 0;
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x20);
    local_7c8 = (undefined2 *)(param_1 + 0x98);
    local_7e8 = FUN_144dfe550;
    *local_7c8 = 0;
    *(undefined2 *)(param_1 + 0x9a) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0x6f75746c;
    *(undefined1 *)(param_1 + 0xf8) = local_7f8;
    *(byte *)(param_1 + 0xf9) = ~(byte)param_4 & 1;
    local_7f0 = (int)param_4 >> 0x10 & 0xf;
    local_800 = 0;
    local_808 = 0;
    iVar4 = (*(code *)**(undefined8 **)(lVar3 + 0x18))(local_7b8,lVar2,param_2,param_1);
    if (iVar4 == 0) {
      local_75b = (byte)(param_4 >> 10) & 1;
      iVar4 = FUN_144dfe550(local_7b8,param_3);
      if (iVar4 == 0) {
        local_7d7 = *(char *)(param_1 + 0xf8);
        local_78 = local_128;
        iStack_74 = iStack_124;
        iStack_70 = iStack_120;
        iStack_6c = iStack_11c;
        local_7d8 = *(char *)(param_1 + 0xf9);
        local_7d0 = local_118;
        (**(code **)(*(longlong *)(lVar3 + 0x18) + 8))();
        *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) & 1;
        *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) | 4;
        if ((param_4 >> 10 & 1) == 0) {
          iVar4 = FUN_144b55630(local_778);
          *(int *)(param_1 + 0x40) = iVar4 >> 0x10;
          iVar4 = FUN_144b55630(local_778);
          *(int *)(param_1 + 0x50) = iVar4 >> 0x10;
          *(undefined1 *)(*(longlong *)(param_1 + 0xf0) + 0xc) = 0;
          iVar4 = *(int *)(lVar2 + 0x154) - *(int *)(lVar2 + 0x14c) >> 0x10;
          *(int *)(param_1 + 0x4c) = iVar4;
          *(int *)(param_1 + 0x54) = iVar4;
          *(undefined4 *)(param_1 + 0x60) = 0x6f75746c;
          if (*(ushort *)(param_2 + 0x1a) < 0x18) {
            *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) | 0x100;
          }
          if ((((local_78 != 0x10000) || (iStack_6c != 0x10000)) || (iStack_74 != 0)) ||
             (iStack_70 != 0)) {
            FUN_144b5aea0(param_1 + 0x98,&local_78);
            uVar5 = FUN_144b42fe0(*(undefined4 *)(param_1 + 0x40),local_78);
            *(undefined4 *)(param_1 + 0x40) = uVar5;
            uVar5 = FUN_144b42fe0(*(undefined4 *)(param_1 + 0x4c),iStack_6c);
            *(undefined4 *)(param_1 + 0x4c) = uVar5;
          }
          iVar4 = local_7d0._4_4_;
          if (((int)local_118 != 0) || (local_7d0._4_4_ != 0)) {
            FUN_144b5ada0(param_1 + 0x98,local_118 & 0xffffffff,local_7d0._4_4_);
            *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + (int)local_118;
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar4;
          }
          if (((param_4 & 1) == 0) || (local_7d8 != '\0')) {
            uVar5 = *(undefined4 *)(param_1 + 0xfc);
            uVar1 = *(undefined4 *)(param_1 + 0x100);
            puVar7 = *(undefined4 **)(local_798 + 8);
            if (((local_7d7 == '\0') || (local_758 == 0)) &&
               (iVar4 = (int)*(short *)(local_798 + 2), 0 < *(short *)(local_798 + 2))) {
              do {
                uVar6 = FUN_144b42fe0(*puVar7,uVar5);
                *puVar7 = uVar6;
                uVar6 = FUN_144b42fe0(puVar7[1],uVar1);
                iVar4 = iVar4 + -1;
                puVar7[1] = uVar6;
                puVar7 = puVar7 + 2;
              } while (0 < iVar4);
            }
            uVar5 = FUN_144b42fe0(*(undefined4 *)(param_1 + 0x40),uVar5);
            *(undefined4 *)(param_1 + 0x40) = uVar5;
            uVar5 = FUN_144b42fe0(*(undefined4 *)(param_1 + 0x4c),uVar1);
            *(undefined4 *)(param_1 + 0x4c) = uVar5;
          }
          FUN_144b488a0(local_7c8,&local_68);
          *(int *)(param_1 + 0x38) = local_68;
          *(int *)(param_1 + 0x30) = local_60 - local_68;
          *(int *)(param_1 + 0x34) = local_5c - local_64;
          *(int *)(param_1 + 0x3c) = local_5c;
          if ((param_4 & 0x10) != 0) {
            FUN_144b58340((int *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x4c));
          }
        }
        else {
          lVar2 = *(longlong *)(param_1 + 0xf0);
          iVar4 = FUN_144b55630(local_780);
          *(int *)(param_1 + 0x38) = iVar4 >> 0x10;
          iVar4 = FUN_144b55630(local_778);
          *(int *)(param_1 + 0x40) = iVar4 >> 0x10;
          *(int *)(lVar2 + 0x10) = local_78;
          *(int *)(lVar2 + 0x14) = iStack_74;
          *(int *)(lVar2 + 0x18) = iStack_70;
          *(int *)(lVar2 + 0x1c) = iStack_6c;
          *(ulonglong *)(lVar2 + 0x20) = local_118;
          *(undefined1 *)(lVar2 + 0xc) = 1;
        }
      }
      else {
        (**(code **)(*(longlong *)(lVar3 + 0x18) + 8))(local_7b8);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_828);
}



// FUNCTION 144dfd9a0 FUN_144dfd9a0 body=390 status=ok
// SIG undefined FUN_144dfd9a0(void)

void FUN_144dfd9a0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar3 = *(int *)(param_2 + 0xb8);
  if ((-1 < iVar3) && (iVar3 < *(int *)(param_1 + 0x1b0))) {
    lVar4 = (longlong)iVar3 * 0xfc + *(longlong *)(param_1 + 0x1b8);
    iVar3 = (**(code **)(param_2 + 0x68))(param_2,6,&local_48);
    if (5 < iVar3) {
      iVar3 = local_3c;
      if (local_3c < 0) {
        iVar3 = -local_3c;
      }
      if (iVar3 != 0) {
        if (iVar3 != 0x10000) {
          uVar2 = FUN_144b555e0(1000,iVar3);
          *(undefined2 *)(param_1 + 0x68) = uVar2;
          local_48 = FUN_144b555e0(local_48,iVar3);
          local_44 = FUN_144b555e0(local_44,iVar3);
          local_40 = FUN_144b555e0(local_40,iVar3);
          local_38 = FUN_144b555e0(local_38,iVar3);
          local_34 = FUN_144b555e0(local_34,iVar3);
          bVar5 = local_3c < 0;
          local_3c = 0x10000;
          if (bVar5) {
            local_3c = -0x10000;
          }
        }
        *(undefined4 *)(lVar4 + 0xd8) = local_48;
        *(undefined4 *)(lVar4 + 0xe0) = local_44;
        *(undefined4 *)(lVar4 + 0xdc) = local_40;
        *(int *)(lVar4 + 0xe4) = local_3c;
        cVar1 = FUN_144b570a0(lVar4 + 0xd8);
        if (cVar1 == '\0') {
          *(undefined4 *)(param_2 + 0x18) = 3;
        }
        else {
          *(int *)(lVar4 + 0xe8) = local_38 >> 0x10;
          *(int *)(lVar4 + 0xec) = local_34 >> 0x10;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 144dfdb30 FUN_144dfdb30 body=255 status=ok
// SIG undefined FUN_144dfdb30(void)

ulonglong FUN_144dfdb30(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int local_res8 [2];
  
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  lVar3 = *(longlong *)(param_2 + 0x90);
  uVar5 = 0;
  local_res8[0] = 0;
  uVar4 = (**(code **)(param_2 + 0x48))(param_2);
  uVar6 = (uint)uVar4;
  if (-1 < (int)uVar6) {
    uVar1 = *(uint *)(lVar3 + 8);
    uVar4 = (ulonglong)uVar1 * 0x51eb851f & 0xffffffff;
    uVar1 = uVar1 / 100;
    if (uVar1 < uVar6) {
      uVar6 = uVar1;
    }
    if (*(longlong *)(param_1 + 0x1b8) == 0) {
      uVar4 = FUN_144b561b0(uVar2,0xfc,0,uVar6,0,local_res8);
      *(ulonglong *)(param_1 + 0x1b8) = uVar4;
      if ((local_res8[0] == 0) &&
         (*(uint *)(param_1 + 0x1b0) = uVar6, uVar7 = uVar5, 0 < (int)uVar6)) {
        do {
          uVar4 = *(ulonglong *)(param_1 + 0x1b8);
          uVar6 = (int)uVar7 + 1;
          *(undefined4 *)(uVar5 + 0x70 + uVar4) = 7;
          *(undefined4 *)(uVar5 + 0x74 + uVar4) = 1;
          *(undefined4 *)(uVar5 + 4 + uVar4) = 4;
          *(undefined4 *)(uVar5 + 0xb4 + uVar4) = 0xf5c;
          *(undefined4 *)(uVar5 + 0x6c + uVar4) = 0x27a000;
          uVar5 = uVar5 + 0xfc;
          uVar7 = (ulonglong)uVar6;
        } while ((int)uVar6 < *(int *)(param_1 + 0x1b0));
      }
    }
  }
  return uVar4;
}



// FUNCTION 144dfdc30 FUN_144dfdc30 body=76 status=ok
// SIG undefined FUN_144dfdc30(void)

void FUN_144dfdc30(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_2 + 0xb8);
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x1b0))) {
    lVar3 = (longlong)iVar1 * 0xfc + *(longlong *)(param_1 + 0x1b8);
    uVar2 = (**(code **)(param_2 + 0x50))(param_2,0);
    *(undefined4 *)(lVar3 + 0xd0) = uVar2;
    *(undefined4 *)(lVar3 + 0xb4) = uVar2;
  }
  return;
}



// FUNCTION 144dfdd60 FUN_144dfdd60 body=87 status=ok
// SIG undefined FUN_144dfdd60(void)

undefined8 FUN_144dfdd60(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1d8);
  if (lVar1 != 0) {
    lVar2 = FUN_144b55a90(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) + 8),
                          "pshinter");
    if (lVar2 != 0) {
      uVar3 = (**(code **)(lVar1 + 8))(lVar2);
      *(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x28) = uVar3;
    }
  }
  return 0;
}



// FUNCTION 144dfddc0 FUN_144dfddc0 body=117 status=ok
// SIG undefined FUN_144dfddc0(void)

void FUN_144dfddc0(longlong *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  
  if (*(longlong *)param_1[7] != 0) {
    puVar1 = *(undefined8 **)(*param_1 + 0x1d8);
    lVar3 = FUN_144b55a90(*(undefined8 *)(*(longlong *)(*param_1 + 0x90) + 8),"pshinter");
    if (((lVar3 != 0) && (puVar1 != (undefined8 *)0x0)) &&
       (pcVar2 = (code *)*puVar1, pcVar2 != (code *)0x0)) {
      lVar3 = (*pcVar2)(lVar3);
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 0x10))(*(undefined8 *)param_1[7]);
      }
    }
    *(undefined8 *)param_1[7] = 0;
  }
  return;
}



// FUNCTION 144dfde40 FUN_144dfde40 body=157 status=ok
// SIG undefined FUN_144dfde40(void)

ulonglong FUN_144dfde40(longlong *param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 local_res8;
  
  puVar3 = *(undefined8 **)(*param_1 + 0x1d8);
  lVar2 = FUN_144b55a90(*(undefined8 *)(*(longlong *)(*param_1 + 0x90) + 8),"pshinter");
  if ((((lVar2 != 0) && (puVar3 != (undefined8 *)0x0)) &&
      (pcVar1 = (code *)*puVar3, pcVar1 != (code *)0x0)) &&
     (puVar3 = (undefined8 *)(*pcVar1)(lVar2), puVar3 != (undefined8 *)0x0)) {
    lVar2 = *param_1;
    uVar4 = (*(code *)*puVar3)(*(undefined8 *)(lVar2 + 0x98),
                               (longlong)*(int *)(lVar2 + 4) * 0xfc + *(longlong *)(lVar2 + 0x1b8),
                               &local_res8);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    *(undefined8 *)param_1[7] = local_res8;
    return uVar4 & 0xffffffff;
  }
  return 0;
}



// FUNCTION 144dfdee0 FUN_144dfdee0 body=946 status=ok
// SIG undefined FUN_144dfdee0(void)

void FUN_144dfdee0(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  char *pcVar2;
  longlong lVar3;
  char *pcVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 auStack_1a8 [32];
  longlong *local_188;
  int local_180;
  undefined8 local_178;
  char local_168 [9];
  char local_15f [263];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_188 = param_1;
  local_178 = param_2;
  memset(param_1,0,0xc0);
  (*(code *)**(undefined8 **)(param_4 + 8))(param_1,0,0,param_3);
  param_1[0x12] = param_2;
  local_180 = FUN_144b59870(param_2);
  iVar6 = FUN_144b59990(param_2,0x1f);
  if (iVar6 == 0) {
    iVar6 = strncmp(*(char **)(param_2 + 0x38),"%!PS-Adobe-3.0 Resource-CIDFont",0x1f);
    FUN_144b59ab0(param_2);
    if (iVar6 == 0) {
LAB_144dfdfb0:
      uVar13 = 0;
      pcVar10 = local_168;
      uVar9 = 0x109;
      iVar6 = FUN_144b59870(param_2);
      while( true ) {
        iVar7 = FUN_144b59870(param_2);
        uVar11 = *(int *)(param_2 + 8) - iVar7;
        if (uVar9 < uVar11) {
          uVar11 = uVar9;
        }
        uVar12 = (ulonglong)uVar11;
        iVar7 = FUN_144b59880(param_2,pcVar10,uVar12);
        if (iVar7 != 0) break;
        pcVar10[uVar12] = '\0';
        pcVar2 = local_168;
joined_r0x000144dfe00d:
        pcVar4 = pcVar2;
        if (pcVar4 < pcVar10 + (uVar12 - 6)) {
          if ((*pcVar4 != 'S') || (iVar7 = strncmp(pcVar4,"StartData",9), iVar7 != 0))
          goto LAB_144dfe02f;
          iVar7 = ((int)pcVar4 - (int)local_168) + 10;
          goto LAB_144dfe0b9;
        }
        if (uVar13 + uVar11 < 9) break;
        memmove(local_168,(void *)((longlong)&local_178 + uVar13 + uVar12 + 7),9);
        pcVar10 = local_15f;
        uVar9 = 0x100;
        uVar13 = 9;
        iVar6 = iVar6 + 0x100;
        param_2 = local_178;
      }
    }
  }
LAB_144dfe280:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_1a8);
LAB_144dfe02f:
  pcVar2 = pcVar4 + 1;
  if ((pcVar4[1] == 's') && (iVar7 = strncmp(pcVar4,"/sfnts",6), iVar7 == 0)) {
    iVar7 = ((int)pcVar4 - (int)local_168) + 7;
LAB_144dfe0b9:
    lVar3 = local_178;
    iVar7 = iVar7 + iVar6;
    uVar9 = iVar7 - local_180;
    iVar6 = FUN_144b597a0(local_178,local_180);
    if (iVar6 != 0) goto LAB_144dfe280;
    plVar1 = param_1 + 0x13;
    iVar6 = FUN_144b59b00(lVar3,uVar9,plVar1);
    if (iVar6 != 0) goto LAB_144dfe280;
    pcVar10 = (char *)*plVar1;
    *(int *)((longlong)param_1 + 0xa4) = iVar7;
    param_1[2] = (longlong)(pcVar10 + uVar9);
    *(uint *)(param_1 + 0x14) = uVar9;
    param_1[1] = (longlong)pcVar10;
    *param_1 = (longlong)pcVar10;
    *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
    (*(code *)param_1[8])(param_1);
    (*(code *)param_1[7])(param_1);
    pcVar2 = (char *)*param_1;
    (*(code *)param_1[8])(param_1);
    (*(code *)param_1[7])(param_1);
    lVar3 = param_1[2];
    pcVar4 = (char *)*param_1;
    param_2 = local_178;
    goto joined_r0x000144dfe164;
  }
  goto joined_r0x000144dfe00d;
joined_r0x000144dfe164:
  local_178 = param_2;
  if ((char *)(lVar3 - 6U) < pcVar4) goto LAB_144dfe1ea;
  if ((int)local_188[3] != 0) goto LAB_144dfe280;
  if (((*pcVar4 == 'S') && (pcVar4 <= (char *)(lVar3 - 9U))) &&
     (iVar6 = strncmp(pcVar4,"StartData",9), iVar6 == 0)) {
    iVar6 = strncmp(pcVar10,"(Hex)",5);
    if ((iVar6 == 0) && (lVar8 = strtol(pcVar2,(char **)0x0,10), -1 < lVar8)) {
      *(long *)(local_188 + 0x15) = lVar8;
    }
    goto LAB_144dfe280;
  }
  if ((pcVar4[1] == 's') && (iVar6 = strncmp(pcVar4,"/sfnts",6), iVar6 == 0)) goto LAB_144dfe280;
  plVar5 = local_188;
  (*(code *)local_188[8])(local_188);
  (*(code *)plVar5[7])(plVar5);
  pcVar10 = pcVar2;
  pcVar2 = pcVar4;
  pcVar4 = (char *)*local_188;
  param_2 = local_178;
  goto joined_r0x000144dfe164;
LAB_144dfe1ea:
  FUN_144b59b40(param_2,plVar1);
  iVar6 = FUN_144b597a0(param_2,iVar7);
  param_1 = local_188;
  if (iVar6 != 0) goto LAB_144dfe280;
  goto LAB_144dfdfb0;
}



// FUNCTION 144dfe2a0 FUN_144dfe2a0 body=685 status=ok
// SIG undefined FUN_144dfe2a0(void)

int FUN_144dfe2a0(longlong param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  int local_res8 [2];
  undefined1 local_d8 [48];
  code *local_a8;
  undefined8 local_48;
  longlong local_40;
  undefined4 local_38;
  int local_34;
  uint local_30;
  
  uVar7 = *(undefined8 *)(param_1 + 0x98);
  memset(local_d8,0,200);
  local_res8[0] =
       FUN_144dfdee0(local_d8,*(undefined8 *)(param_1 + 0xa0),uVar7,*(undefined8 *)(param_1 + 0xe0))
  ;
  if (((local_res8[0] == 0) &&
      (local_res8[0] = FUN_144dfeab0(param_1,local_d8,local_40,local_38), local_res8[0] == 0)) &&
     (-1 < param_2)) {
    puVar6 = (undefined8 *)FUN_144b560d0(uVar7,0x48,local_res8);
    *(undefined8 **)(param_1 + 0x1e8) = puVar6;
    if (local_res8[0] == 0) {
      uVar10 = 0;
      puVar4 = *(undefined8 **)(param_1 + 0xa0);
      if (local_30 == 0) {
        uVar7 = puVar4[1];
        *puVar6 = *puVar4;
        puVar6[1] = uVar7;
        uVar7 = puVar4[3];
        puVar6[2] = puVar4[2];
        puVar6[3] = uVar7;
        uVar7 = puVar4[5];
        puVar6[4] = puVar4[4];
        puVar6[5] = uVar7;
        uVar7 = puVar4[7];
        puVar6[6] = puVar4[6];
        puVar6[7] = uVar7;
        puVar6[8] = puVar4[8];
        *(int *)(param_1 + 0x1c0) = local_34;
      }
      else {
        if ((uint)(*(int *)(puVar4 + 1) - local_34) < local_30) {
          local_30 = *(int *)(puVar4 + 1) - local_34;
        }
        uVar7 = FUN_144b560d0(uVar7,local_30,local_res8);
        *(undefined8 *)(param_1 + 0x1e0) = uVar7;
        if ((local_res8[0] != 0) ||
           (local_res8[0] = FUN_144dff0b0(uVar7,local_30,local_34,param_1), local_res8[0] != 0))
        goto LAB_144dfe516;
        FUN_144b59760(*(undefined8 *)(param_1 + 0x1e8),*(undefined8 *)(param_1 + 0x1e0),local_30);
        *(undefined4 *)(param_1 + 0x1c0) = 0;
      }
      iVar1 = *(int *)(param_1 + 0x1a4);
      if (-1 < iVar1) {
        uVar13 = *(uint *)(param_1 + 0x1a8);
        uVar8 = (ulonglong)uVar13;
        if (((0 < (int)uVar13) && (iVar1 < 5)) && ((int)uVar13 < 5)) {
          uVar13 = uVar13 + iVar1;
          uVar12 = *(int *)(*(longlong *)(param_1 + 0x1e8) + 8) - *(int *)(param_1 + 0x1c0);
          uVar11 = uVar10;
          if (0 < *(int *)(param_1 + 0x1b0)) {
            do {
              lVar5 = *(longlong *)(param_1 + 0x1b8);
              if (1000 < *(uint *)(uVar11 + 0x70 + lVar5)) {
                *(undefined4 *)(uVar11 + 0x70 + lVar5) = 7;
              }
              if (1000 < *(uint *)(uVar11 + 0x74 + lVar5)) {
                *(undefined4 *)(uVar11 + 0x74 + lVar5) = 1;
              }
              uVar9 = *(uint *)(uVar11 + 0xf8 + lVar5);
              if (((int)uVar9 < 0) ||
                 (((uVar2 = *(uint *)(uVar11 + 0xf0 + lVar5), uVar2 != 0 && ((int)uVar9 < 1)) ||
                  (4 < (int)uVar9)))) goto LAB_144dfe50f;
              uVar3 = *(uint *)(uVar11 + 0xf4 + lVar5);
              uVar8 = (ulonglong)uVar3;
              if (((uVar12 < uVar3) || ((int)uVar2 < 0)) ||
                 ((uVar9 != 0 &&
                  (uVar8 = (ulonglong)(uVar12 - uVar3) % (ulonglong)uVar9,
                  (uVar12 - uVar3) / uVar9 < uVar2)))) goto LAB_144dfe50f;
              uVar9 = (int)uVar10 + 1;
              uVar10 = (ulonglong)uVar9;
              uVar11 = uVar11 + 0xfc;
            } while ((int)uVar9 < *(int *)(param_1 + 0x1b0));
          }
          if ((*(uint *)(param_1 + 0x1a0) <= uVar12) &&
             ((uVar13 == 0 ||
              (uVar12 = uVar12 - *(uint *)(param_1 + 0x1a0),
              uVar8 = (ulonglong)uVar12 % (ulonglong)uVar13,
              *(uint *)(param_1 + 0x1ac) <= uVar12 / uVar13)))) {
            local_res8[0] = FUN_144dfec50(param_1,uVar8);
            goto LAB_144dfe516;
          }
        }
      }
LAB_144dfe50f:
      local_res8[0] = 3;
    }
  }
LAB_144dfe516:
  if (local_40 != 0) {
    FUN_144b59b40(local_48,&local_40);
  }
  (*local_a8)(local_d8);
  return local_res8[0];
}



// FUNCTION 144dfe550 FUN_144dfe550 body=1139 status=ok
// SIG undefined FUN_144dfe550(void)

void FUN_144dfe550(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  int iVar8;
  void *pvVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  char cVar13;
  char cVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  void *pvVar20;
  undefined1 auStack_758 [32];
  int local_738;
  undefined1 local_734;
  void *local_730;
  int local_728;
  undefined8 local_720;
  byte *local_718;
  int local_710;
  undefined1 local_708 [808];
  undefined1 *local_3e0;
  ulonglong local_328;
  int local_320;
  int local_31c;
  undefined1 local_318 [720];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_758;
  lVar16 = *(longlong *)(param_1 + 8);
  pvVar20 = (void *)0x0;
  uVar19 = 0;
  local_730 = (void *)0x0;
  local_728 = (int)param_2;
  local_734 = 0;
  lVar18 = *(longlong *)(lVar16 + 0x1e8);
  local_738 = 0;
  local_328 = *(ulonglong *)(lVar16 + 0xe0);
  uVar2 = *(undefined8 *)(lVar16 + 0x98);
  plVar3 = *(longlong **)(*(longlong *)(lVar16 + 0xd0) + 0x50);
  pvVar9 = pvVar20;
  local_720 = uVar2;
  if (plVar3 == (longlong *)0x0) {
    iVar8 = *(int *)(lVar16 + 0x1a8) + *(int *)(lVar16 + 0x1a4);
    local_738 = FUN_144b597a0(lVar18,local_728 * iVar8 + *(int *)(lVar16 + 0x1a0) +
                                     *(int *)(lVar16 + 0x1c0));
    if ((local_738 != 0) || (local_738 = FUN_144b59990(lVar18,iVar8 * 2), local_738 != 0))
    goto LAB_144dfe830;
    uVar15 = 0;
    pbVar10 = *(byte **)(lVar18 + 0x38);
    for (cVar13 = *(char *)(lVar16 + 0x1a4); cVar13 != '\0'; cVar13 = cVar13 + -1) {
      bVar1 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      uVar15 = uVar15 << 8 | (uint)bVar1;
    }
    uVar17 = 0;
    cVar13 = *(char *)(lVar16 + 0x1a8);
    for (cVar14 = cVar13; cVar14 != '\0'; cVar14 = cVar14 + -1) {
      bVar1 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      uVar17 = uVar17 << 8 | (uint)bVar1;
    }
    pbVar10 = pbVar10 + *(int *)(lVar16 + 0x1a4);
    for (; cVar13 != '\0'; cVar13 = cVar13 + -1) {
      bVar1 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      uVar19 = (int)pvVar20 << 8 | (uint)bVar1;
      pvVar20 = (void *)(ulonglong)uVar19;
    }
    FUN_144b59ab0(lVar18);
    if (((uVar15 < *(uint *)(lVar16 + 0x1b0)) && (uVar19 <= *(uint *)(lVar18 + 8))) &&
       (uVar17 <= uVar19)) {
      uVar19 = uVar19 - uVar17;
      pvVar20 = (void *)(ulonglong)uVar19;
      pvVar9 = local_730;
      if ((uVar19 == 0) ||
         (local_730 = (void *)FUN_144b560d0(local_720,uVar19,&local_738), pvVar9 = local_730,
         local_738 != 0)) goto LAB_144dfe830;
      local_738 = FUN_144b59890(lVar18,*(int *)(lVar16 + 0x1c0) + uVar17,local_730,uVar19);
      goto LAB_144dfe7af;
    }
  }
  else {
    local_738 = (**(code **)*plVar3)(plVar3[1],param_2,&local_718);
    if (local_738 != 0) goto LAB_144dfe830;
    uVar15 = 0;
    pbVar10 = local_718;
    for (cVar13 = *(char *)(lVar16 + 0x1a4); cVar13 != '\0'; cVar13 = cVar13 + -1) {
      bVar1 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      uVar15 = uVar15 << 8 | (uint)bVar1;
    }
    if (local_710 != 0) {
      uVar19 = local_710 - *(int *)(lVar16 + 0x1a4);
      pvVar20 = (void *)(ulonglong)uVar19;
      local_730 = (void *)FUN_144b560d0(uVar2,pvVar20,&local_738);
      if (local_738 == 0) {
        memcpy(local_730,local_718 + *(int *)(lVar16 + 0x1a4),(ulonglong)uVar19);
      }
    }
    (**(code **)(*plVar3 + 8))(plVar3[1],&local_718);
LAB_144dfe7af:
    uVar7 = local_328;
    pvVar9 = local_730;
    if (local_738 != 0) goto LAB_144dfe830;
    puVar11 = (undefined4 *)((ulonglong)uVar15 * 0x10 + *(longlong *)(lVar16 + 0x1d0));
    *(undefined4 *)(param_1 + 0x674) = *puVar11;
    uVar12 = 0;
    *(undefined8 *)(param_1 + 0x678) = *(undefined8 *)(puVar11 + 2);
    *(undefined8 *)(param_1 + 0x680) = 0;
    *(undefined8 *)(param_1 + 0x688) = 0;
    lVar18 = (ulonglong)uVar15 * 0xfc + *(longlong *)(lVar16 + 0x1b8);
    uVar4 = *(undefined4 *)(lVar18 + 0xdc);
    uVar5 = *(undefined4 *)(lVar18 + 0xe0);
    uVar6 = *(undefined4 *)(lVar18 + 0xe4);
    *(undefined4 *)(param_1 + 0x690) = *(undefined4 *)(lVar18 + 0xd8);
    *(undefined4 *)(param_1 + 0x694) = uVar4;
    *(undefined4 *)(param_1 + 0x698) = uVar5;
    *(undefined4 *)(param_1 + 0x69c) = uVar6;
    *(undefined8 *)(param_1 + 0x6a0) = *(undefined8 *)(lVar18 + 0xe8);
    uVar19 = *(uint *)(lVar18 + 4);
    *(uint *)(param_1 + 0x670) = uVar19;
    uVar15 = (uint)pvVar20;
    if (((int)uVar19 < 0) || (uVar12 = (ulonglong)uVar19, uVar19 <= uVar15)) {
      if (-1 < (int)uVar19) {
        (**(code **)(local_328 + 0x20))(local_730,pvVar20,0x10ea);
      }
      if (*(char *)(param_1 + 0x5e) == '\0') {
        (**(code **)(uVar7 + 0x30))(local_708,param_1,1);
        (**(code **)(uVar7 + 0x38))(lVar16,lVar18,local_318);
        local_3e0 = local_318;
        iVar8 = uVar15 - (int)uVar12;
        lVar16 = uVar12 + (longlong)local_730;
        local_738 = (**(code **)(*(longlong *)(uVar7 + 0x18) + 0x18))(local_708,lVar16,iVar8);
        if ((char)local_738 == -0x5c) {
          local_734 = 1;
          *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0xf8) = 0;
          local_738 = (**(code **)(*(longlong *)(uVar7 + 0x18) + 0x18))(local_708,lVar16,iVar8);
        }
      }
      else {
        local_738 = (**(code **)(*(longlong *)(uVar7 + 0x18) + 0x10))
                              (param_1,uVar12 + (longlong)local_730,uVar15 - (int)uVar12);
      }
      pvVar9 = local_730;
      if (((local_738 == 0) && (plVar3 != (longlong *)0x0)) && (*(longlong *)(*plVar3 + 0x10) != 0))
      {
        iVar8 = FUN_144b55630(*(undefined4 *)(param_1 + 0x38));
        local_328 = (ulonglong)(uint)(iVar8 >> 0x10);
        local_320 = FUN_144b55630(*(undefined4 *)(param_1 + 0x40));
        local_320 = local_320 >> 0x10;
        local_31c = FUN_144b55630(*(undefined4 *)(param_1 + 0x44));
        local_31c = local_31c >> 0x10;
        local_738 = (**(code **)(*plVar3 + 0x10))(plVar3[1],local_728,0,&local_328);
        *(int *)(param_1 + 0x38) = (int)local_328 << 0x10;
        *(int *)(param_1 + 0x40) = local_320 << 0x10;
        *(int *)(param_1 + 0x44) = local_31c << 0x10;
        pvVar9 = local_730;
      }
      goto LAB_144dfe830;
    }
  }
  local_738 = 9;
  pvVar9 = local_730;
LAB_144dfe830:
  FUN_144b56350(local_720,pvVar9);
  *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0xf9) = local_734;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_758);
}



// FUNCTION 144dfe9e0 FUN_144dfe9e0 body=204 status=ok
// SIG undefined FUN_144dfe9e0(void)

ulonglong FUN_144dfe9e0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong local_res8 [4];
  
  if (*(int *)(param_3 + 0xc) == 0xb) {
    (**(code **)(param_3 + 0x10))(param_1,param_2);
    return (ulonglong)*(uint *)(param_2 + 0x18);
  }
  iVar1 = *(int *)(param_3 + 8);
  if (iVar1 == 0) {
    local_res8[0] = param_1 + 0xe8;
  }
  else if (iVar1 == 2) {
    local_res8[0] = param_1 + 0x1c8;
  }
  else if (iVar1 == 3) {
    local_res8[0] = param_1 + 0x110;
  }
  else if (iVar1 == 5) {
    local_res8[0] = param_1 + 0x148;
  }
  else {
    iVar1 = *(int *)(param_2 + 0xb8);
    if ((iVar1 < 0) || (*(int *)(param_1 + 0x1b0) <= iVar1)) {
      return 0xa0;
    }
    local_res8[0] = (longlong)iVar1 * 0xfc + *(longlong *)(param_1 + 0x1b8);
  }
  if (1 < *(int *)(param_3 + 0xc) - 9U) {
    uVar2 = (**(code **)(param_2 + 0x80))();
    return uVar2;
  }
  uVar2 = (**(code **)(param_2 + 0x88))(param_2,param_3,local_res8,0,0);
  return uVar2;
}



// FUNCTION 144dfeab0 FUN_144dfeab0 body=402 status=ok
// SIG undefined FUN_144dfeab0(void)

ulonglong FUN_144dfeab0(longlong param_1,int *param_2,char *param_3,uint param_4)

{
  int iVar1;
  char *pcVar2;
  ulonglong uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  undefined **ppuVar9;
  char *pcVar10;
  
  pcVar10 = param_3 + param_4;
  param_2[6] = 0;
  *(char **)(param_2 + 4) = pcVar10;
  *(char **)param_2 = param_3;
  do {
    while( true ) {
      *(char **)param_2 = param_3;
      (**(code **)(param_2 + 0xe))(param_2);
      if (*(char **)param_2 < pcVar10) {
        pcVar6 = *(char **)param_2 + -0x11;
      }
      else {
        pcVar6 = pcVar10 + -0x12;
      }
      for (; param_3 < pcVar6; param_3 = param_3 + 1) {
        if (((*param_3 == '%') && (iVar1 = strncmp(param_3,"%ADOBeginFontDict",0x11), iVar1 == 0))
           && (0 < *(int *)(param_1 + 0x1b0))) {
          param_2[0x2e] = param_2[0x2e] + 1;
        }
      }
      pcVar6 = *(char **)param_2;
      if (((pcVar10 <= pcVar6) || ((**(code **)(param_2 + 0x10))(), pcVar10 <= *(char **)param_2))
         || (param_2[6] != 0)) {
        uVar3 = 3;
        if (*(int *)(param_1 + 0x1b0) != 0) {
          uVar3 = (ulonglong)(uint)param_2[6];
        }
        return uVar3;
      }
      if ((*pcVar6 == '/') && (pcVar6 + 2 < pcVar10)) break;
LAB_144dfebfb:
      param_3 = *(char **)param_2;
    }
    pcVar5 = pcVar6 + 1;
    uVar8 = *param_2 - (int)pcVar5;
    if (0x14 < uVar8 - 1) goto LAB_144dfebfb;
    pcVar7 = "CIDFontName";
    ppuVar9 = &PTR_s_CIDFontName_149a0bd70;
    do {
      if (*pcVar5 == *pcVar7) {
        uVar3 = 0xffffffffffffffff;
        do {
          uVar3 = uVar3 + 1;
        } while (pcVar7[uVar3] != '\0');
        if (uVar8 == uVar3) {
          uVar4 = 1;
          if (uVar8 < 2) {
LAB_144dfebe6:
            uVar3 = FUN_144dfe9e0(param_1,param_2,ppuVar9);
            param_2[6] = (int)uVar3;
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            goto LAB_144dfebfb;
          }
          pcVar2 = pcVar6 + 2;
          while (*pcVar2 == pcVar2[(longlong)pcVar7 - (longlong)pcVar5]) {
            uVar4 = uVar4 + 1;
            pcVar2 = pcVar2 + 1;
            if (uVar8 <= uVar4) goto LAB_144dfebe6;
          }
        }
      }
      pcVar7 = ppuVar9[6];
      ppuVar9 = ppuVar9 + 6;
    } while (pcVar7 != (char *)0x0);
    param_3 = *(char **)param_2;
  } while( true );
}



// FUNCTION 144dfec50 FUN_144dfec50 body=1114 status=ok
// SIG undefined FUN_144dfec50(void)

int FUN_144dfec50(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  byte *pbVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  uint *puVar17;
  longlong lVar18;
  uint *puVar19;
  char cVar20;
  ulonglong uVar21;
  int local_res10 [2];
  uint local_res18;
  int local_res20;
  longlong local_60;
  
  lVar4 = *(longlong *)(param_1 + 0xe0);
  uVar8 = 0;
  uVar5 = *(undefined8 *)(param_1 + 0x98);
  lVar6 = *(longlong *)(param_1 + 0x1e8);
  puVar10 = (uint *)0x0;
  local_res18 = 0;
  puVar9 = (uint *)FUN_144b561b0(uVar5,0x10,0,*(undefined4 *)(param_1 + 0x1b0),0,local_res10);
  *(uint **)(param_1 + 0x1d0) = puVar9;
  if ((local_res10[0] == 0) && (local_res20 = 0, 0 < *(int *)(param_1 + 0x1b0))) {
    local_60 = 0;
    do {
      lVar18 = *(longlong *)(param_1 + 0x1b8) + local_60;
      uVar2 = *(uint *)(lVar18 + 0xf0);
      uVar15 = (ulonglong)uVar2;
      iVar3 = *(int *)(lVar18 + 4);
      if (uVar2 != 0) {
        uVar16 = uVar2 + 1;
        uVar13 = local_res18;
        if (uVar8 < uVar16) {
          uVar13 = uVar2 + 4 & 0xfffffffc;
          if (local_res18 < uVar13) {
            puVar10 = (uint *)FUN_144b561b0(uVar5,4,local_res18,uVar13,puVar10,local_res10);
            if (local_res10[0] == 0) goto LAB_144dfed80;
          }
          else {
            local_res10[0] = 0xa0;
          }
        }
        else {
LAB_144dfed80:
          local_res18 = uVar13;
          local_res10[0] = FUN_144b597a0(lVar6,*(int *)(lVar18 + 0xf4) + *(int *)(param_1 + 0x1c0));
          if ((local_res10[0] == 0) &&
             (local_res10[0] = FUN_144b59990(lVar6,*(int *)(lVar18 + 0xf8) * uVar16),
             local_res10[0] == 0)) {
            pbVar12 = *(byte **)(lVar6 + 0x38);
            uVar21 = (ulonglong)uVar16;
            puVar19 = puVar10;
            do {
              uVar8 = 0;
              for (cVar20 = *(char *)(lVar18 + 0xf8); cVar20 != '\0'; cVar20 = cVar20 + -1) {
                bVar1 = *pbVar12;
                pbVar12 = pbVar12 + 1;
                uVar8 = uVar8 << 8 | (uint)bVar1;
              }
              *puVar19 = uVar8;
              puVar19 = puVar19 + 1;
              uVar21 = uVar21 - 1;
            } while (uVar21 != 0);
            FUN_144b59ab0(lVar6);
            uVar21 = 1;
            if (uVar2 != 0) {
              do {
                if (puVar10[uVar21] < puVar10[(int)uVar21 - 1]) goto LAB_144dfefda;
                uVar8 = (int)uVar21 + 1;
                uVar21 = (ulonglong)uVar8;
              } while (uVar8 <= uVar2);
            }
            if ((uint)(*(int *)(lVar6 + 8) - *(int *)(param_1 + 0x1c0)) < puVar10[uVar15]) {
LAB_144dfefda:
              local_res10[0] = 3;
            }
            else {
              iVar14 = puVar10[uVar15] - *puVar10;
              uVar11 = FUN_144b561b0(uVar5,8,0,uVar16,0,local_res10);
              *(undefined8 *)(puVar9 + 2) = uVar11;
              if (local_res10[0] == 0) {
                uVar11 = FUN_144b560d0(uVar5,iVar14,local_res10);
                **(undefined8 **)(puVar9 + 2) = uVar11;
                if (((local_res10[0] == 0) &&
                    (local_res10[0] = FUN_144b597a0(lVar6,*puVar10 + *(int *)(param_1 + 0x1c0)),
                    local_res10[0] == 0)) &&
                   (local_res10[0] = FUN_144b59880(lVar6,**(undefined8 **)(puVar9 + 2),iVar14),
                   local_res10[0] == 0)) {
                  uVar8 = 1;
                  if (uVar2 != 0) {
                    do {
                      uVar13 = uVar8 - 1;
                      uVar21 = (ulonglong)uVar8;
                      uVar8 = uVar8 + 1;
                      *(ulonglong *)(*(longlong *)(puVar9 + 2) + uVar21 * 8) =
                           (ulonglong)(puVar10[uVar21] - puVar10[uVar13]) +
                           *(longlong *)(*(longlong *)(puVar9 + 2) + (ulonglong)uVar13 * 8);
                    } while (uVar8 <= uVar2);
                  }
                  if ((-1 < iVar3) && (uVar2 != 0)) {
                    lVar18 = 0;
                    puVar19 = puVar10;
                    puVar17 = puVar10;
                    do {
                      puVar17 = puVar17 + 1;
                      (**(code **)(lVar4 + 0x20))
                                (*(undefined8 *)(lVar18 + *(longlong *)(puVar9 + 2)),
                                 *puVar17 - *puVar19,0x10ea);
                      puVar19 = puVar19 + 1;
                      lVar18 = lVar18 + 8;
                      uVar15 = uVar15 - 1;
                    } while (uVar15 != 0);
                  }
                  *puVar9 = uVar2;
                  uVar8 = local_res18;
                  goto LAB_144dfefa2;
                }
              }
            }
          }
        }
        if (*(longlong *)(param_1 + 0x1d0) != 0) {
          uVar21 = 0;
          uVar15 = uVar21;
          if (0 < *(int *)(param_1 + 0x1b0)) {
            do {
              puVar7 = *(undefined8 **)(uVar21 + 8 + *(longlong *)(param_1 + 0x1d0));
              if (puVar7 != (undefined8 *)0x0) {
                FUN_144b56350(uVar5,*puVar7);
                **(undefined8 **)(uVar21 + 8 + *(longlong *)(param_1 + 0x1d0)) = 0;
              }
              FUN_144b56350(uVar5,*(undefined8 *)(uVar21 + 8 + *(longlong *)(param_1 + 0x1d0)));
              uVar8 = (int)uVar15 + 1;
              *(undefined8 *)(uVar21 + 8 + *(longlong *)(param_1 + 0x1d0)) = 0;
              uVar21 = uVar21 + 0x10;
              uVar15 = (ulonglong)uVar8;
            } while ((int)uVar8 < *(int *)(param_1 + 0x1b0));
          }
          FUN_144b56350(uVar5,*(undefined8 *)(param_1 + 0x1d0));
          *(undefined8 *)(param_1 + 0x1d0) = 0;
        }
        break;
      }
LAB_144dfefa2:
      local_res20 = local_res20 + 1;
      local_60 = local_60 + 0xfc;
      puVar9 = puVar9 + 4;
    } while (local_res20 < *(int *)(param_1 + 0x1b0));
  }
  FUN_144b56350(uVar5,puVar10);
  return local_res10[0];
}



// FUNCTION 144dff0b0 FUN_144dff0b0 body=399 status=ok
// SIG undefined FUN_144dff0b0(void)

void FUN_144dff0b0(char *param_1,uint param_2,undefined4 param_3,longlong param_4)

{
  char *pcVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined1 auStack_168 [32];
  byte local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar3 = *(longlong *)(param_4 + 0xa0);
  iVar8 = FUN_144b597a0(lVar3,param_3);
  if (iVar8 == 0) {
    pbVar11 = local_148;
    pcVar1 = param_1 + param_2;
    pbVar12 = local_148;
    cVar7 = '\x01';
    bVar5 = false;
    while (param_1 < pcVar1) {
      if (pbVar11 <= pbVar12) {
        uVar9 = FUN_144b59870(lVar3);
        uVar10 = *(int *)(lVar3 + 8) - uVar9;
        if (uVar10 == 0) break;
        uVar4 = 0x100;
        if (uVar10 < 0x100) {
          uVar4 = uVar10;
        }
        iVar8 = FUN_144b59880(lVar3,local_148,uVar4);
        if (iVar8 != 0) break;
        pbVar12 = local_148;
        uVar10 = FUN_144b59870(lVar3);
        pbVar11 = local_148 + ((ulonglong)uVar10 - (ulonglong)uVar9);
      }
      bVar2 = *pbVar12;
      if (bVar2 - 0x30 < 10) {
        cVar6 = bVar2 - 0x30;
LAB_144dff1d0:
        if (cVar7 == '\0') {
          *param_1 = *param_1 + cVar6;
          param_1 = param_1 + 1;
        }
        else {
          *param_1 = cVar6 << 4;
        }
        cVar7 = '\x01' - cVar7;
        if (bVar5) break;
      }
      else {
        if ((byte)(bVar2 + 0x9f) < 6) {
          cVar6 = bVar2 + 0x9f;
          goto LAB_144dff1d0;
        }
        if ((byte)(bVar2 + 0xbf) < 6) {
          cVar6 = bVar2 - 0x37;
          goto LAB_144dff1d0;
        }
        if ((0x20 < bVar2) || ((0x100003601U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)) {
          if (bVar2 == 0x3e) {
            cVar6 = '\0';
            bVar5 = true;
            goto LAB_144dff1d0;
          }
          break;
        }
      }
      pbVar12 = pbVar12 + 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_168);
}



// FUNCTION 144dff250 FUN_144dff250 body=93 status=ok
// SIG undefined FUN_144dff250(void)

undefined8 FUN_144dff250(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  
  FUN_144dffd30();
  if (*(int *)(param_1 + 0x188) != *(int *)(param_1 + 0x18c)) {
    if (*param_4 != 0) {
      iVar1 = FUN_144b55580();
      *param_4 = iVar1;
    }
    if (param_4[1] != 0) {
      iVar1 = FUN_144b55580(param_4[1],*(undefined4 *)(param_1 + 0x188),
                            *(undefined4 *)(param_1 + 0x18c));
      param_4[1] = iVar1;
    }
  }
  return 0;
}



// FUNCTION 144dff2f0 FUN_144dff2f0 body=152 status=ok
// SIG undefined FUN_144dff2f0(void)

undefined8
FUN_144dff2f0(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x188);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x18c);
  }
  uVar2 = 0x10000;
  uVar3 = 0x10000;
  if (lVar1 != 0) {
    uVar2 = FUN_144b555e0((ulonglong)*(ushort *)(lVar1 + 0x18) << 6,*(undefined4 *)(param_1 + 0x18c)
                         );
    uVar3 = FUN_144b555e0((ulonglong)*(ushort *)(lVar1 + 0x1a) << 6,*(undefined4 *)(param_1 + 0x18c)
                         );
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uVar2;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = uVar3;
  }
  return 0;
}



// FUNCTION 144dff3a0 FUN_144dff3a0 body=503 status=ok
// SIG undefined FUN_144dff3a0(void)

int FUN_144dff3a0(longlong param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  uint *puVar11;
  int local_res8 [2];
  
  local_res8[0] = 0;
  if ((byte *)(param_1 + 5U) <= param_2) {
    bVar1 = *(byte *)(param_1 + 4);
    uVar6 = (ulonglong)bVar1;
    pbVar7 = (byte *)(param_1 + 5);
    bVar2 = *(byte *)(param_1 + 3);
    uVar10 = *(int *)(param_3 + 0xf) + (uint)bVar1;
    if (*(uint *)((longlong)param_3 + 0x7c) < uVar10) {
      uVar10 = uVar10 + 3 & 0xfffffffc;
      uVar5 = FUN_144b561b0(*param_3,0x28,*(int *)(param_3 + 0xf),uVar10,param_3[0x10],local_res8);
      param_3[0x10] = uVar5;
      if (local_res8[0] != 0) {
        return local_res8[0];
      }
      *(uint *)((longlong)param_3 + 0x7c) = uVar10;
    }
    iVar3 = (bVar2 & 1) + 9;
    if ((bVar2 & 2) == 0) {
      iVar3 = (bVar2 & 1) + 8;
    }
    iVar4 = iVar3 + 1;
    if ((bVar2 & 4) == 0) {
      iVar4 = iVar3;
    }
    iVar3 = iVar4 + 1;
    if ((bVar2 & 8) == 0) {
      iVar3 = iVar4;
    }
    puVar11 = (uint *)(param_3[0x10] + (ulonglong)*(uint *)(param_3 + 0xf) * 0x28);
    iVar4 = iVar3 + 1;
    if ((bVar2 & 0x10) == 0) {
      iVar4 = iVar3;
    }
    if (pbVar7 + iVar4 * (uint)bVar1 <= param_2) {
      if (bVar1 != 0) {
        do {
          if ((bVar2 & 1) == 0) {
            uVar10 = (uint)*pbVar7;
            pbVar8 = pbVar7 + 1;
          }
          else {
            pbVar8 = pbVar7 + 2;
            uVar10 = (uint)CONCAT11(*pbVar7,pbVar7[1]);
          }
          *puVar11 = uVar10;
          if ((bVar2 & 2) == 0) {
            uVar10 = (uint)*pbVar8;
            pbVar7 = pbVar8 + 1;
          }
          else {
            pbVar7 = pbVar8 + 2;
            uVar10 = (uint)CONCAT11(*pbVar8,pbVar8[1]);
          }
          puVar11[1] = uVar10;
          puVar11[2] = (uint)*pbVar7;
          if ((bVar2 & 4) == 0) {
            uVar10 = (uint)pbVar7[1];
            pbVar8 = pbVar7 + 3;
          }
          else {
            pbVar8 = pbVar7 + 4;
            uVar10 = (uint)CONCAT11(pbVar7[1],pbVar7[2]);
          }
          puVar11[5] = uVar10 << 8 | (uint)pbVar8[-1];
          if ((bVar2 & 8) == 0) {
            uVar10 = (uint)*pbVar8;
            pbVar9 = pbVar8 + 2;
          }
          else {
            pbVar9 = pbVar8 + 3;
            uVar10 = (uint)CONCAT11(*pbVar8,pbVar8[1]);
          }
          puVar11[6] = uVar10 << 8 | (uint)pbVar9[-1];
          if ((bVar2 & 0x10) == 0) {
            uVar10 = (uint)*pbVar9;
            pbVar7 = pbVar9 + 1;
          }
          else {
            pbVar7 = pbVar9 + 2;
            uVar10 = (uint)CONCAT11(*pbVar9,pbVar9[1]);
          }
          puVar11[7] = uVar10;
          puVar11 = puVar11 + 10;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      *(uint *)(param_3 + 0xf) = *(int *)(param_3 + 0xf) + (uint)bVar1;
      return local_res8[0];
    }
  }
  return 8;
}



// FUNCTION 144dff5a0 FUN_144dff5a0 body=129 status=ok
// SIG undefined FUN_144dff5a0(void)

int FUN_144dff5a0(void *param_1,int param_2,undefined8 *param_3)

{
  void *_Dst;
  uint uVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  uVar1 = param_2 - (int)param_1;
  if (param_3[0xc] == 0) {
    _Dst = (void *)FUN_144b560d0(*param_3,uVar1 + 1,local_res8);
    param_3[0xc] = _Dst;
    if (local_res8[0] == 0) {
      memcpy(_Dst,param_1,(ulonglong)uVar1);
      *(undefined1 *)((ulonglong)uVar1 + param_3[0xc]) = 0;
      return local_res8[0];
    }
  }
  else {
    local_res8[0] = 0;
  }
  return local_res8[0];
}



// FUNCTION 144dff630 FUN_144dff630 body=238 status=ok
// SIG undefined FUN_144dff630(void)

int FUN_144dff630(byte *param_1,byte *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int local_res18 [2];
  
  local_res18[0] = 0;
  if (param_3[0xb] != 0) {
    return 0;
  }
  if (param_1 + 1 <= param_2) {
    uVar4 = *param_1 & 0xf;
    iVar3 = (*param_1 >> 4) + uVar4;
    if (param_1 + 1 + (uint)(iVar3 * 2) <= param_2) {
      puVar2 = (uint *)FUN_144b561b0(*param_3,4,0,iVar3,0,local_res18);
      if (local_res18[0] != 0) {
        return local_res18[0];
      }
      param_3[0xb] = puVar2;
      param_3[9] = puVar2 + uVar4;
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        pbVar1 = param_1 + 1;
        param_1 = param_1 + 2;
        *puVar2 = (int)(short)((ushort)*pbVar1 << 8) | (uint)*param_1;
        puVar2 = puVar2 + 1;
      }
      return 0;
    }
  }
  return 8;
}



// FUNCTION 144dff720 FUN_144dff720 body=442 status=ok
// SIG undefined FUN_144dff720(void)

int FUN_144dff720(undefined1 *param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  int local_res18 [2];
  
  uVar3 = *param_3;
  local_res18[0] = 0;
  puVar6 = (undefined8 *)FUN_144b560d0(uVar3,0x20,local_res18);
  if (local_res18[0] == 0) {
    if (param_1 + 4 <= param_2) {
      *(undefined1 *)(puVar6 + 1) = *param_1;
      *(ushort *)((longlong)puVar6 + 10) = CONCAT11(param_1[1],param_1[2]);
      bVar1 = param_1[3];
      pbVar8 = param_1 + 4;
      *(byte *)((longlong)puVar6 + 9) = bVar1;
      uVar10 = *(uint *)(param_3 + 1);
      lVar4 = param_3[0x1b];
      *(undefined4 *)((longlong)puVar6 + 0xc) = 3;
      puVar6[2] = pbVar8 + ((ulonglong)uVar10 - lVar4);
      uVar5 = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((bVar1 & 1) != 0) {
        uVar5 = 5;
      }
      *(undefined4 *)((longlong)puVar6 + 0xc) = uVar5;
      if ((bVar1 & 2) != 0) {
        *(int *)((longlong)puVar6 + 0xc) = *(int *)((longlong)puVar6 + 0xc) + 1;
      }
      uVar10 = (uint)*(byte *)(puVar6 + 1);
      iVar2 = *(int *)((longlong)puVar6 + 0xc);
      if (pbVar8 + uVar10 * iVar2 <= param_2) {
        if (*(byte *)(puVar6 + 1) != 0) {
          if ((bVar1 & 1) == 0) {
            uVar7 = (ulonglong)((uVar10 - 1) * iVar2);
            *(uint *)(puVar6 + 3) = (uint)*pbVar8 << 0x10 | (uint)(byte)param_1[5];
            *(uint *)((longlong)puVar6 + 0x1c) =
                 (uint)pbVar8[uVar7] << 0x10 | (uint)pbVar8[uVar7 + 1];
          }
          else {
            pbVar9 = pbVar8 + (uVar10 - 1) * iVar2;
            *(uint *)(puVar6 + 3) =
                 CONCAT31(CONCAT21(CONCAT11(*pbVar8,param_1[5]),param_1[6]),param_1[7]);
            *(uint *)((longlong)puVar6 + 0x1c) =
                 CONCAT31(CONCAT21(CONCAT11(*pbVar9,pbVar9[1]),pbVar9[2]),pbVar9[3]);
          }
          *puVar6 = 0;
          *(undefined8 **)param_3[0x19] = puVar6;
          param_3[0x19] = puVar6;
          *(uint *)(param_3 + 0x17) = *(int *)(param_3 + 0x17) + (uint)*(byte *)(puVar6 + 1);
          return 0;
        }
        FUN_144b56350(uVar3,puVar6);
        return local_res18[0];
      }
    }
    FUN_144b56350(uVar3,puVar6);
    local_res18[0] = 8;
  }
  return local_res18[0];
}



// FUNCTION 144dff8e0 FUN_144dff8e0 body=1000 status=ok
// SIG undefined FUN_144dff8e0(void)

int FUN_144dff8e0(longlong param_1,uint *param_2,uint param_3,int param_4)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  undefined2 *puVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  uint *puVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int local_res10 [4];
  int local_res20 [2];
  uint *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_res20[0] = param_4;
  iVar6 = FUN_144b597a0(param_1,0);
  if ((iVar6 == 0) && (iVar6 = FUN_144b5a030(param_1,&DAT_149a0c970,param_2 + 0x36), iVar6 == 0)) {
    param_2[0x3f] = param_2[0x3f] + param_2[0x48] * 0x10000;
  }
  local_res20[0] = iVar6;
  if (local_res20[0] == 0) {
    if ((((param_2[0x36] == 0x50465230) && (param_2[0x37] < 5)) && (0x39 < param_2[0x39])) &&
       (param_2[0x38] == 0xd0a)) {
      uVar9 = param_2[0x3b];
      uVar13 = 0;
      uVar12 = 0;
      local_res10[0] = FUN_144b597a0(param_1,uVar9);
      uVar8 = uVar12;
      iVar6 = local_res10[0];
      if (((local_res10[0] == 0) &&
          (uVar5 = FUN_144b59d40(param_1,local_res10), iVar6 = local_res10[0], local_res10[0] == 0))
         && ((0x3332 < uVar5 ||
             ((*(uint *)(param_1 + 8) - uVar9 <= (uint)uVar5 * 4 + 2 + (uint)uVar5 ||
              (uVar8 = (uint)uVar5, iVar6 = local_res10[0],
              *(uint *)(param_1 + 8) <= uVar8 * 0x17 + 0x5f)))))) {
        uVar8 = uVar12;
        iVar6 = 8;
      }
      local_res20[0] = iVar6;
      if ((local_res20[0] == 0) && (*param_2 = uVar8, -1 < (int)param_3)) {
        param_3 = param_3 & 0xffff;
        if (param_3 < uVar8) {
          local_res20[0] =
               FUN_144e00910(param_2 + 0x51,param_1,param_3,param_2[0x3b],param_2[0x48] != 0);
          if ((local_res20[0] == 0) &&
             (local_res20[0] = FUN_144e00bf0(param_2 + 0x5e,param_1,param_2[0x5c],param_2[0x5b]),
             local_res20[0] == 0)) {
            param_2[1] = param_3;
            uVar8 = 0;
            param_2[2] = param_2[2] | 1;
            param_2[4] = param_2[0x86] + 1;
            uVar9 = param_2[0x86];
            if (uVar9 != 0) {
              uVar14 = uVar13;
              do {
                uVar8 = (uint)uVar14;
                if (*(int *)(*(longlong *)(param_2 + 0x8a) + 0xc + uVar14 * 0x10) != 0) break;
                uVar8 = uVar8 + 1;
                uVar14 = (ulonglong)uVar8;
              } while (uVar8 < uVar9);
            }
            if (uVar8 == uVar9) {
              if (param_2[0x7c] == 0) {
                return 3;
              }
              param_2[2] = 0;
            }
            if ((param_2[0x68] & 4) == 0) {
              param_2[2] = param_2[2] | 4;
            }
            if ((param_2[0x68] & 1) == 0) {
              param_2[2] = param_2[2] | 0x10;
            }
            else {
              param_2[2] = param_2[2] | 0x20;
            }
            if (param_2[0x7c] != 0) {
              param_2[2] = param_2[2] | 2;
            }
            if (param_2[0x8c] != 0) {
              param_2[2] = param_2[2] | 0x40;
            }
            *(longlong *)(param_2 + 6) = *(longlong *)(param_2 + 0x78);
            if (*(longlong *)(param_2 + 0x78) == 0) {
              *(undefined8 *)(param_2 + 6) = *(undefined8 *)(param_2 + 0x76);
            }
            *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_2 + 0x7a);
            param_2[10] = 0;
            param_2[0xc] = 0;
            param_2[0xd] = 0;
            param_2[0x16] = param_2[100];
            param_2[0x17] = param_2[0x65];
            param_2[0x18] = param_2[0x66];
            param_2[0x19] = param_2[0x67];
            uVar5 = (ushort)param_2[0x62];
            *(ushort *)(param_2 + 0x1a) = uVar5;
            sVar1 = (short)param_2[0x67];
            *(short *)((longlong)param_2 + 0x6a) = sVar1;
            sVar2 = (short)param_2[0x65];
            *(short *)(param_2 + 0x1b) = sVar2;
            sVar4 = (short)((((uint)uVar5 + (uint)uVar5 * 2) * 4) / 10);
            *(short *)((longlong)param_2 + 0x6e) = sVar4;
            if ((int)sVar4 < (int)sVar1 - (int)sVar2) {
              *(short *)((longlong)param_2 + 0x6e) = sVar1 - sVar2;
            }
            uVar9 = param_2[0x7c];
            if (uVar9 != 0) {
              puVar7 = (undefined2 *)
                       FUN_144b561b0(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x30),0x10,0,
                                     uVar9,0,local_res20);
              *(undefined2 **)(param_2 + 0xc) = puVar7;
              if (local_res20[0] != 0) {
                return local_res20[0];
              }
              if (uVar9 != 0) {
                uVar14 = (ulonglong)uVar9;
                piVar10 = *(int **)(param_2 + 0x7e);
                do {
                  *puVar7 = (short)piVar10[1];
                  puVar7[1] = (short)*piVar10;
                  *(int *)(puVar7 + 2) = piVar10[1] << 6;
                  *(int *)(puVar7 + 4) = *piVar10 << 6;
                  *(int *)(puVar7 + 6) = piVar10[1] << 6;
                  uVar14 = uVar14 - 1;
                  puVar7 = puVar7 + 8;
                  piVar10 = piVar10 + 10;
                } while (uVar14 != 0);
              }
              param_2[10] = uVar9;
            }
            if ((param_2[0x68] & 4) == 0) {
              *(short *)(param_2 + 0x1c) = (short)param_2[0x69];
            }
            else {
              uVar9 = param_2[0x86];
              if (uVar9 != 0) {
                puVar11 = (uint *)(*(longlong *)(param_2 + 0x8a) + 4);
                do {
                  if ((int)uVar13 < (int)*puVar11) {
                    uVar13 = (ulonglong)*puVar11;
                  }
                  puVar11 = puVar11 + 4;
                  uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
              }
              *(short *)(param_2 + 0x1c) = (short)uVar13;
            }
            *(undefined2 *)((longlong)param_2 + 0x72) = *(undefined2 *)((longlong)param_2 + 0x6e);
            lVar3 = (longlong)(int)(uint)(ushort)param_2[0x1a] * -0x66666667;
            local_2c = 0x10003;
            local_30 = 0x756e6963;
            *(short *)(param_2 + 0x1d) = (short)(int)(lVar3 >> 0x22) - (short)(lVar3 >> 0x3f);
            *(short *)((longlong)param_2 + 0x76) =
                 (short)((ulonglong)(uint)(ushort)param_2[0x1a] / 0x1e);
            local_38 = param_2;
            local_res20[0] = FUN_144b57870(&DAT_149a0cb30,0,&local_38,0);
            if (param_2[0x8c] != 0) {
              param_2[2] = param_2[2] | 0x40;
            }
          }
        }
        else {
          local_res20[0] = 6;
        }
      }
    }
    else {
      local_res20[0] = 2;
    }
  }
  return local_res20[0];
}



// FUNCTION 144dffcd0 FUN_144dffcd0 body=95 status=ok
// SIG undefined FUN_144dffcd0(void)

void FUN_144dffcd0(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x10);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    FUN_144e01170(param_1 + 0x178,*(undefined8 *)(param_1 + 0x98));
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 144dffd30 FUN_144dffd30 body=598 status=ok
// SIG undefined FUN_144dffd30(void)

ulonglong FUN_144dffd30(longlong param_1,int param_2,int param_3,int *param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  longlong lVar3;
  byte *pbVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  byte bVar13;
  uint uVar14;
  byte bVar15;
  ulonglong uVar12;
  
  uVar14 = param_2 - 1;
  param_4[0] = 0;
  param_4[1] = 0;
  uVar5 = param_3 - 1;
  if (param_2 == 0) {
    uVar14 = 0;
  }
  if (param_3 == 0) {
    uVar5 = 0;
  }
  if ((*(uint *)(param_1 + 0x218) < uVar14) || (*(uint *)(param_1 + 0x218) < uVar5)) {
    return 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x238);
  lVar3 = *(longlong *)(param_1 + 0xa0);
  uVar14 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x228) + (ulonglong)uVar5 * 0x10) |
           *(int *)(*(longlong *)(param_1 + 0x228) + (ulonglong)uVar14 * 0x10) << 0x10;
  while( true ) {
    if (puVar2 == (undefined8 *)0x0) {
      return 0;
    }
    if ((*(uint *)(puVar2 + 3) <= uVar14) && (uVar14 <= *(uint *)((longlong)puVar2 + 0x1c))) break;
    puVar2 = (undefined8 *)*puVar2;
  }
  uVar6 = FUN_144b597a0(lVar3,*(undefined4 *)(puVar2 + 2));
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  uVar6 = FUN_144b59990(lVar3,(uint)*(byte *)(puVar2 + 1) * *(int *)((longlong)puVar2 + 0xc));
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  bVar1 = *(byte *)(puVar2 + 1);
  pbVar4 = *(byte **)(lVar3 + 0x38);
  iVar8 = 0x1f;
  if (bVar1 != 0) {
    for (; bVar1 >> iVar8 == 0; iVar8 = iVar8 + -1) {
    }
  }
  uVar5 = *(uint *)((longlong)puVar2 + 0xc);
  iVar8 = 1 << ((byte)iVar8 & 0x1f);
  uVar11 = iVar8 * uVar5;
  uVar12 = (ulonglong)uVar11;
  bVar13 = *(byte *)((longlong)puVar2 + 9) & 1;
  bVar15 = *(byte *)((longlong)puVar2 + 9) >> 1 & 1;
  iVar8 = (uint)bVar1 - iVar8;
  if (iVar8 == 0) {
joined_r0x000144dffe96:
    while (uVar5 < uVar11) {
      uVar12 = uVar12 >> 1;
      uVar11 = (uint)uVar12;
      pbVar9 = pbVar4 + uVar12;
      if (bVar13 == 0) {
        pbVar10 = pbVar9 + 2;
        uVar7 = (uint)*pbVar9 << 0x10;
      }
      else {
        pbVar10 = pbVar9 + 4;
        uVar7 = (uint)CONCAT21(CONCAT11(*pbVar9,pbVar9[1]),pbVar9[2]) << 8;
      }
      if ((uVar7 | pbVar10[-1]) == uVar14) goto LAB_144dfff27;
      if ((uVar7 | pbVar10[-1]) < uVar14) {
        pbVar4 = pbVar9;
      }
    }
    if (bVar13 == 0) {
      pbVar10 = pbVar4 + 2;
      uVar5 = (uint)*pbVar4 << 0x10;
    }
    else {
      pbVar10 = pbVar4 + 4;
      uVar5 = (uint)CONCAT21(CONCAT11(*pbVar4,pbVar4[1]),pbVar4[2]) << 8;
    }
    if ((uVar5 | pbVar10[-1]) != uVar14) goto LAB_144dfff4b;
  }
  else {
    pbVar9 = pbVar4 + iVar8 * uVar5;
    if (bVar13 == 0) {
      pbVar10 = pbVar9 + 2;
      uVar7 = (uint)*pbVar9 << 0x10;
    }
    else {
      pbVar10 = pbVar9 + 4;
      uVar7 = (uint)CONCAT21(CONCAT11(*pbVar9,pbVar9[1]),pbVar9[2]) << 8;
    }
    if ((uVar7 | pbVar10[-1]) != uVar14) {
      if ((uVar7 | pbVar10[-1]) < uVar14) {
        pbVar4 = pbVar10 + (ulonglong)(bVar15 != 0) + 1;
      }
      goto joined_r0x000144dffe96;
    }
  }
LAB_144dfff27:
  if (bVar15 == 0) {
    uVar14 = (uint)*pbVar10;
  }
  else {
    uVar14 = (int)(short)((ushort)*pbVar10 << 8) | (uint)pbVar10[1];
  }
  *param_4 = (int)*(short *)((longlong)puVar2 + 10) + uVar14;
LAB_144dfff4b:
  FUN_144b59ab0(lVar3);
  return uVar6 & 0xffffffff;
}



// FUNCTION 144dfff90 FUN_144dfff90 body=86 status=ok
// SIG undefined FUN_144dfff90(void)

undefined8 FUN_144dfff90(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = **(undefined8 **)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x120) = uVar1;
  *(undefined1 *)(param_1 + 0x128) = 0;
  FUN_144b56640();
  return 0;
}



// FUNCTION 144dffff0 FUN_144dffff0 body=124 status=ok
// SIG undefined FUN_144dffff0(void)

void FUN_144dffff0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = **(undefined8 **)(param_1 + 0x120);
  FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x100));
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x118));
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined1 *)(param_1 + 0x128) = 0;
  return;
}



// FUNCTION 144e00070 FUN_144e00070 body=635 status=ok
// SIG undefined FUN_144e00070(void)

void FUN_144e00070(longlong param_1,longlong param_2,int param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  uint local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = *(longlong *)(param_1 + 8);
  uVar10 = param_3 - 1;
  if (param_3 == 0) {
    uVar10 = 0;
  }
  puVar1 = (undefined8 *)(param_1 + 0x98);
  local_68 = param_4;
  local_58 = param_2;
  if ((((local_60 != 0) && (uVar10 < *(uint *)(local_60 + 0x218))) &&
      (((param_4 & 9) != 0 ||
       (iVar6 = FUN_144e00480(param_1,param_2,uVar10,param_4 >> 0x16 & 0xffffff01), iVar6 != 0))))
     && ((param_4 >> 0xe & 1) == 0)) {
    local_50 = (ulonglong)uVar10 * 0x10 + *(longlong *)(local_60 + 0x228);
    *(undefined4 *)(param_1 + 0x60) = 0x6f75746c;
    iVar11 = 0;
    *(undefined4 *)puVar1 = 0;
    uVar7 = *(undefined4 *)(local_50 + 8);
    uVar2 = *(undefined4 *)(local_50 + 0xc);
    uVar3 = *(undefined8 *)(local_60 + 0xa0);
    uVar8 = *(undefined4 *)(local_60 + 0x110);
    FUN_144b56640(*(undefined8 *)(param_1 + 0x120));
    *(undefined4 *)(param_1 + 0x110) = 0;
    local_78 = uVar7;
    iVar6 = FUN_144e01c50(param_1 + 0xf8,uVar3,uVar8,uVar2);
    lVar5 = local_60;
    if (iVar6 == 0) {
      lVar4 = *(longlong *)(param_1 + 0x120);
      local_68 = CONCAT31((int3)(local_68 >> 8),~(byte)local_68) & 0xffffff01;
      uVar3 = *(undefined8 *)(lVar4 + 0x20);
      *puVar1 = *(undefined8 *)(lVar4 + 0x18);
      *(undefined8 *)(param_1 + 0xa0) = uVar3;
      uVar7 = *(undefined4 *)(lVar4 + 0x2c);
      uVar2 = *(undefined4 *)(lVar4 + 0x30);
      uVar8 = *(undefined4 *)(lVar4 + 0x34);
      *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(lVar4 + 0x28);
      *(undefined4 *)(param_1 + 0xac) = uVar7;
      *(undefined4 *)(param_1 + 0xb0) = uVar2;
      *(undefined4 *)(param_1 + 0xb4) = uVar8;
      *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(lVar4 + 0x38);
      uVar10 = *(uint *)(param_1 + 0xb8) & 0xfffffffe;
      *(uint *)(param_1 + 0xb8) = uVar10 | 4;
      if ((local_58 != 0) && (*(ushort *)(local_58 + 0x1a) < 0x18)) {
        *(uint *)(param_1 + 0xb8) = uVar10 | 0x104;
      }
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 0;
      uVar7 = *(undefined4 *)(local_50 + 4);
      if (*(int *)(local_60 + 0x18c) != *(int *)(local_60 + 0x188)) {
        uVar7 = FUN_144b55580(uVar7,*(int *)(local_60 + 0x188));
      }
      if ((*(byte *)(lVar5 + 0x1a0) & 1) == 0) {
        *(undefined4 *)(param_1 + 0x40) = uVar7;
      }
      else {
        *(undefined4 *)(param_1 + 0x4c) = uVar7;
      }
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x4c);
      *(undefined8 *)(param_1 + 0x44) = 0;
      if ((char)local_68 != '\0') {
        uVar7 = *(undefined4 *)(local_58 + 0x1c);
        uVar2 = *(undefined4 *)(local_58 + 0x20);
        puVar9 = *(undefined4 **)(param_1 + 0xa0);
        if (0 < *(short *)(param_1 + 0x9a)) {
          do {
            uVar8 = FUN_144b42fe0(*puVar9,uVar7);
            *puVar9 = uVar8;
            uVar8 = FUN_144b42fe0(puVar9[1],uVar2);
            puVar9[1] = uVar8;
            puVar9 = puVar9 + 2;
            iVar11 = iVar11 + 1;
          } while (iVar11 < *(short *)(param_1 + 0x9a));
        }
        uVar7 = FUN_144b42fe0(*(undefined4 *)(param_1 + 0x40),uVar7);
        *(undefined4 *)(param_1 + 0x40) = uVar7;
        uVar7 = FUN_144b42fe0(*(undefined4 *)(param_1 + 0x4c),uVar2);
        *(undefined4 *)(param_1 + 0x4c) = uVar7;
      }
      FUN_144b488a0(puVar1,&local_50);
      *(int *)(param_1 + 0x38) = (int)local_50;
      *(int *)(param_1 + 0x30) = local_48 - (int)local_50;
      *(int *)(param_1 + 0x34) = local_44 - local_50._4_4_;
      *(int *)(param_1 + 0x3c) = local_44 - (local_44 - local_50._4_4_);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
}



// FUNCTION 144e003c0 FUN_144e003c0 body=185 status=ok
// SIG undefined FUN_144e003c0(void)

int FUN_144e003c0(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *param_2;
  do {
    uVar5 = uVar5 + 1;
    uVar3 = 0;
    uVar2 = *(uint *)(param_1 + 0x18);
    while( true ) {
      uVar4 = uVar2;
      if (uVar4 <= uVar3) {
        if ((uVar3 < *(uint *)(param_1 + 0x18)) && (uVar3 != 0)) {
          *param_2 = *(uint *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar3 * 0x10);
          return uVar3 + 1;
        }
        *param_2 = 0;
        return 0;
      }
      uVar2 = (uVar4 - uVar3 >> 1) + uVar3;
      uVar1 = *(uint *)((ulonglong)uVar2 * 0x10 + *(longlong *)(param_1 + 0x20));
      if (uVar1 == uVar5) break;
      if (uVar1 < uVar5) {
        uVar3 = uVar2 + 1;
        uVar2 = uVar4;
      }
    }
    if (uVar2 != 0) {
      *param_2 = uVar5;
      return uVar2 + 1;
    }
  } while( true );
}



// FUNCTION 144e00480 FUN_144e00480 body=946 status=ok
// SIG undefined FUN_144e00480(void)

int FUN_144e00480(longlong param_1,longlong param_2,uint param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint local_res8 [2];
  uint local_res18 [2];
  char local_res20;
  undefined8 in_stack_ffffffffffffff78;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined8 local_48 [2];
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  lVar1 = *(longlong *)(param_1 + 8);
  uVar7 = 0;
  puVar9 = (undefined4 *)((ulonglong)param_3 * 0x10 + *(longlong *)(lVar1 + 0x228));
  lVar2 = *(longlong *)(lVar1 + 0xa0);
  puVar6 = *(uint **)(lVar1 + 0x1f8);
  if (*(uint *)(lVar1 + 0x1f0) != 0) {
    do {
      if ((*puVar6 == (uint)*(ushort *)(param_2 + 0x18)) &&
         (puVar6[1] == (uint)*(ushort *)(param_2 + 0x1a))) {
        local_res8[0] = puVar6[2];
        local_res18[0] = (local_res8[0] & 1) + 5;
        if ((local_res8[0] & 2) == 0) {
          local_res18[0] = (local_res8[0] & 1) + 4;
        }
        local_res8[0] = local_res8[0] & 4;
        local_res20 = param_4;
        iVar3 = FUN_144b597a0(lVar2,*(int *)(lVar1 + 0x248) + puVar6[6]);
        if (iVar3 != 0) {
          return iVar3;
        }
        uVar7 = local_res18[0] + 1;
        if (local_res8[0] == 0) {
          uVar7 = local_res18[0];
        }
        iVar3 = FUN_144b59990(lVar2,uVar7 * puVar6[7]);
        if (iVar3 == 0) {
          FUN_144e020c0(*(undefined8 *)(lVar2 + 0x38),*(undefined8 *)(lVar2 + 0x40),puVar6[7],
                        puVar6 + 2,CONCAT44(uVar4,*puVar9),local_48,local_res18);
          FUN_144b59ab0(lVar2);
          uVar7 = local_res18[0];
          if (local_res18[0] == 0) {
            return 6;
          }
          local_50 = 0;
          local_54 = 0;
          local_res8[0] = 0;
          local_res18[0] = 0;
          local_58 = 0;
          uVar4 = puVar9[1];
          if (*(int *)(lVar1 + 0x18c) != *(int *)(lVar1 + 0x188)) {
            uVar4 = FUN_144b55580(uVar4);
          }
          *(undefined4 *)(param_1 + 0x50) = uVar4;
          iVar3 = FUN_144b55580((ulonglong)*(ushort *)(param_2 + 0x18) << 8,puVar9[1],
                                *(undefined4 *)(lVar1 + 0x18c));
          local_4c = iVar3;
          iVar5 = FUN_144b597a0(lVar2,*(int *)(lVar1 + 0x110) + (int)local_48[0]);
          if (iVar5 == 0) {
            iVar5 = FUN_144b59990(lVar2,uVar7);
            if (iVar5 != 0) {
              return iVar5;
            }
            local_48[0] = *(undefined8 *)(lVar2 + 0x38);
            iVar5 = FUN_144e02240(local_48,*(undefined8 *)(lVar2 + 0x40),iVar3,&local_50,&local_54,
                                  local_res8,local_res18,&local_4c,&local_58);
            iVar3 = local_58;
            if (iVar5 == 0) {
              if (local_58 == 0) {
                if (uVar7 < local_res18[0] * local_res8[0] + 7 >> 3) {
                  FUN_144b59ab0(lVar2);
                  return 8;
                }
              }
              else if (local_58 == 1) {
                if (uVar7 * 0xf < local_res18[0] * local_res8[0]) {
                  FUN_144b59ab0(lVar2);
                  return 8;
                }
              }
              else if ((local_58 != 2) || ((uVar7 + 1 >> 1) * 0xff < local_res18[0] * local_res8[0])
                      ) {
                FUN_144b59ab0(lVar2);
                return 8;
              }
              if ((local_res18[0] < 0x80000000) && (local_54 <= (int)(0x7fffffff - local_res18[0])))
              {
                *(uint *)(param_1 + 0x6c) = local_res8[0];
                *(uint *)(param_1 + 0x34) = local_res18[0] << 6;
                *(int *)(param_1 + 0x38) = local_50 << 6;
                *(int *)(param_1 + 0x3c) = local_54 << 6;
                *(uint *)(param_1 + 0x30) = local_res8[0] * 0x40;
                iVar8 = (int)(local_res8[0] + 7) >> 3;
                *(uint *)(param_1 + 0x40) = (local_4c >> 2) + 0x20U & 0xffffffc0;
                *(undefined4 *)(param_1 + 0x60) = 0x62697473;
                *(uint *)(param_1 + 0x68) = local_res18[0];
                *(int *)(param_1 + 0x70) = iVar8;
                *(undefined1 *)(param_1 + 0x82) = 1;
                *(int *)(param_1 + 0x44) = (int)(local_res8[0] * -0x40) >> 1;
                *(undefined4 *)(param_1 + 0x48) = 0;
                *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x2c);
                *(uint *)(param_1 + 0x94) = local_res18[0] + local_54;
                *(int *)(param_1 + 0x90) = local_50;
                if ((local_res20 == '\0') &&
                   (iVar5 = FUN_144b58670(param_1,local_res18[0] * iVar8), iVar5 == 0)) {
                  iVar3 = FUN_144e024c0(local_48[0],*(undefined8 *)(lVar2 + 0x40),iVar3,
                                        CONCAT31((uint3)(*(uint *)(lVar1 + 0x124) >> 9),
                                                 (char)(*(uint *)(lVar1 + 0x124) >> 1)) & 0xffffff01
                                        ,(uint *)(param_1 + 0x68));
                  FUN_144b59ab0(lVar2);
                  return iVar3;
                }
              }
              else {
                iVar5 = 0x17;
              }
            }
            FUN_144b59ab0(lVar2);
            return iVar5;
          }
          return iVar5;
        }
        return iVar3;
      }
      puVar6 = puVar6 + 10;
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(lVar1 + 0x1f0));
  }
  return 6;
}



// FUNCTION 144e00840 FUN_144e00840 body=208 status=ok
// SIG undefined FUN_144e00840(void)

ulonglong FUN_144e00840(ulonglong *param_1,byte *param_2,uint *param_3,undefined8 param_4)

{
  byte *pbVar1;
  longlong lVar2;
  uint *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  
  pbVar6 = (byte *)*param_1;
  uVar5 = 0;
  pbVar8 = pbVar6 + 1;
  if (param_2 < pbVar8) {
LAB_144e008e9:
    uVar5 = 8;
  }
  else {
    uVar7 = (uint)*pbVar6;
    if (*pbVar6 == 0) {
      *param_1 = (ulonglong)pbVar8;
      return 0;
    }
    do {
      pbVar6 = pbVar8;
      if (param_2 < pbVar8 + 2) goto LAB_144e008e9;
      pbVar1 = pbVar8 + 1;
      pbVar6 = pbVar8 + 2;
      pbVar8 = pbVar6 + *pbVar8;
      if (param_2 < pbVar8) goto LAB_144e008e9;
      uVar4 = uVar5;
      if (param_3 != (uint *)0x0) {
        lVar2 = *(longlong *)(param_3 + 2);
        puVar3 = param_3;
        while (lVar2 != 0) {
          if (*puVar3 == (uint)*pbVar1) {
            uVar5 = (**(code **)(puVar3 + 2))(pbVar6,pbVar8,param_4);
            uVar4 = uVar5 & 0xffffffff;
            if ((int)uVar5 != 0) goto LAB_144e008ee;
            break;
          }
          lVar2 = *(longlong *)(puVar3 + 6);
          puVar3 = puVar3 + 4;
        }
      }
      uVar5 = uVar4;
      uVar7 = uVar7 - 1;
      pbVar6 = pbVar8;
    } while (uVar7 != 0);
  }
LAB_144e008ee:
  *param_1 = (ulonglong)pbVar6;
  return uVar5;
}



// FUNCTION 144e00910 FUN_144e00910 body=728 status=ok
// SIG undefined FUN_144e00910(void)

ulonglong FUN_144e00910(uint *param_1,longlong param_2,uint param_3,undefined4 param_4,char param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  undefined1 *puVar4;
  ushort uVar5;
  uint uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  uint local_18 [4];
  
  uVar7 = FUN_144b597a0(param_2,param_4);
  local_18[0] = (uint)uVar7;
  if (local_18[0] != 0) {
    return uVar7;
  }
  uVar5 = FUN_144b59d40(param_2,local_18);
  if (local_18[0] != 0) {
    return (ulonglong)local_18[0];
  }
  if (uVar5 <= param_3) {
    return 6;
  }
  uVar7 = FUN_144b597f0(param_2,param_3 * 5);
  local_18[0] = (uint)uVar7;
  if (local_18[0] != 0) {
    return uVar7;
  }
  uVar5 = FUN_144b59d40(param_2,local_18);
  if (local_18[0] != 0) {
    return (ulonglong)local_18[0];
  }
  uVar6 = FUN_144b59dd0(param_2,local_18);
  if (local_18[0] != 0) {
    return (ulonglong)local_18[0];
  }
  *param_1 = (uint)uVar5;
  param_1[1] = uVar6;
  uVar7 = FUN_144b597a0(param_2);
  local_18[0] = (uint)uVar7;
  if (local_18[0] != 0) {
    return uVar7;
  }
  uVar7 = FUN_144b59990(param_2,(uint)uVar5);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  puVar4 = *(undefined1 **)(param_2 + 0x38);
  pbVar2 = puVar4 + uVar5;
  if (puVar4 + 0xd <= pbVar2) {
    uVar7 = 0;
    local_18[0] = 0;
    param_1[2] = (uint)CONCAT21(CONCAT11(*puVar4,puVar4[1]),puVar4[2]);
    param_1[3] = (uint)CONCAT21(CONCAT11(puVar4[3],puVar4[4]),puVar4[5]);
    param_1[4] = (uint)CONCAT21(CONCAT11(puVar4[6],puVar4[7]),puVar4[8]);
    param_1[5] = (uint)CONCAT21(CONCAT11(puVar4[9],puVar4[10]),puVar4[0xb]);
    bVar3 = puVar4[0xc];
    pbVar8 = puVar4 + 0xd;
    if ((bVar3 & 4) != 0) {
      uVar6 = (uint)((bVar3 & 8) != 0);
      uVar7 = (ulonglong)(uVar6 + 1);
      if ((bVar3 & 3) == 0) {
        uVar7 = (ulonglong)(uVar6 + 4);
      }
    }
    if ((bVar3 & 0x10) != 0) {
      iVar10 = (int)uVar7;
      uVar7 = (ulonglong)(iVar10 + 1);
      if ((bVar3 & 0x20) != 0) {
        uVar7 = (ulonglong)(iVar10 + 2);
      }
    }
    if (pbVar8 + uVar7 <= pbVar2) {
      if ((bVar3 & 4) != 0) {
        if ((bVar3 & 8) == 0) {
          uVar6 = (uint)*pbVar8;
          pbVar9 = puVar4 + 0xe;
        }
        else {
          pbVar9 = puVar4 + 0xf;
          uVar6 = (int)(short)((ushort)*pbVar8 << 8) | (uint)(byte)puVar4[0xe];
        }
        param_1[7] = uVar6;
        pbVar8 = pbVar9;
        if ((bVar3 & 3) == 0) {
          pbVar8 = pbVar9 + 3;
          param_1[9] = (uint)CONCAT21(CONCAT11(*pbVar9,pbVar9[1]),pbVar9[2]);
        }
      }
      pbVar9 = pbVar8;
      if ((bVar3 & 0x10) != 0) {
        if ((bVar3 & 0x20) == 0) {
          uVar6 = (uint)*pbVar8;
          pbVar9 = pbVar8 + 1;
        }
        else {
          pbVar9 = pbVar8 + 2;
          uVar6 = (int)(short)((ushort)*pbVar8 << 8) | (uint)pbVar8[1];
        }
        param_1[8] = uVar6;
      }
      pbVar8 = pbVar9;
      uVar6 = 0;
      if ((bVar3 & 0x40) != 0) {
        pbVar8 = pbVar9 + 1;
        if (pbVar2 < pbVar8) {
LAB_144e00b67:
          pbVar8 = pbVar9;
          local_18[0] = 8;
        }
        else {
          uVar6 = (uint)*pbVar9;
          if (*pbVar9 != 0) {
            do {
              pbVar1 = pbVar8 + 2;
              pbVar9 = pbVar8;
              if ((pbVar2 < pbVar1) || (pbVar8 = pbVar1 + *pbVar8, pbVar9 = pbVar1, pbVar2 < pbVar8)
                 ) goto LAB_144e00b67;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
        }
        uVar6 = local_18[0];
        if (local_18[0] != 0) goto LAB_144e00bcc;
      }
      local_18[0] = uVar6;
      if (pbVar8 + 5 <= pbVar2) {
        param_1[10] = (uint)CONCAT11(*pbVar8,pbVar8[1]);
        param_1[0xb] = (uint)CONCAT21(CONCAT11(pbVar8[2],pbVar8[3]),pbVar8[4]);
        if (param_5 == '\0') goto LAB_144e00bcc;
        if (pbVar8 + 6 <= pbVar2) {
          param_1[10] = param_1[10] + (uint)pbVar8[5] * 0x10000;
          goto LAB_144e00bcc;
        }
      }
    }
  }
  local_18[0] = 8;
LAB_144e00bcc:
  FUN_144b59ab0(param_2);
  return (ulonglong)local_18[0];
}



// FUNCTION 144e00bf0 FUN_144e00bf0 body=1400 status=ok
// SIG undefined FUN_144e00bf0(void)

ulonglong FUN_144e00bf0(undefined8 *param_1,longlong param_2,uint param_3,ulonglong param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 *puVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  longlong lVar19;
  undefined8 *puVar20;
  uint local_res8 [2];
  longlong local_res10;
  uint local_res18;
  byte *local_40;
  
  uVar10 = *(undefined8 *)(param_2 + 0x30);
  *param_1 = uVar10;
  param_1[0x19] = param_1 + 0x18;
  *(uint *)(param_1 + 1) = param_3;
  param_1[0x18] = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  uVar8 = FUN_144b597a0(param_2,param_3);
  local_res8[0] = (uint)uVar8;
  if (local_res8[0] != 0) {
    return uVar8;
  }
  uVar8 = FUN_144b59990(param_2,param_4 & 0xffffffff);
  local_res8[0] = (uint)uVar8;
  if (local_res8[0] != 0) {
    return uVar8;
  }
  param_1[0x1b] = *(undefined8 *)(param_2 + 0x38);
  puVar4 = *(undefined1 **)(param_2 + 0x38);
  pbVar15 = puVar4 + (param_4 & 0xffffffff);
  pbVar16 = local_40;
  if (puVar4 + 0xf <= pbVar15) {
    *(uint *)((longlong)param_1 + 0xc) = (uint)CONCAT11(*puVar4,puVar4[1]);
    *(uint *)(param_1 + 2) = (uint)CONCAT11(puVar4[2],puVar4[3]);
    *(uint *)((longlong)param_1 + 0x14) = (uint)CONCAT11(puVar4[4],puVar4[5]);
    *(uint *)(param_1 + 3) = (int)(short)((ushort)(byte)puVar4[6] << 8) | (uint)(byte)puVar4[7];
    *(uint *)((longlong)param_1 + 0x1c) =
         (int)(short)((ushort)(byte)puVar4[8] << 8) | (uint)(byte)puVar4[9];
    *(uint *)(param_1 + 4) = (int)(short)((ushort)(byte)puVar4[10] << 8) | (uint)(byte)puVar4[0xb];
    *(uint *)((longlong)param_1 + 0x24) =
         (int)(short)((ushort)(byte)puVar4[0xc] << 8) | (uint)(byte)puVar4[0xd];
    bVar1 = puVar4[0xe];
    *(uint *)(param_1 + 5) = (uint)bVar1;
    local_40 = puVar4 + 0xf;
    if ((bVar1 & 4) == 0) {
      local_40 = puVar4 + 0x11;
      pbVar16 = puVar4 + 0xf;
      if (pbVar15 < local_40) goto LAB_144e01113;
      *(uint *)((longlong)param_1 + 0x2c) =
           (int)(short)((ushort)(byte)puVar4[0xf] << 8) | (uint)(byte)puVar4[0x10];
    }
    uVar18 = 0;
    if (((char)bVar1 < '\0') &&
       (local_res8[0] = FUN_144e00840(&local_40,pbVar15,&DAT_149a0cae0,param_1),
       uVar18 = local_res8[0], local_res8[0] != 0)) goto LAB_144e0111e;
    local_res8[0] = uVar18;
    pbVar14 = local_40 + 3;
    pbVar16 = local_40;
    if (pbVar14 <= pbVar15) {
      uVar18 = (uint)CONCAT21(CONCAT11(*local_40,local_40[1]),local_40[2]);
      pbVar17 = pbVar14;
      if (uVar18 != 0) {
        pbVar17 = pbVar14 + uVar18;
        if (pbVar15 < pbVar17) goto LAB_144e01113;
        do {
          if (((pbVar17 < pbVar14 + 4) || (uVar13 = (uint)CONCAT11(*pbVar14,pbVar14[1]), uVar13 < 4)
              ) || (uVar18 < uVar13)) break;
          sVar5 = CONCAT11(pbVar14[2],pbVar14[3]);
          if (sVar5 == 1) {
            puVar20 = param_1 + 0xd;
LAB_144e00e71:
            uVar8 = FUN_144e01e30(pbVar14 + 4,uVar13 - 4,uVar10,puVar20);
            local_res8[0] = (uint)uVar8;
            if (local_res8[0] != 0) {
              return uVar8;
            }
          }
          else if (sVar5 == 2) {
            if (pbVar14 + 0x24 <= pbVar14 + uVar13) {
              *(uint *)(param_1 + 6) = (int)(short)((ushort)pbVar14[0xe] << 8) | (uint)pbVar14[0xf];
              *(uint *)((longlong)param_1 + 0x34) =
                   (int)(short)((ushort)pbVar14[0x10] << 8) | (uint)pbVar14[0x11];
              *(uint *)(param_1 + 7) =
                   (int)(short)((ushort)pbVar14[0x12] << 8) | (uint)pbVar14[0x13];
            }
          }
          else if (sVar5 == 3) {
            puVar20 = param_1 + 0xe;
            goto LAB_144e00e71;
          }
          uVar18 = uVar18 - uVar13;
          pbVar14 = pbVar14 + uVar13;
        } while (uVar18 != 0);
      }
      pbVar14 = pbVar17 + 1;
      pbVar16 = local_40;
      if (pbVar14 <= pbVar15) {
        bVar2 = *pbVar17;
        *(uint *)(param_1 + 0x11) = (uint)bVar2;
        if (pbVar14 + ((uint)bVar2 + (uint)bVar2) <= pbVar15) {
          uVar9 = FUN_144b561b0(uVar10,4,0,(uint)bVar2,0,local_res8);
          param_1[0x12] = uVar9;
          if (local_res8[0] != 0) goto LAB_144e0111e;
          if (bVar2 != 0) {
            uVar8 = (ulonglong)(uint)bVar2;
            lVar19 = 0;
            pbVar16 = pbVar14;
            do {
              pbVar14 = pbVar16 + 2;
              *(uint *)(lVar19 + param_1[0x12]) =
                   (int)(short)((ushort)*pbVar16 << 8) | (uint)pbVar16[1];
              uVar8 = uVar8 - 1;
              lVar19 = lVar19 + 4;
              pbVar16 = pbVar14;
            } while (uVar8 != 0);
          }
          pbVar16 = local_40;
          if (pbVar14 + 8 <= pbVar15) {
            *(uint *)(param_1 + 0x13) = (uint)*pbVar14;
            *(uint *)((longlong)param_1 + 0x9c) = (uint)pbVar14[1];
            *(uint *)(param_1 + 10) = (uint)CONCAT11(pbVar14[2],pbVar14[3]);
            pbVar17 = pbVar14 + 8;
            *(uint *)(param_1 + 8) = (uint)CONCAT11(pbVar14[4],pbVar14[5]);
            bVar2 = pbVar14[7];
            bVar3 = pbVar14[6];
            uVar13 = (uint)CONCAT11(bVar3,bVar2);
            *(uint *)(param_1 + 0x14) = uVar13;
            param_1[0x15] = pbVar17 + ((ulonglong)local_res18 - *(longlong *)(param_2 + 0x38));
            local_res18 = bVar1 & 2;
            uVar18 = (uint)((bVar1 & 2) != 0);
            iVar11 = uVar18 + 6;
            if ((bVar1 & 4) == 0) {
              iVar11 = uVar18 + 4;
            }
            iVar6 = iVar11 + 1;
            if ((bVar1 & 8) == 0) {
              iVar6 = iVar11;
            }
            iVar11 = iVar6 + 1;
            if ((bVar1 & 0x10) == 0) {
              iVar11 = iVar6;
            }
            iVar6 = iVar11 + 1;
            if ((bVar1 & 0x20) == 0) {
              iVar6 = iVar11;
            }
            if (pbVar17 + iVar6 * uVar13 <= pbVar15) {
              uVar10 = FUN_144b561b0(uVar10,0x10,0,uVar13,0,local_res8);
              param_1[0x16] = uVar10;
              if ((local_res8[0] == 0) && (CONCAT11(bVar3,bVar2) != 0)) {
                lVar19 = 0;
                uVar8 = (ulonglong)uVar13;
                do {
                  puVar12 = (uint *)(param_1[0x16] + lVar19);
                  if (local_res18 == 0) {
                    uVar18 = (uint)*pbVar17;
                    pbVar15 = pbVar17 + 1;
                  }
                  else {
                    pbVar15 = pbVar17 + 2;
                    uVar18 = (uint)CONCAT11(*pbVar17,pbVar17[1]);
                  }
                  *puVar12 = uVar18;
                  if ((bVar1 & 4) == 0) {
                    uVar18 = *(uint *)((longlong)param_1 + 0x2c);
                  }
                  else {
                    uVar18 = (int)(short)((ushort)*pbVar15 << 8) | (uint)pbVar15[1];
                    pbVar15 = pbVar15 + 2;
                  }
                  puVar12[1] = uVar18;
                  if ((bVar1 & 8) != 0) {
                    pbVar15 = pbVar15 + 1;
                  }
                  if ((bVar1 & 0x10) == 0) {
                    uVar18 = (uint)*pbVar15;
                    pbVar16 = pbVar15 + 1;
                  }
                  else {
                    pbVar16 = pbVar15 + 2;
                    uVar18 = (uint)CONCAT11(*pbVar15,pbVar15[1]);
                  }
                  puVar12[2] = uVar18;
                  if ((bVar1 & 0x20) == 0) {
                    uVar18 = (uint)*pbVar16;
                    pbVar17 = pbVar16 + 2;
                  }
                  else {
                    pbVar17 = pbVar16 + 3;
                    uVar18 = (uint)CONCAT11(*pbVar16,pbVar16[1]);
                  }
                  lVar19 = lVar19 + 0x10;
                  puVar12[3] = uVar18 << 8 | (uint)pbVar17[-1];
                  uVar8 = uVar8 - 1;
                  param_2 = local_res10;
                } while (uVar8 != 0);
              }
              goto LAB_144e0111e;
            }
          }
        }
      }
    }
  }
LAB_144e01113:
  local_40 = pbVar16;
  local_res8[0] = 8;
LAB_144e0111e:
  FUN_144b59ab0(param_2);
  uVar7 = FUN_144b59870(param_2);
  *(undefined4 *)(param_1 + 0x1a) = uVar7;
  param_1[0x1b] = 0;
  return (ulonglong)local_res8[0];
}



// FUNCTION 144e01170 FUN_144e01170 body=268 status=ok
// SIG undefined FUN_144e01170(void)

void FUN_144e01170(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  FUN_144b56350(param_2,*(undefined8 *)(param_1 + 0x60));
  *(undefined8 *)(param_1 + 0x60) = 0;
  FUN_144b56350(param_2,*(undefined8 *)(param_1 + 0x68));
  *(undefined8 *)(param_1 + 0x68) = 0;
  FUN_144b56350(param_2,*(undefined8 *)(param_1 + 0x70));
  *(undefined8 *)(param_1 + 0x70) = 0;
  FUN_144b56350(param_2,*(undefined8 *)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  FUN_144b56350(param_2,*(undefined8 *)(param_1 + 0x80));
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  FUN_144b56350(param_2,*(undefined8 *)(param_1 + 0xb0));
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  FUN_144b56350(param_2,*(undefined8 *)(param_1 + 0x90));
  puVar1 = *(undefined8 **)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  while (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar1;
    FUN_144b56350(param_2);
  }
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  return;
}



// FUNCTION 144e01280 FUN_144e01280 body=144 status=ok
// SIG undefined FUN_144e01280(void)

void FUN_144e01280(longlong param_1)

{
  int *piVar1;
  int *piVar2;
  short sVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar4 = *(longlong *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x30) != '\0') {
    sVar3 = *(short *)(lVar4 + 0x62);
    iVar7 = 0;
    iVar6 = sVar3 + -1;
    if (0 < *(short *)(lVar4 + 0x60)) {
      iVar7 = (int)*(short *)(*(longlong *)(lVar4 + 0x78) +
                             (longlong)(*(short *)(lVar4 + 0x60) + -1) * 2);
    }
    iVar5 = iVar6 - iVar7;
    if (iVar7 < iVar6) {
      piVar1 = (int *)(*(longlong *)(lVar4 + 0x68) + (longlong)iVar7 * 8);
      piVar2 = (int *)(*(longlong *)(lVar4 + 0x68) + (longlong)iVar6 * 8);
      if ((*piVar1 == *piVar2) && (piVar1[1] == piVar2[1])) {
        *(short *)(lVar4 + 0x62) = sVar3 + -1;
        iVar6 = sVar3 + -2;
      }
      iVar5 = iVar6 - iVar7;
    }
    if (SBORROW4(iVar6,iVar7) == iVar5 < 0) {
      *(short *)(*(longlong *)(lVar4 + 0x78) + (longlong)*(short *)(lVar4 + 0x60) * 2) =
           (short)iVar6;
      *(short *)(lVar4 + 0x60) = *(short *)(lVar4 + 0x60) + 1;
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 144e01310 FUN_144e01310 body=1473 status=ok
// SIG undefined FUN_144e01310(void)

void FUN_144e01310(longlong param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  byte *pbVar8;
  longlong lVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  int *local_70;
  int local_68;
  uint local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  pbVar8 = param_2 + 1;
  local_68 = 0;
  if ((param_3 < pbVar8) || (bVar1 = *param_2, (char)bVar1 < '\0')) goto LAB_144e018aa;
  uVar19 = 0;
  local_64 = 0;
  if ((bVar1 & 4) == 0) {
    pbVar13 = pbVar8;
    if ((bVar1 & 2) != 0) {
      pbVar13 = param_2 + 2;
      if (param_3 < pbVar13) goto LAB_144e018aa;
      local_64 = (uint)*pbVar8;
    }
    if ((bVar1 & 1) != 0) {
      param_2 = pbVar13 + 1;
      if (param_3 < param_2) goto LAB_144e018aa;
      bVar2 = *pbVar13;
      goto LAB_144e013ca;
    }
  }
  else {
    param_2 = param_2 + 2;
    if (param_3 < param_2) goto LAB_144e018aa;
    local_64 = *pbVar8 & 0xf;
    bVar2 = *pbVar8 >> 4;
LAB_144e013ca:
    uVar19 = (uint)bVar2;
    pbVar13 = param_2;
  }
  uVar10 = uVar19 + local_64;
  if (*(uint *)(param_1 + 4) < uVar10) {
    local_70 = &local_68;
    local_78 = *(undefined8 *)(param_1 + 8);
    uVar7 = FUN_144b561b0(**(undefined8 **)(param_1 + 0x28),4);
    *(undefined8 *)(param_1 + 8) = uVar7;
    if (local_68 != 0) goto LAB_144e018aa;
    *(uint *)(param_1 + 4) = uVar10 + 7 & 0xfffffff8;
  }
  uVar17 = 0;
  uVar14 = 0;
  uVar16 = 0;
  *(ulonglong *)(param_1 + 0x10) = *(longlong *)(param_1 + 8) + (ulonglong)local_64 * 4;
  if (uVar10 != 0) {
    lVar18 = 0;
    pbVar8 = pbVar13 + 1;
    pbVar11 = pbVar13 + 2;
    do {
      pbVar12 = pbVar13;
      if ((uVar16 & 7) == 0) {
        if (param_3 < pbVar8) goto LAB_144e018aa;
        uVar17 = (ulonglong)*pbVar13;
        pbVar11 = pbVar11 + 1;
        pbVar12 = pbVar13 + 1;
        pbVar8 = pbVar8 + 1;
      }
      if ((uVar17 & 1) == 0) {
        if (param_3 < pbVar8) goto LAB_144e018aa;
        pbVar11 = pbVar11 + 1;
        uVar14 = uVar14 + *pbVar12;
        pbVar13 = pbVar12 + 1;
        pbVar8 = pbVar8 + 1;
      }
      else {
        if (param_3 < pbVar11) goto LAB_144e018aa;
        pbVar13 = pbVar12 + 2;
        pbVar11 = pbVar11 + 2;
        pbVar8 = pbVar8 + 2;
        uVar14 = (int)(short)((ushort)*pbVar12 << 8) | (uint)pbVar12[1];
      }
      uVar16 = uVar16 + 1;
      uVar17 = uVar17 >> 1;
      *(uint *)(lVar18 + *(longlong *)(param_1 + 8)) = uVar14;
      lVar18 = lVar18 + 4;
    } while (uVar16 < uVar10);
  }
  pbVar8 = pbVar13;
  if ((bVar1 & 8) != 0) {
    local_68 = 0;
    pbVar8 = pbVar13 + 1;
    if (param_3 < pbVar8) {
LAB_144e01501:
      pbVar8 = pbVar13;
      local_68 = 8;
    }
    else {
      uVar10 = (uint)*pbVar13;
      if (*pbVar13 != 0) {
        do {
          pbVar11 = pbVar8 + 2;
          pbVar13 = pbVar8;
          if ((param_3 < pbVar11) ||
             (pbVar8 = pbVar11 + *pbVar8, pbVar13 = pbVar11, param_3 < pbVar8)) goto LAB_144e01501;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
    }
    if (local_68 != 0) goto LAB_144e018aa;
  }
  local_60 = 0;
  pbVar13 = pbVar8 + 1;
  uVar7 = 0;
  local_48 = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  if (pbVar13 <= param_3) {
    do {
      bVar1 = *pbVar8 >> 4;
      uVar10 = *pbVar8 & 0xf;
      uVar17 = (ulonglong)uVar10;
      pbVar8 = pbVar13;
      switch(bVar1) {
      case 0:
        goto switchD_144e0156f_caseD_0;
      case 1:
      case 4:
      case 5:
        uVar10 = 1;
        break;
      case 2:
        if (uVar10 < local_64) {
          local_60 = CONCAT44((int)((ulonglong)local_48 >> 0x20),
                              *(undefined4 *)(*(longlong *)(param_1 + 8) + uVar17 * 4));
          local_48 = local_60;
          uVar7 = local_60;
          goto switchD_144e0156f_caseD_0;
        }
        goto LAB_144e018aa;
      case 3:
        if (uVar10 < uVar19) {
          local_60 = CONCAT44(*(undefined4 *)(*(longlong *)(param_1 + 0x10) + uVar17 * 4),
                              (int)local_48);
          local_48 = local_60;
          uVar7 = local_60;
          goto switchD_144e0156f_caseD_0;
        }
        goto LAB_144e018aa;
      case 6:
        uVar10 = 3;
        uVar17 = 0xb8e;
        break;
      case 7:
        uVar10 = 3;
        uVar17 = 0xe2b;
        break;
      default:
        uVar10 = 4;
      }
      puVar15 = (uint *)&local_60;
      uVar14 = 0;
      pbVar11 = pbVar13 + 1;
      pbVar12 = pbVar13 + 2;
      do {
        uVar16 = (uint)uVar17 & 3;
        if ((uVar17 & 3) == 0) {
          if (param_3 < pbVar11) goto LAB_144e018aa;
          pbVar12 = pbVar12 + 1;
          pbVar8 = pbVar13 + 1;
          pbVar11 = pbVar11 + 1;
          if (local_64 <= *pbVar13) goto LAB_144e018aa;
          uVar16 = *(uint *)(*(longlong *)(param_1 + 8) + (ulonglong)(uint)*pbVar13 * 4);
LAB_144e0167a:
          *puVar15 = uVar16;
        }
        else {
          if (uVar16 == 1) {
            if (pbVar12 <= param_3) {
              pbVar8 = pbVar13 + 2;
              pbVar12 = pbVar12 + 2;
              pbVar11 = pbVar11 + 2;
              uVar16 = (int)(short)((ushort)*pbVar13 << 8) | (uint)pbVar13[1];
              goto LAB_144e0167a;
            }
            goto LAB_144e018aa;
          }
          if (uVar16 == 2) {
            if (pbVar11 <= param_3) {
              pbVar12 = pbVar12 + 1;
              pbVar8 = pbVar13 + 1;
              pbVar11 = pbVar11 + 1;
              uVar16 = (int)(char)*pbVar13 + (uint)local_48;
              goto LAB_144e0167a;
            }
            goto LAB_144e018aa;
          }
          *puVar15 = (uint)local_48;
          pbVar8 = pbVar13;
        }
        uVar16 = (uint)(uVar17 >> 2) & 3;
        if ((uVar17 >> 2 & 3) == 0) {
          if (param_3 < pbVar11) goto LAB_144e018aa;
          pbVar12 = pbVar12 + 1;
          pbVar13 = pbVar8 + 1;
          pbVar11 = pbVar11 + 1;
          if (uVar19 <= *pbVar8) goto LAB_144e018aa;
          uVar16 = *(uint *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uint)*pbVar8 * 4);
LAB_144e01703:
          puVar15[1] = uVar16;
        }
        else {
          if (uVar16 == 1) {
            if (pbVar12 <= param_3) {
              pbVar13 = pbVar8 + 2;
              pbVar12 = pbVar12 + 2;
              pbVar11 = pbVar11 + 2;
              uVar16 = (int)(short)((ushort)*pbVar8 << 8) | (uint)pbVar8[1];
              goto LAB_144e01703;
            }
            goto LAB_144e018aa;
          }
          if (uVar16 == 2) {
            if (pbVar11 <= param_3) {
              pbVar12 = pbVar12 + 1;
              pbVar13 = pbVar8 + 1;
              pbVar11 = pbVar11 + 1;
              uVar16 = (int)(char)*pbVar8 + local_48._4_4_;
              goto LAB_144e01703;
            }
            goto LAB_144e018aa;
          }
          puVar15[1] = local_48._4_4_;
          pbVar13 = pbVar8;
        }
        if ((uVar14 == 0) && (uVar10 == 4)) {
          if (param_3 < pbVar11) goto LAB_144e018aa;
          uVar17 = (ulonglong)*pbVar13;
          uVar10 = 3;
          pbVar13 = pbVar13 + 1;
          pbVar12 = pbVar12 + 1;
          pbVar11 = pbVar11 + 1;
        }
        else {
          uVar17 = uVar17 >> 4;
        }
        local_48 = *(undefined8 *)puVar15;
        uVar14 = uVar14 + 1;
        puVar15 = puVar15 + 2;
        uVar7 = local_60;
        pbVar8 = pbVar13;
      } while (uVar14 < uVar10);
switchD_144e0156f_caseD_0:
      if (bVar1 == 0) {
        FUN_144e01280(param_1);
        FUN_144b56b30(*(undefined8 *)(param_1 + 0x28));
        break;
      }
      if (bVar1 < 4) {
LAB_144e017b0:
        lVar18 = *(longlong *)(param_1 + 0x28);
        if (*(char *)(param_1 + 0x30) == '\0') {
          iVar6 = 8;
        }
        else {
          if (*(uint *)(lVar18 + 8) <
              (uint)(*(short *)(lVar18 + 0x62) + 1 + (int)*(short *)(lVar18 + 0x1a))) {
            iVar6 = FUN_144b56680(lVar18,1);
            if (iVar6 != 0) goto LAB_144e01884;
          }
          else {
            iVar6 = 0;
          }
          sVar3 = *(short *)(lVar18 + 0x62);
          *(undefined8 *)(*(longlong *)(lVar18 + 0x68) + (longlong)sVar3 * 8) = uVar7;
          *(undefined1 *)((longlong)sVar3 + *(longlong *)(lVar18 + 0x70)) = 1;
          *(short *)(lVar18 + 0x62) = *(short *)(lVar18 + 0x62) + 1;
        }
      }
      else {
        lVar18 = *(longlong *)(param_1 + 0x28);
        if (bVar1 < 6) {
          FUN_144e01280(param_1);
          *(undefined1 *)(param_1 + 0x30) = 1;
          if ((((uint)(*(short *)(lVar18 + 0x62) + 1 + (int)*(short *)(lVar18 + 0x1a)) <=
                *(uint *)(lVar18 + 8)) &&
              ((uint)(*(short *)(lVar18 + 0x60) + 1 + (int)*(short *)(lVar18 + 0x18)) <=
               *(uint *)(lVar18 + 0xc))) || (iVar6 = FUN_144b56680(lVar18), iVar6 == 0))
          goto LAB_144e017b0;
        }
        else if (*(char *)(param_1 + 0x30) == '\0') {
          iVar6 = 8;
        }
        else {
          if (*(uint *)(lVar18 + 8) <
              (uint)(*(short *)(lVar18 + 0x62) + 3 + (int)*(short *)(lVar18 + 0x1a))) {
            iVar6 = FUN_144b56680(lVar18,3);
            if (iVar6 != 0) goto LAB_144e01884;
          }
          else {
            iVar6 = 0;
          }
          lVar9 = (longlong)*(short *)(lVar18 + 0x62);
          lVar4 = *(longlong *)(lVar18 + 0x68);
          lVar5 = *(longlong *)(lVar18 + 0x70);
          *(undefined8 *)(lVar4 + lVar9 * 8) = uVar7;
          lVar4 = lVar4 + lVar9 * 8;
          *(undefined8 *)(lVar4 + 8) = local_58;
          *(undefined8 *)(lVar4 + 0x10) = local_50;
          *(undefined2 *)(lVar5 + lVar9) = 0x202;
          *(undefined1 *)(lVar5 + 2 + lVar9) = 1;
          *(short *)(lVar18 + 0x62) = *(short *)(lVar18 + 0x62) + 3;
        }
      }
LAB_144e01884:
      local_68 = iVar6;
      if ((local_68 != 0) || (pbVar13 = pbVar8 + 1, param_3 < pbVar13)) break;
    } while( true );
  }
LAB_144e018aa:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
}



// FUNCTION 144e01910 FUN_144e01910 body=829 status=ok
// SIG undefined FUN_144e01910(void)

int FUN_144e01910(longlong param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  int *piVar16;
  int local_res8 [2];
  
  pbVar9 = param_2 + 1;
  local_res8[0] = 0;
  if ((param_3 < pbVar9) || (bVar1 = *param_2, -1 < (char)bVar1)) {
LAB_144e01c31:
    local_res8[0] = 8;
  }
  else {
    pbVar5 = pbVar9;
    if ((bVar1 & 0x40) != 0) {
      pbVar5 = param_2 + 2;
      if (param_3 < pbVar5) {
LAB_144e01992:
        pbVar5 = pbVar9;
        local_res8[0] = 8;
      }
      else {
        uVar6 = (uint)*pbVar9;
        local_res8[0] = 0;
        if (*pbVar9 != 0) {
          do {
            pbVar15 = pbVar5 + 2;
            pbVar9 = pbVar5;
            if ((param_3 < pbVar15) ||
               (pbVar5 = pbVar15 + *pbVar5, pbVar9 = pbVar15, param_3 < pbVar5)) goto LAB_144e01992;
            uVar6 = uVar6 - 1;
            local_res8[0] = 0;
          } while (uVar6 != 0);
        }
      }
      if (local_res8[0] != 0) {
        return local_res8[0];
      }
    }
    uVar6 = *(uint *)(param_1 + 0x18);
    uVar10 = uVar6 + (bVar1 & 0x3f);
    if (*(uint *)(param_1 + 0x1c) < uVar10) {
      uVar10 = uVar10 + 3 & 0xfffffffc;
      if (0x40 < uVar10) goto LAB_144e01c31;
      uVar4 = FUN_144b561b0(**(undefined8 **)(param_1 + 0x28),0x18,*(uint *)(param_1 + 0x1c),uVar10,
                            *(undefined8 *)(param_1 + 0x20),local_res8);
      *(undefined8 *)(param_1 + 0x20) = uVar4;
      if (local_res8[0] != 0) {
        return local_res8[0];
      }
      *(uint *)(param_1 + 0x1c) = uVar10;
    }
    uVar10 = 0;
    piVar16 = (int *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar6 * 0x18);
    if ((bVar1 & 0x3f) != 0) {
      pbVar9 = pbVar5 + 2;
      pbVar15 = pbVar5 + 3;
      pbVar13 = pbVar5 + 1;
      do {
        uVar11 = 0;
        uVar6 = 0;
        if (param_3 < pbVar13) goto LAB_144e01c31;
        bVar2 = *pbVar5;
        pbVar12 = pbVar13 + 1;
        pbVar8 = pbVar5 + 1;
        *piVar16 = 0x10000;
        pbVar14 = pbVar15 + 1;
        pbVar7 = pbVar9 + 1;
        if ((bVar2 & 0x10) != 0) {
          if (param_3 < pbVar7) goto LAB_144e01c31;
          bVar3 = *pbVar8;
          pbVar8 = pbVar5 + 3;
          pbVar12 = pbVar13 + 3;
          pbVar14 = pbVar15 + 3;
          pbVar7 = pbVar9 + 3;
          *piVar16 = ((int)(short)((ushort)bVar3 << 8) | (uint)pbVar5[2]) << 4;
        }
        piVar16[1] = 0x10000;
        pbVar9 = pbVar8;
        if ((bVar2 & 0x20) != 0) {
          if (param_3 < pbVar7) goto LAB_144e01c31;
          pbVar9 = pbVar8 + 2;
          pbVar12 = pbVar12 + 2;
          pbVar14 = pbVar14 + 2;
          pbVar7 = pbVar7 + 2;
          piVar16[1] = ((int)(short)((ushort)*pbVar8 << 8) | (uint)pbVar8[1]) << 4;
        }
        if ((bVar2 & 3) == 1) {
          if (param_3 < pbVar7) goto LAB_144e01c31;
          pbVar5 = pbVar9 + 2;
          pbVar12 = pbVar12 + 2;
          pbVar14 = pbVar14 + 2;
          pbVar7 = pbVar7 + 2;
          uVar11 = (int)(short)((ushort)*pbVar9 << 8) | (uint)pbVar9[1];
        }
        else {
          pbVar5 = pbVar9;
          if ((bVar2 & 3) == 2) {
            if (param_3 < pbVar12) goto LAB_144e01c31;
            uVar11 = (uint)(char)*pbVar9;
            pbVar12 = pbVar12 + 1;
            pbVar5 = pbVar9 + 1;
            pbVar14 = pbVar14 + 1;
            pbVar7 = pbVar7 + 1;
          }
        }
        bVar3 = bVar2 >> 2 & 3;
        if (bVar3 == 1) {
          if (param_3 < pbVar7) goto LAB_144e01c31;
          pbVar9 = pbVar5 + 2;
          pbVar12 = pbVar12 + 2;
          pbVar14 = pbVar14 + 2;
          pbVar7 = pbVar7 + 2;
          uVar6 = (int)(short)((ushort)*pbVar5 << 8) | (uint)pbVar5[1];
        }
        else {
          pbVar9 = pbVar5;
          if (bVar3 == 2) {
            if (param_3 < pbVar12) goto LAB_144e01c31;
            uVar6 = (uint)(char)*pbVar5;
            pbVar12 = pbVar12 + 1;
            pbVar9 = pbVar5 + 1;
            pbVar14 = pbVar14 + 1;
            pbVar7 = pbVar7 + 1;
          }
        }
        piVar16[2] = uVar11;
        piVar16[3] = uVar6;
        if ((bVar2 & 0x40) == 0) {
          if (param_3 < pbVar12) goto LAB_144e01c31;
          pbVar12 = pbVar12 + 1;
          pbVar8 = pbVar9 + 1;
          piVar16[5] = (uint)*pbVar9;
          pbVar14 = pbVar14 + 1;
          pbVar7 = pbVar7 + 1;
        }
        else {
          if (param_3 < pbVar7) goto LAB_144e01c31;
          pbVar8 = pbVar9 + 2;
          pbVar12 = pbVar12 + 2;
          pbVar14 = pbVar14 + 2;
          pbVar7 = pbVar7 + 2;
          piVar16[5] = (uint)CONCAT11(*pbVar9,pbVar9[1]);
        }
        if ((char)bVar2 < '\0') {
          if (param_3 < pbVar14) goto LAB_144e01c31;
          pbVar5 = pbVar8 + 3;
          pbVar13 = pbVar12 + 3;
          pbVar15 = pbVar14 + 3;
          pbVar9 = pbVar7 + 3;
          uVar6 = (uint)CONCAT11(*pbVar8,pbVar8[1]);
        }
        else {
          if (param_3 < pbVar7) goto LAB_144e01c31;
          uVar6 = (uint)*pbVar8;
          pbVar5 = pbVar8 + 2;
          pbVar13 = pbVar12 + 2;
          pbVar15 = pbVar14 + 2;
          pbVar9 = pbVar7 + 2;
        }
        uVar10 = uVar10 + 1;
        piVar16[4] = uVar6 << 8 | (uint)pbVar5[-1];
        piVar16 = piVar16 + 6;
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      } while (uVar10 < (bVar1 & 0x3f));
    }
  }
  return local_res8[0];
}



// FUNCTION 144e01c50 FUN_144e01c50 body=477 status=ok
// SIG undefined FUN_144e01c50(void)

ulonglong FUN_144e01c50(longlong param_1,longlong param_2,int param_3,int param_4,uint param_5)

{
  short sVar1;
  uint uVar2;
  char *pcVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  int *piVar9;
  ulonglong uVar10;
  int *piVar11;
  longlong lVar12;
  uint local_res20;
  
  uVar8 = FUN_144b597a0(param_2,param_3 + param_4);
  if ((int)uVar8 == 0) {
    uVar8 = FUN_144b59990(param_2,(ulonglong)param_5);
    if ((int)uVar8 == 0) {
      pcVar3 = *(char **)(param_2 + 0x38);
      if ((param_5 == 0) || ((char)uVar8 <= *pcVar3)) {
        uVar7 = FUN_144e01310(param_1,pcVar3,pcVar3 + param_5);
        FUN_144b59ab0(param_2);
        return (ulonglong)uVar7;
      }
      lVar4 = *(longlong *)(param_1 + 0x28);
      uVar7 = *(uint *)(param_1 + 0x18);
      uVar5 = FUN_144e01910(param_1);
      FUN_144b59ab0(param_2);
      if ((uVar5 != 0) || (uVar2 = *(uint *)(param_1 + 0x18), uVar2 == uVar7)) {
        return (ulonglong)uVar5;
      }
      lVar12 = (ulonglong)uVar7 * 0x18;
      local_res20 = 0;
      do {
        sVar1 = *(short *)(lVar4 + 0x1a);
        uVar8 = FUN_144e01c50(param_1,param_2,param_3,
                              *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x10 + lVar12),
                              *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x14 + lVar12));
        if ((int)uVar8 != 0) {
          return uVar8;
        }
        piVar11 = (int *)(*(longlong *)(param_1 + 0x20) + lVar12);
        uVar5 = (int)*(short *)(lVar4 + 0x1a) - (int)sVar1;
        uVar10 = (ulonglong)uVar5;
        if ((*piVar11 == 0x10000) && (piVar11[1] == 0x10000)) {
          piVar9 = (int *)(*(longlong *)(lVar4 + 0x20) + (longlong)sVar1 * 8);
          if (0 < (int)uVar5) {
            do {
              *piVar9 = *piVar9 + piVar11[2];
              piVar9[1] = piVar9[1] + piVar11[3];
              uVar10 = uVar10 - 1;
              piVar9 = piVar9 + 2;
            } while (uVar10 != 0);
          }
        }
        else {
          piVar9 = (int *)(*(longlong *)(lVar4 + 0x20) + (longlong)sVar1 * 8);
          if (0 < (int)uVar5) {
            uVar10 = (ulonglong)uVar5;
            do {
              iVar6 = FUN_144b42fe0(*piVar9,*piVar11);
              *piVar9 = iVar6 + piVar11[2];
              iVar6 = FUN_144b42fe0(piVar9[1],piVar11[1]);
              piVar9[1] = iVar6 + piVar11[3];
              piVar9 = piVar9 + 2;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
        }
        uVar8 = uVar8 & 0xffffffff;
        lVar12 = lVar12 + 0x18;
        local_res20 = local_res20 + 1;
      } while (local_res20 < uVar2 - uVar7);
    }
  }
  return uVar8;
}



// FUNCTION 144e01e30 FUN_144e01e30 body=212 status=ok
// SIG undefined FUN_144e01e30(void)

int FUN_144e01e30(char *param_1,uint param_2,undefined8 param_3,longlong *param_4)

{
  void *_Dst;
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  size_t _Size;
  int local_res10 [2];
  
  _Size = (size_t)param_2;
  local_res10[0] = 0;
  if (*param_4 != 0) {
    FUN_144b56350(param_3);
    *param_4 = 0;
  }
  if ((param_2 != 0) && (param_1[param_2 - 1] == '\0')) {
    _Size = (size_t)(param_2 - 1);
  }
  uVar3 = (uint)_Size;
  uVar2 = 0;
  pcVar1 = param_1;
  if (uVar3 != 0) {
    do {
      if (0x5f < (byte)(*pcVar1 - 0x20U)) goto LAB_144e01ee5;
      uVar2 = uVar2 + 1;
      pcVar1 = pcVar1 + 1;
    } while (uVar2 < uVar3);
  }
  if (uVar3 == 0) {
LAB_144e01ee5:
    *param_4 = 0;
  }
  else {
    _Dst = (void *)FUN_144b560d0(param_3,uVar3 + 1,local_res10);
    if (local_res10[0] == 0) {
      memcpy(_Dst,param_1,_Size);
      *(undefined1 *)(_Size + (longlong)_Dst) = 0;
      *param_4 = (longlong)_Dst;
    }
    else {
      *param_4 = (longlong)_Dst;
    }
  }
  return local_res10[0];
}



// FUNCTION 144e01f10 FUN_144e01f10 body=232 status=ok
// SIG undefined FUN_144e01f10(void)

void FUN_144e01f10(longlong *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  iVar11 = *(int *)((longlong)param_1 + 0x14);
  uVar5 = 0;
  iVar6 = *(int *)((longlong)param_1 + 0xc);
  uVar8 = 0;
  puVar7 = (undefined1 *)*param_1;
  uVar4 = 0;
  bVar3 = true;
  bVar2 = true;
  uVar9 = 0x80;
  if (iVar11 != 0) {
    do {
      if (bVar2) {
        do {
          if (bVar3) {
            if (param_3 <= param_2) break;
            bVar1 = *param_2;
            param_2 = param_2 + 1;
            uVar8 = bVar1 & 0xf;
            bVar3 = false;
            uVar4 = (uint)(bVar1 >> 4);
          }
          else {
            bVar3 = true;
            uVar4 = uVar8;
          }
        } while (uVar4 == 0);
      }
      if (bVar3) {
        uVar5 = uVar5 | uVar9;
      }
      uVar10 = uVar9 >> 1;
      iVar6 = iVar6 + -1;
      if (iVar6 == 0) {
        *puVar7 = (char)uVar5;
        *param_1 = *param_1 + (longlong)(int)param_1[1];
        iVar6 = *(int *)((longlong)param_1 + 0xc);
        puVar7 = (undefined1 *)*param_1;
LAB_144e01fbd:
        uVar5 = 0;
        uVar10 = 0x80;
      }
      else if (uVar9 >> 1 == 0) {
        *puVar7 = (char)uVar5;
        puVar7 = puVar7 + 1;
        goto LAB_144e01fbd;
      }
      uVar4 = uVar4 - 1;
      bVar2 = (int)uVar4 < 1;
      iVar11 = iVar11 + -1;
      uVar9 = uVar10;
    } while (iVar11 != 0);
    if (uVar10 != 0x80) {
      *puVar7 = (char)uVar5;
    }
  }
  return;
}



// FUNCTION 144e02000 FUN_144e02000 body=186 status=ok
// SIG undefined FUN_144e02000(void)

void FUN_144e02000(longlong *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  iVar5 = *(int *)((longlong)param_1 + 0x14);
  uVar4 = 0;
  iVar6 = *(int *)((longlong)param_1 + 0xc);
  uVar8 = 0;
  puVar7 = (undefined1 *)*param_1;
  bVar3 = true;
  bVar2 = true;
  uVar9 = 0x80;
  if (iVar5 != 0) {
    do {
      if (bVar2) {
        do {
          if (param_3 <= param_2) break;
          bVar1 = *param_2;
          uVar8 = (uint)bVar1;
          bVar3 = (bool)(bVar3 ^ 1);
          param_2 = param_2 + 1;
        } while (bVar1 == 0);
      }
      if (bVar3) {
        uVar4 = uVar4 | uVar9;
      }
      uVar10 = uVar9 >> 1;
      iVar6 = iVar6 + -1;
      if (iVar6 == 0) {
        *puVar7 = (char)uVar4;
        *param_1 = *param_1 + (longlong)(int)param_1[1];
        puVar7 = (undefined1 *)*param_1;
        iVar6 = *(int *)((longlong)param_1 + 0xc);
LAB_144e02084:
        uVar4 = 0;
        uVar10 = 0x80;
      }
      else if (uVar9 >> 1 == 0) {
        *puVar7 = (char)uVar4;
        puVar7 = puVar7 + 1;
        goto LAB_144e02084;
      }
      uVar8 = uVar8 - 1;
      bVar2 = (int)uVar8 < 1;
      iVar5 = iVar5 + -1;
      uVar9 = uVar10;
    } while (iVar5 != 0);
    if (uVar10 != 0x80) {
      *puVar7 = (char)uVar4;
    }
  }
  return;
}



// FUNCTION 144e020c0 FUN_144e020c0 body=372 status=ok
// SIG undefined FUN_144e020c0(void)

void FUN_144e020c0(byte *param_1,byte *param_2,uint param_3,uint *param_4,uint param_5,uint *param_6
                  ,uint *param_7)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  
  bVar6 = (byte)*param_4 & 1;
  uVar5 = *param_4;
  uVar7 = (bVar6 != 0) + 5;
  if ((uVar5 & 2) == 0) {
    uVar7 = (bVar6 != 0) + 4;
  }
  uVar1 = uVar7 + 1;
  if ((uVar5 & 4) == 0) {
    uVar1 = uVar7;
  }
  if ((uVar5 & 0x40) == 0) {
    *param_4 = uVar5 | 0x80;
    uVar7 = 0xffffffff;
    pbVar2 = param_1;
    if (param_2 < param_1 + uVar1 * param_3) {
LAB_144e0215a:
      *param_4 = uVar5 & 0xffffff7f;
    }
    else {
      for (; pbVar2 < param_1 + uVar1 * param_3; pbVar2 = pbVar2 + uVar1) {
        uVar4 = (uint)*pbVar2;
        if (bVar6 != 0) {
          uVar4 = (uint)CONCAT11(*pbVar2,pbVar2[1]);
        }
        if ((int)uVar4 <= (int)uVar7) goto LAB_144e0215a;
        uVar7 = uVar4;
      }
    }
    *param_4 = *param_4 | 0x40;
  }
  if (((*param_4 & 0x80) != 0) && (uVar5 = 0, param_3 != 0)) {
    do {
      uVar7 = param_3 + uVar5 >> 1;
      pbVar2 = param_1 + uVar1 * uVar7;
      if (bVar6 == 0) {
        uVar4 = (uint)*pbVar2;
        pbVar3 = pbVar2 + 1;
      }
      else {
        pbVar3 = pbVar2 + 2;
        uVar4 = (uint)CONCAT11(*pbVar2,pbVar2[1]);
      }
      if (uVar4 <= param_5) {
        if (param_5 <= uVar4) {
          if ((*param_4 & 2) == 0) {
            uVar5 = (uint)*pbVar3;
            pbVar2 = pbVar3 + 1;
          }
          else {
            pbVar2 = pbVar3 + 2;
            uVar5 = (uint)CONCAT11(*pbVar3,pbVar3[1]);
          }
          *param_7 = uVar5;
          uVar5 = (uint)CONCAT11(*pbVar2,pbVar2[1]);
          if ((*param_4 & 4) != 0) {
            uVar5 = (uint)CONCAT21(CONCAT11(*pbVar2,pbVar2[1]),pbVar2[2]);
          }
          *param_6 = uVar5;
          return;
        }
        uVar5 = uVar7 + 1;
        uVar7 = param_3;
      }
      param_3 = uVar7;
    } while (uVar5 < param_3);
  }
  *param_7 = 0;
  *param_6 = 0;
  return;
}



// FUNCTION 144e02240 FUN_144e02240 body=636 status=ok
// SIG undefined FUN_144e02240(void)

undefined8
FUN_144e02240(ulonglong *param_1,byte *param_2,uint param_3,uint *param_4,uint *param_5,
             uint *param_6,uint *param_7,uint *param_8,uint *param_9)

{
  byte bVar1;
  byte *pbVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  pbVar2 = (byte *)*param_1;
  pbVar10 = pbVar2 + 1;
  if (param_2 < pbVar10) {
LAB_144e0249e:
    uVar3 = 8;
  }
  else {
    bVar1 = *pbVar2;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    bVar4 = bVar1 & 3;
    if ((bVar1 & 3) == 0) {
      pbVar9 = pbVar2 + 2;
      if (param_2 < pbVar9) goto LAB_144e0249e;
      uVar5 = (int)(char)*pbVar10 >> 4;
      uVar6 = (int)(char)(*pbVar10 << 4) >> 4;
    }
    else if (bVar4 == 1) {
      if (param_2 < pbVar2 + 3) goto LAB_144e0249e;
      uVar5 = (uint)(char)*pbVar10;
      uVar6 = (uint)(char)pbVar2[2];
      pbVar9 = pbVar2 + 3;
    }
    else if (bVar4 == 2) {
      if (param_2 < pbVar2 + 5) goto LAB_144e0249e;
      pbVar9 = pbVar2 + 5;
      uVar5 = (int)(short)((ushort)*pbVar10 << 8) | (uint)pbVar2[2];
      uVar6 = (int)(short)((ushort)pbVar2[3] << 8) | (uint)pbVar2[4];
    }
    else {
      pbVar9 = pbVar10;
      if (bVar4 == 3) {
        if (param_2 < pbVar2 + 7) goto LAB_144e0249e;
        pbVar9 = pbVar2 + 7;
        uVar5 = (uint)CONCAT21(CONCAT11(*pbVar10,pbVar2[2]),pbVar2[3]);
        uVar6 = (uint)CONCAT21(CONCAT11(pbVar2[4],pbVar2[5]),pbVar2[6]);
      }
    }
    bVar4 = bVar1 >> 2 & 3;
    pbVar10 = pbVar9;
    uVar8 = 0;
    if ((bVar1 >> 2 & 3) != 0) {
      if (bVar4 == 1) {
        pbVar10 = pbVar9 + 1;
        if (param_2 < pbVar10) goto LAB_144e0249e;
        uVar8 = (uint)(*pbVar9 >> 4);
        uVar7 = *pbVar9 & 0xf;
      }
      else if (bVar4 == 2) {
        if (param_2 < pbVar9 + 2) goto LAB_144e0249e;
        uVar8 = (uint)*pbVar9;
        uVar7 = (uint)pbVar9[1];
        pbVar10 = pbVar9 + 2;
      }
      else {
        uVar8 = 0;
        if (bVar4 == 3) {
          if (param_2 < pbVar9 + 4) goto LAB_144e0249e;
          pbVar10 = pbVar9 + 4;
          uVar8 = (uint)CONCAT11(*pbVar9,pbVar9[1]);
          uVar7 = (uint)CONCAT11(pbVar9[2],pbVar9[3]);
        }
      }
    }
    bVar4 = bVar1 >> 4 & 3;
    if ((bVar1 >> 4 & 3) != 0) {
      if (bVar4 == 1) {
        if (param_2 < pbVar10 + 1) goto LAB_144e0249e;
        param_3 = (int)(char)*pbVar10 << 8;
        pbVar10 = pbVar10 + 1;
      }
      else if (bVar4 == 2) {
        if (param_2 < pbVar10 + 2) goto LAB_144e0249e;
        param_3 = (int)(short)((ushort)*pbVar10 << 8) | (uint)pbVar10[1];
        pbVar10 = pbVar10 + 2;
      }
      else {
        param_3 = 0;
        if (bVar4 == 3) {
          if (param_2 < pbVar10 + 3) goto LAB_144e0249e;
          param_3 = (uint)CONCAT21(CONCAT11(*pbVar10,pbVar10[1]),pbVar10[2]);
          pbVar10 = pbVar10 + 3;
        }
      }
    }
    *param_4 = uVar5;
    uVar3 = 0;
    *param_5 = uVar6;
    *param_6 = uVar8;
    *param_7 = uVar7;
    *param_8 = param_3;
    *param_9 = (uint)(bVar1 >> 6);
    *param_1 = (ulonglong)pbVar10;
  }
  return uVar3;
}



// FUNCTION 144e024c0 FUN_144e024c0 body=368 status=ok
// SIG undefined FUN_144e024c0(void)

undefined8 FUN_144e024c0(char *param_1,int param_2,int param_3,char param_4,int *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  char cVar8;
  undefined1 *local_28;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_18 = *param_5;
  if (local_18 == 0) {
    return 0;
  }
  local_1c = param_5[1];
  if (local_1c == 0) {
    return 0;
  }
  local_28 = *(undefined1 **)(param_5 + 4);
  local_14 = local_18 * local_1c;
  local_20 = param_5[2];
  if (param_4 == '\0') {
    local_28 = local_28 + (local_18 + -1) * local_20;
    local_20 = -local_20;
  }
  if (param_3 == 0) {
    uVar6 = (param_2 - (int)param_1) * 8;
    cVar8 = '\0';
    uVar3 = 0;
    if (local_14 < uVar6) {
      uVar6 = local_14;
    }
    uVar4 = uVar6 & 7;
    puVar7 = local_28;
    iVar5 = local_1c;
    uVar1 = 0x80;
    if (uVar6 != 0) {
      do {
        if ((uVar6 & 7) == uVar4) {
          cVar8 = *param_1;
          param_1 = param_1 + 1;
        }
        if (cVar8 < '\0') {
          uVar3 = uVar3 | uVar1;
        }
        cVar8 = cVar8 * '\x02';
        uVar2 = uVar1 >> 1;
        iVar5 = iVar5 + -1;
        if (iVar5 == 0) {
          *puVar7 = (char)uVar3;
          local_28 = local_28 + local_20;
          puVar7 = local_28;
          iVar5 = local_1c;
LAB_144e025e3:
          uVar3 = 0;
          uVar2 = 0x80;
        }
        else if (uVar1 >> 1 == 0) {
          *puVar7 = (char)uVar3;
          puVar7 = puVar7 + 1;
          goto LAB_144e025e3;
        }
        uVar6 = uVar6 - 1;
        uVar1 = uVar2;
      } while (uVar6 != 0);
      if (uVar2 != 0x80) {
        *puVar7 = (char)uVar3;
      }
    }
  }
  else if (param_3 == 1) {
    FUN_144e01f10(&local_28,param_1);
  }
  else if (param_3 == 2) {
    FUN_144e02000(&local_28,param_1);
  }
  return 0;
}



// FUNCTION 144e02630 FUN_144e02630 body=881 status=ok
// SIG undefined FUN_144e02630(void)

uint FUN_144e02630(undefined8 param_1,undefined4 *param_2,int param_3,int param_4,undefined8 param_5
                  )

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  char *pcVar10;
  longlong lVar11;
  char *pcVar12;
  uint uVar13;
  undefined4 *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  uint local_68 [2];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_40;
  int local_38;
  undefined8 local_30;
  
  plVar4 = (longlong *)(param_2 + 0xae);
  *plVar4 = 0;
  *param_2 = 1;
  lVar8 = FUN_144b57b20(*(undefined8 *)(param_2 + 0x24),"postscript-cmaps",1);
  *(longlong *)(param_2 + 0xa6) = lVar8;
  lVar9 = FUN_144b57b00(*(undefined8 *)(*(longlong *)(param_2 + 0x24) + 8),"psaux");
  *(longlong *)(param_2 + 0xa8) = lVar9;
  if (lVar9 == 0) {
    uVar13 = 0xb;
  }
  else {
    uVar13 = FUN_144e04280(param_2);
    if ((uVar13 == 0) && (-1 < param_3)) {
      if ((short)param_3 == 0) {
        param_2[4] = param_2[0x90];
        uVar13 = param_2[2];
        param_2[0xe] = 0;
        param_2[2] = uVar13 | 0x211;
        param_2[1] = 0;
        if (*(char *)(param_2 + 0x41) != '\0') {
          param_2[2] = uVar13 | 0x215;
        }
        param_2[2] = param_2[2] | 0x800;
        pcVar12 = *(char **)(param_2 + 0x3c);
        *(char **)(param_2 + 6) = pcVar12;
        *(char **)(param_2 + 8) = "Regular";
        if (pcVar12 == (char *)0x0) {
          lVar11 = *(longlong *)(param_2 + 6);
          if (*(longlong *)(param_2 + 0x76) != 0) {
            lVar11 = *(longlong *)(param_2 + 0x76);
          }
          *(longlong *)(param_2 + 6) = lVar11;
        }
        else {
          pcVar10 = *(char **)(param_2 + 0x3a);
          if (pcVar10 != (char *)0x0) {
            cVar1 = *pcVar10;
            while (cVar1 != '\0') {
              cVar2 = *pcVar12;
              if (cVar1 == cVar2) {
                pcVar12 = pcVar12 + 1;
LAB_144e0274d:
                pcVar10 = pcVar10 + 1;
              }
              else {
                if ((cVar1 == ' ') || (cVar1 == '-')) goto LAB_144e0274d;
                if ((cVar2 != ' ') && (cVar2 != '-')) {
                  if (*pcVar12 == '\0') {
                    *(char **)(param_2 + 8) = pcVar10;
                  }
                  break;
                }
                pcVar12 = pcVar12 + 1;
              }
              cVar1 = *pcVar10;
            }
          }
        }
        param_2[10] = 0;
        *(undefined8 *)(param_2 + 0xc) = 0;
        local_68[0] = 9;
        local_40 = FUN_144b55a90(*(undefined8 *)(*(longlong *)(param_2 + 0x24) + 8),"truetype");
        local_60 = *(undefined8 *)(param_2 + 0xaa);
        local_58 = param_2[0xac];
        if (param_4 != 0) {
          local_68[0] = local_68[0] | 0x10;
          local_30 = param_5;
          local_38 = param_4;
        }
        uVar13 = FUN_144b54ae0(*(undefined8 *)(*(longlong *)(param_2 + 0x24) + 8),local_68,0,plVar4)
        ;
        if (uVar13 == 0) {
          FUN_144b55f80(*(undefined8 *)(*plVar4 + 0x80));
          lVar11 = *plVar4;
          uVar5 = *(undefined4 *)(lVar11 + 0x5c);
          uVar6 = *(undefined4 *)(lVar11 + 0x60);
          uVar7 = *(undefined4 *)(lVar11 + 100);
          param_2[0x16] = *(undefined4 *)(lVar11 + 0x58);
          param_2[0x17] = uVar5;
          param_2[0x18] = uVar6;
          param_2[0x19] = uVar7;
          *(undefined2 *)(param_2 + 0x1a) = *(undefined2 *)(*plVar4 + 0x68);
          *(undefined2 *)((longlong)param_2 + 0x6a) = *(undefined2 *)(*plVar4 + 0x6a);
          *(undefined2 *)(param_2 + 0x1b) = *(undefined2 *)(*plVar4 + 0x6c);
          *(undefined2 *)((longlong)param_2 + 0x6e) = *(undefined2 *)(*plVar4 + 0x6e);
          *(undefined2 *)(param_2 + 0x1c) = *(undefined2 *)(*plVar4 + 0x70);
          *(undefined2 *)((longlong)param_2 + 0x72) = *(undefined2 *)(*plVar4 + 0x72);
          *(undefined2 *)(param_2 + 0x1d) = *(undefined2 *)((longlong)param_2 + 0x106);
          *(undefined2 *)((longlong)param_2 + 0x76) = *(undefined2 *)(param_2 + 0x42);
          param_2[3] = 0;
          param_2[3] = (uint)(param_2[0x40] != 0);
          if ((*(byte *)(*plVar4 + 0xc) & 2) != 0) {
            param_2[3] = param_2[3] | 2;
          }
          if ((*(byte *)(*plVar4 + 8) & 0x20) != 0) {
            param_2[2] = param_2[2] | 0x20;
          }
          if (lVar8 != 0) {
            plVar4 = *(longlong **)(lVar9 + 0x40);
            local_6c = 0x10003;
            local_70 = 0x756e6963;
            local_78 = param_2;
            uVar13 = FUN_144b57870(plVar4[3],0,&local_78,0);
            if (((uVar13 == 0) || ((uVar13 & 0xff) == 0xa3)) || ((uVar13 & 0xff) == 7)) {
              iVar3 = param_2[0x78];
              uVar13 = 0;
              if (iVar3 == 1) {
                local_70 = 0x41444243;
                local_6c = 0x20007;
                lVar8 = plVar4[2];
              }
              else if (iVar3 == 2) {
                local_70 = 0x41444f42;
                local_6c = 7;
                lVar8 = *plVar4;
              }
              else if (iVar3 == 3) {
                local_70 = 0x6c617431;
                local_6c = 0x30007;
                lVar8 = plVar4[3];
              }
              else {
                if (iVar3 != 4) {
                  return 0;
                }
                local_70 = 0x41444245;
                local_6c = 0x10007;
                lVar8 = plVar4[1];
              }
              if (lVar8 != 0) {
                uVar13 = FUN_144b57870(lVar8,0,&local_78,0);
              }
            }
          }
        }
      }
      else {
        uVar13 = 6;
      }
    }
  }
  return uVar13;
}



// FUNCTION 144e029b0 FUN_144e029b0 body=413 status=ok
// SIG undefined FUN_144e029b0(void)

void FUN_144e029b0(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    if (*(longlong *)(param_1 + 0x2b8) != 0) {
      FUN_144b54b00();
    }
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0xd8));
    *(undefined8 *)(param_1 + 0xd8) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0xe0));
    *(undefined8 *)(param_1 + 0xe0) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0xe8));
    *(undefined8 *)(param_1 + 0xe8) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0xf0));
    *(undefined8 *)(param_1 + 0xf0) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0xf8));
    *(undefined8 *)(param_1 + 0xf8) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 600));
    *(undefined8 *)(param_1 + 600) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x250));
    *(undefined8 *)(param_1 + 0x250) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x248));
    *(undefined8 *)(param_1 + 0x248) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x210));
    *(undefined8 *)(param_1 + 0x210) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x218));
    *(undefined8 *)(param_1 + 0x218) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x1f8));
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x200));
    *(undefined8 *)(param_1 + 0x200) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x1d8));
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x2a8));
    *(undefined8 *)(param_1 + 0x2a8) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x310));
    *(undefined8 *)(param_1 + 0x310) = 0;
    *(undefined4 *)(param_1 + 0x308) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 144e02b50 FUN_144e02b50 body=62 status=ok
// SIG undefined FUN_144e02b50(void)

undefined4 FUN_144e02b50(longlong *param_1)

{
  undefined4 uVar1;
  longlong local_res8;
  
  uVar1 = FUN_144b55e20(*(undefined8 *)(*param_1 + 0x2b8),&local_res8);
  param_1[8] = local_res8;
  FUN_144b560a0();
  return uVar1;
}



// FUNCTION 144e02b90 FUN_144e02b90 body=109 status=ok
// SIG undefined FUN_144e02b90(void)

void FUN_144e02b90(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = *param_1;
  FUN_144b560a0(param_1[8]);
  iVar3 = FUN_144b54c60(*(undefined8 *)(lVar1 + 0x2b8),param_2);
  if (iVar3 == 0) {
    lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x2b8) + 0x80);
    lVar2 = *(longlong *)(lVar1 + 0x20);
    param_1[3] = *(longlong *)(lVar1 + 0x18);
    param_1[4] = lVar2;
    param_1[5] = *(longlong *)(lVar1 + 0x28);
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(lVar1 + 0x30);
  }
  return;
}



// FUNCTION 144e02c00 FUN_144e02c00 body=107 status=ok
// SIG undefined FUN_144e02c00(void)

void FUN_144e02c00(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = *param_1;
  FUN_144b560a0(param_1[8]);
  iVar3 = FUN_144b54bf0(*(undefined8 *)(lVar1 + 0x2b8),param_2);
  if (iVar3 == 0) {
    lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x2b8) + 0x80);
    lVar2 = *(longlong *)(lVar1 + 0x20);
    param_1[3] = *(longlong *)(lVar1 + 0x18);
    param_1[4] = lVar2;
    param_1[5] = *(longlong *)(lVar1 + 0x28);
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(lVar1 + 0x30);
  }
  return;
}



// FUNCTION 144e02c70 FUN_144e02c70 body=63 status=ok
// SIG undefined FUN_144e02c70(void)

void FUN_144e02c70(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144b5a580(*(longlong *)(*param_1 + 0x2b8) + 0xa8,param_1[8]);
  if (lVar1 != 0) {
    FUN_144b55f80(param_1[8]);
    param_1[8] = 0;
  }
  return;
}



// FUNCTION 144e02cb0 FUN_144e02cb0 body=81 status=ok
// SIG undefined FUN_144e02cb0(void)

undefined8 FUN_144e02cb0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(lVar1 + 0x78) == 0) {
    *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(*(longlong *)(lVar1 + 0x2b8) + 0x78);
    return 0;
  }
  uVar2 = FUN_144b57bd0(*(undefined8 *)(lVar1 + 0x2b8),local_res8);
  *(undefined8 *)(param_1 + 0xf8) = local_res8[0];
  return uVar2;
}



// FUNCTION 144e02d10 FUN_144e02d10 body=350 status=ok
// SIG undefined FUN_144e02d10(void)

ulonglong FUN_144e02d10(longlong param_1,longlong *param_2,ulonglong param_3,uint param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  long lVar3;
  ulonglong uVar4;
  
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) + 0x38);
  lVar3 = strtol(*(char **)(*(longlong *)(*param_2 + 0x250) + (param_3 & 0xffffffff) * 8),
                 (char **)0x0,10);
  FUN_144e04600(*(undefined8 *)(param_1 + 0xf8));
  uVar4 = (**(code **)(lVar1 + 0x78))(*(undefined8 *)(param_1 + 0xf8),param_2[8],lVar3,param_4 | 8);
  if ((int)uVar4 == 0) {
    lVar1 = *(longlong *)(param_1 + 0xf8);
    uVar2 = *(undefined8 *)(lVar1 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar1 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    uVar2 = *(undefined8 *)(lVar1 + 0x48);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar1 + 0x40);
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(lVar1 + 0x50);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(lVar1 + 0x54);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar1 + 0x60);
    uVar2 = *(undefined8 *)(lVar1 + 0xa0);
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(lVar1 + 0x98);
    *(undefined8 *)(param_1 + 0xa0) = uVar2;
    uVar2 = *(undefined8 *)(lVar1 + 0xb0);
    *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(lVar1 + 0xa8);
    *(undefined8 *)(param_1 + 0xb0) = uVar2;
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(lVar1 + 0xb8);
    uVar2 = *(undefined8 *)(lVar1 + 0x70);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar1 + 0x68);
    *(undefined8 *)(param_1 + 0x70) = uVar2;
    uVar2 = *(undefined8 *)(lVar1 + 0x80);
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar1 + 0x78);
    *(undefined8 *)(param_1 + 0x80) = uVar2;
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(lVar1 + 0x88);
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(lVar1 + 0x90);
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(lVar1 + 0x94);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(lVar1 + 0xc0);
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(lVar1 + 200);
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(lVar1 + 0xd0);
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(lVar1 + 0xd8);
    uVar4 = uVar4 & 0xffffffff;
  }
  return uVar4;
}



// FUNCTION 144e02e80 FUN_144e02e80 body=56 status=ok
// SIG undefined FUN_144e02e80(void)

undefined8 FUN_144e02e80(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144b55a90(*(undefined8 *)(param_1 + 8),"truetype");
  if (puVar1 == (undefined8 *)0x0) {
    return 0xb;
  }
  *(undefined8 *)(param_1 + 0x38) = *puVar1;
  return 0;
}



// FUNCTION 144e02ed0 FUN_144e02ed0 body=38 status=ok
// SIG undefined FUN_144e02ed0(void)

undefined8 FUN_144e02ed0(longlong param_1,ulonglong param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_144b56430(param_3,*(undefined8 *)(*(longlong *)(param_1 + 0x248) + (param_2 & 0xffffffff) * 8)
                ,param_4);
  return 0;
}



// FUNCTION 144e02f00 FUN_144e02f00 body=169 status=ok
// SIG undefined FUN_144e02f00(void)

long FUN_144e02f00(longlong param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  long lVar3;
  char *pcVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  
  uVar5 = 0;
  if (0 < *(int *)(param_1 + 0x240)) {
    puVar6 = *(undefined8 **)(param_1 + 0x248);
    uVar7 = uVar5;
    do {
      if (*param_2 == *(char *)*puVar6) {
        pcVar4 = param_2;
        do {
          cVar1 = *pcVar4;
          cVar2 = pcVar4[(longlong)*puVar6 - (longlong)param_2];
          if (cVar1 != cVar2) break;
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        if (cVar1 == cVar2) {
          lVar3 = strtol(*(char **)(*(longlong *)(param_1 + 0x250) + (longlong)(int)uVar7 * 8),
                         (char **)0x0,10);
          return lVar3;
        }
      }
      uVar7 = (ulonglong)((int)uVar7 + 1);
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 1;
    } while ((longlong)uVar5 < (longlong)*(int *)(param_1 + 0x240));
  }
  return 0;
}



// FUNCTION 144e030a0 FUN_144e030a0 body=299 status=ok
// SIG undefined FUN_144e030a0(void)

void FUN_144e030a0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = (**(code **)(param_2 + 0x68))(param_2,6,&local_38);
  if (iVar2 < 6) {
    *(undefined4 *)(param_2 + 0x18) = 3;
  }
  else {
    iVar2 = local_2c;
    if (local_2c < 0) {
      iVar2 = -local_2c;
    }
    if (iVar2 != 0) {
      if (iVar2 != 0x10000) {
        local_38 = FUN_144b555e0(local_38,iVar2);
        local_34 = FUN_144b555e0(local_34,iVar2);
        local_30 = FUN_144b555e0(local_30,iVar2);
        local_28 = FUN_144b555e0(local_28,iVar2);
        local_24 = FUN_144b555e0(local_24,iVar2);
        bVar3 = local_2c < 0;
        local_2c = 0x10000;
        if (bVar3) {
          local_2c = -0x10000;
        }
      }
      *(undefined4 *)(param_1 + 0x264) = local_38;
      *(undefined4 *)(param_1 + 0x26c) = local_34;
      *(int *)(param_1 + 0x270) = local_2c;
      *(undefined4 *)(param_1 + 0x268) = local_30;
      cVar1 = FUN_144b570a0(param_1 + 0x264);
      if (cVar1 != '\0') {
        *(int *)(param_1 + 0x274) = local_28 >> 0x10;
        *(int *)(param_1 + 0x278) = local_24 >> 0x10;
        goto LAB_144e031be;
      }
    }
    *(undefined4 *)(param_2 + 0x18) = 3;
  }
LAB_144e031be:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 144e031e0 FUN_144e031e0 body=1039 status=ok
// SIG undefined FUN_144e031e0(void)

void FUN_144e031e0(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  ulonglong uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  byte *pbVar10;
  int iVar11;
  byte *_Str1;
  uint uVar12;
  bool bVar13;
  int local_res10;
  int local_res18 [2];
  
  puVar3 = *(undefined8 **)(param_1 + 0x2a0);
  pbVar4 = (byte *)param_2[2];
  (*(code *)param_2[7])(param_2);
  _Str1 = (byte *)*param_2;
  if (pbVar4 <= _Str1) {
    *(undefined4 *)(param_2 + 3) = 3;
    return;
  }
  bVar2 = *_Str1;
  if ((9 < bVar2 - 0x30) && (bVar2 != 0x5b)) {
    if ((_Str1 + 0x11 < pbVar4) &&
       (iVar7 = strncmp((char *)_Str1,"StandardEncoding",0x10), iVar7 == 0)) {
      *(undefined4 *)(param_1 + 0x1e0) = 2;
      return;
    }
    if ((_Str1 + 0xf < pbVar4) && (iVar7 = strncmp((char *)_Str1,"ExpertEncoding",0xe), iVar7 == 0))
    {
      *(undefined4 *)(param_1 + 0x1e0) = 4;
      return;
    }
    if ((_Str1 + 0x12 < pbVar4) &&
       (iVar7 = strncmp((char *)_Str1,"ISOLatin1Encoding",0x11), iVar7 == 0)) {
      *(undefined4 *)(param_1 + 0x1e0) = 3;
      return;
    }
    *(undefined4 *)(param_2 + 3) = 0xa2;
    return;
  }
  uVar5 = param_2[4];
  bVar6 = false;
  puVar1 = param_2 + 0x16;
  if (bVar2 == 0x5b) {
    local_res10 = 0x100;
    bVar6 = true;
    *param_2 = (ulonglong)(_Str1 + 1);
  }
  else {
    local_res10 = (*(code *)param_2[9])(param_2);
    if (0x100 < local_res10) {
      *(undefined4 *)(param_2 + 3) = 3;
      return;
    }
  }
  (*(code *)param_2[7])(param_2);
  if ((byte *)*param_2 < pbVar4) {
    iVar7 = 0;
    if (*(longlong *)(param_1 + 0x1f8) != 0) {
      FUN_144b56350(uVar5);
      *(undefined8 *)(param_1 + 0x1f8) = 0;
      FUN_144b56350(uVar5,*(undefined8 *)(param_1 + 0x200));
      *(undefined8 *)(param_1 + 0x200) = 0;
      if ((code *)param_2[0x21] != (code *)0x0) {
        (*(code *)param_2[0x21])(puVar1);
      }
    }
    *(int *)(param_1 + 0x1e8) = local_res10;
    *(int *)(param_2 + 0x15) = local_res10;
    uVar9 = FUN_144b561b0(uVar5,2,0,local_res10,0,local_res18);
    *(undefined8 *)(param_1 + 0x1f8) = uVar9;
    if (local_res18[0] == 0) {
      uVar9 = FUN_144b561b0(uVar5,8,0,local_res10,0,local_res18);
      *(undefined8 *)(param_1 + 0x200) = uVar9;
      if ((local_res18[0] == 0) &&
         (local_res18[0] = (**(code **)*puVar3)(puVar1,local_res10,uVar5), local_res18[0] == 0)) {
        local_res18[0] = 0;
        iVar11 = iVar7;
        if (0 < local_res10) {
          do {
            (*(code *)param_2[0x20])(puVar1,iVar11,".notdef",8);
            iVar11 = iVar11 + 1;
          } while (iVar11 < local_res10);
        }
LAB_144e0349d:
        do {
          (*(code *)param_2[7])(param_2);
          if (pbVar4 <= (byte *)*param_2) {
LAB_144e035ba:
            *(undefined4 *)(param_1 + 0x1e0) = 1;
            *param_2 = (ulonglong)_Str1;
            return;
          }
          pbVar10 = (byte *)*param_2;
          bVar2 = *pbVar10;
          if (((((bVar2 == 100) && (_Str1 = pbVar10 + 3, _Str1 < pbVar4)) && (pbVar10[1] == 0x65))
              && ((pbVar10[2] == 0x66 && (*_Str1 < 0x21)))) &&
             ((0x100003601U >> ((ulonglong)*_Str1 & 0x3f) & 1) != 0)) goto LAB_144e035ba;
          if (bVar2 == 0x5d) {
            _Str1 = pbVar10 + 1;
            goto LAB_144e035ba;
          }
          iVar11 = iVar7;
          if (bVar2 - 0x30 < 10) {
            if (!bVar6) {
              iVar11 = (*(code *)param_2[9])(param_2);
              (*(code *)param_2[7])(param_2);
              bVar13 = pbVar10 == (byte *)*param_2;
              pbVar10 = (byte *)*param_2;
              if (bVar13) goto LAB_144e035a9;
            }
          }
          else if (!bVar6) {
            (*(code *)param_2[8])(param_2);
            _Str1 = pbVar10;
            if ((int)param_2[3] != 0) {
              return;
            }
            goto LAB_144e0349d;
          }
          if (((pbVar10 + 2 < pbVar4) && (*pbVar10 == 0x2f)) && (iVar7 < local_res10)) {
            _Str1 = pbVar10 + 1;
            *param_2 = (ulonglong)_Str1;
            (*(code *)param_2[8])(param_2);
            if (pbVar4 <= (byte *)*param_2) {
              return;
            }
            if ((int)param_2[3] != 0) {
              return;
            }
            uVar12 = (int)*param_2 - (int)_Str1;
            iVar8 = (*(code *)param_2[0x20])(puVar1,iVar11,_Str1,uVar12 + 1);
            *(int *)(param_2 + 3) = iVar8;
            if (iVar8 != 0) {
              return;
            }
            iVar7 = iVar7 + 1;
            *(undefined1 *)((ulonglong)uVar12 + *(longlong *)(param_2[0x1b] + (longlong)iVar11 * 8))
                 = 0;
          }
          else {
            _Str1 = pbVar10;
            if (bVar6) {
LAB_144e035a9:
              *(undefined4 *)(param_2 + 3) = 2;
              return;
            }
          }
        } while( true );
      }
    }
    *(int *)(param_2 + 3) = local_res18[0];
  }
  return;
}



// FUNCTION 144e035f0 FUN_144e035f0 body=1140 status=ok
// SIG undefined FUN_144e035f0(void)

void FUN_144e035f0(longlong param_1,longlong *param_2)

{
  char *pcVar1;
  byte bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  byte *pbVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  byte *pbVar12;
  ulonglong uVar13;
  longlong *plVar14;
  uint uVar15;
  uint local_res10;
  ulonglong uVar16;
  
  puVar3 = *(undefined8 **)(param_1 + 0x2a0);
  lVar4 = param_2[4];
  pbVar5 = (byte *)param_2[2];
  uVar10 = 0;
  uVar15 = 0;
  local_res10 = 0;
  bVar6 = false;
  (*(code *)param_2[7])(param_2);
  if ((byte *)*param_2 < pbVar5) {
    bVar2 = *(byte *)*param_2;
    if (bVar2 - 0x30 < 10) {
      iVar7 = (*(code *)param_2[9])(param_2);
      *(int *)(param_2 + 0x22) = iVar7;
      if ((int)param_2[3] != 0) {
        return;
      }
      if (-1 < iVar7) {
        lVar8 = (longlong)pbVar5 - *param_2 >> 2;
        if (lVar8 < iVar7) {
          *(int *)(param_2 + 0x22) = (int)lVar8;
        }
LAB_144e036fc:
        if (((byte *)*param_2 < pbVar5) && ((int)param_2[0x3e] == 0)) {
          iVar7 = (**(code **)*puVar3)(param_2 + 0x2f,(int)param_2[0x22],lVar4);
          if ((iVar7 != 0) ||
             ((iVar7 = (**(code **)*puVar3)(param_2 + 0x23,(int)param_2[0x22],lVar4), iVar7 != 0 ||
              (iVar7 = (**(code **)*puVar3)(param_2 + 0x3b,4,lVar4), iVar7 != 0))))
          goto LAB_144e03a4c;
          (*(code *)param_2[7])(param_2);
          pbVar12 = (byte *)*param_2;
          uVar13 = uVar10;
          uVar16 = uVar10;
          while (pbVar12 < pbVar5) {
            uVar15 = (uint)uVar16;
            if (((((*pbVar12 == 0x65) && (pbVar12 + 3 < pbVar5)) && (pbVar12[1] == 0x6e)) &&
                (((pbVar12[2] == 100 && (bVar2 = pbVar12[3], bVar2 < 0x21)) &&
                 ((0x100003601U >> ((ulonglong)bVar2 & 0x3f) & 1) != 0)))) || (*pbVar12 == 0x3e))
            break;
            (*(code *)param_2[8])(param_2);
            if (pbVar5 <= (byte *)*param_2) goto LAB_144e03a47;
            if ((int)param_2[3] != 0) {
              return;
            }
            bVar2 = *pbVar12;
            if ((bVar2 == 0x2f) || (bVar2 == 0x28)) {
              if (pbVar5 <= pbVar12 + (ulonglong)(bVar2 == 0x28) + 2) goto LAB_144e03a47;
              pbVar12 = pbVar12 + 1;
              uVar11 = (int)*param_2 - (int)pbVar12;
              if (bVar2 == 0x28) {
                uVar11 = uVar11 - 1;
              }
              iVar7 = (*(code *)param_2[0x2d])(param_2 + 0x23,uVar16,pbVar12,uVar11 + 1);
              if (iVar7 != 0) goto LAB_144e03a4c;
              *(undefined1 *)((ulonglong)uVar11 + *(longlong *)(param_2[0x28] + uVar13)) = 0;
              if (*pbVar12 == 0x2e) {
                uVar9 = uVar10;
                do {
                  pcVar1 = ".notdef" + uVar9;
                  uVar9 = uVar9 + 1;
                  if (*pcVar1 != *(char *)(*(longlong *)(param_2[0x28] + uVar13) + -1 + uVar9))
                  goto LAB_144e03876;
                } while (uVar9 != 8);
                bVar6 = true;
                local_res10 = uVar15;
              }
LAB_144e03876:
              (*(code *)param_2[7])(param_2);
              if (bVar2 == 0x28) {
                (*(code *)param_2[8])(param_2);
              }
              lVar4 = *param_2;
              (*(code *)param_2[9])(param_2);
              if (pbVar5 <= (byte *)*param_2) goto LAB_144e03a47;
              uVar11 = (int)*param_2 - (int)lVar4;
              iVar7 = (*(code *)param_2[0x39])(param_2 + 0x2f,uVar16,lVar4,uVar11 + 1);
              if (iVar7 != 0) goto LAB_144e03a4c;
              uVar15 = uVar15 + 1;
              uVar16 = (ulonglong)uVar15;
              plVar14 = (longlong *)(param_2[0x34] + uVar13);
              uVar13 = uVar13 + 8;
              *(undefined1 *)((ulonglong)uVar11 + *plVar14) = 0;
              if ((int)param_2[0x22] <= (int)uVar15) break;
            }
            uVar15 = (uint)uVar16;
            (*(code *)param_2[7])(param_2);
            pbVar12 = (byte *)*param_2;
          }
          plVar14 = param_2 + 0x3b;
          *(uint *)(param_2 + 0x22) = uVar15;
          if (bVar6) {
            while (pcVar1 = ".notdef" + uVar10, uVar10 = uVar10 + 1,
                  *pcVar1 == *(char *)(*(longlong *)param_2[0x28] + -1 + uVar10)) {
              if (uVar10 == 8) {
                return;
              }
            }
            iVar7 = (*(code *)param_2[0x45])
                              (plVar14,0,*(longlong *)param_2[0x28],*(undefined4 *)param_2[0x29]);
            if ((iVar7 == 0) &&
               (iVar7 = (*(code *)param_2[0x45])
                                  (plVar14,1,*(undefined8 *)param_2[0x34],
                                   *(undefined4 *)param_2[0x35]), iVar7 == 0)) {
              lVar4 = (longlong)(int)local_res10 * 4;
              lVar8 = (longlong)(int)local_res10 * 8;
              iVar7 = (*(code *)param_2[0x45])
                                (plVar14,2,*(undefined8 *)(lVar8 + param_2[0x28]),
                                 *(undefined4 *)(lVar4 + param_2[0x29]));
              if (iVar7 == 0) {
                iVar7 = (*(code *)param_2[0x45])
                                  (plVar14,3,*(undefined8 *)(lVar8 + param_2[0x34]),
                                   *(undefined4 *)(lVar4 + param_2[0x35]));
                if ((((iVar7 == 0) &&
                     (iVar7 = (*(code *)param_2[0x2d])
                                        (param_2 + 0x23,local_res10,*(undefined8 *)param_2[0x40],
                                         *(undefined4 *)param_2[0x41]), iVar7 == 0)) &&
                    (iVar7 = (*(code *)param_2[0x39])
                                       (param_2 + 0x2f,local_res10,
                                        *(undefined8 *)(param_2[0x40] + 8),
                                        *(undefined4 *)(param_2[0x41] + 4)), iVar7 == 0)) &&
                   ((iVar7 = (*(code *)param_2[0x2d])
                                       (param_2 + 0x23,0,*(undefined8 *)(param_2[0x40] + 0x10),
                                        *(undefined4 *)(param_2[0x41] + 8)), iVar7 == 0 &&
                    (iVar7 = (*(code *)param_2[0x39])
                                       (param_2 + 0x2f,0,*(undefined8 *)(param_2[0x40] + 0x18),
                                        *(undefined4 *)(param_2[0x41] + 0xc)), iVar7 == 0)))) {
                  return;
                }
              }
            }
            goto LAB_144e03a4c;
          }
        }
      }
    }
    else if (bVar2 == 0x3c) {
      (*(code *)param_2[8])(param_2);
      if ((int)param_2[3] != 0) {
        return;
      }
      (*(code *)param_2[7])(param_2);
      pbVar12 = (byte *)*param_2;
      uVar13 = uVar10;
      if (pbVar12 < pbVar5) {
        do {
          if (*(char *)*param_2 == '/') {
            uVar13 = (ulonglong)((int)uVar13 + 1);
          }
          else if (*(char *)*param_2 == '>') {
            *(int *)(param_2 + 0x22) = (int)uVar13;
            *param_2 = (longlong)pbVar12;
            break;
          }
          (*(code *)param_2[8])(param_2);
          if ((int)param_2[3] != 0) {
            return;
          }
          (*(code *)param_2[7])(param_2);
        } while ((byte *)*param_2 < pbVar5);
        goto LAB_144e036fc;
      }
    }
  }
LAB_144e03a47:
  iVar7 = 3;
LAB_144e03a4c:
  *(int *)(param_2 + 3) = iVar7;
  return;
}



// FUNCTION 144e03a70 FUN_144e03a70 body=1130 status=ok
// SIG undefined FUN_144e03a70(void)

void FUN_144e03a70(longlong param_1,longlong *param_2)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  byte *pbVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined1 *puVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  char *pcVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  int local_res18 [2];
  uint local_res20;
  uint local_68;
  int local_64;
  uint local_60 [2];
  undefined1 *local_58;
  char *local_50;
  longlong local_48;
  
  local_48 = param_2[4];
  pcVar15 = (char *)param_2[2];
  puVar11 = (undefined1 *)0x0;
  local_58 = (undefined1 *)0x0;
  iVar17 = 0;
  bVar5 = false;
  local_50 = pcVar15;
  (*(code *)param_2[7])(param_2);
  pcVar3 = (char *)*param_2;
  if ((pcVar3 < pcVar15) && (cVar1 = *pcVar3, *param_2 = (longlong)(pcVar3 + 1), cVar1 == '[')) {
    (*(code *)param_2[7])(param_2);
    local_64 = 0;
    iVar18 = 0;
    local_res20 = 0;
    iVar12 = 0;
    if ((char *)*param_2 < pcVar15) {
      lVar13 = 0;
      do {
        pbVar4 = (byte *)*param_2;
        bVar2 = *pbVar4;
        if (bVar2 == 0x5d) {
          *param_2 = *param_2 + 1;
          puVar11 = local_58;
          goto LAB_144e03eab;
        }
        if (bVar2 == 0x3c) {
          if ((local_58 == (undefined1 *)0x0) || (bVar5)) {
            (*(code *)param_2[8])(param_2);
            puVar11 = local_58;
            if ((int)param_2[3] != 0) goto LAB_144e03eab;
            uVar7 = ((*param_2 - (longlong)pbVar4) + -1) / 2;
            if ((int)uVar7 == 0) goto LAB_144e03e75;
            local_58 = (undefined1 *)
                       FUN_144b561b0(local_48,1,local_64,uVar7 & 0xffffffff,local_58,local_res18);
            if (local_res18[0] == 0) {
              bVar5 = true;
              *param_2 = (longlong)pbVar4;
              (*(code *)param_2[0xb])(param_2,local_58,uVar7 & 0xffffffff,local_60,1);
              local_res20 = local_60[0];
              pcVar15 = local_50;
              local_64 = (int)uVar7;
              goto LAB_144e03c4b;
            }
          }
          else {
LAB_144e03e60:
            local_res18[0] = 3;
          }
          *(int *)(param_2 + 3) = local_res18[0];
          puVar11 = local_58;
          goto LAB_144e03eab;
        }
        if (bVar2 - 0x30 < 10) {
          if ((bVar5) || (local_res20 = (*(code *)param_2[9])(param_2), (int)local_res20 < 0)) {
LAB_144e03e75:
            local_res18[0] = 3;
LAB_144e03e81:
            *(int *)(param_2 + 3) = local_res18[0];
            puVar11 = local_58;
            goto LAB_144e03eab;
          }
          (*(code *)param_2[8])(param_2);
          if ((int)param_2[3] != 0) {
            return;
          }
          lVar16 = *param_2;
          local_58 = (undefined1 *)(lVar16 + 1);
          puVar11 = local_58;
          if (local_res20 < (uint)((int)local_50 - (int)lVar16)) {
            *param_2 = (ulonglong)(local_res20 + 1) + lVar16;
            pcVar15 = local_50;
            goto LAB_144e03c4b;
          }
          break;
        }
LAB_144e03c4b:
        if (local_58 == (undefined1 *)0x0) goto LAB_144e03e60;
        if (((local_res20 & 1) != 0) && (local_58[local_res20 - 1] == '\0')) {
          local_res20 = local_res20 - 1;
        }
        if (local_res20 == 0) goto LAB_144e03e75;
        uVar10 = (int)pcVar15 - (int)*param_2;
        local_68 = 0;
        puVar11 = local_58;
        uVar6 = local_res20;
        if (local_res20 != 0) {
          do {
            if (iVar18 == 0) {
              lVar16 = *(longlong *)(param_1 + 0x2a8);
              if (0xb < lVar13) {
                iVar18 = 1;
                iVar17 = (uint)*(byte *)(lVar16 + 4) * 0x10 + (uint)*(byte *)(lVar16 + 5);
                iVar14 = iVar17 * 0x10 + 0xc;
                *(int *)(param_1 + 0x2b0) = iVar14;
                if (iVar14 <= (int)uVar10) {
                  uVar8 = FUN_144b561b0(local_48,1,0xc,iVar14,lVar16,local_res18);
                  *(undefined8 *)(param_1 + 0x2a8) = uVar8;
                  uVar6 = local_res20;
                  if (local_res18[0] == 0) goto LAB_144e03d3d;
                  goto LAB_144e03e81;
                }
                goto LAB_144e03e75;
              }
LAB_144e03e24:
              iVar12 = iVar12 + 1;
              *(undefined1 *)(lVar13 + lVar16) = *puVar11;
              lVar13 = lVar13 + 1;
            }
            else {
              if (iVar18 == 1) {
LAB_144e03d3d:
                if (iVar12 < *(int *)(param_1 + 0x2b0)) {
LAB_144e03e1d:
                  lVar16 = *(longlong *)(param_1 + 0x2a8);
                  goto LAB_144e03e24;
                }
                lVar16 = 0;
                if (iVar17 != 0) {
                  puVar9 = (undefined1 *)(*(longlong *)(param_1 + 0x2a8) + 0x1a);
                  do {
                    uVar6 = CONCAT31(CONCAT21(CONCAT11(puVar9[-2],puVar9[-1]),*puVar9),puVar9[1]);
                    if ((uVar10 < uVar6) || ((int)(uVar10 - uVar6) < *(int *)(param_1 + 0x2b0)))
                    goto LAB_144e03e75;
                    lVar16 = lVar16 + 1;
                    puVar9 = puVar9 + 0x10;
                    *(uint *)(param_1 + 0x2b0) =
                         (uVar6 + 3 & 0xfffffffc) + *(int *)(param_1 + 0x2b0);
                  } while (lVar16 < iVar17);
                }
                iVar18 = 2;
                uVar8 = FUN_144b561b0(local_48,1,iVar17 * 0x10 + 0xc,*(int *)(param_1 + 0x2b0) + 1,
                                      *(undefined8 *)(param_1 + 0x2a8),local_res18);
                *(undefined8 *)(param_1 + 0x2a8) = uVar8;
                uVar6 = local_res20;
                if (local_res18[0] == 0) goto LAB_144e03e15;
                goto LAB_144e03e81;
              }
              if (iVar18 == 2) {
LAB_144e03e15:
                if (iVar12 < *(int *)(param_1 + 0x2b0)) goto LAB_144e03e1d;
                goto LAB_144e03e75;
              }
            }
            local_68 = local_68 + 1;
            puVar11 = puVar11 + 1;
          } while (local_68 < uVar6);
        }
        (*(code *)param_2[7])(param_2);
        puVar11 = local_58;
        pcVar15 = local_50;
      } while ((char *)*param_2 < local_50);
    }
  }
  local_res18[0] = 3;
  *(undefined4 *)(param_2 + 3) = 3;
LAB_144e03eab:
  if (bVar5) {
    FUN_144b56350(local_48,puVar11);
  }
  return;
}



// FUNCTION 144e03ee0 FUN_144e03ee0 body=417 status=ok
// SIG undefined FUN_144e03ee0(void)

uint FUN_144e03ee0(longlong *param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint local_res8 [2];
  
  local_res8[0] = 0;
  (*(code *)**(undefined8 **)(param_4 + 8))(param_1,0,0,param_3);
  param_1[0x12] = (longlong)param_2;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x13] = 0;
  *(undefined1 *)((longlong)param_1 + 0xa4) = 0;
  local_res8[0] = FUN_144b597a0(param_2,0);
  if ((local_res8[0] == 0) && (local_res8[0] = FUN_144b59990(param_2,0x11), local_res8[0] == 0)) {
    plVar2 = (longlong *)param_2[7];
    lVar3 = *plVar2 + -0x7572542d53502125;
    if ((lVar3 == 0) && (lVar3 = plVar2[1] + -0x6e6f466570795465, lVar3 == 0)) {
      lVar3 = (ulonglong)*(byte *)(plVar2 + 2) - 0x74;
    }
    if (lVar3 != 0) {
      local_res8[0] = 2;
    }
    FUN_144b59ab0(param_2);
    if ((local_res8[0] == 0) && (local_res8[0] = FUN_144b597a0(param_2), local_res8[0] == 0)) {
      uVar1 = (undefined4)param_2[1];
      if (param_2[4] == 0) {
        param_1[0x13] = (ulonglong)*(uint *)((longlong)param_2 + 0xc) + *param_2;
        *(undefined4 *)(param_1 + 0x14) = uVar1;
        *(undefined1 *)((longlong)param_1 + 0xa4) = 1;
        local_res8[0] = FUN_144b597f0(param_2);
        if (local_res8[0] == 0) {
LAB_144e04050:
          lVar3 = param_1[0x13];
          param_1[1] = lVar3;
          param_1[2] = (int)param_1[0x14] + lVar3;
          *param_1 = lVar3;
          return 0;
        }
      }
      else {
        lVar3 = FUN_144b560d0(param_3,uVar1,local_res8);
        param_1[0x13] = lVar3;
        if ((local_res8[0] == 0) &&
           (local_res8[0] = FUN_144b59880(param_2,lVar3,uVar1), local_res8[0] == 0)) {
          *(undefined4 *)(param_1 + 0x14) = uVar1;
          goto LAB_144e04050;
        }
      }
    }
  }
  if (*(char *)((longlong)param_1 + 0xa4) == '\0') {
    FUN_144b56350(param_3,param_1[0x13]);
    param_1[0x13] = 0;
  }
  return local_res8[0];
}



// FUNCTION 144e04090 FUN_144e04090 body=490 status=ok
// SIG undefined FUN_144e04090(void)

ulonglong FUN_144e04090(undefined8 param_1,ulonglong *param_2,ulonglong param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  ulonglong uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined **ppuVar6;
  uint uVar7;
  undefined1 local_48 [16];
  int local_38;
  
  pcVar4 = (char *)((longlong)param_4 + param_3);
  *param_2 = param_3;
  param_2[2] = (ulonglong)pcVar4;
  *(int *)(param_2 + 3) = 0;
  (*(code *)param_2[7])(param_2);
  pcVar5 = (char *)*param_2;
  while (pcVar5 < pcVar4) {
    pcVar5 = (char *)*param_2;
    if (((*pcVar5 == 'F') && (pcVar5 + 0x19 < pcVar4)) &&
       (iVar2 = strncmp(pcVar5,"FontDirectory",0xd), iVar2 == 0)) {
      (*(code *)param_2[8])(param_2);
      (*(code *)param_2[7])(param_2);
      pcVar5 = (char *)*param_2;
      pcVar1 = pcVar5;
      while ((pcVar1 < pcVar4 &&
             (((*pcVar1 != 'k' || (pcVar4 <= pcVar1 + 5)) ||
              (iVar2 = strncmp(pcVar1,"known",5), iVar2 != 0))))) {
        (*(code *)param_2[8])(param_2);
        if ((int)param_2[3] != 0) goto LAB_144e04257;
        (*(code *)param_2[7])(param_2);
        pcVar1 = (char *)*param_2;
      }
      if (pcVar1 < pcVar4) {
        (*(code *)param_2[8])(param_2);
        (*(code *)param_2[0xe])(param_2,local_48);
        if (local_38 == 3) {
          pcVar5 = (char *)*param_2;
        }
      }
      *param_2 = (ulonglong)pcVar5;
    }
    else if ((*pcVar5 == '/') && (pcVar5 + 2 < pcVar4)) {
      pcVar5 = pcVar5 + 1;
      *param_2 = (ulonglong)pcVar5;
      (*(code *)param_2[8])(param_2);
      if ((int)param_2[3] != 0) break;
      uVar7 = (int)*param_2 - (int)pcVar5;
      if ((uVar7 - 1 < 0x15) && ((char *)*param_2 < pcVar4)) {
        ppuVar6 = &PTR_s_version_149a0cce0;
        do {
          pcVar1 = *ppuVar6;
          if ((pcVar1 != (char *)0x0) && (*pcVar5 == *pcVar1)) {
            uVar3 = 0xffffffffffffffff;
            do {
              uVar3 = uVar3 + 1;
            } while (pcVar1[uVar3] != '\0');
            if ((uVar7 == uVar3) && (iVar2 = memcmp(pcVar5,pcVar1,(ulonglong)uVar7), iVar2 == 0)) {
              uVar3 = FUN_144e046a0(param_1,param_2,ppuVar6);
              *(int *)(param_2 + 3) = (int)uVar3;
              if ((int)uVar3 != 0) {
                return uVar3;
              }
              break;
            }
          }
          ppuVar6 = ppuVar6 + 6;
        } while ((longlong)ppuVar6 < 0x149a0d0a0);
      }
    }
    else {
      (*(code *)param_2[8])(param_2);
      if ((int)param_2[3] != 0) break;
    }
    (*(code *)param_2[7])(param_2);
    pcVar5 = (char *)*param_2;
  }
LAB_144e04257:
  return (ulonglong)(uint)param_2[3];
}



// FUNCTION 144e04280 FUN_144e04280 body=892 status=ok
// SIG undefined FUN_144e04280(void)

int FUN_144e04280(longlong param_1)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  longlong lVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  int local_res8 [2];
  uint local_res10;
  undefined1 local_278 [32];
  undefined8 local_258;
  code *local_248;
  undefined8 local_1e0;
  undefined4 local_1d8;
  char local_1d4;
  undefined4 local_1d0;
  undefined1 local_1c8 [24];
  undefined4 local_1b0;
  int local_1ac;
  longlong local_1a0;
  code *local_170;
  undefined4 local_168;
  undefined8 local_160 [3];
  undefined4 local_148;
  undefined8 local_138;
  code *local_108;
  undefined8 local_100 [3];
  int local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  code *local_a8;
  undefined1 local_a0 [88];
  code *local_48;
  
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  uVar4 = *(undefined8 *)(param_1 + 0x2a0);
  memset(local_278,0,0x238);
  uVar10 = 0;
  local_168 = 0;
  local_1d0 = 0;
  local_1b0 = 0;
  local_e8 = 0;
  local_148 = 0;
  uVar7 = FUN_144b560d0(uVar3,0xc,local_res8);
  *(undefined8 *)(param_1 + 0x2a8) = uVar7;
  if (local_res8[0] == 0) {
    *(undefined4 *)(param_1 + 0x2b0) = 0xc;
    local_res8[0] = FUN_144e03ee0(local_278,*(undefined8 *)(param_1 + 0xa0),uVar3,uVar4);
    if ((local_res8[0] == 0) &&
       (local_res8[0] = FUN_144e04090(param_1,local_278,local_1e0,local_1d8), local_res8[0] == 0)) {
      if (*(char *)(param_1 + 0x261) == '*') {
        uVar17 = 0;
        *(undefined4 *)(param_1 + 0x240) = local_168;
        if (local_e8 == 0) {
          local_res8[0] = 3;
        }
        local_e8 = 0;
        *(undefined8 *)(param_1 + 0x210) = local_100[0];
        *(undefined8 *)(param_1 + 0x250) = local_d8;
        *(undefined8 *)(param_1 + 600) = local_d0;
        *(undefined8 *)(param_1 + 0x218) = local_160[0];
        *(undefined8 *)(param_1 + 0x248) = local_138;
        local_160[0] = 0;
        local_138 = 0;
        if (*(int *)(param_1 + 0x1e0) == 1) {
          local_res10 = 0;
          uVar13 = uVar10;
          uVar15 = uVar10;
          uVar16 = uVar10;
          uVar18 = uVar10;
          uVar9 = uVar17;
          if (0 < local_1ac) {
LAB_144e04430:
            iVar14 = 0;
            *(undefined2 *)(*(longlong *)(param_1 + 0x1f8) + uVar16) = 0;
            *(char **)(uVar15 + *(longlong *)(param_1 + 0x200)) = ".notdef";
            pcVar5 = *(char **)(uVar15 + local_1a0);
            iVar12 = (int)uVar13;
            if ((pcVar5 != (char *)0x0) && (0 < *(int *)(param_1 + 0x240))) {
              do {
                lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x248) + (longlong)iVar14 * 8);
                pcVar8 = pcVar5;
                do {
                  cVar1 = *pcVar8;
                  cVar2 = pcVar8[lVar6 - (longlong)pcVar5];
                  if (cVar1 != cVar2) break;
                  pcVar8 = pcVar8 + 1;
                } while (cVar2 != '\0');
                if (cVar1 == cVar2) {
                  lVar11 = 0;
                  *(short *)(*(longlong *)(param_1 + 0x1f8) + uVar16) = (short)iVar14;
                  *(longlong *)(uVar15 + *(longlong *)(param_1 + 0x200)) = lVar6;
                  goto LAB_144e044f0;
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < *(int *)(param_1 + 0x240));
              uVar10 = (ulonglong)local_res10;
            }
            goto LAB_144e04526;
          }
LAB_144e04549:
          *(undefined4 *)(param_1 + 0x1ec) = uVar17;
          *(undefined4 *)(param_1 + 0x1e8) = local_1d0;
          *(undefined4 *)(param_1 + 0x1f0) = uVar9;
        }
      }
      else {
        local_res8[0] = 2;
      }
    }
  }
  if (local_170 != (code *)0x0) {
    (*local_170)(local_1c8);
  }
  if (local_a8 != (code *)0x0) {
    (*local_a8)(local_100);
  }
  if (local_108 != (code *)0x0) {
    (*local_108)(local_160);
  }
  if (local_48 != (code *)0x0) {
    (*local_48)(local_a0);
  }
  if (local_1d4 == '\0') {
    FUN_144b56350(local_258,local_1e0);
    local_1e0 = 0;
  }
  (*local_248)(local_278);
  return local_res8[0];
  while (lVar11 != 8) {
LAB_144e044f0:
    pcVar5 = ".notdef" + lVar11;
    lVar11 = lVar11 + 1;
    if (*pcVar5 != *(char *)(lVar6 + -1 + lVar11)) {
      uVar10 = (ulonglong)local_res10;
      if (iVar12 < (int)uVar18) {
        uVar18 = uVar13;
      }
      if ((int)local_res10 <= iVar12) {
        local_res10 = iVar12 + 1;
        uVar10 = (ulonglong)local_res10;
      }
      goto LAB_144e04526;
    }
  }
  uVar10 = (ulonglong)local_res10;
LAB_144e04526:
  uVar9 = (undefined4)uVar10;
  uVar17 = (undefined4)uVar18;
  uVar13 = (ulonglong)(iVar12 + 1U);
  uVar15 = uVar15 + 8;
  uVar16 = uVar16 + 2;
  if (local_1ac <= (int)(iVar12 + 1U)) goto LAB_144e04549;
  goto LAB_144e04430;
}



// FUNCTION 144e04600 FUN_144e04600 body=146 status=ok
// SIG undefined FUN_144e04600(void)

void FUN_144e04600(longlong param_1)

{
  FUN_144b583b0();
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



// FUNCTION 144e046a0 FUN_144e046a0 body=144 status=ok
// SIG undefined FUN_144e046a0(void)

ulonglong FUN_144e046a0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong local_res18 [2];
  
  if (*(int *)(param_3 + 0xc) == 0xb) {
    (**(code **)(param_3 + 0x10))(param_1,param_2);
    return (ulonglong)*(uint *)(param_2 + 0x18);
  }
  iVar1 = *(int *)(param_3 + 8);
  if (iVar1 == 2) {
    local_res18[0] = param_1 + 0x110;
  }
  else if ((iVar1 == 3) || (iVar1 != 5)) {
    local_res18[0] = param_1 + 0xd8;
  }
  else {
    local_res18[0] = param_1 + 0x27c;
  }
  if (1 < *(int *)(param_3 + 0xc) - 9U) {
    uVar2 = (**(code **)(param_2 + 0x80))();
    return uVar2;
  }
  uVar2 = (**(code **)(param_2 + 0x88))(param_2,param_3,local_res18,0,0);
  return uVar2;
}



// FUNCTION 144e047b0 FUN_144e047b0 body=62 status=ok
// SIG undefined FUN_144e047b0(void)

void FUN_144e047b0(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    FUN_144e04fd0();
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 144e047f0 FUN_144e047f0 body=902 status=ok
// SIG undefined FUN_144e047f0(void)

ulonglong FUN_144e047f0(longlong param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  short *psVar7;
  void *_Dst;
  longlong lVar8;
  undefined8 uVar9;
  char *pcVar10;
  short sVar11;
  uint uVar12;
  uint local_res20 [2];
  undefined4 *local_38;
  undefined8 local_30;
  
  uVar9 = *(undefined8 *)(param_2 + 0x26);
  uVar12 = (param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f) & 0xffff;
  local_res20[0] = param_4;
  uVar5 = FUN_144e05130(param_2,param_3);
  local_res20[0] = (uint)uVar5;
  if ((local_res20[0] == 0) && ((int)param_3 < 0)) {
    return uVar5;
  }
  if ((char)uVar5 == '\x02') {
    puVar6 = (undefined4 *)FUN_144b560d0(uVar9,0xb8,local_res20);
    *(undefined4 **)(param_2 + 0x36) = puVar6;
    if (local_res20[0] != 0) {
      return (ulonglong)local_res20[0];
    }
    *param_2 = 1;
    *puVar6 = 0;
    puVar6[0x2a] = *(undefined4 *)(param_1 + 8);
    uVar5 = FUN_144e05050(puVar6,param_1);
    local_res20[0] = (uint)uVar5;
    if (local_res20[0] != 0) goto LAB_144e048b1;
    if ((int)param_3 < 0) {
      return uVar5;
    }
    if (uVar12 != 0) {
      local_res20[0] = 6;
      goto LAB_144e048b1;
    }
  }
  else if (local_res20[0] != 0) goto LAB_144e048b1;
  lVar1 = *(longlong *)(param_2 + 0x36);
  if (*(short *)(lVar1 + 0x60) != 0) {
    param_2[2] = param_2[2] | 0x12;
    param_2[1] = uVar12;
    if (*(short *)(lVar1 + 100) == *(short *)(lVar1 + 0x66)) {
      param_2[2] = param_2[2] | 4;
    }
    if (*(char *)(lVar1 + 0x56) != '\0') {
      param_2[3] = param_2[3] | 1;
    }
    if (799 < *(ushort *)(lVar1 + 0x5a)) {
      param_2[3] = param_2[3] | 2;
    }
    psVar7 = (short *)FUN_144b561b0(uVar9,0x10,0,1,0,local_res20);
    *(short **)(param_2 + 0xc) = psVar7;
    if (local_res20[0] != 0) goto LAB_144e048b1;
    param_2[10] = 1;
    psVar7[1] = *(short *)(lVar1 + 100);
    *psVar7 = *(short *)(lVar1 + 0x54) + *(short *)(lVar1 + 0x60);
    iVar3 = (uint)*(ushort *)(lVar1 + 0x4a) << 6;
    *(int *)(psVar7 + 2) = iVar3;
    sVar11 = *(short *)(lVar1 + 0x4e);
    if (sVar11 == 0) {
      sVar11 = 0x48;
    }
    sVar2 = *(short *)(lVar1 + 0x4c);
    if (sVar2 == 0) {
      sVar2 = 0x48;
    }
    iVar3 = FUN_144b55580(iVar3,sVar2,0x48);
    uVar12 = iVar3 + 0x20U & 0xffffffc0;
    *(uint *)(psVar7 + 6) = uVar12;
    iVar3 = (uint)*(ushort *)(lVar1 + 0x60) << 6;
    if (iVar3 < (int)uVar12) {
      *(int *)(psVar7 + 6) = iVar3;
      uVar4 = FUN_144b55580(iVar3,0x48,sVar2);
      *(undefined4 *)(psVar7 + 2) = uVar4;
    }
    iVar3 = FUN_144b55580(*(undefined4 *)(psVar7 + 2),sVar11,0x48);
    local_30 = 0;
    *(uint *)(psVar7 + 4) = iVar3 + 0x20U & 0xffffffc0;
    if (*(char *)(lVar1 + 0x5c) == 'M') {
      local_30 = 0x161726d6e;
    }
    local_38 = param_2;
    local_res20[0] = FUN_144b57870(&DAT_149a0d240,0,&local_38,0);
    if (local_res20[0] != 0) goto LAB_144e048b1;
    if (*(byte *)(lVar1 + 0x68) <= *(byte *)(lVar1 + 0x69)) {
      param_2[4] = ((uint)*(byte *)(lVar1 + 0x69) - (uint)*(byte *)(lVar1 + 0x68)) + 2;
      if (*(uint *)(lVar1 + 0x74) < *(uint *)(lVar1 + 8)) {
        uVar12 = *(uint *)(lVar1 + 8) - *(uint *)(lVar1 + 0x74);
        _Dst = (void *)FUN_144b560d0(uVar9,uVar12 + 1,local_res20);
        *(void **)(lVar1 + 0xb0) = _Dst;
        if (local_res20[0] == 0) {
          memcpy(_Dst,(void *)((ulonglong)*(uint *)(lVar1 + 0x74) + *(longlong *)(lVar1 + 0xa0)),
                 (ulonglong)uVar12);
          *(undefined1 *)((ulonglong)uVar12 + *(longlong *)(lVar1 + 0xb0)) = 0;
          lVar8 = -1;
          do {
            pcVar10 = (char *)(*(longlong *)(lVar1 + 0xb0) + 1 + lVar8);
            lVar8 = lVar8 + 1;
          } while (*pcVar10 != '\0');
          uVar9 = FUN_144b561b0(uVar9,1,uVar12,(int)lVar8 + 1,*(longlong *)(lVar1 + 0xb0),
                                local_res20);
          *(undefined8 *)(lVar1 + 0xb0) = uVar9;
          if (local_res20[0] == 0) {
            uVar12 = param_2[3];
            *(undefined8 *)(param_2 + 6) = uVar9;
            *(char **)(param_2 + 8) = "Regular";
            if ((uVar12 & 2) != 0) {
              pcVar10 = "Bold Italic";
              if ((uVar12 & 1) == 0) {
                pcVar10 = "Bold";
              }
              *(char **)(param_2 + 8) = pcVar10;
              return 0;
            }
            pcVar10 = "Italic";
            if ((uVar12 & 1) == 0) {
              pcVar10 = *(char **)(param_2 + 8);
            }
            *(char **)(param_2 + 8) = pcVar10;
            return 0;
          }
        }
        goto LAB_144e048b1;
      }
    }
  }
  local_res20[0] = 3;
LAB_144e048b1:
  uVar9 = *(undefined8 *)(param_2 + 0x26);
  FUN_144e04fd0(param_2);
  FUN_144b56350(uVar9,*(undefined8 *)(param_2 + 0xc));
  *(undefined8 *)(param_2 + 0xc) = 0;
  param_2[10] = 0;
  return (ulonglong)local_res20[0];
}



// FUNCTION 144e04b80 FUN_144e04b80 body=79 status=ok
// SIG undefined FUN_144e04b80(void)

undefined8 FUN_144e04b80(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*param_1 + 0xd8);
  FUN_144b57d60(*param_1,0);
  *(uint *)((longlong)param_1 + 0x24) = (uint)*(ushort *)(lVar1 + 0x50) << 6;
  *(uint *)(param_1 + 5) =
       ((uint)*(ushort *)(lVar1 + 0x50) - (uint)*(ushort *)(lVar1 + 0x60)) * 0x40;
  *(uint *)(param_1 + 6) = (uint)*(ushort *)(lVar1 + 0x66) << 6;
  return 0;
}



// FUNCTION 144e04bd0 FUN_144e04bd0 body=240 status=ok
// SIG undefined FUN_144e04bd0(void)

int FUN_144e04bd0(longlong *param_1,int *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  lVar1 = *param_1;
  iVar5 = 0x17;
  lVar2 = *(longlong *)(lVar1 + 0xd8);
  if (param_2[4] == 0) {
    iVar3 = param_2[2];
  }
  else {
    uVar4 = param_2[2] * param_2[4] + 0x24;
    param_3 = (ulonglong)uVar4;
    iVar3 = (int)uVar4 / 0x48;
  }
  uVar4 = iVar3 + 0x20 >> 6;
  if (*param_2 == 0) {
    if (uVar4 == *(int *)(*(longlong *)(lVar1 + 0x30) + 0xc) + 0x20 >> 6) goto LAB_144e04c80;
  }
  else {
    if (*param_2 == 1) {
      iVar3 = 0;
      if (uVar4 != *(ushort *)(lVar2 + 0x60)) {
        iVar3 = 0x17;
      }
      iVar5 = 0;
      if (iVar3 != 0) {
        return iVar3;
      }
LAB_144e04c80:
      FUN_144b57d60(lVar1,0,param_3,iVar5);
      *(uint *)((longlong)param_1 + 0x24) = (uint)*(ushort *)(lVar2 + 0x50) << 6;
      *(uint *)(param_1 + 5) =
           ((uint)*(ushort *)(lVar2 + 0x50) - (uint)*(ushort *)(lVar2 + 0x60)) * 0x40;
      *(uint *)(param_1 + 6) = (uint)*(ushort *)(lVar2 + 0x66) << 6;
      return 0;
    }
    iVar5 = 7;
  }
  return iVar5;
}



// FUNCTION 144e04cc0 FUN_144e04cc0 body=633 status=ok
// SIG undefined FUN_144e04cc0(void)

int FUN_144e04cc0(longlong param_1,longlong *param_2,uint param_3,uint param_4)

{
  short sVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  uint uVar10;
  ushort *puVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  int local_res8 [2];
  
  lVar3 = *param_2;
  local_res8[0] = 0;
  if (lVar3 == 0) {
    return 0x23;
  }
  lVar4 = *(longlong *)(lVar3 + 0xd8);
  if ((lVar4 != 0) && (param_3 < *(uint *)(lVar3 + 0x10))) {
    if (param_3 == 0) {
      param_3 = (uint)*(byte *)(lVar4 + 0x6a);
    }
    else {
      param_3 = param_3 - 1;
    }
    sVar1 = *(short *)(lVar4 + 4);
    iVar9 = 4;
    if (sVar1 == 0x300) {
      iVar9 = 6;
    }
    iVar6 = 0x76;
    if (sVar1 == 0x300) {
      iVar6 = 0x94;
    }
    uVar10 = iVar9 * param_3 + iVar6;
    iVar9 = 2;
    if (sVar1 == 0x300) {
      iVar9 = 4;
    }
    if ((*(int *)(lVar4 + 8) - iVar9) - 2U <= uVar10) {
      return 3;
    }
    puVar11 = (ushort *)((ulonglong)uVar10 + *(longlong *)(lVar4 + 0xa0));
    *(uint *)(param_1 + 0x6c) = (uint)*puVar11;
    if (sVar1 == 0x300) {
      uVar10 = (uint)*(uint3 *)((longlong)puVar11 + 3);
    }
    else {
      uVar10 = (uint)*(byte *)((longlong)puVar11 + 3);
    }
    uVar10 = uVar10 << 8 | (uint)(byte)puVar11[1];
    if (uVar10 < *(uint *)(lVar4 + 8)) {
      *(uint *)(param_1 + 0x68) = (uint)*(ushort *)(lVar4 + 0x60);
      *(undefined1 *)(param_1 + 0x82) = 1;
      *(undefined4 *)(param_1 + 0x90) = 0;
      uVar2 = *(ushort *)(lVar4 + 0x50);
      *(uint *)(param_1 + 0x94) = (uint)uVar2;
      *(undefined4 *)(param_1 + 0x60) = 0x62697473;
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x6c) << 6;
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x68) << 6;
      *(uint *)(param_1 + 0x3c) = (uint)uVar2 << 6;
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x6c) << 6;
      *(undefined4 *)(param_1 + 0x38) = 0;
      FUN_144b58340((int *)(param_1 + 0x30),*(int *)(param_1 + 0x68) << 6);
      if ((param_4 >> 0x16 & 1) == 0) {
        uVar14 = *(int *)(param_1 + 0x6c) + 7;
        puVar13 = (undefined1 *)((ulonglong)uVar10 + *(longlong *)(lVar4 + 0xa0));
        uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x98);
        uVar15 = uVar14 >> 3;
        *(uint *)(param_1 + 0x70) = uVar15;
        if ((uVar14 >> 3 == 0) ||
           (*(uint *)(lVar4 + 8) < *(int *)(param_1 + 0x68) * uVar15 + uVar10)) {
          local_res8[0] = 3;
        }
        else {
          puVar7 = (undefined1 *)FUN_144b561b0(uVar5,uVar15,0,*(int *)(param_1 + 0x68),0,local_res8)
          ;
          *(undefined1 **)(param_1 + 0x78) = puVar7;
          if (local_res8[0] == 0) {
            for (uVar14 = uVar14 >> 3; uVar14 != 0; uVar14 = uVar14 - 1) {
              uVar16 = (ulonglong)*(uint *)(param_1 + 0x68);
              if (puVar13 + *(uint *)(param_1 + 0x68) < puVar13) {
                uVar16 = 0;
              }
              puVar8 = puVar7;
              uVar12 = 0;
              if (uVar16 != 0) {
                do {
                  uVar12 = uVar12 + 1;
                  *puVar8 = *puVar13;
                  puVar13 = puVar13 + 1;
                  puVar8 = puVar8 + *(int *)(param_1 + 0x70);
                } while (uVar12 < uVar16);
              }
              puVar7 = puVar7 + 1;
            }
            *(undefined4 *)(*(longlong *)(param_1 + 0xf0) + 8) = 1;
          }
        }
      }
    }
    else {
      local_res8[0] = 3;
    }
    return local_res8[0];
  }
  return 6;
}



// FUNCTION 144e04fd0 FUN_144e04fd0 body=126 status=ok
// SIG undefined FUN_144e04fd0(void)

void FUN_144e04fd0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xd8);
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0xa0) != 0) {
      FUN_144b59b40(*(undefined8 *)(param_1 + 0xa0));
    }
    FUN_144b56350(uVar2,*(undefined8 *)(lVar1 + 0xb0));
    *(undefined8 *)(lVar1 + 0xb0) = 0;
    FUN_144b56350(uVar2,lVar1);
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 144e05050 FUN_144e05050 body=218 status=ok
// SIG undefined FUN_144e05050(void)

undefined8 FUN_144e05050(undefined4 *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_144b597a0(param_2,*param_1);
  if (((int)uVar2 != 0) ||
     (uVar2 = FUN_144b5a030(param_2,&DAT_149a0d1a0,param_1 + 1), (int)uVar2 != 0)) {
    return uVar2;
  }
  if ((*(short *)(param_1 + 1) - 0x200U & 0xfeff) == 0) {
    uVar1 = 0x76;
    if (*(short *)(param_1 + 1) == 0x300) {
      uVar1 = 0x94;
    }
    if (uVar1 <= (uint)param_1[2]) {
      if (*(short *)(param_1 + 1) == 0x200) {
        *(undefined8 *)(param_1 + 0x21) = 0;
        param_1[0x23] = 0;
      }
      if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
        uVar2 = FUN_144b597a0(param_2,*param_1);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar2 = FUN_144b59b00(param_2,param_1[2],param_1 + 0x28);
        return uVar2;
      }
    }
  }
  return 2;
}



// FUNCTION 144e05130 FUN_144e05130 body=1797 status=ok
// SIG undefined FUN_144e05130(void)

void FUN_144e05130(uint *param_1,uint param_2)

{
  longlong lVar1;
  ushort uVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_118 [32];
  int local_f8;
  ushort local_f4;
  short local_f0;
  ushort local_ee;
  undefined8 local_e8;
  short local_e0;
  ushort local_de;
  ushort local_dc;
  int local_d8;
  undefined1 local_d0 [4];
  uint local_cc;
  undefined8 local_c8;
  undefined1 local_c0 [4];
  int local_bc;
  int local_b8;
  short local_b4;
  ushort local_b2;
  short local_b0;
  short local_ae;
  int local_ac;
  undefined1 local_a0 [8];
  int local_98;
  int local_90;
  undefined1 local_88 [12];
  ushort local_7c;
  ushort local_7a;
  undefined1 local_78 [12];
  ushort local_6c;
  ushort local_6a;
  undefined1 local_68 [12];
  ushort local_5c;
  ushort local_5a;
  int local_58;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c8 = *(undefined8 *)(param_1 + 0x26);
  lVar1 = *(longlong *)(param_1 + 0x28);
  iVar6 = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  local_e8 = 0;
  uVar11 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f) & 0xffff;
  local_f8 = FUN_144b597a0(lVar1,0);
  iVar5 = local_f8;
  if ((local_f8 != 0) || (iVar5 = FUN_144b5a030(lVar1,&DAT_149a0d0d0,&local_f0), iVar5 != 0))
  goto LAB_144e05827;
  local_f8 = 2;
  if (local_f0 != 0x5a4d) goto LAB_144e0580b;
  local_f8 = FUN_144b597a0(lVar1,local_ee);
  iVar5 = local_f8;
  if ((local_f8 != 0) || (iVar5 = FUN_144b5a030(lVar1,&DAT_149a0d0e8,&local_e0), iVar5 != 0))
  goto LAB_144e05827;
  local_f8 = 2;
  if (local_e0 == 0x454e) {
    local_f8 = FUN_144b597a0(lVar1,(uint)local_de + (uint)local_ee);
    iVar5 = local_f8;
    if ((local_f8 != 0) ||
       (local_f8 = FUN_144b59990(lVar1,(uint)local_dc - (uint)local_de), iVar5 = local_f8,
       local_f8 != 0)) goto LAB_144e05827;
    uVar2 = FUN_144b59c30(lVar1,0);
    if (uVar2 < 0x11) {
      sVar3 = FUN_144b59c30(lVar1);
      while (sVar3 != 0) {
        uVar7 = FUN_144b59c30(lVar1);
        if (sVar3 == -0x7ff8) {
          local_e8 = uVar7 & 0xffff;
          iVar6 = FUN_144b59870(lVar1);
          iVar6 = (*(int *)(lVar1 + 0x38) - *(int *)(lVar1 + 0x40)) + 4 + iVar6;
          break;
        }
        *(longlong *)(lVar1 + 0x38) = *(longlong *)(lVar1 + 0x38) + (uVar7 & 0xffff) * 0xc + 4;
        sVar3 = FUN_144b59c30(lVar1);
      }
      FUN_144b59ab0(lVar1);
      if ((((short)local_e8 != 0) && (iVar6 != 0)) &&
         (uVar10 = (uint)local_e8 & 0xffff, uVar10 * 0x76 <= *(uint *)(lVar1 + 8))) {
        *param_1 = uVar10;
        iVar5 = local_f8;
        if ((int)param_2 < 0) goto LAB_144e05827;
        if (uVar11 < uVar10) {
          uVar8 = FUN_144b560d0(local_c8,0xb8,&local_f8);
          *(undefined8 *)(param_1 + 0x36) = uVar8;
          iVar5 = local_f8;
          if (local_f8 != 0) goto LAB_144e05827;
          local_f8 = FUN_144b597a0(lVar1,iVar6 + uVar11 * 0xc);
          if ((local_f8 != 0) || (local_f8 = FUN_144b59990(lVar1,0xc), local_f8 != 0))
          goto LAB_144e0580b;
          uVar4 = FUN_144b59c30(lVar1);
          **(int **)(param_1 + 0x36) = (uint)uVar4 << ((byte)uVar2 & 0x1f);
          uVar4 = FUN_144b59c30(lVar1);
          *(uint *)(*(longlong *)(param_1 + 0x36) + 0xa8) = (uint)uVar4 << ((byte)uVar2 & 0x1f);
          *(longlong *)(lVar1 + 0x38) = *(longlong *)(lVar1 + 0x38) + 8;
          FUN_144b59ab0(lVar1);
          local_f8 = FUN_144e05050(*(undefined8 *)(param_1 + 0x36),lVar1);
          goto LAB_144e057ee;
        }
        goto LAB_144e05800;
      }
    }
  }
  else {
    if (local_e0 != 0x4550) goto LAB_144e057ee;
    local_f8 = FUN_144b597a0(lVar1,local_ee);
    iVar5 = local_f8;
    if ((local_f8 != 0) ||
       (local_f8 = FUN_144b5a030(lVar1,&DAT_149a0d100,&local_b8), iVar5 = local_f8, local_f8 != 0))
    goto LAB_144e05827;
    if ((local_b8 == 0x4550) && (((local_b4 == 0x14c && (local_b0 == 0xe0)) && (local_ae == 0x10b)))
       ) {
      uVar2 = 0;
      *param_1 = 0;
      if (local_b2 != 0) {
        do {
          local_f8 = 0;
          local_f8 = FUN_144b5a030(lVar1,&DAT_149a0d138,local_a0);
          iVar5 = local_f8;
          if (local_f8 != 0) goto LAB_144e05827;
          if (local_ac == local_98) {
            local_f8 = FUN_144b597a0(lVar1,local_90);
            iVar5 = local_f8;
            if ((local_f8 != 0) ||
               (local_f8 = FUN_144b5a030(lVar1,&DAT_149a0d158,local_68), iVar6 = local_90,
               iVar5 = local_f8, local_f8 != 0)) goto LAB_144e05827;
            uVar10 = 0;
            local_f4 = 0;
            if ((uint)local_5a + (uint)local_5c == 0) goto LAB_144e057ee;
            local_f8 = 0;
            goto LAB_144e05530;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < local_b2);
        iVar5 = 3;
        goto LAB_144e05827;
      }
    }
  }
  goto LAB_144e057f4;
  while( true ) {
    if (-1 < (longlong)local_e8) goto LAB_144e057f4;
    iVar12 = local_90 + (local_e8._4_4_ & 0x7fffffff);
    local_e8 = local_e8 & 0x7fffffffffffffff;
    local_d8 = iVar12;
    local_f8 = FUN_144b597a0(lVar1,iVar12);
    iVar5 = local_f8;
    if ((local_f8 != 0) ||
       (local_f8 = FUN_144b5a030(lVar1,&DAT_149a0d158,local_78), iVar5 = local_f8, local_f8 != 0))
    goto LAB_144e05827;
    uVar2 = 0;
    if ((uint)local_6a + (uint)local_6c != 0) {
      uVar10 = 0;
      local_f8 = 0;
      do {
        uVar4 = 0;
        local_f8 = FUN_144b597a0(lVar1,iVar12 + (uVar10 + 2) * 8);
        iVar5 = local_f8;
        if ((local_f8 != 0) ||
           (local_f8 = FUN_144b5a030(lVar1,&DAT_149a0d178,local_d0), iVar5 = local_f8, local_f8 != 0
           )) goto LAB_144e05827;
        if (-1 < (int)local_cc) goto LAB_144e057f4;
        local_cc = local_cc & 0x7fffffff;
        iVar12 = local_90 + local_cc;
        local_f8 = FUN_144b597a0(lVar1,iVar12);
        iVar5 = local_f8;
        if ((local_f8 != 0) ||
           (local_f8 = FUN_144b5a030(lVar1,&DAT_149a0d158,local_88), iVar5 = local_f8, local_f8 != 0
           )) goto LAB_144e05827;
        if ((uint)local_7a + (uint)local_7c != 0) {
          uVar10 = 0;
          local_f8 = 0;
          do {
            local_f8 = FUN_144b597a0(lVar1,iVar12 + (uVar10 + 2) * 8);
            iVar5 = local_f8;
            if ((local_f8 != 0) ||
               (local_f8 = FUN_144b5a030(lVar1,&DAT_149a0d178,local_c0), iVar5 = local_f8,
               local_f8 != 0)) goto LAB_144e05827;
            if ((local_cc & 0x80000000) != 0) goto LAB_144e057f4;
            if ((int)local_e8 == 8) {
              local_f8 = FUN_144b597a0(lVar1,local_bc + iVar6);
              iVar5 = local_f8;
              if ((local_f8 != 0) ||
                 (local_f8 = FUN_144b5a030(lVar1,&DAT_149a0d188,&local_58), iVar5 = local_f8,
                 local_f8 != 0)) goto LAB_144e05827;
              if (uVar11 == *param_1) {
                piVar9 = (int *)FUN_144b560d0(local_c8,0xb8,&local_f8);
                *(int **)(param_1 + 0x36) = piVar9;
                iVar5 = local_f8;
                if (local_f8 != 0) goto LAB_144e05827;
                *piVar9 = (local_58 - local_98) + local_90;
                *(undefined4 *)(*(longlong *)(param_1 + 0x36) + 0xa8) = local_54;
                local_f8 = FUN_144e05050(*(undefined8 *)(param_1 + 0x36),lVar1);
                if (local_f8 != 0) goto LAB_144e0580b;
              }
              *param_1 = *param_1 + 1;
            }
            uVar4 = uVar4 + 1;
            uVar10 = (uint)uVar4;
          } while (uVar10 < (uint)local_7a + (uint)local_7c);
        }
        uVar2 = uVar2 + 1;
        uVar10 = (uint)uVar2;
        iVar12 = local_d8;
      } while ((uint)uVar2 < (uint)local_6a + (uint)local_6c);
    }
    local_f4 = local_f4 + 1;
    uVar10 = (uint)local_f4;
    if ((uint)local_5a + (uint)local_5c <= (uint)local_f4) break;
LAB_144e05530:
    local_f8 = FUN_144b597a0(lVar1,iVar6 + (uVar10 + 2) * 8);
    iVar5 = local_f8;
    if ((local_f8 != 0) ||
       (local_f8 = FUN_144b5a030(lVar1,&DAT_149a0d178,&local_e8), iVar5 = local_f8, local_f8 != 0))
    goto LAB_144e05827;
  }
LAB_144e057ee:
  if (*param_1 != 0) {
    if ((int)*param_1 <= (int)uVar11) {
LAB_144e05800:
      iVar5 = 6;
      goto LAB_144e05827;
    }
    iVar5 = local_f8;
    if (local_f8 == 0) goto LAB_144e05827;
LAB_144e0580b:
    FUN_144e04fd0(param_1);
    iVar5 = local_f8;
    goto LAB_144e05827;
  }
LAB_144e057f4:
  iVar5 = 3;
LAB_144e05827:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_118,iVar5);
}



// FUNCTION 144e058e0 FUN_144e058e0 body=256 status=ok
// SIG undefined FUN_144e058e0(void)

short FUN_144e058e0(longlong param_1,uint *param_2)

{
  ushort uVar1;
  short sVar2;
  ushort *puVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  
  puVar3 = *(ushort **)(param_1 + 0x18);
  uVar7 = *param_2;
  uVar9 = (uint)puVar3[3] * 0x100 + (uint)puVar3[1];
  if (uVar7 < uVar9) {
    uVar1 = *puVar3;
    uVar10 = (uint)puVar3[2] * 0x100 + (uint)uVar1;
    do {
      uVar6 = uVar7 + 1;
      if (uVar7 + 1 < uVar10) {
        uVar6 = uVar10;
      }
      uVar4 = (ushort)uVar6 & 0xff;
      uVar8 = (ushort)(uVar6 >> 8);
      uVar5 = uVar1;
      if ((uVar1 <= uVar4) && (uVar5 = uVar4, puVar3[1] < uVar4)) {
        uVar8 = uVar8 + 1;
        uVar5 = uVar1;
      }
      uVar7 = (uint)uVar8 * 0x100 + (uint)uVar5;
      sVar2 = *(short *)(*(longlong *)(puVar3 + 8) +
                        (longlong)
                        (int)((((uint)uVar8 - (uint)puVar3[2]) *
                               (((uint)puVar3[1] - (uint)uVar1) + 1) - (uint)uVar1) + (uint)uVar5) *
                        2);
    } while ((sVar2 == -1) && (uVar7 < uVar9));
    *param_2 = uVar7;
    return sVar2;
  }
  *param_2 = uVar7;
  return 0;
}



// FUNCTION 144e059e0 FUN_144e059e0 body=392 status=ok
// SIG undefined FUN_144e059e0(void)

void FUN_144e059e0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar4;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x1b0));
    uVar4 = 0;
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x1c8));
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    if (*(longlong *)(param_1 + 0x1a0) != 0) {
      uVar5 = uVar4;
      if (0 < *(int *)(param_1 + 0x19c)) {
        do {
          puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x1a0) + uVar5);
          if (puVar2 != (undefined8 *)0x0) {
            FUN_144b56350(uVar1,*puVar2);
            *puVar2 = 0;
            if (*(char *)(puVar2 + 1) != '\0') {
              FUN_144b56350(uVar1,puVar2[2]);
              puVar2[2] = 0;
            }
          }
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar3;
          uVar5 = uVar5 + 0x18;
        } while ((int)uVar3 < *(int *)(param_1 + 0x19c));
      }
      FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x1a0));
      *(undefined8 *)(param_1 + 0x1a0) = 0;
    }
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x140));
    *(undefined8 *)(param_1 + 0x140) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x128));
    *(undefined8 *)(param_1 + 0x128) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x130));
    *(undefined8 *)(param_1 + 0x130) = 0;
    if (*(longlong *)(param_1 + 0xa0) == param_1 + 0xd8) {
      FUN_144b59780();
      *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x120);
    }
  }
  return;
}



// FUNCTION 144e05b70 FUN_144e05b70 body=480 status=ok
// SIG undefined FUN_144e05b70(void)

undefined8 FUN_144e05b70(undefined8 param_1,longlong param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_18 [2];
  
  uVar5 = FUN_144e06220();
  if ((int)uVar5 != 0) {
    FUN_144e059e0(param_2);
    lVar9 = param_2 + 0xd8;
    iVar4 = FUN_1451d4060(lVar9,param_1);
    if (((char)iVar4 == '\a') ||
       ((iVar4 != 0 && ((iVar4 = FUN_1451d4b10(lVar9,param_1), (char)iVar4 == '\a' || (iVar4 != 0)))
        ))) {
LAB_144e05beb:
      FUN_144e059e0(param_2);
      return 2;
    }
    *(undefined8 *)(param_2 + 0x120) = param_1;
    *(longlong *)(param_2 + 0xa0) = lVar9;
    uVar5 = FUN_144e06220(lVar9,param_2,param_3);
    if ((int)uVar5 != 0) goto LAB_144e05beb;
  }
  if (param_3 < 0) {
    return uVar5;
  }
  if ((0 < param_3) && ((short)param_3 != 0)) {
    FUN_144e059e0(param_2);
    return 6;
  }
  pcVar1 = *(char **)(param_2 + 0x130);
  bVar3 = false;
  lVar9 = 0;
  if ((((pcVar1 == (char *)0x0) || (pcVar2 = *(char **)(param_2 + 0x128), pcVar2 == (char *)0x0)) ||
      ((*pcVar1 + 0xb7U & 0xdf) != 0)) ||
     (((pcVar1[1] + 0xadU & 0xdf) != 0 || ((pcVar1[2] + 0xb1U & 0xdf) != 0)))) goto LAB_144e05d06;
  pcVar1 = pcVar1 + 3;
  lVar8 = lVar9;
  do {
    lVar6 = lVar8 + 1;
    lVar7 = lVar9;
    if (pcVar1[lVar8] != (&DAT_149a0d678)[lVar8]) goto LAB_144e05ca0;
    lVar8 = lVar6;
  } while (lVar6 != 6);
  goto LAB_144e05d03;
  while (lVar7 = lVar8, lVar8 != 5) {
LAB_144e05ca0:
    lVar8 = lVar7 + 1;
    if (pcVar1[lVar7] != (&DAT_149a0d680)[lVar7]) goto LAB_144e05ccb;
  }
  if ((*pcVar2 != '1') || (pcVar2[1] != '\0')) {
LAB_144e05ccb:
    iVar4 = strcmp(pcVar1,"646.1991");
    if (iVar4 != 0) goto LAB_144e05d06;
    do {
      lVar8 = lVar9 + 1;
      if (pcVar2[lVar9] != (&DAT_149a0d694)[lVar9]) goto LAB_144e05d06;
      lVar9 = lVar8;
    } while (lVar8 != 4);
  }
LAB_144e05d03:
  bVar3 = true;
LAB_144e05d06:
  local_18[1] = 0;
  if (bVar3) {
    local_18[1] = 0x10003756e6963;
  }
  local_18[0] = param_2;
  uVar5 = FUN_144b57870(&DAT_149a0d3f0,0,local_18,0);
  return uVar5;
}



// FUNCTION 144e05d50 FUN_144e05d50 body=76 status=ok
// SIG undefined FUN_144e05d50(void)

undefined8 FUN_144e05d50(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_144b57d60(lVar1);
  *(int *)((longlong)param_1 + 0x24) = *(int *)(lVar1 + 0x150) << 6;
  *(int *)(param_1 + 5) = *(int *)(lVar1 + 0x154) * -0x40;
  *(int *)(param_1 + 6) = (int)*(short *)(lVar1 + 0x170) << 6;
  return 0;
}



// FUNCTION 144e05da0 FUN_144e05da0 body=225 status=ok
// SIG undefined FUN_144e05da0(void)

int FUN_144e05da0(longlong *param_1,int *param_2,ulonglong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  lVar1 = *param_1;
  iVar5 = 0x17;
  if (param_2[4] == 0) {
    iVar3 = param_2[2];
  }
  else {
    uVar4 = param_2[2] * param_2[4] + 0x24;
    param_3 = (ulonglong)uVar4;
    iVar3 = (int)uVar4 / 0x48;
  }
  iVar3 = iVar3 + 0x20 >> 6;
  if (*param_2 == 0) {
    if (iVar3 == *(int *)(*(longlong *)(lVar1 + 0x30) + 0xc) + 0x20 >> 6) goto LAB_144e05e43;
  }
  else {
    if (*param_2 == 1) {
      iVar2 = 0;
      if (iVar3 != *(int *)(lVar1 + 0x154) + *(int *)(lVar1 + 0x150)) {
        iVar2 = 0x17;
      }
      iVar5 = 0;
      if (iVar2 != 0) {
        return iVar2;
      }
LAB_144e05e43:
      FUN_144b57d60(lVar1,0,param_3,iVar5);
      *(int *)((longlong)param_1 + 0x24) = *(int *)(lVar1 + 0x150) << 6;
      *(int *)(param_1 + 5) = *(int *)(lVar1 + 0x154) * -0x40;
      *(int *)(param_1 + 6) = (int)*(short *)(lVar1 + 0x170) << 6;
      return 0;
    }
    iVar5 = 7;
  }
  return iVar5;
}



// FUNCTION 144e05e90 FUN_144e05e90 body=711 status=ok
// SIG undefined FUN_144e05e90(void)

int FUN_144e05e90(longlong param_1,longlong *param_2,uint param_3,uint param_4)

{
  undefined1 uVar1;
  short sVar2;
  short sVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  ulonglong uVar12;
  short *psVar13;
  
  lVar4 = *param_2;
  iVar10 = 0;
  if (lVar4 == 0) {
    iVar10 = 0x23;
  }
  else if (param_3 < *(uint *)(lVar4 + 0x10)) {
    uVar5 = *(undefined8 *)(lVar4 + 0xa0);
    psVar13 = (short *)((ulonglong)param_3 * 0x10 + *(longlong *)(lVar4 + 0x1b0));
    *(int *)(param_1 + 0x68) = (int)psVar13[4] + (int)psVar13[3];
    sVar2 = psVar13[1];
    sVar3 = *psVar13;
    *(undefined2 *)(param_1 + 0x80) = 1;
    *(int *)(param_1 + 0x6c) = (int)sVar2 - (int)sVar3;
    *(undefined1 *)(param_1 + 0x82) = 1;
    iVar8 = 1 << ((byte)*(undefined4 *)(lVar4 + 0x1d0) & 3);
    if (iVar8 == 1) {
      uVar6 = *(int *)(param_1 + 0x6c) + 7U >> 3;
    }
    else if (iVar8 == 2) {
      uVar6 = *(int *)(param_1 + 0x6c) + 0xfU >> 3 & 0x1ffffffe;
    }
    else if (iVar8 == 4) {
      uVar6 = *(int *)(param_1 + 0x6c) + 0x1fU >> 3 & 0x1ffffffc;
    }
    else {
      if (iVar8 != 8) {
        return 3;
      }
      uVar6 = *(int *)(param_1 + 0x6c) + 0x3fU >> 3 & 0x1ffffff8;
    }
    *(uint *)(param_1 + 0x70) = uVar6;
    *(undefined4 *)(param_1 + 0x60) = 0x62697473;
    *(int *)(param_1 + 0x90) = (int)*psVar13;
    *(int *)(param_1 + 0x94) = (int)psVar13[3];
    *(int *)(param_1 + 0x40) = (int)psVar13[2] << 6;
    *(int *)(param_1 + 0x38) = (int)*psVar13 << 6;
    *(int *)(param_1 + 0x3c) = (int)psVar13[3] << 6;
    *(int *)(param_1 + 0x30) = ((int)psVar13[1] - (int)*psVar13) * 0x40;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x68) << 6;
    FUN_144b58340((int *)(param_1 + 0x30),(*(int *)(lVar4 + 0x154) + *(int *)(lVar4 + 0x150)) * 0x40
                 );
    if ((param_4 >> 0x16 & 1) == 0) {
      uVar6 = *(int *)(param_1 + 0x68) * *(int *)(param_1 + 0x70);
      iVar10 = FUN_144b58670(param_1,uVar6);
      if (((iVar10 == 0) &&
          (iVar10 = FUN_144b597a0(uVar5,*(undefined4 *)(psVar13 + 6)), iVar10 == 0)) &&
         (iVar10 = FUN_144b59880(uVar5,*(undefined8 *)(param_1 + 0x78),uVar6), iVar10 == 0)) {
        if ((*(byte *)(lVar4 + 0x1d0) & 8) == 0) {
          uVar12 = (ulonglong)uVar6;
          pbVar11 = *(byte **)(param_1 + 0x78);
          if (uVar6 != 0) {
            do {
              uVar9 = *pbVar11 >> 1 & 0x55 | (*pbVar11 & 0x55) * 2;
              uVar9 = uVar9 >> 2 & 0x33 | (uVar9 & 0x33) << 2;
              *pbVar11 = (byte)(uVar9 >> 4) | (char)uVar9 << 4;
              uVar12 = uVar12 - 1;
              pbVar11 = pbVar11 + 1;
            } while (uVar12 != 0);
          }
        }
        uVar9 = *(uint *)(lVar4 + 0x1d0);
        if (((uVar9 >> 1 ^ uVar9) & 4) != 0) {
          iVar8 = 1 << ((byte)(uVar9 >> 4) & 3);
          if (iVar8 == 2) {
            puVar7 = *(undefined1 **)(param_1 + 0x78);
            if (1 < uVar6) {
              uVar12 = (ulonglong)(uVar6 >> 1);
              do {
                uVar1 = *puVar7;
                *puVar7 = puVar7[1];
                puVar7[1] = uVar1;
                puVar7 = puVar7 + 2;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
          }
          else if ((iVar8 == 4) && (puVar7 = *(undefined1 **)(param_1 + 0x78), 3 < uVar6)) {
            uVar12 = (ulonglong)(uVar6 >> 2);
            do {
              uVar1 = *puVar7;
              *puVar7 = puVar7[3];
              puVar7[3] = uVar1;
              uVar1 = puVar7[1];
              puVar7[1] = puVar7[2];
              puVar7[2] = uVar1;
              puVar7 = puVar7 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
        }
      }
    }
  }
  else {
    iVar10 = 6;
  }
  return iVar10;
}



// FUNCTION 144e06160 FUN_144e06160 body=78 status=ok
// SIG undefined FUN_144e06160(void)

undefined8 FUN_144e06160(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_144e06660();
  if (lVar1 == 0) {
    return 6;
  }
  if (*(char *)(lVar1 + 8) != '\0') {
    *param_3 = 1;
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(lVar1 + 0x10);
    return 0;
  }
  *param_3 = 2;
  param_3[2] = *(undefined4 *)(lVar1 + 0x10);
  return 0;
}



// FUNCTION 144e06220 FUN_144e06220 body=1074 status=ok
// SIG undefined FUN_144e06220(void)

undefined8 FUN_144e06220(undefined8 param_1,undefined8 *param_2,int param_3)

{
  bool bVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  short *psVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint uVar11;
  short sVar13;
  int iVar14;
  ulonglong uVar15;
  uint local_res10 [2];
  ulonglong uVar12;
  
  uVar10 = param_2[0x13];
  uVar6 = FUN_144e06710();
  local_res10[0] = (uint)uVar6;
  if (local_res10[0] != 0) {
    return 3;
  }
  uVar15 = 0;
  *param_2 = 1;
  if (param_3 < 0) {
    return uVar6;
  }
  local_res10[0] = FUN_144e06a10(param_1,param_2);
  if (local_res10[0] != 0) {
    return 3;
  }
  if (*(uint *)((longlong)param_2 + 0x13c) != 0) {
    uVar12 = uVar15;
    do {
      if (*(int *)(param_2[0x28] + uVar12 * 0x10) == 0x100) {
        bVar1 = true;
        local_res10[0] = 0;
        goto LAB_144e062c9;
      }
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
    } while (uVar11 < *(uint *)((longlong)param_2 + 0x13c));
  }
  bVar1 = false;
  local_res10[0] = FUN_144e07560(param_1,param_2,2);
  if (local_res10[0] != 0) {
    return 3;
  }
LAB_144e062c9:
  local_res10[0] = FUN_144e06db0(param_1,param_2);
  if (local_res10[0] != 0) {
    return 3;
  }
  local_res10[0] = FUN_144e06ff0(param_1,param_2);
  if (local_res10[0] != 0) {
    return 3;
  }
  local_res10[0] = FUN_144e07240(param_1,param_2);
  if (local_res10[0] != 0) {
    return 3;
  }
  uVar11 = 0;
  if ((bVar1) && (uVar11 = FUN_144e07560(param_1,param_2,0x100), uVar11 != 0)) {
    return 3;
  }
  local_res10[0] = uVar11;
  *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) | 0x12;
  if (*(char *)((longlong)param_2 + 0x14b) != '\0') {
    *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) | 4;
  }
  local_res10[0] = FUN_144e07720(param_2);
  if (local_res10[0] != 0) {
    return 3;
  }
  lVar7 = FUN_144e06660(param_2,"FAMILY_NAME");
  if ((lVar7 == 0) || (*(char *)(lVar7 + 8) == '\0')) {
    param_2[3] = 0;
  }
  else {
    uVar6 = FUN_144b56360(uVar10,*(undefined8 *)(lVar7 + 0x10),local_res10);
    param_2[3] = uVar6;
    if (local_res10[0] != 0) {
      return 3;
    }
  }
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_2 + 0x35);
  *(undefined4 *)(param_2 + 5) = 1;
  psVar8 = (short *)FUN_144b561b0(uVar10,0x10,0,1,0,local_res10);
  param_2[6] = psVar8;
  if (local_res10[0] != 0) {
    return 3;
  }
  psVar8[0] = 0;
  psVar8[1] = 0;
  psVar8[2] = 0;
  psVar8[3] = 0;
  sVar3 = 0;
  psVar8[4] = 0;
  psVar8[5] = 0;
  psVar8[6] = 0;
  psVar8[7] = 0;
  iVar14 = *(int *)(param_2 + 0x2a) + *(int *)((longlong)param_2 + 0x154);
  if (iVar14 < 0) {
    iVar14 = -iVar14;
  }
  if (iVar14 < 0x8000) {
    sVar13 = *(short *)(param_2 + 0x2a) + *(short *)((longlong)param_2 + 0x154);
    if (sVar13 < 0) {
      sVar13 = -sVar13;
    }
    *psVar8 = sVar13;
  }
  else {
    *psVar8 = 0x7fff;
  }
  lVar7 = FUN_144e06660(param_2,"AVERAGE_WIDTH");
  if (lVar7 == 0) {
    sVar13 = FUN_144b55580((int)*psVar8,2,3);
  }
  else {
    iVar14 = *(int *)(lVar7 + 0x10);
    iVar4 = iVar14;
    if (iVar14 < 0) {
      iVar4 = -iVar14;
    }
    if (0x4fff1 < iVar4) {
      psVar8[1] = 0x7fff;
      goto LAB_144e0648d;
    }
    iVar14 = iVar14 + 5;
    sVar13 = ((short)(iVar14 / 10) + (short)(iVar14 >> 0x1f)) -
             (short)((longlong)iVar14 * 0x66666667 >> 0x3f);
    if (sVar13 < 0) {
      sVar13 = -sVar13;
    }
  }
  psVar8[1] = sVar13;
LAB_144e0648d:
  lVar7 = FUN_144e06660(param_2,"POINT_SIZE");
  if (lVar7 != 0) {
    iVar14 = *(int *)(lVar7 + 0x10);
    iVar4 = iVar14;
    if (iVar14 < 0) {
      iVar4 = -iVar14;
    }
    if (iVar4 < 0x504c3) {
      if (iVar14 < 0) {
        iVar14 = -iVar14;
      }
      uVar5 = FUN_144b55580(iVar14,0x70800,0x11a4e);
      *(undefined4 *)(psVar8 + 2) = uVar5;
    }
    else {
      psVar8[2] = 0x7fff;
      psVar8[3] = 0;
    }
  }
  lVar7 = FUN_144e06660(param_2,"PIXEL_SIZE");
  if (lVar7 != 0) {
    iVar14 = *(int *)(lVar7 + 0x10);
    if (iVar14 < 0) {
      iVar14 = -iVar14;
    }
    if (iVar14 < 0x8000) {
      iVar14 = (int)*(short *)(lVar7 + 0x10);
      if (*(short *)(lVar7 + 0x10) < 0) {
        iVar14 = -iVar14;
      }
      *(int *)(psVar8 + 6) = iVar14 << 6;
    }
    else {
      psVar8[6] = -0x40;
      psVar8[7] = 0x1f;
    }
  }
  lVar7 = FUN_144e06660(param_2,"RESOLUTION_X");
  if (lVar7 != 0) {
    iVar14 = *(int *)(lVar7 + 0x10);
    if (iVar14 < 0) {
      iVar14 = -iVar14;
    }
    if (iVar14 < 0x8000) {
      uVar2 = *(ushort *)(lVar7 + 0x10);
      if ((short)uVar2 < 0) {
        uVar2 = -uVar2;
      }
      uVar15 = (ulonglong)uVar2;
    }
    else {
      uVar15 = 0x7fff;
    }
  }
  lVar7 = FUN_144e06660(param_2,"RESOLUTION_Y");
  if (lVar7 != 0) {
    iVar14 = *(int *)(lVar7 + 0x10);
    if (iVar14 < 0) {
      iVar14 = -iVar14;
    }
    if (iVar14 < 0x8000) {
      sVar3 = *(short *)(lVar7 + 0x10);
      if (sVar3 < 0) {
        sVar3 = -sVar3;
      }
    }
    else {
      sVar3 = 0x7fff;
    }
  }
  if (*(int *)(psVar8 + 6) == 0) {
    *(undefined4 *)(psVar8 + 6) = *(undefined4 *)(psVar8 + 2);
    if (sVar3 != 0) {
      uVar5 = FUN_144b55580(*(undefined4 *)(psVar8 + 2),(int)sVar3,0x48);
      *(undefined4 *)(psVar8 + 6) = uVar5;
    }
  }
  if (((short)uVar15 == 0) || (sVar3 == 0)) {
    uVar5 = *(undefined4 *)(psVar8 + 6);
  }
  else {
    uVar5 = FUN_144b55580(*(undefined4 *)(psVar8 + 6),(int)(short)uVar15,(int)sVar3);
  }
  *(undefined4 *)(psVar8 + 4) = uVar5;
  lVar7 = FUN_144e06660(param_2,"CHARSET_REGISTRY");
  lVar9 = FUN_144e06660(param_2,"CHARSET_ENCODING");
  if ((((lVar7 != 0) && (*(char *)(lVar7 + 8) != '\0')) && (lVar9 != 0)) &&
     (*(char *)(lVar9 + 8) != '\0')) {
    uVar6 = FUN_144b56360(uVar10,*(undefined8 *)(lVar9 + 0x10),local_res10);
    param_2[0x25] = uVar6;
    if (local_res10[0] != 0) {
      return 3;
    }
    uVar10 = FUN_144b56360(uVar10,*(undefined8 *)(lVar7 + 0x10),local_res10);
    param_2[0x26] = uVar10;
  }
  if (local_res10[0] != 0) {
    return 3;
  }
  return 0;
}



// FUNCTION 144e06660 FUN_144e06660 body=171 status=ok
// SIG undefined FUN_144e06660(void)

undefined8 * FUN_144e06660(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bVar9;
  
  uVar4 = 0;
  bVar9 = false;
  puVar6 = *(undefined8 **)(param_1 + 0x1a0);
  uVar8 = uVar4;
  if (0 < (longlong)*(int *)(param_1 + 0x19c)) {
    do {
      uVar7 = (uint)uVar8;
      if (bVar9) goto LAB_144e066e1;
      pcVar3 = (char *)*puVar6;
      lVar5 = param_2 - (longlong)pcVar3;
      do {
        cVar1 = *pcVar3;
        cVar2 = pcVar3[lVar5];
        if (cVar1 != cVar2) break;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      bVar9 = cVar1 == cVar2;
      uVar7 = uVar7 + 1;
      uVar4 = uVar4 + 1;
      puVar6 = puVar6 + 3;
      uVar8 = (ulonglong)uVar7;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x19c));
    if (bVar9) {
LAB_144e066e1:
      return *(undefined8 **)(param_1 + 0x1a0) + (longlong)(int)uVar7 * 3 + -3;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144e06710 FUN_144e06710 body=599 status=ok
// SIG undefined FUN_144e06710(void)

int FUN_144e06710(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  uint uVar13;
  int local_res10 [2];
  
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  local_res10[0] = FUN_144b597a0(param_1,0);
  if ((local_res10[0] != 0) ||
     (local_res10[0] = FUN_144b5a030(param_1,&DAT_149a0d510), local_res10[0] != 0)) {
    return 1;
  }
  if ((*(int *)(param_2 + 0x138) != 0x70636601) ||
     ((uVar13 = *(uint *)(param_2 + 0x13c), uVar13 == 0 || (*(uint *)(param_1 + 8) < 0x10)))) {
    return 3;
  }
  uVar8 = *(uint *)(param_1 + 8) >> 4;
  if ((uVar8 < uVar13) || (9 < uVar13)) {
    uVar13 = 9;
    if (uVar8 < 9) {
      uVar13 = uVar8;
    }
    *(uint *)(param_2 + 0x13c) = uVar13;
  }
  uVar7 = FUN_144b561b0(uVar1,0x10,0,*(undefined4 *)(param_2 + 0x13c),0,local_res10);
  *(undefined8 *)(param_2 + 0x140) = uVar7;
  if (local_res10[0] == 0) {
    uVar13 = 0;
    if (*(int *)(param_2 + 0x13c) != 0) {
      do {
        local_res10[0] = FUN_144b5a030(param_1,&DAT_149a0d520);
        if (local_res10[0] != 0) goto LAB_144e068f0;
        uVar13 = uVar13 + 1;
        local_res10[0] = 0;
      } while (uVar13 < *(uint *)(param_2 + 0x13c));
    }
    lVar11 = *(longlong *)(param_2 + 0x140);
    uVar13 = 0;
    if (*(int *)(param_2 + 0x13c) != 1) {
      while( true ) {
        bVar6 = false;
        uVar9 = 0;
        if (*(int *)(param_2 + 0x13c) - uVar13 == 1) break;
        do {
          uVar8 = (int)uVar9 + 1;
          puVar10 = (undefined8 *)(uVar9 * 0x10 + lVar11);
          puVar12 = (undefined8 *)((ulonglong)uVar8 * 0x10 + lVar11);
          if (*(uint *)((longlong)puVar12 + 0xc) < *(uint *)((longlong)puVar10 + 0xc)) {
            uVar7 = puVar10[1];
            bVar6 = true;
            uVar2 = *(undefined4 *)puVar12;
            uVar3 = *(undefined4 *)((longlong)puVar12 + 4);
            uVar4 = *(undefined4 *)(puVar12 + 1);
            uVar5 = *(undefined4 *)((longlong)puVar12 + 0xc);
            *puVar12 = *puVar10;
            puVar12[1] = uVar7;
            *(undefined4 *)puVar10 = uVar2;
            *(undefined4 *)((longlong)puVar10 + 4) = uVar3;
            *(undefined4 *)(puVar10 + 1) = uVar4;
            *(undefined4 *)((longlong)puVar10 + 0xc) = uVar5;
          }
          if ((*(uint *)((longlong)puVar12 + 0xc) < *(uint *)(puVar10 + 1)) ||
             (*(uint *)((longlong)puVar12 + 0xc) - *(uint *)(puVar10 + 1) <
              *(uint *)((longlong)puVar10 + 0xc))) {
            local_res10[0] = 9;
            goto LAB_144e068f0;
          }
          uVar9 = (ulonglong)uVar8;
        } while (uVar8 < (*(int *)(param_2 + 0x13c) - uVar13) - 1);
        if ((!bVar6) || (uVar13 = uVar13 + 1, *(int *)(param_2 + 0x13c) - 1U <= uVar13)) break;
      }
    }
    uVar8 = 0;
    lVar11 = *(longlong *)(param_2 + 0x140);
    uVar13 = *(uint *)(param_1 + 8);
    if (*(int *)(param_2 + 0x13c) != 1) {
      do {
        if ((uVar13 < *(uint *)(lVar11 + 8)) ||
           (uVar13 - *(uint *)(lVar11 + 8) < *(uint *)(lVar11 + 0xc))) goto LAB_144e068e8;
        lVar11 = lVar11 + 0x10;
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(int *)(param_2 + 0x13c) - 1U);
    }
    if (uVar13 < *(uint *)(lVar11 + 0xc)) {
LAB_144e068e8:
      local_res10[0] = 8;
LAB_144e068f0:
      FUN_144b56350(uVar1,*(undefined8 *)(param_2 + 0x140));
      *(undefined8 *)(param_2 + 0x140) = 0;
    }
    else {
      uVar13 = uVar13 - *(uint *)(lVar11 + 0xc);
      if (uVar13 < *(uint *)(lVar11 + 8)) {
        *(uint *)(lVar11 + 8) = uVar13;
      }
      local_res10[0] = 0;
    }
  }
  return local_res10[0];
}



// FUNCTION 144e06970 FUN_144e06970 body=152 status=ok
// SIG undefined FUN_144e06970(void)

ulonglong FUN_144e06970(undefined8 param_1,ulonglong param_2,short *param_3)

{
  ulonglong uVar1;
  undefined *puVar2;
  byte local_res20;
  byte local_res21;
  byte local_res22;
  byte local_res23;
  byte local_res24;
  
  if ((param_2 & 0xffffff00) == 0) {
    puVar2 = &DAT_149a0d538;
    if ((param_2 & 4) != 0) {
      puVar2 = &DAT_149a0d558;
    }
    uVar1 = FUN_144b5a030(param_1,puVar2);
    return uVar1;
  }
  uVar1 = FUN_144b5a030(param_1,&DAT_149a0d578,&local_res20);
  if ((int)uVar1 == 0) {
    *param_3 = local_res20 - 0x80;
    param_3[1] = local_res21 - 0x80;
    param_3[2] = local_res22 - 0x80;
    param_3[3] = local_res23 - 0x80;
    param_3[4] = local_res24 - 0x80;
    param_3[5] = 0;
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 144e06a10 FUN_144e06a10 body=923 status=ok
// SIG undefined FUN_144e06a10(void)

int FUN_144e06a10(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar8;
  undefined8 uVar9;
  int *piVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  int local_res18 [2];
  longlong local_res20;
  longlong local_40;
  ulonglong uVar7;
  
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  uVar7 = 0;
  piVar2 = *(int **)(param_2 + 0x140);
  local_res20 = 0;
  local_res18[0] = 3;
  local_40 = 0;
  piVar10 = piVar2;
  if (*(uint *)(param_2 + 0x13c) != 0) {
    do {
      if (*piVar10 == 1) {
        if ((*(uint *)(param_1 + 0xc) <= (uint)piVar2[uVar7 * 4 + 3]) &&
           (iVar6 = FUN_144b597f0(param_1,piVar2[uVar7 * 4 + 3] - *(uint *)(param_1 + 0xc)),
           iVar6 == 0)) {
          uVar3 = piVar2[uVar7 * 4 + 2];
          local_res18[0] = 0;
          goto LAB_144e06ab2;
        }
        local_res18[0] = 0x53;
        break;
      }
      uVar3 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar3;
      piVar10 = piVar10 + 4;
    } while (uVar3 < *(uint *)(param_2 + 0x13c));
  }
  uVar3 = 0;
  if (local_res18[0] == 0) {
LAB_144e06ab2:
    uVar4 = FUN_144b59f90(param_1,local_res18);
    if ((local_res18[0] == 0) && ((uVar4 & 0xffffff00) == 0)) {
      uVar4 = uVar4 & 4;
      if (uVar4 == 0) {
        uVar5 = FUN_144b59f90(param_1,local_res18);
      }
      else {
        uVar5 = FUN_144b59e60();
      }
      if (local_res18[0] == 0) {
        if (uVar3 / 9 < uVar5) {
          local_res18[0] = 8;
        }
        else {
          uVar14 = uVar5;
          if (0x100 < uVar5) {
            uVar14 = 0x100;
          }
          *(uint *)(param_2 + 0x19c) = uVar14;
          lVar8 = FUN_144b561b0(uVar1,0xc,0,uVar14,0,local_res18);
          local_res20 = lVar8;
          if (local_res18[0] == 0) {
            uVar7 = 0;
            if (uVar14 != 0) {
              do {
                if (uVar4 == 0) {
                  local_res18[0] = FUN_144b5a030(param_1,&DAT_149a0d598,local_res20 + uVar7 * 0xc);
                  lVar8 = local_res20;
                }
                else {
                  local_res18[0] = FUN_144b5a030(param_1,&DAT_149a0d5b0,lVar8 + uVar7 * 0xc);
                }
                if (local_res18[0] != 0) goto LAB_144e06d78;
                local_res18[0] = 0;
                uVar11 = (int)uVar7 + 1;
                uVar7 = (ulonglong)uVar11;
              } while (uVar11 < uVar14);
            }
            local_res18[0] = FUN_144b597f0(param_1,(uVar5 - uVar14) * 9);
            if (local_res18[0] == 0) {
              iVar6 = 0;
              if (((uVar5 & 3) == 0) || (iVar6 = FUN_144b597f0(param_1,4 - (uVar5 & 3)), iVar6 == 0)
                 ) {
                local_res18[0] = iVar6;
                if (uVar4 == 0) {
                  uVar4 = FUN_144b59f90(param_1,local_res18);
                }
                else {
                  uVar4 = FUN_144b59e60();
                }
                if (local_res18[0] == 0) {
                  if (uVar3 + uVar5 * -9 < uVar4) {
                    local_res18[0] = 8;
                  }
                  else {
                    if (0x1000100 < uVar4) {
                      uVar4 = 0x1000100;
                    }
                    uVar3 = 0;
                    local_40 = FUN_144b561b0(uVar1,1,0,uVar4 + 1,0,local_res18);
                    if (((local_res18[0] == 0) &&
                        (local_res18[0] = FUN_144b59880(param_1,local_40,uVar4), local_res18[0] == 0
                        )) && (lVar8 = FUN_144b561b0(uVar1,0x18,0,uVar14,0,local_res18),
                              local_res18[0] == 0)) {
                      *(longlong *)(param_2 + 0x1a0) = lVar8;
                      if (uVar14 != 0) {
                        puVar13 = (uint *)(lVar8 + 0x10);
                        puVar12 = (uint *)(local_res20 + 8);
                        do {
                          uVar5 = puVar12[-2];
                          if (((int)uVar5 < 0) || (uVar4 < uVar5)) {
LAB_144e06da2:
                            local_res18[0] = 9;
                            goto LAB_144e06d78;
                          }
                          uVar9 = FUN_144b56360(uVar1,(int)uVar5 + local_40,local_res18);
                          *(undefined8 *)(puVar13 + -4) = uVar9;
                          if (local_res18[0] != 0) goto LAB_144e06d78;
                          *(char *)(puVar13 + -2) = (char)puVar12[-1];
                          if ((char)puVar12[-1] == '\0') {
                            *puVar13 = *puVar12;
                          }
                          else {
                            uVar5 = *puVar12;
                            if (((int)uVar5 < 0) || (uVar4 < uVar5)) goto LAB_144e06da2;
                            uVar9 = FUN_144b56360(uVar1,(int)uVar5 + local_40,local_res18);
                            *(undefined8 *)puVar13 = uVar9;
                            if (local_res18[0] != 0) goto LAB_144e06d78;
                          }
                          uVar3 = uVar3 + 1;
                          puVar12 = puVar12 + 3;
                          puVar13 = puVar13 + 6;
                        } while (uVar3 < uVar14);
                      }
                      local_res18[0] = 0;
                    }
                  }
                }
                goto LAB_144e06d78;
              }
            }
            local_res18[0] = 0x53;
          }
        }
      }
    }
  }
LAB_144e06d78:
  FUN_144b56350(uVar1,local_res20);
  FUN_144b56350(uVar1,local_40);
  return local_res18[0];
}



// FUNCTION 144e06db0 FUN_144e06db0 body=567 status=ok
// SIG undefined FUN_144e06db0(void)

int FUN_144e06db0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int *piVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  short *psVar8;
  uint uVar9;
  uint uVar10;
  int *piVar12;
  int local_res10 [2];
  ulonglong uVar11;
  
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  uVar11 = 0;
  piVar2 = *(int **)(param_2 + 0x140);
  local_res10[0] = 3;
  uVar10 = 0;
  uVar7 = uVar11;
  piVar12 = piVar2;
  if (*(uint *)(param_2 + 0x13c) != 0) {
    do {
      if (*piVar12 == 4) {
        if ((*(uint *)(param_1 + 0xc) <= (uint)piVar2[uVar7 * 4 + 3]) &&
           (iVar5 = FUN_144b597f0(param_1,piVar2[uVar7 * 4 + 3] - *(uint *)(param_1 + 0xc)),
           iVar5 == 0)) {
          uVar10 = piVar2[uVar7 * 4 + 2];
          local_res10[0] = 0;
          goto LAB_144e06e2d;
        }
        local_res10[0] = 0x53;
        break;
      }
      uVar4 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar4;
      piVar12 = piVar12 + 4;
    } while (uVar4 < *(uint *)(param_2 + 0x13c));
  }
  if (local_res10[0] != 0) {
    return local_res10[0];
  }
LAB_144e06e2d:
  uVar4 = FUN_144b59f90(param_1,local_res10);
  if (local_res10[0] != 0) {
    return local_res10[0];
  }
  uVar9 = uVar4 & 0xffffff00;
  if (uVar9 == 0) {
    if ((uVar4 & 4) == 0) {
      uVar6 = FUN_144b59f90(param_1,local_res10);
    }
    else {
      uVar6 = FUN_144b59e60();
    }
  }
  else {
    if (uVar9 != 0x100) {
      return 3;
    }
    if ((uVar4 & 4) == 0) {
      uVar3 = FUN_144b59f00(param_1,local_res10);
      uVar6 = (uint)uVar3;
    }
    else {
      uVar3 = FUN_144b59d40();
      uVar6 = (uint)uVar3;
    }
  }
  if (local_res10[0] != 0) {
    return 3;
  }
  if (uVar9 == 0) {
    uVar10 = uVar10 / 0xc;
  }
  else {
    uVar10 = uVar10 / 5;
  }
  if ((uVar10 < uVar6) || (uVar6 == 0)) {
    return 8;
  }
  if (0x10000 < uVar6) {
    uVar6 = 0x10000;
  }
  *(uint *)(param_2 + 0x1a8) = uVar6;
  psVar8 = (short *)FUN_144b561b0(uVar1,0x10,0,uVar6,0,local_res10);
  *(short **)(param_2 + 0x1b0) = psVar8;
  if (local_res10[0] == 0) {
    if (uVar6 == 0) {
      return 0;
    }
    do {
      local_res10[0] = FUN_144e06970(param_1,uVar4,psVar8);
      psVar8[6] = 0;
      psVar8[7] = 0;
      if (local_res10[0] != 0) {
        FUN_144b56350(uVar1,*(undefined8 *)(param_2 + 0x1b0));
        *(undefined8 *)(param_2 + 0x1b0) = 0;
        return local_res10[0];
      }
      if ((psVar8[1] < *psVar8) || ((int)psVar8[3] < -(int)psVar8[4])) {
        psVar8[1] = 0;
        psVar8[2] = 0;
        psVar8[3] = 0;
        psVar8[4] = 0;
        *psVar8 = 0;
      }
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
      psVar8 = psVar8 + 8;
      local_res10[0] = 0;
    } while (uVar10 < uVar6);
    return 0;
  }
  return local_res10[0];
}



// FUNCTION 144e06ff0 FUN_144e06ff0 body=579 status=ok
// SIG undefined FUN_144e06ff0(void)

void FUN_144e06ff0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  int *local_80;
  int local_78 [2];
  uint *local_70;
  uint local_68;
  undefined8 local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  uVar8 = 0;
  piVar2 = *(int **)(param_2 + 0x140);
  local_78[0] = 3;
  uVar7 = 0;
  piVar5 = piVar2;
  uVar11 = uVar8;
  local_60 = uVar1;
  if (*(uint *)(param_2 + 0x13c) != 0) {
    do {
      if (*piVar5 == 8) {
        if ((*(uint *)(param_1 + 0xc) <= (uint)piVar2[uVar11 * 4 + 3]) &&
           (iVar3 = FUN_144b597f0(param_1,piVar2[uVar11 * 4 + 3] - *(uint *)(param_1 + 0xc)),
           iVar3 == 0)) {
          uVar7 = piVar2[uVar11 * 4 + 2];
          local_78[0] = 0;
          goto LAB_144e0707f;
        }
        local_78[0] = 0x53;
        break;
      }
      uVar10 = (int)uVar11 + 1;
      piVar5 = piVar5 + 4;
      uVar11 = (ulonglong)uVar10;
    } while (uVar10 < *(uint *)(param_2 + 0x13c));
  }
  if (local_78[0] != 0) goto LAB_144e07226;
LAB_144e0707f:
  local_78[0] = FUN_144b59990(param_1,8);
  if (local_78[0] != 0) goto LAB_144e07226;
  uVar10 = FUN_144b59c70(param_1);
  uVar12 = uVar10 & 4;
  local_68 = uVar10;
  if (uVar12 == 0) {
    uVar4 = FUN_144b59c70(param_1);
  }
  else {
    uVar4 = FUN_144b59be0();
  }
  FUN_144b59ab0(param_1);
  if ((uVar10 & 0xffffff00) != 0) goto LAB_144e07226;
  if (0x10000 < uVar4) {
    uVar4 = 0x10000;
  }
  if (uVar4 != *(uint *)(param_2 + 0x1a8)) goto LAB_144e07226;
  local_80 = local_78;
  local_88 = 0;
  puVar6 = (uint *)FUN_144b561b0(uVar1,4,0,uVar4);
  local_70 = puVar6;
  if (local_78[0] != 0) goto LAB_144e07226;
  uVar11 = uVar8;
  if (uVar4 == 0) {
LAB_144e07192:
    do {
      if (uVar12 == 0) {
        FUN_144b59f90(param_1,local_78);
      }
      else {
        FUN_144b59e60();
      }
      if (local_78[0] != 0) goto LAB_144e07208;
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
    } while (uVar10 < 4);
    if (uVar4 != 0) {
      uVar11 = (ulonglong)uVar4;
      puVar6 = local_70;
      do {
        if (*puVar6 <= uVar7) {
          *(uint *)(*(longlong *)(param_2 + 0x1b0) + 0xc + uVar8) =
               *(int *)(param_1 + 0xc) + *puVar6;
        }
        puVar6 = puVar6 + 1;
        uVar8 = uVar8 + 0x10;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    *(uint *)(param_2 + 0x1d0) = local_68;
  }
  else {
    uVar9 = (ulonglong)uVar4;
    do {
      if (uVar12 == 0) {
        uVar10 = FUN_144b59f90(param_1,local_78);
      }
      else {
        uVar10 = FUN_144b59e60();
      }
      *puVar6 = uVar10;
      puVar6 = puVar6 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    if (local_78[0] == 0) goto LAB_144e07192;
  }
LAB_144e07208:
  FUN_144b56350(local_60,local_70);
LAB_144e07226:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
}



// FUNCTION 144e07240 FUN_144e07240 body=789 status=ok
// SIG undefined FUN_144e07240(void)

ulonglong FUN_144e07240(longlong param_1,longlong param_2)

{
  ushort *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ushort uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  uint uVar15;
  ushort uVar16;
  undefined *puVar17;
  int iVar18;
  ushort *puVar19;
  ushort uVar20;
  int *piVar21;
  ushort uVar22;
  uint local_res10 [2];
  
  puVar1 = (ushort *)(param_2 + 0x1b8);
  uVar5 = *(undefined8 *)(param_2 + 0x98);
  uVar15 = 0;
  uVar12 = 3;
  piVar21 = *(int **)(param_2 + 0x140);
  if (*(uint *)(param_2 + 0x13c) != 0) {
    do {
      if (*piVar21 == 0x20) {
        uVar15 = (*(int **)(param_2 + 0x140))[(ulonglong)uVar15 * 4 + 3];
        if ((*(uint *)(param_1 + 0xc) <= uVar15) &&
           (iVar18 = FUN_144b597f0(param_1,uVar15 - *(uint *)(param_1 + 0xc)), iVar18 == 0)) {
          local_res10[0] = 0;
          goto LAB_144e072d2;
        }
        uVar12 = 0x53;
        break;
      }
      uVar15 = uVar15 + 1;
      piVar21 = piVar21 + 4;
    } while (uVar15 < *(uint *)(param_2 + 0x13c));
  }
  local_res10[0] = (uint)uVar12;
  if (local_res10[0] == 0) {
LAB_144e072d2:
    uVar15 = FUN_144b59f90(param_1,local_res10);
    uVar12 = (ulonglong)local_res10[0];
    if (local_res10[0] == 0) {
      if ((uVar15 & 0xffffff00) == 0) {
        puVar17 = &DAT_149a0d3d0;
        uVar15 = uVar15 & 4;
        if (uVar15 == 0) {
          puVar17 = &DAT_149a0d3b0;
        }
        uVar12 = FUN_144b5a030(param_1,puVar17,puVar1);
        local_res10[0] = (uint)uVar12;
        if (local_res10[0] == 0) {
          uVar22 = *(ushort *)(param_2 + 0x1ba);
          if ((*puVar1 <= uVar22) && (uVar22 < 0x100)) {
            uVar20 = *(ushort *)(param_2 + 0x1be);
            if ((*(ushort *)(param_2 + 0x1bc) <= uVar20) && (uVar20 < 0x100)) {
              iVar18 = (((uint)uVar20 - (uint)*(ushort *)(param_2 + 0x1bc)) + 1) *
                       (((uint)uVar22 - (uint)*puVar1) + 1);
              uVar13 = FUN_144b561b0(uVar5,2,0,iVar18,0,local_res10);
              *(undefined8 *)(param_2 + 0x1c8) = uVar13;
              if (local_res10[0] != 0) {
                return (ulonglong)local_res10[0];
              }
              local_res10[0] = FUN_144b59990(param_1,iVar18 * 2);
              if (local_res10[0] != 0) {
                FUN_144b56350(uVar5,*(undefined8 *)(param_2 + 0x1c8));
                *(undefined8 *)(param_2 + 0x1c8) = 0;
                return (ulonglong)local_res10[0];
              }
              uVar22 = *(ushort *)(param_2 + 0x1bc);
              uVar16 = *(ushort *)(param_2 + 0x1c0) >> 8;
              uVar20 = *(ushort *)(param_2 + 0x1c0) & 0xff;
              if ((((uVar16 < uVar22) || (*(ushort *)(param_2 + 0x1be) < uVar16)) ||
                  (uVar20 < *puVar1)) || (uVar11 = *puVar1, *(ushort *)(param_2 + 0x1ba) < uVar20))
              {
                uVar20 = *puVar1;
                *(ushort *)(param_2 + 0x1c0) = uVar22 * 0x100 + uVar20;
                uVar16 = uVar22;
                uVar11 = uVar20;
              }
              puVar14 = (undefined1 *)
                        ((longlong)
                         (int)(((((uint)uVar16 - (uint)uVar22) *
                                 (((uint)*(ushort *)(param_2 + 0x1ba) - (uint)uVar11) + 1) -
                                (uint)uVar11) + (uint)uVar20) * 2) + *(longlong *)(param_1 + 0x38));
              if (uVar15 == 0) {
                uVar3 = puVar14[1];
                uVar4 = *puVar14;
              }
              else {
                uVar3 = *puVar14;
                uVar4 = puVar14[1];
              }
              uVar22 = 0;
              if ((uint)CONCAT11(uVar3,uVar4) < *(uint *)(param_2 + 0x1a8)) {
                uVar22 = CONCAT11(uVar3,uVar4);
              }
              if (uVar22 != 0) {
                puVar6 = *(undefined4 **)(param_2 + 0x1b0);
                uVar8 = puVar6[1];
                uVar9 = puVar6[2];
                uVar10 = puVar6[3];
                uVar5 = *(undefined8 *)(puVar6 + (ulonglong)uVar22 * 4);
                uVar13 = *(undefined8 *)((longlong)(puVar6 + (ulonglong)uVar22 * 4) + 8);
                puVar2 = puVar6 + (ulonglong)uVar22 * 4;
                *puVar2 = *puVar6;
                puVar2[1] = uVar8;
                puVar2[2] = uVar9;
                puVar2[3] = uVar10;
                puVar7 = *(undefined8 **)(param_2 + 0x1b0);
                *puVar7 = uVar5;
                puVar7[1] = uVar13;
              }
              uVar20 = *(ushort *)(param_2 + 0x1bc);
              puVar19 = *(ushort **)(param_2 + 0x1c8);
              local_res10[0] = 0;
              if (uVar20 <= *(ushort *)(param_2 + 0x1be)) {
                do {
                  uVar16 = *puVar1;
                  if (uVar16 <= *(ushort *)(param_2 + 0x1ba)) {
                    do {
                      if (uVar15 == 0) {
                        uVar11 = FUN_144b59c30(param_1);
                      }
                      else {
                        uVar11 = FUN_144b59ba0();
                      }
                      if (uVar11 != 0xffff) {
                        if (uVar11 == uVar22) {
                          uVar11 = 0;
                        }
                        else if (uVar11 == 0) {
                          uVar11 = uVar22;
                        }
                      }
                      *puVar19 = uVar11;
                      uVar16 = uVar16 + 1;
                      puVar19 = puVar19 + 1;
                    } while (uVar16 <= *(ushort *)(param_2 + 0x1ba));
                  }
                  uVar20 = uVar20 + 1;
                } while (uVar20 <= *(ushort *)(param_2 + 0x1be));
              }
              FUN_144b59ab0(param_1);
              return (ulonglong)local_res10[0];
            }
          }
          uVar12 = 8;
        }
      }
      else {
        uVar12 = 3;
      }
    }
  }
  return uVar12;
}



// FUNCTION 144e07560 FUN_144e07560 body=439 status=ok
// SIG undefined FUN_144e07560(void)

void FUN_144e07560(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int local_res10 [2];
  
  uVar7 = 0;
  local_res10[0] = 3;
  piVar3 = *(int **)(param_2 + 0x140);
  if (*(uint *)(param_2 + 0x13c) != 0) {
    do {
      if (*piVar3 == param_3) {
        uVar6 = (*(int **)(param_2 + 0x140))[uVar7 * 4 + 3];
        if ((*(uint *)(param_1 + 0xc) <= uVar6) &&
           (iVar1 = FUN_144b597f0(param_1,uVar6 - *(uint *)(param_1 + 0xc)), iVar1 == 0)) {
          local_res10[0] = 0;
          goto LAB_144e075da;
        }
        local_res10[0] = 0x53;
        break;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      piVar3 = piVar3 + 4;
    } while (uVar6 < *(uint *)(param_2 + 0x13c));
  }
  if (local_res10[0] == 0) {
LAB_144e075da:
    uVar6 = FUN_144b59f90(param_1,local_res10);
    if ((local_res10[0] == 0) && ((uVar6 & 0xfffffe00) == 0)) {
      puVar4 = &DAT_149a0d478;
      if ((uVar6 & 4) == 0) {
        puVar4 = &DAT_149a0d440;
      }
      local_res10[0] = FUN_144b5a030(param_1,puVar4,param_2 + 0x148);
      if (local_res10[0] == 0) {
        iVar1 = *(int *)(param_2 + 0x150);
        iVar2 = iVar1;
        if (iVar1 < 0) {
          iVar2 = -iVar1;
        }
        if (0x7fff < iVar2) {
          *(uint *)(param_2 + 0x150) = (iVar1 >> 0x1f & 0xffff0002U) + 0x7fff;
        }
        iVar1 = *(int *)(param_2 + 0x154);
        iVar2 = iVar1;
        if (iVar1 < 0) {
          iVar2 = -iVar1;
        }
        if (0x7fff < iVar2) {
          *(uint *)(param_2 + 0x154) = (iVar1 >> 0x1f & 0xffff0002U) + 0x7fff;
        }
        uVar5 = uVar6 & 0xff;
        local_res10[0] = FUN_144e06970(param_1,uVar5,param_2 + 0x15c);
        if ((local_res10[0] == 0) &&
           (local_res10[0] = FUN_144e06970(param_1,uVar5,param_2 + 0x16c), local_res10[0] == 0)) {
          if ((uVar6 & 0xffffff00) == 0x100) {
            local_res10[0] = FUN_144e06970(param_1,uVar5,param_2 + 0x17c);
            if (local_res10[0] == 0) {
              FUN_144e06970(param_1,uVar5,param_2 + 0x18c);
            }
          }
          else {
            *(undefined8 *)(param_2 + 0x17c) = *(undefined8 *)(param_2 + 0x15c);
            *(undefined8 *)(param_2 + 0x184) = *(undefined8 *)(param_2 + 0x164);
            *(undefined8 *)(param_2 + 0x18c) = *(undefined8 *)(param_2 + 0x16c);
            *(undefined8 *)(param_2 + 0x194) = *(undefined8 *)(param_2 + 0x174);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 144e07720 FUN_144e07720 body=601 status=ok
// SIG undefined FUN_144e07720(void)

void FUN_144e07720(longlong param_1)

{
  char cVar1;
  char *pcVar2;
  size_t _Size;
  size_t sVar3;
  longlong lVar4;
  char *_Dst;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [32];
  int local_58 [2];
  char *local_50 [4];
  size_t local_30 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar7 = 0;
  local_58[0] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_50[0] = (char *)0x0;
  local_50[1] = (undefined1 *)0x0;
  local_50[2] = (char *)0x0;
  local_50[3] = (char *)0x0;
  lVar4 = FUN_144e06660(0,"SLANT");
  if ((((lVar4 != 0) && (*(char *)(lVar4 + 8) != '\0')) &&
      (bVar5 = **(char **)(lVar4 + 0x10) + 0xb7, bVar5 < 0x27)) &&
     ((0x4100000041U >> ((ulonglong)bVar5 & 0x3f) & 1) != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 1;
    local_50[2] = "Italic";
    if ((**(char **)(lVar4 + 0x10) + 0xb1U & 0xdf) == 0) {
      local_50[2] = "Oblique";
    }
  }
  lVar4 = FUN_144e06660(param_1,"WEIGHT_NAME",lVar4);
  if (((lVar4 != 0) && (*(char *)(lVar4 + 8) != '\0')) &&
     ((**(char **)(lVar4 + 0x10) + 0xbeU & 0xdf) == 0)) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
    local_50[1] = "Bold";
  }
  lVar4 = FUN_144e06660(param_1,"SETWIDTH_NAME");
  if ((lVar4 != 0) && (*(char *)(lVar4 + 8) != '\0')) {
    cVar1 = **(char **)(lVar4 + 0x10);
    if ((cVar1 != '\0') && ((cVar1 != 'N' && (cVar1 != 'n')))) {
      local_50[3] = *(char **)(lVar4 + 0x10);
    }
  }
  lVar4 = FUN_144e06660(param_1,"ADD_STYLE_NAME");
  uVar6 = uVar7;
  uVar8 = uVar7;
  if ((lVar4 != 0) && (*(char *)(lVar4 + 8) != '\0')) {
    cVar1 = **(char **)(lVar4 + 0x10);
    if ((cVar1 != '\0') && (cVar1 != 'N')) {
      if (cVar1 != 'n') {
        local_50[0] = *(char **)(lVar4 + 0x10);
      }
    }
  }
  do {
    *(undefined8 *)((longlong)local_30 + uVar6) = 0;
    if (*(longlong *)((longlong)local_50 + uVar6) != 0) {
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (*(char *)(*(longlong *)((longlong)local_50 + uVar6) + lVar4) != '\0');
      *(longlong *)((longlong)local_30 + uVar6) = lVar4;
      uVar8 = uVar8 + 1 + lVar4;
    }
    uVar6 = uVar6 + 8;
  } while (uVar6 < 0x20);
  if (uVar8 == 0) {
    local_30[0] = 7;
    local_50[0] = "Regular";
    uVar8 = 8;
  }
  _Dst = (char *)FUN_144b560d0(*(undefined8 *)(param_1 + 0x98),uVar8 & 0xffffffff,local_58);
  *(char **)(param_1 + 0x20) = _Dst;
  if (local_58[0] == 0) {
    do {
      pcVar2 = local_50[uVar7];
      _Size = local_30[uVar7];
      if (pcVar2 != (char *)0x0) {
        if (_Dst != *(char **)(param_1 + 0x20)) {
          *_Dst = ' ';
          _Dst = _Dst + 1;
        }
        memcpy(_Dst,pcVar2,_Size);
        sVar3 = _Size;
        pcVar2 = _Dst;
        if ((uVar7 == 0) || (uVar7 == 3)) {
          for (; sVar3 != 0; sVar3 = sVar3 - 1) {
            if (*pcVar2 == ' ') {
              *pcVar2 = '-';
            }
            pcVar2 = pcVar2 + 1;
          }
        }
        _Dst = _Dst + _Size;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 4);
    *_Dst = '\0';
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_78);
}



// FUNCTION 144e07990 FUN_144e07990 body=788 status=ok
// SIG undefined FUN_144e07990(void)

void FUN_144e07990(undefined8 *param_1,longlong param_2,uint param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  ushort uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined1 auStack_98 [32];
  int local_78;
  int local_74;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  ulonglong local_50;
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar1 = *(char *)((longlong)param_1 + 0x5c);
  local_78 = 0;
  if ((cVar1 == '\0') || (param_1[0x65] != 0)) {
    uVar7 = *param_1;
    puVar17 = *(undefined8 **)param_1[0x66];
    if (puVar17 == (undefined8 *)0x0) {
      ((undefined8 *)param_1[0x66])[1] = FUN_144e11660;
      uVar16 = FUN_144b560d0(uVar7,0x290,&local_78);
      *(undefined8 *)param_1[0x66] = uVar16;
      if (local_78 != 0) goto LAB_144e07c97;
      puVar17 = *(undefined8 **)param_1[0x66];
      *puVar17 = uVar7;
      if (cVar1 == '\0') {
        puVar17[0x51] = *(undefined8 *)(param_1[100] + 0x10e8);
      }
      puVar17[0x18] = 0;
      puVar17[0x1a] = 0;
      puVar17[0x1d] = 0;
      puVar17[0x1c] = puVar17 + 1;
      puVar17[0x16] = FUN_144e116b0;
      puVar17[0x17] = FUN_144e116d0;
      puVar17[0x19] = FUN_144e11770;
      puVar17[0x1b] = uVar7;
    }
    puVar17[0x1e] = param_1;
    puVar17[0x1d] = param_1;
    lVar8 = param_1[1];
    lVar9 = param_1[2];
    lVar10 = *(longlong *)(lVar8 + 0x90);
    cVar2 = *(char *)(lVar9 + 0xf8);
    cVar3 = *(char *)(*(longlong *)(lVar8 + 0xd0) + 0x58);
    cVar4 = *(char *)(lVar10 + 0x3c);
    local_70 = 0;
    local_60 = (ulonglong)param_3 + param_2;
    cVar5 = *(char *)(lVar9 + 0xf9);
    local_40 = 0;
    if (cVar2 == '\0') {
      uVar13 = 0x400;
      local_50 = 0x400;
      uVar14 = 0x400;
      uVar11 = 0x400;
    }
    else {
      iVar12 = *(int *)(lVar9 + 0xfc) + 0x20;
      uVar13 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fU)) >> 6;
      local_50 = (ulonglong)uVar13;
      iVar12 = *(int *)(lVar9 + 0x100) + 0x20;
      uVar14 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fU)) >> 6;
      uVar11 = (ulonglong)uVar14;
    }
    local_48 = uVar11 << 0x20;
    if (cVar1 == '\0') {
      *(undefined1 *)((longlong)puVar17 + 0xd) = *(undefined1 *)(lVar8 + 0x408);
    }
    else {
      *(undefined1 *)((longlong)puVar17 + 0xd) = 0;
    }
    *(undefined4 *)(puVar17 + 2) = 0;
    uVar15 = *(undefined4 *)(puVar17 + 2);
    if (cVar2 != '\0') {
      uVar15 = 1;
    }
    *(char *)((longlong)puVar17 + 0xc) = cVar1;
    *(undefined4 *)(puVar17 + 2) = uVar15;
    if ((cVar5 != '\0') && ((cVar3 == '\0' || ((cVar3 < '\0' && (cVar4 == '\0')))))) {
      *(uint *)(puVar17 + 2) = *(uint *)(puVar17 + 2) | 2;
    }
    *(undefined4 *)((longlong)puVar17 + 0x104) = *(undefined4 *)(lVar10 + 0x40);
    *(undefined4 *)(puVar17 + 0x21) = *(undefined4 *)(lVar10 + 0x44);
    *(undefined4 *)((longlong)puVar17 + 0x10c) = *(undefined4 *)(lVar10 + 0x48);
    *(undefined4 *)(puVar17 + 0x22) = *(undefined4 *)(lVar10 + 0x4c);
    *(undefined4 *)((longlong)puVar17 + 0x114) = *(undefined4 *)(lVar10 + 0x50);
    *(undefined4 *)(puVar17 + 0x23) = *(undefined4 *)(lVar10 + 0x54);
    *(undefined4 *)((longlong)puVar17 + 0x11c) = *(undefined4 *)(lVar10 + 0x58);
    *(undefined4 *)(puVar17 + 0x24) = *(undefined4 *)(lVar10 + 0x5c);
    uVar6 = *(ushort *)(param_1[1] + 0x68);
    *(uint *)(puVar17 + 0x14) = (uint)uVar6;
    local_68 = param_2;
    local_58 = param_2;
    if (((cVar5 == '\0') ||
        ((((0 < (int)uVar13 && (0 < (int)uVar14)) && (uVar6 < 0x8000)) &&
         ((iVar12 = FUN_144b555e0(0x7d00000,(ulonglong)uVar6 << 0x10), (int)uVar13 <= iVar12 &&
          ((int)uVar14 <= iVar12)))))) &&
       ((iVar12 = FUN_144e0df40(puVar17,&local_70,&local_50,&local_74), iVar12 == 0 &&
        (*(char *)(puVar17[0x1d] + 0x5c) == '\0')))) {
      **(int **)(puVar17[0x1d] + 0x338) = (int)(short)((uint)(local_74 + 0x8000) >> 0x10);
    }
  }
LAB_144e07c97:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_98);
}



// FUNCTION 144e07cb0 FUN_144e07cb0 body=234 status=ok
// SIG undefined FUN_144e07cb0(void)

void FUN_144e07cb0(void *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  lVar2 = *(longlong *)(param_2 + 1000);
  memset(param_1,0,0x448);
  FUN_144e09810(param_1,param_2,param_3,param_4,param_5);
  *(longlong *)((longlong)param_1 + 0xb0) = lVar2;
  uVar1 = *(uint *)(lVar2 + 0xa0);
  *(uint *)((longlong)param_1 + 0x3fc) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x410) = *(undefined8 *)(lVar2 + 0x5b8);
  if (*(int *)(lVar2 + 0x60c) == 1) {
    uVar3 = 0;
  }
  else if (uVar1 < 0x4d8) {
    uVar3 = 0x6b;
  }
  else {
    uVar3 = 0x8000;
    if (uVar1 < 0x846c) {
      uVar3 = 0x46b;
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x404) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x424) = param_6;
  *(undefined8 *)((longlong)param_1 + 0x438) = param_7;
  *(undefined8 *)((longlong)param_1 + 0x440) = param_8;
  return;
}



// FUNCTION 144e07da0 FUN_144e07da0 body=277 status=ok
// SIG undefined FUN_144e07da0(void)

undefined8 FUN_144e07da0(longlong param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 1000);
  lVar5 = lVar2 + 0x5e0;
  if (*(int *)(lVar2 + 0x8b0) != 0) {
    bVar3 = (**(code **)(*(longlong *)(lVar2 + 0x10e8) + 0x10))(lVar2 + 0x10b8,param_3);
    if (*(uint *)(lVar2 + 0x8b0) <= (uint)bVar3) {
      return 3;
    }
    lVar5 = *(longlong *)(lVar2 + 0x8b8 + (ulonglong)bVar3 * 8);
    if ((*(longlong *)(param_1 + 0x60) != 0) && (param_2 != 0)) {
      *(undefined8 *)(param_1 + 0x68) =
           *(undefined8 *)(**(longlong **)(param_2 + 0x38) + 8 + (ulonglong)bVar3 * 8);
    }
  }
  uVar1 = *(uint *)(lVar5 + 0x2a0);
  *(uint *)(param_1 + 0x3f8) = uVar1;
  *(undefined8 *)(param_1 + 0x408) = *(undefined8 *)(lVar5 + 0x2c0);
  if (*(int *)(*(longlong *)(param_1 + 0xb0) + 0x60c) == 1) {
    uVar4 = 0;
  }
  else if (uVar1 < 0x4d8) {
    uVar4 = 0x6b;
  }
  else {
    uVar4 = 0x8000;
    if (uVar1 < 0x846c) {
      uVar4 = 0x46b;
    }
  }
  *(undefined4 *)(param_1 + 0x400) = uVar4;
  *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(lVar5 + 0x220);
  *(undefined4 *)(param_1 + 0x36c) = *(undefined4 *)(lVar5 + 0x224);
  *(longlong *)(param_1 + 0x430) = lVar5;
  return 0;
}



// FUNCTION 144e07ee0 FUN_144e07ee0 body=128 status=ok
// SIG undefined FUN_144e07ee0(void)

ulonglong FUN_144e07ee0(longlong param_1,uint param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if (param_2 < 0x100) {
    pcVar3 = (char *)(**(code **)(param_1 + 0x20))
                               (*(undefined2 *)
                                 (*(longlong *)(param_1 + 0x18) + (ulonglong)param_2 * 2));
    uVar7 = 0;
    if (*(uint *)(param_1 + 0x28) != 0) {
      do {
        pcVar4 = *(char **)(*(longlong *)(param_1 + 0x30) + uVar7 * 8);
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
      } while (uVar6 < *(uint *)(param_1 + 0x28));
    }
  }
  return 0;
}



// FUNCTION 144e07f60 FUN_144e07f60 body=219 status=ok
// SIG undefined FUN_144e07f60(void)

ulonglong FUN_144e07f60(longlong param_1,uint *param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  
  uVar3 = *param_2;
  uVar6 = 0;
  do {
    uVar3 = uVar3 + 1;
    if (0xff < uVar3) {
      *param_2 = 0;
      return uVar6;
    }
    uVar7 = 0;
    uVar6 = uVar7;
    if (uVar3 < 0x100) {
      pcVar4 = (char *)(**(code **)(param_1 + 0x20))
                                 (*(undefined2 *)
                                   (*(longlong *)(param_1 + 0x18) + (ulonglong)uVar3 * 2));
      uVar10 = 0;
      if (*(uint *)(param_1 + 0x28) != 0) {
        do {
          pcVar5 = *(char **)(*(longlong *)(param_1 + 0x30) + uVar10 * 8);
          if ((pcVar5 != (char *)0x0) && (*pcVar5 == *pcVar4)) {
            lVar8 = (longlong)pcVar4 - (longlong)pcVar5;
            do {
              cVar1 = *pcVar5;
              cVar2 = pcVar5[lVar8];
              if (cVar1 != cVar2) break;
              pcVar5 = pcVar5 + 1;
            } while (cVar2 != '\0');
            uVar6 = uVar10;
            if (cVar1 == cVar2) break;
          }
          uVar9 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar9;
          uVar6 = uVar7;
        } while (uVar9 < *(uint *)(param_1 + 0x28));
      }
    }
    if ((int)uVar6 != 0) {
      *param_2 = uVar3;
      return uVar6;
    }
  } while( true );
}



// FUNCTION 144e080f0 FUN_144e080f0 body=209 status=ok
// SIG undefined FUN_144e080f0(void)

int FUN_144e080f0(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int local_res8 [2];
  
  param_1[7] = param_3;
  uVar1 = FUN_144b561b0(param_3,8,0,param_2,0,local_res8);
  param_1[5] = uVar1;
  if (local_res8[0] == 0) {
    uVar1 = FUN_144b561b0(param_3,4,0,param_2,0,local_res8);
    param_1[6] = uVar1;
    if (local_res8[0] == 0) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = param_2;
      *(undefined4 *)(param_1 + 3) = 0xdeadbeef;
      *(undefined4 *)(param_1 + 4) = 0;
      *param_1 = 0;
      param_1[2] = 0;
      param_1[1] = 0;
      param_1[8] = FUN_144e080f0;
      param_1[9] = FUN_144e082d0;
      param_1[10] = FUN_144e081e0;
      param_1[0xb] = FUN_144e08390;
      return 0;
    }
  }
  FUN_144b56350(param_3,param_1[5]);
  param_1[5] = 0;
  return local_res8[0];
}



// FUNCTION 144e081e0 FUN_144e081e0 body=238 status=ok
// SIG undefined FUN_144e081e0(void)

undefined8 FUN_144e081e0(longlong *param_1,int param_2,void *param_3,uint param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong _Size;
  
  _Size = (ulonglong)param_4;
  if ((param_2 < 0) || (*(int *)((longlong)param_1 + 0x1c) <= param_2)) {
    return 6;
  }
  uVar2 = param_1[2];
  if (uVar2 < param_1[1] + _Size) {
    uVar3 = (longlong)param_3 - *param_1;
    if (((longlong)uVar3 < 0) || (uVar2 <= uVar3)) {
      uVar3 = 0xffffffffffffffff;
    }
    for (; uVar2 < param_1[1] + _Size; uVar2 = uVar2 + 0x400 + (uVar2 >> 2) & 0xfffffffffffffc00) {
    }
    uVar1 = FUN_144e0c370(param_1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (-1 < (longlong)uVar3) {
      param_3 = (void *)(*param_1 + uVar3);
    }
  }
  *(longlong *)(param_1[5] + (longlong)param_2 * 8) = *param_1 + param_1[1];
  *(uint *)(param_1[6] + (longlong)param_2 * 4) = param_4;
  memcpy((void *)(*param_1 + param_1[1]),param_3,_Size);
  param_1[1] = param_1[1] + _Size;
  return 0;
}



// FUNCTION 144e082d0 FUN_144e082d0 body=154 status=ok
// SIG undefined FUN_144e082d0(void)

void FUN_144e082d0(longlong *param_1)

{
  longlong *plVar1;
  void *_Src;
  longlong lVar2;
  longlong lVar3;
  void *_Dst;
  longlong *plVar4;
  int local_res8 [2];
  
  _Src = (void *)*param_1;
  lVar2 = param_1[7];
  if (_Src != (void *)0x0) {
    _Dst = (void *)FUN_144b560d0(lVar2,(int)param_1[1],local_res8);
    *param_1 = (longlong)_Dst;
    if (local_res8[0] == 0) {
      memcpy(_Dst,_Src,param_1[1]);
      plVar4 = (longlong *)param_1[5];
      lVar3 = *param_1;
      plVar1 = plVar4 + *(int *)((longlong)param_1 + 0x1c);
      for (; plVar4 < plVar1; plVar4 = plVar4 + 1) {
        if (*plVar4 != 0) {
          *plVar4 = *plVar4 + (lVar3 - (longlong)_Src);
        }
      }
      param_1[2] = param_1[1];
      FUN_144b56350(lVar2,_Src);
    }
  }
  return;
}



// FUNCTION 144e08390 FUN_144e08390 body=98 status=ok
// SIG undefined FUN_144e08390(void)

void FUN_144e08390(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[7];
  if (*(int *)(param_1 + 3) == -0x21524111) {
    FUN_144b56350(uVar1,*param_1);
    *param_1 = 0;
    FUN_144b56350(uVar1,param_1[5]);
    param_1[5] = 0;
    FUN_144b56350(uVar1,param_1[6]);
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  return;
}



// FUNCTION 144e08400 FUN_144e08400 body=101 status=ok
// SIG undefined FUN_144e08400(void)

void FUN_144e08400(undefined8 *param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = (byte *)param_1[2];
  pbVar3 = (byte *)*param_1;
  if (pbVar2 <= pbVar3) {
    *param_1 = pbVar3;
    return;
  }
  do {
    bVar1 = *pbVar3;
    if ((0x20 < bVar1) || ((0x100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
      if (bVar1 != 0x25) break;
      for (; ((pbVar3 < pbVar2 && (*pbVar3 != 0xd)) && (*pbVar3 != 10)); pbVar3 = pbVar3 + 1) {
      }
    }
    pbVar3 = pbVar3 + 1;
  } while (pbVar3 < pbVar2);
  *param_1 = pbVar3;
  return;
}



// FUNCTION 144e08470 FUN_144e08470 body=387 status=ok
// SIG undefined FUN_144e08470(void)

void FUN_144e08470(undefined8 *param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  byte *pbVar4;
  undefined4 uVar5;
  bool bVar6;
  byte *local_res8;
  
  pbVar2 = (byte *)param_1[2];
  uVar5 = 0;
  uVar3 = 0;
  for (pbVar4 = (byte *)*param_1; pbVar4 < pbVar2; pbVar4 = pbVar4 + 1) {
    bVar1 = *pbVar4;
    if ((0x20 < bVar1) || ((0x100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
      if (bVar1 != 0x25) break;
      for (; ((pbVar4 < pbVar2 && (*pbVar4 != 0xd)) && (*pbVar4 != 10)); pbVar4 = pbVar4 + 1) {
      }
    }
  }
  bVar6 = pbVar4 < pbVar2;
  local_res8 = pbVar4;
  if (!bVar6) goto LAB_144e085dd;
  bVar1 = *pbVar4;
  if ((bVar1 + 0xa5 & 0xfd) == 0) {
    local_res8 = pbVar4 + 1;
LAB_144e085c9:
    uVar5 = uVar3;
    if ((local_res8 < pbVar2) && (local_res8 == (byte *)*param_1)) {
      uVar5 = 3;
    }
  }
  else {
    if (bVar1 == 0x7b) {
      uVar3 = FUN_144e0c5f0(&local_res8,pbVar2);
      goto LAB_144e085c9;
    }
    if (bVar1 == 0x28) {
      uVar3 = FUN_144e0c420(&local_res8,pbVar2);
      goto LAB_144e085c9;
    }
    if (bVar1 == 0x3c) {
      if ((pbVar4 + 1 < pbVar2) && (pbVar4[1] == 0x3c)) {
        local_res8 = pbVar4 + 2;
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_144e0c540(&local_res8,pbVar2);
      }
      goto LAB_144e085c9;
    }
    if (bVar1 == 0x3e) {
      local_res8 = pbVar4 + 1;
      if ((local_res8 < pbVar2) && (*local_res8 == 0x3e)) {
        local_res8 = pbVar4 + 2;
      }
      else {
        uVar3 = 3;
      }
      goto LAB_144e085c9;
    }
    if (bVar1 == 0x2f) {
      local_res8 = pbVar4 + 1;
    }
    for (; uVar5 = 0, local_res8 < pbVar2; local_res8 = local_res8 + 1) {
      bVar1 = *local_res8;
      if (((bVar1 < 0x3d) && ((0x1000832100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) != 0)) ||
         (((byte)(bVar1 - 0x3e) < 0x40 &&
          ((0xa0000000a0000001U >> ((ulonglong)(byte)(bVar1 - 0x3e) & 0x3f) & 1) != 0))))
      goto LAB_144e085c9;
    }
  }
  bVar6 = local_res8 < pbVar2;
LAB_144e085dd:
  if (!bVar6 && local_res8 != pbVar2) {
    local_res8 = pbVar2;
  }
  *(undefined4 *)(param_1 + 3) = uVar5;
  *param_1 = local_res8;
  return;
}



// FUNCTION 144e08600 FUN_144e08600 body=91 status=ok
// SIG undefined FUN_144e08600(void)

short FUN_144e08600(longlong param_1,uint *param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x18);
  uVar2 = *param_2 + 1;
  if (*param_2 + 1 < uVar3) {
    uVar2 = uVar3;
  }
  uVar3 = *(int *)(param_1 + 0x1c) + uVar3;
  if (uVar2 < uVar3) {
    do {
      sVar1 = *(short *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar2 * 2);
      if (sVar1 != 0) {
        *param_2 = uVar2;
        return sVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  *param_2 = 0;
  return 0;
}



// FUNCTION 144e08660 FUN_144e08660 body=322 status=ok
// SIG undefined FUN_144e08660(void)

void FUN_144e08660(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  char *local_res8;
  
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_144e08400();
  local_res8 = (char *)*param_1;
  pcVar2 = (char *)param_1[2];
  if (pcVar2 <= local_res8) {
    return;
  }
  cVar1 = *local_res8;
  *param_2 = local_res8;
  if (cVar1 == '(') {
    *(undefined4 *)(param_2 + 2) = 2;
    iVar5 = FUN_144e0c420(&local_res8,pcVar2);
    bVar7 = iVar5 == 0;
  }
  else {
    if (cVar1 == '[') {
      *(undefined4 *)(param_2 + 2) = 3;
      *param_1 = local_res8 + 1;
      iVar5 = 1;
      FUN_144e08400(param_1);
      pcVar4 = (char *)*param_1;
      pcVar3 = local_res8;
      while ((local_res8 = pcVar4, local_res8 < pcVar2 && (*(int *)(param_1 + 3) == 0))) {
        if (*local_res8 == '[') {
          iVar5 = iVar5 + 1;
        }
        else if ((*local_res8 == ']') && (iVar5 = iVar5 + -1, iVar5 < 1)) {
          local_res8 = local_res8 + 1;
          goto LAB_144e086d9;
        }
        local_res8 = pcVar3;
        FUN_144e08470(param_1);
        FUN_144e08400(param_1);
        pcVar4 = (char *)*param_1;
        pcVar3 = local_res8;
      }
      goto LAB_144e086dd;
    }
    if (cVar1 == '{') {
      *(undefined4 *)(param_2 + 2) = 3;
      iVar5 = FUN_144e0c5f0(&local_res8,pcVar2);
      bVar7 = iVar5 == 0;
    }
    else {
      uVar6 = 1;
      if (*local_res8 == '/') {
        uVar6 = 4;
      }
      *(undefined4 *)(param_2 + 2) = uVar6;
      FUN_144e08470(param_1);
      local_res8 = (char *)*param_1;
      bVar7 = *(int *)(param_1 + 3) == 0;
    }
  }
  if (bVar7) {
LAB_144e086d9:
    param_2[1] = local_res8;
  }
LAB_144e086dd:
  if (param_2[1] == 0) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 2) = 0;
  }
  *param_1 = local_res8;
  return;
}



// FUNCTION 144e087b0 FUN_144e087b0 body=753 status=ok
// SIG undefined FUN_144e087b0(void)

void FUN_144e087b0(ulonglong *param_1,undefined8 *param_2,ulonglong param_3,undefined4 *param_4)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  byte *local_68;
  undefined8 *local_60;
  ulonglong local_58;
  ulonglong local_50;
  byte *local_48;
  byte *pbStack_40;
  int local_38;
  undefined4 uStack_34;
  
  *param_4 = 0xffffffff;
  FUN_144e08660(param_1,&local_48);
  if (local_38 == 3) {
    local_58 = *param_1;
    local_50 = param_1[2];
    puVar7 = param_2 + (param_3 & 0xffffffff) * 3;
    *param_1 = (ulonglong)(local_48 + 1);
    param_1[2] = (longlong)pbStack_40 - 1U;
    puVar8 = param_2;
    local_60 = puVar7;
    if (local_48 + 1 < (byte *)((longlong)pbStack_40 - 1U)) {
      do {
        pbVar2 = (byte *)param_1[2];
        local_68 = (byte *)*param_1;
        pbStack_40 = (byte *)0x0;
        for (; local_68 < pbVar2; local_68 = local_68 + 1) {
          bVar1 = *local_68;
          if ((0x20 < bVar1) || ((0x100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
            if (bVar1 != 0x25) break;
            for (; ((local_68 < pbVar2 && (*local_68 != 0xd)) && (*local_68 != 10));
                local_68 = local_68 + 1) {
            }
          }
        }
        *param_1 = (ulonglong)local_68;
        if (pbVar2 <= local_68) break;
        bVar1 = *local_68;
        local_48 = local_68;
        if (bVar1 == 0x28) {
          iVar6 = 2;
          local_38 = 2;
          iVar4 = FUN_144e0c420(&local_68,pbVar2);
LAB_144e089ee:
          if (iVar4 != 0) goto LAB_144e089f9;
LAB_144e089f0:
          pbStack_40 = local_68;
          if (local_68 == (byte *)0x0) goto LAB_144e089f9;
        }
        else {
          if (bVar1 != 0x5b) {
            if (bVar1 == 0x7b) {
              iVar6 = 3;
              local_38 = 3;
              iVar4 = FUN_144e0c5f0(&local_68,pbVar2);
            }
            else {
              iVar6 = 1;
              if (bVar1 == 0x2f) {
                iVar6 = 4;
              }
              local_38 = iVar6;
              FUN_144e08470(param_1);
              local_68 = (byte *)*param_1;
              iVar4 = (int)param_1[3];
            }
            goto LAB_144e089ee;
          }
          iVar6 = 3;
          local_38 = 3;
          *param_1 = (ulonglong)(local_68 + 1);
          iVar4 = 1;
          FUN_144e08400(param_1);
          pbVar5 = (byte *)*param_1;
          pbVar3 = local_68;
          while ((local_68 = pbVar5, local_68 < pbVar2 && ((int)param_1[3] == 0))) {
            if (*local_68 == 0x5b) {
              iVar4 = iVar4 + 1;
            }
            else if ((*local_68 == 0x5d) && (iVar4 = iVar4 + -1, iVar4 < 1)) {
              local_68 = local_68 + 1;
              goto LAB_144e089f0;
            }
            local_68 = pbVar3;
            FUN_144e08470(param_1);
            for (pbVar5 = (byte *)*param_1; pbVar5 < (byte *)param_1[2]; pbVar5 = pbVar5 + 1) {
              bVar1 = *pbVar5;
              puVar7 = local_60;
              if ((0x20 < bVar1) || ((0x100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
                if (bVar1 != 0x25) break;
                for (; ((pbVar5 < (byte *)param_1[2] && (*pbVar5 != 0xd)) && (*pbVar5 != 10));
                    pbVar5 = pbVar5 + 1) {
                }
              }
            }
            *param_1 = (ulonglong)pbVar5;
            pbVar3 = local_68;
          }
LAB_144e089f9:
          iVar6 = 0;
          local_48 = (byte *)0x0;
          local_38 = 0;
        }
        *param_1 = (ulonglong)local_68;
        if (iVar6 == 0) break;
        if ((param_2 != (undefined8 *)0x0) && (puVar8 < puVar7)) {
          *puVar8 = local_48;
          puVar8[1] = pbStack_40;
          puVar8[2] = CONCAT44(uStack_34,local_38);
        }
        puVar8 = puVar8 + 3;
      } while (*param_1 < param_1[2]);
    }
    *param_4 = (int)(((longlong)puVar8 - (longlong)param_2) / 0x18);
    *param_1 = local_58;
    param_1[2] = local_50;
  }
  return;
}



// FUNCTION 144e08ab0 FUN_144e08ab0 body=1226 status=ok
// SIG undefined FUN_144e08ab0(void)

void FUN_144e08ab0(longlong *param_1,longlong param_2,longlong *param_3,uint param_4)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  void *_Dst;
  undefined4 *puVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  byte *pbVar16;
  longlong *plVar17;
  undefined4 *puVar18;
  undefined1 auStack_108 [32];
  ulonglong local_e8;
  int *local_e0;
  int local_d8;
  byte *local_d0;
  int local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  longlong local_b8;
  longlong *local_b0;
  byte *local_a8;
  byte *local_a0;
  undefined4 *local_98;
  longlong local_90;
  longlong *local_88;
  byte *local_80;
  byte *local_78;
  int local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar15 = (ulonglong)param_4;
  local_bc = param_4;
  local_b8 = param_2;
  local_b0 = param_3;
  local_88 = param_1;
  FUN_144e08660(param_1,&local_80);
  if (local_70 == 0) goto switchD_144e08c2a_default;
  uVar8 = 0;
  iVar5 = *(int *)(param_2 + 0xc);
  local_c4 = 1;
  local_c0 = 0;
  local_a0 = local_78;
  pbVar10 = local_80;
  pbVar16 = local_78;
  if (iVar5 == 7) {
    lVar14 = *param_1;
    lVar3 = param_1[2];
    *param_1 = (longlong)(local_80 + 1);
    param_1[2] = (longlong)(local_78 + -1);
    FUN_144e08660(param_1,&local_68);
    *param_1 = lVar14;
    param_1[2] = lVar3;
    if (local_58 == 3) {
      iVar5 = 8;
      uVar12 = local_c4;
LAB_144e08b71:
      local_c4 = uVar12;
      if (param_4 == 0) {
switchD_144e08c2a_default:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_108);
      }
      pbVar10 = local_80 + 1;
      uVar8 = 1;
      pbVar16 = local_78 + -1;
      local_c0 = 1;
      local_a0 = pbVar16;
      if (local_c4 == 0) goto switchD_144e08c2a_default;
    }
    else {
      uVar8 = (ulonglong)local_c0;
    }
  }
  else {
    uVar12 = param_4;
    if (local_70 == 3) goto LAB_144e08b71;
  }
  local_d8 = iVar5 + -1;
  lVar14 = local_b8;
  iVar5 = local_d8;
LAB_144e08ba6:
  plVar17 = (longlong *)((ulonglong)*(uint *)(lVar14 + 0x18) + local_b0[uVar8]);
  for (local_d0 = pbVar10; local_d0 < pbVar16; local_d0 = local_d0 + 1) {
    bVar2 = *local_d0;
    if ((0x20 < bVar2) || ((0x100003601U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)) {
      if (bVar2 != 0x25) break;
      for (; ((local_d0 < pbVar16 && (*local_d0 != 0xd)) && (*local_d0 != 10));
          local_d0 = local_d0 + 1) {
      }
    }
  }
  pbVar10 = local_d0;
  switch(iVar5) {
  case 0:
    pbVar1 = local_d0 + 3;
    if (((pbVar1 < pbVar16) && (*local_d0 == 0x74)) &&
       ((local_d0[1] == 0x72 && ((local_d0[2] == 0x75 && (*pbVar1 == 0x65)))))) {
      uVar7 = 1;
      pbVar10 = local_d0 + 5;
    }
    else {
      uVar7 = 0;
      if ((local_d0 + 4 < pbVar16) &&
         ((((*local_d0 == 0x66 && (local_d0[1] == 0x61)) && (local_d0[2] == 0x6c)) &&
          ((*pbVar1 == 0x73 && (local_d0[4] == 0x65)))))) {
        pbVar10 = local_d0 + 6;
      }
    }
    break;
  case 1:
    uVar7 = FUN_144e0adb0(&local_d0,pbVar16);
    pbVar10 = local_d0;
    break;
  case 2:
    uVar7 = FUN_144e0ae40(&local_d0,pbVar16,0);
    pbVar10 = local_d0;
    break;
  case 3:
    uVar7 = FUN_144e0ae40(&local_d0,pbVar16,3);
    pbVar10 = local_d0;
    break;
  case 4:
  case 5:
    lVar3 = param_1[4];
    iVar11 = (int)pbVar16 - (int)local_d0;
    lVar14 = local_b8;
    if (local_d0 < pbVar16) {
      if (local_70 == 4) {
        uVar12 = iVar11 - 1;
      }
      else {
        if (local_70 != 2) goto switchD_144e08c2a_default;
        uVar12 = iVar11 - 2;
      }
      pbVar10 = local_d0 + 1;
      if (*plVar17 != 0) {
        FUN_144b56350(lVar3);
        *plVar17 = 0;
      }
      _Dst = (void *)FUN_144b560d0(lVar3,uVar12 + 1,&local_c8);
      if (local_c8 == 0) {
        memcpy(_Dst,pbVar10,(ulonglong)uVar12);
        *(undefined1 *)((ulonglong)uVar12 + (longlong)_Dst) = 0;
        *plVar17 = (longlong)_Dst;
        lVar14 = local_b8;
        iVar5 = local_d8;
        goto LAB_144e08f36;
      }
      goto switchD_144e08c2a_default;
    }
    goto LAB_144e08f36;
  case 6:
    local_e8 = local_e8 & 0xffffffff00000000;
    iVar5 = FUN_144e0c830(&local_d0,pbVar16,4,&local_68);
    if (3 < iVar5) {
      uVar7 = FUN_144b55630(local_68);
      *(undefined4 *)plVar17 = uVar7;
      uVar7 = FUN_144b55630(local_64);
      *(undefined4 *)((longlong)plVar17 + 4) = uVar7;
      uVar7 = FUN_144b55630(local_60);
      *(undefined4 *)(plVar17 + 1) = uVar7;
      uVar7 = FUN_144b55630(local_5c);
      *(undefined4 *)((longlong)plVar17 + 0xc) = uVar7;
      pbVar10 = local_d0;
      iVar5 = local_d8;
      goto LAB_144e08f36;
    }
    goto switchD_144e08c2a_default;
  case 7:
    lVar14 = param_1[4];
    local_e0 = &local_c8;
    uVar12 = (uint)uVar15;
    local_e8 = 0;
    local_90 = lVar14;
    puVar9 = (undefined4 *)FUN_144b561b0(lVar14,4,0,uVar12 * 4);
    local_98 = puVar9;
    if (local_c8 == 0) {
      uVar13 = 0;
      uVar8 = 0;
      do {
        local_e8 = local_e8 & 0xffffffff00000000;
        uVar6 = FUN_144e0c830(&local_d0,pbVar16,uVar15,puVar9 + uVar8);
        if (((int)uVar6 < 0) || (uVar6 < uVar12)) {
          local_c8 = 3;
          FUN_144b56350(lVar14,puVar9);
          goto switchD_144e08c2a_default;
        }
        for (; local_d0 < pbVar16; local_d0 = local_d0 + 1) {
          bVar2 = *local_d0;
          lVar14 = local_90;
          if ((0x20 < bVar2) || ((0x100003601U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)) {
            if (bVar2 != 0x25) break;
            for (; ((local_d0 < pbVar16 && (*local_d0 != 0xd)) && (*local_d0 != 10));
                local_d0 = local_d0 + 1) {
            }
          }
        }
        uVar13 = uVar13 + 1;
        uVar8 = (ulonglong)((int)uVar8 + uVar12);
        local_a8 = local_d0;
      } while (uVar13 < 4);
      if (uVar12 != 0) {
        uVar13 = uVar12 * 2;
        plVar17 = local_b0;
        puVar18 = puVar9;
        do {
          puVar4 = (undefined4 *)*plVar17;
          uVar7 = FUN_144b55630(*puVar18);
          *puVar4 = uVar7;
          uVar7 = FUN_144b55630(puVar9[uVar13 - uVar12]);
          puVar4[1] = uVar7;
          uVar7 = FUN_144b55630(puVar9[uVar13]);
          puVar4[2] = uVar7;
          uVar7 = FUN_144b55630(puVar9[local_bc + uVar13]);
          uVar13 = uVar13 + 1;
          puVar4[3] = uVar7;
          plVar17 = plVar17 + 1;
          puVar18 = puVar18 + 1;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
        uVar15 = (ulonglong)local_bc;
        lVar14 = local_90;
        pbVar16 = local_a0;
        puVar9 = local_98;
      }
      pbVar10 = local_a8;
      FUN_144b56350(lVar14,puVar9);
      lVar14 = local_b8;
      param_1 = local_88;
      iVar5 = local_d8;
      goto LAB_144e08f36;
    }
  default:
    goto switchD_144e08c2a_default;
  }
  iVar5 = local_d8;
  if (*(char *)(lVar14 + 0x1c) == '\x01') {
    *(char *)plVar17 = (char)uVar7;
  }
  else if (*(char *)(lVar14 + 0x1c) == '\x02') {
    *(short *)plVar17 = (short)uVar7;
  }
  else {
    *(undefined4 *)plVar17 = uVar7;
  }
LAB_144e08f36:
  local_c4 = local_c4 - 1;
  local_c0 = local_c0 + 1;
  uVar8 = (ulonglong)local_c0;
  if (local_c4 == 0) goto switchD_144e08c2a_default;
  goto LAB_144e08ba6;
}



// FUNCTION 144e08fb0 FUN_144e08fb0 body=316 status=ok
// SIG undefined FUN_144e08fb0(void)

void FUN_144e08fb0(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined1 auStack_3c8 [32];
  undefined8 local_3a8;
  uint local_398 [2];
  undefined8 local_390;
  undefined8 uStack_388;
  undefined4 local_380;
  undefined4 uStack_37c;
  int iStack_378;
  uint uStack_374;
  undefined4 local_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined8 local_358 [96];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  local_390 = *param_2;
  local_380 = *(undefined4 *)(param_2 + 2);
  uStack_37c = *(undefined4 *)((longlong)param_2 + 0x14);
  iStack_378 = *(int *)(param_2 + 3);
  uStack_374 = *(uint *)((longlong)param_2 + 0x1c);
  uStack_388._0_4_ = (undefined4)param_2[1];
  uStack_388 = CONCAT44(2,(undefined4)uStack_388);
  local_370 = *(undefined4 *)(param_2 + 4);
  uStack_36c = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_368 = *(undefined4 *)(param_2 + 5);
  uStack_364 = *(undefined4 *)((longlong)param_2 + 0x2c);
  if ((*(int *)((longlong)param_2 + 0xc) == 10) || (*(int *)((longlong)param_2 + 0xc) == 7)) {
    uStack_388 = CONCAT44(3,(undefined4)uStack_388);
  }
  FUN_144e087b0(local_370,local_358,0x20,local_398);
  if (-1 < (int)local_398[0]) {
    uVar4 = local_398[0];
    if (*(uint *)(param_2 + 4) < local_398[0]) {
      uVar4 = *(uint *)(param_2 + 4);
    }
    uVar1 = *param_1;
    uVar2 = param_1[2];
    if ((*(int *)((longlong)param_2 + 0xc) != 7) && (*(uint *)((longlong)param_2 + 0x24) != 0)) {
      *(char *)((ulonglong)*(uint *)((longlong)param_2 + 0x24) + *param_3) = (char)uVar4;
    }
    puVar5 = local_358;
    for (; 0 < (int)uVar4; uVar4 = uVar4 - 1) {
      *param_1 = *puVar5;
      param_1[2] = puVar5[1];
      local_3a8 = 0;
      iVar3 = FUN_144e08ab0(param_1,&local_390,param_3,param_4);
      if (iVar3 != 0) break;
      iStack_378 = iStack_378 + (uStack_374 & 0xff);
      puVar5 = puVar5 + 3;
    }
    *param_1 = uVar1;
    param_1[2] = uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_3c8);
}



// FUNCTION 144e09100 FUN_144e09100 body=81 status=ok
// SIG undefined FUN_144e09100(void)

undefined8 FUN_144e09100(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  pcVar2 = *(code **)(*(longlong *)(lVar1 + 0x298) + 8);
  if (pcVar2 == (code *)0x0) {
    return 7;
  }
  uVar3 = (*pcVar2)(*(undefined8 *)(lVar1 + 0x98),param_1,*(undefined4 *)(lVar1 + 0x240),
                    &LAB_144e0c990,0,lVar1);
  return uVar3;
}



// FUNCTION 144e09160 FUN_144e09160 body=31 status=ok
// SIG undefined FUN_144e09160(void)

void FUN_144e09160(longlong param_1)

{
  FUN_144e08400();
  FUN_144e0adb0(param_1,*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 144e09180 FUN_144e09180 body=156 status=ok
// SIG undefined FUN_144e09180(void)

undefined8
FUN_144e09180(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             char param_5)

{
  undefined4 uVar1;
  char *local_res8;
  
  FUN_144e08400();
  local_res8 = (char *)*param_1;
  if (local_res8 < (char *)param_1[2]) {
    if (param_5 != '\0') {
      if (*local_res8 != '<') {
        return 3;
      }
      local_res8 = local_res8 + 1;
    }
    uVar1 = FUN_144e0b0d0(&local_res8,(char *)param_1[2],param_2,param_3);
    *param_4 = uVar1;
    *param_1 = local_res8;
    if (param_5 != '\0') {
      if ((local_res8 < (char *)param_1[2]) && (*local_res8 != '>')) {
        return 3;
      }
      *param_1 = local_res8 + 1;
    }
  }
  return 0;
}



// FUNCTION 144e09220 FUN_144e09220 body=43 status=ok
// SIG undefined FUN_144e09220(void)

void FUN_144e09220(longlong *param_1)

{
  FUN_144b56350(*(undefined8 *)(*param_1 + 0x98),param_1[4]);
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}



// FUNCTION 144e09250 FUN_144e09250 body=45 status=ok
// SIG undefined FUN_144e09250(void)

void FUN_144e09250(longlong param_1,undefined4 param_2)

{
  FUN_144e08400();
  FUN_144e0ae40(param_1,*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}



// FUNCTION 144e09280 FUN_144e09280 body=61 status=ok
// SIG undefined FUN_144e09280(void)

void FUN_144e09280(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_144e08400();
  FUN_144e0c6f0(param_1,*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  return;
}



// FUNCTION 144e092d0 FUN_144e092d0 body=79 status=ok
// SIG undefined FUN_144e092d0(void)

void FUN_144e092d0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_144e08400();
  FUN_144e0c830(param_1,*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4);
  return;
}



// FUNCTION 144e093b0 FUN_144e093b0 body=219 status=ok
// SIG undefined FUN_144e093b0(void)

void FUN_144e093b0(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,
                  char param_5)

{
  longlong lVar1;
  
  *(undefined1 *)((longlong)param_1 + 0x5c) = 1;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[1] = param_2;
  param_1[2] = param_4;
  *param_1 = *(undefined8 *)(param_2 + 0x98);
  if (param_4 != 0) {
    lVar1 = **(longlong **)(param_4 + 0xf0);
    param_1[3] = lVar1;
    param_1[4] = lVar1 + 0x18;
    param_1[5] = lVar1 + 0x60;
    FUN_144b56640();
    param_1[0xd] = **(undefined8 **)(param_3 + 0x38);
    param_1[0xc] = 0;
    if (param_5 != '\0') {
      param_1[0xc] = *(undefined8 *)(*(longlong *)(param_4 + 0xf0) + 0x28);
    }
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xe] = FUN_144e093b0;
  param_1[0xf] = &LAB_144e09490;
  param_1[0x10] = &LAB_144e094c0;
  param_1[0x11] = FUN_144e094f0;
  param_1[0x12] = FUN_144e09580;
  param_1[0x13] = FUN_144e09630;
  param_1[0x14] = FUN_144e096c0;
  param_1[0x15] = FUN_144e09720;
  return;
}



// FUNCTION 144e094f0 FUN_144e094f0 body=130 status=ok
// SIG undefined FUN_144e094f0(void)

void FUN_144e094f0(longlong param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int *piVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x5c) != '\0') {
    sVar2 = *(short *)(lVar3 + 2);
    lVar4 = *(longlong *)(lVar3 + 0x10);
    piVar1 = (int *)(*(longlong *)(lVar3 + 8) + (longlong)sVar2 * 8);
    iVar5 = FUN_144b55630(param_2);
    *piVar1 = iVar5 >> 0x10;
    iVar5 = FUN_144b55630(param_3);
    piVar1[1] = iVar5 >> 0x10;
    *(char *)(lVar4 + sVar2) = (param_4 == '\0') + '\x01';
  }
  *(short *)(lVar3 + 2) = *(short *)(lVar3 + 2) + 1;
  return;
}



// FUNCTION 144e09580 FUN_144e09580 body=171 status=ok
// SIG undefined FUN_144e09580(void)

ulonglong FUN_144e09580(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (*(uint *)(lVar3 + 8) < (uint)(*(short *)(lVar3 + 0x62) + 1 + (int)*(short *)(lVar3 + 0x1a))) {
    uVar6 = FUN_144b56680(lVar3,1);
    uVar7 = uVar6 & 0xffffffff;
    if ((int)uVar6 != 0) {
      return uVar6;
    }
  }
  else {
    uVar7 = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x5c) != '\0') {
    sVar2 = *(short *)(lVar3 + 2);
    lVar4 = *(longlong *)(lVar3 + 0x10);
    piVar1 = (int *)(*(longlong *)(lVar3 + 8) + (longlong)sVar2 * 8);
    iVar5 = FUN_144b55630(param_2);
    *piVar1 = iVar5 >> 0x10;
    iVar5 = FUN_144b55630(param_3);
    piVar1[1] = iVar5 >> 0x10;
    *(undefined1 *)(lVar4 + sVar2) = 1;
  }
  *(short *)(lVar3 + 2) = *(short *)(lVar3 + 2) + 1;
  return uVar7;
}



// FUNCTION 144e09630 FUN_144e09630 body=130 status=ok
// SIG undefined FUN_144e09630(void)

undefined8 FUN_144e09630(longlong param_1)

{
  short *psVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  psVar1 = *(short **)(param_1 + 0x28);
  if (psVar1 == (short *)0x0) {
    return 3;
  }
  if (*(char *)(param_1 + 0x5c) != '\0') {
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



// FUNCTION 144e096c0 FUN_144e096c0 body=92 status=ok
// SIG undefined FUN_144e096c0(void)

undefined8 FUN_144e096c0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x58) == 3) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x58) = 3;
  uVar1 = FUN_144e09630();
  if ((int)uVar1 == 0) {
    uVar1 = FUN_144e09580(param_1,param_2,param_3);
  }
  return uVar1;
}



// FUNCTION 144e09720 FUN_144e09720 body=227 status=ok
// SIG undefined FUN_144e09720(void)

void FUN_144e09720(longlong param_1)

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



// FUNCTION 144e09810 FUN_144e09810 body=235 status=ok
// SIG undefined FUN_144e09810(void)

void FUN_144e09810(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,
                  char param_5)

{
  longlong lVar1;
  
  *(undefined2 *)(param_1 + 0xb) = 0x100;
  param_1[1] = param_2;
  param_1[2] = param_4;
  *param_1 = *(undefined8 *)(param_2 + 0x98);
  if (param_4 != 0) {
    lVar1 = **(longlong **)(param_4 + 0xf0);
    param_1[3] = lVar1;
    param_1[4] = lVar1 + 0x18;
    param_1[5] = lVar1 + 0x60;
    FUN_144b56640();
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    if (((param_5 != '\0') && (param_3 != 0)) &&
       ((undefined8 *)**(longlong **)(param_3 + 0x38) != (undefined8 *)0x0)) {
      param_1[0xd] = *(undefined8 *)**(longlong **)(param_3 + 0x38);
      param_1[0xc] = *(undefined8 *)(*(longlong *)(param_4 + 0xf0) + 0x28);
    }
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xe] = FUN_144e09810;
  param_1[0xf] = &LAB_144e09900;
  param_1[0x10] = &LAB_144e09930;
  param_1[0x11] = FUN_144e09960;
  param_1[0x12] = FUN_144e099b0;
  param_1[0x13] = FUN_144e09b90;
  param_1[0x14] = FUN_144e09a40;
  param_1[0x15] = FUN_144e09aa0;
  return;
}



// FUNCTION 144e09960 FUN_144e09960 body=68 status=ok
// SIG undefined FUN_144e09960(void)

void FUN_144e09960(longlong param_1,int param_2,int param_3,char param_4)

{
  int *piVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x59) != '\0') {
    sVar2 = *(short *)(lVar3 + 2);
    lVar4 = *(longlong *)(lVar3 + 0x10);
    piVar1 = (int *)(*(longlong *)(lVar3 + 8) + (longlong)sVar2 * 8);
    *piVar1 = param_2 >> 10;
    piVar1[1] = param_3 >> 10;
    *(char *)(lVar4 + sVar2) = (param_4 == '\0') + '\x01';
  }
  *(short *)(lVar3 + 2) = *(short *)(lVar3 + 2) + 1;
  return;
}



// FUNCTION 144e099b0 FUN_144e099b0 body=133 status=ok
// SIG undefined FUN_144e099b0(void)

undefined8 FUN_144e099b0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 144e09a40 FUN_144e09a40 body=88 status=ok
// SIG undefined FUN_144e09a40(void)

undefined8 FUN_144e09a40(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x58) == '\0') {
    *(undefined1 *)(param_1 + 0x58) = 1;
    uVar1 = FUN_144e09b90();
    if ((int)uVar1 == 0) {
      uVar1 = FUN_144e099b0(param_1,param_2,param_3);
      return uVar1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 144e09aa0 FUN_144e09aa0 body=227 status=ok
// SIG undefined FUN_144e09aa0(void)

void FUN_144e09aa0(longlong param_1)

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



// FUNCTION 144e09b90 FUN_144e09b90 body=116 status=ok
// SIG undefined FUN_144e09b90(void)

undefined8 FUN_144e09b90(longlong param_1)

{
  short *psVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  psVar1 = *(short **)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x59) == '\0') {
    *psVar1 = *psVar1 + 1;
    return 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (*(uint *)(lVar2 + 0xc) < (uint)(*(short *)(lVar2 + 0x60) + 1 + (int)*(short *)(lVar2 + 0x18)))
  {
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



// FUNCTION 144e09c10 FUN_144e09c10 body=210 status=ok
// SIG undefined FUN_144e09c10(void)

void FUN_144e09c10(undefined8 *param_1,undefined8 *param_2,char param_3)

{
  undefined1 uVar1;
  
  memset(param_1,0,0x70);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2 + 6;
  param_1[7] = (longlong)param_2 + 0x34;
  param_1[8] = param_2 + 7;
  param_1[9] = param_2 + 8;
  param_1[10] = param_2 + 9;
  if (param_3 == '\0') {
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
    *(undefined1 *)((longlong)param_1 + 0x59) = *(undefined1 *)((longlong)param_2 + 0x59);
    *(undefined1 *)((longlong)param_1 + 0x5a) = *(undefined1 *)((longlong)param_2 + 0x5a);
    uVar1 = *(undefined1 *)((longlong)param_2 + 0x5b);
  }
  else {
    *(undefined1 *)(param_1 + 0xb) = 0;
    *(undefined1 *)((longlong)param_1 + 0x59) = *(undefined1 *)((longlong)param_2 + 0x5c);
    *(undefined1 *)((longlong)param_1 + 0x5a) = *(undefined1 *)((longlong)param_2 + 0x5d);
    uVar1 = *(undefined1 *)((longlong)param_2 + 0x5e);
  }
  *(char *)((longlong)param_1 + 0x5c) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x5b) = uVar1;
  param_1[0xc] = FUN_144e09c10;
  param_1[0xd] = &LAB_144e09cf0;
  return;
}



// FUNCTION 144e09d20 FUN_144e09d20 body=465 status=ok
// SIG undefined FUN_144e09d20(void)

void FUN_144e09d20(void *param_1,longlong param_2,char param_3)

{
  memset(param_1,0,0x3e0);
  if (param_3 != '\0') {
    FUN_144e09c10(param_1,param_2,param_3);
    *(longlong *)((longlong)param_1 + 0x330) = param_2 + 0x730;
    *(undefined8 *)((longlong)param_1 + 0x390) = *(undefined8 *)(param_2 + 0x658);
    *(undefined4 *)((longlong)param_1 + 0x370) = *(undefined4 *)(param_2 + 0x660);
    *(undefined8 *)((longlong)param_1 + 0x368) = *(undefined8 *)(param_2 + 0x668);
    *(undefined4 *)((longlong)param_1 + 0x374) = *(undefined4 *)(param_2 + 0x6f0);
    *(undefined8 *)((longlong)param_1 + 0x3c8) = *(undefined8 *)(param_2 + 0x6e8);
    *(undefined4 *)((longlong)param_1 + 0x348) = *(undefined4 *)(param_2 + 0x674);
    *(undefined8 *)((longlong)param_1 + 0x358) = *(undefined8 *)(param_2 + 0x678);
    *(undefined8 *)((longlong)param_1 + 0x3a0) = *(undefined8 *)(param_2 + 0x680);
    *(undefined8 *)((longlong)param_1 + 0x3a8) = *(undefined8 *)(param_2 + 0x688);
    *(undefined8 *)((longlong)param_1 + 0x3d0) = *(undefined8 *)(param_2 + 0x720);
    *(undefined4 *)((longlong)param_1 + 0x3d8) = *(undefined4 *)(param_2 + 0x728);
    *(undefined4 *)((longlong)param_1 + 0x398) = *(undefined4 *)(param_2 + 0x670);
    return;
  }
  FUN_144e09c10(param_1,param_2,0);
  *(undefined8 *)((longlong)param_1 + 800) = *(undefined8 *)(param_2 + 0xb0);
  *(longlong *)((longlong)param_1 + 0x330) = *(longlong *)(param_2 + 0xb0) + 0x1108;
  *(undefined8 *)((longlong)param_1 + 0x328) = *(undefined8 *)(param_2 + 0x430);
  *(undefined4 *)((longlong)param_1 + 0x34c) = *(undefined4 *)(param_2 + 0x3fc);
  *(undefined8 *)((longlong)param_1 + 0x360) = *(undefined8 *)(param_2 + 0x410);
  *(undefined4 *)((longlong)param_1 + 0x354) = *(undefined4 *)(param_2 + 0x404);
  *(undefined4 *)((longlong)param_1 + 0x348) = *(undefined4 *)(param_2 + 0x3f8);
  *(undefined8 *)((longlong)param_1 + 0x358) = *(undefined8 *)(param_2 + 0x408);
  *(undefined4 *)((longlong)param_1 + 0x350) = *(undefined4 *)(param_2 + 0x400);
  *(longlong *)((longlong)param_1 + 0x338) = param_2 + 0x368;
  *(undefined1 *)((longlong)param_1 + 0x340) = *(undefined1 *)(param_2 + 0x371);
  *(undefined4 *)((longlong)param_1 + 0x374) = *(undefined4 *)(param_2 + 0x424);
  *(undefined8 *)((longlong)param_1 + 0x380) = *(undefined8 *)(param_2 + 0x438);
  *(undefined8 *)((longlong)param_1 + 0x388) = *(undefined8 *)(param_2 + 0x440);
  return;
}



// FUNCTION 144e09f00 FUN_144e09f00 body=618 status=ok
// SIG undefined FUN_144e09f00(void)

void FUN_144e09f00(longlong param_1,longlong param_2,void *param_3)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  short *psVar6;
  ulonglong uVar7;
  longlong local_res8;
  undefined1 local_res10 [8];
  void *local_res18;
  
  local_res8 = param_1;
  local_res18 = param_3;
  memset(param_3,0,0x2d0);
  memset((byte *)((longlong)param_3 + 0xc0),0,0x178);
  bVar1 = *(byte *)(param_2 + 8);
  *(byte *)((longlong)param_3 + 0xc0) = bVar1;
  uVar7 = (ulonglong)bVar1;
  if (bVar1 != 0) {
    piVar5 = (int *)((longlong)param_3 + 0xc4);
    psVar6 = (short *)(param_2 + 0xc);
    do {
      sVar2 = *psVar6;
      psVar6 = psVar6 + 1;
      *piVar5 = (int)sVar2;
      piVar5 = piVar5 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  bVar1 = *(byte *)(param_2 + 9);
  *(byte *)((longlong)param_3 + 0xc1) = bVar1;
  uVar7 = (ulonglong)bVar1;
  if (bVar1 != 0) {
    piVar5 = (int *)((longlong)param_3 + 0xfc);
    psVar6 = (short *)(param_2 + 0x28);
    do {
      sVar2 = *psVar6;
      psVar6 = psVar6 + 1;
      *piVar5 = (int)sVar2;
      piVar5 = piVar5 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  bVar1 = *(byte *)(param_2 + 10);
  *(byte *)((longlong)param_3 + 0xc2) = bVar1;
  uVar7 = (ulonglong)bVar1;
  if (bVar1 != 0) {
    piVar5 = (int *)((longlong)param_3 + 0x124);
    psVar6 = (short *)(param_2 + 0x3c);
    do {
      sVar2 = *psVar6;
      psVar6 = psVar6 + 1;
      *piVar5 = (int)sVar2;
      piVar5 = piVar5 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  bVar1 = *(byte *)(param_2 + 0xb);
  *(byte *)((longlong)param_3 + 0xc3) = bVar1;
  uVar7 = (ulonglong)bVar1;
  if (bVar1 != 0) {
    piVar5 = (int *)((longlong)param_3 + 0x15c);
    psVar6 = (short *)(param_2 + 0x58);
    do {
      sVar2 = *psVar6;
      psVar6 = psVar6 + 1;
      *piVar5 = (int)sVar2;
      piVar5 = piVar5 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  *(undefined4 *)((longlong)param_3 + 0x184) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)((longlong)param_3 + 0x188) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)((longlong)param_3 + 0x18c) = *(undefined4 *)(param_2 + 0x74);
  *(uint *)((longlong)param_3 + 400) = (uint)*(ushort *)(param_2 + 0x78);
  *(uint *)((longlong)param_3 + 0x194) = (uint)*(ushort *)(param_2 + 0x7a);
  bVar1 = *(byte *)(param_2 + 0x7c);
  *(byte *)((longlong)param_3 + 0x198) = bVar1;
  uVar7 = (ulonglong)bVar1;
  if (bVar1 != 0) {
    piVar5 = (int *)((longlong)param_3 + 0x19c);
    psVar6 = (short *)(param_2 + 0x80);
    do {
      sVar2 = *psVar6;
      psVar6 = psVar6 + 1;
      *piVar5 = (int)sVar2;
      piVar5 = piVar5 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  bVar1 = *(byte *)(param_2 + 0x7d);
  *(byte *)((longlong)param_3 + 0x199) = bVar1;
  uVar7 = (ulonglong)bVar1;
  if (bVar1 != 0) {
    piVar5 = (int *)((longlong)param_3 + 0x1d0);
    psVar6 = (short *)(param_2 + 0x9a);
    do {
      sVar2 = *psVar6;
      psVar6 = psVar6 + 1;
      *piVar5 = (int)sVar2;
      piVar5 = piVar5 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  *(undefined1 *)((longlong)param_3 + 0x204) = *(undefined1 *)(param_2 + 0x7e);
  *(undefined4 *)((longlong)param_3 + 0x20c) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_3 + 0x210) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)((longlong)param_3 + 0x214) = *(undefined4 *)(param_2 + 0xb4);
  *(void **)((longlong)param_3 + 0x230) = local_res18;
  iVar3 = *(int *)(*(longlong *)(local_res8 + 0xd0) + 0x5c);
  if (iVar3 != -1) {
    *(int *)((longlong)local_res18 + 0x2c8) = iVar3;
    if (*(int *)(*(longlong *)(local_res8 + 0xd0) + 0x5c) != 0) {
      do {
        uVar4 = *(uint *)(*(longlong *)(local_res8 + 0xd0) + 0x5c);
        uVar4 = uVar4 ^ uVar4 << 0xd;
        uVar4 = uVar4 ^ uVar4 >> 0x11;
        *(uint *)(*(longlong *)(local_res8 + 0xd0) + 0x5c) = uVar4 << 5 ^ uVar4;
      } while (*(int *)(*(longlong *)(local_res8 + 0xd0) + 0x5c) < 0);
    }
  }
  if (*(int *)((longlong)local_res18 + 0x2c8) == 0) {
    uVar4 = (uint)local_res10 ^ (uint)&local_res8 ^ (uint)&local_res18;
    uVar4 = uVar4 ^ (uVar4 >> 10 ^ uVar4) >> 10;
    if (uVar4 == 0) {
      uVar4 = 0x7384;
    }
    *(uint *)((longlong)local_res18 + 0x2c8) = uVar4;
  }
  return;
}



// FUNCTION 144e0a1f0 FUN_144e0a1f0 body=518 status=ok
// SIG undefined FUN_144e0a1f0(void)

undefined8 FUN_144e0a1f0(longlong param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  byte *pbVar5;
  longlong lVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  *(undefined8 **)(param_1 + 0x650) = (undefined8 *)(param_1 + 0x4b8);
  *(longlong *)(param_1 + 0x4b0) = param_1 + 0xb0;
  pbVar9 = param_2 + param_3;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(byte **)(param_1 + 0x4c0) = param_2;
  *(byte **)(param_1 + 0x4c8) = pbVar9;
  *(undefined8 *)(param_1 + 0x4b8) = param_2;
  if (param_2 < pbVar9) {
    pbVar7 = param_2 + 4;
    do {
      pbVar8 = pbVar7 + 1;
      piVar2 = *(int **)(param_1 + 0x4b0);
      pbVar5 = param_2 + 1;
      switch(*param_2) {
      case 1:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
      case 0xe:
      case 0xf:
      case 0x15:
      case 0x16:
      case 0x1e:
      case 0x1f:
        goto switchD_144e0a26d_caseD_1;
      default:
        bVar1 = *param_2;
        if (bVar1 < 0x20) {
          return 0xa0;
        }
        if (bVar1 < 0xf7) {
          iVar3 = bVar1 - 0x8b;
        }
        else {
          pbVar5 = param_2 + 2;
          pbVar8 = pbVar7 + 2;
          if (pbVar9 < pbVar5) {
            return 0xa0;
          }
          bVar1 = *param_2;
          if (bVar1 < 0xfb) {
            iVar3 = (param_2[1] - 0xf694) + (uint)bVar1 * 0x100;
          }
          else {
            iVar3 = ((uint)bVar1 * -0x100 - (uint)param_2[1]) + 0xfa94;
          }
        }
        break;
      case 0xc:
        if (pbVar9 <= pbVar5) {
          return 0xa0;
        }
        if (*pbVar5 != 7) {
          return 0xa0;
        }
        lVar4 = 4;
        goto LAB_144e0a35f;
      case 0xd:
        lVar4 = 2;
LAB_144e0a35f:
        lVar6 = (longlong)*(int *)(&UNK_149a0dc50 + lVar4 * 4);
        if ((longlong)piVar2 + (-0xb0 - param_1) >> 2 < lVar6) {
          return 0xa1;
        }
        if ((int)lVar4 != 2) {
          if ((int)lVar4 != 4) {
            return 0xa0;
          }
          *(undefined4 *)(param_1 + 0x58) = 1;
          *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + piVar2[-lVar6];
          *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + piVar2[1 - lVar6];
          *(int *)(param_1 + 0x40) = piVar2[2 - lVar6];
          *(int *)(param_1 + 0x44) = piVar2[3 - lVar6];
          return 0;
        }
        *(undefined4 *)(param_1 + 0x58) = 1;
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + piVar2[-lVar6];
        *(int *)(param_1 + 0x40) = piVar2[1 - lVar6];
        *(undefined4 *)(param_1 + 0x44) = 0;
        return 0;
      case 0xff:
        if (pbVar9 < pbVar8) {
          return 0xa0;
        }
        pbVar8 = pbVar7 + 5;
        bVar1 = *pbVar5;
        pbVar5 = param_2 + 5;
        iVar3 = CONCAT31(CONCAT21(CONCAT11(bVar1,param_2[2]),param_2[3]),param_2[4]);
        if (64000 < iVar3 + 32000U) {
          return 0xa0;
        }
      }
      if (0x3ff < (longlong)((longlong)piVar2 + (-0xb0 - param_1) & 0xfffffffffffffffcU)) {
        return 0xa0;
      }
      *piVar2 = iVar3 << 0x10;
      *(int **)(param_1 + 0x4b0) = piVar2 + 1;
      param_2 = pbVar5;
      pbVar7 = pbVar8;
      if (pbVar9 <= pbVar5) {
        return 0xa0;
      }
    } while( true );
  }
switchD_144e0a26d_caseD_1:
  return 0xa0;
}



// FUNCTION 144e0a510 FUN_144e0a510 body=221 status=ok
// SIG undefined FUN_144e0a510(void)

undefined8
FUN_144e0a510(void *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined4 param_8,
             undefined8 param_9)

{
  longlong lVar1;
  undefined8 uVar2;
  
  memset(param_1,0,0x740);
  lVar1 = FUN_144b57b20(*(undefined8 *)(param_2 + 0x90),"postscript-cmaps",1);
  if (lVar1 == 0) {
    uVar2 = 7;
  }
  else {
    *(longlong *)((longlong)param_1 + 0x658) = lVar1;
    FUN_144e093b0(param_1,param_2,param_3,param_4,param_7);
    *(undefined4 *)((longlong)param_1 + 0x660) = *(undefined4 *)(param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 0x668) = param_5;
    *(undefined4 *)((longlong)param_1 + 0x6f0) = param_8;
    *(undefined8 *)((longlong)param_1 + 0x6e8) = param_6;
    *(undefined8 *)((longlong)param_1 + 0x6f8) = param_9;
    uVar2 = 0;
    *(code **)((longlong)param_1 + 0x700) = FUN_144e0a510;
    *(code **)((longlong)param_1 + 0x708) = FUN_144e0a5f0;
    *(code **)((longlong)param_1 + 0x710) = FUN_144e0a1f0;
    *(code **)((longlong)param_1 + 0x718) = FUN_144e07990;
  }
  return uVar2;
}



// FUNCTION 144e0a5f0 FUN_144e0a5f0 body=121 status=ok
// SIG undefined FUN_144e0a5f0(void)

void FUN_144e0a5f0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  lVar1 = param_1[2];
  uVar2 = *param_1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)param_1[4];
    uVar7 = puVar3[1];
    *(undefined8 *)(lVar1 + 0x98) = *puVar3;
    *(undefined8 *)(lVar1 + 0xa0) = uVar7;
    uVar4 = *(undefined4 *)((longlong)puVar3 + 0x14);
    uVar5 = *(undefined4 *)(puVar3 + 3);
    uVar6 = *(undefined4 *)((longlong)puVar3 + 0x1c);
    *(undefined4 *)(lVar1 + 0xa8) = *(undefined4 *)(puVar3 + 2);
    *(undefined4 *)(lVar1 + 0xac) = uVar4;
    *(undefined4 *)(lVar1 + 0xb0) = uVar5;
    *(undefined4 *)(lVar1 + 0xb4) = uVar6;
    *(undefined8 *)(lVar1 + 0xb8) = puVar3[4];
  }
  if ((code *)param_1[0xe7] != (code *)0x0) {
    (*(code *)param_1[0xe7])(param_1[0xe6]);
    FUN_144b56350(uVar2,param_1[0xe6]);
    param_1[0xe6] = 0;
  }
  return;
}



// FUNCTION 144e0a670 FUN_144e0a670 body=118 status=ok
// SIG undefined FUN_144e0a670(void)

int FUN_144e0a670(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int local_18 [4];
  
  puVar1 = (undefined8 *)FUN_144b560d0(param_2,0x20,local_18);
  if (local_18[0] == 0) {
    puVar1[1] = param_3;
    *puVar1 = param_3;
    puVar1[2] = param_4;
    *(undefined4 *)(puVar1 + 3) = 2;
    param_1[1] = puVar1;
    local_18[0] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = param_2;
  }
  return local_18[0];
}



// FUNCTION 144e0a6f0 FUN_144e0a6f0 body=35 status=ok
// SIG undefined FUN_144e0a6f0(void)

void FUN_144e0a6f0(undefined8 *param_1)

{
  FUN_144b56350(*param_1,param_1[1]);
  param_1[1] = 0;
  return;
}



// FUNCTION 144e0a720 FUN_144e0a720 body=747 status=ok
// SIG undefined FUN_144e0a720(void)

void FUN_144e0a720(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *_Str1;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98 [2];
  uint local_90;
  undefined4 local_88 [2];
  undefined4 local_80;
  undefined4 local_78 [2];
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar1 = (undefined1 *)param_1[2];
  uVar2 = *param_1;
  if (puVar1 != (undefined1 *)0x0) {
    plVar7 = (longlong *)param_1[1];
    lVar8 = 0;
    while( true ) {
      if ((int)plVar7[3] < 2) {
        FUN_144e0b2c0(plVar7);
      }
      *(undefined4 *)(plVar7 + 3) = 0;
      _Str1 = (char *)FUN_144e0b230(plVar7);
      if (_Str1 != (char *)0x0) break;
      lVar5 = lVar8;
      if ((2 < (int)plVar7[3]) || ((int)plVar7[3] < 2)) goto LAB_144e0a7af;
    }
    lVar5 = (*plVar7 - (longlong)_Str1) + -1;
LAB_144e0a7af:
    if ((_Str1 != (char *)0x0) &&
       ((lVar5 == 0x10 && (iVar3 = strncmp(_Str1,"StartFontMetrics",0x10), iVar3 == 0)))) {
switchD_144e0a858_caseD_1:
      plVar7 = (longlong *)param_1[1];
      while( true ) {
        if ((int)plVar7[3] < 2) {
          FUN_144e0b2c0(plVar7);
        }
        *(undefined4 *)(plVar7 + 3) = 0;
        lVar5 = FUN_144e0b230(plVar7);
        if (lVar5 != 0) break;
        lVar6 = lVar8;
        if ((2 < (int)plVar7[3]) || ((int)plVar7[3] < 2)) goto LAB_144e0a833;
      }
      lVar6 = (*plVar7 - lVar5) + -1;
LAB_144e0a833:
      if (lVar5 != 0) goto code_r0x000144e0a838;
      goto LAB_144e0a888;
    }
  }
LAB_144e0a8c5:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_b8);
code_r0x000144e0a838:
  uVar4 = FUN_144e0b330(lVar5,lVar6);
  switch(uVar4) {
  case 0:
    local_78[0] = 2;
    iVar3 = FUN_144e0aa80(param_1,local_78,1);
    if (iVar3 == 1) {
      *(undefined4 *)(puVar1 + 0x14) = local_70;
      goto switchD_144e0a858_caseD_1;
    }
    break;
  default:
    goto switchD_144e0a858_caseD_1;
  case 0xe:
    local_78[0] = 2;
    iVar3 = FUN_144e0aa80(param_1,local_78,1);
    if (iVar3 == 1) {
      *(undefined4 *)(puVar1 + 0x18) = local_70;
      goto switchD_144e0a858_caseD_1;
    }
    break;
  case 0x14:
    goto switchD_144e0a858_caseD_14;
  case 0x1a:
    local_78[0] = 2;
    local_68 = 2;
    local_58 = 2;
    local_48 = 2;
    iVar3 = FUN_144e0aa80(param_1,local_78,4);
    if (iVar3 == 4) {
      *(undefined4 *)(puVar1 + 4) = local_70;
      *(undefined4 *)(puVar1 + 8) = local_60;
      *(undefined4 *)(puVar1 + 0xc) = local_50;
      *(undefined4 *)(puVar1 + 0x10) = local_40;
      goto switchD_144e0a858_caseD_1;
    }
    break;
  case 0x1e:
    local_78[0] = 4;
    iVar3 = FUN_144e0aa80(param_1,local_78,1);
    if (iVar3 == 1) {
      *puVar1 = (undefined1)local_70;
      goto switchD_144e0a858_caseD_1;
    }
    break;
  case 0x28:
    local_98[0] = 3;
    iVar3 = FUN_144e0aa80(param_1,local_98,1);
    if ((iVar3 == 1) && ((local_90 & 0xfffffffd) == 0)) goto switchD_144e0a858_caseD_1;
    break;
  case 0x2d:
    local_88[0] = 3;
    iVar3 = FUN_144e0aa80(param_1,local_88,1);
    if (iVar3 == 1) {
      iVar3 = FUN_144e0bbb0(param_1,local_80,0x11);
      if (iVar3 != 0) goto LAB_144e0a8c5;
      goto switchD_144e0a858_caseD_1;
    }
    break;
  case 0x31:
    iVar3 = FUN_144e0b950(param_1);
    if (iVar3 == 0) goto switchD_144e0a858_caseD_14;
  }
LAB_144e0a888:
  FUN_144b56350(uVar2,*(undefined8 *)(puVar1 + 0x20));
  *(undefined8 *)(puVar1 + 0x20) = 0;
  *(undefined4 *)(puVar1 + 0x28) = 0;
  FUN_144b56350(uVar2,*(undefined8 *)(puVar1 + 0x30));
  *(undefined8 *)(puVar1 + 0x30) = 0;
  *(undefined4 *)(puVar1 + 0x38) = 0;
  *puVar1 = 0;
  goto LAB_144e0a8c5;
switchD_144e0a858_caseD_14:
  goto LAB_144e0a8c5;
}



// FUNCTION 144e0aa80 FUN_144e0aa80 body=320 status=ok
// SIG undefined FUN_144e0aa80(void)

ulonglong FUN_144e0aa80(longlong param_1,uint *param_2,int param_3)

{
  byte bVar1;
  longlong *plVar2;
  byte *pbVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  IMAGE_DOS_HEADER *pIVar7;
  uint uVar8;
  
  plVar2 = *(longlong **)(param_1 + 8);
  if (5 < param_3) {
    return 0;
  }
  uVar8 = 0;
  if (0 < param_3) {
    lVar5 = 0;
    do {
      pIVar7 = &IMAGE_DOS_HEADER_140000000;
      if (*param_2 == 0) {
        FUN_144e0b1b0();
        if ((int)plVar2[3] < 2) {
          lVar6 = *plVar2 + -1;
          while (pbVar3 = (byte *)*plVar2, pbVar3 < (byte *)plVar2[2]) {
            bVar1 = *pbVar3;
            *plVar2 = (longlong)(pbVar3 + 1);
            if ((bVar1 == 0xd) || (bVar1 == 10)) {
              *(undefined4 *)(plVar2 + 3) = 2;
              goto LAB_144e0ab55;
            }
            if ((bVar1 == 0xffffffff) || (bVar1 == 0x1a)) break;
          }
          *(undefined4 *)(plVar2 + 3) = 3;
        }
        else {
          lVar6 = 0;
        }
      }
      else {
        lVar6 = FUN_144e0b230(plVar2);
        pIVar7 = &IMAGE_DOS_HEADER_140000000;
      }
LAB_144e0ab55:
      if (lVar6 == 0) break;
      if (*param_2 < 6) {
                    /* WARNING: Could not recover jumptable at 0x000144e0ab7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*(code *)(pIVar7->e_magic +
                          *(uint *)(pIVar7[0xa67d6].e_res2_10_ + (longlong)(int)*param_2 * 2 + -2)))
                          (pIVar7->e_magic +
                           *(uint *)(pIVar7[0xa67d6].e_res2_10_ + (longlong)(int)*param_2 * 2 + -2))
        ;
        return uVar4;
      }
      uVar8 = uVar8 + 1;
      lVar5 = lVar5 + 1;
      param_2 = param_2 + 4;
    } while (lVar5 < param_3);
  }
  return (ulonglong)uVar8;
}



// FUNCTION 144e0ac90 FUN_144e0ac90 body=284 status=ok
// SIG undefined FUN_144e0ac90(void)

int FUN_144e0ac90(undefined8 *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  bool bVar7;
  
  pbVar5 = (byte *)*param_1;
  iVar6 = 0;
  bVar7 = false;
  bVar3 = false;
  if ((param_2 <= pbVar5) || (0x22 < param_3 - 2U)) {
    return 0;
  }
  if ((*pbVar5 - 0x2b & 0xfd) == 0) {
    bVar7 = *pbVar5 == 0x2d;
    pbVar5 = pbVar5 + 1;
    if (pbVar5 == param_2) {
      return 0;
    }
    if ((*pbVar5 - 0x2b & 0xfd) == 0) {
      return 0;
    }
  }
  for (; pbVar5 < param_2; pbVar5 = pbVar5 + 1) {
    bVar1 = *pbVar5;
    if ((((bVar1 < 0x21) && ((0x100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) != 0)) ||
        (0x7f < bVar1)) ||
       ((cVar2 = (&DAT_149a0dab0)[bVar1 & 0x7f], cVar2 < '\0' || (param_3 <= cVar2)))) break;
    iVar4 = (int)(0x7fffffff / (longlong)param_3);
    if ((iVar4 < iVar6) || ((iVar6 == iVar4 && ((char)(0x7fffffff % (longlong)param_3) < cVar2)))) {
      bVar3 = true;
    }
    else {
      iVar6 = iVar6 * param_3 + (int)cVar2;
    }
  }
  *param_1 = pbVar5;
  if (bVar3) {
    iVar6 = 0x7fffffff;
  }
  iVar4 = -iVar6;
  if (!bVar7) {
    iVar4 = iVar6;
  }
  return iVar4;
}



// FUNCTION 144e0adb0 FUN_144e0adb0 body=140 status=ok
// SIG undefined FUN_144e0adb0(void)

ulonglong FUN_144e0adb0(undefined8 *param_1,char *param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  char *local_res8;
  
  pcVar2 = (char *)*param_1;
  local_res8 = pcVar2;
  uVar1 = FUN_144e0ac90(&local_res8,param_2,10);
  if (local_res8 == pcVar2) {
    return 0;
  }
  if ((local_res8 < param_2) && (*local_res8 == '#')) {
    pcVar2 = local_res8 + 1;
    local_res8 = pcVar2;
    uVar1 = FUN_144e0ac90(&local_res8,param_2,uVar1 & 0xffffffff);
    if (local_res8 == pcVar2) {
      return 0;
    }
  }
  *param_1 = local_res8;
  return uVar1;
}



// FUNCTION 144e0ae40 FUN_144e0ae40 body=645 status=ok
// SIG undefined FUN_144e0ae40(void)

/* WARNING: Type propagation algorithm not settling */

int FUN_144e0ae40(ulonglong *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  byte *pbVar9;
  bool bVar10;
  byte *local_res20;
  
  iVar4 = 0;
  pbVar9 = (byte *)*param_1;
  bVar2 = false;
  bVar3 = false;
  bVar10 = false;
  iVar8 = 1;
  iVar6 = 0;
  if (param_2 <= pbVar9) {
    return 0;
  }
  bVar7 = *pbVar9;
  if ((bVar7 - 0x2b & 0xfd) == 0) {
    bVar10 = bVar7 == 0x2d;
    pbVar9 = pbVar9 + 1;
    if (pbVar9 == param_2) {
      return 0;
    }
    bVar7 = *pbVar9;
    if ((bVar7 - 0x2b & 0xfd) == 0) {
      return 0;
    }
  }
  local_res20 = pbVar9;
  if (bVar7 != 0x2e) {
    iVar4 = FUN_144e0adb0(&local_res20,param_2);
    if (local_res20 == pbVar9) {
      return 0;
    }
    if (iVar4 < 0x8000) {
      iVar4 = iVar4 << 0x10;
    }
    else {
      bVar2 = true;
    }
  }
  pbVar9 = local_res20;
  if ((local_res20 < param_2) && (*local_res20 == 0x2e)) {
    while (pbVar9 = pbVar9 + 1, pbVar9 < param_2) {
      bVar7 = *pbVar9;
      if ((((bVar7 < 0x21) && ((0x100003601U >> ((ulonglong)bVar7 & 0x3f) & 1) != 0)) ||
          (0x7f < bVar7)) || (9 < (byte)(&DAT_149a0dab0)[bVar7 & 0x7f])) break;
      if ((iVar8 < 0xccccccc) && (iVar6 < 0xccccccc)) {
        iVar6 = (int)(char)(&DAT_149a0dab0)[bVar7 & 0x7f] + iVar6 * 10;
        if ((iVar4 == 0) && (0 < param_3)) {
          param_3 = param_3 + -1;
        }
        else {
          iVar8 = iVar8 * 10;
        }
      }
    }
  }
  pbVar1 = pbVar9 + 1;
  if ((pbVar1 < param_2) && ((*pbVar9 + 0xbb & 0xdf) == 0)) {
    local_res20 = pbVar1;
    iVar5 = FUN_144e0adb0(&local_res20,param_2);
    if (pbVar1 == local_res20) {
      return 0;
    }
    pbVar9 = local_res20;
    if (iVar5 < 0x3e9) {
      if (iVar5 < -1000) {
        bVar3 = true;
      }
      else {
        param_3 = param_3 + iVar5;
      }
    }
    else {
      bVar2 = true;
    }
  }
  *param_1 = (ulonglong)pbVar9;
  if ((iVar4 == 0) && (iVar6 == 0)) {
    return 0;
  }
  if (bVar2) {
LAB_144e0b09f:
    iVar4 = 0x7fffffff;
  }
  else {
    if (bVar3) {
      return 0;
    }
    for (; 0 < param_3; param_3 = param_3 + -1) {
      if (0xccccccb < iVar4) goto LAB_144e0b09f;
      iVar4 = iVar4 * 10;
      if (iVar6 < 0xccccccc) {
        iVar6 = iVar6 * 10;
      }
      else {
        if (iVar8 == 1) goto LAB_144e0b09f;
        iVar8 = iVar8 / 10;
      }
    }
    for (; param_3 < 0; param_3 = param_3 + 1) {
      iVar4 = iVar4 / 10;
      if (iVar8 < 0xccccccc) {
        iVar8 = iVar8 * 10;
      }
      else {
        iVar6 = iVar6 / 10;
      }
      if ((iVar4 == 0) && (iVar6 == 0)) {
        return 0;
      }
    }
    if (iVar6 != 0) {
      iVar6 = FUN_144b555e0(iVar6,iVar8);
      iVar4 = iVar4 + iVar6;
    }
  }
  if (!bVar10) {
    return iVar4;
  }
  return -iVar4;
}



// FUNCTION 144e0b0d0 FUN_144e0b0d0 body=220 status=ok
// SIG undefined FUN_144e0b0d0(void)

ulonglong FUN_144e0b0d0(ulonglong *param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_1;
  uVar4 = 0;
  uVar6 = 1;
  if (param_2 <= uVar2) {
    return 0;
  }
  uVar3 = (ulonglong)(uint)((int)param_2 - (int)uVar2);
  uVar5 = param_4 * 2;
  if (uVar3 < (ulonglong)(param_4 * 2)) {
    uVar5 = uVar3;
  }
  uVar3 = uVar4;
  if (uVar5 != 0) {
    do {
      bVar1 = *(byte *)(uVar4 + uVar2);
      uVar7 = uVar3;
      if ((0x20 < bVar1) || ((0x100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
        if ((0x7f < bVar1) || (0xf < (uint)(int)(char)(&DAT_149a0dab0)[bVar1 & 0x7f])) break;
        uVar6 = uVar6 << 4 | (int)(char)(&DAT_149a0dab0)[bVar1 & 0x7f];
        if ((uVar6 >> 8 & 1) != 0) {
          uVar7 = (ulonglong)((int)uVar3 + 1);
          *(char *)(uVar3 + param_3) = (char)uVar6;
          uVar6 = 1;
        }
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
      uVar3 = uVar7;
    } while (uVar4 < uVar5);
    uVar3 = uVar7;
    if (uVar6 != 1) {
      uVar3 = (ulonglong)((int)uVar7 + 1);
      *(char *)(uVar7 + param_3) = (char)uVar6 << 4;
    }
  }
  *param_1 = uVar4 + uVar2;
  return uVar3;
}



// FUNCTION 144e0b1b0 FUN_144e0b1b0 body=114 status=ok
// SIG undefined FUN_144e0b1b0(void)

uint FUN_144e0b1b0(undefined8 *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (0 < *(int *)(param_1 + 3)) {
    return 0x3b;
  }
  do {
    pbVar2 = (byte *)*param_1;
    if ((byte *)param_1[2] <= pbVar2) {
      uVar3 = 0xffffffff;
      goto LAB_144e0b218;
    }
    bVar1 = *pbVar2;
    uVar3 = (uint)bVar1;
    *param_1 = pbVar2 + 1;
  } while ((bVar1 == 0x20) || (bVar1 == 9));
  uVar4 = (uint)bVar1;
  uVar5 = (uint)bVar1;
  if ((uVar4 == 0xd) || (uVar4 == 10)) {
    *(undefined4 *)(param_1 + 3) = 2;
    return uVar5;
  }
  if (uVar4 == 0x3b) {
    *(undefined4 *)(param_1 + 3) = 1;
    return uVar5;
  }
  if (uVar4 == 0xffffffff) {
LAB_144e0b218:
    *(undefined4 *)(param_1 + 3) = 3;
  }
  else if (uVar5 == 0x1a) {
    *(undefined4 *)(param_1 + 3) = 3;
    return 0x1a;
  }
  return uVar3;
}



// FUNCTION 144e0b230 FUN_144e0b230 body=136 status=ok
// SIG undefined FUN_144e0b230(void)

longlong FUN_144e0b230(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  uint uVar4;
  
  FUN_144e0b1b0();
  if (0 < (int)param_1[3]) {
    return 0;
  }
  lVar2 = *param_1;
  while (pbVar3 = (byte *)*param_1, pbVar3 < (byte *)param_1[2]) {
    bVar1 = *pbVar3;
    *param_1 = (longlong)(pbVar3 + 1);
    if ((bVar1 == 0x20) || (bVar1 == 9)) goto LAB_144e0b28d;
    uVar4 = (uint)bVar1;
    if ((uVar4 == 0xd) || (uVar4 == 10)) {
      *(undefined4 *)(param_1 + 3) = 2;
      return lVar2 + -1;
    }
    if (uVar4 == 0x3b) {
      *(undefined4 *)(param_1 + 3) = 1;
      return lVar2 + -1;
    }
    if ((uVar4 == 0xffffffff) || (bVar1 == 0x1a)) break;
  }
  *(undefined4 *)(param_1 + 3) = 3;
LAB_144e0b28d:
  return lVar2 + -1;
}



// FUNCTION 144e0b2c0 FUN_144e0b2c0 body=104 status=ok
// SIG undefined FUN_144e0b2c0(void)

longlong FUN_144e0b2c0(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  
  FUN_144e0b1b0();
  if (1 < (int)param_1[3]) {
    return 0;
  }
  lVar2 = *param_1;
  while (pbVar3 = (byte *)*param_1, pbVar3 < (byte *)param_1[2]) {
    bVar1 = *pbVar3;
    *param_1 = (longlong)(pbVar3 + 1);
    if ((bVar1 == 0xd) || (bVar1 == 10)) {
      *(undefined4 *)(param_1 + 3) = 2;
      return lVar2 + -1;
    }
    if ((bVar1 == 0xffffffff) || (bVar1 == 0x1a)) break;
  }
  *(undefined4 *)(param_1 + 3) = 3;
  return lVar2 + -1;
}



// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1452d3410 FUN_1452d3410 body=230 status=ok
// SIG undefined FUN_1452d3410(void)

ulonglong FUN_1452d3410(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x24) != '\0') {
    *param_4 = '\x01';
    return 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x24) == '\0') {
    uVar5 = FUN_144f13d60();
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if (*param_4 == (char)uVar5) {
      return uVar5;
    }
  }
  *param_4 = '\0';
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8);
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8) = param_2;
  if (*plVar1 == 0) {
    uVar4 = FUN_1452d47f0(param_1,param_2);
    uVar5 = (ulonglong)uVar4;
    if (uVar4 == 0) goto LAB_1452d3480;
  }
  else {
LAB_1452d3480:
    lVar6 = FUN_144f15e70(param_2,0,1);
    if (lVar6 < 1) {
      FUN_144f14b70(param_2,"Proxy CONNECT aborted due to timeout");
      uVar5 = 0x1c;
    }
    else {
      uVar4 = FUN_1452d54c0(param_1,param_2,plVar1 + 0x12);
      uVar5 = (ulonglong)uVar4;
      if ((uVar4 == 0) && ((int)plVar1[0x26] == 3)) {
        cVar3 = '\x01';
        goto LAB_1452d34a8;
      }
    }
  }
  cVar3 = '\0';
LAB_1452d34a8:
  *param_4 = cVar3;
  *(char *)(param_1 + 0x24) = cVar3;
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8) = uVar2;
  return uVar5;
}



// FUNCTION 1452d3500 FUN_1452d3500 body=92 status=ok
// SIG undefined FUN_1452d3500(void)

void FUN_1452d3500(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 8);
    *(undefined8 *)(lVar1 + 8) = param_2;
    FUN_1452d3fc0();
    *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8) = uVar2;
  }
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001452d3552. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2);
    return;
  }
  return;
}



// FUNCTION 1452d3560 FUN_1452d3560 body=58 status=ok
// SIG undefined FUN_1452d3560(void)

void FUN_1452d3560(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1452d3fc0(lVar1);
    (*(code *)PTR_free_14c6d9f28)(lVar1);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



// FUNCTION 1452d35a0 FUN_1452d35a0 body=132 status=ok
// SIG undefined FUN_1452d35a0(void)

bool FUN_1452d35a0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    cVar3 = FUN_1452e7360(lVar1 + 0x10);
    if (cVar3 == '\0') {
      return true;
    }
    if ((*(int *)(lVar1 + 0x130) == 3) && (cVar3 = FUN_1452e7360(lVar1 + 0x98), cVar3 == '\0')) {
      return true;
    }
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x38))(plVar2,param_2);
  }
  return cVar3 != '\0';
}



// FUNCTION 1452d3630 FUN_1452d3630 body=114 status=ok
// SIG undefined FUN_1452d3630(void)

undefined4 FUN_1452d3630(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  uVar2 = puVar1[1];
  puVar1[1] = param_2;
  uVar4 = FUN_144f13ec0();
  *param_3 = uVar4;
  iVar3 = FUN_1452e0140(*puVar1);
  uVar5 = 1;
  if (iVar3 != 0) {
    iVar3 = FUN_1452e0410(*puVar1);
    uVar5 = 1;
    if (iVar3 != 0) {
      uVar5 = 0x10001;
    }
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8) = uVar2;
  return uVar5;
}



// FUNCTION 1452d36b0 FUN_1452d36b0 body=850 status=ok
// SIG undefined FUN_1452d36b0(void)

longlong FUN_1452d36b0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                      int *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar10;
  longlong lVar9;
  undefined8 in_stack_ffffffffffffffb0;
  uint uVar12;
  longlong lVar11;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  uVar12 = (uint)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  lVar8 = -1;
  if (*(int *)(puVar1 + 0x26) != 3) {
    *param_5 = 0x38;
    return -1;
  }
  uVar2 = puVar1[1];
  puVar1[1] = param_2;
  cVar4 = FUN_1452e7360(puVar1 + 0x13);
  if (cVar4 != '\0') {
    iVar5 = FUN_1452d4c70(param_1,param_2);
    *param_5 = iVar5;
    if (iVar5 != 0) goto LAB_1452d3984;
  }
  lVar3 = *(longlong *)(param_1 + 0x10);
  *param_5 = 0x51;
  cVar4 = FUN_1452e7360(lVar3 + 0x98);
  if (cVar4 == '\0') {
    lVar8 = FUN_1452e74a0(lVar3 + 0x98,param_3,param_4,param_5);
    if ((-1 < lVar8) && (lVar8 == 0)) {
      *param_5 = 0x51;
      lVar8 = -1;
    }
  }
  else if (*(char *)(lVar3 + 0x135) == '\0') {
    if (((*(char *)(lVar3 + 0x136) != '\0') ||
        ((*(char *)(lVar3 + 0x140) != '\0' && (cVar4 = FUN_1452e7360(lVar3 + 0x10), cVar4 != '\0')))
        ) || ((*(char *)(lVar3 + 0x141) != '\0' &&
              (*(int *)(lVar3 + 0x13c) < *(int *)(lVar3 + 0x120))))) goto LAB_1452d38b9;
  }
  else {
    lVar9 = *(longlong *)(param_1 + 0x10);
    iVar5 = *(int *)(lVar9 + 0x124);
    if (iVar5 == 7) {
      FUN_144f14c60(param_2,param_1,"[%d] REFUSED_STREAM, try again on a new connection",
                    *(undefined4 *)(lVar9 + 0x120));
      FUN_144f16220(*(undefined8 *)(param_1 + 0x18),1);
LAB_1452d38b9:
      lVar8 = -1;
      *param_5 = 0x38;
    }
    else if (iVar5 == 0) {
      if (*(char *)(lVar9 + 0x136) != '\0') {
        FUN_144f14b70(param_2,"HTTP/2 stream %u was reset",*(undefined4 *)(lVar9 + 0x120));
        goto LAB_1452d38b9;
      }
      lVar8 = 0;
      *param_5 = 0;
      FUN_144f14c60(param_2,param_1,"[%d] handle_tunnel_close -> %zd, %d",
                    *(undefined4 *)(lVar9 + 0x120),0,(ulonglong)uVar12 << 0x20);
    }
    else {
      uVar7 = FUN_1452e6cd0(iVar5);
      FUN_144f14b70(param_2,"HTTP/2 stream %u was not closed cleanly: %s (err %u)",
                    *(undefined4 *)(lVar9 + 0x120),uVar7,CONCAT44(uVar10,iVar5));
      *param_5 = 0x5c;
      lVar8 = -1;
    }
  }
  iVar5 = *param_5;
  lVar9 = param_4;
  lVar11 = lVar8;
  FUN_144f14c60(param_2,param_1,"[%d] tunnel_recv(len=%zu) -> %zd, %d",
                *(undefined4 *)(lVar3 + 0x120),param_4,lVar8,iVar5);
  if (0 < lVar8) {
    lVar9 = lVar8;
    FUN_144f14c60(param_2,param_1,"[%d] increase window by %zd",*(undefined4 *)(puVar1 + 0x24),lVar8
                  ,lVar11,iVar5);
    FUN_1452e04d0(*puVar1,*(undefined4 *)(puVar1 + 0x24),lVar8);
  }
  iVar6 = FUN_1452d4df0(param_1,param_2);
  if (iVar6 == 0x51) {
    FUN_144f14c60(param_2,param_1,"[%d] egress blocked, DRAIN",*(undefined4 *)(puVar1 + 0x24),lVar9,
                  lVar11,iVar5);
    FUN_1452d4050(param_1,param_2,puVar1 + 0x12);
  }
  else if (iVar6 != 0) {
    *param_5 = iVar6;
    lVar8 = -1;
  }
LAB_1452d3984:
  cVar4 = FUN_1452e7360(puVar1 + 0x13);
  if ((cVar4 == '\0') && ((-1 < lVar8 || (*param_5 == 0x51)))) {
    FUN_1452d4050(param_1,param_2,puVar1 + 0x12);
  }
  FUN_144f14c60(param_2,param_1,"[%d] cf_recv(len=%zu) -> %zd %d",*(undefined4 *)(puVar1 + 0x24),
                param_4,lVar8,*param_5);
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8) = uVar2;
  return lVar8;
}



// FUNCTION 1452d3a10 FUN_1452d3a10 body=930 status=ok
// SIG undefined FUN_1452d3a10(void)

ulonglong FUN_1452d3a10(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                       int *param_5)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte bVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 in_stack_ffffffffffffff88;
  ulonglong uVar14;
  undefined8 in_stack_ffffffffffffff90;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar15;
  undefined8 in_stack_ffffffffffffffa0;
  undefined4 uVar16;
  
  uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffffa0 >> 0x20);
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if (*(int *)(puVar2 + 0x26) != 3) {
    *param_5 = 0x37;
    return 0xffffffffffffffff;
  }
  uVar3 = puVar2[1];
  puVar1 = puVar2 + 0x25;
  puVar2[1] = param_2;
  if (*(char *)((longlong)puVar2 + 0x135) == '\0') {
    uVar13 = *puVar1;
    if (uVar13 == 0) {
      uVar13 = FUN_1452e73b0(puVar2 + 0x1b,param_3,param_4,param_5);
      if ((longlong)uVar13 < 0) {
        if (*param_5 != 0x51) goto LAB_1452d3c81;
        uVar13 = 0;
      }
    }
    else {
      if (param_4 < uVar13) {
        FUN_144f14b70(param_2,"HTTP/2 proxy, send again with decreased length");
        *param_5 = 0x10;
        goto LAB_1452d3c7a;
      }
      *puVar1 = 0;
      *param_5 = 0;
    }
    cVar4 = FUN_1452e7360(puVar2 + 0x1b);
    if (cVar4 == '\0') {
      uVar5 = FUN_1452e0090(*puVar2,*(undefined4 *)(puVar2 + 0x24));
      iVar6 = FUN_1452e0660(uVar5);
      if (iVar6 != 0) {
        *param_5 = 0x37;
        goto LAB_1452d3c7a;
      }
    }
    iVar6 = FUN_1452d4c70(param_1,param_2);
    if (iVar6 == 0) {
      iVar6 = FUN_1452d4df0(param_1,param_2);
      if (iVar6 == 0x51) {
LAB_1452d3bef:
        iVar6 = FUN_1452e03d0(*puVar2,*(undefined4 *)(puVar2 + 0x24));
        lVar12 = (longlong)iVar6;
        if (iVar6 == 0) {
          FUN_144f14c60(param_2,param_1,"[%d] remote flow window is exhausted",
                        *(undefined4 *)(puVar2 + 0x24));
        }
        *puVar1 = uVar13;
        uVar7 = FUN_1452e0410(*puVar2);
        uVar14 = param_4;
        FUN_144f14c60(param_2,param_1,"[%d] cf_send(len=%zu) BLOCK: win %u/%zu blocked_len=%zu",
                      *(undefined4 *)(puVar2 + 0x24),param_4,CONCAT44(uVar8,uVar7),lVar12,uVar13);
        uVar15 = (undefined4)((ulonglong)lVar12 >> 0x20);
        uVar16 = (undefined4)(uVar13 >> 0x20);
        uVar7 = (undefined4)(uVar14 >> 0x20);
        FUN_1452d4050(param_1,param_2,puVar2 + 0x12);
        *param_5 = 0x51;
      }
      else if (iVar6 == 0) {
        cVar4 = FUN_1452e7360(puVar2 + 0x1b);
        if (cVar4 == '\0') goto LAB_1452d3bef;
        iVar6 = FUN_1452d4b00(puVar2);
        if (iVar6 == 0) goto LAB_1452d3c81;
        if (*(char *)((longlong)puVar2 + 0x135) == '\0') {
          FUN_144f14c60(param_2,param_1,"[0] send: nothing to do in this session");
          *param_5 = 0x10;
        }
        else {
          *param_5 = 0x37;
        }
      }
      else {
        *param_5 = iVar6;
      }
    }
    else {
      *param_5 = iVar6;
    }
  }
  else {
    *param_5 = 0x37;
  }
LAB_1452d3c7a:
  uVar13 = 0xffffffffffffffff;
LAB_1452d3c81:
  cVar4 = FUN_1452e7360(puVar2 + 0x13);
  if ((cVar4 == '\0') && ((-1 < (longlong)uVar13 || (*param_5 == 0x51)))) {
    bVar11 = 1;
    if ((*(char *)((longlong)puVar2 + 0x135) == '\0') &&
       (*(char *)((longlong)puVar2 + 0x136) == '\0')) {
      bVar11 = 1;
      if (*puVar1 != 0) {
        bVar11 = 3;
      }
    }
    if (*(byte *)(param_2 + 0x13c3) != bVar11) {
      FUN_144f14c60(param_2,param_1,"[%d] DRAIN dselect_bits=%x",*(undefined4 *)(puVar2 + 0x24),
                    CONCAT44(uVar7,(uint)bVar11));
      *(byte *)(param_2 + 0x13c3) = bVar11;
      FUN_144bba820(param_2,0,8);
    }
  }
  uVar9 = FUN_1452e7330(puVar2 + 10);
  uVar10 = FUN_1452e7330(puVar2 + 0x1b);
  uVar7 = FUN_1452e0410(*puVar2);
  uVar8 = FUN_1452e03d0(*puVar2,*(undefined4 *)(puVar2 + 0x24));
  FUN_144f14c60(param_2,param_1,
                "[%d] cf_send(len=%zu) -> %zd, %d, h2 windows %d-%d (stream-conn), buffers %zu-%zu (stream-conn)"
                ,*(undefined4 *)(puVar2 + 0x24),param_4,uVar13,CONCAT44(uVar15,*param_5),
                CONCAT44(uVar16,uVar8),uVar7,uVar10,uVar9);
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8) = uVar3;
  return uVar13;
}



// FUNCTION 1452d3dc0 FUN_1452d3dc0 body=266 status=ok
// SIG undefined FUN_1452d3dc0(void)

undefined1 FUN_1452d3dc0(longlong param_1,longlong param_2,char *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  bool bVar9;
  int local_res8 [2];
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  uVar8 = 0;
  lVar2 = plVar1[1];
  plVar1[1] = param_2;
  if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x10);
    bVar9 = true;
    *param_3 = '\0';
    if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
      cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x58))();
      if (cVar4 != '\0') {
        if (*param_3 != '\0') {
          *param_3 = '\0';
          lVar6 = FUN_1452e77d0(lVar3 + 0x10,FUN_1452d40d0,param_1,local_res8);
          if (lVar6 == -1) {
            bVar9 = true;
            if (local_res8[0] != 0x51) {
              bVar9 = false;
            }
          }
          else {
            iVar5 = FUN_1452d4b40(param_1,param_2,local_res8);
            if (iVar5 < 0) {
              bVar9 = false;
            }
            else {
              iVar5 = FUN_1452d4b00(lVar3);
              bVar9 = iVar5 == 0;
            }
          }
        }
        if (bVar9) {
          uVar8 = 1;
          uVar7 = 1;
          goto LAB_1452d3e8a;
        }
      }
    }
  }
  uVar7 = 0;
LAB_1452d3e8a:
  FUN_144f14c60(param_2,param_1,"[0] conn alive -> %d, input_pending=%d",uVar8,*param_3);
  *(longlong *)(*(longlong *)(param_1 + 0x10) + 8) = lVar2;
  return uVar7;
}



// FUNCTION 1452d3ed0 FUN_1452d3ed0 body=159 status=ok
// SIG undefined FUN_1452d3ed0(void)

int FUN_1452d3ed0(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_res18 [2];
  
  local_res18[0] = 0;
  lVar2 = (*(code *)PTR_calloc_14c6d9f40)(0x148,1);
  if (lVar2 == 0) {
    return 0x1b;
  }
  iVar1 = FUN_144f13b40(local_res18,&PTR_s_H2_PROXY_14c732420,lVar2);
  if (iVar1 == 0) {
    FUN_144f13bd0(param_1,local_res18[0]);
    return 0;
  }
  FUN_1452d3fc0(lVar2);
  (*(code *)PTR_free_14c6d9f28)(lVar2);
  return iVar1;
}



// FUNCTION 1452d3f70 FUN_1452d3f70 body=69 status=ok
// SIG undefined FUN_1452d3f70(void)

void FUN_1452d3f70(undefined8 *param_1)

{
  FUN_144f21e10(*param_1);
  FUN_1452e72d0(param_1 + 1);
  FUN_1452e72d0(param_1 + 9);
  (*(code *)PTR_free_14c6d9f28)(param_1[0x11]);
  memset(param_1,0,0xa8);
  return;
}



// FUNCTION 1452d3fc0 FUN_1452d3fc0 body=143 status=ok
// SIG undefined FUN_1452d3fc0(void)

void FUN_1452d3fc0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  if (*param_1 != 0) {
    FUN_1452de080();
  }
  FUN_1452e72d0(param_1 + 2);
  FUN_1452e72d0(param_1 + 10);
  FUN_144f21e10(param_1[0x12]);
  FUN_1452e72d0(param_1 + 0x13);
  FUN_1452e72d0(param_1 + 0x1b);
  (*(code *)PTR_free_14c6d9f28)(param_1[0x23]);
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  memset(param_1,0,0x148);
  param_1[1] = lVar1;
  return;
}



// FUNCTION 1452d4050 FUN_1452d4050 body=125 status=ok
// SIG undefined FUN_1452d4050(void)

void FUN_1452d4050(undefined8 param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = '\x01';
  if ((*(char *)(param_3 + 0xa5) == '\0') && (*(char *)(param_3 + 0xa6) == '\0')) {
    cVar1 = '\x01';
    if (*(longlong *)(param_3 + 0x98) != 0) {
      cVar1 = '\x03';
    }
  }
  if (*(char *)(param_2 + 0x13c3) != cVar1) {
    FUN_144f14c60(param_2,param_1,"[%d] DRAIN dselect_bits=%x",*(undefined4 *)(param_3 + 0x90),cVar1
                 );
    *(char *)(param_2 + 0x13c3) = cVar1;
    FUN_144bba820(param_2,0,8);
  }
  return;
}



// FUNCTION 1452d40d0 FUN_1452d40d0 body=156 status=ok
// SIG undefined FUN_1452d40d0(void)

undefined8 FUN_1452d40d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8);
    uVar2 = FUN_144f13dc0(*(undefined8 *)(param_1 + 8),uVar1,param_2,param_3,param_4);
    FUN_144f14c60(uVar1,param_1,"[0] nw_in_reader(len=%zu) -> %zd, %d",param_3,uVar2,*param_4);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1452d4170 FUN_1452d4170 body=156 status=ok
// SIG undefined FUN_1452d4170(void)

undefined8 FUN_1452d4170(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8);
    uVar2 = FUN_144f13da0(*(undefined8 *)(param_1 + 8),uVar1,param_2,param_3,param_4);
    FUN_144f14c60(uVar1,param_1,"[0] nw_out_writer(len=%zu) -> %zd, %d",param_3,uVar2,*param_4);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1452d4210 FUN_1452d4210 body=131 status=ok
// SIG undefined FUN_1452d4210(void)

longlong FUN_1452d4210(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      longlong param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = param_5;
  plVar1 = (longlong *)(param_5 + 0x10);
  uVar2 = *(undefined8 *)(*plVar1 + 8);
  param_5._0_4_ = 0;
  lVar3 = FUN_1452e78d0(*plVar1 + 0x50,param_2,param_3,FUN_1452d4170,lVar3,&param_5);
  if (-1 < lVar3) {
    if (lVar3 == 0) {
      lVar3 = -0x1f8;
    }
    return lVar3;
  }
  if ((int)param_5 != 0x51) {
    FUN_144f14b70(uVar2,"Failed sending HTTP2 data");
    return -0x386;
  }
  return -0x1f8;
}



// FUNCTION 1452d42a0 FUN_1452d42a0 body=470 status=ok
// SIG undefined FUN_1452d42a0(void)

void FUN_1452d42a0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_158 [32];
  undefined1 *local_138;
  undefined1 local_128 [256];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar3 = param_3[2];
  iVar1 = *(int *)(param_2 + 8);
  lVar4 = *(longlong *)(lVar3 + 8);
  if (((lVar4 != 0) && (*(char *)(lVar4 + 0xacf) != '\0')) && (0 < *(int *)(*param_3 + 0xc))) {
    iVar5 = FUN_1452d4f10(param_2,local_128,0xff);
    if (0xff < (ulonglong)(longlong)iVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_144e2bb84();
    }
    uVar2 = *(undefined4 *)(param_2 + 8);
    local_138 = local_128;
    local_128[iVar5] = 0;
    FUN_144f14c60(lVar4,param_3,"[%d] <- %s",uVar2);
  }
  if (iVar1 == 0) {
    if (*(char *)(param_2 + 0xc) == '\x04') {
      if (((byte)*(uint *)(lVar4 + 0x154) & 10) == 10) {
        *(uint *)(lVar4 + 0x154) = *(uint *)(lVar4 + 0x154) & 0xfffffff7;
        FUN_1452d4050(param_3,lVar4,lVar3 + 0x90);
        FUN_144f14c60(lVar4,param_3,"[%d] un-holding after SETTINGS",0);
      }
    }
    else if (*(char *)(param_2 + 0xc) == '\a') {
      *(undefined1 *)(lVar3 + 0x141) = 1;
    }
  }
  else if (iVar1 == *(int *)(lVar3 + 0x120)) {
    if (*(char *)(param_2 + 0xc) == '\x01') {
      if (*(undefined4 **)(lVar3 + 0x90) != (undefined4 *)0x0) {
        local_138 = (undefined1 *)CONCAT44(local_138._4_4_,**(undefined4 **)(lVar3 + 0x90));
        FUN_144f14c60(lVar4,param_3,"[%d] got http status: %d",iVar1);
        if ((*(char *)(lVar3 + 0x134) == '\0') && (99 < **(int **)(lVar3 + 0x90) - 100U)) {
          *(undefined1 *)(lVar3 + 0x134) = 1;
        }
      }
    }
    else if ((*(char *)(param_2 + 0xc) == '\b') && (((byte)*(uint *)(lVar4 + 0x154) & 10) == 10)) {
      *(uint *)(lVar4 + 0x154) = *(uint *)(lVar4 + 0x154) & 0xfffffff7;
      FUN_144bba820(lVar4,0,8);
      FUN_144f14c60(lVar4,param_3,"[%d] unpausing after win update",iVar1);
    }
  }
  else {
    FUN_144f14c60(lVar4,param_3,"[%d] rcvd FRAME not for tunnel",iVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_158);
}



// FUNCTION 1452d4490 FUN_1452d4490 body=169 status=ok
// SIG undefined FUN_1452d4490(void)

void FUN_1452d4490(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  undefined1 local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((((param_3 != (longlong *)0x0) && (lVar2 = *(longlong *)(param_3[2] + 8), lVar2 != 0)) &&
      (*(char *)(lVar2 + 0xacf) != '\0')) && (0 < *(int *)(*param_3 + 0xc))) {
    iVar3 = FUN_1452d4f10(param_2,local_118,0xff);
    if (0xff < (ulonglong)(longlong)iVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_144e2bb84();
    }
    uVar1 = *(undefined4 *)(param_2 + 8);
    local_128 = local_118;
    local_118[iVar3] = 0;
    FUN_144f14c60(lVar2,param_3,"[%d] -> %s",uVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_148);
}



// FUNCTION 1452d4550 FUN_1452d4550 body=130 status=ok
// SIG undefined FUN_1452d4550(void)

undefined8 FUN_1452d4550(undefined8 param_1,int param_2,undefined4 param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_4 + 0x10);
  uVar2 = *(undefined8 *)(lVar1 + 8);
  if (param_2 == *(int *)(lVar1 + 0x120)) {
    uVar3 = FUN_1452e6cd0(param_3);
    FUN_144f14c60(uVar2,param_4,"[%d] proxy_h2_on_stream_close, %s (err %d)",param_2,uVar3,param_3);
    *(undefined1 *)(lVar1 + 0x135) = 1;
    *(undefined4 *)(lVar1 + 0x124) = param_3;
  }
  return 0;
}



// FUNCTION 1452d45e0 FUN_1452d45e0 body=430 status=ok
// SIG undefined FUN_1452d45e0(void)

undefined8
FUN_1452d45e0(undefined8 param_1,longlong param_2,void *param_3,ulonglong param_4,undefined8 param_5
             ,undefined8 param_6,undefined8 param_7,longlong param_8)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined4 *local_res10;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar6;
  
  lVar4 = param_8;
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  iVar1 = *(int *)(param_2 + 8);
  lVar2 = *(longlong *)(param_8 + 0x10);
  uVar3 = *(undefined8 *)(lVar2 + 8);
  if (iVar1 != *(int *)(lVar2 + 0x120)) {
    FUN_144f14c60(uVar3,param_8,"[%d] header for non-tunnel stream: %.*s: %.*s",iVar1,
                  CONCAT44(uVar6,(int)param_4),param_3,(undefined4)param_6,param_5);
    return 0xfffffc7a;
  }
  if (*(char *)(param_2 + 0xc) != '\x05') {
    if (*(char *)(lVar2 + 0x134) != '\0') {
      return 0;
    }
    if ((param_4 == 7) && (iVar5 = memcmp(":status",param_3,7), iVar5 == 0)) {
      iVar5 = FUN_144f215f0(&param_8,param_5,param_6);
      if ((iVar5 == 0) && (iVar5 = FUN_144f21d30(&local_res10,(undefined4)param_8,0), iVar5 == 0)) {
        *(undefined8 *)(local_res10 + 0x20) = *(undefined8 *)(lVar2 + 0x90);
        *(undefined4 **)(lVar2 + 0x90) = local_res10;
        FUN_144f14c60(uVar3,lVar4,"[%d] status: HTTP/2 %03d",iVar1,CONCAT44(uVar6,*local_res10));
        return 0;
      }
    }
    else if ((*(longlong *)(lVar2 + 0x90) != 0) &&
            (iVar5 = FUN_1452db3d0(*(longlong *)(lVar2 + 0x90) + 0x10,param_3,param_4,param_5,
                                   param_6), iVar5 == 0)) {
      FUN_144f14c60(uVar3,lVar4,"[%d] header: %.*s: %.*s",iVar1,param_4 & 0xffffffff,param_3,
                    (undefined4)param_6,param_5);
      return 0;
    }
  }
  return 0xfffffc7a;
}



// FUNCTION 1452d4790 FUN_1452d4790 body=92 status=ok
// SIG undefined FUN_1452d4790(void)

undefined8
FUN_1452d4790(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
             undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  int local_res18 [4];
  
  if (param_3 != *(int *)(*(longlong *)(param_6 + 0x10) + 0x120)) {
    return 0xfffffc7a;
  }
  lVar1 = FUN_1452e73b0(*(longlong *)(param_6 + 0x10) + 0x98,param_4,param_5,local_res18);
  if (lVar1 < 0) {
    uVar2 = 0;
    if (local_res18[0] != 0x51) {
      uVar2 = 0xfffffc7a;
    }
    return uVar2;
  }
  return 0;
}



// FUNCTION 1452d47f0 FUN_1452d47f0 body=759 status=ok
// SIG undefined FUN_1452d47f0(void)

void FUN_1452d47f0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  char local_68 [8];
  void *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  local_60 = (void *)0x0;
  uVar7 = 0x1b;
  memset(puVar1 + 0x12,0,0xa8);
  FUN_1452e7200(puVar1 + 2,0x4000,0x280);
  FUN_1452e7200(puVar1 + 10,0x4000,1);
  *(undefined4 *)(puVar1 + 0x26) = 0;
  *(undefined4 *)(puVar1 + 0x24) = 0xffffffff;
  FUN_1452e7230(puVar1 + 0x13,0x4000,0x280,1);
  FUN_1452e7200(puVar1 + 0x1b,0x4000,8);
  iVar3 = FUN_1452d1f60(param_1,&local_50,&local_58,local_68);
  if (iVar3 == 0) {
    puVar6 = &DAT_14996de1b;
    puVar8 = &DAT_14996de1b;
    if (local_68[0] != '\0') {
      puVar8 = &DAT_149c06564;
    }
    local_78 = local_58;
    if (local_68[0] != '\0') {
      puVar6 = &DAT_149c06568;
    }
    lVar4 = FUN_144f2b8b0("%s%s%s:%d",puVar6,local_50,puVar8);
    puVar1[0x23] = lVar4;
    if (lVar4 != 0) {
      iVar3 = FUN_1452ddf20(&local_60);
      if (iVar3 == 0) {
        FUN_1452ddf70(local_60,FUN_1452d4210);
        FUN_1452ddf80(local_60,FUN_1452d42a0);
        FUN_1452ddfa0(local_60,FUN_1452d4490);
        FUN_1452ddf90(local_60,FUN_1452d4790);
        FUN_1452ddfb0(local_60,FUN_1452d4550);
        FUN_1452ddfd0(local_60,FUN_1452d45e0);
        pvVar2 = local_60;
        uVar5 = *(undefined8 *)(param_1 + 0x10);
        iVar3 = FUN_1452ddff0(&local_58);
        if (iVar3 == 0) {
          FUN_1452de030(CONCAT44(uStack_54,local_58),1);
          iVar3 = FUN_1452de040(uVar5,pvVar2,param_1,CONCAT44(uStack_54,local_58));
          free((void *)CONCAT44(uStack_54,local_58));
          if (iVar3 == 0) {
            local_48 = 3;
            local_44 = FUN_144bbafa0(*(undefined8 *)(param_2 + 0xd8));
            local_40 = 4;
            local_3c = 0xa00000;
            local_38 = 2;
            iVar3 = FUN_1452e6760(*puVar1,0,&local_48,3);
            if (iVar3 == 0) {
              iVar3 = FUN_1452e6780(*puVar1,0,0,0x6400000);
              if (iVar3 == 0) {
                uVar7 = 0;
              }
              else {
                uVar5 = FUN_1452e6a80(iVar3);
                FUN_144f14b70(param_2,"nghttp2_session_set_local_window_size() failed: %s(%d)",uVar5
                              ,iVar3);
                uVar7 = 0x10;
              }
            }
            else {
              uVar5 = FUN_1452e6a80(iVar3);
              FUN_144f14b70(param_2,"nghttp2_submit_settings() failed: %s(%d)",uVar5,iVar3);
              uVar7 = 0x10;
            }
            goto LAB_1452d4ab1;
          }
        }
        FUN_144f14b70(param_2,"Couldn\'t initialize nghttp2");
        uVar7 = 0x1b;
      }
      else {
        FUN_144f14b70(param_2,"Couldn\'t initialize nghttp2 callbacks");
      }
    }
  }
LAB_1452d4ab1:
  if (local_60 != (void *)0x0) {
    free(local_60);
  }
  FUN_144f14c60(param_2,param_1,"[0] init proxy ctx -> %d",uVar7);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
}



// FUNCTION 1452d4b00 FUN_1452d4b00 body=52 status=ok
// SIG undefined FUN_1452d4b00(void)

undefined8 FUN_1452d4b00(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1452e00f0(*param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_1452e0140(*param_1);
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1452d4b40 FUN_1452d4b40 body=296 status=ok
// SIG undefined FUN_1452d4b40(void)

undefined8 FUN_1452d4b40(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 local_res8;
  undefined8 local_res20;
  ulonglong uVar5;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  cVar2 = FUN_1452e7590(puVar1 + 2,&local_res20,&local_res8);
  while( true ) {
    if (cVar2 == '\0') {
      return 0;
    }
    uVar3 = FUN_1452de2f0(*puVar1,local_res20,local_res8);
    uVar5 = uVar3;
    FUN_144f14c60(param_2,param_1,"[0] %zu bytes to nghttp2 -> %zd",local_res8,uVar3);
    if ((longlong)uVar3 < 0) break;
    FUN_1452e7620(puVar1 + 2,uVar3);
    cVar2 = FUN_1452e7360(puVar1 + 2);
    if (cVar2 != '\0') {
      FUN_144f14c60(param_2,param_1,"[0] all data in connection buffer processed");
      return 0;
    }
    uVar4 = FUN_1452e7330(puVar1 + 2);
    FUN_144f14c60(param_2,param_1,"[0] process_pending_input: %zu bytes left in connection buffer",
                  uVar4,uVar5);
    cVar2 = FUN_1452e7590(puVar1 + 2,&local_res20,&local_res8);
  }
  uVar4 = FUN_1452e6a80(uVar3 & 0xffffffff);
  FUN_144f14b70(param_2,"process_pending_input: nghttp2_session_mem_recv() returned %zd:%s",uVar3,
                uVar4);
  *param_3 = 0x38;
  return 0xffffffff;
}



// FUNCTION 1452d4c70 FUN_1452d4c70 body=373 status=ok
// SIG undefined FUN_1452d4c70(void)

int FUN_1452d4c70(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int local_res8 [2];
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  local_res8[0] = 0;
  cVar2 = FUN_1452e7360(lVar1 + 0x10);
  if (cVar2 == '\0') {
    uVar4 = FUN_1452e7330(lVar1 + 0x10);
    FUN_144f14c60(param_2,param_1,"[0] process %zu bytes in connection buffer",uVar4);
    iVar3 = FUN_1452d4b40(param_1,param_2,local_res8);
    if (iVar3 < 0) {
      return local_res8[0];
    }
  }
  if (*(char *)(lVar1 + 0x140) == '\0') {
    do {
      if (((*(char *)(lVar1 + 0x135) != '\0') ||
          (cVar2 = FUN_1452e7360(lVar1 + 0x10), cVar2 == '\0')) ||
         (cVar2 = FUN_1452e7380(lVar1 + 0x98), cVar2 != '\0')) break;
      lVar5 = FUN_1452e77d0(lVar1 + 0x10,FUN_1452d40d0,param_1,local_res8);
      uVar4 = FUN_1452e7330(lVar1 + 0x10);
      FUN_144f14c60(param_2,param_1,"[0] read %zu bytes nw data -> %zd, %d",uVar4,lVar5,
                    local_res8[0]);
      if (lVar5 < 0) {
        if (local_res8[0] != 0x51) {
          FUN_144f14b70(param_2,"Failed receiving HTTP2 data");
          return local_res8[0];
        }
        break;
      }
      if (lVar5 == 0) {
        *(undefined1 *)(lVar1 + 0x140) = 1;
        break;
      }
      iVar3 = FUN_1452d4b40(param_1,param_2,local_res8);
      if (iVar3 != 0) {
        return local_res8[0];
      }
    } while (*(char *)(lVar1 + 0x140) == '\0');
    if (*(char *)(lVar1 + 0x140) == '\0') {
      return 0;
    }
  }
  cVar2 = FUN_1452e7360(lVar1 + 0x10);
  if (cVar2 != '\0') {
    FUN_144f16220(*(undefined8 *)(param_1 + 0x18),1);
  }
  return 0;
}



// FUNCTION 1452d4df0 FUN_1452d4df0 body=285 status=ok
// SIG undefined FUN_1452d4df0(void)

int FUN_1452d4df0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int local_res8 [2];
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  iVar5 = 0;
  *(undefined1 *)((longlong)puVar1 + 0x142) = 0;
  do {
    if ((*(char *)((longlong)puVar1 + 0x142) != '\0') ||
       (iVar4 = FUN_1452e0140(*puVar1), iVar4 == 0)) break;
    iVar5 = FUN_1452de220(*puVar1);
  } while (iVar5 == 0);
  iVar4 = FUN_1452e0660(iVar5);
  if (iVar4 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    cVar3 = FUN_1452e7360(lVar2 + 0x50);
    iVar5 = 0;
    if (cVar3 == '\0') {
      lVar7 = FUN_1452e76a0(lVar2 + 0x50,FUN_1452d4170,param_1,local_res8);
      if (lVar7 < 0) {
        iVar5 = local_res8[0];
        if (local_res8[0] == 0x51) {
          uVar6 = FUN_1452e7330(lVar2 + 0x50);
          FUN_144f14c60(param_2,param_1,"[0] flush nw send buffer(%zu) -> EAGAIN",uVar6);
          *(undefined1 *)(lVar2 + 0x142) = 1;
          iVar5 = local_res8[0];
        }
      }
      else {
        FUN_144f14c60(param_2,param_1,"[0] nw send buffer flushed");
        cVar3 = FUN_1452e7360(lVar2 + 0x50);
        iVar5 = 0x51;
        if (cVar3 != '\0') {
          iVar5 = 0;
        }
      }
    }
  }
  else {
    uVar6 = FUN_1452e6a80(iVar5);
    FUN_144f14c60(param_2,param_1,"[0] nghttp2_session_send error (%s)%d",uVar6,iVar5);
    iVar5 = 0x37;
  }
  return iVar5;
}



// FUNCTION 1452d4f10 FUN_1452d4f10 body=514 status=ok
// SIG undefined FUN_1452d4f10(void)

void FUN_1452d4f10(uint *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong _Size;
  char *pcVar1;
  uint uVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  uint local_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar2 = (uint)(byte)param_1[3];
  switch(uVar2) {
  case 0:
    local_b0 = param_1[4];
    uVar2 = *param_1;
    local_b8 = (undefined1 *)
               (CONCAT44(local_b8._4_4_,(uint)*(byte *)((longlong)param_1 + 0xd)) &
               0xffffffff00000001);
    pcVar1 = "FRAME[DATA, len=%d, eos=%d, padlen=%d]";
    goto LAB_1452d50f7;
  case 1:
    pcVar1 = "FRAME[HEADERS, len=%d, hend=%d, eos=%d]";
    uVar2 = *param_1;
    local_b0 = *(byte *)((longlong)param_1 + 0xd) & 1;
    local_b8 = (undefined1 *)
               (CONCAT44(local_b8._4_4_,(uint)(*(byte *)((longlong)param_1 + 0xd) >> 2)) &
               0xffffffff00000001);
    goto LAB_1452d50f7;
  case 2:
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,(uint)*(byte *)((longlong)param_1 + 0xd));
    FUN_144f2b7e0(param_2,param_3,"FRAME[PRIORITY, len=%d, flags=%d]",*param_1);
    break;
  case 3:
    pcVar1 = "FRAME[RST_STREAM, len=%d, flags=%d, error=%u]";
    local_b0 = param_1[4];
    uVar2 = *param_1;
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,(uint)*(byte *)((longlong)param_1 + 0xd));
    goto LAB_1452d50f7;
  case 4:
    if ((*(byte *)((longlong)param_1 + 0xd) & 1) == 0) {
      FUN_144f2b7e0(param_2,param_3,"FRAME[SETTINGS, len=%d]",*param_1);
    }
    else {
      FUN_144f2b7e0(param_2,param_3,"FRAME[SETTINGS, ack=1]");
    }
    break;
  case 5:
    local_b8 = (undefined1 *)
               (CONCAT44(local_b8._4_4_,(uint)(*(byte *)((longlong)param_1 + 0xd) >> 2)) &
               0xffffffff00000001);
    FUN_144f2b7e0(param_2,param_3,"FRAME[PUSH_PROMISE, len=%d, hend=%d]",*param_1);
    break;
  case 6:
    local_b8 = (undefined1 *)
               (CONCAT44(local_b8._4_4_,(uint)*(byte *)((longlong)param_1 + 0xd)) &
               0xffffffff00000001);
    FUN_144f2b7e0(param_2,param_3,"FRAME[PING, len=%d, ack=%d]",*param_1);
    break;
  case 7:
    _Size = *(ulonglong *)(param_1 + 8);
    if (_Size < 0x80) {
      if (_Size != 0) goto LAB_1452d5083;
    }
    else {
      _Size = 0x7f;
LAB_1452d5083:
      memcpy(local_a8,*(void **)(param_1 + 6),_Size);
    }
    local_b0 = param_1[4];
    uVar2 = param_1[5];
    local_b8 = local_a8;
    local_a8[_Size] = 0;
    FUN_144f2b7e0(param_2,param_3,"FRAME[GOAWAY, error=%d, reason=\'%s\', last_stream=%d]",uVar2);
    break;
  case 8:
    FUN_144f2b7e0(param_2,param_3,"FRAME[WINDOW_UPDATE, incr=%d]",param_1[4]);
    break;
  default:
    pcVar1 = "FRAME[%d, len=%d, flags=%d]";
    local_b0 = (uint)*(byte *)((longlong)param_1 + 0xd);
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,*param_1);
LAB_1452d50f7:
    FUN_144f2b7e0(param_2,param_3,pcVar1,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_d8);
}



// FUNCTION 1452d5150 FUN_1452d5150 body=248 status=ok
// SIG undefined FUN_1452d5150(void)

longlong FUN_1452d5150(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                      undefined4 *param_5,undefined8 param_6,longlong param_7)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int local_res10 [2];
  
  if (param_7 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(*(longlong *)(param_7 + 0x10) + 8);
  }
  if (param_2 != 0) {
    lVar2 = FUN_1452e01c0();
    if (lVar2 == 0) {
      lVar3 = -0x386;
    }
    else {
      lVar3 = FUN_1452e74a0(lVar2 + 0x48,param_3,param_4,local_res10);
      if (lVar3 < 0) {
        lVar3 = -0x1fc;
        if (local_res10[0] != 0x51) {
          lVar3 = -0x386;
        }
      }
      else {
        if ((*(char *)(lVar2 + 0xa5) != '\0') &&
           (cVar1 = FUN_1452e7360(lVar2 + 0x48), cVar1 != '\0')) {
          *param_5 = 1;
        }
        FUN_144f14c60(uVar4,param_7,"[%d] tunnel_send_callback -> %zd",*(undefined4 *)(lVar2 + 0x90)
                      ,lVar3);
      }
    }
    return lVar3;
  }
  return -0x1f5;
}



// FUNCTION 1452d5250 FUN_1452d5250 body=619 status=ok
// SIG undefined FUN_1452d5250(void)

int FUN_1452d5250(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong local_res8;
  longlong local_88;
  code *local_80;
  undefined1 local_78 [64];
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  local_res8 = 0;
  iVar2 = FUN_1452d2010(&local_res8,param_1,param_2,2);
  if (iVar2 == 0) {
    FUN_144f14ad0(param_2,"Establish HTTP/2 proxy tunnel to %s",*(undefined8 *)(local_res8 + 0x18));
    lVar5 = local_res8;
    uVar7 = *puVar1;
    iVar3 = -1;
    FUN_1452db160(local_78,0,0x100000);
    iVar2 = FUN_144f21a80(local_78,lVar5,param_2);
    if (iVar2 == 0) {
      uVar4 = FUN_1452db260(local_78);
      lVar5 = (*(code *)PTR_malloc_14c6d9f20)(uVar4 * 0x28);
      if (lVar5 == 0) {
        (*(code *)PTR_free_14c6d9f28)(0);
        iVar2 = 0x1b;
        iVar3 = -1;
      }
      else {
        uVar9 = 0;
        if (uVar4 != 0) {
          uVar8 = 0;
          do {
            puVar6 = (undefined8 *)FUN_1452db280(local_78,uVar8);
            uVar9 = uVar9 + 1;
            puVar1 = (undefined8 *)(lVar5 + uVar8 * 0x28);
            uVar8 = (ulonglong)uVar9;
            *puVar1 = *puVar6;
            puVar1[2] = puVar6[2];
            puVar1[1] = puVar6[1];
            puVar1[3] = puVar6[3];
            *(undefined1 *)(puVar1 + 4) = 0;
          } while (uVar8 < uVar4);
        }
        local_80 = FUN_1452d5150;
        local_88 = param_1;
        iVar3 = FUN_1452e64d0(uVar7,0,lVar5,uVar4,&local_88,param_3);
        if (-1 < iVar3) {
          (*(code *)PTR_free_14c6d9f28)(lVar5);
          FUN_1452db180(local_78);
          iVar2 = 0;
          *(int *)(param_3 + 0x90) = iVar3;
          goto LAB_1452d5471;
        }
        uVar7 = FUN_1452e6a80(iVar3);
        FUN_144f14b70(param_2,"nghttp2_session_upgrade2() failed: %s(%d)",uVar7,iVar3);
        (*(code *)PTR_free_14c6d9f28)(lVar5);
        iVar2 = 0x37;
      }
    }
    else {
      (*(code *)PTR_free_14c6d9f28)(0);
    }
    FUN_1452db180(local_78);
    *(int *)(param_3 + 0x90) = iVar3;
    uVar7 = FUN_1452e6a80(iVar3);
    FUN_144f14c60(param_2,param_1,"[%d] send, nghttp2_submit_request error: %s",
                  *(int *)(param_3 + 0x90),uVar7);
  }
LAB_1452d5471:
  if (local_res8 != 0) {
    FUN_144f21a30();
  }
  if (iVar2 != 0) {
    FUN_144f14b70(param_2,"Failed sending CONNECT to proxy");
  }
  return iVar2;
}



// FUNCTION 1452d54c0 FUN_1452d54c0 body=887 status=ok
// SIG undefined FUN_1452d54c0(void)

int FUN_1452d54c0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  char *pcVar4;
  longlong lVar5;
  int iVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  iVar6 = 0;
  iVar3 = iVar6;
  do {
    iVar1 = *(int *)(param_3 + 0x14);
    if (iVar1 == 0) {
      FUN_144f14c60(param_2,param_1,"[0] CONNECT start for %s",param_3[0x11]);
      iVar3 = FUN_1452d5250(param_1,param_2,param_3);
      if (iVar3 != 0) goto LAB_1452d57ce;
      if (*(int *)(param_3 + 0x14) != 1) {
        FUN_144f14c60(param_2,param_1,"[%d] new tunnel state \'connect\'",
                      *(undefined4 *)(param_3 + 0x12));
        *(undefined4 *)(param_3 + 0x14) = 1;
      }
LAB_1452d5583:
      iVar3 = FUN_1452d4c70(param_1,param_2);
      if (((iVar3 == 0) && (iVar3 = FUN_1452d4df0(param_1,param_2), iVar3 == 0)) || (iVar3 == 0x51))
      {
        iVar3 = iVar6;
        if (*(char *)((longlong)param_3 + 0xa4) == '\0') goto LAB_1452d57c5;
        if (*(int *)(param_3 + 0x14) != 2) {
          if (*(int *)(param_3 + 0x14) == 1) {
            *(undefined1 *)(param_2 + 0x1cd) = 0;
          }
          FUN_144f14c60(param_2,param_1,"[%d] new tunnel state \'response\'",
                        *(undefined4 *)(param_3 + 0x12));
          *(undefined4 *)(param_3 + 0x14) = 2;
        }
LAB_1452d5648:
        iVar3 = *(int *)*param_3;
        if (99 < iVar3 - 200U) {
          if (iVar3 == 0x191) {
            pcVar4 = "WWW-Authenticate";
LAB_1452d5701:
            lVar5 = FUN_1452db330((int *)*param_3 + 4,pcVar4);
            if (lVar5 != 0) {
              FUN_144f14c60(param_2,param_1,"[0] CONNECT: fwd auth header \'%s\'",
                            *(undefined8 *)(lVar5 + 8));
              iVar3 = FUN_144f20010(param_2,*(int *)*param_3 == 0x197,*(undefined8 *)(lVar5 + 8));
              if (iVar3 != 0) goto LAB_1452d57ce;
              if (*(longlong *)(param_2 + 400) != 0) {
                (*(code *)PTR_free_14c6d9f28)();
                *(undefined8 *)(param_2 + 400) = 0;
                iVar3 = iVar6;
                if (*(int *)(param_3 + 0x14) != 0) {
                  if (*(int *)(param_3 + 0x14) == 1) {
                    *(undefined1 *)(param_2 + 0x1cd) = 0;
                  }
                  FUN_144f14c60(param_2,param_1,"[%d] new tunnel state \'init\'",
                                *(undefined4 *)(param_3 + 0x12));
                  FUN_1452d3f70(param_3);
                }
                goto LAB_1452d57a4;
              }
            }
          }
          else if (iVar3 == 0x197) {
            pcVar4 = "Proxy-Authenticate";
            goto LAB_1452d5701;
          }
          iVar3 = 0x38;
          goto LAB_1452d57ce;
        }
        FUN_144f14ad0(param_2,"CONNECT tunnel established, response %d",iVar3);
        iVar3 = iVar6;
        if (*(int *)(param_3 + 0x14) != 3) {
          if (*(int *)(param_3 + 0x14) == 1) {
            *(undefined1 *)(param_2 + 0x1cd) = 0;
          }
          FUN_144f14c60(param_2,param_1,"[%d] new tunnel state \'established\'",
                        *(undefined4 *)(param_3 + 0x12));
          FUN_144f14ad0(param_2,"CONNECT phase completed");
          *(undefined2 *)(param_2 + 0xe3c) = 1;
          *(undefined4 *)(param_3 + 0x14) = 3;
          (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x1350));
          *(undefined8 *)(param_2 + 0x1350) = 0;
        }
      }
      else if (*(int *)(param_3 + 0x14) != 4) {
        if (*(int *)(param_3 + 0x14) == 1) {
          *(undefined1 *)(param_2 + 0x1cd) = 0;
        }
        FUN_144f14c60(param_2,param_1,"[%d] new tunnel state \'failed\'",
                      *(undefined4 *)(param_3 + 0x12));
        *(undefined4 *)(param_3 + 0x14) = 4;
        (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x1350));
        *(undefined8 *)(param_2 + 0x1350) = 0;
      }
    }
    else {
      if (iVar1 == 1) goto LAB_1452d5583;
      if (iVar1 == 2) goto LAB_1452d5648;
      if (iVar1 == 3) {
        return 0;
      }
      if (iVar1 == 4) {
        return 0x38;
      }
    }
LAB_1452d57a4:
    if (*(int *)(param_3 + 0x14) != 0) {
      if (iVar3 == 0) {
LAB_1452d57c5:
        if (*(char *)(lVar2 + 0x135) == '\0') {
          return iVar3;
        }
      }
LAB_1452d57ce:
      if (*(int *)(param_3 + 0x14) != 4) {
        if (*(int *)(param_3 + 0x14) == 1) {
          *(undefined1 *)(param_2 + 0x1cd) = 0;
        }
        FUN_144f14c60(param_2,param_1,"[%d] new tunnel state \'failed\'",
                      *(undefined4 *)(param_3 + 0x12));
        *(undefined4 *)(param_3 + 0x14) = 4;
        (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x1350));
        *(undefined8 *)(param_2 + 0x1350) = 0;
      }
      return iVar3;
    }
  } while( true );
}



// FUNCTION 1452d5840 FUN_1452d5840 body=429 status=ok
// SIG undefined FUN_1452d5840(void)

ulonglong FUN_1452d5840(longlong param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  undefined *puVar7;
  uint local_res8 [2];
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x24) != '\0') {
    *param_4 = '\x01';
    return 0;
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
  local_res8[0] = (uint)uVar2;
  if (local_res8[0] != 0) {
    return uVar2;
  }
  if (*param_4 == (char)uVar2) {
    return uVar2;
  }
  if (*piVar1 == 0) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x4a8) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x988);
      puVar7 = &DAT_149d2ae70;
      if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x2d4) != '\0') {
        puVar7 = &DAT_149d2ae68;
      }
      if (lVar3 == 0) {
        lVar3 = param_2 + 0x146c;
      }
      uVar2 = FUN_144f07d70(*(longlong *)(param_1 + 0x10) + 8,"PROXY %s %s %s %i %i\r\n",puVar7,
                            lVar3,param_2 + 0x1434,*(undefined4 *)(param_2 + 0x149c),
                            *(undefined4 *)(param_2 + 0x1464));
    }
    else {
      uVar2 = thunk_FUN_144f07eb0(*(longlong *)(param_1 + 0x10) + 8,"PROXY UNKNOWN\r\n",0xf);
    }
    if ((int)uVar2 == 0) {
      *piVar1 = 1;
      goto LAB_1452d594d;
    }
  }
  else {
    local_res8[0] = 0;
    if (*piVar1 == 1) {
LAB_1452d594d:
      local_res8[0] = 0;
      lVar3 = FUN_144f07ea0(piVar1 + 2);
      if (lVar3 == 0) {
LAB_1452d59ac:
        *piVar1 = 2;
        goto LAB_1452d59b2;
      }
      uVar4 = FUN_144f07e80(piVar1 + 2);
      lVar5 = FUN_144f142a0(param_2,*(undefined4 *)(param_1 + 0x20),uVar4,lVar3,local_res8);
      if (lVar5 < 0) goto LAB_1452d59bb;
      FUN_144f07de0(piVar1 + 2,lVar3 - lVar5);
      lVar3 = FUN_144f07ea0();
      if (lVar3 == 0) goto LAB_1452d59ac;
      uVar2 = 0;
    }
    else {
LAB_1452d59b2:
      FUN_144f07d10();
LAB_1452d59bb:
      uVar2 = (ulonglong)local_res8[0];
      if (local_res8[0] != 0) goto LAB_1452d59cc;
    }
    if (*piVar1 == 2) {
      cVar6 = '\x01';
      goto LAB_1452d59ce;
    }
  }
LAB_1452d59cc:
  cVar6 = '\0';
LAB_1452d59ce:
  *param_4 = cVar6;
  *(char *)(param_1 + 0x24) = cVar6;
  return uVar2;
}



// FUNCTION 1452d59f0 FUN_1452d59f0 body=69 status=ok
// SIG undefined FUN_1452d59f0(void)

void FUN_1452d59f0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_144f14c60(param_2,param_1,"destroy");
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_144f07d10(lVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0001452d5a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_free_14c6d9f28)(lVar1);
    return;
  }
  return;
}



// FUNCTION 1452d5a40 FUN_1452d5a40 body=86 status=ok
// SIG undefined FUN_1452d5a40(void)

void FUN_1452d5a40(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  
  FUN_144f14c60(param_2,param_1,"close");
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x24) = 0;
  *puVar1 = 0;
  FUN_144f07dc0(puVar1 + 2);
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
  }
  return;
}



// FUNCTION 1452d5aa0 FUN_1452d5aa0 body=87 status=ok
// SIG undefined FUN_1452d5aa0(void)

undefined8 FUN_1452d5aa0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
  if ((((int)uVar1 == 0) && (*(char *)(*(longlong *)(param_1 + 8) + 0x24) != (char)uVar1)) &&
     (*(char *)(param_1 + 0x24) == (char)uVar1)) {
    uVar1 = FUN_144f13ec0(param_1,param_2);
    *param_3 = uVar1;
    uVar1 = 0x10000;
  }
  return uVar1;
}



// FUNCTION 1452d5b00 FUN_1452d5b00 body=166 status=ok
// SIG undefined FUN_1452d5b00(void)

/* WARNING: Removing unreachable block (ram,0x0001452d5b88) */

int FUN_1452d5b00(undefined8 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 local_res18 [2];
  
  local_res18[0] = 0;
  puVar2 = (undefined4 *)(*(code *)PTR_calloc_14c6d9f40)(0x28);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    FUN_144f07cf0(puVar2 + 2,0x800);
    iVar1 = FUN_144f13b40(local_res18,&PTR_s_HAPROXY_14c732490,puVar2);
    if (iVar1 == 0) {
      FUN_144f13bd0(param_1,local_res18[0]);
    }
    else {
      FUN_144f07d10(puVar2 + 2);
      (*(code *)PTR_free_14c6d9f28)(puVar2);
    }
    return iVar1;
  }
  return 0x1b;
}



// FUNCTION 1452d5bb0 FUN_1452d5bb0 body=875 status=ok
// SIG undefined FUN_1452d5bb0(void)

int FUN_1452d5bb0(longlong param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int *piVar8;
  char *pcVar9;
  ulonglong uVar10;
  undefined8 in_stack_ffffffffffffff98;
  undefined8 uVar11;
  undefined4 uVar13;
  undefined8 uVar12;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  piVar1 = *(int **)(param_1 + 0x10);
  iVar5 = 0;
  if (*(char *)(param_1 + 0x24) != '\0') {
    *param_4 = 1;
    return 0;
  }
  *param_4 = 0;
  puVar6 = (undefined8 *)FUN_144f07150(&local_48);
  iVar4 = *piVar1;
  uVar12 = *puVar6;
  uVar3 = puVar6[1];
  if (iVar4 == 0) {
    FUN_144f14c60(param_2,param_1,"connect, init");
    *(undefined8 *)(piVar1 + 4) = uVar12;
    *(undefined8 *)(piVar1 + 6) = uVar3;
    if ((char)piVar1[0x15] == '\0') {
      if ((char)piVar1[0x21] != '\0') {
        uVar11 = CONCAT44(uVar13,(uint)*(byte *)(*(longlong *)(param_1 + 0x18) + 0x4d7));
        FUN_1452d6380(piVar1 + 0x16,param_1,param_2,&DAT_149d2af98,uVar11);
        uVar13 = (undefined4)((ulonglong)uVar11 >> 0x20);
      }
    }
    else {
      uVar11 = CONCAT44(uVar13,5);
      FUN_1452d6380(piVar1 + 10,param_1,param_2,&DAT_149c06bf8,uVar11);
      uVar13 = (undefined4)((ulonglong)uVar11 >> 0x20);
      if ((char)piVar1[0x21] != '\0') {
        FUN_144bba820(param_2,(longlong)piVar1[0x22],0xe);
      }
    }
    *piVar1 = 1;
  }
  else if (iVar4 != 1) {
    if (iVar4 == 2) {
      *(undefined1 *)(param_1 + 0x24) = 1;
      *param_4 = 1;
    }
    else if (iVar4 == 3) {
      iVar5 = piVar1[8];
      *(undefined1 *)(param_1 + 0x24) = 0;
      *param_4 = 0;
    }
    goto LAB_1452d5eea;
  }
  if (((((char)piVar1[0x15] != '\0') && (*(longlong *)(piVar1 + 0xc) != 0)) && (piVar1[0xe] == 0))
     && ((iVar4 = FUN_1452d6410(piVar1 + 10,param_1,param_2,param_4), iVar4 == 0 && (*param_4 != 0))
        )) {
    iVar5 = FUN_1452d6520(param_1,param_2,piVar1 + 10);
    goto LAB_1452d5eea;
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  if ((*(char *)(lVar2 + 0x84) != '\0') && (*(longlong *)(lVar2 + 0x60) == 0)) {
    if (((*(char *)(lVar2 + 0x54) != '\0') && (*(longlong *)(lVar2 + 0x30) != 0)) &&
       (*(int *)(lVar2 + 0x38) == 0)) {
      local_58 = *(undefined4 *)(lVar2 + 0x10);
      uStack_54 = *(undefined4 *)(lVar2 + 0x14);
      uStack_50 = *(undefined4 *)(lVar2 + 0x18);
      uStack_4c = *(undefined4 *)(lVar2 + 0x1c);
      local_48 = uVar12;
      uStack_40 = uVar3;
      lVar7 = FUN_144f071e0(&local_48,&local_58);
      uVar10 = (ulonglong)*(int *)(lVar2 + 0x8c);
      if (lVar7 < (longlong)uVar10) {
        if (*(int *)(lVar2 + 0x88) <= lVar7) {
          if (*(int *)(lVar2 + 0x50) < 0) {
            uVar13 = 0;
            (**(code **)(**(longlong **)(lVar2 + 0x30) + 0x68))
                      (*(longlong **)(lVar2 + 0x30),param_2,2,lVar2 + 0x50,0);
            if (*(int *)(lVar2 + 0x50) < 0) {
              uVar10 = (ulonglong)*(uint *)(lVar2 + 0x88);
              pcVar9 = "soft timeout of %dms reached, h3 has not seen any data, starting h21";
              goto LAB_1452d5d83;
            }
          }
          FUN_144bba820(param_2,*(int *)(lVar2 + 0x8c) - lVar7,0xe);
        }
        goto LAB_1452d5dbb;
      }
      pcVar9 = "hard timeout of %dms reached, starting h21";
LAB_1452d5d83:
      FUN_144f14c60(param_2,param_1,pcVar9,uVar10);
    }
    uVar12 = CONCAT44(uVar13,(uint)*(byte *)(*(longlong *)(param_1 + 0x18) + 0x4d7));
    FUN_1452d6380(piVar1 + 0x16,param_1,param_2,&DAT_149d2af98,uVar12);
    uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
  }
LAB_1452d5dbb:
  if ((((char)piVar1[0x21] != '\0') && (*(longlong *)(piVar1 + 0x18) != 0)) && (piVar1[0x1a] == 0))
  {
    FUN_144f14c60(param_2,param_1,"connect, check h21");
    iVar4 = FUN_1452d6410(piVar1 + 0x16,param_1,param_2,param_4);
    if ((iVar4 == 0) && (*param_4 != 0)) {
      iVar5 = FUN_1452d6520(param_1,param_2,piVar1 + 0x16);
      goto LAB_1452d5eea;
    }
  }
  if ((((char)piVar1[0x15] == '\0') || (piVar1[0xe] != 0)) &&
     (((char)piVar1[0x21] == '\0' || (piVar1[0x1a] != 0)))) {
    FUN_144f14c60(param_2,param_1,"connect, all failed");
    piVar8 = piVar1 + 0x1a;
    if ((char)piVar1[0x15] != '\0') {
      piVar8 = piVar1 + 0xe;
    }
    iVar5 = *piVar8;
    piVar1[8] = iVar5;
    *piVar1 = 3;
  }
  else {
    *param_4 = 0;
  }
LAB_1452d5eea:
  FUN_144f14c60(param_2,param_1,"connect -> %d, done=%d",iVar5,CONCAT44(uVar13,(uint)*param_4));
  return iVar5;
}



// FUNCTION 1452d5f20 FUN_1452d5f20 body=378 status=ok
// SIG undefined FUN_1452d5f20(void)

void FUN_1452d5f20(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  uint local_88;
  longlong local_78 [7];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar4 = 0;
  if (*(char *)(param_1 + 0x24) == '\0') {
    uVar6 = 0;
    local_78[0] = *(longlong *)(param_1 + 0x10) + 0x28;
    uVar5 = 0;
    local_78[1] = *(longlong *)(param_1 + 0x10) + 0x58;
    do {
      puVar1 = (undefined8 *)local_78[uVar5];
      if (((*(char *)((longlong)puVar1 + 0x2c) != '\0') && (puVar1[1] != 0)) &&
         (*(int *)(puVar1 + 2) == 0)) {
        uVar2 = FUN_144f13d90(puVar1[1],param_2,local_78 + 2);
        local_88 = uVar2;
        FUN_144f14c60(param_2,param_1,"get_selected_socks(%s) -> %x",*puVar1);
        if (uVar2 != 0) {
          uVar3 = 0;
          do {
            if (4 < uVar6) break;
            if ((uVar2 >> ((uint)uVar3 & 0x1f) & 1) != 0 ||
                (uVar2 >> ((uint)(uVar3 + 0x10) & 0x1f) & 1) != 0) {
              *(longlong *)(param_3 + uVar6 * 8) = local_78[uVar3 + 2];
              if ((uVar2 & 1 << ((byte)(uVar3 + 0x10) & 0x1f)) != 0) {
                uVar4 = uVar4 | 1 << ((uint)uVar6 + 0x10 & 0x1f);
              }
              if ((uVar2 & 1 << ((byte)uVar3 & 0x1f)) != 0) {
                uVar4 = uVar4 | 1 << ((uint)uVar6 & 0x1f);
              }
              uVar6 = uVar6 + 1;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < 5);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 2);
    FUN_144f14c60(param_2,param_1,"get_selected_socks -> %x",uVar4);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
}



// FUNCTION 1452d60b0 FUN_1452d60b0 body=144 status=ok
// SIG undefined FUN_1452d60b0(void)

undefined8 FUN_1452d60b0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x24) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001452d60d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))();
    return uVar4;
  }
  FUN_144f14c60(param_2,param_1,"data_pending");
  plVar2 = *(longlong **)(lVar1 + 0x30);
  if (((plVar2 != (longlong *)0x0) && (*(int *)(lVar1 + 0x38) == 0)) &&
     (cVar3 = (**(code **)(*plVar2 + 0x38))(plVar2,param_2), cVar3 != '\0')) {
    return 1;
  }
  plVar2 = *(longlong **)(lVar1 + 0x60);
  if (((plVar2 != (longlong *)0x0) && (*(int *)(lVar1 + 0x68) == 0)) &&
     (cVar3 = (**(code **)(*plVar2 + 0x38))(plVar2,param_2), cVar3 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 1452d6140 FUN_1452d6140 body=101 status=ok
// SIG undefined FUN_1452d6140(void)

undefined8
FUN_1452d6140(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 *param_5
             )

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 local_18 [24];
  
  if (*(char *)(param_1 + 0x24) == '\0') {
    if (param_3 == 4) {
      uVar3 = 4;
    }
    else {
      if (param_3 != 5) goto LAB_1452d6187;
      uVar3 = 5;
    }
    puVar1 = (undefined8 *)FUN_1452d66d0(local_18,param_1,param_2,uVar3);
    uVar2 = puVar1[1];
    *param_5 = *puVar1;
    param_5[1] = uVar2;
    return 0;
  }
LAB_1452d6187:
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001452d6197. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x68))();
    return uVar2;
  }
  return 0x30;
}



// FUNCTION 1452d61b0 FUN_1452d61b0 body=90 status=ok
// SIG undefined FUN_1452d61b0(void)

void FUN_1452d61b0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  FUN_144f14c60(param_2,param_1,"close");
  FUN_1452d6470(param_1,param_2);
  plVar1 = *(longlong **)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x24) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
    FUN_144f13c80(param_1 + 8,param_2);
  }
  return;
}



// FUNCTION 1452d6210 FUN_1452d6210 body=79 status=ok
// SIG undefined FUN_1452d6210(void)

void FUN_1452d6210(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  FUN_144f14c60(param_2,param_1,"destroy");
  FUN_1452d6470(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001452d6258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_free_14c6d9f28)(uVar1);
  return;
}



// FUNCTION 1452d6260 FUN_1452d6260 body=280 status=ok
// SIG undefined FUN_1452d6260(void)

ulonglong FUN_1452d6260(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 uVar6;
  bool bVar7;
  undefined8 local_res10;
  
  bVar7 = false;
  uVar6 = 1;
  if (*(char *)(param_2 + 0x2e1) == '\0') {
    uVar3 = 0;
  }
  else {
    if (*(byte *)(param_1 + 0x13c0) == 0x1f) {
      uVar3 = FUN_1452dc230();
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      bVar7 = true;
      uVar6 = 0;
    }
    else if (0x1d < *(byte *)(param_1 + 0x13c0)) {
      iVar2 = FUN_1452dc230();
      bVar7 = iVar2 == 0;
    }
    local_res10 = 0;
    lVar4 = (*(code *)PTR_calloc_14c6d9f40)(0x90,1);
    if (lVar4 == 0) {
      uVar5 = 0x1b;
    }
    else {
      *(undefined8 *)(lVar4 + 8) = param_4;
      *(bool *)(lVar4 + 0x54) = bVar7;
      *(undefined1 *)(lVar4 + 0x84) = uVar6;
      uVar5 = FUN_144f13b40(&local_res10,&PTR_s_HTTPS_CONNECT_14c732500,lVar4);
      if (uVar5 == 0) {
        FUN_1452d6470(local_res10,param_1);
        uVar1 = local_res10;
        (*(code *)PTR_free_14c6d9f28)(0);
        FUN_144f13ba0(param_1,param_2,param_3,uVar1);
        return 0;
      }
    }
    (*(code *)PTR_free_14c6d9f28)(lVar4);
    uVar3 = (ulonglong)uVar5;
  }
  return uVar3;
}



// FUNCTION 1452d6380 FUN_1452d6380 body=143 status=ok
// SIG undefined FUN_1452d6380(void)

void FUN_1452d6380(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined1 local_18 [16];
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  lVar2 = *(longlong *)(param_2 + 0x10);
  *param_1 = param_4;
  *(undefined8 *)(param_2 + 8) = 0;
  puVar6 = (undefined4 *)FUN_144f07150(local_18);
  uVar5 = puVar6[1];
  uVar3 = puVar6[2];
  uVar4 = puVar6[3];
  *(undefined4 *)(param_1 + 3) = *puVar6;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar4;
  uVar5 = FUN_144f16270(param_2,param_3,*(undefined8 *)(lVar2 + 8),param_5,1);
  *(undefined4 *)(param_1 + 2) = uVar5;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar1;
  return;
}



// FUNCTION 1452d6410 FUN_1452d6410 body=81 status=ok
// SIG undefined FUN_1452d6410(void)

undefined4 FUN_1452d6410(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_2 + 8) = uVar2;
  uVar3 = FUN_144f13d60(uVar2,param_3,0);
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar1;
  return *(undefined4 *)(param_1 + 0x10);
}



// FUNCTION 1452d6470 FUN_1452d6470 body=176 status=ok
// SIG undefined FUN_1452d6470(void)

void FUN_1452d6470(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    if (*(longlong *)(puVar1 + 0xc) != 0) {
      FUN_144f13d80();
      FUN_144f13c80(puVar1 + 0xc,param_2);
      *(undefined8 *)(puVar1 + 0xc) = 0;
    }
    puVar1[0xe] = 0;
    puVar1[0x14] = 0xffffffff;
    if (*(longlong *)(puVar1 + 0x18) != 0) {
      FUN_144f13d80(*(longlong *)(puVar1 + 0x18),param_2);
      FUN_144f13c80(puVar1 + 0x18,param_2);
      *(undefined8 *)(puVar1 + 0x18) = 0;
    }
    puVar1[0x1a] = 0;
    puVar1[0x20] = 0xffffffff;
    *puVar1 = 0;
    puVar1[8] = 0;
    puVar1[0x23] = *(undefined4 *)(param_2 + 0x308);
    puVar1[0x22] = *(uint *)(param_2 + 0x308) >> 1;
  }
  return;
}



// FUNCTION 1452d6520 FUN_1452d6520 body=431 status=ok
// SIG undefined FUN_1452d6520(void)

undefined8 FUN_1452d6520(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar9;
  ulonglong uVar8;
  undefined8 in_stack_ffffffffffffffb0;
  undefined4 uVar10;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [16];
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
  puVar3 = *(undefined4 **)(param_1 + 0x10);
  if (param_3 != (undefined8 *)(puVar3 + 10)) {
    if (*(longlong *)(puVar3 + 0xc) != 0) {
      FUN_144f13d80();
      FUN_144f13c80(puVar3 + 0xc,param_2);
      *(undefined8 *)(puVar3 + 0xc) = 0;
    }
    puVar3[0xe] = 0;
    puVar3[0x14] = 0xffffffff;
  }
  if (param_3 != (undefined8 *)(puVar3 + 0x16)) {
    if (*(longlong *)(puVar3 + 0x18) != 0) {
      FUN_144f13d80(*(longlong *)(puVar3 + 0x18),param_2);
      FUN_144f13c80(puVar3 + 0x18,param_2);
      *(undefined8 *)(puVar3 + 0x18) = 0;
    }
    puVar3[0x1a] = 0;
    puVar3[0x20] = 0xffffffff;
  }
  local_48 = *(undefined4 *)(param_3 + 3);
  uStack_44 = *(undefined4 *)((longlong)param_3 + 0x1c);
  uStack_40 = *(undefined4 *)(param_3 + 4);
  uStack_3c = *(undefined4 *)((longlong)param_3 + 0x24);
  puVar5 = (undefined4 *)FUN_144f07150(local_28);
  local_38 = *puVar5;
  uStack_34 = puVar5[1];
  uStack_30 = puVar5[2];
  uStack_2c = puVar5[3];
  if (*(int *)(param_3 + 5) < 0) {
    uVar9 = 0;
    (**(code **)(*(longlong *)param_3[1] + 0x68))((longlong *)param_3[1],param_2,2,param_3 + 5,0);
  }
  uVar2 = *(undefined4 *)(param_3 + 5);
  uVar4 = FUN_144f071e0(&local_38,&local_48);
  uVar8 = CONCAT44(uVar9,uVar4);
  FUN_144f14c60(param_2,param_1,"connect+handshake %s: %dms, 1st data: %dms",*param_3,uVar8,
                CONCAT44(uVar10,uVar2));
  *(undefined8 *)(param_1 + 8) = param_3[1];
  param_3[1] = 0;
  cVar1 = *(char *)(*(longlong *)(param_1 + 0x18) + 0x4d5);
  if (cVar1 == '\x02') {
    pcVar7 = "using HTTP/1.1";
  }
  else if (cVar1 == '\x03') {
    uVar6 = FUN_144f283e0(param_1,param_2);
    if ((int)uVar6 != 0) {
      *puVar3 = 3;
      puVar3[8] = (int)uVar6;
      return uVar6;
    }
    pcVar7 = "using HTTP/2";
  }
  else if (cVar1 == '\x1e') {
    pcVar7 = "using HTTP/3";
  }
  else {
    pcVar7 = "using HTTP/1.x";
  }
  FUN_144f14ad0(param_2,pcVar7);
  *puVar3 = 2;
  *(undefined1 *)(param_1 + 0x24) = 1;
  FUN_144f13de0(*(undefined8 *)(param_1 + 8),param_2,1,0x100,uVar8 & 0xffffffff00000000,0);
  return 0;
}



// FUNCTION 1452d66d0 FUN_1452d66d0 body=293 status=ok
// SIG undefined FUN_1452d66d0(void)

void FUN_1452d66d0(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = *(longlong *)(param_2 + 0x10);
  local_38 = 0;
  uStack_30 = 0;
  cVar1 = *(char *)(lVar5 + 0x84);
  *param_1 = 0;
  param_1[1] = 0;
  if ((cVar1 != '\0') && (plVar2 = *(longlong **)(lVar5 + 0x60), plVar2 != (longlong *)0x0)) {
    local_68 = &local_38;
    iVar3 = (**(code **)(*plVar2 + 0x68))(plVar2,param_3,param_4,0);
    if ((iVar3 == 0) && ((local_38 != 0 || ((int)uStack_30 != 0)))) {
      local_58 = (undefined4)*param_1;
      uStack_54 = *(undefined4 *)((longlong)param_1 + 4);
      iStack_50 = (int)param_1[1];
      uStack_4c = *(undefined4 *)((longlong)param_1 + 0xc);
      local_48 = (undefined4)local_38;
      uStack_44 = local_38._4_4_;
      iStack_40 = (int)uStack_30;
      uStack_3c = uStack_30._4_4_;
      lVar4 = FUN_144f072b0(&local_48,&local_58);
      if (0 < lVar4) {
        *param_1 = local_38;
        param_1[1] = uStack_30;
      }
    }
  }
  local_38 = 0;
  uStack_30 = 0;
  if ((*(char *)(lVar5 + 0x54) != '\0') &&
     (plVar2 = *(longlong **)(lVar5 + 0x30), plVar2 != (longlong *)0x0)) {
    local_68 = &local_38;
    iVar3 = (**(code **)(*plVar2 + 0x68))(plVar2,param_3,param_4,0);
    if ((iVar3 == 0) && ((local_38 != 0 || ((int)uStack_30 != 0)))) {
      local_48 = (undefined4)*param_1;
      uStack_44 = *(undefined4 *)((longlong)param_1 + 4);
      iStack_40 = (int)param_1[1];
      uStack_3c = *(undefined4 *)((longlong)param_1 + 0xc);
      local_58 = (undefined4)local_38;
      uStack_54 = local_38._4_4_;
      iStack_50 = (int)uStack_30;
      uStack_4c = uStack_30._4_4_;
      lVar5 = FUN_144f072b0(&local_58,&local_48);
      if (0 < lVar5) {
        *(undefined4 *)param_1 = (undefined4)local_38;
        *(undefined4 *)((longlong)param_1 + 4) = local_38._4_4_;
        *(int *)(param_1 + 1) = (int)uStack_30;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_30._4_4_;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_88);
}



// FUNCTION 1452d6810 FUN_1452d6810 body=463 status=ok
// SIG undefined FUN_1452d6810(void)

undefined8 FUN_1452d6810(longlong param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  int *piVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  iVar4 = *(int *)(param_1 + 0x20);
  piVar6 = *(int **)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x24) != '\0') {
    *param_4 = '\x01';
    return 0;
  }
  uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  if (*param_4 == (char)uVar5) {
    return uVar5;
  }
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)(*(code *)PTR_calloc_14c6d9f40)(0x38,1);
    if (piVar6 == (int *)0x0) {
      return 0x1b;
    }
    *(int **)(param_1 + 0x10) = piVar6;
  }
  if (*piVar6 == 0) {
    *piVar6 = 1;
    if (*(char *)(lVar2 + 0x2c8) == '\0') {
      if (*(char *)(lVar2 + 0x2d1) == '\0') {
        if (iVar4 == 1) {
          uVar5 = *(undefined8 *)(lVar2 + 0x88);
        }
        else {
          uVar5 = *(undefined8 *)(lVar2 + 0x70);
        }
      }
      else {
        uVar5 = *(undefined8 *)(lVar2 + 0xa0);
      }
    }
    else {
      uVar5 = *(undefined8 *)(lVar2 + 0xf8);
    }
    *(undefined8 *)(piVar6 + 6) = uVar5;
    if (*(char *)(lVar2 + 0x2c8) == '\0') {
      if (iVar4 == 1) {
        uVar3 = (uint)*(ushort *)(lVar2 + 0x4d2);
      }
      else if (*(char *)(lVar2 + 0x2d2) == '\0') {
        uVar3 = *(uint *)(lVar2 + 0x4c4);
      }
      else {
        uVar3 = *(uint *)(lVar2 + 0x4c8);
      }
    }
    else {
      uVar3 = *(uint *)(lVar2 + 0x108);
    }
    piVar6[8] = uVar3;
    *(undefined8 *)(piVar6 + 10) = *(undefined8 *)(lVar2 + 0xd8);
    *(undefined8 *)(piVar6 + 0xc) = *(undefined8 *)(lVar2 + 0xe0);
  }
  cVar1 = *(char *)(*(longlong *)(param_1 + 0x18) + 0xd4);
  if (cVar1 == '\x04') {
LAB_1452d696d:
    iVar4 = FUN_1452d6d00(param_1,piVar6,param_2);
  }
  else {
    if (cVar1 != '\x05') {
      if (cVar1 == '\x06') goto LAB_1452d696d;
      if (cVar1 != '\a') {
        FUN_144f14b70(param_2,"unknown proxytype option given");
        uVar5 = 7;
        goto LAB_1452d69bf;
      }
    }
    iVar4 = FUN_1452d72a0(param_1,piVar6,param_2);
  }
  if (iVar4 == 0) {
    uVar5 = 0;
    if (*piVar6 == 0x11) {
      *(undefined1 *)(param_1 + 0x24) = 1;
      FUN_144f0f1f0(param_2,lVar2);
      uVar5 = 0;
      if (*(longlong *)(param_1 + 0x10) != 0) {
        (*(code *)PTR_free_14c6d9f28)();
        uVar5 = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
      }
    }
  }
  else {
    uVar5 = 0x61;
    *(int *)(param_2 + 0x14c0) = iVar4;
  }
LAB_1452d69bf:
  *param_4 = *(char *)(param_1 + 0x24);
  return uVar5;
}



// FUNCTION 1452d69e0 FUN_1452d69e0 body=138 status=ok
// SIG undefined FUN_1452d69e0(void)

undefined8 FUN_1452d69e0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  piVar2 = *(int **)(param_1 + 0x10);
  uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
  if (((((int)uVar3 == 0) && (*(char *)(*(longlong *)(param_1 + 8) + 0x24) != (char)uVar3)) &&
      (*(char *)(param_1 + 0x24) == (char)uVar3)) && (piVar2 != (int *)0x0)) {
    uVar3 = FUN_144f13ec0(param_1,param_2);
    *param_3 = uVar3;
    iVar1 = *piVar2;
    if (((iVar1 == 4) || (iVar1 == 8)) ||
       ((iVar1 == 10 || ((iVar1 == 0xf || (uVar3 = 0x10000, iVar1 == 0x10)))))) {
      uVar3 = 1;
    }
  }
  return uVar3;
}



// FUNCTION 1452d6a70 FUN_1452d6a70 body=67 status=ok
// SIG undefined FUN_1452d6a70(void)

void FUN_1452d6a70(longlong param_1,undefined8 param_2)

{
  *(undefined1 *)(param_1 + 0x24) = 0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (*(code *)PTR_free_14c6d9f28)();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001452d6aaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),param_2);
  return;
}



// FUNCTION 1452d6ac0 FUN_1452d6ac0 body=38 status=ok
// SIG undefined FUN_1452d6ac0(void)

void FUN_1452d6ac0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (*(code *)PTR_free_14c6d9f28)();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



// FUNCTION 1452d6b30 FUN_1452d6b30 body=65 status=ok
// SIG undefined FUN_1452d6b30(void)

ulonglong FUN_1452d6b30(undefined8 param_1)

{
  ulonglong uVar1;
  undefined8 local_res18 [2];
  
  uVar1 = FUN_144f13b40(local_res18,&PTR_s_SOCKS_PROXYY_14c732570,0);
  if ((int)uVar1 == 0) {
    FUN_144f13bd0(param_1,local_res18[0]);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 1452d6b80 FUN_1452d6b80 body=180 status=ok
// SIG undefined FUN_1452d6b80(void)

undefined4
FUN_1452d6b80(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  int local_res8 [2];
  
  lVar1 = FUN_144f13da0(*(undefined8 *)(param_1 + 8),param_3,*(undefined8 *)(param_2 + 0x10),
                        *(undefined8 *)(param_2 + 8),local_res8);
  if (lVar1 < 1) {
    if (local_res8[0] != 0x51) {
      if (local_res8[0] == 0) {
        FUN_144f14b70(param_3,"connection to proxy closed");
        return 3;
      }
      uVar2 = FUN_144bbdb50();
      FUN_144f14b70(param_3,"Failed to send %s: %s",param_5,uVar2);
      return param_4;
    }
  }
  else {
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) - lVar1;
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + lVar1;
  }
  return 0;
}



// FUNCTION 1452d6c40 FUN_1452d6c40 body=180 status=ok
// SIG undefined FUN_1452d6c40(void)

undefined4
FUN_1452d6c40(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  int local_res8 [2];
  
  lVar1 = FUN_144f13dc0(*(undefined8 *)(param_1 + 8),param_3,*(undefined8 *)(param_2 + 0x10),
                        *(undefined8 *)(param_2 + 8),local_res8);
  if (lVar1 < 1) {
    if (local_res8[0] != 0x51) {
      if (local_res8[0] == 0) {
        FUN_144f14b70(param_3,"connection to proxy closed");
        return 3;
      }
      uVar2 = FUN_144bbdb50();
      FUN_144f14b70(param_3,"SOCKS4: Failed receiving %s: %s",param_5,uVar2);
      return param_4;
    }
  }
  else {
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) - lVar1;
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + lVar1;
  }
  return 0;
}



// FUNCTION 1452d6d00 FUN_1452d6d00 body=1347 status=ok
// SIG undefined FUN_1452d6d00(void)

void FUN_1452d6d00(longlong param_1,int *param_2,longlong param_3)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  void *_Src;
  int iVar4;
  int iVar5;
  longlong lVar6;
  char *pcVar7;
  char *pcVar8;
  longlong lVar9;
  undefined1 *puVar11;
  ulonglong uVar12;
  char *pcVar14;
  uint uVar15;
  undefined1 *puVar16;
  undefined1 auStack_d8 [32];
  longlong **local_b8;
  uint local_b0;
  uint local_a8;
  uint local_a0;
  longlong *local_98 [2];
  undefined1 local_88 [64];
  ulonglong local_48;
  longlong lVar10;
  ulonglong uVar13;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  pcVar8 = *(char **)(param_3 + 0xcd8);
  puVar16 = &DAT_14996de1b;
  lVar9 = *(longlong *)(param_1 + 0x18);
  cVar1 = *(char *)(lVar9 + 0xd4);
  local_98[0] = (longlong *)0x0;
  switch(*param_2) {
  case 1:
    *(undefined1 *)(lVar9 + 0x4d8) = 1;
    if (*(char *)(lVar9 + 0x2c8) != '\0') {
      local_b8 = (longlong **)CONCAT44(local_b8._4_4_,param_2[8]);
      puVar11 = &DAT_14996de1b;
      if (cVar1 == '\x06') {
        puVar11 = &DAT_14998c12c;
      }
      FUN_144f14ad0(param_3,"SOCKS4%s: connecting to HTTP proxy %s port %d",puVar11,
                    *(undefined8 *)(param_2 + 6));
    }
    FUN_144f14ad0(param_3,"SOCKS4 communication to %s:%d",*(undefined8 *)(param_2 + 6),param_2[8]);
    pcVar8[0] = '\x04';
    pcVar8[1] = '\x01';
    pcVar8[2] = (char)((uint)param_2[8] >> 8);
    pcVar8[3] = (char)param_2[8];
    if (cVar1 == '\x06') {
      if (*param_2 != 9) {
        *param_2 = 9;
      }
      goto switchD_1452d6d7d_caseD_9;
    }
    local_b8 = local_98;
    iVar4 = FUN_144f1af60(param_3,*(undefined8 *)(param_2 + 6),param_2[8],1);
    if (iVar4 == -1) goto LAB_1452d7233;
    iVar5 = *param_2;
    if (iVar4 != 1) goto LAB_1452d6e37;
    if (iVar5 != 10) {
      *param_2 = 10;
    }
    puVar16 = *(undefined1 **)(param_2 + 6);
    pcVar8 = "SOCKS4 non-blocking resolve of %s";
    goto LAB_1452d7229;
  default:
    goto switchD_1452d6d7d_caseD_2;
  case 4:
    goto switchD_1452d6d7d_caseD_4;
  case 9:
    goto switchD_1452d6d7d_caseD_9;
  case 10:
    break;
  case 0xb:
    goto switchD_1452d6d7d_caseD_b;
  case 0xe:
    goto switchD_1452d6d7d_caseD_e;
  }
  local_98[0] = (longlong *)
                FUN_144f1b790(param_3,*(undefined8 *)(param_2 + 6),*(undefined4 *)(lVar9 + 0x4c0));
  if (local_98[0] == (longlong *)0x0) {
    FUN_144f1c060(param_3,local_98);
    if (local_98[0] == (longlong *)0x0) goto LAB_1452d7233;
  }
  else {
    *(longlong **)(param_3 + 0xe48) = local_98[0];
    *(undefined1 *)(param_3 + 0xe68) = 1;
    FUN_144f14ad0(param_3,"Hostname \'%s\' was found",*(undefined8 *)(param_2 + 6));
    iVar5 = *param_2;
LAB_1452d6e37:
    if (iVar5 != 0xb) {
      *param_2 = 0xb;
    }
  }
switchD_1452d6d7d_caseD_b:
  if (local_98[0] == (longlong *)0x0) {
    FUN_144f14b70(param_3,"Failed to resolve \"%s\" for SOCKS4 connect.",
                  *(undefined8 *)(param_2 + 6));
  }
  else {
    for (lVar9 = *local_98[0]; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x28)) {
      if (*(int *)(lVar9 + 4) == 2) {
        FUN_144f1b750(lVar9,local_88,0x40);
        lVar6 = *(longlong *)(lVar9 + 0x20);
        pcVar8[4] = *(char *)(lVar6 + 4);
        pcVar8[5] = *(char *)(lVar6 + 5);
        pcVar8[6] = *(char *)(lVar6 + 6);
        pcVar8[7] = *(char *)(lVar6 + 7);
        FUN_144f14ad0(param_3,"SOCKS4 connect to IPv4 %s (locally resolved)",local_88);
        FUN_144f1b540(param_3,local_98[0]);
        goto LAB_1452d6e7b;
      }
    }
    FUN_144f14b70(param_3,"SOCKS4 connection to %s not supported",*(undefined8 *)(param_2 + 6));
LAB_1452d6e7b:
    if (lVar9 != 0) {
switchD_1452d6d7d_caseD_9:
      pcVar8[8] = '\0';
      _Src = *(void **)(param_2 + 10);
      if (_Src != (void *)0x0) {
        uVar12 = 0xffffffffffffffff;
        do {
          uVar13 = uVar12;
          uVar12 = uVar13 + 1;
        } while (*(char *)((longlong)_Src + uVar12) != '\0');
        if ((ulonglong)*(uint *)(param_3 + 0x6cc) - 8 <= uVar12) {
          FUN_144f14b70(param_3,"Too long SOCKS proxy user name, can\'t use");
          goto LAB_1452d7233;
        }
        memcpy(pcVar8 + 8,_Src,uVar13 + 2);
      }
      lVar9 = -1;
      do {
        lVar6 = lVar9;
        lVar9 = lVar6 + 1;
      } while (pcVar8[lVar6 + 9] != '\0');
      lVar6 = lVar6 + 10;
      if (cVar1 == '\x06') {
        pcVar8[4] = '\0';
        pcVar8[5] = '\0';
        pcVar8[6] = '\0';
        pcVar8[7] = '\x01';
        pcVar7 = *(char **)(param_2 + 6);
        lVar9 = -1;
        do {
          lVar10 = lVar9;
          lVar9 = lVar10 + 1;
        } while (pcVar7[lVar9] != '\0');
        uVar12 = lVar10 + 2;
        if (0xff < uVar12) {
          FUN_144f14b70(param_3,"SOCKS4: too long host name");
          goto LAB_1452d7233;
        }
        pcVar14 = pcVar8 + lVar6;
        do {
          cVar3 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          *pcVar14 = cVar3;
          pcVar14 = pcVar14 + 1;
        } while (cVar3 != '\0');
        lVar6 = lVar6 + uVar12;
      }
      *(char **)(param_2 + 4) = pcVar8;
      *(longlong *)(param_2 + 2) = lVar6;
      if (*param_2 != 0xe) {
        *param_2 = 0xe;
      }
switchD_1452d6d7d_caseD_e:
      local_b8 = (longlong **)0x149d2b230;
      iVar5 = FUN_1452d6b80(param_1,param_2,param_3,0x1d);
      if ((iVar5 == 0) && (*(longlong *)(param_2 + 2) == 0)) {
        param_2[2] = 8;
        param_2[3] = 0;
        *(char **)(param_2 + 4) = pcVar8;
        if (*param_2 != 4) {
          *param_2 = 4;
        }
switchD_1452d6d7d_caseD_4:
        local_b8 = (longlong **)0x149d2b248;
        iVar5 = FUN_1452d6c40(param_1,param_2,param_3,0xf);
        if ((iVar5 == 0) && (*(longlong *)(param_2 + 2) == 0)) {
          if (*param_2 != 0x11) {
            *param_2 = 0x11;
          }
switchD_1452d6d7d_caseD_2:
          if (*pcVar8 == '\0') {
            bVar2 = pcVar8[1];
            uVar15 = (uint)bVar2;
            if (bVar2 == 0x5a) {
              pcVar8 = "SOCKS4%s request granted.";
              if (cVar1 == '\x06') {
                puVar16 = &DAT_14998c12c;
              }
LAB_1452d7229:
              FUN_144f14ad0(param_3,pcVar8,puVar16);
            }
            else {
              cVar1 = pcVar8[5];
              cVar3 = pcVar8[4];
              local_a0 = uVar15;
              if (bVar2 == 0x5b) {
                local_a8 = (uint)CONCAT11(pcVar8[2],pcVar8[3]);
                local_b0 = (uint)(byte)pcVar8[7];
                local_b8 = (longlong **)CONCAT44(local_b8._4_4_,(uint)(byte)pcVar8[6]);
                FUN_144f14b70(param_3,
                              "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected or failed."
                              ,cVar3,cVar1);
              }
              else if (bVar2 == 0x5c) {
                local_a8 = (uint)CONCAT11(pcVar8[2],pcVar8[3]);
                local_b0 = (uint)(byte)pcVar8[7];
                local_b8 = (longlong **)CONCAT44(local_b8._4_4_,(uint)(byte)pcVar8[6]);
                FUN_144f14b70(param_3,
                              "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected because SOCKS server cannot connect to identd on the client."
                              ,cVar3,cVar1);
              }
              else if (bVar2 == 0x5d) {
                local_a8 = (uint)CONCAT11(pcVar8[2],pcVar8[3]);
                local_b0 = (uint)(byte)pcVar8[7];
                local_b8 = (longlong **)CONCAT44(local_b8._4_4_,(uint)(byte)pcVar8[6]);
                FUN_144f14b70(param_3,
                              "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected because the client program and identd report different user-ids."
                              ,cVar3,cVar1);
              }
              else {
                local_a8 = (uint)CONCAT11(pcVar8[2],pcVar8[3]);
                local_b0 = (uint)(byte)pcVar8[7];
                local_b8 = (longlong **)CONCAT44(local_b8._4_4_,(uint)(byte)pcVar8[6]);
                FUN_144f14b70(param_3,
                              "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), Unknown.",
                              cVar3,cVar1);
              }
            }
          }
          else {
            FUN_144f14b70(param_3,"SOCKS4 reply has wrong version, version should be 0.");
          }
        }
      }
    }
  }
LAB_1452d7233:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
}



// FUNCTION 1452d72a0 FUN_1452d72a0 body=2278 status=ok
// SIG undefined FUN_1452d72a0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1452d72a0(longlong param_1,int *param_2,longlong param_3)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  void *_Src;
  int iVar5;
  uint uVar6;
  ulonglong _Size;
  ulonglong uVar7;
  ulonglong _Size_00;
  ulonglong uVar8;
  undefined1 auStack_c8 [32];
  longlong **local_a8;
  char local_98;
  longlong *local_90;
  longlong local_88 [6];
  undefined4 local_58;
  undefined2 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  ulonglong uVar9;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar7 = 0xffffffffffffffff;
  local_88[0] = *(longlong *)(param_1 + 0x18);
  lVar3 = *(longlong *)(param_2 + 6);
  pcVar4 = *(char **)(param_3 + 0xcd8);
  local_98 = *(char *)(local_88[0] + 0xd4);
  uVar8 = 0xffffffffffffffff;
  do {
    uVar9 = uVar8;
    uVar8 = uVar9 + 1;
  } while (*(char *)(lVar3 + uVar8) != '\0');
  _Size = 0;
  bVar1 = *(byte *)(param_3 + 0x6b3);
  local_90 = (longlong *)0x0;
  switch(*param_2) {
  case 1:
    if (*(char *)(local_88[0] + 0x2c8) != '\0') {
      FUN_144f14ad0(param_3,"SOCKS5: connecting to HTTP proxy %s port %d",lVar3,param_2[8]);
    }
    if ((local_98 != '\x05') && (0xff < uVar8)) {
      FUN_144f14b70(param_3,
                    "SOCKS5: the destination hostname is too long to be resolved remotely by the proxy."
                   );
      goto LAB_1452d7b55;
    }
    if ((bVar1 & 0xfa) != 0) {
      FUN_144f14ad0(param_3,"warning: unsupported value passed to CURLOPT_SOCKS5_AUTH: %u",bVar1);
    }
    if ((bVar1 & 1) == 0) {
      param_2[10] = 0;
      param_2[0xb] = 0;
    }
    *pcVar4 = '\x05';
    uVar6 = 3;
    pcVar4[2] = '\0';
    if (*(longlong *)(param_2 + 10) != 0) {
      pcVar4[3] = '\x02';
      uVar6 = 4;
    }
    pcVar4[1] = (char)uVar6 + -2;
    *(ulonglong *)(param_2 + 2) = (ulonglong)uVar6;
    *(char **)(param_2 + 4) = pcVar4;
    local_a8 = (longlong **)0x149d2b558;
    iVar5 = FUN_1452d6b80(param_1,param_2,param_3,0x1d);
    if ((iVar5 != 0) || (*(longlong *)(param_2 + 2) != 0)) goto LAB_1452d7b55;
    if (*param_2 != 4) {
      *param_2 = 4;
    }
    break;
  case 2:
    local_a8 = (longlong **)0x149d2b558;
    iVar5 = FUN_1452d6b80(param_1,param_2,param_3,0x1d);
    if ((iVar5 != 0) || (*(longlong *)(param_2 + 2) != 0)) goto LAB_1452d7b55;
    break;
  case 3:
    break;
  case 4:
    goto switchD_1452d733a_caseD_4;
  default:
    goto switchD_1452d733a_caseD_5;
  case 6:
    goto switchD_1452d733a_caseD_6;
  case 7:
    goto switchD_1452d733a_caseD_7;
  case 8:
    goto switchD_1452d733a_caseD_8;
  case 9:
    goto switchD_1452d733a_caseD_9;
  case 10:
    local_90 = (longlong *)FUN_144f1b790(param_3,lVar3,param_2[8]);
    if (local_90 != (longlong *)0x0) {
      *(longlong **)(param_3 + 0xe48) = local_90;
      *(undefined1 *)(param_3 + 0xe68) = 1;
      FUN_144f14ad0(param_3,"SOCKS5: hostname \'%s\' found",*(undefined8 *)(param_2 + 6));
      if (local_90 != (longlong *)0x0) goto switchD_1452d733a_caseD_b;
    }
    FUN_144f1c060(param_3,&local_90);
    if (local_90 == (longlong *)0x0) goto LAB_1452d7b55;
  case 0xb:
    goto switchD_1452d733a_caseD_b;
  case 0xc:
    pcVar4[2] = '\0';
    _Size = 3;
    pcVar4[0] = '\x05';
    pcVar4[1] = '\x01';
    if (local_98 == '\x05') goto switchD_1452d733a_caseD_d;
    goto LAB_1452d7932;
  case 0xd:
    goto switchD_1452d733a_caseD_d;
  case 0xe:
    goto switchD_1452d733a_caseD_e;
  case 0xf:
    goto switchD_1452d733a_caseD_f;
  case 0x10:
    goto switchD_1452d733a_caseD_10;
  }
  param_2[2] = 2;
  param_2[3] = 0;
  *(char **)(param_2 + 4) = pcVar4;
switchD_1452d733a_caseD_4:
  local_a8 = (longlong **)0x149d2b570;
  iVar5 = FUN_1452d6c40(param_1,param_2,param_3,0xf);
  if ((iVar5 != 0) || (*(longlong *)(param_2 + 2) != 0)) goto LAB_1452d7b55;
  if (*pcVar4 != '\x05') {
    FUN_144f14b70(param_3,"Received invalid version in initial SOCKS5 response.");
    goto LAB_1452d7b55;
  }
  cVar2 = pcVar4[1];
  if (cVar2 != '\0') {
    if (cVar2 != '\x02') {
      if (cVar2 == '\x01') {
        FUN_144f14b70(param_3,"SOCKS5 GSSAPI per-message authentication is not supported.");
      }
      else if (cVar2 == -1) {
        FUN_144f14b70(param_3,"No authentication method was acceptable.");
      }
      else {
        FUN_144f14b70(param_3,"Undocumented SOCKS5 mode attempted to be used by server.");
      }
      goto LAB_1452d7b55;
    }
    if (*param_2 != 6) {
      *param_2 = 6;
    }
switchD_1452d733a_caseD_6:
    _Size_00 = _Size;
    if ((*(longlong *)(param_2 + 10) != 0) && (lVar3 = *(longlong *)(param_2 + 0xc), lVar3 != 0)) {
      _Size = 0xffffffffffffffff;
      do {
        _Size = _Size + 1;
      } while (*(char *)(*(longlong *)(param_2 + 10) + _Size) != '\0');
      do {
        uVar7 = uVar7 + 1;
        _Size_00 = uVar7;
      } while (*(char *)(lVar3 + uVar7) != '\0');
    }
    *pcVar4 = '\x01';
    pcVar4[1] = (char)_Size;
    if ((*(void **)(param_2 + 10) != (void *)0x0) && (_Size != 0)) {
      if (0xff < _Size) {
        FUN_144f14b70(param_3,"Excessive user name length for proxy auth");
        goto LAB_1452d7b55;
      }
      memcpy(pcVar4 + 2,*(void **)(param_2 + 10),_Size);
    }
    pcVar4[_Size + 2] = (char)_Size_00;
    _Src = *(void **)(param_2 + 0xc);
    if ((_Src != (void *)0x0) && (_Size_00 != 0)) {
      if (0xff < _Size_00) {
        FUN_144f14b70(param_3,"Excessive password length for proxy auth");
        goto LAB_1452d7b55;
      }
      memcpy(pcVar4 + _Size + 3,_Src,_Size_00);
    }
    if (*param_2 != 7) {
      *param_2 = 7;
    }
    *(ulonglong *)(param_2 + 2) = _Size + 3 + _Size_00;
    *(char **)(param_2 + 4) = pcVar4;
switchD_1452d733a_caseD_7:
    local_a8 = (longlong **)0x149d2b6d0;
    iVar5 = FUN_1452d6b80(param_1,param_2,param_3,0x1c);
    if ((iVar5 != 0) || (*(longlong *)(param_2 + 2) != 0)) goto LAB_1452d7b55;
    *(char **)(param_2 + 4) = pcVar4;
    param_2[2] = 2;
    param_2[3] = 0;
    if (*param_2 != 8) {
      *param_2 = 8;
    }
switchD_1452d733a_caseD_8:
    local_a8 = (longlong **)0x149d2b6f0;
    iVar5 = FUN_1452d6c40(param_1,param_2,param_3,0xe);
    if ((iVar5 != 0) || (*(longlong *)(param_2 + 2) != 0)) goto LAB_1452d7b55;
    if (pcVar4[1] != '\0') {
      FUN_144f14b70(param_3,"User was rejected by the SOCKS5 server (%d %d).",*pcVar4,pcVar4[1]);
      goto LAB_1452d7b55;
    }
  }
  if (*param_2 != 9) {
    *param_2 = 9;
  }
switchD_1452d733a_caseD_9:
  if (local_98 == '\x05') {
    local_a8 = &local_90;
    iVar5 = FUN_144f1af60(param_3,*(undefined8 *)(param_2 + 6),param_2[8],1);
    if (iVar5 == -1) goto LAB_1452d7b55;
    if (iVar5 == 1) {
      if (*param_2 != 10) {
        *param_2 = 10;
      }
      goto LAB_1452d7b55;
    }
    if (*param_2 != 0xb) {
      *param_2 = 0xb;
    }
switchD_1452d733a_caseD_b:
    local_88[1] = 0x6e776f6e6b6e75;
    local_58 = 0;
    local_54 = 0;
    local_88[2] = 0;
    local_88[3] = 0;
    local_88[4] = 0;
    local_88[5] = 0;
    if ((local_90 == (longlong *)0x0) || (lVar3 = *local_90, lVar3 == 0)) {
      FUN_144f14b70(param_3,"Failed to resolve \"%s\" for SOCKS5 connect.",
                    *(undefined8 *)(param_2 + 6));
      goto LAB_1452d7b55;
    }
    FUN_144f1b750(lVar3,local_88 + 1,0x2e);
    pcVar4[0] = '\x05';
    pcVar4[1] = '\x01';
    _Size = 3;
    pcVar4[2] = '\0';
    if (*(int *)(lVar3 + 4) == 2) {
      pcVar4[3] = '\x01';
      lVar3 = *(longlong *)(lVar3 + 0x20);
      _Size = 8;
      pcVar4[4] = *(char *)(lVar3 + 4);
      pcVar4[5] = *(char *)(lVar3 + 5);
      pcVar4[6] = *(char *)(lVar3 + 6);
      pcVar4[7] = *(char *)(lVar3 + 7);
      FUN_144f14ad0(param_3,"SOCKS5 connect to %s:%d (locally resolved)",local_88 + 1,param_2[8]);
      FUN_144f1b540(param_3,local_90);
    }
    else if (*(int *)(lVar3 + 4) == 0x17) {
      pcVar4[3] = '\x04';
      lVar3 = *(longlong *)(lVar3 + 0x20);
      _Size = 0x14;
      pcVar4[4] = *(char *)(lVar3 + 8);
      pcVar4[5] = *(char *)(lVar3 + 9);
      pcVar4[6] = *(char *)(lVar3 + 10);
      pcVar4[7] = *(char *)(lVar3 + 0xb);
      pcVar4[8] = *(char *)(lVar3 + 0xc);
      pcVar4[9] = *(char *)(lVar3 + 0xd);
      pcVar4[10] = *(char *)(lVar3 + 0xe);
      pcVar4[0xb] = *(char *)(lVar3 + 0xf);
      pcVar4[0xc] = *(char *)(lVar3 + 0x10);
      pcVar4[0xd] = *(char *)(lVar3 + 0x11);
      pcVar4[0xe] = *(char *)(lVar3 + 0x12);
      pcVar4[0xf] = *(char *)(lVar3 + 0x13);
      pcVar4[0x10] = *(char *)(lVar3 + 0x14);
      pcVar4[0x11] = *(char *)(lVar3 + 0x15);
      pcVar4[0x12] = *(char *)(lVar3 + 0x16);
      pcVar4[0x13] = *(char *)(lVar3 + 0x17);
      FUN_144f14ad0(param_3,"SOCKS5 connect to [%s]:%d (locally resolved)",local_88 + 1,param_2[8]);
      FUN_144f1b540(param_3,local_90);
    }
    else {
      FUN_144f14b70(param_3,"SOCKS5 connection to %s not supported",local_88 + 1);
      FUN_144f1b540(param_3,local_90);
    }
  }
  else {
    pcVar4[0] = '\x05';
    pcVar4[1] = '\x01';
    pcVar4[2] = '\0';
LAB_1452d7932:
    if (*(char *)(local_88[0] + 0x2d3) == '\0') {
      iVar5 = inet_pton(2,*(undefined8 *)(param_2 + 6),local_88);
      if (iVar5 == 1) {
        pcVar4[3] = '\x01';
        _Size = 8;
        *(undefined4 *)(pcVar4 + 4) = (undefined4)local_88[0];
      }
      else {
        pcVar4[3] = '\x03';
        pcVar4[4] = (char)uVar8;
        memcpy(pcVar4 + 5,*(void **)(param_2 + 6),uVar8);
        _Size = uVar9 + 6;
      }
    }
    else {
      iVar5 = inet_pton(0x17,*(undefined8 *)(param_2 + 6),&local_50);
      if (iVar5 != 1) goto LAB_1452d7b55;
      pcVar4[3] = '\x04';
      _Size = 0x14;
      *(undefined8 *)(pcVar4 + 4) = local_50;
      *(undefined8 *)(pcVar4 + 0xc) = uStack_48;
    }
    FUN_144f14ad0(param_3,"SOCKS5 connect to %s:%d (remotely resolved)",*(undefined8 *)(param_2 + 6)
                  ,param_2[8]);
  }
switchD_1452d733a_caseD_d:
  pcVar4[_Size] = (char)((uint)param_2[8] >> 8);
  pcVar4[_Size + 1] = (char)param_2[8];
  *(ulonglong *)(param_2 + 2) = _Size + 2;
  *(char **)(param_2 + 4) = pcVar4;
  if (*param_2 != 0xe) {
    *param_2 = 0xe;
  }
switchD_1452d733a_caseD_e:
  local_a8 = (longlong **)0x149d2b848;
  iVar5 = FUN_1452d6b80(param_1,param_2,param_3,0x1e);
  if ((iVar5 != 0) || (*(longlong *)(param_2 + 2) != 0)) goto LAB_1452d7b55;
  param_2[2] = 10;
  param_2[3] = 0;
  *(char **)(param_2 + 4) = pcVar4;
  if (*param_2 != 0xf) {
    *param_2 = 0xf;
  }
switchD_1452d733a_caseD_f:
  local_a8 = (longlong **)0x149d2b860;
  iVar5 = FUN_1452d6c40(param_1,param_2,param_3,0x10);
  if ((iVar5 != 0) || (*(longlong *)(param_2 + 2) != 0)) goto LAB_1452d7b55;
  if (*pcVar4 != '\x05') {
    FUN_144f14b70(param_3,"SOCKS5 reply has wrong version, version should be 5.");
    goto LAB_1452d7b55;
  }
  if (pcVar4[1] != '\0') {
    FUN_144f14b70(param_3,"Can\'t complete SOCKS5 connection to %s. (%d)",
                  *(undefined8 *)(param_2 + 6),pcVar4[1]);
    goto LAB_1452d7b55;
  }
  cVar2 = pcVar4[3];
  if (cVar2 == '\x03') {
    iVar5 = *param_2;
    uVar8 = (ulonglong)(byte)pcVar4[4] + 7;
    if (10 < uVar8) {
LAB_1452d7af3:
      *(ulonglong *)(param_2 + 2) = uVar8 - 10;
      *(char **)(param_2 + 4) = pcVar4 + 10;
      if (iVar5 != 0x10) {
        *param_2 = 0x10;
      }
switchD_1452d733a_caseD_10:
      local_a8 = (longlong **)0x149d2b910;
      iVar5 = FUN_1452d6c40(param_1,param_2,param_3,0xd);
      if ((iVar5 != 0) || (*(longlong *)(param_2 + 2) != 0)) goto LAB_1452d7b55;
      iVar5 = *param_2;
    }
  }
  else {
    if (cVar2 == '\x04') {
      iVar5 = *param_2;
      uVar8 = 0x16;
      goto LAB_1452d7af3;
    }
    if (cVar2 != '\x01') {
      FUN_144f14b70(param_3,"SOCKS5 reply has wrong address type.");
      goto LAB_1452d7b55;
    }
    iVar5 = *param_2;
  }
  if (iVar5 != 0x11) {
    *param_2 = 0x11;
  }
switchD_1452d733a_caseD_5:
  FUN_144f14ad0(param_3,"SOCKS5 request granted.");
LAB_1452d7b55:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_c8);
}



// FUNCTION 1452d7bf0 FUN_1452d7bf0 body=3 status=ok
// SIG undefined FUN_1452d7bf0(void)

undefined1 FUN_1452d7bf0(void)

{
  return 1;
}



// FUNCTION 1452d7c00 FUN_1452d7c00 body=1952 status=ok
// SIG undefined FUN_1452d7c00(void)

void FUN_1452d7c00(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  longlong lVar6;
  char *pcVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  undefined1 auStack_2e8 [32];
  char *local_2c8;
  char *local_2c0;
  longlong local_2b8;
  undefined1 *local_2b0;
  undefined4 *local_2a8;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined1 local_27c;
  char local_278 [16];
  undefined1 local_268 [16];
  char local_258 [8];
  undefined4 local_250;
  undefined1 local_24c;
  char local_248 [48];
  char local_218 [64];
  undefined1 local_1d8 [40];
  undefined1 local_1b0 [40];
  undefined1 local_188 [48];
  char local_158 [64];
  char local_118 [64];
  char local_d8 [128];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  local_290 = param_5;
  local_288 = param_6;
  builtin_strncpy(local_278,"00000001",9);
  local_250 = 0x45544143;
  local_24c = 0;
  local_280 = 0x68747561;
  local_27c = 0;
  builtin_strncpy(local_258,"AUTHENTI",8);
  pcVar5 = (char *)FUN_14550c820(param_2);
  lVar6 = FUN_14550c830(param_2);
  if ((lVar6 != 0) && (pcVar7 = strstr(pcVar5,"nonce=\""), pcVar7 != (char *)0x0)) {
    cVar1 = pcVar7[7];
    pcVar7 = pcVar7 + 7;
    uVar12 = 0;
    for (uVar8 = uVar12; ((cVar1 != '\0' && (cVar1 != '\"')) && (uVar8 < 0x3f)); uVar8 = uVar8 + 1)
    {
      pcVar7 = pcVar7 + 1;
      local_218[uVar8] = cVar1;
      cVar1 = *pcVar7;
    }
    local_218[uVar8] = '\0';
    pcVar7 = strstr(pcVar5,"realm=\"");
    if (pcVar7 == (char *)0x0) {
      local_d8[0] = '\0';
    }
    else {
      cVar1 = pcVar7[7];
      pcVar7 = pcVar7 + 7;
      for (uVar8 = uVar12; ((cVar1 != '\0' && (cVar1 != '\"')) && (uVar8 < 0x7f)); uVar8 = uVar8 + 1
          ) {
        pcVar7 = pcVar7 + 1;
        local_d8[uVar8] = cVar1;
        cVar1 = *pcVar7;
      }
      local_d8[uVar8] = '\0';
    }
    pcVar7 = strstr(pcVar5,"algorithm=");
    if (pcVar7 != (char *)0x0) {
      cVar1 = pcVar7[10];
      pcVar7 = pcVar7 + 10;
      for (uVar8 = uVar12; ((cVar1 != '\0' && (cVar1 != ',')) && (uVar8 < 0x3f)); uVar8 = uVar8 + 1)
      {
        pcVar7 = pcVar7 + 1;
        local_158[uVar8] = cVar1;
        cVar1 = *pcVar7;
      }
      local_158[uVar8] = '\0';
      pcVar5 = strstr(pcVar5,"qop=\"");
      if (pcVar5 != (char *)0x0) {
        cVar1 = pcVar5[5];
        pcVar5 = pcVar5 + 5;
        for (uVar8 = uVar12; ((cVar1 != '\0' && (cVar1 != '\"')) && (uVar8 < 0x3f));
            uVar8 = uVar8 + 1) {
          pcVar5 = pcVar5 + 1;
          local_118[uVar8] = cVar1;
          cVar1 = *pcVar5;
        }
        local_118[uVar8] = '\0';
        iVar3 = strcmp(local_158,"md5-sess");
        if (iVar3 == 0) {
          local_298 = 0;
          lVar6 = (*(code *)PTR__strdup_14c6d9f38)(local_118);
          if (lVar6 != 0) {
            lVar9 = FUN_1452b1a10(lVar6,&DAT_1499722dc,&local_298);
            uVar8 = uVar12;
            while (lVar9 != 0) {
              iVar3 = FUN_144f19540(lVar9,&DAT_149d2b978);
              if (iVar3 == 0) {
                iVar3 = FUN_144f19540(lVar9,"auth-int");
                if (iVar3 == 0) {
                  FUN_144f19540(lVar9,"auth-conf");
                }
              }
              else {
                uVar8 = 1;
              }
              lVar9 = FUN_1452b1a10(0,&DAT_1499722dc,&local_298);
            }
            (*(code *)PTR_free_14c6d9f28)(lVar6);
            if (((uVar8 != 0) && (iVar3 = FUN_1452b3120(param_1,local_248,0x21), iVar3 == 0)) &&
               (lVar6 = FUN_14550d670(&PTR_FUN_149d9b758), lVar6 != 0)) {
              lVar11 = -1;
              lVar9 = -1;
              do {
                lVar9 = lVar9 + 1;
              } while (*(char *)(param_3 + lVar9) != '\0');
              uVar4 = FUN_144f16fc0();
              FUN_14550d6e0(lVar6,param_3,uVar4);
              FUN_14550d6e0(lVar6,&DAT_149c05284,1);
              lVar9 = -1;
              do {
                lVar10 = lVar9 + 1;
                lVar9 = lVar9 + 1;
              } while (local_d8[lVar10] != '\0');
              uVar4 = FUN_144f16fc0();
              FUN_14550d6e0(lVar6,local_d8,uVar4);
              FUN_14550d6e0(lVar6,&DAT_149c05284,1);
              lVar9 = -1;
              do {
                lVar9 = lVar9 + 1;
              } while (*(char *)(param_4 + lVar9) != '\0');
              uVar4 = FUN_144f16fc0();
              FUN_14550d6e0(lVar6,param_4,uVar4);
              FUN_14550d700(lVar6,local_268);
              lVar6 = FUN_14550d670(&PTR_FUN_149d9b758);
              if (lVar6 != 0) {
                FUN_14550d6e0(lVar6,local_268,0x10);
                FUN_14550d6e0(lVar6,&DAT_149c05284,1);
                lVar9 = -1;
                do {
                  lVar10 = lVar9 + 1;
                  lVar9 = lVar9 + 1;
                } while (local_218[lVar10] != '\0');
                uVar4 = FUN_144f16fc0();
                FUN_14550d6e0(lVar6,local_218,uVar4);
                FUN_14550d6e0(lVar6,&DAT_149c05284,1);
                lVar9 = -1;
                do {
                  lVar10 = lVar9 + 1;
                  lVar9 = lVar9 + 1;
                } while (local_248[lVar10] != '\0');
                uVar4 = FUN_144f16fc0();
                FUN_14550d6e0(lVar6,local_248,uVar4);
                FUN_14550d700(lVar6,local_268);
                puVar13 = local_1d8;
                uVar8 = uVar12;
                do {
                  FUN_144f2b7e0(puVar13,3,&DAT_149d25a30,local_268[uVar8]);
                  uVar8 = uVar8 + 1;
                  puVar13 = puVar13 + 2;
                } while (uVar8 < 0x10);
                lVar6 = FUN_1452db880(local_290,
                                      *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x70),0);
                if (lVar6 != 0) {
                  lVar9 = FUN_14550d670(&PTR_FUN_149d9b758);
                  if (lVar9 != 0) {
                    lVar10 = -1;
                    do {
                      lVar2 = lVar10 + 1;
                      lVar10 = lVar10 + 1;
                    } while (local_258[lVar2] != '\0');
                    uVar4 = FUN_144f16fc0();
                    FUN_14550d6e0(lVar9,local_258,uVar4);
                    FUN_14550d6e0(lVar9,&DAT_149c05284,1);
                    lVar10 = -1;
                    do {
                      lVar10 = lVar10 + 1;
                    } while (*(char *)(lVar6 + lVar10) != '\0');
                    uVar4 = FUN_144f16fc0();
                    FUN_14550d6e0(lVar9,lVar6,uVar4);
                    FUN_14550d700(lVar9,local_268);
                    puVar13 = local_1b0;
                    uVar8 = uVar12;
                    do {
                      FUN_144f2b7e0(puVar13,3,&DAT_149d25a30,local_268[uVar8]);
                      uVar8 = uVar8 + 1;
                      puVar13 = puVar13 + 2;
                    } while (uVar8 < 0x10);
                    lVar9 = FUN_14550d670(&PTR_FUN_149d9b758);
                    if (lVar9 != 0) {
                      FUN_14550d6e0(lVar9,local_1d8,0x20);
                      FUN_14550d6e0(lVar9,&DAT_149c05284,1);
                      lVar10 = -1;
                      do {
                        lVar2 = lVar10 + 1;
                        lVar10 = lVar10 + 1;
                      } while (local_218[lVar2] != '\0');
                      uVar4 = FUN_144f16fc0();
                      FUN_14550d6e0(lVar9,local_218,uVar4);
                      FUN_14550d6e0(lVar9,&DAT_149c05284,1);
                      lVar10 = -1;
                      do {
                        lVar2 = lVar10 + 1;
                        lVar10 = lVar10 + 1;
                      } while (local_278[lVar2] != '\0');
                      uVar4 = FUN_144f16fc0();
                      FUN_14550d6e0(lVar9,local_278,uVar4);
                      FUN_14550d6e0(lVar9,&DAT_149c05284,1);
                      lVar10 = -1;
                      do {
                        lVar2 = lVar10 + 1;
                        lVar10 = lVar10 + 1;
                      } while (local_248[lVar2] != '\0');
                      uVar4 = FUN_144f16fc0();
                      FUN_14550d6e0(lVar9,local_248,uVar4);
                      FUN_14550d6e0(lVar9,&DAT_149c05284,1);
                      lVar10 = -1;
                      do {
                        lVar2 = lVar10 + 1;
                        lVar10 = lVar10 + 1;
                      } while (*(char *)((longlong)&local_280 + lVar2) != '\0');
                      uVar4 = FUN_144f16fc0();
                      FUN_14550d6e0(lVar9,&local_280,uVar4);
                      FUN_14550d6e0(lVar9,&DAT_149c05284,1);
                      FUN_14550d6e0(lVar9,local_1b0,0x20);
                      FUN_14550d700(lVar9,local_268);
                      puVar13 = local_188;
                      do {
                        FUN_144f2b7e0(puVar13,3,&DAT_149d25a30,local_268[uVar12]);
                        uVar12 = uVar12 + 1;
                        puVar13 = puVar13 + 2;
                      } while (uVar12 < 0x10);
                      local_2a8 = &local_280;
                      local_2b0 = local_188;
                      local_2c0 = local_278;
                      local_2c8 = local_248;
                      local_2b8 = lVar6;
                      lVar9 = FUN_144f2b8b0("username=\"%s\",realm=\"%s\",nonce=\"%s\",cnonce=\"%s\",nc=\"%s\",digest-uri=\"%s\",response=%s,qop=%s"
                                            ,param_3,local_d8,local_218);
                      (*(code *)PTR_free_14c6d9f28)(lVar6);
                      if (lVar9 != 0) {
                        do {
                          lVar11 = lVar11 + 1;
                        } while (*(char *)(lVar9 + lVar11) != '\0');
                        FUN_14550c7c0(local_288,lVar9,lVar11,&DAT_1452ce920);
                      }
                      goto LAB_1452d8391;
                    }
                  }
                  (*(code *)PTR_free_14c6d9f28)(lVar6);
                }
              }
            }
          }
        }
      }
    }
  }
LAB_1452d8391:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_2e8);
}



// FUNCTION 1452d83c0 FUN_1452d83c0 body=1408 status=ok
// SIG undefined FUN_1452d83c0(void)

void FUN_1452d83c0(char *param_1,longlong *param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  bool bVar11;
  undefined1 auStack_578 [32];
  undefined8 local_558;
  longlong *local_550;
  longlong local_548;
  char local_538 [256];
  char local_438 [1024];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_578;
  local_548 = *param_2;
  bVar3 = false;
  bVar4 = false;
  local_550 = param_2;
  (*(code *)PTR_free_14c6d9f28)(local_548);
  *param_2 = 0;
  (*(code *)PTR_free_14c6d9f28)(param_2[1]);
  param_2[1] = 0;
  (*(code *)PTR_free_14c6d9f28)(param_2[2]);
  param_2[2] = 0;
  (*(code *)PTR_free_14c6d9f28)(param_2[3]);
  param_2[3] = 0;
  (*(code *)PTR_free_14c6d9f28)(param_2[4]);
  param_2[4] = 0;
  (*(code *)PTR_free_14c6d9f28)(param_2[5]);
  param_2[5] = 0;
  *(undefined4 *)(param_2 + 6) = 0;
  *(undefined2 *)((longlong)param_2 + 0x34) = 0;
  *(undefined1 *)((longlong)param_2 + 0x36) = 0;
  do {
    cVar5 = *param_1;
    while ((cVar5 != '\0' && ((cVar5 == ' ' || (cVar5 == '\t'))))) {
      pcVar8 = param_1 + 1;
      param_1 = param_1 + 1;
      cVar5 = *pcVar8;
    }
    pcVar8 = local_438;
    pcVar10 = local_538;
    bVar2 = false;
    cVar5 = *param_1;
    iVar6 = 0xff;
    while (((cVar5 != '\0' && (cVar5 != '=')) && (iVar6 != 0))) {
      cVar1 = param_1[1];
      param_1 = param_1 + 1;
      *pcVar10 = cVar5;
      pcVar10 = pcVar10 + 1;
      cVar5 = cVar1;
      iVar6 = iVar6 + -1;
    }
    pcVar9 = param_1 + 1;
    *pcVar10 = '\0';
    if (cVar5 != '=') {
LAB_1452d8931:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_578);
    }
    cVar5 = *pcVar9;
    bVar11 = cVar5 == '\"';
    if (bVar11) {
      cVar5 = param_1[2];
      pcVar9 = param_1 + 2;
    }
    iVar6 = 0x3ff;
    if (cVar5 != '\0') {
      do {
        if (iVar6 == 0) break;
        if (bVar2) goto LAB_1452d8572;
        cVar5 = *pcVar9;
        if ((cVar5 == '\n') || (cVar5 == '\r')) {
          if (bVar11) goto LAB_1452d8931;
          iVar6 = 0;
        }
        else if (cVar5 == '\"') {
          if (!bVar11) goto LAB_1452d8931;
          iVar6 = 0;
        }
        else if (cVar5 == ',') {
          if (bVar11) goto LAB_1452d8572;
          iVar6 = 0;
        }
        else if ((cVar5 == '\\') && (bVar11)) {
          bVar2 = true;
          iVar6 = iVar6 + -1;
        }
        else {
LAB_1452d8572:
          bVar2 = false;
          *pcVar8 = *pcVar9;
          pcVar8 = pcVar8 + 1;
          iVar6 = iVar6 + -1;
        }
        pcVar9 = pcVar9 + 1;
      } while (*pcVar9 != '\0');
      if (bVar2) goto LAB_1452d8931;
    }
    *pcVar8 = '\0';
    iVar6 = FUN_144f19540(local_538,"nonce");
    if (iVar6 != 0) {
      (*(code *)PTR_free_14c6d9f28)(*param_2);
      lVar7 = (*(code *)PTR__strdup_14c6d9f38)(local_438);
      *param_2 = lVar7;
      goto joined_r0x0001452d8674;
    }
    iVar6 = FUN_144f19540(local_538,"stale");
    if (iVar6 != 0) {
      iVar6 = FUN_144f19540(local_438,&DAT_149981e34);
      if (iVar6 != 0) {
        *(undefined1 *)((longlong)param_2 + 0x35) = 1;
        *(undefined4 *)(param_2 + 6) = 1;
      }
      goto LAB_1452d8785;
    }
    iVar6 = FUN_144f19540(local_538,"realm");
    if (iVar6 == 0) {
      iVar6 = FUN_144f19540(local_538,"opaque");
      if (iVar6 != 0) {
        (*(code *)PTR_free_14c6d9f28)(param_2[3]);
        lVar7 = (*(code *)PTR__strdup_14c6d9f38)(local_438);
        param_2[3] = lVar7;
        goto joined_r0x0001452d8674;
      }
      iVar6 = FUN_144f19540(local_538,&DAT_149d2ba7c);
      if (iVar6 != 0) {
        local_558 = 0;
        lVar7 = (*(code *)PTR__strdup_14c6d9f38)(local_438);
        if (lVar7 != 0) {
          pcVar8 = (char *)FUN_1452b1a10(lVar7,&DAT_1499722dc,&local_558);
          while (pcVar8 != (char *)0x0) {
            cVar5 = *pcVar8;
            while ((cVar5 != '\0' && ((cVar5 == ' ' || (cVar5 == '\t'))))) {
              pcVar10 = pcVar8 + 1;
              pcVar8 = pcVar8 + 1;
              cVar5 = *pcVar10;
            }
            iVar6 = FUN_144f19540(pcVar8,&DAT_149d2b978);
            if (iVar6 == 0) {
              iVar6 = FUN_144f19540(pcVar8,"auth-int");
              if (iVar6 != 0) {
                bVar4 = true;
              }
            }
            else {
              bVar3 = true;
            }
            pcVar8 = (char *)FUN_1452b1a10(0,&DAT_1499722dc,&local_558);
            param_2 = local_550;
          }
          (*(code *)PTR_free_14c6d9f28)(lVar7);
          if (bVar3) {
            (*(code *)PTR_free_14c6d9f28)(param_2[4]);
            pcVar8 = "auth";
          }
          else {
            if (!bVar4) goto LAB_1452d8785;
            (*(code *)PTR_free_14c6d9f28)(param_2[4]);
            pcVar8 = "auth-int";
          }
          lVar7 = (*(code *)PTR__strdup_14c6d9f38)(pcVar8);
          param_2[4] = lVar7;
          goto joined_r0x0001452d8674;
        }
        goto LAB_1452d8931;
      }
      iVar6 = FUN_144f19540(local_538,"algorithm");
      if (iVar6 == 0) {
        iVar6 = FUN_144f19540(local_538,"userhash");
        if ((iVar6 != 0) && (iVar6 = FUN_144f19540(local_438,&DAT_149981e34), iVar6 != 0)) {
          *(undefined1 *)((longlong)param_2 + 0x36) = 1;
        }
      }
      else {
        (*(code *)PTR_free_14c6d9f28)(param_2[5]);
        lVar7 = (*(code *)PTR__strdup_14c6d9f38)(local_438);
        param_2[5] = lVar7;
        if (lVar7 == 0) goto LAB_1452d8931;
        iVar6 = FUN_144f19540(local_438,"MD5-sess");
        if (iVar6 == 0) {
          iVar6 = FUN_144f19540(local_438,&DAT_149d2ba9c);
          if (iVar6 == 0) {
            iVar6 = FUN_144f19540(local_438,"SHA-256");
            if (iVar6 == 0) {
              iVar6 = FUN_144f19540(local_438,"SHA-256-SESS");
              if (iVar6 == 0) {
                iVar6 = FUN_144f19540(local_438,"SHA-512-256");
                if (iVar6 == 0) {
                  iVar6 = FUN_144f19540(local_438,"SHA-512-256-SESS");
                  if (iVar6 == 0) goto LAB_1452d8931;
                  *(undefined1 *)((longlong)param_2 + 0x34) = 5;
                }
                else {
                  *(undefined1 *)((longlong)param_2 + 0x34) = 4;
                }
              }
              else {
                *(undefined1 *)((longlong)param_2 + 0x34) = 3;
              }
            }
            else {
              *(undefined1 *)((longlong)param_2 + 0x34) = 2;
            }
          }
          else {
            *(undefined1 *)((longlong)param_2 + 0x34) = 0;
          }
        }
        else {
          *(undefined1 *)((longlong)param_2 + 0x34) = 1;
        }
      }
    }
    else {
      (*(code *)PTR_free_14c6d9f28)(param_2[2]);
      lVar7 = (*(code *)PTR__strdup_14c6d9f38)(local_438);
      param_2[2] = lVar7;
joined_r0x0001452d8674:
      if (lVar7 == 0) goto LAB_1452d8931;
    }
LAB_1452d8785:
    cVar5 = *pcVar9;
    while ((cVar5 != '\0' && ((cVar5 == ' ' || (cVar5 == '\t'))))) {
      pcVar8 = pcVar9 + 1;
      pcVar9 = pcVar9 + 1;
      cVar5 = *pcVar8;
    }
    param_1 = pcVar9 + 1;
    if (cVar5 != ',') {
      param_1 = pcVar9;
    }
  } while( true );
}



// FUNCTION 1452d8970 FUN_1452d8970 body=118 status=ok
// SIG undefined FUN_1452d8970(void)

void FUN_1452d8970(void)

{
  FUN_1452d8bb0();
  return;
}



// FUNCTION 1452d89f0 FUN_1452d89f0 body=119 status=ok
// SIG undefined FUN_1452d89f0(void)

void FUN_1452d89f0(undefined8 *param_1)

{
  (*(code *)PTR_free_14c6d9f28)(*param_1);
  *param_1 = 0;
  (*(code *)PTR_free_14c6d9f28)(param_1[1]);
  param_1[1] = 0;
  (*(code *)PTR_free_14c6d9f28)(param_1[2]);
  param_1[2] = 0;
  (*(code *)PTR_free_14c6d9f28)(param_1[3]);
  param_1[3] = 0;
  (*(code *)PTR_free_14c6d9f28)(param_1[4]);
  param_1[4] = 0;
  (*(code *)PTR_free_14c6d9f28)(param_1[5]);
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined2 *)((longlong)param_1 + 0x34) = 0;
  *(undefined1 *)((longlong)param_1 + 0x36) = 0;
  return;
}



// FUNCTION 1452d8a70 FUN_1452d8a70 body=86 status=ok
// SIG undefined FUN_1452d8a70(void)

void FUN_1452d8a70(undefined1 *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0x10;
  do {
    FUN_144f2b7e0(param_2,3,&DAT_149d25a30,*param_1);
    param_2 = param_2 + 2;
    param_1 = param_1 + 1;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1452d8ad0 FUN_1452d8ad0 body=86 status=ok
// SIG undefined FUN_1452d8ad0(void)

void FUN_1452d8ad0(undefined1 *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0x20;
  do {
    FUN_144f2b7e0(param_2,3,&DAT_149d25a30,*param_1);
    param_2 = param_2 + 2;
    param_1 = param_1 + 1;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1452d8b30 FUN_1452d8b30 body=126 status=ok
// SIG undefined FUN_1452d8b30(void)

char * FUN_1452d8b30(char *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  
  cVar1 = *param_1;
  lVar2 = 1;
  pcVar5 = param_1;
  while (cVar1 != '\0') {
    lVar3 = lVar2 + 1;
    if ((cVar1 == '\"') || (cVar1 == '\\')) {
      lVar3 = lVar2 + 2;
    }
    pcVar4 = pcVar5 + 1;
    pcVar5 = pcVar5 + 1;
    lVar2 = lVar3;
    cVar1 = *pcVar4;
  }
  pcVar5 = (char *)(*(code *)PTR_malloc_14c6d9f20)(lVar2);
  if (pcVar5 != (char *)0x0) {
    cVar1 = *param_1;
    pcVar4 = pcVar5;
    while (cVar1 != '\0') {
      if ((cVar1 == '\"') || (cVar1 == '\\')) {
        *pcVar4 = '\\';
        pcVar4 = pcVar4 + 1;
      }
      cVar1 = *param_1;
      param_1 = param_1 + 1;
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + 1;
      cVar1 = *param_1;
    }
    *pcVar4 = '\0';
  }
  return pcVar5;
}



// FUNCTION 1452d8bb0 FUN_1452d8bb0 body=1322 status=ok
// SIG undefined FUN_1452d8bb0(void)

void FUN_1452d8bb0(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,longlong *param_7,longlong *param_8,
                  code *param_9,code *param_10)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_288 [32];
  undefined8 local_268;
  undefined1 *local_260;
  undefined1 *local_258;
  longlong local_250;
  undefined1 *local_248;
  undefined1 *local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  longlong *local_218;
  longlong *local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  char local_1e8 [80];
  undefined1 local_198 [80];
  undefined1 local_148 [80];
  undefined1 local_f8 [80];
  undefined1 local_a8 [80];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_230 = param_5;
  local_218 = param_7;
  local_210 = param_8;
  local_228 = 0;
  local_220 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  if (*(int *)(param_6 + 6) == 0) {
    *(undefined4 *)(param_6 + 6) = 1;
  }
  lVar5 = -1;
  local_238 = param_2;
  if (param_6[1] == 0) {
    iVar1 = FUN_1452b3120(0,local_1e8,0x21);
    if (iVar1 != 0) goto LAB_1452d8f35;
    lVar2 = -1;
    do {
      lVar4 = lVar2 + 1;
      lVar6 = lVar2 + 1;
      lVar2 = lVar4;
    } while (local_1e8[lVar6] != '\0');
    iVar1 = FUN_1452b8b50(local_1e8,lVar4,&local_228,&local_220);
    if (iVar1 != 0) goto LAB_1452d8f35;
    param_6[1] = local_228;
  }
  if (*(char *)((longlong)param_6 + 0x36) != '\0') {
    puVar3 = &DAT_14996de1b;
    if ((undefined1 *)param_6[2] != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)param_6[2];
    }
    lVar2 = FUN_144f2b8b0("%s:%s",local_238,puVar3);
    if (lVar2 == 0) goto LAB_1452d8f35;
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (*(char *)(lVar2 + lVar6) != '\0');
    (*param_10)(&local_208,lVar2);
    (*(code *)PTR_free_14c6d9f28)(lVar2);
    (*param_9)(&local_208,local_a8);
  }
  puVar3 = &DAT_14996de1b;
  if ((undefined1 *)param_6[2] != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)param_6[2];
  }
  lVar2 = FUN_144f2b8b0("%s:%s:%s",local_238,puVar3,param_3);
  if (lVar2 == 0) goto LAB_1452d8f35;
  lVar6 = -1;
  do {
    lVar6 = lVar6 + 1;
  } while (*(char *)(lVar2 + lVar6) != '\0');
  (*param_10)(&local_208,lVar2);
  (*(code *)PTR_free_14c6d9f28)(lVar2);
  (*param_9)(&local_208,local_198);
  if ((*(byte *)((longlong)param_6 + 0x34) & 1) != 0) {
    lVar2 = FUN_144f2b8b0("%s:%s:%s",local_198,*param_6,param_6[1]);
    if (lVar2 == 0) goto LAB_1452d8f35;
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (*(char *)(lVar2 + lVar6) != '\0');
    (*param_10)(&local_208,lVar2);
    (*(code *)PTR_free_14c6d9f28)(lVar2);
    (*param_9)(&local_208,local_198);
  }
  lVar2 = FUN_144f2b8b0("%s:%s",param_4,local_230);
  if (lVar2 == 0) goto LAB_1452d8f35;
  lVar6 = lVar2;
  if ((param_6[4] != 0) && (iVar1 = FUN_144f19540(param_6[4],"auth-int"), iVar1 != 0)) {
    (*param_10)(&local_208,&DAT_14996de1b,0);
    (*param_9)(&local_208,local_1e8);
    lVar6 = FUN_144f2b8b0("%s:%s",lVar2,local_1e8);
    (*(code *)PTR_free_14c6d9f28)(lVar2);
    if (lVar6 == 0) goto LAB_1452d8f35;
  }
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(lVar6 + lVar2) != '\0');
  (*param_10)(&local_208,lVar6);
  (*(code *)PTR_free_14c6d9f28)(lVar6);
  (*param_9)(&local_208,local_148);
  if ((undefined1 *)param_6[4] == (undefined1 *)0x0) {
    lVar2 = FUN_144f2b8b0("%s:%s:%s",local_198,*param_6,local_148);
  }
  else {
    local_258 = local_148;
    local_268 = param_6[1];
    local_260 = (undefined1 *)param_6[4];
    lVar2 = FUN_144f2b8b0("%s:%s:%08x:%s:%s:%s",local_198,*param_6,*(undefined4 *)(param_6 + 6));
  }
  if (lVar2 == 0) goto LAB_1452d8f35;
  lVar6 = -1;
  do {
    lVar6 = lVar6 + 1;
  } while (*(char *)(lVar2 + lVar6) != '\0');
  (*param_10)(&local_208,lVar2);
  (*(code *)PTR_free_14c6d9f28)(lVar2);
  (*param_9)(&local_208,local_f8);
  puVar3 = local_a8;
  if (*(char *)((longlong)param_6 + 0x36) == '\0') {
    puVar3 = local_238;
  }
  lVar2 = FUN_1452d8b30(puVar3);
  if (lVar2 == 0) goto LAB_1452d8f35;
  lVar6 = lVar2;
  if (param_6[2] == 0) {
    puVar3 = (undefined1 *)(*(code *)PTR_malloc_14c6d9f20)(1);
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = 0;
      goto LAB_1452d8f6d;
    }
  }
  else {
    puVar3 = (undefined1 *)FUN_1452d8b30();
    if (puVar3 != (undefined1 *)0x0) {
LAB_1452d8f6d:
      lVar4 = FUN_1452d8b30(*param_6);
      if (lVar4 != 0) {
        if (param_6[4] == 0) {
          local_260 = local_f8;
          local_268 = local_230;
          lVar6 = FUN_144f2b8b0("username=\"%s\", realm=\"%s\", nonce=\"%s\", uri=\"%s\", response=\"%s\""
                                ,lVar2,puVar3,lVar4);
        }
        else {
          local_248 = local_f8;
          local_258 = (undefined1 *)CONCAT44(local_258._4_4_,*(undefined4 *)(param_6 + 6));
          local_260 = (undefined1 *)param_6[1];
          local_268 = local_230;
          local_250 = param_6[4];
          lVar6 = FUN_144f2b8b0("username=\"%s\", realm=\"%s\", nonce=\"%s\", uri=\"%s\", cnonce=\"%s\", nc=%08x, qop=%s, response=\"%s\""
                                ,lVar2,puVar3,lVar4);
          *(int *)(param_6 + 6) = *(int *)(param_6 + 6) + 1;
        }
        (*(code *)PTR_free_14c6d9f28)(lVar4);
        (*(code *)PTR_free_14c6d9f28)(puVar3);
        (*(code *)PTR_free_14c6d9f28)(lVar2);
        if (lVar6 == 0) goto LAB_1452d8f35;
        lVar2 = lVar6;
        if (param_6[3] != 0) {
          lVar4 = FUN_1452d8b30();
          if (lVar4 == 0) goto LAB_1452d8f22;
          lVar2 = FUN_144f2b8b0("%s, opaque=\"%s\"",lVar6,lVar4);
          (*(code *)PTR_free_14c6d9f28)(lVar6);
          (*(code *)PTR_free_14c6d9f28)(lVar4);
          if (lVar2 == 0) goto LAB_1452d8f35;
        }
        lVar6 = lVar2;
        if (param_6[5] != 0) {
          lVar6 = FUN_144f2b8b0("%s, algorithm=%s",lVar2);
          (*(code *)PTR_free_14c6d9f28)(lVar2);
          if (lVar6 == 0) goto LAB_1452d8f35;
        }
        lVar2 = lVar6;
        if (*(char *)((longlong)param_6 + 0x36) != '\0') {
          lVar2 = FUN_144f2b8b0("%s, userhash=true",lVar6);
          (*(code *)PTR_free_14c6d9f28)(lVar6);
          if (lVar2 == 0) goto LAB_1452d8f35;
        }
        *local_218 = lVar2;
        do {
          lVar5 = lVar5 + 1;
        } while (*(char *)(lVar2 + lVar5) != '\0');
        *local_210 = lVar5;
        goto LAB_1452d8f35;
      }
      (*(code *)PTR_free_14c6d9f28)(puVar3);
    }
  }
LAB_1452d8f22:
  (*(code *)PTR_free_14c6d9f28)(lVar6);
LAB_1452d8f35:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_288);
}



// FUNCTION 1452d90f0 FUN_1452d90f0 body=561 status=ok
// SIG undefined FUN_1452d90f0(void)

void FUN_1452d90f0(DWORD param_1,DWORD param_2,DWORD param_3,int param_4,int param_5)

{
  char cVar1;
  BOOL BVar2;
  HMODULE hModule;
  undefined8 uVar3;
  DWORDLONG DVar4;
  INT_PTR IVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  DWORD dwTypeMask;
  bool bVar8;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  _OSVERSIONINFOEXW local_178;
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  dwTypeMask = 0x33;
  if (DAT_14c7325e0 != '\0') {
    hModule = GetModuleHandleA("ntdll");
    DAT_14c7fc660 = GetProcAddress(hModule,"RtlVerifyVersionInfo");
    DAT_14c7325e0 = '\0';
  }
  if (param_5 == 0) {
    uVar6 = 4;
    uVar7 = 5;
  }
  else if (param_5 == 1) {
    uVar6 = 5;
    uVar7 = 5;
  }
  else if (param_5 == 2) {
    uVar6 = 1;
    uVar7 = 3;
  }
  else if (param_5 == 3) {
    uVar6 = 3;
    uVar7 = 3;
  }
  else {
    if (param_5 != 4) goto LAB_1452d9301;
    uVar6 = 2;
    uVar7 = 3;
  }
  memset(&local_178.dwPlatformId,0,0x10c);
  local_178.dwOSVersionInfoSize = 0x11c;
  if (param_4 == 1) {
    local_178.dwPlatformId = 1;
  }
  else if (param_4 == 2) {
    local_178.dwPlatformId = 2;
  }
  local_178.dwMajorVersion = param_1;
  local_178.dwMinorVersion = param_2;
  local_178.dwBuildNumber = param_3;
  uVar3 = VerSetConditionMask(0,2,uVar6);
  uVar3 = VerSetConditionMask(uVar3,1,uVar6);
  uVar3 = VerSetConditionMask(uVar3,0x20,uVar7);
  DVar4 = VerSetConditionMask(uVar3,0x10,uVar7);
  if (param_4 != 0) {
    DVar4 = VerSetConditionMask(DVar4,8,1);
    dwTypeMask = 0x3b;
  }
  if (DAT_14c7fc660 == (FARPROC)0x0) {
    BVar2 = VerifyVersionInfoW(&local_178,dwTypeMask,DVar4);
    bVar8 = BVar2 != 0;
  }
  else {
    IVar5 = (*DAT_14c7fc660)();
    bVar8 = (int)IVar5 == 0;
  }
  if ((!bVar8) || (param_3 == 0)) goto LAB_1452d9301;
  if (param_5 != 2) {
    if ((param_5 - 1U & 0xfffffffd) != 0) goto LAB_1452d9301;
    local_188 = 2;
    cVar1 = FUN_1452d90f0(param_1,param_2,0,param_4);
    if (cVar1 == '\0') goto LAB_1452d9301;
  }
  DVar4 = VerSetConditionMask(0,4,uVar6);
  if (DAT_14c7fc660 == (FARPROC)0x0) {
    VerifyVersionInfoW(&local_178,4,DVar4);
  }
  else {
    (*DAT_14c7fc660)();
  }
LAB_1452d9301:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_1a8);
}



// FUNCTION 1452d9340 FUN_1452d9340 body=85 status=ok
// SIG undefined FUN_1452d9340(void)

char * FUN_1452d9340(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    return "Too long hexadecimal number";
  case 2:
    return "Illegal or missing hexadecimal sequence";
  case 3:
    return "Malformed encoding found";
  case 4:
    return "Bad content-encoding found";
  case 5:
    return "Out of memory";
  case 6:
    return "";
  default:
    return "OK";
  }
}



// FUNCTION 1452d93b0 FUN_1452d93b0 body=32 status=ok
// SIG undefined FUN_1452d93b0(void)

void FUN_1452d93b0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  *(undefined1 *)(lVar1 + 0x24) = 0;
  *(undefined4 *)(lVar1 + 0x20) = 0;
  FUN_144f07cf0(lVar1 + 0x380,0x1000);
  return;
}



// FUNCTION 1452d93d0 FUN_1452d93d0 body=874 status=ok
// SIG undefined FUN_1452d93d0(void)

undefined8
FUN_1452d93d0(longlong param_1,char *param_2,longlong param_3,longlong *param_4,int *param_5)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  *param_4 = 0;
  if (((*(char *)(param_1 + 0xad6) != '\0') && (*(char *)(param_1 + 0x1cd) == '\0')) &&
     (iVar3 = FUN_144f14dc0(param_1,1,param_2,param_3), iVar3 != 0)) {
    *param_5 = iVar3;
    return 6;
  }
switchD_1452d9471_default:
  lVar8 = param_3;
  if (lVar8 == 0) {
    return 0;
  }
  param_3 = lVar8;
  switch(*(undefined4 *)(lVar2 + 0x20)) {
  case 0:
    cVar1 = *param_2;
    if ((((byte)(cVar1 - 0x30U) < 10) || ((byte)(cVar1 + 0x9fU) < 6)) || ((byte)(cVar1 + 0xbfU) < 6)
       ) {
      if (0xf < *(byte *)(lVar2 + 0x24)) {
        return 1;
      }
      param_2 = param_2 + 1;
      *(char *)((ulonglong)*(byte *)(lVar2 + 0x24) + 0x25 + lVar2) = cVar1;
      *(char *)(lVar2 + 0x24) = *(char *)(lVar2 + 0x24) + '\x01';
      param_3 = lVar8 + -1;
      goto switchD_1452d9471_default;
    }
    if (*(byte *)(lVar2 + 0x24) != 0) {
      *(undefined1 *)((ulonglong)*(byte *)(lVar2 + 0x24) + 0x25 + lVar2) = 0;
      iVar3 = FUN_1452b1ac0(lVar2 + 0x25,local_res8,0x10,lVar2 + 0x18);
      if (iVar3 == 0) {
        *(undefined4 *)(lVar2 + 0x20) = 1;
        goto switchD_1452d9471_default;
      }
    }
    return 2;
  case 1:
    if (*param_2 == '\n') {
      uVar4 = 2;
      if (*(longlong *)(lVar2 + 0x18) == 0) {
        uVar4 = 5;
      }
      *(undefined4 *)(lVar2 + 0x20) = uVar4;
    }
    break;
  case 2:
    lVar5 = lVar8;
    if (*(longlong *)(lVar2 + 0x18) < lVar8) {
      lVar5 = *(longlong *)(lVar2 + 0x18);
    }
    lVar5 = FUN_144f17010(lVar5);
    if (((*(char *)(param_1 + 0xad6) == '\0') && (*(char *)(param_1 + 0x1cd) == '\0')) &&
       (iVar3 = FUN_144f14dc0(param_1,1,param_2,lVar5), iVar3 != 0)) {
LAB_1452d96ee:
      *param_5 = iVar3;
      return 6;
    }
    *param_4 = *param_4 + lVar5;
    param_2 = param_2 + lVar5;
    *(longlong *)(lVar2 + 0x18) = *(longlong *)(lVar2 + 0x18) - lVar5;
    param_3 = lVar8 - lVar5;
    if (*(longlong *)(lVar2 + 0x18) == 0) {
      *(undefined4 *)(lVar2 + 0x20) = 3;
    }
    goto switchD_1452d9471_default;
  case 3:
    if (*param_2 == '\n') {
      lVar5 = *(longlong *)(param_1 + 0x20);
      *(undefined1 *)(lVar5 + 0x24) = 0;
      *(undefined4 *)(lVar5 + 0x20) = 0;
      FUN_144f07cf0(lVar5 + 0x380,0x1000);
      param_2 = param_2 + 1;
      param_3 = lVar8 + -1;
    }
    else {
      if (*param_2 != '\r') goto LAB_1452d9715;
      param_2 = param_2 + 1;
      param_3 = lVar8 + -1;
    }
    goto switchD_1452d9471_default;
  case 4:
    goto switchD_1452d9471_caseD_4;
  case 5:
    if ((*param_2 == '\r') || (*param_2 == '\n')) {
      lVar5 = FUN_144f07e80(lVar2 + 0x380);
      if (lVar5 == 0) {
        *(undefined4 *)(lVar2 + 0x20) = 7;
      }
      else {
        iVar3 = thunk_FUN_144f07eb0(lVar2 + 0x380,&DAT_149c058e8,2);
        if (iVar3 != 0) {
          return 5;
        }
        uVar7 = FUN_144f07e80(lVar2 + 0x380);
        uVar6 = FUN_144f07ea0(lVar2 + 0x380);
        if ((*(char *)(param_1 + 0xad6) == '\0') &&
           (iVar3 = FUN_144f14dc0(param_1,0x44,uVar7,uVar6), iVar3 != 0)) goto LAB_1452d96ee;
        FUN_144f07dc0(lVar2 + 0x380);
        *(undefined4 *)(lVar2 + 0x20) = 6;
        if (*param_2 != '\n') {
          param_2 = param_2 + 1;
          param_3 = lVar8 + -1;
        }
      }
      goto switchD_1452d9471_default;
    }
    iVar3 = thunk_FUN_144f07eb0(lVar2 + 0x380,param_2,1);
    if (iVar3 != 0) {
      return 5;
    }
    break;
  case 6:
    if (*param_2 != '\n') goto LAB_1452d9715;
    param_2 = param_2 + 1;
    *(undefined4 *)(lVar2 + 0x20) = 7;
    param_3 = lVar8 + -1;
    goto switchD_1452d9471_default;
  case 7:
    cVar1 = *param_2;
    if (cVar1 == '\r') {
      param_2 = param_2 + 1;
    }
    else if (cVar1 != '\n') {
      *(undefined4 *)(lVar2 + 0x20) = 5;
      goto switchD_1452d9471_default;
    }
    *(undefined4 *)(lVar2 + 0x20) = 4;
    param_3 = lVar8 + -1;
    if (cVar1 != '\r') {
      param_3 = lVar8;
    }
    goto switchD_1452d9471_default;
  default:
    goto switchD_1452d9471_default;
  }
  param_2 = param_2 + 1;
  param_3 = lVar8 + -1;
  goto switchD_1452d9471_default;
switchD_1452d9471_caseD_4:
  if (*param_2 == '\n') {
    uVar7 = FUN_144f17010(lVar8 + -1);
    *(undefined8 *)(lVar2 + 0x18) = uVar7;
    uVar7 = 0xffffffff;
  }
  else {
LAB_1452d9715:
    uVar7 = 3;
  }
  return uVar7;
}



// FUNCTION 1452d9760 FUN_1452d9760 body=16 status=ok
// SIG undefined FUN_1452d9760(void)

bool FUN_1452d9760(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  if (*(char *)(param_2 + 0x4d8) != '\x02') {
    return true;
  }
  if (param_1 != 0) {
    if (*(char *)(*(longlong *)(param_1 + 0xd8) + 0x1b0) == '\0') {
      cVar1 = FUN_144f1b4c0(0);
      *(char *)(*(longlong *)(param_1 + 0xd8) + 0x1b0) = (cVar1 != '\0') + '\x01';
    }
    return *(char *)(*(longlong *)(param_1 + 0xd8) + 0x1b0) == '\x02';
  }
  lVar2 = Ordinal_23(0x17);
  if (lVar2 == -1) {
    return false;
  }
  Ordinal_3(lVar2);
  return true;
}



// FUNCTION 1452d9770 FUN_1452d9770 body=382 status=ok
// SIG undefined FUN_1452d9770(void)

undefined8 FUN_1452d9770(longlong param_1,longlong param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x20);
  *param_4 = 1;
  plVar3 = (longlong *)(*(code *)PTR_calloc_14c6d9f40)(0x488,1);
  *(longlong **)(param_1 + 0x1b0) = plVar3;
  if (plVar3 == (longlong *)0x0) {
    return 0;
  }
  *(undefined1 *)(lVar5 + 0x2e2) = 1;
  plVar3[0x90] = param_2;
  *(undefined4 *)((longlong)plVar3 + 0x47c) = param_3;
  lVar4 = FUN_144bbed20(0,"Content-Type: application/dns-message");
  *plVar3 = lVar4;
  if ((lVar4 != 0) &&
     (iVar2 = FUN_1452d9ff0(param_1,plVar3 + 1,1,param_2,*(undefined8 *)(param_1 + 0x938),
                            *(undefined8 *)(param_1 + 0xd8),lVar4), iVar2 == 0)) {
    *(int *)(plVar3 + 0x8f) = (int)plVar3[0x8f] + 1;
    if (*(char *)(lVar5 + 0x4d8) == '\x01') {
      return 0;
    }
    cVar1 = FUN_144f1b4c0(param_1);
    if (cVar1 == '\0') {
      return 0;
    }
    iVar2 = FUN_1452d9ff0(param_1,plVar3 + 0x48,0x1c,param_2,*(undefined8 *)(param_1 + 0x938),
                          *(undefined8 *)(param_1 + 0xd8),*plVar3);
    if (iVar2 == 0) {
      *(int *)(plVar3 + 0x8f) = (int)plVar3[0x8f] + 1;
      return 0;
    }
  }
  FUN_144b472a0(*plVar3);
  plVar3 = plVar3 + 1;
  **(undefined8 **)(param_1 + 0x1b0) = 0;
  lVar5 = 2;
  do {
    FUN_144f0e6d0(plVar3);
    plVar3 = plVar3 + 0x47;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1b0));
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  return 0;
}



// FUNCTION 1452d98f0 FUN_1452d98f0 body=1544 status=ok
// SIG undefined FUN_1452d98f0(void)

void FUN_1452d98f0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  void *_Dst;
  int iVar9;
  undefined1 *puVar10;
  ushort *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 *puVar14;
  longlong lVar15;
  longlong lVar16;
  char *pcVar17;
  undefined *puVar18;
  undefined1 *puVar19;
  byte *pbVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint *puVar23;
  ulonglong uVar24;
  undefined1 auStack_3a8 [32];
  undefined8 local_388;
  uint local_380;
  int local_378;
  undefined8 local_370;
  longlong local_368;
  size_t local_360;
  longlong local_358;
  void *local_350;
  longlong *local_348;
  undefined1 local_338 [132];
  undefined4 local_2b4;
  int local_d8;
  undefined4 local_d4;
  int local_d0;
  undefined1 local_c8 [10];
  undefined1 local_be [118];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  lVar16 = *(longlong *)(param_1 + 0x1b0);
  *param_2 = 0;
  local_368 = lVar16;
  local_358 = param_1;
  local_348 = param_2;
  if (lVar16 == 0) goto LAB_1452d9ee5;
  lVar15 = lVar16 + 8;
  if ((*(longlong *)(lVar16 + 8) == 0) && (*(longlong *)(lVar16 + 0x240) == 0)) {
    FUN_144f14b70(param_1,"Could not DoH-resolve: %s",*(undefined8 *)(param_1 + 0xe40));
    goto LAB_1452d9ee5;
  }
  if (*(int *)(lVar16 + 0x478) != 0) goto LAB_1452d9ee5;
  local_370 = (byte *)0x0;
  lVar12 = 2;
  do {
    FUN_144bba090(*(undefined8 *)(param_1 + 0xd8));
    FUN_144f0e6d0(lVar15);
    lVar15 = lVar15 + 0x238;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  memset(local_338,0,0x270);
  local_d4 = 0x7fffffff;
  puVar10 = local_338;
  lVar15 = 4;
  do {
    FUN_144f07cf0(puVar10,0x100);
    lVar12 = local_368;
    puVar10 = puVar10 + 0x20;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  lVar16 = lVar16 + 0x220;
  lVar15 = 2;
  puVar23 = (uint *)&local_370;
  do {
    iVar9 = *(int *)(lVar16 + -0x210);
    if (iVar9 != 0) {
      uVar6 = FUN_144f07ea0(lVar16);
      uVar7 = FUN_144f07e90(lVar16);
      uVar5 = FUN_1452da980(uVar7,uVar6,iVar9,local_338);
      *puVar23 = uVar5;
      FUN_144f07d10(lVar16);
      if (uVar5 != 0) {
        if (uVar5 < 0xe) {
          pcVar17 = (&PTR_DAT_149d2bcb0)[(int)uVar5];
        }
        else {
          pcVar17 = "bad error code";
        }
        puVar18 = &DAT_149d2bebc;
        if (*(int *)(lVar16 + -0x210) == 1) {
          puVar18 = &DAT_1499720c8;
        }
        local_388 = *(undefined8 *)(lVar12 + 0x480);
        FUN_144f14ad0(param_1,"DoH: %s type %s for %s",pcVar17,puVar18);
      }
    }
    lVar13 = local_368;
    lVar16 = lVar16 + 0x238;
    puVar23 = puVar23 + 1;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  if (((uint)local_370 == 0) || (local_370._4_4_ == 0)) {
    FUN_144f14ad0(param_1,"DoH Host name: %s",*(undefined8 *)(local_368 + 0x480));
    FUN_144f14ad0(param_1,"TTL: %u seconds",local_d4);
    local_378 = 0;
    if (0 < local_d8) {
      pbVar20 = (byte *)((longlong)&local_2b4 + 2);
      do {
        iVar9 = local_378;
        local_370 = pbVar20;
        if (*(int *)(pbVar20 + -6) == 1) {
          local_380 = (uint)pbVar20[1];
          local_388 = CONCAT44(local_388._4_4_,(uint)*pbVar20);
          FUN_144f14ad0(param_1,"DoH A: %u.%u.%u.%u",pbVar20[-2],pbVar20[-1]);
          local_370 = pbVar20;
          local_378 = iVar9;
        }
        else {
          local_378 = iVar9;
          if (*(int *)(pbVar20 + -6) == 0x1c) {
            FUN_144f2b7e0(local_c8,0x80,"DoH AAAA: ");
            lVar16 = 0x76;
            pbVar20 = pbVar20 + -2;
            iVar9 = 0;
            puVar10 = local_be;
            lVar15 = 8;
            do {
              puVar19 = &DAT_14996de1b;
              local_380 = (uint)pbVar20[1];
              local_388 = CONCAT44(local_388._4_4_,(uint)*pbVar20);
              if (iVar9 != 0) {
                puVar19 = &DAT_149c05284;
              }
              FUN_144f2b7e0(puVar10,lVar16,"%s%02x%02x",puVar19);
              param_1 = local_358;
              lVar12 = -1;
              do {
                lVar12 = lVar12 + 1;
              } while (puVar10[lVar12] != '\0');
              lVar16 = lVar16 - lVar12;
              puVar10 = puVar10 + lVar12;
              iVar9 = iVar9 + 2;
              pbVar20 = pbVar20 + 2;
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
            FUN_144f14ad0(local_358,&DAT_149972340,local_c8);
          }
        }
        local_378 = local_378 + 1;
        pbVar20 = local_370 + 0x14;
        lVar13 = local_368;
        local_370 = pbVar20;
      } while (local_378 < local_d8);
    }
    uVar24 = 0;
    iVar9 = 0;
    if (0 < local_d0) {
      do {
        uVar6 = FUN_144f07e80(local_338 + (longlong)iVar9 * 0x20);
        FUN_144f14ad0(param_1,"CNAME: %s",uVar6);
        iVar9 = iVar9 + 1;
      } while (iVar9 < local_d0);
    }
    local_378 = *(undefined4 *)(lVar13 + 0x47c);
    local_350 = *(void **)(lVar13 + 0x480);
    lVar16 = -1;
    do {
      lVar15 = lVar16;
      lVar16 = lVar15 + 1;
    } while (*(char *)((longlong)local_350 + lVar16) != '\0');
    local_360 = lVar15 + 2;
    local_370 = (byte *)((ulonglong)local_370 & 0xffffffff00000000);
    if (0 < local_d8) {
      puVar14 = &local_2b4;
      uVar21 = uVar24;
      uVar22 = uVar24;
      do {
        lVar16 = 0x1c;
        uVar4 = 0x17;
        if (puVar14[-1] != 0x1c) {
          lVar16 = 0x10;
          uVar4 = 2;
        }
        uVar8 = (*(code *)PTR_calloc_14c6d9f40)(1,local_360 + 0x30 + lVar16);
        if (uVar8 == 0) {
          FUN_1452b2970(uVar21);
          goto LAB_1452d9eae;
        }
        *(ulonglong *)(uVar8 + 0x20) = uVar8 + 0x30;
        _Dst = (void *)(uVar8 + 0x30 + lVar16);
        *(void **)(uVar8 + 0x18) = _Dst;
        memcpy(_Dst,local_350,local_360);
        if (uVar21 == 0) {
          uVar21 = uVar8;
        }
        if (uVar22 != 0) {
          *(ulonglong *)(uVar22 + 0x28) = uVar8;
        }
        *(uint *)(uVar8 + 4) = (uint)uVar4;
        *(undefined4 *)(uVar8 + 8) = 1;
        *(int *)(uVar8 + 0x10) = (int)lVar16;
        if (uVar4 == 2) {
          puVar11 = *(ushort **)(uVar8 + 0x20);
          *(undefined4 *)(puVar11 + 2) = *puVar14;
LAB_1452d9d9a:
          *puVar11 = uVar4;
          uVar4 = Ordinal_9((undefined2)local_378);
          puVar11[1] = uVar4;
        }
        else if (uVar4 == 0x17) {
          puVar11 = *(ushort **)(uVar8 + 0x20);
          uVar1 = puVar14[1];
          uVar2 = puVar14[2];
          uVar3 = puVar14[3];
          *(undefined4 *)(puVar11 + 4) = *puVar14;
          *(undefined4 *)(puVar11 + 6) = uVar1;
          *(undefined4 *)(puVar11 + 8) = uVar2;
          *(undefined4 *)(puVar11 + 10) = uVar3;
          goto LAB_1452d9d9a;
        }
        param_1 = local_358;
        puVar14 = puVar14 + 5;
        iVar9 = (uint)local_370 + 1;
        local_370 = (byte *)CONCAT44(local_370._4_4_,iVar9);
        uVar22 = uVar8;
      } while (iVar9 < local_d8);
      if (uVar21 != 0) {
        if (*(longlong *)(local_358 + 0xe8) != 0) {
          FUN_144bbeca0(local_358,3,2);
        }
        local_388 = CONCAT44(local_388._4_4_,*(undefined4 *)(local_368 + 0x47c));
        lVar16 = FUN_144f1b810(param_1,uVar21,*(undefined8 *)(local_368 + 0x480),0);
        if (*(longlong *)(param_1 + 0xe8) != 0) {
          FUN_144bbece0(param_1,3);
        }
        if (lVar16 == 0) {
          FUN_1452b2970(uVar21);
        }
        else {
          *(longlong *)(param_1 + 0xe48) = lVar16;
          *local_348 = lVar16;
        }
        goto LAB_1452d9e5e;
      }
    }
LAB_1452d9eae:
    if (0 < local_d0) {
      do {
        FUN_144f07d10(local_338 + (longlong)(int)uVar24 * 0x20);
        uVar5 = (int)uVar24 + 1;
        uVar24 = (ulonglong)uVar5;
      } while ((int)uVar5 < local_d0);
    }
  }
  else {
LAB_1452d9e5e:
    iVar9 = 0;
    if (0 < local_d0) {
      do {
        FUN_144f07d10(local_338 + (longlong)iVar9 * 0x20);
        iVar9 = iVar9 + 1;
      } while (iVar9 < local_d0);
    }
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1b0));
    *(undefined8 *)(param_1 + 0x1b0) = 0;
  }
LAB_1452d9ee5:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_3a8);
}



// FUNCTION 1452d9f20 FUN_1452d9f20 body=44 status=ok
// SIG undefined FUN_1452d9f20(void)

longlong FUN_1452d9f20(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = thunk_FUN_144f07eb0(param_4,param_1,param_2 * param_3);
  lVar2 = param_2 * param_3;
  if (iVar1 != 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 1452d9f50 FUN_1452d9f50 body=148 status=ok
// SIG undefined FUN_1452d9f50(void)

undefined8 FUN_1452d9f50(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xa80);
  puVar2 = *(undefined8 **)(lVar1 + 0x1b0);
  *(int *)(puVar2 + 0x8f) = *(int *)(puVar2 + 0x8f) + -1;
  FUN_144f14ad0(lVar1,"a DoH request is completed, %u to go");
  if (param_2 != 0) {
    uVar3 = FUN_144bbdb50(param_2);
    FUN_144f14ad0(lVar1,"DoH request %s",uVar3);
  }
  if (*(int *)(puVar2 + 0x8f) == 0) {
    FUN_144b472a0(*puVar2);
    *puVar2 = 0;
    FUN_144bba820(lVar1,0,8);
  }
  return 0;
}



// FUNCTION 1452d9ff0 FUN_1452d9ff0 body=1944 status=ok
// SIG undefined FUN_1452d9ff0(void)

ulonglong FUN_1452d9ff0(longlong param_1,longlong *param_2,undefined4 param_3,char *param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  size_t _Size;
  ulonglong uVar8;
  undefined4 uVar9;
  longlong *plVar10;
  longlong local_res20;
  
  local_res20 = 0;
  lVar7 = -1;
  do {
    lVar6 = lVar7;
    lVar7 = lVar6 + 1;
  } while (param_4[lVar7] != '\0');
  if (0x110 < (ulonglong)(param_4[lVar6] != '.') + 0x11 + lVar7) {
    uVar9 = 0xd;
LAB_1452da16a:
    FUN_144f14b70(param_1,"Failed to encode DoH packet [%d]",uVar9);
    return 0x1b;
  }
  *(undefined4 *)((longlong)param_2 + 0xc) = 0x10000;
  plVar10 = param_2 + 3;
  param_2[2] = 0x100;
  cVar1 = *param_4;
  while (cVar1 != '\0') {
    pcVar4 = strchr(param_4,0x2e);
    if (pcVar4 == (char *)0x0) {
      _Size = 0xffffffffffffffff;
      do {
        _Size = _Size + 1;
      } while (param_4[_Size] != '\0');
    }
    else {
      _Size = (longlong)pcVar4 - (longlong)param_4;
    }
    if (0x3e < _Size - 1) {
      uVar9 = 1;
      param_2[0x42] = 0;
      goto LAB_1452da16a;
    }
    *(char *)plVar10 = (char)_Size;
    memcpy((undefined1 *)((longlong)plVar10 + 1),param_4,_Size);
    plVar10 = (longlong *)((undefined1 *)((longlong)plVar10 + 1) + _Size);
    param_4 = param_4 + _Size;
    if (pcVar4 != (char *)0x0) {
      param_4 = param_4 + 1;
    }
    cVar1 = *param_4;
  }
  *(undefined1 *)plVar10 = 0;
  *(char *)((longlong)plVar10 + 2) = (char)param_3;
  *(undefined1 *)((longlong)plVar10 + 3) = 0;
  *(undefined1 *)((longlong)plVar10 + 4) = 1;
  *(char *)((longlong)plVar10 + 1) = (char)((uint)param_3 >> 8);
  param_2[0x42] = (longlong)((longlong)plVar10 + (5 - ((longlong)param_2 + 0xc)));
  *(undefined4 *)(param_2 + 1) = param_3;
  FUN_144f07cf0(param_2 + 0x43,3000);
  uVar5 = FUN_144f15e70(param_1,0,1);
  if ((longlong)uVar5 < 1) {
    uVar8 = 0x1c;
  }
  else {
    uVar2 = FUN_144f0e270(&local_res20);
    uVar8 = (ulonglong)uVar2;
    if (uVar2 == 0) {
      *(undefined1 *)(local_res20 + 0x14d8) = 1;
      uVar2 = FUN_144b46fc0(local_res20,0x2712,param_5);
      uVar8 = (ulonglong)(int)uVar2;
      if ((uVar2 < 0x31) && ((0x1000000000011U >> (uVar8 & 0x3f) & 1) != 0)) {
        uVar2 = FUN_144b46fc0(local_res20,0x27fe,"https");
        uVar8 = (ulonglong)(int)uVar2;
        if ((uVar2 < 0x31) && ((0x1000000000011U >> (uVar8 & 0x3f) & 1) != 0)) {
          uVar2 = FUN_144b46fc0(local_res20,0x4e2b,FUN_1452d9f20);
          uVar8 = (ulonglong)(int)uVar2;
          if ((uVar2 < 0x31) && ((0x1000000000011U >> (uVar8 & 0x3f) & 1) != 0)) {
            uVar2 = FUN_144b46fc0(local_res20,0x2711,param_2 + 0x43);
            uVar8 = (ulonglong)(int)uVar2;
            if ((uVar2 < 0x31) && ((0x1000000000011U >> (uVar8 & 0x3f) & 1) != 0)) {
              uVar2 = FUN_144b46fc0(local_res20,0x271f,(longlong)param_2 + 0xc);
              uVar8 = (ulonglong)(int)uVar2;
              if ((uVar2 < 0x31) && ((0x1000000000011U >> (uVar8 & 0x3f) & 1) != 0)) {
                uVar2 = FUN_144b46fc0(local_res20,0x3c,(int)param_2[0x42]);
                uVar8 = (ulonglong)(int)uVar2;
                if ((uVar2 < 0x31) && ((0x1000000000011U >> (uVar8 & 0x3f) & 1) != 0)) {
                  uVar2 = FUN_144b46fc0(local_res20,0x2727,param_7);
                  uVar8 = (ulonglong)(int)uVar2;
                  if ((uVar2 < 0x31) && ((0x1000000000011U >> (uVar8 & 0x3f) & 1) != 0)) {
                    uVar2 = FUN_144b46fc0(local_res20,0x54,4);
                    uVar8 = (ulonglong)(int)uVar2;
                    if ((uVar2 < 0x31) && ((0x1000000000011U >> (uVar8 & 0x3f) & 1) != 0)) {
                      uVar2 = FUN_144b46fc0(local_res20,0xb5,2);
                      uVar8 = (ulonglong)(int)uVar2;
                      if ((uVar2 < 0x31) && ((0x1000000000011U >> (uVar8 & 0x3f) & 1) != 0)) {
                        uVar2 = FUN_144b46fc0(local_res20,0x9b,uVar5 & 0xffffffff);
                        uVar8 = (ulonglong)(int)uVar2;
                        if ((uVar2 < 0x31) && ((0x1000000000011U >> (uVar8 & 0x3f) & 1) != 0)) {
                          uVar2 = FUN_144b46fc0(local_res20,0x2774,*(undefined8 *)(param_1 + 0xe8));
                          uVar8 = (ulonglong)(int)uVar2;
                          if ((uVar2 < 0x31) && ((0x1000000000011U >> (uVar8 & 0x3f) & 1) != 0)) {
                            if (*(longlong *)(param_1 + 0x1d8) != 0) {
                              lVar7 = *(longlong *)(param_1 + 0x1d8);
                              lVar6 = __acrt_iob_func(2);
                              if (lVar7 != lVar6) {
                                uVar2 = FUN_144b46fc0(local_res20,0x2735,lVar7);
                                uVar8 = (ulonglong)(int)uVar2;
                                if ((0x30 < uVar2) ||
                                   ((0x1000000000011U >> (uVar8 & 0x3f) & 1) == 0))
                                goto LAB_1452da130;
                              }
                            }
                            if (*(char *)(param_1 + 0xacf) != '\0') {
                              uVar2 = FUN_144b46fc0(local_res20,0x29,1);
                              uVar8 = (ulonglong)(int)uVar2;
                              if ((0x30 < uVar2) || ((0x1000000000011U >> (uVar8 & 0x3f) & 1) == 0))
                              goto LAB_1452da130;
                            }
                            if (*(char *)(param_1 + 0xad3) != '\0') {
                              uVar2 = FUN_144b46fc0(local_res20,99,1);
                              uVar8 = (ulonglong)(int)uVar2;
                              if ((0x30 < uVar2) || ((0x1000000000011U >> (uVar8 & 0x3f) & 1) == 0))
                              goto LAB_1452da130;
                            }
                            uVar2 = FUN_144b46fc0(local_res20,0x51,
                                                  -(*(char *)(param_1 + 0xae6) != '\0') & 2);
                            uVar8 = (ulonglong)(int)uVar2;
                            if ((uVar2 < 0x31) && ((0x1000000000011U >> (uVar8 & 0x3f) & 1) != 0)) {
                              uVar2 = FUN_144b46fc0(local_res20,0x40,
                                                    *(char *)(param_1 + 0xae5) != '\0');
                              uVar8 = (ulonglong)(int)uVar2;
                              if ((uVar2 < 0x31) && ((0x1000000000011U >> (uVar8 & 0x3f) & 1) != 0))
                              {
                                uVar2 = FUN_144b46fc0(local_res20,0xe8,
                                                      *(char *)(param_1 + 0xae7) != '\0');
                                uVar8 = (ulonglong)(int)uVar2;
                                if ((uVar2 < 0x31) &&
                                   ((0x1000000000011U >> (uVar8 & 0x3f) & 1) != 0)) {
                                  if (*(char *)(param_1 + 0x5e9) != '\0') {
                                    uVar2 = FUN_144b46fc0(local_res20,0xe9,1);
                                    uVar8 = (ulonglong)(int)uVar2;
                                    if ((0x30 < uVar2) ||
                                       ((0x1000000000011U >> (uVar8 & 0x3f) & 1) == 0))
                                    goto LAB_1452da130;
                                  }
                                  if (*(longlong *)(param_1 + 0x800) != 0) {
                                    uVar2 = FUN_144b46fc0(local_res20,0x2751);
                                    uVar8 = (ulonglong)(int)uVar2;
                                    if ((0x30 < uVar2) ||
                                       ((0x1000000000011U >> (uVar8 & 0x3f) & 1) == 0))
                                    goto LAB_1452da130;
                                  }
                                  if (*(longlong *)(param_1 + 0x9d0) != 0) {
                                    uVar2 = FUN_144b46fc0(local_res20,0x9d75);
                                    uVar8 = (ulonglong)(int)uVar2;
                                    if ((0x30 < uVar2) ||
                                       ((0x1000000000011U >> (uVar8 & 0x3f) & 1) == 0))
                                    goto LAB_1452da130;
                                  }
                                  if (*(longlong *)(param_1 + 0x7f0) != 0) {
                                    uVar2 = FUN_144b46fc0(local_res20,0x2771);
                                    uVar8 = (ulonglong)(int)uVar2;
                                    if ((0x30 < uVar2) ||
                                       ((0x1000000000011U >> (uVar8 & 0x3f) & 1) == 0))
                                    goto LAB_1452da130;
                                  }
                                  if (*(longlong *)(param_1 + 0x848) != 0) {
                                    uVar2 = FUN_144b46fc0(local_res20,0x27b9);
                                    uVar8 = (ulonglong)(int)uVar2;
                                    if ((0x30 < uVar2) ||
                                       ((0x1000000000011U >> (uVar8 & 0x3f) & 1) == 0))
                                    goto LAB_1452da130;
                                  }
                                  if (*(char *)(param_1 + 0x5e8) != '\0') {
                                    uVar2 = FUN_144b46fc0(local_res20,0xac,1);
                                    uVar8 = (ulonglong)(int)uVar2;
                                    if ((0x30 < uVar2) ||
                                       ((0x1000000000011U >> (uVar8 & 0x3f) & 1) == 0))
                                    goto LAB_1452da130;
                                  }
                                  if (*(longlong *)(param_1 + 0x5b0) != 0) {
                                    uVar2 = FUN_144b46fc0(local_res20,0x4e8c);
                                    uVar8 = (ulonglong)(int)uVar2;
                                    if ((0x30 < uVar2) ||
                                       ((0x1000000000011U >> (uVar8 & 0x3f) & 1) == 0))
                                    goto LAB_1452da130;
                                  }
                                  if (*(longlong *)(param_1 + 0x5b8) != 0) {
                                    uVar2 = FUN_144b46fc0(local_res20,0x277d);
                                    uVar8 = (ulonglong)(int)uVar2;
                                    if ((0x30 < uVar2) ||
                                       ((0x1000000000011U >> (uVar8 & 0x3f) & 1) == 0))
                                    goto LAB_1452da130;
                                  }
                                  if (*(longlong *)(param_1 + 0x268) != 0) {
                                    uVar2 = FUN_144b46fc0(local_res20,0x4e7e);
                                    uVar8 = (ulonglong)(int)uVar2;
                                    if ((0x30 < uVar2) ||
                                       ((0x1000000000011U >> (uVar8 & 0x3f) & 1) == 0))
                                    goto LAB_1452da130;
                                  }
                                  if (*(longlong *)(param_1 + 0x1e0) != 0) {
                                    uVar2 = FUN_144b46fc0(local_res20,0x276f);
                                    uVar8 = (ulonglong)(int)uVar2;
                                    if ((0x30 < uVar2) ||
                                       ((0x1000000000011U >> (uVar8 & 0x3f) & 1) == 0))
                                    goto LAB_1452da130;
                                  }
                                  if (*(longlong *)(param_1 + 0x978) != 0) {
                                    uVar2 = FUN_144b46fc0(local_res20,0x283a);
                                    uVar8 = (ulonglong)(int)uVar2;
                                    if ((0x30 < uVar2) ||
                                       ((0x1000000000011U >> (uVar8 & 0x3f) & 1) == 0))
                                    goto LAB_1452da130;
                                  }
                                  FUN_144b46fc0(local_res20,0xd8,
                                                -(*(char *)(param_1 + 0x5ef) != '\0') & 0x20U |
                                                -(*(char *)(param_1 + 0x5ee) != '\0') & 0x10U |
                                                -(*(char *)(param_1 + 0x5ed) != '\0') & 8U |
                                                -(*(char *)(param_1 + 0x5ec) != '\0') & 4U |
                                                -(*(char *)(param_1 + 0x5eb) != '\0') & 2U |
                                                *(char *)(param_1 + 0x5ea) != '\0');
                                  *(code **)(local_res20 + 0xa78) = FUN_1452d9f50;
                                  *(longlong *)(local_res20 + 0xa80) = param_1;
                                  *param_2 = local_res20;
                                  iVar3 = FUN_144bb9e50(param_6);
                                  if (iVar3 == 0) {
                                    (*(code *)PTR_free_14c6d9f28)(0);
                                    return 0;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_1452da130:
  (*(code *)PTR_free_14c6d9f28)(0);
  FUN_144f0e6d0(&local_res20);
  return uVar8 & 0xffffffff;
}



// FUNCTION 1452da790 FUN_1452da790 body=492 status=ok
// SIG undefined FUN_1452da790(void)

undefined8
FUN_1452da790(longlong param_1,ulonglong param_2,short param_3,short param_4,uint param_5,
             longlong param_6)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  
  if (param_4 == 1) {
    if (param_3 != 4) {
      return 6;
    }
    if (*(int *)(param_6 + 0x260) < 0x18) {
      lVar7 = param_6 + (longlong)*(int *)(param_6 + 0x260) * 0x14;
      *(undefined4 *)(lVar7 + 0x80) = 1;
      *(undefined4 *)(lVar7 + 0x84) = *(undefined4 *)((int)param_5 + param_1);
      *(int *)(param_6 + 0x260) = *(int *)(param_6 + 0x260) + 1;
    }
  }
  else if (param_4 == 5) {
    iVar8 = 0x80;
    iVar4 = *(int *)(param_6 + 0x268);
    if (iVar4 != 4) {
      lVar7 = (longlong)iVar4 * 0x20 + param_6;
      *(int *)(param_6 + 0x268) = iVar4 + 1;
      do {
        if (param_2 <= param_5) {
          return 2;
        }
        bVar2 = *(byte *)((ulonglong)param_5 + param_1);
        if ((bVar2 & 0xc0) == 0xc0) {
          if (param_2 <= param_5 + 1) {
            return 2;
          }
          param_5 = (bVar2 & 0x3f) << 8 | (uint)*(byte *)((ulonglong)(param_5 + 1) + param_1);
          if (bVar2 == 0) {
LAB_1452da88d:
            if (iVar8 != 0) {
              return 0;
            }
            return 3;
          }
        }
        else {
          if ((bVar2 & 0xc0) != 0) {
            return 1;
          }
          uVar6 = param_5 + 1;
          if (bVar2 == 0) goto LAB_1452da88d;
          lVar5 = FUN_144f07ea0(lVar7);
          if ((lVar5 != 0) && (iVar4 = thunk_FUN_144f07eb0(lVar7,&DAT_149971530,1), iVar4 != 0)) {
            return 5;
          }
          param_5 = uVar6 + bVar2;
          if (param_2 < param_5) {
            return 1;
          }
          iVar4 = thunk_FUN_144f07eb0(lVar7,(ulonglong)uVar6 + param_1,bVar2);
          if (iVar4 != 0) {
            return 5;
          }
        }
        iVar8 = iVar8 + -1;
        if (iVar8 == 0) {
          return 3;
        }
      } while( true );
    }
  }
  else if (param_4 == 0x1c) {
    if (param_3 != 0x10) {
      return 6;
    }
    iVar4 = *(int *)(param_6 + 0x260);
    if (iVar4 < 0x18) {
      *(undefined4 *)(param_6 + 0x80 + (longlong)iVar4 * 0x14) = 0x1c;
      uVar3 = ((undefined8 *)((int)param_5 + param_1))[1];
      puVar1 = (undefined8 *)(param_6 + 0x84 + (longlong)iVar4 * 0x14);
      *puVar1 = *(undefined8 *)((int)param_5 + param_1);
      puVar1[1] = uVar3;
      *(int *)(param_6 + 0x260) = *(int *)(param_6 + 0x260) + 1;
    }
  }
  return 0;
}



// FUNCTION 1452da980 FUN_1452da980 body=1102 status=ok
// SIG undefined FUN_1452da980(void)

undefined8 FUN_1452da980(char *param_1,ulonglong param_2,uint param_3,longlong param_4)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  byte *pbVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ushort uVar10;
  
  uVar9 = 0xc;
  uVar10 = 0;
  if (param_2 < 0xc) {
    return 4;
  }
  if (((param_1 == (char *)0x0) || (*param_1 != '\0')) || (param_1[1] != '\0')) {
    return 0xc;
  }
  if ((param_1[3] & 0xfU) != 0) {
    return 8;
  }
  for (sVar5 = CONCAT11(param_1[4],param_1[5]); sVar5 != 0; sVar5 = sVar5 + -1) {
    do {
      iVar2 = (int)uVar9;
      if (param_2 < iVar2 + 1) {
        return 2;
      }
      bVar1 = param_1[uVar9];
      if ((bVar1 & 0xc0) == 0xc0) {
        uVar8 = iVar2 + 2;
        if (param_2 < uVar8) {
          return 2;
        }
        break;
      }
      if ((bVar1 & 0xc0) != 0) {
        return 1;
      }
      uVar8 = iVar2 + bVar1 + 1;
      uVar9 = (ulonglong)uVar8;
      if (param_2 < uVar9) {
        return 2;
      }
    } while (bVar1 != 0);
    uVar9 = (ulonglong)(uVar8 + 4);
    if (param_2 < uVar9) {
      return 2;
    }
  }
  for (sVar5 = CONCAT11(param_1[6],param_1[7]); sVar5 != 0; sVar5 = sVar5 + -1) {
    do {
      iVar2 = (int)uVar9;
      if (param_2 < iVar2 + 1) {
        return 2;
      }
      bVar1 = param_1[uVar9];
      if ((bVar1 & 0xc0) == 0xc0) {
        uVar8 = iVar2 + 2;
        if (param_2 < uVar8) {
          return 2;
        }
        break;
      }
      if ((bVar1 & 0xc0) != 0) {
        return 1;
      }
      uVar8 = iVar2 + bVar1 + 1;
      uVar9 = (ulonglong)uVar8;
      if (param_2 < uVar9) {
        return 2;
      }
    } while (bVar1 != 0);
    uVar6 = uVar8 + 2;
    if (param_2 < uVar6) {
      return 2;
    }
    uVar10 = CONCAT11(param_1[(int)uVar8],param_1[(longlong)(int)uVar8 + 1]);
    if (((uVar10 != 5) && (uVar10 != 0x27)) && (uVar10 != param_3)) {
      return 9;
    }
    if (param_2 < uVar8 + 4) {
      return 2;
    }
    if (CONCAT11(param_1[(int)uVar6],param_1[(longlong)(int)uVar6 + 1]) != 1) {
      return 10;
    }
    uVar6 = uVar8 + 8;
    if (param_2 < uVar6) {
      return 2;
    }
    pbVar4 = (byte *)(param_1 + (int)(uVar8 + 4));
    uVar7 = (uint)CONCAT11(pbVar4[1],pbVar4[2]) << 8 | (uint)*pbVar4 << 0x18 | (uint)pbVar4[3];
    if (uVar7 < *(uint *)(param_4 + 0x264)) {
      *(uint *)(param_4 + 0x264) = uVar7;
    }
    uVar8 = uVar8 + 10;
    if (param_2 < uVar8) {
      return 2;
    }
    uVar9 = (ulonglong)(CONCAT11(param_1[(int)uVar6],param_1[(longlong)(int)uVar6 + 1]) + uVar8);
    if (param_2 < uVar9) {
      return 2;
    }
    uVar3 = FUN_1452da790(param_1,param_2,
                          CONCAT11(param_1[(int)uVar6],param_1[(longlong)(int)uVar6 + 1]),uVar10,
                          uVar8,param_4);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  uVar3 = 0;
  for (sVar5 = CONCAT11(param_1[8],param_1[9]); sVar5 != 0; sVar5 = sVar5 + -1) {
    do {
      iVar2 = (int)uVar9;
      if (param_2 < iVar2 + 1) {
        return 2;
      }
      bVar1 = param_1[uVar9];
      if ((bVar1 & 0xc0) == 0xc0) {
        uVar8 = iVar2 + 2;
        if (param_2 < uVar8) {
          return 2;
        }
        break;
      }
      if ((bVar1 & 0xc0) != 0) {
        return 1;
      }
      uVar8 = iVar2 + bVar1 + 1;
      uVar9 = (ulonglong)uVar8;
      if (param_2 < uVar9) {
        return 2;
      }
    } while (bVar1 != 0);
    uVar6 = uVar8 + 8;
    if (param_2 < uVar6) {
      return 2;
    }
    if (param_2 < uVar8 + 10) {
      return 2;
    }
    uVar9 = (ulonglong)
            ((uint)CONCAT11(param_1[(int)uVar6],param_1[(longlong)(int)uVar6 + 1]) + uVar8 + 10);
    if (param_2 < uVar9) {
      return 2;
    }
  }
  sVar5 = CONCAT11(param_1[10],param_1[0xb]);
  do {
    if (sVar5 == 0) {
      if (uVar9 == param_2) {
        if ((uVar10 == 2) || (*(int *)(param_4 + 0x268) != 0)) {
          uVar3 = 0;
        }
        else if (*(int *)(param_4 + 0x260) == 0) {
          uVar3 = 0xb;
        }
      }
      else {
        uVar3 = 7;
      }
      return uVar3;
    }
    do {
      iVar2 = (int)uVar9;
      if (param_2 < iVar2 + 1) {
        return 2;
      }
      bVar1 = param_1[uVar9];
      if ((bVar1 & 0xc0) == 0xc0) {
        uVar8 = iVar2 + 2;
        if (param_2 < uVar8) {
          return 2;
        }
        break;
      }
      if ((bVar1 & 0xc0) != 0) {
        return 1;
      }
      uVar8 = iVar2 + bVar1 + 1;
      uVar9 = (ulonglong)uVar8;
      if (param_2 < uVar9) {
        return 2;
      }
    } while (bVar1 != 0);
    uVar6 = uVar8 + 8;
    if (((param_2 < uVar6) || (param_2 < uVar8 + 10)) ||
       (uVar9 = (ulonglong)
                ((uint)CONCAT11(param_1[(int)uVar6],param_1[(longlong)(int)uVar6 + 1]) + uVar8 + 10)
       , param_2 < uVar9)) {
      return 2;
    }
    sVar5 = sVar5 + -1;
  } while( true );
}



// FUNCTION 1452dadd0 FUN_1452dadd0 body=894 status=ok
// SIG undefined FUN_1452dadd0(void)

int FUN_1452dadd0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  uint uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  void *pvVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  size_t sVar11;
  
  FUN_144f08d20(param_2);
  if (param_3 == (undefined8 *)0x0) {
    return 0;
  }
  lVar5 = FUN_144f08510(param_1);
  if (lVar5 == 0) {
LAB_1452db118:
    iVar4 = 0x1b;
  }
  else {
    iVar4 = FUN_144f08b10(param_2,lVar5);
    while (iVar4 == 0) {
      if (param_3 == (undefined8 *)0x0) {
        return 0;
      }
      puVar3 = param_3;
      lVar8 = lVar5;
      if (param_3[9] != 0) {
        lVar6 = FUN_144f085b0(lVar5);
        if (lVar6 == 0) goto LAB_1452db118;
        pvVar2 = (void *)param_3[1];
        if ((pvVar2 == (void *)0x0) || (sVar11 = (size_t)*(int *)(param_3 + 2), sVar11 == 0)) {
          iVar4 = FUN_144f08670(lVar6,pvVar2);
        }
        else {
          pvVar7 = (void *)(*(code *)PTR_malloc_14c6d9f20)(sVar11 + 1);
          if (pvVar7 == (void *)0x0) goto LAB_1452db118;
          memcpy(pvVar7,pvVar2,sVar11);
          *(undefined1 *)((longlong)pvVar7 + sVar11) = 0;
          iVar4 = FUN_144f08670(lVar6,pvVar7);
          (*(code *)PTR_free_14c6d9f28)(pvVar7);
        }
        if (iVar4 == 0) {
          lVar8 = FUN_144f08510(param_1);
          if (lVar8 == 0) goto LAB_1452db118;
          iVar4 = FUN_144f08b10(lVar6,lVar8);
        }
      }
      for (; (iVar4 == 0 && (puVar3 != (undefined8 *)0x0)); puVar3 = (undefined8 *)puVar3[9]) {
        lVar6 = FUN_144f085b0(lVar8);
        if (lVar6 == 0) goto LAB_1452db118;
        iVar4 = FUN_144f08bc0(lVar6,puVar3[8],0);
        if ((iVar4 == 0) && ((puVar3[7] == 0 || (iVar4 = FUN_144f08770(lVar6), iVar4 == 0)))) {
          if (param_3[9] == 0) {
            pvVar2 = (void *)param_3[1];
            if ((pvVar2 == (void *)0x0) || (sVar11 = (size_t)*(int *)(param_3 + 2), sVar11 == 0)) {
              iVar4 = FUN_144f08670(lVar6,pvVar2);
            }
            else {
              pvVar7 = (void *)(*(code *)PTR_malloc_14c6d9f20)(sVar11 + 1);
              if (pvVar7 == (void *)0x0) goto LAB_1452db118;
              memcpy(pvVar7,pvVar2,sVar11);
              *(undefined1 *)((longlong)pvVar7 + sVar11) = 0;
              iVar4 = FUN_144f08670(lVar6,pvVar7);
              (*(code *)PTR_free_14c6d9f28)(pvVar7);
            }
            if (iVar4 != 0) goto LAB_1452db0fb;
          }
          uVar1 = *(uint *)(param_3 + 10);
          lVar10 = (longlong)*(int *)(param_3 + 4);
          if ((char)uVar1 < '\0') {
            lVar10 = param_3[0xd];
          }
          if ((uVar1 & 3) == 0) {
            if ((uVar1 & 0x10) == 0) {
              if ((uVar1 & 0x40) != 0) {
                if (lVar10 == 0) {
                  lVar10 = -1;
                }
                iVar4 = FUN_144f08aa0(lVar6,lVar10,param_4,0,0,param_3[0xc]);
                goto LAB_1452db0d5;
              }
              uVar9 = param_3[3];
            }
            else {
              uVar9 = param_3[5];
            }
            iVar4 = FUN_144f087f0(lVar6,uVar9);
LAB_1452db0d5:
            if (iVar4 == 0) {
LAB_1452db0db:
              if ((param_3[0xb] != 0) &&
                 ((param_3[9] != 0 || ((*(byte *)(param_3 + 10) & 0x51) != 0)))) {
                iVar4 = FUN_144f086f0(lVar6);
              }
            }
          }
          else {
            if ((*(char *)puVar3[3] == '-') && (((char *)puVar3[3])[1] == '\0')) {
              uVar9 = __acrt_iob_func(0);
              iVar4 = FUN_144f08aa0(lVar6,0xffffffffffffffff,fread_exref,&DAT_1452db150,0,uVar9);
            }
            else {
              iVar4 = FUN_144f088d0(lVar6);
            }
            if (iVar4 == 0) {
              if ((*(byte *)(param_3 + 10) & 2) != 0) {
                iVar4 = FUN_144f086f0(lVar6,0);
                goto LAB_1452db0d5;
              }
              goto LAB_1452db0db;
            }
          }
        }
LAB_1452db0fb:
      }
      param_3 = (undefined8 *)*param_3;
    }
  }
  FUN_144f08d20(param_2);
  return iVar4;
}



// FUNCTION 1452db160 FUN_1452db160 body=29 status=ok
// SIG undefined FUN_1452db160(void)

void FUN_1452db160(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[3] = param_2;
  *param_1 = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[5] = param_3;
  return;
}



// FUNCTION 1452db180 FUN_1452db180 body=110 status=ok
// SIG undefined FUN_1452db180(void)

void FUN_1452db180(longlong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    do {
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(*param_1 + uVar1 * 8));
      uVar1 = uVar1 + 1;
    } while (uVar1 < (ulonglong)param_1[1]);
  }
  (*(code *)PTR_free_14c6d9f28)(*param_1);
  *param_1 = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 1452db1f0 FUN_1452db1f0 body=104 status=ok
// SIG undefined FUN_1452db1f0(void)

void FUN_1452db1f0(longlong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if (param_1[1] == 0) {
    param_1[4] = 0;
    param_1[1] = 0;
    return;
  }
  do {
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(*param_1 + uVar1 * 8));
    *(undefined8 *)(*param_1 + uVar1 * 8) = 0;
    uVar1 = uVar1 + 1;
  } while (uVar1 < (ulonglong)param_1[1]);
  param_1[4] = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 1452db260 FUN_1452db260 body=5 status=ok
// SIG undefined FUN_1452db260(void)

undefined8 FUN_1452db260(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 1452db270 FUN_1452db270 body=4 status=ok
// SIG undefined FUN_1452db270(void)

void FUN_1452db270(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}



// FUNCTION 1452db280 FUN_1452db280 body=17 status=ok
// SIG undefined FUN_1452db280(void)

undefined8 FUN_1452db280(longlong *param_1,ulonglong param_2)

{
  if (param_2 < (ulonglong)param_1[1]) {
    return *(undefined8 *)(*param_1 + param_2 * 8);
  }
  return 0;
}



// FUNCTION 1452db2a0 FUN_1452db2a0 body=134 status=ok
// SIG undefined FUN_1452db2a0(void)

undefined8 FUN_1452db2a0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (param_1[1] != 0) {
    do {
      puVar1 = *(undefined8 **)(uVar3 * 8 + *param_1);
      if ((puVar1[2] == param_3) && (iVar2 = FUN_144f195b0(*puVar1,param_2,param_3), iVar2 != 0)) {
        return *(undefined8 *)(uVar3 * 8 + *param_1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulonglong)param_1[1]);
  }
  return 0;
}



// FUNCTION 1452db330 FUN_1452db330 body=149 status=ok
// SIG undefined FUN_1452db330(void)

undefined8 FUN_1452db330(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (*(char *)(lVar3 + param_2) != '\0');
  uVar4 = 0;
  if (param_1[1] != 0) {
    do {
      puVar1 = *(undefined8 **)(uVar4 * 8 + *param_1);
      if ((puVar1[2] == lVar3) && (iVar2 = FUN_144f195b0(*puVar1,param_2,lVar3), iVar2 != 0)) {
        return *(undefined8 *)(uVar4 * 8 + *param_1);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulonglong)param_1[1]);
  }
  return 0;
}



// FUNCTION 1452db3d0 FUN_1452db3d0 body=364 status=ok
// SIG undefined FUN_1452db3d0(void)

undefined8
FUN_1452db3d0(longlong *param_1,void *param_2,size_t param_3,void *param_4,size_t param_5)

{
  undefined8 *_Dst;
  uint uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x1b;
  if (((param_1[3] == 0) || ((ulonglong)param_1[1] < (ulonglong)param_1[3])) &&
     (param_5 + param_3 + param_1[4] <= (ulonglong)param_1[5])) {
    uVar1 = *(uint *)(param_1 + 6);
    puVar3 = (undefined8 *)(*(code *)PTR_calloc_14c6d9f40)(1,param_5 + 0x22 + param_3);
    if (puVar3 != (undefined8 *)0x0) {
      _Dst = puVar3 + 4;
      *puVar3 = _Dst;
      memcpy(_Dst,param_2,param_3);
      pvVar4 = (void *)(param_3 + 1 + (longlong)_Dst);
      puVar3[2] = param_3;
      puVar3[1] = pvVar4;
      memcpy(pvVar4,param_4,param_5);
      puVar3[3] = param_5;
      if ((uVar1 & 1) != 0) {
        FUN_144f19680(*puVar3,*puVar3,puVar3[2]);
      }
      if ((ulonglong)param_1[2] <= param_1[1] + 1U) {
        uVar2 = param_1[3];
        uVar5 = param_1[1] + 0x10;
        if ((uVar2 != 0) && (uVar2 < uVar5)) {
          uVar5 = uVar2;
        }
        pvVar4 = (void *)(*(code *)PTR_calloc_14c6d9f40)(uVar5,8);
        if (pvVar4 == (void *)0x0) {
          (*(code *)PTR_free_14c6d9f28)(puVar3);
          return 0x1b;
        }
        if ((void *)*param_1 != (void *)0x0) {
          memcpy(pvVar4,(void *)*param_1,param_1[1] << 3);
          (*(code *)PTR_free_14c6d9f28)(*param_1);
        }
        *param_1 = (longlong)pvVar4;
        param_1[2] = uVar5;
      }
      *(undefined8 **)(*param_1 + param_1[1] * 8) = puVar3;
      param_1[4] = param_1[4] + param_5 + param_3;
      param_1[1] = param_1[1] + 1;
      uVar6 = 0;
    }
  }
  return uVar6;
}



// FUNCTION 1452db540 FUN_1452db540 body=57 status=ok
// SIG undefined FUN_1452db540(void)

void FUN_1452db540(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = -1;
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_3 + lVar1) != '\0');
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(param_2 + lVar2) != '\0');
  FUN_1452db3d0();
  return;
}



// FUNCTION 1452db580 FUN_1452db580 body=39 status=ok
// SIG undefined FUN_1452db580(void)

void FUN_1452db580(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (*(char *)(param_2 + lVar1) != '\0');
    FUN_1452db5b0();
    return;
  }
  FUN_1452db5b0(param_1,0,0);
  return;
}



// FUNCTION 1452db5b0 FUN_1452db5b0 body=469 status=ok
// SIG undefined FUN_1452db5b0(void)

undefined8 FUN_1452db5b0(longlong *param_1,char *param_2,size_t param_3)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char *_Buf;
  void *pvVar4;
  size_t sVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  if ((param_2 == (char *)0x0) || (param_3 == 0)) {
    return 0;
  }
  if ((*param_2 == ' ') || (*param_2 == '\t')) {
    sVar5 = param_1[1];
    while (sVar5 != 0) {
      if ((*param_2 != ' ') && (*param_2 != '\t')) {
        if (param_3 == 0) {
          return 0x2b;
        }
        puVar1 = *(undefined8 **)(*param_1 + -8 + param_1[1] * 8);
        lVar9 = puVar1[3] + 1 + param_3;
        puVar7 = (undefined8 *)(*(code *)PTR_calloc_14c6d9f40)(1,puVar1[2] + 0x22 + lVar9);
        if (puVar7 != (undefined8 *)0x0) {
          _Dst = puVar7 + 4;
          *puVar7 = _Dst;
          memcpy(_Dst,(void *)*puVar1,puVar1[2]);
          puVar7[2] = puVar1[2];
          pvVar4 = (void *)((longlong)_Dst + puVar1[2] + 1);
          puVar7[1] = pvVar4;
          memcpy(pvVar4,(void *)puVar1[1],puVar1[3]);
          lVar2 = puVar1[3];
          *(undefined1 *)((longlong)pvVar4 + lVar2) = 0x20;
          memcpy((undefined1 *)((longlong)pvVar4 + lVar2) + 1,param_2,param_3);
          puVar7[3] = lVar9;
          *(undefined8 **)(*param_1 + -8 + param_1[1] * 8) = puVar7;
          (*(code *)PTR_free_14c6d9f28)(puVar1);
          return 0;
        }
        return 0x1b;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 - 1;
      sVar5 = param_3;
    }
  }
  else {
    _Buf = memchr(param_2,0x3a,param_3);
    if (_Buf != (char *)0x0) {
      uVar8 = (longlong)_Buf - (longlong)param_2;
      uVar3 = uVar8;
      do {
        uVar3 = uVar3 + 1;
        _Buf = _Buf + 1;
        if (param_3 <= uVar3) break;
      } while ((*_Buf == ' ') || (*_Buf == '\t'));
      param_3 = param_3 - uVar3;
      pvVar4 = memchr(_Buf,0xd,param_3);
      if (pvVar4 == (void *)0x0) {
        pvVar4 = memchr(_Buf,10,param_3);
      }
      sVar5 = (longlong)pvVar4 - (longlong)_Buf;
      if (pvVar4 == (void *)0x0) {
        sVar5 = param_3;
      }
      uVar6 = FUN_1452db3d0(param_1,param_2,uVar8,_Buf,sVar5);
      return uVar6;
    }
  }
  return 0x2b;
}



// FUNCTION 1452db790 FUN_1452db790 body=108 status=ok
// SIG undefined FUN_1452db790(void)

void FUN_1452db790(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  ulonglong uVar3;
  
  if (param_1[1] != 0) {
    uVar3 = 0;
    do {
      puVar1 = *(undefined8 **)(*param_1 + uVar3 * 8);
      iVar2 = FUN_144f07d70(param_2,"%.*s: %.*s\r\n",*(undefined4 *)(puVar1 + 2),*puVar1,
                            *(undefined4 *)(puVar1 + 3),puVar1[1]);
      if (iVar2 != 0) {
        return;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulonglong)param_1[1]);
  }
  return;
}



// FUNCTION 1452db800 FUN_1452db800 body=121 status=ok
// SIG undefined FUN_1452db800(void)

undefined8 FUN_1452db800(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if ((*(char *)(param_1 + 0x13c5) == '\0') || (*(char *)(param_1 + 0xaca) != '\0')) {
    return 1;
  }
  if ((*(longlong *)(param_1 + 0xcf0) != 0) &&
     (((iVar2 = FUN_144f19540(*(longlong *)(param_1 + 0xcf0),*(undefined8 *)(lVar1 + 0x70)),
       iVar2 != 0 && (*(int *)(param_1 + 0xcf8) == *(int *)(lVar1 + 0x4c4))) &&
      (*(int *)(param_1 + 0xcfc) == *(int *)(*(longlong *)(lVar1 + 0x2e8) + 0x84))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 1452db880 FUN_1452db880 body=72 status=ok
// SIG undefined FUN_1452db880(void)

undefined8 FUN_1452db880(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    if (param_3 != 0) {
      uVar1 = FUN_144f2b8b0("%s@%s",param_1);
      return uVar1;
    }
    return 0;
  }
  if (param_3 != 0) {
    uVar1 = FUN_144f2b8b0("%s/%s@%s",param_1,param_2,param_3);
    return uVar1;
  }
  uVar1 = FUN_144f2b8b0("%s/%s",param_1,param_2);
  return uVar1;
}



// FUNCTION 1452db8d0 FUN_1452db8d0 body=3 status=ok
// SIG undefined FUN_1452db8d0(void)

undefined1 FUN_1452db8d0(void)

{
  return 1;
}



// FUNCTION 1452db8e0 FUN_1452db8e0 body=267 status=ok
// SIG undefined FUN_1452db8e0(void)

undefined8 FUN_1452db8e0(void)

{
  longlong lVar1;
  longlong in_stack_00000030;
  undefined8 in_stack_00000038;
  
  (*(code *)PTR_free_14c6d9f28)();
  *(undefined8 *)(in_stack_00000030 + 0x10) = 0;
  *(undefined4 *)(in_stack_00000030 + 0xc) = 0;
  lVar1 = FUN_144f2b8b0(&DAT_149d2bfd8,0,0,0,0,6,0x82,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                        &DAT_14996de1b,&DAT_14996de1b);
  if (lVar1 == 0) {
    return 0x1b;
  }
  FUN_14550c7c0(in_stack_00000038,lVar1,0x20,&DAT_1452ce920);
  return 0;
}



// FUNCTION 1452db9f0 FUN_1452db9f0 body=373 status=ok
// SIG undefined FUN_1452db9f0(void)

undefined4 FUN_1452db9f0(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  void *_Dst;
  
  plVar5 = (longlong *)FUN_14550c820(param_2);
  uVar6 = FUN_14550c830(param_2);
  *param_3 = 0;
  if (((uVar6 < 0x20) || (*plVar5 != 0x5053534d4c544e)) || ((int)plVar5[1] != 2)) {
    FUN_144f14ad0(param_1,"NTLM handshake failure (bad type-2 message)");
    uVar4 = 0x3d;
  }
  else {
    uVar2 = FUN_14550e130((longlong)plVar5 + 0x14);
    *param_3 = uVar2;
    *(longlong *)(param_3 + 1) = plVar5[3];
    uVar4 = 0;
    if ((uVar2 >> 0x17 & 1) != 0) {
      uVar2 = 0;
      lVar7 = FUN_14550c820(param_2);
      uVar6 = FUN_14550c830(param_2);
      if (0x2f < uVar6) {
        uVar1 = FUN_14550e120(lVar7 + 0x28);
        uVar2 = (uint)uVar1;
        uVar3 = FUN_14550e130(lVar7 + 0x2c);
        if (uVar1 != 0) {
          if (((uVar6 < uVar3) || (uVar6 < uVar3 + uVar1)) || (uVar3 < 0x30)) {
            FUN_144f14ad0(param_1,
                          "NTLM handshake failure (bad type-2 message). Target Info Offset Len is set incorrect by the peer"
                         );
            FUN_144f14ad0(param_1,"NTLM handshake failure (bad type-2 message)");
            return 0x3d;
          }
          (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_3 + 4));
          _Dst = (void *)(*(code *)PTR_malloc_14c6d9f20)((ulonglong)uVar1);
          *(void **)(param_3 + 4) = _Dst;
          if (_Dst == (void *)0x0) {
            FUN_144f14ad0(param_1,"NTLM handshake failure (bad type-2 message)");
            return 0x1b;
          }
          memcpy(_Dst,(void *)((ulonglong)uVar3 + lVar7),(ulonglong)uVar1);
        }
      }
      param_3[3] = uVar2;
      uVar4 = 0;
    }
  }
  return uVar4;
}



// FUNCTION 1452dbb70 FUN_1452dbb70 body=1659 status=ok
// SIG undefined FUN_1452dbb70(void)

void FUN_1452dbb70(undefined8 param_1,char *param_2,undefined8 param_3,uint *param_4,
                  undefined8 param_5)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint *puVar4;
  ulonglong _Size;
  int iVar5;
  char *pcVar6;
  ulonglong _Size_00;
  ulonglong uVar7;
  char *pcVar8;
  byte bVar9;
  ulonglong uVar10;
  undefined1 auStack_b48 [32];
  uint *local_b28;
  undefined1 *local_b20;
  undefined8 local_b18;
  undefined4 local_b10;
  undefined8 local_b08;
  undefined4 local_b00;
  undefined8 local_af8;
  undefined4 local_af0;
  undefined4 local_ae8;
  undefined8 local_ae0;
  undefined8 local_ad8;
  uint local_ad0;
  uint local_ac8;
  uint local_ac0;
  uint local_ab8;
  undefined4 local_ab0;
  undefined4 local_aa8;
  undefined8 local_aa0;
  undefined8 local_a98;
  uint local_a90;
  uint local_a88;
  uint local_a80;
  uint local_a78;
  uint local_a70;
  uint local_a68;
  undefined8 local_a60;
  undefined8 local_a58;
  uint local_a50;
  uint local_a48;
  uint local_a40;
  uint local_a38;
  uint local_a30;
  uint local_a28;
  undefined8 local_a20;
  undefined8 local_a18;
  undefined4 local_a10;
  undefined4 local_a08;
  undefined4 local_a00;
  undefined4 local_9f8;
  uint local_9f0;
  uint local_9e8;
  undefined8 local_9e0;
  undefined8 local_9d8;
  undefined8 local_9d0;
  undefined8 local_9c8;
  undefined8 local_9c0;
  undefined8 local_9b8;
  undefined8 local_9b0;
  undefined8 local_9a8;
  undefined8 local_9a0;
  undefined8 local_998;
  uint local_990;
  uint local_988;
  uint local_980;
  uint local_978;
  byte local_968;
  uint local_964;
  uint local_960;
  uint local_95c;
  uint local_958;
  ulonglong local_950;
  undefined8 *local_948;
  undefined8 local_940;
  char *local_938;
  undefined8 *local_930;
  ulonglong local_928;
  char *local_920;
  ulonglong local_918;
  undefined8 local_910;
  uint *local_908;
  undefined1 local_900 [8];
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  undefined8 local_8e8;
  undefined8 local_8e0;
  undefined8 uStack_8d8;
  undefined8 local_8d0;
  undefined1 local_8c8 [24];
  uint local_8b0 [6];
  undefined1 local_898 [24];
  undefined1 local_880 [24];
  char local_868 [8];
  undefined4 auStack_860 [2];
  undefined8 auStack_858 [126];
  char local_468 [1040];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_b48;
  local_910 = param_5;
  bVar9 = (byte)*param_4 & 1;
  local_930 = &local_8e0;
  local_964 = 0x18;
  local_948 = (undefined8 *)0x0;
  local_468[0] = '\0';
  local_968 = bVar9;
  local_940 = param_1;
  local_908 = param_4;
  memset(local_468 + 1,0,0x400);
  local_8e8 = 0;
  uVar10 = 0;
  local_8d0 = 0;
  local_950 = 0;
  local_8f8 = 0;
  uStack_8f0 = 0;
  local_8e0 = 0;
  uStack_8d8 = 0;
  pcVar6 = strchr(param_2,0x5c);
  if (pcVar6 == (char *)0x0) {
    pcVar6 = strchr(param_2,0x2f);
  }
  pcVar8 = param_2;
  if (pcVar6 != (char *)0x0) {
    uVar10 = (longlong)pcVar6 - (longlong)param_2;
    pcVar8 = pcVar6 + 1;
    local_950 = uVar10;
  }
  uVar7 = 0xffffffffffffffff;
  if (pcVar6 == (char *)0x0) {
    param_2 = "";
  }
  do {
    uVar7 = uVar7 + 1;
  } while (pcVar8[uVar7] != '\0');
  local_938 = pcVar8;
  local_928 = uVar7;
  local_920 = param_2;
  FUN_144f2b7e0(local_468,0x401,&DAT_149972340,"WORKSTATION");
  if ((*param_4 & 0x80000) == 0) {
    iVar5 = FUN_14550db90(param_3,local_898);
    if (iVar5 != 0) goto LAB_1452dc1dc;
    FUN_14550d970(local_898,param_4 + 1,&local_8e0);
    iVar5 = FUN_14550da20(param_3,local_880);
    if (iVar5 != 0) goto LAB_1452dc1dc;
    FUN_14550d970(local_880,param_4 + 1,&local_8f8);
    local_978 = *param_4;
    local_990 = local_978 & 0xfff7ffff;
    *param_4 = local_990;
    local_978 = local_978 >> 0x18;
    local_980 = local_990 >> 0x10;
    local_960 = local_990 >> 8;
  }
  else {
    iVar5 = FUN_1452b3040(local_940,local_900,8);
    if ((iVar5 != 0) || (iVar5 = FUN_14550db90(param_3,local_8b0), iVar5 != 0)) goto LAB_1452dc1dc;
    local_b20 = local_8c8;
    local_b28 = local_8b0;
    iVar5 = FUN_14550dc60(pcVar8,uVar7,param_2,uVar10);
    if ((iVar5 != 0) ||
       (iVar5 = FUN_14550dfc0(local_8c8,local_900,param_4 + 1,&local_8f8), iVar5 != 0))
    goto LAB_1452dc1dc;
    local_b28 = &local_964;
    iVar5 = FUN_14550dd90(local_8c8,local_900,param_4,&local_948);
    if (iVar5 != 0) goto LAB_1452dc1dc;
    local_978 = (uint)*(byte *)((longlong)param_4 + 3);
    local_980 = (uint)*(byte *)((longlong)param_4 + 2);
    local_990 = *param_4;
    local_930 = local_948;
    local_960 = (uint)*(byte *)((longlong)param_4 + 1);
  }
  if (bVar9 != 0) {
    uVar10 = uVar10 * 2;
    uVar7 = uVar7 * 2;
    local_950 = uVar10;
    local_928 = uVar7;
  }
  _Size = local_950;
  local_a50 = (uint)uVar7 & 0xff;
  _Size_00 = 0x16;
  if (bVar9 == 0) {
    _Size_00 = 0xb;
  }
  local_a48 = (uint)(uVar7 >> 8) & 0xff;
  uVar1 = local_964 + 0x58;
  lVar2 = uVar1 + uVar10;
  local_a88 = (uint)(uVar10 >> 8) & 0xff;
  local_ac8 = local_964 >> 8 & 0xff;
  local_ad0 = local_964 & 0xff;
  local_9e8 = (uint)(uVar7 + lVar2 >> 8) & 0xff;
  local_980 = local_980 & 0xff;
  local_988 = local_960 & 0xff;
  local_990 = local_990 & 0xff;
  local_998 = 0;
  local_9a0 = 0;
  local_9a8 = 0;
  local_9b0 = 0;
  local_9b8 = 0;
  local_9c0 = 0;
  local_9c8 = 0;
  local_9d0 = 0;
  local_9d8 = 0;
  local_9e0 = 0;
  local_9f0 = (uint)(uVar7 + lVar2) & 0xff;
  local_9f8 = 0;
  local_a28 = (uint)((ulonglong)lVar2 >> 8) & 0xff;
  local_a30 = (uint)lVar2 & 0xff;
  local_a70 = uVar1 & 0xff;
  local_a10 = (undefined4)_Size_00;
  local_a08 = 0;
  local_a18 = 0;
  local_a20 = 0;
  local_a58 = 0;
  local_a60 = 0;
  local_a68 = uVar1 >> 8 & 0xff;
  local_a90 = (uint)local_950 & 0xff;
  local_a98 = 0;
  local_aa0 = 0;
  local_aa8 = 0;
  local_ab0 = 0x58;
  local_ad8 = 0;
  local_ae0 = 0;
  local_ae8 = 0;
  local_af0 = 0x40;
  local_af8 = 0;
  local_b00 = 0x18;
  local_b08 = 0;
  local_b10 = 0x18;
  local_b18 = 0;
  local_b20 = (undefined1 *)0x0;
  local_b28 = (uint *)0x0;
  local_ac0 = local_ad0;
  local_ab8 = local_ac8;
  local_a80 = local_a90;
  local_a78 = local_a88;
  local_a40 = local_a50;
  local_a38 = local_a48;
  local_a00 = local_a10;
  local_95c = local_ac8;
  local_958 = local_ad0;
  local_918 = _Size_00;
  iVar5 = FUN_144f2b7e0(local_868,0x400,&DAT_149d2c030,0);
  uVar10 = (ulonglong)iVar5;
  if (uVar10 < 1000) {
    *(undefined4 *)(local_868 + uVar10) = (undefined4)local_8f8;
    *(undefined4 *)(local_868 + uVar10 + 4) = local_8f8._4_4_;
    *(undefined4 *)((longlong)auStack_860 + uVar10) = (undefined4)uStack_8f0;
    *(undefined4 *)((longlong)auStack_860 + uVar10 + 4) = uStack_8f0._4_4_;
    *(undefined8 *)((longlong)auStack_858 + uVar10) = local_8e8;
    uVar10 = uVar10 + 0x18;
  }
  uVar7 = local_964 + uVar10;
  if (uVar7 < 0x401) {
    memcpy(local_868 + uVar10,local_930,(ulonglong)local_964);
    (*(code *)PTR_free_14c6d9f28)(local_948);
    uVar10 = local_928;
    lVar2 = uVar7 + _Size;
    lVar3 = lVar2 + local_928;
    if (_Size_00 + lVar3 < 0x400) {
      if (local_968 == 0) {
        memcpy(local_868 + uVar7,local_920,_Size);
        memcpy(local_868 + lVar2,local_938,uVar10);
        memcpy(local_868 + lVar3,local_468,_Size_00);
      }
      else {
        uVar10 = 0;
        if (_Size >> 1 != 0) {
          do {
            (local_868 + uVar7)[uVar10 * 2] = local_920[uVar10];
            local_868[uVar10 * 2 + uVar7 + 1] = '\0';
            uVar10 = uVar10 + 1;
          } while (uVar10 < _Size >> 1);
        }
        uVar10 = 0;
        if (local_928 >> 1 != 0) {
          do {
            local_868[uVar10 * 2 + lVar2] = local_938[uVar10];
            local_868[uVar10 * 2 + lVar2 + 1] = '\0';
            uVar10 = uVar10 + 1;
          } while (uVar10 < local_928 >> 1);
        }
        uVar10 = 0;
        do {
          local_868[uVar10 * 2 + lVar3] = local_468[uVar10];
          local_868[uVar10 * 2 + lVar3 + 1] = '\0';
          uVar10 = uVar10 + 1;
        } while (uVar10 < _Size_00 >> 1);
      }
      FUN_14550c840(local_910,local_868,_Size_00 + lVar3);
      puVar4 = local_908;
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(local_908 + 4));
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[3] = 0;
    }
    else {
      FUN_144f14b70(local_940,"user + domain + host name too big");
    }
  }
  else {
    FUN_144f14b70(local_940,"incoming NTLM message too big");
  }
LAB_1452dc1dc:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_b48);
}



// FUNCTION 1452dc200 FUN_1452dc200 body=34 status=ok
// SIG undefined FUN_1452dc200(void)

void FUN_1452dc200(longlong param_1)

{
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



// FUNCTION 1452dc230 FUN_1452dc230 body=6 status=ok
// SIG undefined FUN_1452dc230(void)

undefined8 FUN_1452dc230(void)

{
  return 4;
}



// FUNCTION 1452dc240 FUN_1452dc240 body=2790 status=ok
// SIG undefined FUN_1452dc240(void)

void FUN_1452dc240(longlong param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  char *pcVar6;
  size_t sVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined1 **ppuVar10;
  longlong lVar11;
  char *pcVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  undefined1 **ppuVar15;
  undefined1 auStack_468 [32];
  undefined1 **local_448;
  char *local_440;
  undefined1 *local_438;
  char *local_430;
  undefined1 *local_428;
  int local_420 [2];
  undefined8 local_418;
  longlong local_410;
  undefined1 **local_408;
  longlong local_400;
  longlong local_3f8;
  longlong local_3f0;
  __time64_t local_3e8;
  undefined1 *local_3e0;
  undefined1 local_3d8 [32];
  char local_3b8 [32];
  undefined1 local_398 [32];
  tm local_378;
  undefined8 local_350;
  undefined1 local_348;
  undefined8 local_340 [3];
  char local_328 [80];
  char local_2d8 [112];
  undefined1 local_268 [9];
  undefined8 uStack_25f;
  undefined8 local_257;
  undefined8 uStack_24f;
  undefined8 local_247;
  undefined8 uStack_23f;
  undefined8 local_237;
  undefined8 uStack_22f;
  undefined1 local_218 [32];
  char local_1f8 [112];
  undefined8 local_188;
  char acStack_180 [72];
  char local_138;
  undefined8 local_137;
  undefined8 uStack_12f;
  undefined8 local_127;
  undefined8 uStack_11f;
  undefined8 local_117;
  undefined8 uStack_10f;
  undefined8 local_107;
  undefined8 uStack_ff;
  undefined8 local_f7;
  undefined8 uStack_ef;
  undefined8 local_e7;
  undefined8 uStack_df;
  undefined8 local_d7;
  undefined8 uStack_cf;
  undefined8 local_c7;
  undefined8 uStack_bf;
  undefined8 local_b7;
  undefined8 uStack_af;
  undefined4 local_a7;
  undefined2 local_a3;
  undefined1 local_98 [96];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_468;
  lVar11 = *(longlong *)(param_1 + 0x20);
  local_328[0] = '\0';
  local_1f8[0x20] = '\0';
  lVar8 = 0;
  local_268[0] = '\0';
  local_2d8[0x20] = '\0';
  local_428 = (undefined1 *)0x0;
  local_328[1] = '\0';
  local_328[2] = '\0';
  local_328[3] = '\0';
  local_328[4] = '\0';
  local_328[5] = '\0';
  local_328[6] = '\0';
  local_328[7] = '\0';
  local_328[8] = '\0';
  local_328[9] = '\0';
  local_328[10] = '\0';
  local_328[0xb] = '\0';
  local_328[0xc] = '\0';
  local_328[0xd] = '\0';
  local_328[0xe] = '\0';
  local_328[0xf] = '\0';
  local_328[0x10] = '\0';
  local_410 = 0;
  local_328[0x11] = '\0';
  local_328[0x12] = '\0';
  local_328[0x13] = '\0';
  local_328[0x14] = '\0';
  local_328[0x15] = '\0';
  local_328[0x16] = '\0';
  local_328[0x17] = '\0';
  local_328[0x18] = '\0';
  local_328[0x19] = '\0';
  local_328[0x1a] = '\0';
  local_328[0x1b] = '\0';
  local_328[0x1c] = '\0';
  local_328[0x1d] = '\0';
  local_328[0x1e] = '\0';
  local_328[0x1f] = '\0';
  local_328[0x20] = '\0';
  local_408 = (undefined1 **)0x0;
  local_328[0x21] = '\0';
  local_328[0x22] = '\0';
  local_328[0x23] = '\0';
  local_328[0x24] = '\0';
  local_328[0x25] = '\0';
  local_328[0x26] = '\0';
  local_328[0x27] = '\0';
  local_328[0x28] = '\0';
  local_328[0x29] = '\0';
  local_328[0x2a] = '\0';
  local_328[0x2b] = '\0';
  local_328[0x2c] = '\0';
  local_328[0x2d] = '\0';
  local_328[0x2e] = '\0';
  local_328[0x2f] = '\0';
  local_328[0x30] = '\0';
  local_400 = 0;
  local_328[0x31] = '\0';
  local_328[0x32] = '\0';
  local_328[0x33] = '\0';
  local_328[0x34] = '\0';
  local_328[0x35] = '\0';
  local_328[0x36] = '\0';
  local_328[0x37] = '\0';
  local_328[0x38] = '\0';
  local_328[0x39] = '\0';
  local_328[0x3a] = '\0';
  local_328[0x3b] = '\0';
  local_328[0x3c] = '\0';
  local_328[0x3d] = '\0';
  local_328[0x3e] = '\0';
  local_328[0x3f] = '\0';
  local_328[0x40] = '\0';
  local_3f8 = 0;
  local_1f8[0x21] = '\0';
  local_1f8[0x22] = '\0';
  local_1f8[0x23] = '\0';
  local_1f8[0x24] = '\0';
  local_1f8[0x25] = '\0';
  local_1f8[0x26] = '\0';
  local_1f8[0x27] = '\0';
  local_1f8[0x28] = '\0';
  local_1f8[0x29] = '\0';
  local_1f8[0x2a] = '\0';
  local_1f8[0x2b] = '\0';
  local_1f8[0x2c] = '\0';
  local_1f8[0x2d] = '\0';
  local_1f8[0x2e] = '\0';
  local_1f8[0x2f] = '\0';
  local_1f8[0x30] = '\0';
  local_3f0 = 0;
  local_1f8[0x31] = '\0';
  local_1f8[0x32] = '\0';
  local_1f8[0x33] = '\0';
  local_1f8[0x34] = '\0';
  local_1f8[0x35] = '\0';
  local_1f8[0x36] = '\0';
  local_1f8[0x37] = '\0';
  local_1f8[0x38] = '\0';
  local_1f8[0x39] = '\0';
  local_1f8[0x3a] = '\0';
  local_1f8[0x3b] = '\0';
  local_1f8[0x3c] = '\0';
  local_1f8[0x3d] = '\0';
  local_1f8[0x3e] = '\0';
  local_1f8[0x3f] = '\0';
  local_1f8[0x40] = '\0';
  local_1f8[0x41] = '\0';
  local_1f8[0x42] = '\0';
  local_1f8[0x43] = '\0';
  local_1f8[0x44] = '\0';
  local_1f8[0x45] = '\0';
  local_1f8[0x46] = '\0';
  local_1f8[0x47] = '\0';
  local_1f8[0x48] = '\0';
  local_1f8[0x49] = '\0';
  local_1f8[0x4a] = '\0';
  local_1f8[0x4b] = '\0';
  local_1f8[0x4c] = '\0';
  local_1f8[0x4d] = '\0';
  local_1f8[0x4e] = '\0';
  local_1f8[0x4f] = '\0';
  local_1f8[0x50] = '\0';
  local_1f8[0x51] = '\0';
  local_1f8[0x52] = '\0';
  local_1f8[0x53] = '\0';
  local_1f8[0x54] = '\0';
  local_1f8[0x55] = '\0';
  local_1f8[0x56] = '\0';
  local_1f8[0x57] = '\0';
  local_1f8[0x58] = '\0';
  local_1f8[0x59] = '\0';
  local_1f8[0x5a] = '\0';
  local_1f8[0x5b] = '\0';
  local_1f8[0x5c] = '\0';
  local_1f8[0x5d] = '\0';
  local_1f8[0x5e] = '\0';
  local_1f8[0x5f] = '\0';
  local_1f8[0x60] = '\0';
  local_268._1_8_ = 0;
  uStack_25f = 0;
  local_257 = 0;
  uStack_24f = 0;
  local_247 = 0;
  uStack_23f = 0;
  local_237 = 0;
  uStack_22f = 0;
  local_2d8[0x21] = '\0';
  local_2d8[0x22] = '\0';
  local_2d8[0x23] = '\0';
  local_2d8[0x24] = '\0';
  local_2d8[0x25] = '\0';
  local_2d8[0x26] = '\0';
  local_2d8[0x27] = '\0';
  local_2d8[0x28] = '\0';
  local_2d8[0x29] = '\0';
  local_2d8[0x2a] = '\0';
  local_2d8[0x2b] = '\0';
  local_2d8[0x2c] = '\0';
  local_2d8[0x2d] = '\0';
  local_2d8[0x2e] = '\0';
  local_2d8[0x2f] = '\0';
  local_2d8[0x30] = '\0';
  local_2d8[0x31] = '\0';
  local_2d8[0x32] = '\0';
  local_2d8[0x33] = '\0';
  local_2d8[0x34] = '\0';
  local_2d8[0x35] = '\0';
  local_2d8[0x36] = '\0';
  local_2d8[0x37] = '\0';
  local_2d8[0x38] = '\0';
  local_2d8[0x39] = '\0';
  local_2d8[0x3a] = '\0';
  local_2d8[0x3b] = '\0';
  local_2d8[0x3c] = '\0';
  local_2d8[0x3d] = '\0';
  local_2d8[0x3e] = '\0';
  local_2d8[0x3f] = '\0';
  local_2d8[0x40] = '\0';
  local_2d8[0x41] = '\0';
  local_2d8[0x42] = '\0';
  local_2d8[0x43] = '\0';
  local_2d8[0x44] = '\0';
  local_2d8[0x45] = '\0';
  local_2d8[0x46] = '\0';
  local_2d8[0x47] = '\0';
  local_2d8[0x48] = '\0';
  local_2d8[0x49] = '\0';
  local_2d8[0x4a] = '\0';
  local_2d8[0x4b] = '\0';
  local_2d8[0x4c] = '\0';
  local_2d8[0x4d] = '\0';
  local_2d8[0x4e] = '\0';
  local_2d8[0x4f] = '\0';
  local_2d8[0x50] = '\0';
  local_2d8[0x51] = '\0';
  local_2d8[0x52] = '\0';
  local_2d8[0x53] = '\0';
  local_2d8[0x54] = '\0';
  local_2d8[0x55] = '\0';
  local_2d8[0x56] = '\0';
  local_2d8[0x57] = '\0';
  local_2d8[0x58] = '\0';
  local_2d8[0x59] = '\0';
  local_2d8[0x5a] = '\0';
  local_2d8[0x5b] = '\0';
  local_2d8[0x5c] = '\0';
  local_2d8[0x5d] = '\0';
  local_2d8[0x5e] = '\0';
  local_2d8[0x5f] = '\0';
  local_2d8[0x60] = '\0';
  pcVar12 = *(char **)(lVar11 + 0x70);
  local_a7 = 0;
  local_a3 = 0;
  local_418 = 0;
  local_138 = '\0';
  local_3e0 = &DAT_14996de1b;
  if (*(undefined1 **)(param_1 + 0x13a0) != (undefined1 *)0x0) {
    local_3e0 = *(undefined1 **)(param_1 + 0x13a0);
  }
  local_137 = 0;
  uStack_12f = 0;
  local_127 = 0;
  uStack_11f = 0;
  local_117 = 0;
  uStack_10f = 0;
  local_107 = 0;
  uStack_ff = 0;
  local_f7 = 0;
  uStack_ef = 0;
  local_e7 = 0;
  uStack_df = 0;
  local_d7 = 0;
  uStack_cf = 0;
  local_c7 = 0;
  uStack_bf = 0;
  local_b7 = 0;
  uStack_af = 0;
  local_2d8[0] = '\0';
  local_2d8[1] = '\0';
  local_2d8[2] = '\0';
  local_2d8[3] = '\0';
  local_2d8[4] = '\0';
  local_2d8[5] = '\0';
  local_2d8[6] = '\0';
  local_2d8[7] = '\0';
  local_2d8[8] = '\0';
  local_2d8[9] = '\0';
  local_2d8[10] = '\0';
  local_2d8[0xb] = '\0';
  local_2d8[0xc] = '\0';
  local_2d8[0xd] = '\0';
  local_2d8[0xe] = '\0';
  local_2d8[0xf] = '\0';
  local_2d8[0x10] = '\0';
  local_2d8[0x11] = '\0';
  local_2d8[0x12] = '\0';
  local_2d8[0x13] = '\0';
  local_2d8[0x14] = '\0';
  local_2d8[0x15] = '\0';
  local_2d8[0x16] = '\0';
  local_2d8[0x17] = '\0';
  local_2d8[0x18] = '\0';
  local_2d8[0x19] = '\0';
  local_2d8[0x1a] = '\0';
  local_2d8[0x1b] = '\0';
  local_2d8[0x1c] = '\0';
  local_2d8[0x1d] = '\0';
  local_2d8[0x1e] = '\0';
  local_2d8[0x1f] = '\0';
  local_1f8[0] = '\0';
  local_1f8[1] = '\0';
  local_1f8[2] = '\0';
  local_1f8[3] = '\0';
  local_1f8[4] = '\0';
  local_1f8[5] = '\0';
  local_1f8[6] = '\0';
  local_1f8[7] = '\0';
  local_1f8[8] = '\0';
  local_1f8[9] = '\0';
  local_1f8[10] = '\0';
  local_1f8[0xb] = '\0';
  local_1f8[0xc] = '\0';
  local_1f8[0xd] = '\0';
  local_1f8[0xe] = '\0';
  local_1f8[0xf] = '\0';
  local_1f8[0x10] = '\0';
  local_1f8[0x11] = '\0';
  local_1f8[0x12] = '\0';
  local_1f8[0x13] = '\0';
  local_1f8[0x14] = '\0';
  local_1f8[0x15] = '\0';
  local_1f8[0x16] = '\0';
  local_1f8[0x17] = '\0';
  local_1f8[0x18] = '\0';
  local_1f8[0x19] = '\0';
  local_1f8[0x1a] = '\0';
  local_1f8[0x1b] = '\0';
  local_1f8[0x1c] = '\0';
  local_1f8[0x1d] = '\0';
  local_1f8[0x1e] = '\0';
  local_1f8[0x1f] = '\0';
  lVar4 = FUN_144f23930(param_1,"Authorization",0xd);
  if (lVar4 != 0) goto LAB_1452dc8a4;
  FUN_144f07cf0(local_398,0x19000);
  FUN_144f07cf0(local_3d8,0x19000);
  FUN_144f07cf0(local_3b8,0x19000);
  pcVar5 = "aws:amz";
  if (*(char **)(param_1 + 0x980) != (char *)0x0) {
    pcVar5 = *(char **)(param_1 + 0x980);
  }
  local_440 = local_2d8 + 0x20;
  local_448 = (undefined1 **)local_268;
  FUN_145834187(pcVar5,"%64[^:]:%64[^:]:%64[^:]:%64s",local_328,local_1f8 + 0x20);
  if (local_328[0] == '\0') {
    FUN_144f14b70(param_1,"first aws-sigv4 provider can\'t be empty");
    puVar9 = local_428;
  }
  else {
    if (local_1f8[0x20] == '\0') {
      do {
        cVar1 = local_328[lVar8];
        local_1f8[lVar8 + 0x20] = cVar1;
        lVar8 = lVar8 + 1;
      } while (cVar1 != '\0');
    }
    if (local_2d8[0x20] != '\0') goto LAB_1452dc582;
    pcVar5 = strchr(pcVar12,0x2e);
    if (pcVar5 == (char *)0x0) {
      pcVar12 = "aws-sigv4: service missing in parameters and hostname";
    }
    else {
      uVar13 = (longlong)pcVar5 - (longlong)pcVar12;
      if (uVar13 < 0x41) {
        strncpy(local_2d8 + 0x20,pcVar12,uVar13);
        local_2d8[uVar13 + 0x20] = '\0';
        FUN_144f14ad0(param_1,"aws_sigv4: picked service %s from host",local_2d8 + 0x20);
        if (local_268[0] != '\0') {
LAB_1452dc582:
          FUN_144f1e3f0(param_1,lVar11,&local_418,local_420);
          iVar3 = FUN_144f19540(local_328,&DAT_149d2c310);
          if ((iVar3 == 0) || (iVar3 = FUN_144f19540(local_2d8 + 0x20,&DAT_149d2c314), iVar3 == 0))
          {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          iVar3 = FUN_144f2b7e0(local_98,0x52,"x-%s-content-sha256",local_1f8 + 0x20);
          pcVar5 = (char *)FUN_144f23930(param_1,local_98,(longlong)iVar3);
          if ((pcVar5 == (char *)0x0) || (pcVar5 = strchr(pcVar5,0x3a), pcVar5 == (char *)0x0)) {
            lVar8 = 0;
            if (bVar2) {
              if (((local_420[0] == 0) || (local_420[0] == 5)) ||
                 (*(longlong *)(param_1 + 800) == 0)) {
                bVar2 = true;
              }
              else {
                bVar2 = false;
              }
              if ((local_420[0] != 1) || (iVar3 = 1, *(longlong *)(param_1 + 0x218) == 0)) {
                iVar3 = 0;
              }
              if ((bVar2) || (iVar3 != 0)) {
                lVar11 = *(longlong *)(param_1 + 0x218);
                if ((lVar11 != 0) && (lVar8 = *(longlong *)(param_1 + 0x228), lVar8 < 0)) {
                  lVar8 = -1;
                  do {
                    lVar8 = lVar8 + 1;
                  } while (*(char *)(lVar11 + lVar8) != '\0');
                }
                iVar3 = FUN_14550e200(local_218,lVar11,lVar8);
                if (iVar3 != 0) goto LAB_1452dc7c6;
                FUN_1452cea80(local_218,0x20,&local_188,0x41);
              }
              else {
                acStack_180[8] = 0;
                local_188._0_1_ = 'U';
                local_188._1_1_ = 'N';
                local_188._2_1_ = 'S';
                local_188._3_1_ = 'I';
                local_188._4_1_ = 'G';
                local_188._5_1_ = 'N';
                local_188._6_1_ = 'E';
                local_188._7_1_ = 'D';
                builtin_strncpy(acStack_180,"-PAYLOAD",8);
              }
              local_448 = (undefined1 **)&local_188;
              FUN_144f2b7e0(&local_138,0x95,"x-%s-content-sha256: %s",local_1f8 + 0x20);
              iVar3 = 0;
            }
            else {
              lVar11 = *(longlong *)(param_1 + 0x218);
              if ((lVar11 != 0) && (lVar8 = *(longlong *)(param_1 + 0x228), lVar8 < 0)) {
                lVar8 = -1;
                do {
                  lVar8 = lVar8 + 1;
                } while (*(char *)(lVar11 + lVar8) != '\0');
              }
              iVar3 = FUN_14550e200(local_218,lVar11,lVar8);
              if (iVar3 == 0) {
                FUN_1452cea80(local_218,0x20,&local_188,0x41);
              }
            }
LAB_1452dc7c6:
            puVar9 = local_428;
            if (iVar3 != 0) goto LAB_1452dc83f;
            pcVar6 = (char *)&local_188;
            lVar8 = -1;
            do {
              lVar4 = lVar8 + 1;
              lVar11 = lVar8 + 1;
              lVar8 = lVar4;
            } while (*(char *)((longlong)&local_188 + lVar11) != '\0');
          }
          else {
            cVar1 = pcVar5[1];
            while ((pcVar6 = pcVar5 + 1, cVar1 != '\0' && ((cVar1 == ' ' || (cVar1 == '\t'))))) {
              cVar1 = pcVar5[2];
              pcVar5 = pcVar6;
            }
            lVar4 = -1;
            do {
              lVar4 = lVar4 + 1;
            } while (pcVar6[lVar4] != '\0');
            for (; (lVar4 != 0 && ((pcVar6[lVar4 + -1] == ' ' || (pcVar6[lVar4 + -1] == '\t'))));
                lVar4 = lVar4 + -1) {
            }
          }
          ppuVar15 = (undefined1 **)0xffffffffffffffff;
          _time64(&local_3e8);
          iVar3 = FUN_1452b1c90(local_3e8,&local_378);
          puVar9 = local_428;
          if ((iVar3 == 0) &&
             (sVar7 = strftime((char *)local_340,0x11,"%Y%m%dT%H%M%SZ",&local_378),
             puVar9 = local_428, sVar7 != 0)) {
            local_430 = local_3b8;
            local_438 = local_398;
            local_440 = &local_138;
            local_448 = &local_428;
            iVar3 = FUN_1452dcd40(param_1,pcVar12,local_340,local_1f8 + 0x20);
            puVar9 = local_428;
            if (iVar3 == 0) {
              if (local_138 != '\0') {
                lVar8 = -1;
                do {
                  lVar11 = lVar8;
                  lVar8 = lVar11 + 1;
                } while (*(char *)((longlong)&local_137 + lVar11) != '\0');
                *(undefined2 *)((longlong)&local_137 + lVar11) = 0xa0d;
                *(undefined1 *)((longlong)&local_137 + lVar11 + 2) = 0;
              }
              local_350 = local_340[0];
              local_348 = 0;
              iVar3 = FUN_1452dd2d0(param_1,*(undefined8 *)(param_1 + 0x1268),local_3d8);
              puVar9 = local_428;
              if (iVar3 == 0) {
                lVar8 = FUN_144f07e80(local_3d8);
                if (lVar8 == 0) {
                  puVar9 = &DAT_14996de1b;
                }
                else {
                  puVar9 = (undefined1 *)FUN_144f07e80(local_3d8);
                }
                pcVar12 = (char *)FUN_144f07e80(local_3b8);
                local_448 = (undefined1 **)FUN_144f07e80(local_398);
                local_438 = (undefined1 *)CONCAT44(local_438._4_4_,(int)lVar4);
                local_440 = pcVar12;
                local_430 = pcVar6;
                lVar8 = FUN_144f2b8b0("%s\n%s\n%s\n%s\n%s\n%.*s",local_418,
                                      *(undefined8 *)(param_1 + 0x1260),puVar9);
                puVar9 = local_428;
                local_410 = lVar8;
                if (lVar8 != 0) {
                  lVar11 = -1;
                  do {
                    lVar4 = lVar11 + 1;
                    lVar11 = lVar11 + 1;
                  } while (local_328[lVar4] != '\0');
                  FUN_144f19680(local_328,local_328);
                  ppuVar10 = (undefined1 **)FUN_144f2b8b0("%s4_request",local_328);
                  puVar9 = local_428;
                  local_408 = ppuVar10;
                  if ((ppuVar10 != (undefined1 **)0x0) &&
                     (local_448 = ppuVar10,
                     lVar11 = FUN_144f2b8b0("%s/%s/%s/%s",&local_350,local_268,local_2d8 + 0x20),
                     puVar9 = local_428, local_400 = lVar11, lVar11 != 0)) {
                    lVar4 = -1;
                    do {
                      lVar4 = lVar4 + 1;
                    } while (*(char *)(lVar8 + lVar4) != '\0');
                    iVar3 = FUN_14550e200(local_218,lVar8);
                    puVar9 = local_428;
                    if (iVar3 == 0) {
                      FUN_1452cea80(local_218,0x20,&local_188,0x41);
                      lVar8 = -1;
                      do {
                        lVar4 = lVar8 + 1;
                        lVar8 = lVar8 + 1;
                      } while (local_328[lVar4] != '\0');
                      FUN_144f19650(local_328,local_328);
                      local_448 = (undefined1 **)&local_188;
                      lVar8 = FUN_144f2b8b0("%s4-HMAC-SHA256\n%s\n%s\n%s",local_328,local_340,lVar11
                                           );
                      puVar9 = local_428;
                      local_3f8 = lVar8;
                      if (lVar8 != 0) {
                        puVar9 = &DAT_14996de1b;
                        if (*(undefined1 **)(param_1 + 0x13a8) != (undefined1 *)0x0) {
                          puVar9 = *(undefined1 **)(param_1 + 0x13a8);
                        }
                        local_3f0 = FUN_144f2b8b0("%s4%s",local_328,puVar9);
                        puVar9 = local_428;
                        if (local_3f0 != 0) {
                          local_448 = (undefined1 **)0xffffffffffffffff;
                          do {
                            local_448 = (undefined1 **)((longlong)local_448 + 1);
                          } while (*(char *)((longlong)&local_350 + (longlong)local_448) != '\0');
                          lVar4 = -1;
                          do {
                            lVar4 = lVar4 + 1;
                          } while (*(char *)(local_3f0 + lVar4) != '\0');
                          local_440 = local_2d8;
                          iVar3 = FUN_14550e480(&PTR_FUN_149d9b7d0,local_3f0,lVar4,&local_350);
                          puVar9 = local_428;
                          if (iVar3 == 0) {
                            local_448 = (undefined1 **)0xffffffffffffffff;
                            do {
                              local_448 = (undefined1 **)((longlong)local_448 + 1);
                            } while (local_268[(longlong)local_448] != '\0');
                            local_440 = local_1f8;
                            iVar3 = FUN_14550e480(&PTR_FUN_149d9b7d0,local_2d8,0x20,local_268);
                            puVar9 = local_428;
                            if (iVar3 == 0) {
                              local_448 = (undefined1 **)0xffffffffffffffff;
                              do {
                                local_448 = (undefined1 **)((longlong)local_448 + 1);
                              } while ((local_2d8 + 0x20)[(longlong)local_448] != '\0');
                              local_440 = local_2d8;
                              iVar3 = FUN_14550e480(&PTR_FUN_149d9b7d0,local_1f8,0x20,
                                                    local_2d8 + 0x20);
                              puVar9 = local_428;
                              if (iVar3 == 0) {
                                local_448 = (undefined1 **)0xffffffffffffffff;
                                do {
                                  local_448 = (undefined1 **)((longlong)local_448 + 1);
                                } while (*(char *)((longlong)ppuVar10 + (longlong)local_448) != '\0'
                                        );
                                local_440 = local_1f8;
                                iVar3 = FUN_14550e480(&PTR_FUN_149d9b7d0,local_2d8,0x20,ppuVar10);
                                puVar9 = local_428;
                                if (iVar3 == 0) {
                                  do {
                                    ppuVar15 = (undefined1 **)((longlong)ppuVar15 + 1);
                                  } while (*(char *)(lVar8 + (longlong)ppuVar15) != '\0');
                                  local_440 = local_2d8;
                                  local_448 = ppuVar15;
                                  iVar3 = FUN_14550e480(&PTR_FUN_149d9b7d0,local_1f8,0x20,lVar8);
                                  puVar9 = local_428;
                                  if (iVar3 == 0) {
                                    FUN_1452cea80(local_2d8,0x20,&local_188,0x41);
                                    puVar9 = local_428;
                                    puVar14 = &DAT_14996de1b;
                                    if (local_428 != (undefined1 *)0x0) {
                                      puVar14 = local_428;
                                    }
                                    local_448 = (undefined1 **)FUN_144f07e80(local_3b8);
                                    local_430 = &local_138;
                                    local_440 = (char *)&local_188;
                                    local_438 = puVar14;
                                    lVar8 = FUN_144f2b8b0(
                                                  "Authorization: %s4-HMAC-SHA256 Credential=%s/%s, SignedHeaders=%s, Signature=%s\r\n%s%s"
                                                  ,local_328,local_3e0,lVar11);
                                    if (lVar8 != 0) {
                                      (*(code *)PTR_free_14c6d9f28)
                                                (*(undefined8 *)(param_1 + 0x1368));
                                      *(longlong *)(param_1 + 0x1368) = lVar8;
                                      *(undefined1 *)(param_1 + 0xe2c) = 1;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_1452dc83f;
        }
        pcVar5 = pcVar5 + 1;
        pcVar6 = strchr(pcVar5,0x2e);
        if (pcVar6 == (char *)0x0) {
          pcVar12 = "aws-sigv4: region missing in parameters and hostname";
        }
        else {
          uVar13 = (longlong)pcVar6 - (longlong)pcVar5;
          if (uVar13 < 0x41) {
            strncpy(local_268,pcVar5,uVar13);
            local_268[uVar13] = 0;
            FUN_144f14ad0(param_1,"aws_sigv4: picked region %s from host",local_268);
            goto LAB_1452dc582;
          }
          pcVar12 = "aws-sigv4: region too long in hostname";
        }
      }
      else {
        pcVar12 = "aws-sigv4: service too long in hostname";
      }
    }
    FUN_144f14b70(param_1,pcVar12);
    puVar9 = local_428;
  }
LAB_1452dc83f:
  FUN_144f07d10(local_3d8);
  FUN_144f07d10(local_398);
  FUN_144f07d10(local_3b8);
  (*(code *)PTR_free_14c6d9f28)(local_410);
  (*(code *)PTR_free_14c6d9f28)(local_408);
  (*(code *)PTR_free_14c6d9f28)(local_400);
  (*(code *)PTR_free_14c6d9f28)(local_3f8);
  (*(code *)PTR_free_14c6d9f28)(local_3f0);
  (*(code *)PTR_free_14c6d9f28)(puVar9);
LAB_1452dc8a4:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_468);
}



// FUNCTION 1452dcd40 FUN_1452dcd40 body=1320 status=ok
// SIG undefined FUN_1452dcd40(void)

void FUN_1452dcd40(longlong param_1,longlong param_2,char *param_3,undefined1 *param_4,
                  longlong *param_5,char *param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  longlong *plVar2;
  longlong *plVar3;
  byte *pbVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  char cVar9;
  ulonglong uVar10;
  size_t sVar11;
  longlong *plVar12;
  longlong *plVar13;
  char *pcVar14;
  byte *pbVar15;
  int iVar16;
  uint uVar17;
  char *pcVar18;
  char *pcVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  undefined1 auStack_268 [32];
  char *local_248;
  undefined4 local_238;
  undefined8 local_230;
  undefined8 local_228;
  char local_218 [80];
  undefined1 local_1c8 [96];
  char local_168 [272];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_268;
  lVar21 = -1;
  local_230 = param_7;
  local_228 = param_8;
  plVar12 = (longlong *)0x0;
  local_238 = 0x1b;
  lVar20 = -1;
  do {
    lVar20 = lVar20 + 1;
  } while (param_4[lVar20] != '\0');
  FUN_144f19680(param_4,param_4);
  uVar8 = FUN_144f19630(*param_4);
  *param_4 = uVar8;
  FUN_144f2b7e0(local_218,0x48,"X-%s-Date",param_4);
  FUN_144f19680(param_4,param_4,1);
  local_248 = param_3;
  FUN_144f2b7e0(local_1c8,0x5a,"x-%s-date:%s",param_4);
  lVar20 = FUN_144f23930(param_1,&DAT_149c07670,4);
  if (lVar20 == 0) {
    pcVar14 = *(char **)(param_1 + 0x1380);
    uVar10 = 0xffffffffffffffff;
    if (pcVar14 == (char *)0x0) {
      do {
        uVar10 = uVar10 + 1;
      } while (*(char *)(param_2 + uVar10) != '\0');
      if (uVar10 < 0x100) {
        FUN_144f2b7e0(local_168,0x105,"host:%s",param_2);
        goto LAB_1452dcedd;
      }
    }
    else {
      do {
        uVar10 = uVar10 + 1;
      } while (pcVar14[uVar10] != '\0');
      if (uVar10 < 0x106) {
        lVar20 = -(longlong)pcVar14;
        do {
          cVar9 = *pcVar14;
          pcVar14[(longlong)(local_168 + lVar20)] = cVar9;
          pcVar14 = pcVar14 + 1;
        } while (cVar9 != '\0');
        sVar11 = strcspn(local_168,"\n\r");
        if (0x105 < sVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_144e2bb84();
        }
        local_168[sVar11] = '\0';
LAB_1452dcedd:
        plVar12 = (longlong *)FUN_144bbed20(0,local_168);
        if (plVar12 == (longlong *)0x0) goto LAB_1452dd24e;
        goto LAB_1452dcef8;
      }
    }
    local_238 = 3;
  }
  else {
LAB_1452dcef8:
    plVar13 = plVar12;
    if ((*param_6 != '\0') &&
       (plVar13 = (longlong *)FUN_144bbed20(plVar12,param_6), plVar13 == (longlong *)0x0))
    goto LAB_1452dd24e;
    plVar12 = plVar13;
    for (plVar2 = *(longlong **)(param_1 + 0x348); plVar13 = plVar12, plVar2 != (longlong *)0x0;
        plVar2 = (longlong *)plVar2[1]) {
      pcVar14 = strchr((char *)*plVar2,0x3a);
      if (((pcVar14 != (char *)0x0) ||
          (pcVar14 = strchr((char *)*plVar2,0x3b), pcVar14 != (char *)0x0)) &&
         ((pcVar19 = pcVar14 + 1, pcVar18 = pcVar19, *pcVar14 != ':' || (*pcVar19 != '\0')))) {
        for (; ((cVar9 = *pcVar18, cVar9 == ' ' || (cVar9 == '\t')) || ((byte)(cVar9 - 10U) < 4));
            pcVar18 = pcVar18 + 1) {
        }
        if ((cVar9 != '\0') || (pcVar18 == pcVar19)) {
          lVar20 = (*(code *)PTR__strdup_14c6d9f38)(*plVar2);
          if (lVar20 == 0) goto LAB_1452dd24e;
          pcVar14[lVar20 - *plVar2] = ':';
          plVar13 = (longlong *)FUN_144bbee90(plVar12,lVar20);
          if (plVar13 == (longlong *)0x0) {
            (*(code *)PTR_free_14c6d9f28)(lVar20);
            goto LAB_1452dd24e;
          }
        }
      }
      plVar12 = plVar13;
    }
    for (; plVar13 != (longlong *)0x0; plVar13 = (longlong *)plVar13[1]) {
      sVar11 = strcspn((char *)*plVar13,":");
      FUN_144f19680(*plVar13,*plVar13,sVar11);
      pcVar14 = (char *)(*plVar13 + sVar11);
      if (*pcVar14 != '\0') {
        cVar9 = pcVar14[1];
        pcVar14 = pcVar14 + 1;
        pcVar19 = pcVar14;
        if (cVar9 != '\0') {
          do {
            if ((cVar9 != ' ') && (cVar9 != '\t')) break;
            cVar9 = pcVar19[1];
            pcVar19 = pcVar19 + 1;
          } while (cVar9 != '\0');
          do {
            if (cVar9 == '\0') break;
            iVar16 = 0;
            do {
              if ((cVar9 != ' ') && (cVar9 != '\t')) break;
              cVar9 = pcVar19[1];
              pcVar19 = pcVar19 + 1;
              iVar16 = iVar16 + 1;
            } while (cVar9 != '\0');
            if (iVar16 == 0) {
              *pcVar14 = *pcVar19;
              pcVar19 = pcVar19 + 1;
            }
            else {
              if (*pcVar19 == '\0') break;
              *pcVar14 = ' ';
            }
            pcVar14 = pcVar14 + 1;
            cVar9 = *pcVar19;
          } while( true );
        }
        *pcVar14 = '\0';
      }
    }
    do {
      lVar22 = lVar21 + 1;
      lVar20 = lVar21 + 1;
      lVar21 = lVar22;
    } while (local_218[lVar20] != '\0');
    pcVar14 = (char *)FUN_144f23930(param_1,local_218,lVar22);
    if (pcVar14 == (char *)0x0) {
      pcVar14 = (char *)FUN_144f23930(param_1,&DAT_149d2c0f4,4);
      *param_5 = (longlong)pcVar14;
      if (pcVar14 == (char *)0x0) {
        plVar13 = (longlong *)FUN_144bbed20(plVar12,local_1c8);
        if (plVar13 == (longlong *)0x0) goto LAB_1452dd24e;
        lVar21 = FUN_144f2b8b0("%s: %s\r\n",local_218,param_3);
        goto LAB_1452dd168;
      }
    }
    else {
      *param_5 = (longlong)pcVar14;
    }
    pcVar14 = strchr(pcVar14,0x3a);
    if (pcVar14 != (char *)0x0) {
      do {
        do {
          pcVar19 = pcVar14 + 1;
          pcVar14 = pcVar14 + 1;
        } while (*pcVar19 == ' ');
      } while (*pcVar19 == '\t');
      strncpy(param_3,pcVar14,0x10);
      lVar21 = 0;
      param_3[0x10] = '\0';
      plVar13 = plVar12;
LAB_1452dd168:
      uVar7 = local_228;
      uVar6 = local_230;
      *param_5 = lVar21;
      do {
        bVar5 = false;
        plVar12 = plVar13;
        plVar2 = plVar13;
        if (plVar13 == (longlong *)0x0) break;
        do {
          plVar3 = (longlong *)plVar12[1];
          if (plVar3 != (longlong *)0x0) {
            pbVar4 = (byte *)*plVar12;
            pbVar15 = pbVar4;
            do {
              bVar1 = *pbVar15;
              uVar17 = (uint)pbVar15[*plVar3 - (longlong)pbVar4];
              if (bVar1 != uVar17) break;
              pbVar15 = pbVar15 + 1;
            } while (uVar17 != 0);
            if (0 < (int)(bVar1 - uVar17)) {
              *plVar12 = *plVar3;
              bVar5 = true;
              *plVar3 = (longlong)pbVar4;
            }
          }
          plVar3 = plVar12 + 1;
          plVar12 = (longlong *)*plVar3;
        } while ((longlong *)*plVar3 != (longlong *)0x0);
      } while (bVar5);
      do {
        plVar12 = plVar13;
        if (plVar2 == (longlong *)0x0) goto LAB_1452dd246;
        iVar16 = FUN_144f07d50(uVar6,*plVar2);
        if ((iVar16 != 0) || (iVar16 = FUN_144f07d50(uVar6,&DAT_14997f410), iVar16 != 0))
        goto LAB_1452dd24e;
        pcVar14 = strchr((char *)*plVar2,0x3a);
        if (pcVar14 != (char *)0x0) {
          *pcVar14 = '\0';
        }
        if (((plVar2 != plVar13) && (iVar16 = FUN_144f07d50(uVar7,&DAT_149cdcb14), iVar16 != 0)) ||
           (iVar16 = FUN_144f07d50(uVar7,*plVar2), iVar16 != 0)) goto LAB_1452dd24e;
        plVar2 = (longlong *)plVar2[1];
      } while( true );
    }
    *param_5 = 0;
  }
LAB_1452dd24e:
  FUN_144b472a0(plVar12);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_268);
LAB_1452dd246:
  local_238 = 0;
  goto LAB_1452dd24e;
}



// FUNCTION 1452dd2d0 FUN_1452dd2d0 body=733 status=ok
// SIG undefined FUN_1452dd2d0(void)

void FUN_1452dd2d0(undefined8 param_1,char *param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  char *pcVar5;
  longlong lVar6;
  byte *pbVar7;
  byte *pbVar8;
  longlong *plVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_498 [32];
  undefined2 local_478;
  undefined1 local_476;
  byte local_474;
  char local_473;
  char cStack_472;
  int local_470;
  int local_46c;
  longlong *local_468;
  longlong local_458 [128];
  char local_58 [24];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_498;
  iVar4 = 0;
  if (param_2 != (char *)0x0) {
    plVar9 = local_458 + 1;
    iVar11 = 0;
    while( true ) {
      iVar12 = iVar11 + 1;
      plVar9[-1] = (longlong)param_2;
      local_470 = iVar11;
      local_46c = iVar12;
      pcVar5 = strchr(param_2,0x26);
      if (pcVar5 == (char *)0x0) break;
      lVar6 = (longlong)pcVar5 - (longlong)param_2;
      param_2 = pcVar5 + 1;
      *plVar9 = lVar6;
      plVar9 = plVar9 + 2;
      iVar11 = iVar12;
      if (0x3f < iVar12) goto LAB_1452dd36f;
    }
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (param_2[lVar6] != '\0');
    *plVar9 = lVar6;
LAB_1452dd36f:
    if (iVar12 == 0x40) {
      FUN_144f14b70(param_1,"aws-sigv4: too many query pairs in URL");
    }
    else {
      qsort(local_458,(longlong)iVar12,0x10,(_PtFuncCompare *)&LAB_1452dd290);
      plVar9 = local_458;
      iVar11 = 0;
      while (local_468 = plVar9, iVar11 < iVar12) {
        lVar6 = plVar9[1];
        pbVar8 = (byte *)*plVar9;
        if (lVar6 != 0) {
          do {
            if (iVar4 != 0) break;
            bVar1 = *pbVar8;
            if ((((byte)(bVar1 - 0x30) < 10) || ((byte)(bVar1 + 0x9f) < 0x1a)) ||
               ((byte)(bVar1 + 0xbf) < 0x1a)) {
switchD_1452dd443_caseD_2d:
              uVar10 = 1;
              pbVar7 = pbVar8;
LAB_1452dd530:
              iVar4 = thunk_FUN_144f07eb0(param_3,pbVar7,uVar10);
            }
            else {
              switch(bVar1) {
              case 0x25:
                bVar1 = pbVar8[1];
                if ((((9 < (byte)(bVar1 - 0x30)) && (5 < (byte)(bVar1 + 0x9f))) &&
                    (5 < (byte)(bVar1 + 0xbf))) ||
                   (((bVar2 = pbVar8[2], 9 < (byte)(bVar2 - 0x30) && (5 < (byte)(bVar2 + 0x9f))) &&
                    (5 < (byte)(bVar2 + 0xbf))))) {
                  uVar10 = 3;
                  pbVar7 = &DAT_149c064d8;
                  goto LAB_1452dd530;
                }
                local_478 = 0x25;
                local_476 = 0;
                uVar3 = FUN_144f19630(bVar1);
                local_478 = CONCAT11(uVar3,(undefined1)local_478);
                local_476 = FUN_144f19630(pbVar8[2]);
                iVar4 = thunk_FUN_144f07eb0(param_3,&local_478,3);
                pbVar8 = pbVar8 + 2;
                lVar6 = lVar6 + -2;
                break;
              default:
                builtin_strncpy(local_58,"0123456789ABCDEF",0x11);
                uVar10 = 3;
                local_474 = 0x25;
                _local_473 = CONCAT11(local_58[(int)(char)bVar1 & 0xf],local_58[bVar1 >> 4]);
                pbVar7 = &local_474;
                goto LAB_1452dd530;
              case 0x2d:
              case 0x2e:
              case 0x3d:
              case 0x5f:
              case 0x7e:
                goto switchD_1452dd443_caseD_2d;
              }
            }
            pbVar8 = pbVar8 + 1;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
          plVar9 = local_468;
          iVar12 = local_46c;
          if (iVar11 < local_470) {
            iVar4 = thunk_FUN_144f07eb0(param_3,&DAT_149993038,1);
          }
        }
        plVar9 = plVar9 + 2;
        iVar11 = iVar11 + 1;
        local_468 = plVar9;
        if (iVar4 != 0) break;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_498);
}



// FUNCTION 1452dd630 FUN_1452dd630 body=17 status=ok
// SIG undefined FUN_1452dd630(void)

void FUN_1452dd630(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001452dd63a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_calloc_14c6d9f40)(1,0xb8);
  return;
}



// FUNCTION 1452dd650 FUN_1452dd650 body=40 status=ok
// SIG undefined FUN_1452dd650(void)

void FUN_1452dd650(longlong param_1)

{
  if (param_1 != 0) {
    FUN_144f07d10(param_1 + 0x98);
    (*(code *)PTR_free_14c6d9f28)(param_1);
  }
  return;
}



// FUNCTION 1452dd680 FUN_1452dd680 body=39 status=ok
// SIG undefined FUN_1452dd680(void)

undefined8 FUN_1452dd680(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar1 = FUN_1452ddc20(param_2,param_3,2);
    return uVar1;
  }
  return 2;
}



// FUNCTION 1452dd6b0 FUN_1452dd6b0 body=673 status=ok
// SIG undefined FUN_1452dd6b0(void)

void FUN_1452dd6b0(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  char local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)local_28;
  pcVar6 = (char *)*param_1;
  lVar5 = 0;
  local_28[0] = '\0';
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = '\0';
  local_28[7] = '\0';
  local_28[8] = '\0';
  local_28[9] = '\0';
  lVar4 = lVar5;
  lVar3 = lVar5;
  while( true ) {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    if (9 < lVar4) break;
    if ((int)lVar3 == 0) {
      if ((byte)(cVar1 + 0x9fU) < 0x1a) {
        local_28[lVar4] = cVar1;
        lVar4 = lVar4 + 1;
      }
      else {
        if (cVar1 != ':') break;
        lVar3 = 1;
        lVar4 = lVar4 + 1;
      }
    }
    else {
      if ((int)lVar3 == 1) {
        if (cVar1 == ']') {
          *param_1 = pcVar6;
          lVar4 = lVar5;
          goto LAB_1452dd750;
        }
        break;
      }
      lVar4 = lVar4 + 1;
    }
  }
  goto LAB_1452dd944;
  while (lVar4 = lVar2, lVar2 != 6) {
LAB_1452dd750:
    lVar2 = lVar4 + 1;
    lVar3 = lVar5;
    if (local_28[lVar4] != "digit"[lVar4]) goto LAB_1452dd781;
  }
  *(undefined1 *)(param_2 + 0x102) = 1;
  goto LAB_1452dd944;
  while (lVar3 = lVar2, lVar2 != 6) {
LAB_1452dd781:
    lVar2 = lVar3 + 1;
    lVar4 = lVar5;
    if (local_28[lVar3] != "alnum"[lVar3]) goto LAB_1452dd7b2;
  }
  *(undefined1 *)(param_2 + 0x101) = 1;
  goto LAB_1452dd944;
  while (lVar4 = lVar2, lVar2 != 6) {
LAB_1452dd7b2:
    lVar2 = lVar4 + 1;
    lVar3 = lVar5;
    if (local_28[lVar4] != "alpha"[lVar4]) goto LAB_1452dd7f0;
  }
  *(undefined1 *)(param_2 + 0x104) = 1;
  goto LAB_1452dd944;
  while (lVar3 = lVar2, lVar2 != 7) {
LAB_1452dd7f0:
    lVar2 = lVar3 + 1;
    lVar4 = lVar5;
    if (local_28[lVar3] != (&DAT_149d2c400)[lVar3]) goto LAB_1452dd821;
  }
  *(undefined1 *)(param_2 + 0x103) = 1;
  goto LAB_1452dd944;
  while (lVar4 = lVar2, lVar2 != 6) {
LAB_1452dd821:
    lVar2 = lVar4 + 1;
    lVar3 = lVar5;
    if (local_28[lVar4] != "print"[lVar4]) goto LAB_1452dd852;
  }
  *(undefined1 *)(param_2 + 0x105) = 1;
  goto LAB_1452dd944;
  while (lVar3 = lVar2, lVar2 != 6) {
LAB_1452dd852:
    lVar2 = lVar3 + 1;
    lVar4 = lVar5;
    if (local_28[lVar3] != "graph"[lVar3]) goto LAB_1452dd890;
  }
  *(undefined1 *)(param_2 + 0x108) = 1;
  goto LAB_1452dd944;
  while (lVar4 = lVar2, lVar2 != 6) {
LAB_1452dd890:
    lVar2 = lVar4 + 1;
    lVar3 = lVar5;
    if (local_28[lVar4] != "space"[lVar4]) goto LAB_1452dd8c1;
  }
  *(undefined1 *)(param_2 + 0x109) = 1;
  goto LAB_1452dd944;
  while (lVar3 = lVar2, lVar2 != 6) {
LAB_1452dd8c1:
    lVar2 = lVar3 + 1;
    lVar4 = lVar5;
    if (local_28[lVar3] != "blank"[lVar3]) goto LAB_1452dd8f0;
  }
  *(undefined1 *)(param_2 + 0x106) = 1;
  goto LAB_1452dd944;
  while (lVar4 = lVar3, lVar3 != 6) {
LAB_1452dd8f0:
    lVar3 = lVar4 + 1;
    if (local_28[lVar4] != "upper"[lVar4]) goto LAB_1452dd920;
  }
  *(undefined1 *)(param_2 + 0x10a) = 1;
  goto LAB_1452dd944;
  while (lVar5 = lVar4, lVar4 != 6) {
LAB_1452dd920:
    lVar4 = lVar5 + 1;
    if (local_28[lVar5] != "lower"[lVar5]) goto LAB_1452dd944;
  }
  *(undefined1 *)(param_2 + 0x107) = 1;
LAB_1452dd944:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)local_28);
}



// FUNCTION 1452dd960 FUN_1452dd960 body=288 status=ok
// SIG undefined FUN_1452dd960(void)

void FUN_1452dd960(longlong *param_1,longlong param_2)

{
  byte bVar1;
  byte *pbVar2;
  char cVar3;
  ulonglong uVar4;
  byte bVar5;
  byte bVar6;
  char cVar8;
  byte bVar7;
  
  pbVar2 = (byte *)*param_1;
  *param_1 = (longlong)(pbVar2 + 1);
  bVar7 = *pbVar2;
  *(undefined1 *)((ulonglong)bVar7 + param_2) = 1;
  if (((((byte)(bVar7 - 0x30) < 10) || ((byte)(bVar7 + 0x9f) < 0x1a)) ||
      ((byte)(bVar7 + 0xbf) < 0x1a)) && (pbVar2[1] == 0x2d)) {
    if ((byte)(bVar7 + 0xbf) < 0x1a) {
      cVar8 = '\x02';
    }
    else if ((byte)(bVar7 + 0x9f) < 0x1a) {
      cVar8 = '\x03';
    }
    else {
      cVar8 = (byte)(bVar7 - 0x30) < 10;
    }
    bVar1 = pbVar2[2];
    bVar5 = bVar1;
    if (bVar1 == 0x5c) {
      bVar5 = pbVar2[3];
    }
    if (bVar7 <= bVar5) {
      if ((byte)(bVar5 + 0xbf) < 0x1a) {
        cVar3 = '\x02';
      }
      else if ((byte)(bVar5 + 0x9f) < 0x1a) {
        cVar3 = '\x03';
      }
      else {
        cVar3 = (byte)(bVar5 - 0x30) < 10;
      }
      if (cVar3 == cVar8) {
        if (bVar7 != bVar5) {
          bVar7 = bVar7 + 0x9f;
          do {
            bVar6 = bVar7 + 1;
            if ((byte)(bVar7 + 0x21) < 0x1a) {
              cVar3 = '\x02';
            }
            else if (bVar6 < 0x1a) {
              cVar3 = '\x03';
            }
            else {
              cVar3 = (byte)(bVar7 + 0x32) < 10;
            }
            if (cVar3 == cVar8) {
              uVar4 = (ulonglong)(bVar6 + 0x61 & 0xff);
              *(undefined1 *)(uVar4 + param_2) = 1;
            }
            else {
              uVar4 = (ulonglong)(bVar6 + 0x61);
            }
            bVar7 = bVar6;
          } while ((byte)uVar4 != bVar5);
        }
        *param_1 = (longlong)(pbVar2 + 2 + (ulonglong)(bVar1 == 0x5c) + 1);
      }
    }
  }
  return;
}



// FUNCTION 1452dda80 FUN_1452dda80 body=410 status=ok
// SIG undefined FUN_1452dda80(void)

undefined8 FUN_1452dda80(longlong *param_1,void *param_2)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  byte *local_res8;
  
  iVar5 = 0;
  bVar3 = false;
  memset(param_2,0,0x10f);
  pbVar2 = (byte *)*param_1;
  bVar1 = *pbVar2;
  do {
    if (bVar1 == 0) {
      return 0;
    }
    if (iVar5 == 0) {
      if (bVar1 == 0x5d) {
        if (bVar3) {
          return 1;
        }
        bVar3 = true;
        iVar5 = 1;
        *(undefined1 *)((longlong)param_2 + 0x5d) = 1;
LAB_1452ddae2:
        *param_1 = *param_1 + 1;
      }
      else if (bVar1 == 0x5b) {
        local_res8 = pbVar2 + 2;
        if ((pbVar2[1] == 0x3a) && (iVar4 = FUN_1452dd6b0(&local_res8,param_2), iVar4 != 0)) {
          bVar3 = true;
          *param_1 = (longlong)local_res8;
        }
        else {
          *(undefined1 *)((longlong)param_2 + 0x5b) = 1;
          bVar3 = true;
          *param_1 = *param_1 + 1;
        }
      }
      else {
        if ((bVar1 == 0x5e) || (bVar1 == 0x21)) {
          if (!bVar3) {
            if (*(char *)((longlong)param_2 + 0x100) == '\0') {
              *(undefined1 *)((longlong)param_2 + 0x100) = 1;
              goto LAB_1452ddae2;
            }
            bVar3 = true;
          }
LAB_1452ddadb:
          *(undefined1 *)((ulonglong)bVar1 + (longlong)param_2) = 1;
          goto LAB_1452ddae2;
        }
        if (bVar1 == 0x5c) {
          *param_1 = (longlong)(pbVar2 + 1);
          if (pbVar2[1] == 0) {
            *(undefined1 *)((longlong)param_2 + 0x5c) = 1;
            bVar3 = true;
          }
          else {
            FUN_1452dd960(param_1,param_2);
            bVar3 = true;
          }
        }
        else {
          FUN_1452dd960(param_1,param_2);
          bVar3 = true;
        }
      }
    }
    else if (iVar5 == 1) {
      if (bVar1 == 0x5b) {
        iVar5 = 2;
        *(undefined1 *)((longlong)param_2 + 0x5b) = 1;
        goto LAB_1452ddae2;
      }
      if (bVar1 == 0x5d) {
        return 1;
      }
      if ((4 < (byte)(bVar1 - 9)) && (0x5e < (byte)(bVar1 - 0x20))) {
        return 0;
      }
      *(undefined1 *)((ulonglong)bVar1 + (longlong)param_2) = 1;
      *param_1 = *param_1 + 1;
      iVar5 = 0;
    }
    else if (iVar5 == 2) {
      if (bVar1 == 0x5d) {
        return 1;
      }
      iVar5 = 0;
      goto LAB_1452ddadb;
    }
    pbVar2 = (byte *)*param_1;
    bVar1 = *pbVar2;
  } while( true );
}



// FUNCTION 1452ddc20 FUN_1452ddc20 body=635 status=ok
// SIG undefined FUN_1452ddc20(void)

void FUN_1452ddc20(byte *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  bool bVar2;
  int iVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auStack_168 [32];
  byte *local_148 [2];
  char local_138 [256];
  char local_38;
  char local_37;
  char local_36;
  char local_35;
  char local_34;
  char local_33;
  char local_32;
  char local_31;
  char local_30;
  char local_2f;
  char local_2e;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_168;
  memset(local_138,0,0x10f);
  while (bVar4 = *param_1, bVar4 != 0) {
    if (bVar4 == 0x2a) {
      if (param_3 != 0) {
        bVar4 = param_1[1];
        goto joined_r0x0001452dde22;
      }
      break;
    }
    if (bVar4 == 0x3f) {
      if (*param_2 == 0) break;
LAB_1452dde09:
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
    else if (bVar4 == 0x5b) {
      local_148[0] = param_1 + 1;
      iVar3 = FUN_1452dda80(local_148,local_138);
      if (iVar3 == 0) break;
      bVar4 = *param_2;
      bVar2 = false;
      if (bVar4 == 0) break;
      if (local_138[bVar4] == '\0') {
        if (local_37 == '\0') {
          if (local_34 != '\0') goto LAB_1452ddcff;
          if (local_36 != '\0') {
            bVar2 = (byte)(bVar4 - 0x30) < 10;
            goto LAB_1452dddd2;
          }
          if (local_35 != '\0') {
            if (((byte)(bVar4 - 0x30) < 10) || ((byte)(bVar4 + 0x9f) < 6)) goto LAB_1452dddcd;
            bVar5 = (byte)(bVar4 + 0xbf) < 5;
            bVar6 = (byte)(bVar4 + 0xbf) == 5;
            goto LAB_1452dddcb;
          }
          if (local_33 == '\0') {
            if (local_2f == '\0') {
              if (local_2e == '\0') {
                if (local_31 == '\0') {
                  if (local_32 == '\0') {
                    if (local_30 != '\0') {
                      if (4 < (byte)(bVar4 - 9)) {
                        bVar5 = (byte)(bVar4 - 0x21) < 0x5d;
                        bVar6 = (byte)(bVar4 - 0x21) == 0x5d;
                        goto LAB_1452dddcb;
                      }
                      goto LAB_1452dddcd;
                    }
                  }
                  else if ((bVar4 == 0x20) || (bVar4 == 9)) goto LAB_1452dddcd;
                }
                else {
                  bVar2 = (byte)(bVar4 + 0x9f) < 0x1a;
                }
              }
              else {
                bVar2 = (byte)(bVar4 + 0xbf) < 0x1a;
              }
              goto LAB_1452dddd2;
            }
            if (bVar4 != 0x20) {
              bVar5 = (byte)(bVar4 - 9) < 4;
              bVar6 = (byte)(bVar4 - 9) == 4;
              goto LAB_1452dddcb;
            }
          }
          else if (4 < (byte)(bVar4 - 9)) {
            bVar5 = (byte)(bVar4 - 0x20) < 0x5e;
            bVar6 = (byte)(bVar4 - 0x20) == 0x5e;
            goto LAB_1452dddcb;
          }
          goto LAB_1452dddcd;
        }
        if ((byte)(bVar4 - 0x30) < 10) goto LAB_1452dddcd;
LAB_1452ddcff:
        if ((byte)(bVar4 + 0x9f) < 0x1a) goto LAB_1452dddcd;
        bVar5 = (byte)(bVar4 + 0xbf) < 0x19;
        bVar6 = (byte)(bVar4 + 0xbf) == 0x19;
LAB_1452dddcb:
        bVar2 = false;
        if (bVar5 || bVar6) goto LAB_1452dddcd;
      }
      else {
LAB_1452dddcd:
        bVar2 = true;
      }
LAB_1452dddd2:
      if (local_38 != '\0') {
        bVar2 = !bVar2;
      }
      if (!bVar2) break;
      param_1 = local_148[0] + 1;
      param_2 = param_2 + 1;
    }
    else {
      if (bVar4 != 0x5c) {
        if (bVar4 == *param_2) goto LAB_1452dde09;
        break;
      }
      bVar4 = param_1[1];
      pbVar1 = param_1 + 1;
      if (bVar4 == 0) {
        bVar4 = 0x5c;
        pbVar1 = param_1;
      }
      param_1 = pbVar1 + 1;
      if (*param_2 != bVar4) break;
      param_2 = param_2 + 1;
    }
  }
LAB_1452dde8b:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_168);
joined_r0x0001452dde22:
  if (bVar4 == 0) goto LAB_1452dde8b;
  if (bVar4 == 0x3f) {
    bVar4 = *param_2;
    param_2 = param_2 + 1;
    if (bVar4 == 0) goto LAB_1452dde8b;
  }
  else if (bVar4 != 0x2a) {
    bVar4 = *param_2;
    while ((bVar4 != 0 && (iVar3 = FUN_1452ddc20(param_1 + 1,param_2,param_3 + -1), iVar3 != 0))) {
      param_2 = param_2 + 1;
      bVar4 = *param_2;
    }
    goto LAB_1452dde8b;
  }
  bVar4 = param_1[2];
  param_1 = param_1 + 1;
  goto joined_r0x0001452dde22;
}



// FUNCTION 1452ddeb0 FUN_1452ddeb0 body=101 status=ok
// SIG undefined FUN_1452ddeb0(void)

undefined4 * FUN_1452ddeb0(undefined4 *param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if ((param_1 != (undefined4 *)0x0) && (-1 < (longlong)param_2)) {
    if (0 < (longlong)param_2) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = param_2;
      lVar3 = SUB168(ZEXT816(0x624dd2f1a9fbe77) * auVar1,8);
      uVar4 = (param_2 - lVar3 >> 1) + lVar3 >> 9;
      iVar2 = (int)uVar4;
      if (0x7fffffff < uVar4) {
        uVar4 = 0x7fffffff;
      }
      *param_1 = (int)uVar4;
      param_1[1] = ((int)param_2 + iVar2 * -1000) * 1000;
      return param_1;
    }
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  }
  return (undefined4 *)0x0;
}



// FUNCTION 1452ddf20 FUN_1452ddf20 body=49 status=ok
// SIG undefined FUN_1452ddf20(void)

undefined8 FUN_1452ddf20(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = calloc(1,0xb8);
  uVar2 = 0;
  *param_1 = pvVar1;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0xfffffc7b;
  }
  return uVar2;
}



// FUNCTION 1452ddf60 free body=7 status=ok
// SIG void free(void * _Memory)

void __cdecl free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x0001452ddf60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}



// FUNCTION 1452ddf70 FUN_1452ddf70 body=4 status=ok
// SIG undefined FUN_1452ddf70(void)

void FUN_1452ddf70(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



// FUNCTION 1452ddf80 FUN_1452ddf80 body=5 status=ok
// SIG undefined FUN_1452ddf80(void)

void FUN_1452ddf80(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}



// FUNCTION 1452ddf90 FUN_1452ddf90 body=5 status=ok
// SIG undefined FUN_1452ddf90(void)

void FUN_1452ddf90(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}



// FUNCTION 1452ddfa0 FUN_1452ddfa0 body=5 status=ok
// SIG undefined FUN_1452ddfa0(void)

void FUN_1452ddfa0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}



// FUNCTION 1452ddfb0 FUN_1452ddfb0 body=5 status=ok
// SIG undefined FUN_1452ddfb0(void)

void FUN_1452ddfb0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  return;
}



// FUNCTION 1452ddfc0 FUN_1452ddfc0 body=5 status=ok
// SIG undefined FUN_1452ddfc0(void)

void FUN_1452ddfc0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x48) = param_2;
  return;
}



// FUNCTION 1452ddfd0 FUN_1452ddfd0 body=5 status=ok
// SIG undefined FUN_1452ddfd0(void)

void FUN_1452ddfd0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x50) = param_2;
  return;
}



// FUNCTION 1452ddfe0 FUN_1452ddfe0 body=8 status=ok
// SIG undefined FUN_1452ddfe0(void)

void FUN_1452ddfe0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xa8) = param_2;
  return;
}



// FUNCTION 1452ddff0 FUN_1452ddff0 body=47 status=ok
// SIG undefined FUN_1452ddff0(void)

undefined8 FUN_1452ddff0(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = calloc(1,0x68);
  uVar2 = 0;
  *param_1 = pvVar1;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0xfffffc7b;
  }
  return uVar2;
}



// FUNCTION 1452de020 free body=7 status=ok
// SIG void free(void * _Memory)

void __cdecl free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x0001452de020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}



// FUNCTION 1452de030 FUN_1452de030 body=8 status=ok
// SIG undefined FUN_1452de030(void)

void FUN_1452de030(longlong param_1,undefined4 param_2)

{
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}



// FUNCTION 1452de040 FUN_1452de040 body=64 status=ok
// SIG undefined FUN_1452de040(void)

void FUN_1452de040(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong local_18 [2];
  
  iVar1 = FUN_1452e3120(local_18,param_2,param_3,0,param_4,0);
  if (iVar1 == 0) {
    *(undefined4 *)(local_18[0] + 0x930) = 1;
    *param_1 = local_18[0];
  }
  return;
}



// FUNCTION 1452de080 FUN_1452de080 body=413 status=ok
// SIG undefined FUN_1452de080(void)

void FUN_1452de080(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  if (param_1 != 0) {
    lVar1 = param_1 + 0x880;
    puVar5 = *(undefined8 **)(param_1 + 0x8d0);
    while (puVar5 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar5;
      FUN_1455112a0(lVar1,puVar5[1]);
      FUN_1455112a0(lVar1,puVar5);
      puVar5 = puVar2;
    }
    FUN_145513a10(param_1 + 0x20);
    FUN_145511380(param_1,FUN_1452e3650,param_1);
    FUN_145511360(param_1);
    lVar4 = *(longlong *)(param_1 + 0xf8);
    while (lVar4 != 0) {
      lVar3 = *(longlong *)(lVar4 + 0x88);
      FUN_1455134b0(lVar4,lVar1);
      FUN_1455112a0(lVar1,lVar4);
      lVar4 = lVar3;
    }
    lVar4 = *(longlong *)(param_1 + 0x110);
    while (lVar4 != 0) {
      lVar3 = *(longlong *)(lVar4 + 0x88);
      FUN_1455134b0(lVar4,lVar1);
      FUN_1455112a0(lVar1,lVar4);
      lVar4 = lVar3;
    }
    lVar4 = *(longlong *)(param_1 + 0x128);
    while (lVar4 != 0) {
      lVar3 = *(longlong *)(lVar4 + 0x88);
      FUN_1455134b0(lVar4,lVar1);
      FUN_1455112a0(lVar1,lVar4);
      lVar4 = lVar3;
    }
    FUN_1455134b0(*(undefined8 *)(param_1 + 0x140),lVar1);
    FUN_1455112a0(lVar1,*(undefined8 *)(param_1 + 0x140));
    *(undefined8 *)(param_1 + 0x140) = 0;
    FUN_145511c80(param_1 + 0x148);
    *(undefined4 *)(param_1 + 0x188) = 0;
    FUN_1452e2ef0(param_1);
    thunk_FUN_1455102a0(param_1 + 0x280);
    FUN_14550ea70(param_1 + 0x6d8);
    FUN_1455119d0(param_1 + 0x148);
    FUN_1455112a0(lVar1,param_1);
  }
  return;
}



// FUNCTION 1452de220 FUN_1452de220 body=199 status=ok
// SIG undefined FUN_1452de220(void)

ulonglong FUN_1452de220(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  undefined8 local_res8;
  
  local_res8 = 0;
  uVar3 = FUN_1452e4b10(param_1,&local_res8,0);
  while( true ) {
    uVar2 = (ulonglong)uVar3;
    if ((int)uVar3 < 1) {
      return uVar2;
    }
    iVar4 = (**(code **)(param_1 + 0x7c8))
                      (param_1,local_res8,uVar2,0,*(undefined8 *)(param_1 + 0x8a8));
    if (iVar4 < 0) break;
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x150) + 0x18);
    *plVar1 = *plVar1 - (longlong)(int)(uVar3 - iVar4);
    uVar3 = FUN_1452e4b10(param_1,&local_res8,0);
  }
  if (iVar4 != -0x1f8) {
    return 0xfffffc7a;
  }
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x150) + 0x18);
  *plVar1 = *plVar1 - uVar2;
  return 0;
}



// FUNCTION 1452de2f0 FUN_1452de2f0 body=7371 status=ok
// SIG undefined FUN_1452de2f0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1452de2f0(longlong param_1,undefined *param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  bool bVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  undefined *puVar19;
  byte bVar20;
  char *pcVar21;
  undefined *_Buf2;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  ulonglong local_90;
  uint local_88;
  undefined *local_78;
  undefined8 local_70;
  int local_68;
  uint uStack_64;
  ulonglong local_60;
  longlong local_58;
  int local_50;
  char local_4c;
  byte local_4b;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar1 = (ulonglong *)(param_1 + 400);
  local_60 = param_3;
  if (param_2 == (undefined *)0x0) {
    if (param_3 != 0) {
      _wassert(L"inlen == 0",
               L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c",
               0x1505);
    }
    param_2 = &DAT_149d2c438;
  }
  puVar19 = param_2 + local_60;
  local_78 = puVar19;
  iVar7 = FUN_1452e1310(param_1);
  if (-0x385 < iVar7) {
    if (((*(byte *)(param_1 + 0x9ab) & 2) == 0) &&
       ((lVar9 = FUN_145511730(param_1),
        lVar9 - *(longlong *)(param_1 + 0x900) != *(longlong *)(param_1 + 0x8f8) ||
        ((*(byte *)(param_1 + 0x9ab) & 0xc) == 0)))) {
LAB_1452de3bd:
      lVar9 = param_1 + 0x880;
      _Buf2 = param_2;
LAB_1452de3d0:
      param_2 = _Buf2;
      switch(*(undefined4 *)(param_1 + 0x270)) {
      case 0:
        uVar17 = *(ulonglong *)(param_1 + 0x260);
        uVar11 = uVar17;
        if (local_60 < uVar17) {
          uVar11 = local_60;
        }
        iVar7 = memcmp("PRI * HTTP/2.0\r\n\r\nSM\r\n\r\n" + (0x18 - uVar17),_Buf2,uVar11);
        if (iVar7 != 0) goto LAB_1452dfec6;
        param_2 = _Buf2 + uVar11;
        *(ulonglong *)(param_1 + 0x260) = uVar17 - uVar11;
        puVar19 = local_78;
        if (uVar17 - uVar11 == 0) {
          FUN_1452e2ef0(param_1);
          *(undefined4 *)(param_1 + 0x270) = 1;
          puVar19 = local_78;
        }
        goto switchD_1452de3ed_default;
      case 1:
        uVar11 = *(longlong *)(param_1 + 0x218) - *(longlong *)(param_1 + 0x210);
        uVar17 = (longlong)puVar19 - (longlong)_Buf2;
        if (uVar11 <= (ulonglong)((longlong)puVar19 - (longlong)_Buf2)) {
          uVar17 = uVar11;
        }
        lVar10 = FUN_1452e70f0(*(longlong *)(param_1 + 0x210),_Buf2,uVar17);
        _Buf2 = _Buf2 + uVar17;
        *(longlong *)(param_1 + 0x210) = lVar10;
        if (*(longlong *)(param_1 + 0x218) != lVar10) goto LAB_1452dfec6;
        if ((*(char *)(*(longlong *)(param_1 + 0x208) + 3) == '\x04') &&
           ((*(byte *)(*(longlong *)(param_1 + 0x208) + 4) & 1) == 0)) {
          *(undefined4 *)(param_1 + 0x270) = 2;
          goto switchD_1452de3ed_caseD_2;
        }
        iVar7 = FUN_1452e2c30(param_1,0xfffffde8,
                              "Remote peer returned unexpected data while we expected SETTINGS frame.  Perhaps, peer does not support HTTP/2 properly."
                             );
        if (iVar7 < -900) goto LAB_1452dfec6;
        pcVar21 = "SETTINGS expected";
        break;
      case 2:
switchD_1452de3ed_caseD_2:
        uVar11 = *(longlong *)(param_1 + 0x218) - *(longlong *)(param_1 + 0x210);
        uVar17 = (longlong)puVar19 - (longlong)_Buf2;
        if (uVar11 <= (ulonglong)((longlong)puVar19 - (longlong)_Buf2)) {
          uVar17 = uVar11;
        }
        lVar10 = FUN_1452e70f0(*(longlong *)(param_1 + 0x210),_Buf2,uVar17);
        param_2 = _Buf2 + uVar17;
        *(longlong *)(param_1 + 0x210) = lVar10;
        if (*(longlong *)(param_1 + 0x218) != lVar10) goto LAB_1452dfec6;
        FUN_145511f70(puVar1,*(undefined8 *)(param_1 + 0x208));
        uVar17 = *puVar1;
        *(ulonglong *)(param_1 + 0x260) = uVar17;
        if (*(uint *)(param_1 + 0x990) < uVar17) {
          pcVar21 = "too large frame size";
          uVar13 = 6;
          goto LAB_1452dff62;
        }
        bVar20 = *(byte *)(param_1 + 0x19c);
        switch(bVar20) {
        case 0:
          *(byte *)(param_1 + 0x19d) = *(byte *)(param_1 + 0x19d) & 9;
          bVar5 = true;
          iVar7 = FUN_1452e6120(param_1);
          if (*(int *)(param_1 + 0x270) == 0xf) goto switchD_1452de3ed_caseD_f;
          if (iVar7 == -0x68) {
            *(undefined4 *)(param_1 + 0x270) = 0xe;
          }
          else {
            if (iVar7 < -900) goto LAB_1452dfec6;
            if ((*(byte *)(param_1 + 0x19d) & 8) == 0) {
              *(undefined4 *)(param_1 + 0x270) = 0xd;
            }
            else {
              if (*puVar1 == 0) {
                pcVar21 = "DATA: insufficient padding space";
                uVar13 = 1;
                goto LAB_1452dff62;
              }
              FUN_1455118e0(param_1 + 0x1f8);
              *(longlong *)(param_1 + 0x218) = *(longlong *)(param_1 + 0x218) + 1;
              *(undefined4 *)(param_1 + 0x270) = 0xc;
            }
          }
          break;
        case 1:
          *(byte *)(param_1 + 0x19d) = *(byte *)(param_1 + 0x19d) & 0x2d;
          if ((*(byte *)(param_1 + 0x19d) & 8) == 0) {
            uVar17 = FUN_145511fe0();
            if (uVar17 == 0) {
              if ((*(code **)(param_1 + 0x848) == (code *)0x0) ||
                 (iVar7 = (**(code **)(param_1 + 0x848))(param_1,puVar1), iVar7 == 0))
              goto LAB_1452de65c;
              goto LAB_1452dfec6;
            }
            if (*(ulonglong *)(param_1 + 0x260) < uVar17) goto LAB_1452de604;
            *(undefined4 *)(param_1 + 0x270) = 3;
            FUN_1455118e0(param_1 + 0x1f8);
            *(longlong *)(param_1 + 0x218) = *(longlong *)(param_1 + 0x218) + uVar17;
            bVar5 = false;
          }
          else {
            if (uVar17 == 0) {
              pcVar21 = "HEADERS: insufficient padding space";
              goto LAB_1452dff5c;
            }
LAB_1452de5cd:
            FUN_1455118e0(param_1 + 0x1f8);
            *(longlong *)(param_1 + 0x218) = *(longlong *)(param_1 + 0x218) + 1;
            bVar5 = false;
            *(undefined4 *)(param_1 + 0x270) = 3;
          }
          break;
        case 2:
          *(undefined1 *)(param_1 + 0x19d) = 0;
          if (uVar17 == 5) {
            *(undefined4 *)(param_1 + 0x270) = 3;
            FUN_1455118e0(param_1 + 0x1f8);
            *(longlong *)(param_1 + 0x218) = *(longlong *)(param_1 + 0x218) + 5;
            bVar5 = false;
          }
          else {
            bVar5 = true;
            *(undefined4 *)(param_1 + 0x270) = 7;
          }
          break;
        case 3:
        case 8:
          *(undefined1 *)(param_1 + 0x19d) = 0;
          if (uVar17 == 4) {
            *(undefined4 *)(param_1 + 0x270) = 3;
            FUN_1455118e0(param_1 + 0x1f8);
            *(longlong *)(param_1 + 0x218) = *(longlong *)(param_1 + 0x218) + 4;
            bVar5 = false;
          }
          else {
            bVar5 = true;
            *(undefined4 *)(param_1 + 0x270) = 7;
          }
          break;
        case 4:
          bVar20 = *(byte *)(param_1 + 0x19d) & 1;
          uVar11 = uVar17 / 6;
          *(byte *)(param_1 + 0x19d) = bVar20;
          if ((uVar17 == uVar11 * 6) && ((bVar20 == 0 || (uVar17 == 0)))) {
            if ((*(ulonglong *)(param_1 + 0x918) <= *(ulonglong *)(param_1 + 0x910)) &&
               (bVar20 == 0)) goto LAB_1452dfec6;
            *(undefined4 *)(param_1 + 0x270) = 8;
            if (uVar17 == 0) {
              bVar5 = true;
              FUN_1455118e0(param_1 + 0x1f8);
            }
            else {
              *(ulonglong *)(param_1 + 600) = uVar11 + 1;
              if (*(ulonglong *)(param_1 + 0x928) < uVar11) {
                pcVar21 = "SETTINGS: too many setting entries";
                uVar13 = 0xb;
                goto LAB_1452dff62;
              }
              lVar10 = FUN_145511290(lVar9,(uVar11 + 1) * 8);
              *(longlong *)(param_1 + 0x1f0) = lVar10;
              if (lVar10 == 0) goto LAB_1452dfec6;
              lVar4 = *(longlong *)(param_1 + 600);
              *(undefined4 *)(lVar10 + -8 + lVar4 * 8) = 1;
              *(undefined4 *)(lVar10 + -4 + lVar4 * 8) = 0xffffffff;
              FUN_1455118e0(param_1 + 0x1f8);
              *(longlong *)(param_1 + 0x218) = *(longlong *)(param_1 + 0x218) + 6;
              bVar5 = false;
            }
          }
          else {
LAB_1452de604:
            bVar5 = true;
            *(undefined4 *)(param_1 + 0x270) = 7;
          }
          break;
        case 5:
          *(byte *)(param_1 + 0x19d) = *(byte *)(param_1 + 0x19d) & 0xc;
          if ((*(byte *)(param_1 + 0x19d) & 8) == 0) {
            if (uVar17 < 4) {
              bVar5 = true;
              *(undefined4 *)(param_1 + 0x270) = 7;
            }
            else {
              *(undefined4 *)(param_1 + 0x270) = 3;
              FUN_1455118e0(param_1 + 0x1f8);
              *(longlong *)(param_1 + 0x218) = *(longlong *)(param_1 + 0x218) + 4;
              bVar5 = false;
            }
            break;
          }
          if (uVar17 != 0) goto LAB_1452de5cd;
          pcVar21 = "PUSH_PROMISE: insufficient padding space";
          goto LAB_1452dff5c;
        case 6:
          *(byte *)(param_1 + 0x19d) = *(byte *)(param_1 + 0x19d) & 1;
          if (uVar17 == 8) {
LAB_1452de88c:
            *(undefined4 *)(param_1 + 0x270) = 3;
            FUN_1455118e0(param_1 + 0x1f8);
            *(longlong *)(param_1 + 0x218) = *(longlong *)(param_1 + 0x218) + 8;
            bVar5 = false;
          }
          else {
            bVar5 = true;
            *(undefined4 *)(param_1 + 0x270) = 7;
          }
          break;
        case 7:
          *(undefined1 *)(param_1 + 0x19d) = 0;
          if (7 < uVar17) goto LAB_1452de88c;
          bVar5 = true;
          *(undefined4 *)(param_1 + 0x270) = 7;
          break;
        case 9:
          pcVar21 = "CONTINUATION: unexpected";
          goto LAB_1452dff5c;
        default:
          if (((uint)*(byte *)((ulonglong)(bVar20 >> 3) + 0x9ad + param_1) & 1 << (bVar20 & 7)) == 0
             ) {
            if (bVar20 == 10) {
              bVar5 = true;
              if ((*(byte *)(param_1 + 0x9a4) & 1) == 0) {
                *(undefined4 *)(param_1 + 0x270) = 6;
              }
              else {
                *(undefined1 *)(param_1 + 0x19d) = 0;
                *(longlong *)(param_1 + 0x1a0) = param_1 + 0x1d0;
                if (*(char *)(param_1 + 0x9aa) == '\0') {
                  if (uVar17 < 2) {
                    *(undefined4 *)(param_1 + 0x270) = 7;
                  }
                  else {
                    *(undefined4 *)(param_1 + 0x270) = 3;
                    FUN_1455118e0(param_1 + 0x1f8);
                    *(longlong *)(param_1 + 0x218) = *(longlong *)(param_1 + 0x218) + 2;
                  }
                }
                else {
                  *(undefined4 *)(param_1 + 0x270) = 6;
                }
              }
            }
            else if (bVar20 == 0xc) {
              if ((*(byte *)(param_1 + 0x9a4) & 2) == 0) {
                bVar5 = true;
                *(undefined4 *)(param_1 + 0x270) = 6;
              }
              else {
                *(longlong *)(param_1 + 0x1a0) = param_1 + 0x1d0;
                if (((*(char *)(param_1 + 0x9aa) != '\0') || (*(int *)(param_1 + 0x198) != 0)) ||
                   ((*(byte *)(param_1 + 0x19d) & 0xf0) != 0)) goto LAB_1452de929;
                *(undefined1 *)(param_1 + 0x19d) = 0;
                if (uVar17 == 0) {
                  bVar5 = true;
                  *(undefined4 *)(param_1 + 0x270) = 0x11;
                }
                else {
                  lVar10 = FUN_145511290(lVar9,uVar17);
                  *(longlong *)(param_1 + 0x248) = lVar10;
                  if (lVar10 == 0) goto LAB_1452dfec6;
                  FUN_1455118f0(param_1 + 0x220,lVar10);
                  bVar5 = false;
                  *(undefined4 *)(param_1 + 0x270) = 0x11;
                }
              }
            }
            else {
LAB_1452de929:
              bVar5 = true;
              *(undefined4 *)(param_1 + 0x270) = 6;
            }
          }
          else {
            bVar5 = true;
            if (*(longlong *)(param_1 + 0x860) == 0) {
              *(undefined4 *)(param_1 + 0x270) = 6;
            }
            else {
              *(undefined4 *)(param_1 + 0x270) = 0x12;
            }
          }
        }
        iVar7 = *(int *)(param_1 + 0x270);
        if (((((iVar7 != 5) && (iVar7 != 6)) && (iVar7 != 7)) && ((iVar7 != 0xe && (iVar7 != 0xf))))
           && ((*(code **)(param_1 + 0x848) != (code *)0x0 &&
               (iVar7 = (**(code **)(param_1 + 0x848))(param_1,puVar1), iVar7 != 0))))
        goto LAB_1452dfec6;
        _Buf2 = param_2;
        if (!bVar5) goto switchD_1452de3ed_default;
        goto LAB_1452de3d0;
      case 3:
        uVar11 = *(longlong *)(param_1 + 0x218) - *(longlong *)(param_1 + 0x210);
        uVar17 = (longlong)puVar19 - (longlong)_Buf2;
        if (uVar11 <= (ulonglong)((longlong)puVar19 - (longlong)_Buf2)) {
          uVar17 = uVar11;
        }
        lVar10 = FUN_1452e70f0(*(longlong *)(param_1 + 0x210),_Buf2,uVar17);
        param_2 = _Buf2 + uVar17;
        uVar17 = *(longlong *)(param_1 + 0x260) - uVar17;
        *(longlong *)(param_1 + 0x210) = lVar10;
        *(ulonglong *)(param_1 + 0x260) = uVar17;
        if (*(longlong *)(param_1 + 0x218) != lVar10) goto LAB_1452dfec6;
        switch(*(undefined1 *)(param_1 + 0x19c)) {
        case 1:
          if ((*(longlong *)(param_1 + 0x268) == 0) && ((*(byte *)(param_1 + 0x19d) & 8) != 0)) {
            uVar11 = FUN_145511fe0();
            uVar17 = *(ulonglong *)(param_1 + 0x260);
            uVar14 = **(byte **)(param_1 + 0x208) + 1;
            uVar12 = (ulonglong)uVar14;
            if (uVar12 - 1 <= uVar17) {
              *(ulonglong *)(param_1 + 0x268) = uVar12;
              if (uVar12 + uVar11 <= uVar17 + 1) {
                *(ulonglong *)(param_1 + 0x1a0) = (ulonglong)uVar14;
                if (uVar11 == 0) {
                  FUN_1455118e0(param_1 + 0x1f8);
                  goto LAB_1452de65c;
                }
                if (uVar11 <= uVar17) {
                  *(undefined4 *)(param_1 + 0x270) = 3;
                  FUN_1455118e0(param_1 + 0x1f8);
                  *(longlong *)(param_1 + 0x218) = *(longlong *)(param_1 + 0x218) + uVar11;
                  goto switchD_1452de3ed_default;
                }
                *(undefined4 *)(param_1 + 0x270) = 7;
                goto LAB_1452de3bd;
              }
            }
            iVar7 = FUN_1452e2d70(param_1,*(undefined4 *)(param_1 + 0x93c),1,
                                  "HEADERS: invalid padding");
            goto joined_r0x0001452dff04;
          }
LAB_1452de65c:
          iVar7 = FUN_1452e5930(param_1);
          if (iVar7 < -900) goto LAB_1452dfec6;
          if (*(int *)(param_1 + 0x270) == 0xf) goto switchD_1452de3ed_caseD_f;
          if (iVar7 == -0x209) {
            uVar3 = *(undefined4 *)(param_1 + 0x198);
LAB_1452de68c:
            iVar7 = FUN_1452e0810(param_1,uVar3);
            if (iVar7 < -900) goto LAB_1452dfec6;
LAB_1452de6a5:
            *(undefined4 *)(param_1 + 0x270) = 5;
            goto LAB_1452de3bd;
          }
          break;
        case 2:
          FUN_145512240(puVar1,*(undefined8 *)(param_1 + 0x208));
          iVar7 = FUN_1452e1a80(param_1,puVar1);
          goto joined_r0x0001452dee2f;
        case 3:
          FUN_145512350(puVar1,*(undefined8 *)(param_1 + 0x208));
          iVar7 = FUN_1452e1c10(param_1,puVar1);
          goto joined_r0x0001452dee2f;
        default:
          goto switchD_1452deb00_caseD_4;
        case 5:
          if ((*(longlong *)(param_1 + 0x268) == 0) && ((*(byte *)(param_1 + 0x19d) & 8) != 0)) {
            uVar14 = **(byte **)(param_1 + 0x208) + 1;
            if ((ulonglong)uVar14 - 1 <= uVar17) {
              *(ulonglong *)(param_1 + 0x268) = (ulonglong)uVar14;
              if ((ulonglong)uVar14 + 4 <= uVar17 + 1) {
                *(ulonglong *)(param_1 + 0x1a0) = (ulonglong)uVar14;
                if (3 < uVar17) {
                  *(undefined4 *)(param_1 + 0x270) = 3;
                  FUN_1455118e0(param_1 + 0x1f8);
                  *(longlong *)(param_1 + 0x218) = *(longlong *)(param_1 + 0x218) + 4;
                  goto switchD_1452de3ed_default;
                }
                *(undefined4 *)(param_1 + 0x270) = 7;
                goto LAB_1452de3bd;
              }
            }
            iVar7 = FUN_1452e2d70(param_1,*(undefined4 *)(param_1 + 0x93c),1,
                                  "PUSH_PROMISE: invalid padding");
            goto joined_r0x0001452dff04;
          }
          iVar7 = FUN_145512700(puVar1,*(undefined8 *)(param_1 + 0x208));
          if (iVar7 == 0) {
            iVar7 = FUN_1452e2310(param_1,puVar1);
          }
          else {
            iVar7 = FUN_1452e2d70(param_1,*(undefined4 *)(param_1 + 0x93c));
          }
          if (iVar7 < -900) goto LAB_1452dfec6;
          if (*(int *)(param_1 + 0x270) == 0xf) goto switchD_1452de3ed_caseD_f;
          if (iVar7 == -0x209) {
            uVar3 = *(undefined4 *)(param_1 + 0x1b8);
            goto LAB_1452de68c;
          }
          break;
        case 6:
          FUN_1455127f0(puVar1,*(undefined8 *)(param_1 + 0x208));
          if (*(int *)(param_1 + 0x198) != 0) {
            if ((*(code **)(param_1 + 0x7e0) == (code *)0x0) ||
               (iVar7 = (**(code **)(param_1 + 0x7e0))(param_1,puVar1), iVar7 == 0)) {
              iVar7 = FUN_1452e2d70(param_1,*(undefined4 *)(param_1 + 0x93c));
            }
            else {
              iVar7 = -0x386;
            }
            goto joined_r0x0001452dee2f;
          }
          if ((((*(byte *)(param_1 + 0x99c) & 8) == 0) && ((*(byte *)(param_1 + 0x19d) & 1) == 0))
             && (iVar7 = FUN_1452e36d0(param_1), iVar7 == 0)) {
            if (*(ulonglong *)(param_1 + 0x918) <= *(ulonglong *)(param_1 + 0x910)) {
              iVar7 = -0x388;
              goto joined_r0x0001452dee2f;
            }
            lVar10 = FUN_145511290(lVar9,0x98);
            if (lVar10 == 0) {
              iVar7 = -0x385;
              puVar19 = local_78;
              goto joined_r0x0001452dee2f;
            }
            FUN_145513480(lVar10);
            FUN_145512ec0(lVar10,1);
            iVar7 = FUN_1452e0670(param_1,lVar10);
            if (iVar7 != 0) {
              FUN_145512ef0(lVar10);
              FUN_1455112a0(lVar9,lVar10);
              puVar19 = local_78;
              goto joined_r0x0001452dee2f;
            }
            *(longlong *)(param_1 + 0x910) = *(longlong *)(param_1 + 0x910) + 1;
            puVar19 = local_78;
          }
          if ((*(code **)(param_1 + 0x7d8) == (code *)0x0) ||
             (iVar7 = (**(code **)(param_1 + 0x7d8))(param_1,puVar1), iVar7 == 0)) {
            iVar7 = 0;
          }
          else {
            iVar7 = -0x386;
          }
          goto joined_r0x0001452dee2f;
        case 7:
          if (*puVar1 - 8 != 0) {
            lVar10 = FUN_145511290(lVar9,*puVar1 - 8);
            *(longlong *)(param_1 + 0x248) = lVar10;
            if (lVar10 == 0) goto LAB_1452dfec6;
            FUN_1455118f0(param_1 + 0x220,lVar10);
          }
          *(undefined4 *)(param_1 + 0x270) = 9;
          _Buf2 = param_2;
          goto LAB_1452de3d0;
        case 8:
          FUN_1455129f0(puVar1,*(undefined8 *)(param_1 + 0x208));
          if (*(int *)(param_1 + 0x198) == 0) {
            iVar7 = *(int *)(param_1 + 0x1a0);
            if (iVar7 == 0) {
              if ((*(code **)(param_1 + 0x7e0) == (code *)0x0) ||
                 (iVar7 = (**(code **)(param_1 + 0x7e0))(param_1,puVar1), iVar7 == 0)) {
                iVar7 = FUN_1452e2d70(param_1,*(undefined4 *)(param_1 + 0x93c));
              }
              else {
                iVar7 = -0x386;
              }
            }
            else {
              if (*(int *)(param_1 + 0x94c) <= 0x7fffffff - iVar7) {
                *(int *)(param_1 + 0x94c) = iVar7 + *(int *)(param_1 + 0x94c);
                goto LAB_1452def27;
              }
              iVar7 = FUN_1452e5210(param_1,puVar1);
            }
          }
          else {
            iVar7 = FUN_1452e5d30(param_1,puVar1);
          }
          goto joined_r0x0001452dee2f;
        case 10:
          uVar6 = FUN_1452e6ef0(*(undefined8 *)(param_1 + 0x208));
          if (*(ulonglong *)(param_1 + 0x260) < (ulonglong)uVar6) {
            *(undefined4 *)(param_1 + 0x270) = 7;
            goto LAB_1452de3bd;
          }
          if (2 < *puVar1) {
            lVar9 = FUN_145511290(lVar9,*puVar1 - 2);
            *(longlong *)(param_1 + 0x248) = lVar9;
            if (lVar9 == 0) goto LAB_1452dfec6;
            FUN_1455118f0(param_1 + 0x220,lVar9);
          }
          *(undefined4 *)(param_1 + 0x270) = 0x10;
          goto LAB_1452de3bd;
        }
        *(uint *)(param_1 + 0x270) = (iVar7 == -0x67) + 4;
        goto LAB_1452de3bd;
      case 4:
      case 5:
        uVar17 = *(ulonglong *)(param_1 + 0x260);
        uVar11 = (longlong)puVar19 - (longlong)_Buf2;
        if (uVar17 <= (ulonglong)((longlong)puVar19 - (longlong)_Buf2)) {
          uVar11 = uVar17;
        }
        uVar12 = FUN_145512fd0(puVar1,*(undefined8 *)(param_1 + 0x268));
        iVar7 = (int)uVar11;
        if (uVar17 - uVar11 < uVar12) {
          uVar12 = uVar12 - (uVar17 - uVar11);
          if (uVar11 < uVar12) {
            iVar7 = -1;
          }
          else {
            iVar7 = iVar7 - (int)uVar12;
          }
        }
        iVar16 = 0;
        if (iVar7 != -1) {
          iVar16 = iVar7;
        }
        lVar9 = FUN_145512fd0(puVar1,*(undefined8 *)(param_1 + 0x268));
        if (((*(byte *)(param_1 + 0x19d) & 4) == 0) ||
           (iVar7 = 1, *(longlong *)(param_1 + 0x260) - (longlong)iVar16 != lVar9)) {
          iVar7 = 0;
        }
        if ((iVar16 < 1) && ((iVar16 != 0 || (iVar7 == 0)))) {
          *(longlong *)(param_1 + 0x260) = *(longlong *)(param_1 + 0x260) - uVar11;
          lVar9 = *(longlong *)(param_1 + 0x260);
        }
        else {
          local_98 = (ulonglong)iVar16;
          local_70 = 0;
          local_88 = (uint)(*(int *)(param_1 + 0x270) == 4);
          local_90 = CONCAT44(local_90._4_4_,iVar7);
          iVar7 = FUN_1452e5280(param_1,puVar1);
          if (iVar7 < -900) goto LAB_1452dfec6;
          if (*(int *)(param_1 + 0x270) == 0xf) goto switchD_1452de3ed_caseD_f;
          lVar9 = *(longlong *)(param_1 + 0x260);
          if (iVar7 == -0x20e) {
            *(longlong *)(param_1 + 0x260) = lVar9 - local_70;
            goto LAB_1452dfec6;
          }
          if (iVar7 == -0x209) {
            param_2 = _Buf2 + local_70;
            *(longlong *)(param_1 + 0x260) = lVar9 - local_70;
            if (*(char *)(param_1 + 0x19c) == '\x05') {
              uVar3 = *(undefined4 *)(param_1 + 0x1b8);
            }
            else {
              uVar3 = *(undefined4 *)(param_1 + 0x198);
            }
            iVar7 = FUN_1452e0810(param_1,uVar3);
            if (iVar7 < -900) goto LAB_1452dfec6;
            *(undefined4 *)(param_1 + 0x270) = 5;
            puVar19 = local_78;
            goto LAB_1452de3bd;
          }
          lVar9 = lVar9 - uVar11;
          param_2 = _Buf2 + uVar11;
          *(longlong *)(param_1 + 0x260) = lVar9;
          if (iVar7 == -0x20b) {
            if (lVar9 != 0) {
              *(undefined4 *)(param_1 + 0x270) = 6;
              puVar19 = local_78;
              goto LAB_1452de3bd;
            }
            FUN_1452e2ef0(param_1);
            puVar19 = local_78;
            goto switchD_1452de3ed_default;
          }
        }
        param_2 = _Buf2 + uVar11;
        puVar19 = local_78;
        if (lVar9 != 0) goto switchD_1452de3ed_default;
        if ((*(byte *)(param_1 + 0x19d) & 4) == 0) {
          FUN_1455118e0(param_1 + 0x1f8);
          *(longlong *)(param_1 + 0x218) = *(longlong *)(param_1 + 0x218) + 9;
          *(undefined8 *)(param_1 + 0x268) = 0;
          *(uint *)(param_1 + 0x270) = (*(int *)(param_1 + 0x270) != 4) + 10;
          puVar19 = local_78;
          goto switchD_1452de3ed_default;
        }
        if ((*(int *)(param_1 + 0x270) == 4) && (iVar7 = FUN_1452e56e0(param_1), iVar7 < -900))
        goto LAB_1452dfec6;
        FUN_1452e2ef0(param_1);
        puVar19 = local_78;
        goto switchD_1452de3ed_default;
      case 6:
        uVar17 = *(ulonglong *)(param_1 + 0x260);
        uVar11 = (longlong)puVar19 - (longlong)_Buf2;
        if (uVar17 <= (ulonglong)((longlong)puVar19 - (longlong)_Buf2)) {
          uVar11 = uVar17;
        }
        param_2 = _Buf2 + uVar11;
        *(ulonglong *)(param_1 + 0x260) = uVar17 - uVar11;
        if (uVar17 - uVar11 != 0) goto switchD_1452de3ed_default;
        cVar2 = *(char *)(param_1 + 0x19c);
        if (((cVar2 != '\x01') && (cVar2 != '\x05')) && (cVar2 != '\t'))
        goto switchD_1452deb00_caseD_4;
        *(undefined1 *)(param_1 + 0x714) = 1;
        FUN_1452e2ef0(param_1);
        goto switchD_1452de3ed_default;
      case 7:
        iVar7 = FUN_1452e2d70(param_1,*(undefined4 *)(param_1 + 0x93c),6);
        if (iVar7 < -900) goto LAB_1452dfec6;
        if (*(int *)(param_1 + 0x270) != 0xf) {
          _wassert(L"iframe->state == NGHTTP2_IB_IGN_ALL",
                   L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c"
                   ,0x18b0);
        }
        goto switchD_1452de3ed_caseD_f;
      case 8:
        uVar11 = *(longlong *)(param_1 + 0x218) - *(longlong *)(param_1 + 0x210);
        uVar17 = (longlong)puVar19 - (longlong)_Buf2;
        if (uVar11 <= (ulonglong)((longlong)puVar19 - (longlong)_Buf2)) {
          uVar17 = uVar11;
        }
        lVar9 = FUN_1452e70f0(*(longlong *)(param_1 + 0x210),_Buf2);
        *(longlong *)(param_1 + 0x260) = *(longlong *)(param_1 + 0x260) - uVar17;
        param_2 = _Buf2 + uVar17;
        *(longlong *)(param_1 + 0x210) = lVar9;
        if (*(longlong *)(param_1 + 0x218) != lVar9) goto switchD_1452de3ed_default;
        if (uVar17 == 0) goto LAB_1452df342;
        FUN_145512500(&local_68,*(undefined8 *)(param_1 + 0x208));
        switch(local_68) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 8:
          uVar17 = *(ulonglong *)(param_1 + 0x250);
          uVar11 = 0;
          if (uVar17 == 0) goto LAB_1452df2f0;
          break;
        default:
          *(ulonglong *)(*(longlong *)(param_1 + 0x1f0) + *(longlong *)(param_1 + 0x250) * 8) =
               CONCAT44(uStack_64,local_68);
          *(longlong *)(param_1 + 0x250) = *(longlong *)(param_1 + 0x250) + 1;
          goto LAB_1452df342;
        }
        goto LAB_1452df2d0;
      case 9:
        uVar17 = *(ulonglong *)(param_1 + 0x260);
        uVar11 = (longlong)puVar19 - (longlong)_Buf2;
        if (uVar17 <= (ulonglong)((longlong)puVar19 - (longlong)_Buf2)) {
          uVar11 = uVar17;
        }
        if (uVar11 != 0) {
          uVar13 = FUN_1452e70f0(*(undefined8 *)(param_1 + 0x238),_Buf2);
          *(longlong *)(param_1 + 0x260) = *(longlong *)(param_1 + 0x260) - uVar11;
          *(undefined8 *)(param_1 + 0x238) = uVar13;
          param_2 = _Buf2 + uVar11;
          uVar17 = *(ulonglong *)(param_1 + 0x260);
        }
        if (uVar17 != 0) {
          if (*(longlong *)(param_1 + 0x228) == *(longlong *)(param_1 + 0x238)) {
            _wassert(L"nghttp2_buf_avail(&iframe->lbuf) > 0",
                     L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c"
                     ,0x18e6);
          }
          goto switchD_1452de3ed_default;
        }
        FUN_1455128d0(puVar1,*(undefined8 *)(param_1 + 0x208));
        FUN_1455118f0(param_1 + 0x220,0);
        if (*(int *)(param_1 + 0x198) != 0) {
          if ((*(code **)(param_1 + 0x7e0) == (code *)0x0) ||
             (iVar7 = (**(code **)(param_1 + 0x7e0))(param_1,puVar1), iVar7 == 0)) {
            iVar7 = FUN_1452e2d70(param_1,*(undefined4 *)(param_1 + 0x93c));
          }
          else {
            iVar7 = -0x386;
          }
          goto joined_r0x0001452dee2f;
        }
        uVar14 = *(uint *)(param_1 + 0x1a0);
        if ((int)uVar14 < 1) {
LAB_1452df54f:
          if ((int)uVar14 <= *(int *)(param_1 + 0x948)) {
            *(byte *)(param_1 + 0x9ab) = *(byte *)(param_1 + 0x9ab) | 8;
            *(undefined4 *)(param_1 + 0x948) = *(undefined4 *)(param_1 + 0x1a0);
            if ((*(code **)(param_1 + 0x7d8) != (code *)0x0) &&
               (iVar7 = (**(code **)(param_1 + 0x7d8))(param_1,puVar1), iVar7 != 0))
            goto LAB_1452dfec6;
            iVar7 = FUN_1452e43b0(param_1,*(undefined4 *)(param_1 + 0x1a0));
            goto joined_r0x0001452dee2f;
          }
        }
        else {
          uVar8 = uVar14;
          if (*(char *)(param_1 + 0x9aa) != '\0') {
            uVar8 = ~uVar14;
          }
          if ((uVar8 & 1) != 0) goto LAB_1452df54f;
        }
        if ((*(code **)(param_1 + 0x7e0) == (code *)0x0) ||
           (iVar7 = (**(code **)(param_1 + 0x7e0))(param_1,puVar1), iVar7 == 0)) {
          iVar7 = FUN_1452e2d70(param_1,*(undefined4 *)(param_1 + 0x93c));
        }
        else {
          iVar7 = -0x386;
        }
        goto joined_r0x0001452dee2f;
      case 10:
      case 0xb:
        uVar11 = *(longlong *)(param_1 + 0x218) - *(longlong *)(param_1 + 0x210);
        uVar17 = (longlong)puVar19 - (longlong)_Buf2;
        if (uVar11 <= (ulonglong)((longlong)puVar19 - (longlong)_Buf2)) {
          uVar17 = uVar11;
        }
        lVar10 = FUN_1452e70f0(*(longlong *)(param_1 + 0x210),_Buf2);
        param_2 = _Buf2 + uVar17;
        *(longlong *)(param_1 + 0x210) = lVar10;
        if (*(longlong *)(param_1 + 0x218) != lVar10) goto LAB_1452dfec6;
        FUN_145511f70(&local_58,*(undefined8 *)(param_1 + 0x208));
        *(longlong *)(param_1 + 0x260) = local_58;
        if ((local_4c != '\t') || (local_50 != *(int *)(param_1 + 0x198))) {
          iVar7 = FUN_1452e2d70(param_1,*(undefined4 *)(param_1 + 0x93c),1,
                                "unexpected non-CONTINUATION frame or stream_id is invalid");
          goto joined_r0x0001452dff04;
        }
        *puVar1 = *puVar1 + local_58;
        *(byte *)(param_1 + 0x19d) = *(byte *)(param_1 + 0x19d) | local_4b & 4;
        if (*(int *)(param_1 + 0x270) != 10) goto LAB_1452de6a5;
        *(undefined4 *)(param_1 + 0x270) = 4;
        _Buf2 = param_2;
        if (*(code **)(param_1 + 0x848) != (code *)0x0) goto code_r0x0001452df699;
        goto LAB_1452de3d0;
      case 0xc:
        uVar11 = *(longlong *)(param_1 + 0x218) - *(longlong *)(param_1 + 0x210);
        uVar17 = (longlong)puVar19 - (longlong)_Buf2;
        if (uVar11 <= (ulonglong)((longlong)puVar19 - (longlong)_Buf2)) {
          uVar17 = uVar11;
        }
        lVar9 = FUN_1452e70f0(*(longlong *)(param_1 + 0x210),_Buf2,uVar17);
        *(longlong *)(param_1 + 0x260) = *(longlong *)(param_1 + 0x260) - uVar17;
        param_2 = _Buf2 + uVar17;
        *(longlong *)(param_1 + 0x210) = lVar9;
        if ((*(longlong *)(param_1 + 0x218) != lVar9) ||
           (iVar7 = FUN_1452e2a90(param_1,uVar17), iVar7 < -900)) goto LAB_1452dfec6;
        if (*(int *)(param_1 + 0x270) == 0xf) goto switchD_1452de3ed_caseD_f;
        iVar7 = FUN_1452e04d0(param_1,*(undefined4 *)(param_1 + 0x198));
        if (iVar7 < -900) goto LAB_1452dfec6;
        if (*(int *)(param_1 + 0x270) == 0xf) goto switchD_1452de3ed_caseD_f;
        lVar9 = FUN_145511540(param_1,*(undefined4 *)(param_1 + 0x198));
        if (((lVar9 != 0) && ((*(byte *)(lVar9 + 0xd4) & 2) == 0)) && (*(int *)(lVar9 + 0xcc) != 5))
        {
          if ((*(longlong *)(param_1 + 0x260) == 0) && ((*(byte *)(param_1 + 0x19d) & 1) != 0)) {
            uVar13 = 0;
          }
          else {
            uVar13 = 1;
          }
          iVar7 = FUN_1452e2b30(param_1,lVar9,uVar17,uVar13);
          if (iVar7 < -900) goto LAB_1452dfec6;
        }
        uVar14 = **(byte **)(param_1 + 0x208) + 1;
        if ((ulonglong)uVar14 - 1 <= *(ulonglong *)(param_1 + 0x260)) {
          *(ulonglong *)(param_1 + 0x1a0) = (ulonglong)uVar14;
          *(ulonglong *)(param_1 + 0x268) = (ulonglong)uVar14;
          *(undefined4 *)(param_1 + 0x270) = 0xd;
          goto LAB_1452de3bd;
        }
        pcVar21 = "DATA: invalid padding";
        break;
      case 0xd:
        lVar9 = FUN_145511540(param_1,*(undefined4 *)(param_1 + 0x198));
        if (((lVar9 == 0) || ((*(byte *)(lVar9 + 0xd4) & 2) != 0)) || (*(int *)(lVar9 + 0xcc) == 5))
        {
          *(undefined4 *)(param_1 + 0x270) = 0xe;
          goto LAB_1452de3bd;
        }
        uVar17 = *(ulonglong *)(param_1 + 0x260);
        uVar11 = (longlong)puVar19 - (longlong)_Buf2;
        if (uVar17 <= (ulonglong)((longlong)puVar19 - (longlong)_Buf2)) {
          uVar11 = uVar17;
        }
        param_2 = _Buf2 + uVar11;
        *(ulonglong *)(param_1 + 0x260) = uVar17 - uVar11;
        if (uVar11 != 0) {
          iVar7 = FUN_1452e2a90(param_1,uVar11);
          if (iVar7 < -900) goto LAB_1452dfec6;
          if (*(int *)(param_1 + 0x270) == 0xf) goto switchD_1452de3ed_caseD_f;
          if ((*(longlong *)(param_1 + 0x260) == 0) && ((*(byte *)(param_1 + 0x19d) & 1) != 0)) {
            uVar13 = 0;
          }
          else {
            uVar13 = 1;
          }
          iVar7 = FUN_1452e2b30(param_1,lVar9,uVar11,uVar13);
          if (iVar7 < -900) goto LAB_1452dfec6;
          uVar17 = *(ulonglong *)(param_1 + 0x260);
          uVar12 = FUN_145512fd0(puVar1,*(undefined8 *)(param_1 + 0x268));
          iVar16 = (int)uVar11;
          iVar7 = iVar16;
          if (uVar17 < uVar12) {
            uVar12 = uVar12 - uVar17;
            if (uVar11 < uVar12) {
              iVar7 = -1;
            }
            else {
              iVar7 = iVar16 - (int)uVar12;
            }
          }
          iVar18 = 0;
          if (iVar7 != -1) {
            iVar18 = iVar7;
          }
          if (0 < iVar16 - iVar18) {
            iVar7 = FUN_1452e04d0(param_1,*(undefined4 *)(param_1 + 0x198),
                                  (longlong)(iVar16 - iVar18));
            if (iVar7 < -900) goto LAB_1452dfec6;
            if (*(int *)(param_1 + 0x270) == 0xf) goto switchD_1452de3ed_caseD_f;
          }
          puVar19 = local_78;
          if (0 < iVar18) {
            uVar17 = (ulonglong)iVar18;
            if (((~(*(uint *)(param_1 + 0x99c) >> 2) & 1) != 0) &&
               (iVar7 = FUN_145514e00(lVar9,uVar17), iVar7 != 0)) {
              if ((*(byte *)(param_1 + 0x99c) & 1) != 0) {
                local_88 = *(uint *)(param_1 + 0x95c);
                local_98 = local_98 & 0xffffffff00000000;
                local_90 = uVar17;
                iVar7 = FUN_1452e6070(param_1,param_1 + 0x954,param_1 + 0x950);
                if (iVar7 < -900) goto LAB_1452dfec6;
                if (*(int *)(param_1 + 0x270) == 0xe) goto switchD_1452de3ed_caseD_f;
              }
              iVar7 = FUN_1452e0810(param_1,*(undefined4 *)(param_1 + 0x198));
              if (iVar7 < -900) goto LAB_1452dfec6;
              *(undefined4 *)(param_1 + 0x270) = 0xe;
              puVar19 = local_78;
              goto LAB_1452de3bd;
            }
            puVar19 = local_78;
            if (*(code **)(param_1 + 0x7e8) != (code *)0x0) {
              local_90 = *(ulonglong *)(param_1 + 0x8a8);
              local_98 = uVar17;
              iVar7 = (**(code **)(param_1 + 0x7e8))
                                (param_1,*(undefined1 *)(param_1 + 0x19d),
                                 *(undefined4 *)(param_1 + 0x198));
              if ((iVar7 == -0x20e) || (puVar19 = local_78, iVar7 < -900)) goto LAB_1452dfec6;
            }
          }
        }
        if (*(longlong *)(param_1 + 0x260) != 0) goto switchD_1452de3ed_default;
        lVar9 = FUN_145511540(param_1,*(undefined4 *)(param_1 + 0x198));
        if (((lVar9 != 0) && ((*(byte *)(lVar9 + 0xd4) & 2) == 0)) &&
           ((*(int *)(lVar9 + 0xcc) - 3U & 0xfffffffd) != 0)) {
          if ((((~(*(uint *)(param_1 + 0x99c) >> 2) & 1) == 0) ||
              ((*(byte *)(param_1 + 0x19d) & 1) == 0)) || (iVar7 = FUN_145514dd0(lVar9), iVar7 == 0)
             ) {
            if (((*(code **)(param_1 + 0x7d8) != (code *)0x0) &&
                (iVar7 = (**(code **)(param_1 + 0x7d8))
                                   (param_1,puVar1,*(undefined8 *)(param_1 + 0x8a8)), iVar7 != 0))
               || (((*(byte *)(param_1 + 0x19d) & 1) != 0 &&
                   ((FUN_145513a20(lVar9,1), (*(byte *)(lVar9 + 0xd5) & 3) == 3 &&
                    (iVar7 = FUN_1452e10f0(param_1,*(undefined4 *)(lVar9 + 0xa8),0), iVar7 < -900)))
                   ))) goto LAB_1452dfec6;
          }
          else {
            iVar7 = FUN_1452e0810(param_1,*(undefined4 *)(lVar9 + 0xa8));
            if (iVar7 < -900) goto LAB_1452dfec6;
            FUN_145513a20(lVar9,1);
          }
        }
        FUN_1452e2ef0(param_1);
        goto switchD_1452de3ed_default;
      case 0xe:
        uVar17 = *(ulonglong *)(param_1 + 0x260);
        uVar11 = (longlong)puVar19 - (longlong)_Buf2;
        if (uVar17 <= (ulonglong)((longlong)puVar19 - (longlong)_Buf2)) {
          uVar11 = uVar17;
        }
        param_2 = _Buf2 + uVar11;
        *(ulonglong *)(param_1 + 0x260) = uVar17 - uVar11;
        if (uVar11 != 0) {
          iVar7 = FUN_1452e2a90(param_1,uVar11);
          if (iVar7 < -900) goto LAB_1452dfec6;
          if (*(int *)(param_1 + 0x270) == 0xf) goto switchD_1452de3ed_caseD_f;
          if ((*(byte *)(param_1 + 0x99c) & 1) != 0) {
            local_88 = *(uint *)(param_1 + 0x95c);
            local_98 = local_98 & 0xffffffff00000000;
            local_90 = uVar11;
            iVar7 = FUN_1452e6070(param_1,param_1 + 0x954,param_1 + 0x950,
                                  *(undefined1 *)(param_1 + 0x9ac));
            if (iVar7 < -900) goto LAB_1452dfec6;
            if (*(int *)(param_1 + 0x270) == 0xf) goto switchD_1452de3ed_caseD_f;
          }
        }
        if (*(longlong *)(param_1 + 0x260) == 0) {
          FUN_1452e2ef0(param_1);
        }
        goto switchD_1452de3ed_default;
      case 0xf:
        goto switchD_1452de3ed_caseD_f;
      case 0x10:
        uVar17 = *(ulonglong *)(param_1 + 0x260);
        uVar11 = (longlong)puVar19 - (longlong)_Buf2;
        if (uVar17 <= (ulonglong)((longlong)puVar19 - (longlong)_Buf2)) {
          uVar11 = uVar17;
        }
        if (uVar11 != 0) {
          uVar13 = FUN_1452e70f0(*(undefined8 *)(param_1 + 0x238),_Buf2,uVar11);
          *(longlong *)(param_1 + 0x260) = *(longlong *)(param_1 + 0x260) - uVar11;
          *(undefined8 *)(param_1 + 0x238) = uVar13;
          param_2 = _Buf2 + uVar11;
          uVar17 = *(ulonglong *)(param_1 + 0x260);
        }
        if (uVar17 == 0) {
          iVar7 = FUN_1452e5f60(param_1);
          if (iVar7 < -900) goto LAB_1452dfec6;
          FUN_1452e2ef0(param_1);
        }
        else if (*(longlong *)(param_1 + 0x228) == *(longlong *)(param_1 + 0x238)) {
          _wassert(L"nghttp2_buf_avail(&iframe->lbuf) > 0",
                   L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c"
                   ,0x1a50);
        }
        goto switchD_1452de3ed_default;
      case 0x11:
        uVar17 = *(ulonglong *)(param_1 + 0x260);
        uVar11 = (longlong)puVar19 - (longlong)_Buf2;
        if (uVar17 <= (ulonglong)((longlong)puVar19 - (longlong)_Buf2)) {
          uVar11 = uVar17;
        }
        if (uVar11 != 0) {
          uVar13 = FUN_1452e70f0(*(undefined8 *)(param_1 + 0x238),_Buf2,uVar11);
          *(longlong *)(param_1 + 0x260) = *(longlong *)(param_1 + 0x260) - uVar11;
          *(undefined8 *)(param_1 + 0x238) = uVar13;
          param_2 = _Buf2 + uVar11;
          uVar17 = *(ulonglong *)(param_1 + 0x260);
        }
        if (uVar17 == 0) {
          iVar7 = FUN_145512c60(puVar1,*(longlong *)(param_1 + 0x230),
                                *(longlong *)(param_1 + 0x238) - *(longlong *)(param_1 + 0x230),
                                lVar9);
          if (iVar7 == 0) {
LAB_1452def27:
            if ((*(code **)(param_1 + 0x7d8) == (code *)0x0) ||
               (iVar7 = (**(code **)(param_1 + 0x7d8))(param_1,puVar1), iVar7 == 0)) {
              iVar7 = 0;
            }
            else {
              iVar7 = -0x386;
            }
          }
          goto joined_r0x0001452dee2f;
        }
        if (*(longlong *)(param_1 + 0x228) == *(longlong *)(param_1 + 0x238)) {
          _wassert(L"nghttp2_buf_avail(&iframe->lbuf) > 0",
                   L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c"
                   ,0x1a6d);
        }
        goto switchD_1452de3ed_default;
      case 0x12:
        uVar17 = *(ulonglong *)(param_1 + 0x260);
        uVar11 = (longlong)puVar19 - (longlong)_Buf2;
        if (uVar17 <= (ulonglong)((longlong)puVar19 - (longlong)_Buf2)) {
          uVar11 = uVar17;
        }
        lVar9 = uVar17 - uVar11;
        param_2 = _Buf2 + uVar11;
        *(longlong *)(param_1 + 0x260) = lVar9;
        if (uVar11 != 0) {
          if (*(code **)(param_1 + 0x868) != (code *)0x0) {
            local_98 = *(ulonglong *)(param_1 + 0x8a8);
            iVar7 = (**(code **)(param_1 + 0x868))(param_1,puVar1,_Buf2);
            if (iVar7 == -0x217) {
              *(undefined4 *)(param_1 + 0x270) = 6;
              goto LAB_1452de3bd;
            }
            if (iVar7 != 0) goto LAB_1452dfec6;
          }
          lVar9 = *(longlong *)(param_1 + 0x260);
        }
        if (lVar9 != 0) goto switchD_1452de3ed_default;
        local_70 = lVar9;
        iVar7 = (**(code **)(param_1 + 0x860))
                          (param_1,&local_70,puVar1,*(undefined8 *)(param_1 + 0x8a8));
        if (iVar7 == -0x217) goto switchD_1452deb00_caseD_4;
        if (iVar7 != 0) goto LAB_1452dfec6;
        *(longlong *)(param_1 + 0x1a0) = local_70;
        if (*(code **)(param_1 + 0x7d8) == (code *)0x0) goto switchD_1452deb00_caseD_4;
        iVar7 = (**(code **)(param_1 + 0x7d8))(param_1,puVar1,*(undefined8 *)(param_1 + 0x8a8));
        if (iVar7 != 0) goto LAB_1452dfec6;
        FUN_1452e2ef0(param_1);
      default:
        goto switchD_1452de3ed_default;
      }
LAB_1452dff5c:
      uVar13 = 1;
LAB_1452dff62:
      iVar7 = FUN_1452e2d70(param_1,*(undefined4 *)(param_1 + 0x93c),uVar13,pcVar21);
joined_r0x0001452dff04:
      if (iVar7 < -900) goto LAB_1452dfec6;
    }
switchD_1452de3ed_caseD_f:
  }
LAB_1452dfec6:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
code_r0x0001452df699:
  iVar7 = (**(code **)(param_1 + 0x848))(param_1,&local_58);
  if (iVar7 != 0) goto LAB_1452dfec6;
  goto LAB_1452de3bd;
  while (uVar11 = uVar11 + 1, uVar11 < uVar17) {
LAB_1452df2d0:
    if (*(int *)(*(longlong *)(param_1 + 0x1f0) + uVar11 * 8) == local_68) {
      *(ulonglong *)(*(longlong *)(param_1 + 0x1f0) + uVar11 * 8) = CONCAT44(uStack_64,local_68);
      uVar17 = *(ulonglong *)(param_1 + 0x250);
      break;
    }
  }
LAB_1452df2f0:
  if (uVar11 == uVar17) {
    *(ulonglong *)(*(longlong *)(param_1 + 0x1f0) + uVar17 * 8) = CONCAT44(uStack_64,local_68);
    *(longlong *)(param_1 + 0x250) = *(longlong *)(param_1 + 0x250) + 1;
  }
  if (local_68 == 1) {
    if (uStack_64 <
        *(uint *)(*(longlong *)(param_1 + 0x1f0) + -4 + *(longlong *)(param_1 + 600) * 8)) {
      *(uint *)(*(longlong *)(param_1 + 0x1f0) + -4 + *(longlong *)(param_1 + 600) * 8) = uStack_64;
    }
  }
LAB_1452df342:
  uVar17 = 0;
  if (*(longlong *)(param_1 + 0x260) == 0) {
    if (*(longlong *)(param_1 + 600) != 0) {
      piVar15 = *(int **)(param_1 + 0x1f0);
      lVar9 = *(longlong *)(piVar15 + *(longlong *)(param_1 + 600) * 2 + -2);
      local_70 = lVar9;
      if ((int)((ulonglong)lVar9 >> 0x20) != -1) {
        uVar11 = *(ulonglong *)(param_1 + 0x250);
        if (uVar11 != 0) {
          do {
            if (*piVar15 == 1) break;
            uVar17 = uVar17 + 1;
            piVar15 = piVar15 + 2;
          } while (uVar17 < uVar11);
        }
        if (uVar11 <= uVar17) {
          _wassert(L"i < iframe->niv",
                   L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c"
                   ,0x11e5);
          uVar11 = *(ulonglong *)(param_1 + 0x250);
        }
        lVar10 = *(longlong *)(param_1 + 0x1f0);
        puVar19 = local_78;
        if (local_70._4_4_ != *(int *)(lVar10 + 4 + uVar17 * 8)) {
          *(undefined8 *)(lVar10 + uVar11 * 8) = *(undefined8 *)(lVar10 + uVar17 * 8);
          *(longlong *)(param_1 + 0x250) = *(longlong *)(param_1 + 0x250) + 1;
          *(longlong *)(*(longlong *)(param_1 + 0x1f0) + uVar17 * 8) = lVar9;
        }
      }
    }
    FUN_145512540(puVar1,*(undefined8 *)(param_1 + 0x1f0));
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    *(undefined8 *)(param_1 + 0x250) = 0;
    *(undefined8 *)(param_1 + 600) = 0;
    iVar7 = FUN_1452e1d80(param_1,puVar1);
joined_r0x0001452dee2f:
    if (iVar7 < -900) goto LAB_1452dfec6;
    if (*(int *)(param_1 + 0x270) == 0xf) goto switchD_1452de3ed_caseD_f;
switchD_1452deb00_caseD_4:
    FUN_1452e2ef0(param_1);
  }
  else {
    FUN_1455118e0(param_1 + 0x1f8);
    *(longlong *)(param_1 + 0x218) = *(longlong *)(param_1 + 0x218) + 6;
  }
switchD_1452de3ed_default:
  if (param_2 == puVar19) goto LAB_1452dfec6;
  goto LAB_1452de3bd;
}



// FUNCTION 1452e0090 FUN_1452e0090 body=88 status=ok
// SIG undefined FUN_1452e0090(void)

int FUN_1452e0090(void)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = FUN_145511540();
  if (((lVar3 != 0) && ((*(byte *)(lVar3 + 0xd4) & 2) == 0)) && (*(int *)(lVar3 + 0xcc) != 5)) {
    iVar1 = FUN_145513b00(lVar3);
    if (iVar1 != 0) {
      iVar2 = FUN_145513a90(lVar3,8);
      iVar1 = 0;
      if (iVar2 < -900) {
        iVar1 = iVar2;
      }
      return iVar1;
    }
  }
  return -0x1f5;
}



// FUNCTION 1452e00f0 FUN_1452e00f0 body=79 status=ok
// SIG undefined FUN_1452e00f0(void)

bool FUN_1452e00f0(longlong param_1)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1 + 0x9ab) & 2) != 0) {
    return false;
  }
  lVar1 = FUN_145511730();
  if (lVar1 - *(longlong *)(param_1 + 0x900) != *(longlong *)(param_1 + 0x8f8)) {
    return true;
  }
  return (*(byte *)(param_1 + 0x9ab) & 0xc) == 0;
}



// FUNCTION 1452e0140 FUN_1452e0140 body=113 status=ok
// SIG undefined FUN_1452e0140(void)

undefined8 FUN_1452e0140(longlong param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x9ab) & 2) != 0) {
    return 0;
  }
  if ((((*(longlong *)(param_1 + 0x140) == 0) && (*(longlong *)(param_1 + 0xf8) == 0)) &&
      (*(longlong *)(param_1 + 0x110) == 0)) &&
     ((iVar1 = FUN_1455136e0(param_1 + 0x28), iVar1 != 0 || (*(int *)(param_1 + 0x94c) < 1)))) {
    if (*(longlong *)(param_1 + 0x128) == 0) {
      return 0;
    }
    if ((ulonglong)*(uint *)(param_1 + 0x96c) <= *(ulonglong *)(param_1 + 0x8d8)) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1452e01c0 FUN_1452e01c0 body=51 status=ok
// SIG undefined FUN_1452e01c0(void)

undefined8 FUN_1452e01c0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_145511540();
  if (((lVar1 != 0) && ((*(byte *)(lVar1 + 0xd4) & 2) == 0)) && (*(int *)(lVar1 + 0xcc) != 5)) {
    return *(undefined8 *)(lVar1 + 0x90);
  }
  return 0;
}



// FUNCTION 1452e0200 FUN_1452e0200 body=229 status=ok
// SIG undefined FUN_1452e0200(void)

undefined1 * FUN_1452e0200(longlong param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_145511540();
  if (((lVar1 != 0) && ((*(byte *)(lVar1 + 0xd4) & 2) == 0)) && (*(int *)(lVar1 + 0xcc) != 5)) {
    *(undefined8 *)(lVar1 + 0x90) = param_3;
    return (undefined1 *)0x0;
  }
  if (((*(char *)(param_1 + 0x9aa) == '\0') && (param_2 != 0)) &&
     (((param_2 & 1) != 0 && (lVar1 = *(longlong *)(param_1 + 0x128), lVar1 != 0)))) {
    if (*(char *)(lVar1 + 0xc) != '\x01') {
      _wassert(L"frame->hd.type == NGHTTP2_HEADERS",
               L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c",
               0x1c71);
    }
    if ((*(int *)(lVar1 + 8) <= (int)param_2) && (param_2 < *(uint *)(param_1 + 0x930))) {
      for (lVar1 = *(longlong *)(param_1 + 0x128); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x88))
      {
        if ((int)param_2 <= *(int *)(lVar1 + 8)) {
          if (*(int *)(lVar1 + 8) <= (int)param_2) {
            *(undefined8 *)(lVar1 + 0x70) = param_3;
            return (undefined1 *)0x0;
          }
          break;
        }
      }
    }
  }
  return &DAT_fffffe0b;
}



// FUNCTION 1452e02f0 FUN_1452e02f0 body=60 status=ok
// SIG undefined FUN_1452e02f0(void)

int FUN_1452e02f0(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_145511540();
  if (((lVar2 != 0) && ((*(byte *)(lVar2 + 0xd4) & 2) == 0)) && (*(int *)(lVar2 + 0xcc) != 5)) {
    iVar1 = 0;
    if (-1 < *(int *)(lVar2 + 0xb0)) {
      iVar1 = *(int *)(lVar2 + 0xb0);
    }
    return iVar1;
  }
  return -1;
}



// FUNCTION 1452e0330 FUN_1452e0330 body=53 status=ok
// SIG undefined FUN_1452e0330(void)

undefined4 FUN_1452e0330(void)

{
  longlong lVar1;
  
  lVar1 = FUN_145511540();
  if (((lVar1 != 0) && ((*(byte *)(lVar1 + 0xd4) & 2) == 0)) && (*(int *)(lVar1 + 0xcc) != 5)) {
    return *(undefined4 *)(lVar1 + 0xbc);
  }
  return 0xffffffff;
}



// FUNCTION 1452e0370 FUN_1452e0370 body=70 status=ok
// SIG undefined FUN_1452e0370(void)

int FUN_1452e0370(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_145511540();
  if (((lVar2 != 0) && ((*(byte *)(lVar2 + 0xd4) & 2) == 0)) && (*(int *)(lVar2 + 0xcc) != 5)) {
    iVar1 = *(int *)(lVar2 + 0xbc) - *(int *)(lVar2 + 0xb0);
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    return iVar1;
  }
  return -1;
}



// FUNCTION 1452e03c0 FUN_1452e03c0 body=13 status=ok
// SIG undefined FUN_1452e03c0(void)

int FUN_1452e03c0(longlong param_1)

{
  return *(int *)(param_1 + 0x95c) - *(int *)(param_1 + 0x950);
}



// FUNCTION 1452e03d0 FUN_1452e03d0 body=60 status=ok
// SIG undefined FUN_1452e03d0(void)

int FUN_1452e03d0(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_145511540();
  if (((lVar2 != 0) && ((*(byte *)(lVar2 + 0xd4) & 2) == 0)) && (*(int *)(lVar2 + 0xcc) != 5)) {
    iVar1 = 0;
    if (-1 < *(int *)(lVar2 + 0xac)) {
      iVar1 = *(int *)(lVar2 + 0xac);
    }
    return iVar1;
  }
  return -1;
}



// FUNCTION 1452e0410 FUN_1452e0410 body=7 status=ok
// SIG undefined FUN_1452e0410(void)

undefined4 FUN_1452e0410(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x94c);
}



// FUNCTION 1452e0420 FUN_1452e0420 body=143 status=ok
// SIG undefined FUN_1452e0420(void)

undefined4 FUN_1452e0420(longlong param_1,undefined4 param_2)

{
  switch(param_2) {
  case 1:
    return *(undefined4 *)(param_1 + 0x964);
  case 2:
    return *(undefined4 *)(param_1 + 0x968);
  case 3:
    return *(undefined4 *)(param_1 + 0x96c);
  case 4:
    return *(undefined4 *)(param_1 + 0x970);
  case 5:
    return *(undefined4 *)(param_1 + 0x974);
  case 6:
    return *(undefined4 *)(param_1 + 0x978);
  default:
    _wassert(L"0",
             L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c",
             0x1cfe);
                    /* WARNING: Subroutine does not return */
    abort();
  case 8:
    return *(undefined4 *)(param_1 + 0x97c);
  }
}



// FUNCTION 1452e04d0 FUN_1452e04d0 body=207 status=ok
// SIG undefined FUN_1452e04d0(void)

undefined1 * FUN_1452e04d0(longlong param_1,int param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    return &DAT_fffffe0b;
  }
  if ((*(byte *)(param_1 + 0x99c) & 1) != 0) {
    puVar1 = (undefined1 *)
             FUN_1452e6070(param_1,param_1 + 0x954,param_1 + 0x950,*(undefined1 *)(param_1 + 0x9ac),
                           0,param_3,*(undefined4 *)(param_1 + 0x95c));
    if (-0x385 < (int)puVar1) {
      lVar2 = FUN_145511540(param_1,param_2);
      if ((((lVar2 != 0) && ((*(byte *)(lVar2 + 0xd4) & 2) == 0)) && (*(int *)(lVar2 + 0xcc) != 5))
         && (puVar1 = (undefined1 *)FUN_1452e4490(param_1,lVar2,param_3), (int)puVar1 < -900)) {
        return puVar1;
      }
      puVar1 = (undefined1 *)0x0;
    }
    return puVar1;
  }
  return (undefined1 *)0xfffffdf9;
}



// FUNCTION 1452e05a0 FUN_1452e05a0 body=124 status=ok
// SIG undefined FUN_1452e05a0(void)

undefined8 FUN_1452e05a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1452e6270();
  if ((int)uVar1 == 0) {
    lVar2 = FUN_145511540(param_1,1);
    if (((lVar2 == 0) || ((*(byte *)(lVar2 + 0xd4) & 2) != 0)) || (*(int *)(lVar2 + 0xcc) == 5)) {
      lVar2 = 0;
      _wassert(L"stream",
               L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c",
               0x1d8a);
    }
    if (param_4 != 0) {
      *(ushort *)(lVar2 + 0xd2) = *(ushort *)(lVar2 + 0xd2) | 0x100;
    }
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 1452e0620 FUN_1452e0620 body=60 status=ok
// SIG undefined FUN_1452e0620(void)

undefined8 FUN_1452e0620(longlong param_1)

{
  int iVar1;
  
  if (((*(char *)(param_1 + 0x9aa) == '\0') && (*(uint *)(param_1 + 0x930) < 0x80000000)) &&
     ((*(byte *)(param_1 + 0x9ab) & 8) == 0)) {
    iVar1 = FUN_1452e36d0();
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1452e0660 FUN_1452e0660 body=12 status=ok
// SIG undefined FUN_1452e0660(void)

bool FUN_1452e0660(int param_1)

{
  return param_1 < -900;
}



// FUNCTION 1452e0670 FUN_1452e0670 body=361 status=ok
// SIG undefined FUN_1452e0670(void)

void FUN_1452e0670(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_145511540(param_1,*(undefined4 *)(param_2 + 8));
  if (((lVar1 == 0) || ((*(byte *)(lVar1 + 0xd4) & 2) != 0)) || (*(int *)(lVar1 + 0xcc) == 5)) {
    lVar1 = 0;
  }
  switch(*(undefined1 *)(param_2 + 0xc)) {
  case 0:
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x98) == 0)) {
      FUN_145514030(lVar1,param_2);
    }
    goto LAB_1452e07cc;
  case 1:
    if ((*(int *)(param_2 + 0x38) != 0) && ((lVar1 == 0 || (*(int *)(lVar1 + 0xcc) != 4)))) break;
    param_1 = param_1 + 0x128;
    goto LAB_1452e07bb;
  case 3:
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0xcc) = 3;
    }
    break;
  case 4:
  case 6:
    param_1 = param_1 + 0xf8;
    goto LAB_1452e07bb;
  case 5:
    if (lVar1 == 0) goto LAB_1452e07cc;
    FUN_1452e7130(local_28,*(undefined4 *)(lVar1 + 0xa8),0x10);
    local_30 = *(undefined8 *)(param_2 + 0x70);
    local_38 = 4;
    lVar1 = FUN_1452e0d80(param_1,*(undefined4 *)(param_2 + 0x28),0,local_28);
    if (lVar1 == 0) goto LAB_1452e07cc;
    break;
  case 8:
    if (lVar1 == 0) {
      if (*(int *)(param_2 + 8) == 0) {
        *(undefined1 *)(param_1 + 0x9ac) = 1;
      }
    }
    else {
      *(undefined1 *)(lVar1 + 0xd7) = 1;
    }
  }
  param_1 = param_1 + 0x110;
LAB_1452e07bb:
  FUN_145513570(param_1,param_2);
  *(undefined1 *)(param_2 + 0x90) = 1;
LAB_1452e07cc:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 1452e0810 FUN_1452e0810 body=341 status=ok
// SIG undefined FUN_1452e0810(void)

int FUN_1452e0810(longlong param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = FUN_145511540();
  if (((lVar3 != 0) && ((*(byte *)(lVar3 + 0xd4) & 2) == 0)) && (*(int *)(lVar3 + 0xcc) == 3)) {
    return 0;
  }
  if (param_2 != 0) {
    uVar1 = param_2;
    if (*(char *)(param_1 + 0x9aa) != '\0') {
      uVar1 = ~param_2;
    }
    if ((uVar1 & 1) != 0) {
      if (*(uint *)(param_1 + 0x930) <= param_2) {
        return 0;
      }
      goto LAB_1452e0883;
    }
  }
  if (*(int *)(param_1 + 0x938) < (int)param_2) {
    return 0;
  }
LAB_1452e0883:
  if (((*(char *)(param_1 + 0x9aa) == '\0') && (param_2 != 0)) &&
     (((param_2 & 1) != 0 && (lVar3 = *(longlong *)(param_1 + 0x128), lVar3 != 0)))) {
    if (*(char *)(lVar3 + 0xc) != '\x01') {
      _wassert(L"headers_frame->hd.type == NGHTTP2_HEADERS",
               L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c",
               0x3d6);
    }
    if (*(int *)(lVar3 + 8) <= (int)param_2) {
      for (lVar3 = *(longlong *)(param_1 + 0x128); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x88))
      {
        if ((int)param_2 <= *(int *)(lVar3 + 8)) {
          if ((*(int *)(lVar3 + 8) <= (int)param_2) && (*(char *)(lVar3 + 0x7c) == '\0')) {
            *(undefined4 *)(lVar3 + 0x78) = param_3;
            *(undefined1 *)(lVar3 + 0x7c) = 1;
            return 0;
          }
          break;
        }
      }
    }
  }
  lVar3 = FUN_145511290(param_1 + 0x880,0x98);
  if (lVar3 == 0) {
    return -0x385;
  }
  FUN_145513480(lVar3);
  FUN_145512e40(lVar3,param_2,param_3);
  iVar2 = FUN_1452e0670(param_1,lVar3);
  if (iVar2 == 0) {
    return 0;
  }
  FUN_145512e60(lVar3);
  FUN_1455112a0(param_1 + 0x880,lVar3);
  return iVar2;
}



// FUNCTION 1452e0970 FUN_1452e0970 body=206 status=ok
// SIG undefined FUN_1452e0970(void)

int FUN_1452e0970(longlong param_1,byte param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (((param_2 & 1) == 0) || (*(ulonglong *)(param_1 + 0x910) < *(ulonglong *)(param_1 + 0x918))) {
    lVar2 = FUN_145511290(param_1 + 0x880,0x98);
    if (lVar2 == 0) {
      iVar1 = -0x385;
    }
    else {
      FUN_145513480(lVar2);
      FUN_145512ec0(lVar2,param_2,param_3);
      iVar1 = FUN_1452e0670(param_1,lVar2);
      if (iVar1 == 0) {
        if ((param_2 & 1) != 0) {
          *(longlong *)(param_1 + 0x910) = *(longlong *)(param_1 + 0x910) + 1;
        }
        iVar1 = 0;
      }
      else {
        FUN_145512ef0(lVar2);
        FUN_1455112a0(param_1 + 0x880,lVar2);
      }
    }
  }
  else {
    iVar1 = -0x388;
  }
  return iVar1;
}



// FUNCTION 1452e0a40 FUN_1452e0a40 body=165 status=ok
// SIG undefined FUN_1452e0a40(void)

int FUN_1452e0a40(longlong param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_145511290(param_1 + 0x880,0x98);
  if (lVar2 == 0) {
    iVar1 = -0x385;
  }
  else {
    FUN_145513480(lVar2);
    FUN_145512f50(lVar2,param_2,param_3,param_4);
    iVar1 = FUN_1452e0670(param_1,lVar2);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      FUN_145512f70(lVar2);
      FUN_1455112a0(param_1 + 0x880,lVar2);
    }
  }
  return iVar1;
}



// FUNCTION 1452e0af0 FUN_1452e0af0 body=655 status=ok
// SIG undefined FUN_1452e0af0(void)

int FUN_1452e0af0(longlong param_1,byte param_2,longlong param_3,longlong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  byte bVar10;
  
  lVar8 = param_1 + 0x880;
  puVar6 = (undefined8 *)0x0;
  bVar10 = param_2 & 1;
  if (bVar10 != 0) {
    if (param_4 != 0) {
      return -0x1f5;
    }
    if (*(ulonglong *)(param_1 + 0x918) <= *(ulonglong *)(param_1 + 0x910)) {
      return -0x388;
    }
  }
  iVar3 = FUN_145513220(param_3,param_4);
  if (iVar3 == 0) {
    return -0x1f5;
  }
  lVar4 = FUN_145511290(lVar8,0x98);
  if (lVar4 == 0) {
    return -0x385;
  }
  if (param_4 == 0) {
    lVar5 = 0;
LAB_1452e0bb9:
    if (bVar10 == 0) {
      puVar6 = (undefined8 *)FUN_145511290(lVar8,0x18);
      if (puVar6 == (undefined8 *)0x0) {
LAB_1452e0bfa:
        FUN_1455112a0(lVar8,lVar5);
        goto LAB_1452e0c05;
      }
      if (param_4 == 0) {
        puVar6[1] = 0;
      }
      else {
        lVar7 = FUN_145513020(param_3,param_4,lVar8);
        puVar6[1] = lVar7;
        if (lVar7 == 0) {
          FUN_1455112a0(lVar8,puVar6);
          goto LAB_1452e0bfa;
        }
      }
      puVar6[2] = param_4;
      *puVar6 = 0;
    }
    FUN_145513480(lVar4);
    FUN_145512e80(lVar4,param_2,lVar5,param_4);
    iVar3 = FUN_1452e0670(param_1,lVar4);
    if (iVar3 == 0) {
      if (bVar10 == 0) {
        puVar1 = (undefined8 *)(param_1 + 0x8d0);
        for (puVar2 = *(undefined8 **)(param_1 + 0x8d0); puVar2 != (undefined8 *)0x0;
            puVar2 = (undefined8 *)*puVar2) {
          puVar1 = puVar2;
        }
        *puVar1 = puVar6;
      }
      else {
        *(longlong *)(param_1 + 0x910) = *(longlong *)(param_1 + 0x910) + 1;
      }
      if (param_4 != 0) {
        piVar9 = (int *)(param_3 + (param_4 + -1) * 8);
        lVar8 = param_4;
        do {
          if (*piVar9 == 3) {
            *(undefined4 *)(param_1 + 0x9a0) = *(undefined4 *)(param_3 + -4 + lVar8 * 8);
            break;
          }
          piVar9 = piVar9 + -2;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
        piVar9 = (int *)(param_3 + (param_4 + -1) * 8);
        lVar8 = param_4;
        do {
          if (*piVar9 == 2) {
            *(undefined1 *)(param_1 + 0x9a8) = *(undefined1 *)(param_3 + -4 + lVar8 * 8);
            break;
          }
          piVar9 = piVar9 + -2;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
        piVar9 = (int *)(param_3 + (param_4 + -1) * 8);
        do {
          if (*piVar9 == 8) {
            *(undefined1 *)(param_1 + 0x9a9) = *(undefined1 *)(param_3 + -4 + param_4 * 8);
            break;
          }
          piVar9 = piVar9 + -2;
          param_4 = param_4 + -1;
        } while (param_4 != 0);
      }
      iVar3 = 0;
    }
    else {
      if (-0x385 < iVar3) {
        _wassert(L"nghttp2_is_fatal(rv)",
                 L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c"
                 ,0x1b9d);
      }
      if (puVar6 != (undefined8 *)0x0) {
        FUN_1455112a0(lVar8,puVar6[1]);
        FUN_1455112a0(lVar8,puVar6);
      }
      FUN_145512eb0(lVar4,lVar8);
      FUN_1455112a0(lVar8,lVar4);
    }
  }
  else {
    lVar5 = FUN_145513020(param_3,param_4,lVar8);
    if (lVar5 != 0) goto LAB_1452e0bb9;
LAB_1452e0c05:
    FUN_1455112a0(lVar8,lVar4);
    iVar3 = -0x385;
  }
  return iVar3;
}



// FUNCTION 1452e0d80 FUN_1452e0d80 body=860 status=ok
// SIG undefined FUN_1452e0d80(void)

void FUN_1452e0d80(longlong param_1,uint param_2,byte param_3,int *param_4,int param_5,
                  undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  int local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined8 local_90;
  longlong local_88;
  byte local_78;
  undefined8 local_70;
  int local_68 [4];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar8 = param_1 + 0x880;
  local_70 = param_6;
  lVar6 = 0;
  bVar3 = false;
  local_78 = param_3;
  lVar5 = FUN_145511540();
  if (lVar5 == 0) {
    lVar5 = FUN_145511290(lVar8,0xd8);
    if (lVar5 == 0) goto LAB_1452e0f14;
    bVar3 = true;
  }
  else {
    if (*(int *)(lVar5 + 0xcc) != 5) {
      _wassert(L"stream->state == NGHTTP2_STREAM_IDLE",
               L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c",
               0x413);
    }
    iVar4 = FUN_1455143e0(lVar5);
    if (iVar4 == 0) {
      _wassert(L"nghttp2_stream_in_dep_tree(stream)",
               L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c",
               0x414);
    }
    lVar1 = *(longlong *)(lVar5 + 0x80);
    lVar2 = *(longlong *)(lVar5 + 0x88);
    if (lVar1 == 0) {
      *(longlong *)(param_1 + 0x8c0) = lVar2;
    }
    else {
      *(longlong *)(lVar1 + 0x88) = lVar2;
    }
    if (lVar2 == 0) {
      *(longlong *)(param_1 + 0x8c8) = lVar1;
    }
    else {
      *(longlong *)(lVar2 + 0x80) = lVar1;
    }
    *(undefined8 *)(lVar5 + 0x80) = 0;
    *(undefined8 *)(lVar5 + 0x88) = 0;
    *(longlong *)(param_1 + 0x900) = *(longlong *)(param_1 + 0x900) + -1;
    iVar4 = FUN_145513d90(lVar5);
    if (iVar4 != 0) goto LAB_1452e0f14;
  }
  if (*param_4 != 0) {
    lVar6 = FUN_145511540(param_1);
    if (lVar6 != 0) {
      iVar4 = FUN_1455143e0(lVar6);
      if (iVar4 == 0) goto LAB_1452e0f41;
      goto LAB_1452e0f50;
    }
    iVar4 = FUN_1452e2be0(param_1,*param_4);
    if (iVar4 == 0) {
LAB_1452e0f41:
      FUN_1452e7140(local_68);
      param_4 = local_68;
      goto LAB_1452e0f50;
    }
    FUN_1452e7140(local_68);
    local_a8 = 5;
    local_a0 = lVar6;
    lVar6 = FUN_1452e0d80(param_1,*param_4,0,local_68);
    if (lVar6 != 0) goto LAB_1452e0f50;
    if (!bVar3) goto LAB_1452e0f14;
LAB_1452e0f07:
    FUN_1455112a0(lVar8,lVar5);
    goto LAB_1452e0f14;
  }
LAB_1452e0f50:
  bVar7 = local_78 | 1;
  if (param_5 != 4) {
    bVar7 = local_78;
  }
  if (bVar3) {
    local_90 = local_70;
    local_98 = *(undefined4 *)(param_1 + 0x98c);
    local_a0 = CONCAT44(local_a0._4_4_,*(undefined4 *)(param_1 + 0x970));
    local_a8 = param_4[1];
    local_88 = lVar8;
    FUN_145513900(lVar5,param_2,bVar7,param_5);
    iVar4 = FUN_1455113f0(param_1,param_2,lVar5);
    if (iVar4 != 0) {
      FUN_145513a10(lVar5);
      goto LAB_1452e0f07;
    }
  }
  else {
    *(byte *)(lVar5 + 0xd4) = bVar7;
    *(int *)(lVar5 + 0xcc) = param_5;
    *(int *)(lVar5 + 0xc0) = param_4[1];
    *(undefined8 *)(lVar5 + 0x90) = local_70;
  }
  if (param_5 == 4) {
    if (param_2 != 0) {
      if (*(char *)(param_1 + 0x9aa) != '\0') {
        param_2 = ~param_2;
      }
      if ((param_2 & 1) != 0) {
        FUN_145513a20(lVar5,1);
        goto LAB_1452e109d;
      }
    }
    FUN_145513a20(lVar5,2);
    *(longlong *)(param_1 + 0x8e8) = *(longlong *)(param_1 + 0x8e8) + 1;
  }
  else if (param_5 == 5) {
    if (*(longlong *)(param_1 + 0x8c8) == 0) {
      *(longlong *)(param_1 + 0x900) = *(longlong *)(param_1 + 0x900) + 1;
      *(longlong *)(param_1 + 0x8c0) = lVar5;
      *(longlong *)(param_1 + 0x8c8) = lVar5;
    }
    else {
      *(longlong *)(*(longlong *)(param_1 + 0x8c8) + 0x88) = lVar5;
      *(undefined8 *)(lVar5 + 0x80) = *(undefined8 *)(param_1 + 0x8c8);
      *(longlong *)(param_1 + 0x900) = *(longlong *)(param_1 + 0x900) + 1;
      *(longlong *)(param_1 + 0x8c8) = lVar5;
    }
  }
  else {
    if (param_2 != 0) {
      if (*(char *)(param_1 + 0x9aa) != '\0') {
        param_2 = ~param_2;
      }
      if ((param_2 & 1) != 0) {
        *(longlong *)(param_1 + 0x8d8) = *(longlong *)(param_1 + 0x8d8) + 1;
        goto LAB_1452e109d;
      }
    }
    *(longlong *)(param_1 + 0x8e0) = *(longlong *)(param_1 + 0x8e0) + 1;
  }
LAB_1452e109d:
  lVar8 = param_1 + 0x20;
  if (*param_4 != 0) {
    lVar8 = lVar6;
  }
  if (lVar8 == 0) {
    _wassert(L"dep_stream",
             L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c",
             0x47c);
  }
  if ((char)param_4[2] == '\0') {
    FUN_145513d20(lVar8,lVar5);
  }
  else {
    FUN_145513c00();
  }
LAB_1452e0f14:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_c8);
}



// FUNCTION 1452e10f0 FUN_1452e10f0 body=426 status=ok
// SIG undefined FUN_1452e10f0(void)

undefined1 * FUN_1452e10f0(longlong param_1,uint param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  uint uVar5;
  
  lVar3 = FUN_145511540();
  if (((lVar3 == 0) || ((*(byte *)(lVar3 + 0xd4) & 2) != 0)) || (*(int *)(lVar3 + 0xcc) == 5)) {
    puVar4 = &DAT_fffffe0b;
  }
  else {
    lVar1 = *(longlong *)(lVar3 + 0x98);
    if (lVar1 != 0) {
      puVar4 = (undefined1 *)FUN_1455140c0(lVar3);
      if ((int)puVar4 != 0) {
        return puVar4;
      }
      if ((*(char *)(lVar1 + 0x90) == (char)puVar4) && (lVar1 != *(longlong *)(param_1 + 0x140))) {
        FUN_1455134b0(lVar1,param_1 + 0x880);
        FUN_1455112a0(param_1 + 0x880,lVar1);
      }
    }
    if ((*(code **)(param_1 + 0x808) == (code *)0x0) ||
       (iVar2 = (**(code **)(param_1 + 0x808))
                          (param_1,param_2,param_3,*(undefined8 *)(param_1 + 0x8a8)), iVar2 == 0)) {
      uVar5 = 0;
      if (param_2 != 0) {
        if (*(char *)(param_1 + 0x9aa) != '\0') {
          param_2 = ~param_2;
        }
        uVar5 = param_2 & 1;
      }
      if ((*(byte *)(lVar3 + 0xd4) & 1) == 0) {
        if (uVar5 == 0) {
          *(longlong *)(param_1 + 0x8e0) = *(longlong *)(param_1 + 0x8e0) + -1;
        }
        else {
          *(longlong *)(param_1 + 0x8d8) = *(longlong *)(param_1 + 0x8d8) + -1;
        }
      }
      else if (uVar5 == 0) {
        *(longlong *)(param_1 + 0x8e8) = *(longlong *)(param_1 + 0x8e8) + -1;
      }
      *(byte *)(lVar3 + 0xd4) = *(byte *)(lVar3 + 0xd4) | 2;
      if (((((*(byte *)(param_1 + 0x99c) & 0x10) == 0) && (*(char *)(param_1 + 0x9aa) != '\0')) &&
          (uVar5 == 0)) && (iVar2 = FUN_1455143e0(lVar3), iVar2 != 0)) {
        if (*(longlong *)(param_1 + 0x8b8) == 0) {
          *(longlong *)(param_1 + 0x8f8) = *(longlong *)(param_1 + 0x8f8) + 1;
          puVar4 = (undefined1 *)0x0;
          *(longlong *)(param_1 + 0x8b0) = lVar3;
          *(longlong *)(param_1 + 0x8b8) = lVar3;
        }
        else {
          *(longlong *)(*(longlong *)(param_1 + 0x8b8) + 0x88) = lVar3;
          *(undefined8 *)(lVar3 + 0x80) = *(undefined8 *)(param_1 + 0x8b8);
          *(longlong *)(param_1 + 0x8f8) = *(longlong *)(param_1 + 0x8f8) + 1;
          puVar4 = (undefined1 *)0x0;
          *(longlong *)(param_1 + 0x8b8) = lVar3;
        }
      }
      else {
        puVar4 = (undefined1 *)FUN_1452e12a0(param_1,lVar3);
      }
    }
    else {
      puVar4 = (undefined1 *)0xfffffc7a;
    }
  }
  return puVar4;
}



// FUNCTION 1452e12a0 FUN_1452e12a0 body=100 status=ok
// SIG undefined FUN_1452e12a0(void)

undefined8 FUN_1452e12a0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_1455143e0(param_2);
  if ((iVar1 != 0) && (uVar2 = FUN_145513d90(param_2), (int)uVar2 != 0)) {
    return uVar2;
  }
  FUN_1455115f0(param_1,*(undefined4 *)(param_2 + 0xa8));
  FUN_145513a10(param_2);
  FUN_1455112a0(param_1 + 0x880,param_2);
  return 0;
}



// FUNCTION 1452e1310 FUN_1452e1310 body=295 status=ok
// SIG undefined FUN_1452e1310(void)

undefined8 FUN_1452e1310(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  
  uVar1 = *(uint *)(param_1 + 0x988);
  uVar8 = *(uint *)(param_1 + 0x9a0);
  uVar5 = uVar1;
  if (uVar8 <= uVar1) {
    uVar5 = uVar8;
  }
  if (uVar5 < 0x10) {
    uVar8 = 0x10;
  }
  else {
    uVar5 = uVar1;
    if (uVar8 <= uVar1) {
      uVar5 = uVar8;
    }
    if (uVar5 < 0x65) {
      if (uVar1 < uVar8) {
        uVar8 = uVar1;
      }
    }
    else {
      uVar8 = 100;
    }
  }
  uVar2 = *(ulonglong *)(param_1 + 0x900);
  while( true ) {
    if (uVar2 <= uVar8) {
      return 0;
    }
    lVar3 = *(longlong *)(param_1 + 0x8c0);
    if (lVar3 == 0) {
      _wassert(L"head",
               L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c",
               0x579);
    }
    lVar4 = *(longlong *)(lVar3 + 0x88);
    iVar6 = FUN_1455143e0(lVar3);
    if ((iVar6 != 0) && (uVar7 = FUN_145513d90(lVar3), (int)uVar7 != 0)) break;
    FUN_1455115f0(param_1,*(undefined4 *)(lVar3 + 0xa8));
    FUN_145513a10(lVar3);
    FUN_1455112a0(param_1 + 0x880,lVar3);
    *(longlong *)(param_1 + 0x8c0) = lVar4;
    if (lVar4 == 0) {
      *(undefined8 *)(param_1 + 0x8c8) = 0;
    }
    else {
      *(undefined8 *)(lVar4 + 0x80) = 0;
    }
    *(longlong *)(param_1 + 0x900) = *(longlong *)(param_1 + 0x900) + -1;
    uVar2 = *(ulonglong *)(param_1 + 0x900);
  }
  return uVar7;
}



// FUNCTION 1452e1440 FUN_1452e1440 body=970 status=ok
// SIG undefined FUN_1452e1440(void)

undefined1 * FUN_1452e1440(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  char *pcVar8;
  
  uVar4 = *(uint *)(param_2 + 8);
  if (uVar4 == 0) {
    if ((*(code **)(param_1 + 0x7e0) != (code *)0x0) &&
       (iVar3 = (**(code **)(param_1 + 0x7e0))
                          (param_1,param_2,0xfffffe07,*(undefined8 *)(param_1 + 0x8a8)), iVar3 != 0)
       ) {
      return (undefined1 *)0xfffffc7a;
    }
    pcVar8 = "request HEADERS: stream_id == 0";
  }
  else {
    if (*(char *)(param_1 + 0x9aa) == '\0') {
      if ((uVar4 & 1) == 0) {
        iVar3 = *(int *)(param_1 + 0x938);
        iVar2 = iVar3 - uVar4;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x934);
        iVar2 = iVar3 - uVar4;
      }
      if (SBORROW4(iVar3,uVar4) != iVar2 < 0) {
        if ((*(code **)(param_1 + 0x7e0) != (code *)0x0) &&
           (iVar3 = (**(code **)(param_1 + 0x7e0))
                              (param_1,param_2,0xfffffe07,*(undefined8 *)(param_1 + 0x8a8)),
           iVar3 != 0)) {
          return (undefined1 *)0xfffffc7a;
        }
        uVar4 = FUN_1452e2d70(param_1,*(undefined4 *)(param_1 + 0x93c),1,
                              "request HEADERS: client received request");
        if ((int)uVar4 < -900) {
          return (undefined1 *)(ulonglong)uVar4;
        }
        return &DAT_ffffff99;
      }
LAB_1452e17cc:
      return &DAT_ffffff99;
    }
    if ((~uVar4 & 1) == 0) {
      if ((int)uVar4 <= *(int *)(param_1 + 0x938)) {
        lVar5 = FUN_145511540();
        if ((lVar5 == 0) || ((*(byte *)(lVar5 + 0xd5) & 1) == 0)) goto LAB_1452e17cc;
        if ((*(code **)(param_1 + 0x7e0) != (code *)0x0) &&
           (iVar3 = (**(code **)(param_1 + 0x7e0))
                              (param_1,param_2,0xfffffe02,*(undefined8 *)(param_1 + 0x8a8)),
           iVar3 != 0)) {
          return (undefined1 *)0xfffffc7a;
        }
        pcVar8 = "HEADERS: stream closed";
        uVar7 = 5;
        goto LAB_1452e1491;
      }
      *(uint *)(param_1 + 0x938) = uVar4;
      if (*(ulonglong *)(param_1 + 0x8e0) < (ulonglong)*(uint *)(param_1 + 0x988)) {
        if ((*(byte *)(param_1 + 0x9ab) & 5) != 0) goto LAB_1452e17cc;
        iVar3 = *(int *)(param_2 + 8);
        if (*(int *)(param_2 + 0x18) != iVar3) {
          if ((ulonglong)*(uint *)(param_1 + 0x9a0) <= *(ulonglong *)(param_1 + 0x8e0)) {
            uVar4 = FUN_1452e5190(param_1,iVar3,param_2,&DAT_fffffdeb);
            puVar6 = &DAT_ffffff99;
            if ((int)uVar4 < -900) {
              puVar6 = (undefined1 *)(ulonglong)uVar4;
            }
            return puVar6;
          }
          lVar5 = FUN_1452e0d80(param_1,iVar3,0,(int *)(param_2 + 0x18),1,0);
          if (lVar5 == 0) {
            return (undefined1 *)0xfffffc7b;
          }
          uVar4 = *(uint *)(param_1 + 0x988);
          if (uVar4 == 0xffffffff) {
            uVar4 = *(uint *)(param_1 + 0x9a0);
          }
          lVar5 = *(longlong *)(param_1 + 0x8f8);
          do {
            if ((lVar5 == 0) ||
               ((ulonglong)(lVar5 + *(longlong *)(param_1 + 0x8e0)) <= (ulonglong)uVar4))
            goto LAB_1452e1747;
            lVar5 = *(longlong *)(param_1 + 0x8b0);
            if (lVar5 == 0) {
              _wassert(L"head_stream",
                       L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c"
                       ,0x54d);
            }
            lVar1 = *(longlong *)(lVar5 + 0x88);
            iVar3 = FUN_1455143e0(lVar5);
            if (iVar3 != 0) {
              puVar6 = (undefined1 *)FUN_145513d90(lVar5);
              if ((int)puVar6 != 0) {
                if ((int)puVar6 < -900) {
                  return puVar6;
                }
LAB_1452e1747:
                *(undefined4 *)(param_1 + 0x93c) = *(undefined4 *)(param_1 + 0x938);
                puVar6 = (undefined1 *)FUN_1452e50c0(param_1,param_2);
                return puVar6;
              }
            }
            FUN_1455115f0(param_1,*(undefined4 *)(lVar5 + 0xa8));
            FUN_145513a10(lVar5);
            FUN_1455112a0(param_1 + 0x880,lVar5);
            *(longlong *)(param_1 + 0x8b0) = lVar1;
            if (lVar1 == 0) {
              *(undefined8 *)(param_1 + 0x8b8) = 0;
            }
            else {
              *(undefined8 *)(lVar1 + 0x80) = 0;
            }
            lVar5 = *(longlong *)(param_1 + 0x8f8) + -1;
            *(longlong *)(param_1 + 0x8f8) = lVar5;
          } while( true );
        }
        if ((*(code **)(param_1 + 0x7e0) != (code *)0x0) &&
           (iVar3 = (**(code **)(param_1 + 0x7e0))
                              (param_1,param_2,0xfffffe07,*(undefined8 *)(param_1 + 0x8a8)),
           iVar3 != 0)) {
          return (undefined1 *)0xfffffc7a;
        }
        pcVar8 = "request HEADERS: depend on itself";
      }
      else {
        if ((*(code **)(param_1 + 0x7e0) != (code *)0x0) &&
           (iVar3 = (**(code **)(param_1 + 0x7e0))
                              (param_1,param_2,0xfffffe07,*(undefined8 *)(param_1 + 0x8a8)),
           iVar3 != 0)) {
          return (undefined1 *)0xfffffc7a;
        }
        pcVar8 = "request HEADERS: max concurrent streams exceeded";
      }
    }
    else {
      if ((*(code **)(param_1 + 0x7e0) != (code *)0x0) &&
         (iVar3 = (**(code **)(param_1 + 0x7e0))
                            (param_1,param_2,0xfffffe07,*(undefined8 *)(param_1 + 0x8a8)),
         iVar3 != 0)) {
        return (undefined1 *)0xfffffc7a;
      }
      pcVar8 = "request HEADERS: invalid stream_id";
    }
  }
  uVar7 = 1;
LAB_1452e1491:
  uVar4 = FUN_1452e2d70(param_1,*(undefined4 *)(param_1 + 0x93c),uVar7,pcVar8);
  puVar6 = (undefined1 *)(ulonglong)uVar4;
  if (-0x385 < (int)uVar4) {
    puVar6 = &DAT_ffffff99;
  }
  return puVar6;
}



// FUNCTION 1452e1810 FUN_1452e1810 body=620 status=ok
// SIG undefined FUN_1452e1810(void)

undefined1 * FUN_1452e1810(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  if (*(int *)(param_3 + 0xcc) != 4) {
    _wassert(L"stream->state == NGHTTP2_STREAM_RESERVED",
             L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c",
             0xf81);
  }
  if (*(int *)(param_2 + 8) == 0) {
    if ((*(code **)(param_1 + 0x7e0) != (code *)0x0) &&
       (iVar2 = (**(code **)(param_1 + 0x7e0))
                          (param_1,param_2,0xfffffe07,*(undefined8 *)(param_1 + 0x8a8)), iVar2 != 0)
       ) {
      return (undefined1 *)0xfffffc7a;
    }
    uVar3 = FUN_1452e2d70(param_1,*(undefined4 *)(param_1 + 0x93c),1,
                          "push response HEADERS: stream_id == 0");
    puVar4 = (undefined1 *)(ulonglong)uVar3;
    if (-0x385 < (int)uVar3) {
      puVar4 = &DAT_ffffff99;
    }
    return puVar4;
  }
  if (*(char *)(param_1 + 0x9aa) != '\0') {
    if ((*(code **)(param_1 + 0x7e0) != (code *)0x0) &&
       (iVar2 = (**(code **)(param_1 + 0x7e0))
                          (param_1,param_2,0xfffffe07,*(undefined8 *)(param_1 + 0x8a8)), iVar2 != 0)
       ) {
      return (undefined1 *)0xfffffc7a;
    }
    uVar3 = FUN_1452e2d70(param_1,*(undefined4 *)(param_1 + 0x93c),1,
                          "HEADERS: no HEADERS allowed from client in reserved state");
    if ((int)uVar3 < -900) {
      return (undefined1 *)(ulonglong)uVar3;
    }
    return &DAT_ffffff99;
  }
  if ((ulonglong)*(uint *)(param_1 + 0x988) <= *(ulonglong *)(param_1 + 0x8e0)) {
    if ((*(code **)(param_1 + 0x7e0) != (code *)0x0) &&
       (iVar2 = (**(code **)(param_1 + 0x7e0))
                          (param_1,param_2,0xfffffe07,*(undefined8 *)(param_1 + 0x8a8)), iVar2 != 0)
       ) {
      return (undefined1 *)0xfffffc7a;
    }
    uVar3 = FUN_1452e2d70(param_1,*(undefined4 *)(param_1 + 0x93c),1,
                          "push response HEADERS: max concurrent streams exceeded");
    if ((int)uVar3 < -900) {
      return (undefined1 *)(ulonglong)uVar3;
    }
    return &DAT_ffffff99;
  }
  if ((*(byte *)(param_1 + 0x9ab) & 5) != 0) {
    return &DAT_ffffff99;
  }
  if ((ulonglong)*(uint *)(param_1 + 0x9a0) <= *(ulonglong *)(param_1 + 0x8e0)) {
    uVar3 = FUN_1452e5190(param_1,*(int *)(param_2 + 8),param_2,&DAT_fffffdeb);
    puVar4 = &DAT_ffffff99;
    if ((int)uVar3 < -900) {
      puVar4 = (undefined1 *)(ulonglong)uVar3;
    }
    return puVar4;
  }
  FUN_145513bc0(param_3);
  uVar3 = *(uint *)(param_3 + 0xa8);
  if (uVar3 != 0) {
    uVar1 = ~uVar3;
    if (*(char *)(param_1 + 0x9aa) == '\0') {
      uVar1 = uVar3;
    }
    if ((uVar1 & 1) != 0) goto LAB_1452e1a5b;
  }
  *(longlong *)(param_1 + 0x8e8) = *(longlong *)(param_1 + 0x8e8) + -1;
LAB_1452e1a5b:
  *(longlong *)(param_1 + 0x8e0) = *(longlong *)(param_1 + 0x8e0) + 1;
  puVar4 = (undefined1 *)FUN_1452e50c0(param_1,param_2);
  return puVar4;
}



// FUNCTION 1452e1a80 FUN_1452e1a80 body=391 status=ok
// SIG undefined FUN_1452e1a80(void)

undefined8 FUN_1452e1a80(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(int *)(param_2 + 8) == 0) {
    if ((*(code **)(param_1 + 0x7e0) != (code *)0x0) &&
       (iVar1 = (**(code **)(param_1 + 0x7e0))
                          (param_1,param_2,0xfffffe07,*(undefined8 *)(param_1 + 0x8a8)), iVar1 != 0)
       ) {
      return 0xfffffc7a;
    }
    uVar2 = FUN_1452e2d70(param_1,*(undefined4 *)(param_1 + 0x93c),1,"PRIORITY: stream_id == 0");
    return uVar2;
  }
  if (*(int *)(param_2 + 0x10) == *(int *)(param_2 + 8)) {
    uVar2 = FUN_1452e2d70(param_1,*(undefined4 *)(param_1 + 0x93c),1,"depend on itself");
    return uVar2;
  }
  if (*(char *)(param_1 + 0x9aa) == '\0') {
    if ((*(code **)(param_1 + 0x7d8) == (code *)0x0) ||
       (iVar1 = (**(code **)(param_1 + 0x7d8))(param_1,param_2,*(undefined8 *)(param_1 + 0x8a8)),
       iVar1 == 0)) {
      return 0;
    }
  }
  else {
    lVar3 = FUN_145511540();
    if (lVar3 == 0) {
      uVar2 = FUN_1452e2be0(param_1,*(undefined4 *)(param_2 + 8));
      if ((int)uVar2 == 0) {
        return uVar2;
      }
      lVar3 = FUN_1452e0d80();
      if (lVar3 == 0) {
        return 0xfffffc7b;
      }
      uVar2 = FUN_1452e1310(param_1);
      iVar1 = (int)uVar2;
    }
    else {
      uVar2 = FUN_1452e2900(param_1,lVar3,param_2 + 0x10);
      if ((int)uVar2 < -900) {
        return uVar2;
      }
      uVar2 = FUN_1452e1310(param_1);
      iVar1 = (int)uVar2;
    }
    if (iVar1 < -900) {
      return uVar2;
    }
    if (*(code **)(param_1 + 0x7d8) == (code *)0x0) {
      return 0;
    }
    iVar1 = (**(code **)(param_1 + 0x7d8))(param_1,param_2,*(undefined8 *)(param_1 + 0x8a8));
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0xfffffc7a;
}



// FUNCTION 1452e1c10 FUN_1452e1c10 body=358 status=ok
// SIG undefined FUN_1452e1c10(void)

ulonglong FUN_1452e1c10(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar4 = *(uint *)(param_2 + 8);
  if (uVar4 == 0) {
    if ((*(code **)(param_1 + 0x7e0) != (code *)0x0) &&
       (iVar2 = (**(code **)(param_1 + 0x7e0))
                          (param_1,param_2,0xfffffe07,*(undefined8 *)(param_1 + 0x8a8)), iVar2 != 0)
       ) {
      return 0xfffffc7a;
    }
    uVar5 = FUN_1452e2d70(param_1,*(undefined4 *)(param_1 + 0x93c),1,"RST_STREAM: stream_id == 0");
    return uVar5;
  }
  uVar3 = uVar4;
  if (*(char *)(param_1 + 0x9aa) != '\0') {
    uVar3 = ~uVar4;
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = uVar4 & 1 ^ 1;
    if (*(char *)(param_1 + 0x9aa) == '\0') {
      uVar3 = uVar4 & 1;
    }
    if (uVar3 != 0) goto LAB_1452e1cf5;
    iVar2 = *(int *)(param_1 + 0x938);
    iVar1 = iVar2 - uVar4;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x934);
    iVar1 = iVar2 - uVar4;
  }
  if (SBORROW4(iVar2,uVar4) != iVar1 < 0) {
    if ((*(code **)(param_1 + 0x7e0) != (code *)0x0) &&
       (iVar2 = (**(code **)(param_1 + 0x7e0))
                          (param_1,param_2,0xfffffe07,*(undefined8 *)(param_1 + 0x8a8)), iVar2 != 0)
       ) {
      return 0xfffffc7a;
    }
    uVar5 = FUN_1452e2d70(param_1,*(undefined4 *)(param_1 + 0x93c),1,"RST_STREAM: stream in idle");
    return uVar5;
  }
LAB_1452e1cf5:
  lVar6 = FUN_145511540(param_1);
  if (((lVar6 != 0) && ((*(byte *)(lVar6 + 0xd4) & 2) == 0)) && (*(int *)(lVar6 + 0xcc) != 5)) {
    FUN_145513a20(lVar6,1);
  }
  if ((*(code **)(param_1 + 0x7d8) != (code *)0x0) &&
     (iVar2 = (**(code **)(param_1 + 0x7d8))(param_1,param_2,*(undefined8 *)(param_1 + 0x8a8)),
     iVar2 != 0)) {
    return 0xfffffc7a;
  }
  uVar4 = FUN_1452e10f0(param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10));
  uVar5 = 0;
  if ((int)uVar4 < -900) {
    uVar5 = (ulonglong)uVar4;
  }
  return uVar5;
}



// FUNCTION 1452e1d80 FUN_1452e1d80 body=1345 status=ok
// SIG undefined FUN_1452e1d80(void)

ulonglong FUN_1452e1d80(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint *puVar9;
  longlong lVar10;
  char *pcVar11;
  longlong lVar12;
  uint local_res8;
  longlong local_48;
  uint local_40;
  undefined4 local_3c;
  
  if (*(int *)(param_2 + 8) != 0) {
    if ((*(code **)(param_1 + 0x7e0) != (code *)0x0) &&
       (iVar3 = (**(code **)(param_1 + 0x7e0))
                          (param_1,param_2,0xfffffe07,*(undefined8 *)(param_1 + 0x8a8)), iVar3 != 0)
       ) {
      return 0xfffffc7a;
    }
    uVar6 = FUN_1452e2d70(param_1,*(undefined4 *)(param_1 + 0x93c),1,"SETTINGS: stream_id != 0");
    return uVar6;
  }
  if ((*(byte *)(param_2 + 0xd) & 1) == 0) {
    if (*(char *)(param_1 + 0x960) == '\0') {
      *(undefined1 *)(param_1 + 0x960) = 1;
      *(undefined4 *)(param_1 + 0x96c) = 0xffffffff;
    }
    uVar6 = 0;
    if (*(longlong *)(param_2 + 0x10) != 0) {
      do {
        lVar12 = *(longlong *)(param_2 + 0x18) + uVar6 * 8;
        switch(*(undefined4 *)(*(longlong *)(param_2 + 0x18) + uVar6 * 8)) {
        case 1:
          uVar7 = FUN_14550e640(param_1 + 0x280,*(undefined4 *)(lVar12 + 4));
          if ((int)uVar7 != 0) {
            if (-0x385 < (int)uVar7) {
              uVar6 = FUN_1452e5210(param_1,param_2,0xfffffdf5,0);
              return uVar6;
            }
            return uVar7;
          }
          *(undefined4 *)(param_1 + 0x964) = *(undefined4 *)(lVar12 + 4);
          break;
        case 2:
          uVar4 = *(uint *)(lVar12 + 4);
          if (1 < uVar4) {
            pcVar11 = "SETTINGS: invalid SETTINGS_ENBLE_PUSH";
LAB_1452e226c:
            uVar6 = FUN_1452e5210(param_1,param_2,0xfffffe07,pcVar11);
            return uVar6;
          }
          if ((*(char *)(param_1 + 0x9aa) == '\0') && (uVar4 != 0)) {
            pcVar11 = "SETTINGS: server attempted to enable push";
            goto LAB_1452e226c;
          }
          *(uint *)(param_1 + 0x968) = uVar4;
          break;
        case 3:
          *(undefined4 *)(param_1 + 0x96c) = *(undefined4 *)(lVar12 + 4);
          break;
        case 4:
          if (0x7fffffff < *(uint *)(lVar12 + 4)) {
            uVar6 = FUN_1452e5210(param_1,param_2,0xfffffdf4,
                                  "SETTINGS: too large SETTINGS_INITIAL_WINDOW_SIZE");
            return uVar6;
          }
          local_3c = *(undefined4 *)(param_1 + 0x970);
          local_48 = param_1;
          local_40 = *(uint *)(lVar12 + 4);
          uVar7 = FUN_145511740(param_1,FUN_1452e5c10,&local_48);
          if ((int)uVar7 < -900) {
            return uVar7;
          }
          if ((int)uVar7 != 0) {
            uVar6 = FUN_1452e5210(param_1,param_2,0xfffffdf4,0);
            return uVar6;
          }
          *(undefined4 *)(param_1 + 0x970) = *(undefined4 *)(lVar12 + 4);
          break;
        case 5:
          if (0xffbfff < *(int *)(lVar12 + 4) - 0x4000U) {
            pcVar11 = "SETTINGS: invalid SETTINGS_MAX_FRAME_SIZE";
            goto LAB_1452e226c;
          }
          *(int *)(param_1 + 0x974) = *(int *)(lVar12 + 4);
          break;
        case 6:
          *(undefined4 *)(param_1 + 0x978) = *(undefined4 *)(lVar12 + 4);
          break;
        case 8:
          uVar4 = *(uint *)(lVar12 + 4);
          if (1 < uVar4) {
            pcVar11 = "SETTINGS: invalid SETTINGS_ENABLE_CONNECT_PROTOCOL";
            goto LAB_1452e226c;
          }
          if (((*(char *)(param_1 + 0x9aa) == '\0') && (*(int *)(param_1 + 0x97c) != 0)) &&
             (uVar4 == 0)) {
            pcVar11 = "SETTINGS: server attempted to disable SETTINGS_ENABLE_CONNECT_PROTOCOL";
            goto LAB_1452e226c;
          }
          *(uint *)(param_1 + 0x97c) = uVar4;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ulonglong *)(param_2 + 0x10));
    }
    if ((param_3 == 0) && (iVar3 = FUN_1452e36d0(param_1), iVar3 == 0)) {
      uVar6 = FUN_1452e0af0(param_1,1,0,0);
      if ((int)uVar6 != 0) {
        if (-0x385 < (int)uVar6) {
          uVar6 = FUN_1452e5210(param_1,param_2,0xfffffdea,0);
          return uVar6;
        }
        return uVar6;
      }
    }
    goto LAB_1452e227f;
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    if ((*(code **)(param_1 + 0x7e0) != (code *)0x0) &&
       (iVar3 = (**(code **)(param_1 + 0x7e0))
                          (param_1,param_2,0xfffffdf6,*(undefined8 *)(param_1 + 0x8a8)), iVar3 != 0)
       ) {
      return 0xfffffc7a;
    }
    uVar4 = FUN_1452e2d70(param_1,*(undefined4 *)(param_1 + 0x93c),6,
                          "SETTINGS: ACK and payload != 0");
    return (ulonglong)uVar4;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x8d0);
  if (puVar1 == (undefined8 *)0x0) {
    uVar6 = FUN_1452e5210(param_1,param_2,0xfffffe07,"SETTINGS: unexpected ACK");
    return uVar6;
  }
  lVar12 = puVar1[2];
  uVar4 = 0;
  bVar2 = false;
  local_res8 = 0xffffffff;
  uVar5 = 0xffffffff;
  if (lVar12 == 0) {
LAB_1452e1fc7:
    uVar5 = 0;
  }
  else {
    puVar9 = (uint *)(puVar1[1] + 4);
    puVar8 = puVar9;
    lVar10 = lVar12;
    do {
      if (puVar8[-1] == 1) {
        uVar4 = *puVar8;
        bVar2 = true;
        if (uVar4 <= uVar5) {
          uVar5 = uVar4;
        }
      }
      else if (puVar8[-1] == 4) {
        local_res8 = *puVar8;
      }
      puVar8 = puVar8 + 2;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    if ((!bVar2) ||
       (((uVar4 <= uVar5 || (uVar5 = FUN_14550e7d0(param_1 + 0x6d8,uVar5), uVar5 == 0)) &&
        (uVar5 = FUN_14550e7d0(param_1 + 0x6d8,uVar4), uVar5 == 0)))) {
      if (local_res8 != 0xffffffff) {
        local_40 = local_res8;
        local_3c = *(undefined4 *)(param_1 + 0x98c);
        local_48 = param_1;
        uVar5 = FUN_145511740(param_1,FUN_1452e5c90,&local_48);
        if (uVar5 != 0) goto LAB_1452e1fca;
      }
      do {
        switch(puVar9[-1]) {
        case 1:
          *(uint *)(param_1 + 0x980) = *puVar9;
          break;
        case 2:
          *(uint *)(param_1 + 0x984) = *puVar9;
          break;
        case 3:
          *(uint *)(param_1 + 0x988) = *puVar9;
          break;
        case 4:
          *(uint *)(param_1 + 0x98c) = *puVar9;
          break;
        case 5:
          *(uint *)(param_1 + 0x990) = *puVar9;
          break;
        case 6:
          *(uint *)(param_1 + 0x994) = *puVar9;
          break;
        case 8:
          *(uint *)(param_1 + 0x998) = *puVar9;
        }
        puVar9 = puVar9 + 2;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      goto LAB_1452e1fc7;
    }
  }
LAB_1452e1fca:
  *(undefined8 *)(param_1 + 0x8d0) = *puVar1;
  FUN_1455112a0(param_1 + 0x880,puVar1[1]);
  FUN_1455112a0(param_1 + 0x880,puVar1);
  if (uVar5 != 0) {
    if (-0x385 < (int)uVar5) {
      uVar6 = FUN_1452e5210(param_1,param_2,uVar5,0);
      return uVar6;
    }
    return (ulonglong)uVar5;
  }
LAB_1452e227f:
  if (*(code **)(param_1 + 0x7d8) == (code *)0x0) {
    return 0;
  }
  iVar3 = (**(code **)(param_1 + 0x7d8))(param_1,param_2,*(undefined8 *)(param_1 + 0x8a8));
  if (iVar3 != 0) {
    return 0xfffffc7a;
  }
  return 0;
}



// FUNCTION 1452e2310 FUN_1452e2310 body=704 status=ok
// SIG undefined FUN_1452e2310(void)

void FUN_1452e2310(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  char *pcVar4;
  uint uVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_30;
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(uint *)(param_2 + 8) == 0) {
    if ((*(code **)(param_1 + 0x7e0) != (code *)0x0) &&
       (iVar1 = (**(code **)(param_1 + 0x7e0))
                          (param_1,param_2,0xfffffe07,*(undefined8 *)(param_1 + 0x8a8)), iVar1 != 0)
       ) goto LAB_1452e25c3;
    pcVar4 = "PUSH_PROMISE: stream_id == 0";
LAB_1452e25a3:
    uVar3 = 1;
  }
  else {
    if ((*(char *)(param_1 + 0x9aa) != '\0') || (*(int *)(param_1 + 0x984) == 0)) {
      if ((*(code **)(param_1 + 0x7e0) != (code *)0x0) &&
         (iVar1 = (**(code **)(param_1 + 0x7e0))
                            (param_1,param_2,0xfffffe07,*(undefined8 *)(param_1 + 0x8a8)),
         iVar1 != 0)) goto LAB_1452e25c3;
      pcVar4 = "PUSH_PROMISE: push disabled";
      goto LAB_1452e25a3;
    }
    if ((*(uint *)(param_2 + 8) & 1) == 0) {
      if ((*(code **)(param_1 + 0x7e0) != (code *)0x0) &&
         (iVar1 = (**(code **)(param_1 + 0x7e0))
                            (param_1,param_2,0xfffffe07,*(undefined8 *)(param_1 + 0x8a8)),
         iVar1 != 0)) goto LAB_1452e25c3;
      pcVar4 = "PUSH_PROMISE: invalid stream_id";
      goto LAB_1452e25a3;
    }
    if ((*(byte *)(param_1 + 0x9ab) & 5) != 0) goto LAB_1452e25c3;
    uVar5 = *(uint *)(param_2 + 0x28);
    if (((uVar5 == 0) || ((uVar5 & 1) != 0)) || ((int)uVar5 <= *(int *)(param_1 + 0x938))) {
      if ((*(code **)(param_1 + 0x7e0) != (code *)0x0) &&
         (iVar1 = (**(code **)(param_1 + 0x7e0))
                            (param_1,param_2,0xfffffe07,*(undefined8 *)(param_1 + 0x8a8)),
         iVar1 != 0)) goto LAB_1452e25c3;
      pcVar4 = "PUSH_PROMISE: invalid promised_stream_id";
      goto LAB_1452e25a3;
    }
    lVar2 = param_1;
    iVar1 = FUN_1452e2be0();
    if (iVar1 != 0) {
      if ((*(code **)(lVar2 + 0x7e0) != (code *)0x0) &&
         (iVar1 = (**(code **)(lVar2 + 0x7e0))(), iVar1 != 0)) goto LAB_1452e25c3;
      pcVar4 = "PUSH_PROMISE: stream in idle";
      goto LAB_1452e25a3;
    }
    *(uint *)(lVar2 + 0x938) = uVar5;
    lVar2 = FUN_145511540();
    if ((((lVar2 == 0) || ((*(byte *)(lVar2 + 0xd4) & 2) != 0)) ||
        ((*(int *)(lVar2 + 0xcc) - 3U & 0xfffffffd) == 0)) ||
       ((*(char *)(param_1 + 0x9a8) == '\0' ||
        (*(ulonglong *)(param_1 + 0x8f0) <= *(ulonglong *)(param_1 + 0x8e8))))) {
      FUN_1452e0810(param_1,*(undefined4 *)(param_2 + 0x28),8);
      goto LAB_1452e25c3;
    }
    if ((*(byte *)(lVar2 + 0xd5) & 1) == 0) {
      FUN_1452e7130(local_20,*(undefined4 *)(lVar2 + 0xa8),0x10);
      local_30 = 0;
      local_38 = 4;
      lVar2 = FUN_1452e0d80(param_1,*(undefined4 *)(param_2 + 0x28),0,local_20);
      if (lVar2 != 0) {
        *(undefined4 *)(param_1 + 0x93c) = *(undefined4 *)(param_1 + 0x938);
        FUN_1452e50c0(param_1,param_2);
      }
      goto LAB_1452e25c3;
    }
    if ((*(code **)(param_1 + 0x7e0) != (code *)0x0) &&
       (iVar1 = (**(code **)(param_1 + 0x7e0))
                          (param_1,param_2,0xfffffe02,*(undefined8 *)(param_1 + 0x8a8)), iVar1 != 0)
       ) goto LAB_1452e25c3;
    pcVar4 = "PUSH_PROMISE: stream closed";
    uVar3 = 5;
  }
  FUN_1452e2d70(param_1,*(undefined4 *)(param_1 + 0x93c),uVar3,pcVar4);
LAB_1452e25c3:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_58);
}



// FUNCTION 1452e25e0 FUN_1452e25e0 body=39 status=ok
// SIG undefined FUN_1452e25e0(void)

longlong FUN_1452e25e0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_145511540();
  if (((lVar1 == 0) || ((*(byte *)(lVar1 + 0xd4) & 2) != 0)) || (*(int *)(lVar1 + 0xcc) == 5)) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 1452e2610 FUN_1452e2610 body=749 status=ok
// SIG undefined FUN_1452e2610(void)

ulonglong FUN_1452e2610(longlong param_1,longlong *param_2,ulonglong param_3,ulonglong *param_4,
                       longlong param_5,longlong param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  uint local_res8 [2];
  
  lVar8 = param_2[1];
  if (*param_2 != lVar8) {
    _wassert(L"bufs->head == bufs->cur",
             L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c",
             0x1bd4);
    lVar8 = param_2[1];
  }
  lVar9 = lVar8 + 8;
  if (*(code **)(param_1 + 0x840) != (code *)0x0) {
    iVar2 = (**(code **)(param_1 + 0x840))
                      (param_1,*(undefined1 *)((longlong)param_4 + 0xc),
                       *(undefined4 *)(param_6 + 0xa8),*(undefined4 *)(param_1 + 0x94c),
                       *(undefined4 *)(param_6 + 0xac),*(undefined4 *)(param_1 + 0x974),
                       *(undefined8 *)(param_1 + 0x8a8));
    iVar4 = *(int *)(param_6 + 0xac);
    iVar1 = *(int *)(param_1 + 0x94c);
    iVar6 = iVar4;
    if (iVar2 < iVar4) {
      iVar6 = iVar2;
    }
    iVar3 = iVar1;
    if ((iVar6 < iVar1) && (iVar3 = iVar4, iVar2 < iVar4)) {
      iVar3 = iVar2;
    }
    iVar6 = *(int *)(param_1 + 0x974);
    if (iVar3 < *(int *)(param_1 + 0x974)) {
      iVar3 = iVar4;
      if (iVar2 < iVar4) {
        iVar3 = iVar2;
      }
      iVar6 = iVar1;
      if ((iVar3 < iVar1) && (iVar6 = iVar2, iVar4 <= iVar2)) {
        iVar6 = iVar4;
      }
    }
    if (iVar6 < 1) {
      return 0xfffffc7a;
    }
    if ((ulonglong)(*(longlong *)(lVar8 + 0x10) - *(longlong *)(lVar8 + 0x20)) <
        (ulonglong)(longlong)iVar6) {
      iVar4 = FUN_145511a70((longlong *)(param_1 + 0x148),(longlong)(iVar6 + 10));
      if (iVar4 == 0) {
        if ((longlong *)(param_1 + 0x148) != param_2) {
          _wassert(L"&session->aob.framebufs == bufs",
                   L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c"
                   ,0x1bf8);
        }
        lVar9 = param_2[1] + 8;
      }
      else {
        iVar6 = (int)param_3;
      }
    }
    param_3 = (ulonglong)iVar6;
  }
  if ((ulonglong)(*(longlong *)(lVar9 + 8) - *(longlong *)(lVar9 + 0x18)) < param_3) {
    _wassert(L"nghttp2_buf_avail(buf) >= datamax",
             L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c",
             0x1c01);
  }
  local_res8[0] = 0;
  uVar5 = (**(code **)(param_5 + 8))
                    (param_1,(int)param_4[1],*(undefined8 *)(lVar9 + 0x10),param_3,local_res8,
                     param_5,*(undefined8 *)(param_1 + 0x8a8));
  uVar7 = (ulonglong)(int)uVar5;
  if ((uVar5 + 0x20e < 0x13) && ((0x40021U >> (uVar5 + 0x20e & 0x1f) & 1) != 0)) {
    return (ulonglong)uVar5;
  }
  if (((int)uVar5 < 0) || (param_3 < uVar7)) {
    return 0xfffffc7a;
  }
  *(ulonglong *)(lVar9 + 0x18) = *(longlong *)(lVar9 + 0x10) + uVar7;
  *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + -9;
  *(undefined1 *)((longlong)param_4 + 0xd) = 0;
  if (((local_res8[0] & 1) != 0) &&
     ((*(undefined1 *)(param_5 + 0x11) = 1, (*(byte *)(param_5 + 0x10) & 1) != 0 &&
      ((local_res8[0] & 2) == 0)))) {
    *(byte *)((longlong)param_4 + 0xd) = *(byte *)((longlong)param_4 + 0xd) | 1;
  }
  if ((local_res8[0] & 4) != 0) {
    if (*(longlong *)(param_1 + 0x850) == 0) {
      return 0xfffffc7a;
    }
    *(undefined1 *)(param_5 + 0x12) = 1;
  }
  *param_4 = uVar7;
  param_4[2] = 0;
  if (uVar7 + 0x100 <= param_3) {
    param_3 = uVar7 + 0x100;
  }
  uVar7 = FUN_1452e3830(param_1,param_4,param_3);
  if (-0x385 < (int)uVar7) {
    param_4[2] = (longlong)(int)((int)uVar7 - uVar5);
    FUN_145511f30(*(undefined8 *)(lVar9 + 0x10),param_4);
    uVar7 = FUN_145513280(param_2,param_4,param_4[2],*(undefined1 *)(param_5 + 0x12));
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    *(undefined8 *)(param_6 + 0xa0) = **(undefined8 **)(param_6 + 0x98);
    FUN_145514410(param_6);
    if ((*param_4 == 0) && (((byte)local_res8[0] & 3) == 3)) {
      return 0xfffffde9;
    }
    return 0;
  }
  return uVar7;
}



// FUNCTION 1452e2900 FUN_1452e2900 body=379 status=ok
// SIG undefined FUN_1452e2900(void)

void FUN_1452e2900(longlong param_1,longlong param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  longlong local_40;
  int local_38 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = 0;
  if (*param_3 == *(int *)(param_2 + 0xa8)) {
    _wassert(L"pri_spec->stream_id != stream->stream_id",
             L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c",
             0x30a);
  }
  iVar1 = FUN_1455143e0(param_2);
  if (iVar1 == 0) goto LAB_1452e2a6e;
  if (*param_3 != 0) {
    lVar2 = FUN_145511540(param_1);
    if (lVar2 == 0) {
      iVar1 = FUN_1452e2be0(param_1,*param_3);
      if (iVar1 == 0) {
LAB_1452e29c6:
        FUN_1452e7140(local_38);
        param_3 = local_38;
      }
      else {
        FUN_1452e7140(local_38);
        local_48 = 5;
        local_40 = lVar2;
        lVar2 = FUN_1452e0d80(param_1,*param_3,0,local_38);
        if (lVar2 == 0) goto LAB_1452e2a6e;
      }
    }
    else {
      iVar1 = FUN_1455143e0(lVar2);
      if (iVar1 == 0) goto LAB_1452e29c6;
    }
  }
  if (*param_3 == 0) {
    lVar2 = param_1 + 0x20;
  }
  else {
    iVar1 = FUN_145513be0(lVar2,param_2);
    if (iVar1 != 0) {
      FUN_145514340(lVar2);
      iVar1 = FUN_145514240(*(undefined8 *)(param_2 + 0x60),lVar2);
      if (iVar1 != 0) goto LAB_1452e2a6e;
    }
  }
  if (lVar2 == 0) {
    _wassert(L"dep_stream",
             L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c",
             0x332);
  }
  if ((lVar2 == *(longlong *)(param_2 + 0x60)) && ((char)param_3[2] == '\0')) {
    FUN_1455144d0(param_2,param_3[1]);
  }
  else {
    FUN_145514340(param_2);
    *(int *)(param_2 + 0xc0) = param_3[1];
    if ((char)param_3[2] == '\0') {
      FUN_145514240(lVar2,param_2);
    }
    else {
      FUN_145514100();
    }
  }
LAB_1452e2a6e:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
}



// FUNCTION 1452e2a90 FUN_1452e2a90 body=149 status=ok
// SIG undefined FUN_1452e2a90(void)

undefined8 FUN_1452e2a90(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x950);
  if ((iVar1 <= *(int *)(param_1 + 0x95c) - param_2) && (iVar1 <= 0x7fffffff - param_2)) {
    *(int *)(param_1 + 0x950) = param_2 + iVar1;
    if (((*(byte *)(param_1 + 0x99c) & 1) == 0) && (*(char *)(param_1 + 0x9ac) == '\0')) {
      iVar1 = FUN_1452e70d0();
      if (iVar1 != 0) {
        uVar2 = FUN_1452e0a40(param_1,0,0,*(undefined4 *)(param_1 + 0x950));
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        *(undefined4 *)(param_1 + 0x950) = 0;
      }
    }
    return 0;
  }
  uVar2 = FUN_1452e2d70(param_1,*(undefined4 *)(param_1 + 0x93c),3);
  return uVar2;
}



// FUNCTION 1452e2b30 FUN_1452e2b30 body=168 status=ok
// SIG undefined FUN_1452e2b30(void)

undefined8 FUN_1452e2b30(longlong param_1,longlong param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_2 + 0xb0);
  if ((iVar1 <= *(int *)(param_2 + 0xbc) - param_3) && (iVar1 <= 0x7fffffff - param_3)) {
    *(int *)(param_2 + 0xb0) = iVar1 + param_3;
    if ((param_4 != 0) &&
       ((((*(byte *)(param_1 + 0x99c) & 1) == 0 && (*(char *)(param_2 + 0xd7) == '\0')) &&
        (iVar1 = FUN_1452e70d0(), iVar1 != 0)))) {
      uVar2 = FUN_1452e0a40(param_1,0,*(undefined4 *)(param_2 + 0xa8),
                            *(undefined4 *)(param_2 + 0xb0));
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      *(undefined4 *)(param_2 + 0xb0) = 0;
    }
    return 0;
  }
  uVar2 = FUN_1452e0810(param_1,*(undefined4 *)(param_2 + 0xa8),3);
  return uVar2;
}



// FUNCTION 1452e2be0 FUN_1452e2be0 body=77 status=ok
// SIG undefined FUN_1452e2be0(void)

undefined8 FUN_1452e2be0(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    uVar3 = param_2;
    if (*(char *)(param_1 + 0x9aa) != '\0') {
      uVar3 = ~param_2;
    }
    if ((uVar3 & 1) == 0) {
      uVar3 = param_2 & 1 ^ 1;
      if (*(char *)(param_1 + 0x9aa) == '\0') {
        uVar3 = param_2 & 1;
      }
      if (uVar3 != 0) {
        return 0;
      }
      iVar1 = *(int *)(param_1 + 0x938);
      iVar2 = iVar1 - param_2;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x934);
      iVar2 = iVar1 - param_2;
    }
    if (SBORROW4(iVar1,param_2) != iVar2 < 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1452e2c30 FUN_1452e2c30 body=311 status=ok
// SIG undefined FUN_1452e2c30(void)

undefined8 FUN_1452e2c30(longlong param_1,undefined4 param_2,char *param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  ulonglong *puVar3;
  char *_DstBuf;
  undefined8 local_res20;
  
  if ((*(longlong *)(param_1 + 0x870) == 0) && (*(longlong *)(param_1 + 0x878) == 0)) {
    return 0;
  }
  lVar1 = param_1 + 0x880;
  local_res20 = param_4;
  puVar3 = (ulonglong *)FUN_144737586();
  iVar2 = __stdio_common_vsprintf(*puVar3 | 2,0,0,param_3,0,&local_res20);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  if (-1 < iVar2) {
    _DstBuf = (char *)FUN_145511290(lVar1,(longlong)(iVar2 + 1));
    if (_DstBuf != (char *)0x0) {
      iVar2 = vsnprintf(_DstBuf,(longlong)(iVar2 + 1),param_3,(va_list)&local_res20);
      if (iVar2 < 0) {
        FUN_1455112a0(lVar1,_DstBuf);
        return 0;
      }
      if (*(code **)(param_1 + 0x878) == (code *)0x0) {
        iVar2 = (**(code **)(param_1 + 0x870))(param_1,_DstBuf);
      }
      else {
        iVar2 = (**(code **)(param_1 + 0x878))
                          (param_1,param_2,_DstBuf,(longlong)iVar2,*(undefined8 *)(param_1 + 0x8a8))
        ;
      }
      FUN_1455112a0(lVar1,_DstBuf);
      if (iVar2 == 0) {
        return 0;
      }
      return 0xfffffc7a;
    }
  }
  return 0xfffffc7b;
}



// FUNCTION 1452e2d70 FUN_1452e2d70 body=383 status=ok
// SIG undefined FUN_1452e2d70(void)

int FUN_1452e2d70(longlong param_1,uint param_2,undefined4 param_3,void *param_4)

{
  uint uVar1;
  int iVar2;
  void *_Dst;
  longlong lVar3;
  void *_Size;
  void *_Src;
  
  if ((*(byte *)(param_1 + 0x9ab) & 1) != 0) {
    return 0;
  }
  _Dst = (void *)0x0;
  *(undefined4 *)(param_1 + 0x270) = 0xf;
  _Size = _Dst;
  _Src = _Dst;
  if (param_4 != (void *)0x0) {
    _Size = (void *)0xffffffffffffffff;
    do {
      _Size = (void *)((longlong)_Size + 1);
      _Src = param_4;
    } while (*(char *)((longlong)param_4 + (longlong)_Size) != '\0');
  }
  if (param_2 == 0) {
LAB_1452e2dff:
    if (_Size == (void *)0x0) {
LAB_1452e2e35:
      lVar3 = FUN_145511290(param_1 + 0x880,0x98);
      if (lVar3 != 0) {
        FUN_145513480(lVar3);
        if ((int)*(uint *)(param_1 + 0x944) <= (int)param_2) {
          param_2 = *(uint *)(param_1 + 0x944);
        }
        FUN_145512f00(lVar3,param_2,param_3,_Dst,_Size);
        *(undefined1 *)(lVar3 + 0x60) = 1;
        iVar2 = FUN_1452e0670(param_1,lVar3);
        if (iVar2 != 0) {
          FUN_145512f40(lVar3,param_1 + 0x880);
          FUN_1455112a0(param_1 + 0x880,lVar3);
          return iVar2;
        }
        *(byte *)(param_1 + 0x9ab) = *(byte *)(param_1 + 0x9ab) | 1;
        return 0;
      }
      FUN_1455112a0(param_1 + 0x880,_Dst);
    }
    else {
      if (0x4000 < (longlong)_Size + 8U) goto LAB_1452e2df3;
      _Dst = (void *)FUN_145511290(param_1 + 0x880,_Size);
      if (_Dst != (void *)0x0) {
        memcpy(_Dst,_Src,(size_t)_Size);
        goto LAB_1452e2e35;
      }
    }
    iVar2 = -0x385;
  }
  else {
    uVar1 = ~param_2;
    if (*(char *)(param_1 + 0x9aa) == '\0') {
      uVar1 = param_2;
    }
    if ((uVar1 & 1) == 0) goto LAB_1452e2dff;
LAB_1452e2df3:
    iVar2 = -0x1f5;
  }
  return iVar2;
}



// FUNCTION 1452e2ef0 FUN_1452e2ef0 body=452 status=ok
// SIG undefined FUN_1452e2ef0(void)

void FUN_1452e2ef0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  byte bVar3;
  
  puVar1 = (undefined8 *)(param_1 + 400);
  bVar3 = *(byte *)(param_1 + 0x19c);
  lVar2 = param_1 + 0x880;
  switch(bVar3) {
  case 0:
    break;
  case 1:
    FUN_145512df0(puVar1,lVar2);
    break;
  case 2:
    FUN_145512e30(puVar1);
    break;
  case 3:
    FUN_145512e60(puVar1);
    break;
  case 4:
    FUN_145512eb0(puVar1,lVar2);
    FUN_1455112a0(lVar2,*(undefined8 *)(param_1 + 0x1f0));
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    *(undefined8 *)(param_1 + 0x250) = 0;
    *(undefined8 *)(param_1 + 600) = 0;
    break;
  case 5:
    FUN_145512e70(puVar1,lVar2);
    break;
  case 6:
    FUN_145512ef0(puVar1);
    break;
  case 7:
    FUN_145512f40(puVar1,lVar2);
    break;
  case 8:
    FUN_145512f70(puVar1);
    break;
  default:
    if (((uint)*(byte *)((ulonglong)(bVar3 >> 3) + 0x9ad + param_1) & 1 << (bVar3 & 7)) == 0) {
      if (bVar3 == 10) {
        if ((*(byte *)(param_1 + 0x9a4) & 1) != 0) {
          FUN_145512f90(puVar1,lVar2);
        }
      }
      else if ((bVar3 == 0xc) && ((*(byte *)(param_1 + 0x9a4) & 2) != 0)) {
        FUN_145512fb0(puVar1,lVar2);
      }
    }
    else {
      FUN_145512f80(puVar1);
    }
  }
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x270) = 2;
  FUN_1455118f0(param_1 + 0x1f8,param_1 + 0x274,9);
  *(longlong *)(param_1 + 0x218) = *(longlong *)(param_1 + 0x218) + 9;
  FUN_1455118b0(param_1 + 0x220,lVar2);
  FUN_1455118f0(param_1 + 0x220,0,0);
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  return;
}



// FUNCTION 1452e30e0 FUN_1452e30e0 body=63 status=ok
// SIG undefined FUN_1452e30e0(void)

void FUN_1452e30e0(undefined8 *param_1,undefined8 param_2)

{
  FUN_1455134b0(*param_1);
  FUN_1455112a0(param_2,*param_1);
  *param_1 = 0;
  FUN_145511c80(param_1 + 1);
  *(undefined4 *)(param_1 + 9) = 0;
  return;
}



// FUNCTION 1452e3120 FUN_1452e3120 body=1324 status=ok
// SIG undefined FUN_1452e3120(void)

int FUN_1452e3120(longlong *param_1,undefined8 *param_2,undefined8 param_3,int param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar11;
  undefined8 in_stack_ffffffffffffffb0;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  uVar6 = (uint)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
  uVar10 = 0x1000;
  if (param_6 == (undefined8 *)0x0) {
    param_6 = (undefined8 *)FUN_145511280();
  }
  lVar8 = FUN_1455112c0(param_6,1,0x9d0);
  *param_1 = lVar8;
  if (lVar8 == 0) {
    iVar7 = -0x385;
  }
  else {
    uVar5 = param_6[1];
    *(undefined8 *)(lVar8 + 0x880) = *param_6;
    *(undefined8 *)(lVar8 + 0x888) = uVar5;
    uVar2 = *(undefined4 *)((longlong)param_6 + 0x14);
    uVar3 = *(undefined4 *)(param_6 + 3);
    uVar4 = *(undefined4 *)((longlong)param_6 + 0x1c);
    *(undefined4 *)(lVar8 + 0x890) = *(undefined4 *)(param_6 + 2);
    *(undefined4 *)(lVar8 + 0x894) = uVar2;
    *(undefined4 *)(lVar8 + 0x898) = uVar3;
    *(undefined4 *)(lVar8 + 0x89c) = uVar4;
    *(undefined8 *)(lVar8 + 0x8a0) = param_6[4];
    lVar8 = *param_1 + 0x880;
    FUN_145513900(*param_1 + 0x20,0,0,5,CONCAT44(uVar11,0x10),(ulonglong)uVar6 << 0x20,0,0,lVar8);
    *(undefined4 *)(*param_1 + 0x94c) = 0xffff;
    *(undefined4 *)(*param_1 + 0x950) = 0;
    *(undefined4 *)(*param_1 + 0x954) = 0;
    *(undefined4 *)(*param_1 + 0x958) = 0;
    *(undefined4 *)(*param_1 + 0x95c) = 0xffff;
    *(undefined1 *)(*param_1 + 0x9ab) = 0;
    *(undefined4 *)(*param_1 + 0x944) = 0x7fffffff;
    *(undefined4 *)(*param_1 + 0x948) = 0x7fffffff;
    *(undefined4 *)(*param_1 + 0x9a0) = 0xffffffff;
    *(undefined1 *)(*param_1 + 0x9a8) = 1;
    if (param_4 != 0) {
      *(undefined1 *)(*param_1 + 0x9aa) = 1;
    }
    lVar1 = *param_1;
    *(undefined4 *)(lVar1 + 0x964) = 0x1000;
    *(undefined4 *)(lVar1 + 0x968) = 1;
    *(undefined4 *)(lVar1 + 0x96c) = 0xffffffff;
    *(undefined4 *)(lVar1 + 0x970) = 0xffff;
    *(undefined4 *)(lVar1 + 0x974) = 0x4000;
    *(undefined4 *)(lVar1 + 0x978) = 0xffffffff;
    lVar1 = *param_1;
    *(undefined4 *)(lVar1 + 0x980) = 0x1000;
    *(undefined4 *)(lVar1 + 0x984) = 1;
    *(undefined4 *)(lVar1 + 0x988) = 0xffffffff;
    *(undefined4 *)(lVar1 + 0x98c) = 0xffff;
    *(undefined4 *)(lVar1 + 0x990) = 0x4000;
    *(undefined4 *)(lVar1 + 0x994) = 0xffffffff;
    *(undefined8 *)(*param_1 + 0x8f0) = 200;
    *(undefined4 *)(*param_1 + 0x96c) = 100;
    *(undefined8 *)(*param_1 + 0x920) = 0x10000;
    *(undefined8 *)(*param_1 + 0x918) = 1000;
    *(undefined8 *)(*param_1 + 0x928) = 0x20;
    if (param_5 != (undefined8 *)0x0) {
      uVar6 = *(uint *)(param_5 + 4);
      if (((uVar6 & 1) != 0) && (*(int *)(param_5 + 6) != 0)) {
        *(uint *)(*param_1 + 0x99c) = *(uint *)(*param_1 + 0x99c) | 1;
        uVar6 = *(uint *)(param_5 + 4);
      }
      if ((uVar6 & 2) != 0) {
        *(undefined4 *)(*param_1 + 0x96c) = *(undefined4 *)((longlong)param_5 + 0x24);
        uVar6 = *(uint *)(param_5 + 4);
      }
      if ((uVar6 & 0x10) != 0) {
        *(ulonglong *)(*param_1 + 0x8f0) = (ulonglong)*(uint *)(param_5 + 5);
        uVar6 = *(uint *)(param_5 + 4);
      }
      if (((uVar6 & 4) != 0) && (*(int *)((longlong)param_5 + 0x34) != 0)) {
        *(uint *)(*param_1 + 0x99c) = *(uint *)(*param_1 + 0x99c) | 2;
        uVar6 = *(uint *)(param_5 + 4);
      }
      if (((uVar6 & 8) != 0) && (*(int *)(param_5 + 7) != 0)) {
        *(uint *)(*param_1 + 0x99c) = *(uint *)(*param_1 + 0x99c) | 4;
        uVar6 = *(uint *)(param_5 + 4);
      }
      if ((uVar6 & 0x20) != 0) {
        lVar1 = *param_1;
        uVar11 = *(undefined4 *)(param_5 + 9);
        uVar2 = *(undefined4 *)((longlong)param_5 + 0x4c);
        uVar3 = *(undefined4 *)(param_5 + 10);
        *(undefined4 *)(lVar1 + 0x9ad) = *(undefined4 *)((longlong)param_5 + 0x44);
        *(undefined4 *)(lVar1 + 0x9b1) = uVar11;
        *(undefined4 *)(lVar1 + 0x9b5) = uVar2;
        *(undefined4 *)(lVar1 + 0x9b9) = uVar3;
        uVar5 = *(undefined8 *)((longlong)param_5 + 0x5c);
        *(undefined8 *)(lVar1 + 0x9bd) = *(undefined8 *)((longlong)param_5 + 0x54);
        *(undefined8 *)(lVar1 + 0x9c5) = uVar5;
        uVar6 = *(uint *)(param_5 + 4);
      }
      if ((char)uVar6 < '\0') {
        *(undefined4 *)(*param_1 + 0x9a4) = *(undefined4 *)((longlong)param_5 + 0x2c);
        uVar6 = *(uint *)(param_5 + 4);
      }
      if (((uVar6 & 0x40) != 0) && (*(int *)((longlong)param_5 + 0x3c) != 0)) {
        *(uint *)(*param_1 + 0x99c) = *(uint *)(*param_1 + 0x99c) | 8;
        uVar6 = *(uint *)(param_5 + 4);
      }
      if ((uVar6 >> 8 & 1) != 0) {
        *(undefined8 *)(*param_1 + 0x920) = *param_5;
        uVar6 = *(uint *)(param_5 + 4);
      }
      if ((uVar6 >> 9 & 1) != 0) {
        uVar10 = param_5[1];
      }
      if (((uVar6 >> 10 & 1) != 0) && (*(int *)(param_5 + 8) != 0)) {
        *(uint *)(*param_1 + 0x99c) = *(uint *)(*param_1 + 0x99c) | 0x10;
        uVar6 = *(uint *)(param_5 + 4);
      }
      if ((uVar6 >> 0xb & 1) != 0) {
        *(undefined8 *)(*param_1 + 0x918) = param_5[2];
        uVar6 = *(uint *)(param_5 + 4);
      }
      if (((uVar6 >> 0xc & 1) != 0) && (param_5[3] != 0)) {
        *(undefined8 *)(*param_1 + 0x928) = param_5[3];
      }
    }
    iVar7 = FUN_14550e870(*param_1 + 0x280,uVar10,lVar8);
    if (iVar7 == 0) {
      iVar7 = FUN_14550e9c0(*param_1 + 0x6d8,lVar8);
      if (iVar7 == 0) {
        iVar7 = FUN_145511300(*param_1,lVar8);
        if (iVar7 == 0) {
          uVar9 = (*(longlong *)(*param_1 + 0x920) + 0x4009U) / 0x400a;
          if (uVar9 == 0) {
            uVar9 = 1;
          }
          iVar7 = FUN_145511920(*param_1 + 0x148,0x400a,uVar9,1,10,lVar8);
          if (iVar7 == 0) {
            FUN_1452e30e0(*param_1 + 0x140,lVar8);
            lVar8 = *param_1;
            uVar10 = param_2[1];
            *(undefined8 *)(lVar8 + 0x7c8) = *param_2;
            *(undefined8 *)(lVar8 + 2000) = uVar10;
            uVar10 = param_2[3];
            *(undefined8 *)(lVar8 + 0x7d8) = param_2[2];
            *(undefined8 *)(lVar8 + 0x7e0) = uVar10;
            uVar10 = param_2[5];
            *(undefined8 *)(lVar8 + 0x7e8) = param_2[4];
            *(undefined8 *)(lVar8 + 0x7f0) = uVar10;
            uVar10 = param_2[7];
            *(undefined8 *)(lVar8 + 0x7f8) = param_2[6];
            *(undefined8 *)(lVar8 + 0x800) = uVar10;
            uVar10 = param_2[9];
            *(undefined8 *)(lVar8 + 0x808) = param_2[8];
            *(undefined8 *)(lVar8 + 0x810) = uVar10;
            uVar10 = param_2[0xb];
            *(undefined8 *)(lVar8 + 0x818) = param_2[10];
            *(undefined8 *)(lVar8 + 0x820) = uVar10;
            uVar10 = param_2[0xd];
            *(undefined8 *)(lVar8 + 0x828) = param_2[0xc];
            *(undefined8 *)(lVar8 + 0x830) = uVar10;
            uVar10 = param_2[0xf];
            *(undefined8 *)(lVar8 + 0x838) = param_2[0xe];
            *(undefined8 *)(lVar8 + 0x840) = uVar10;
            uVar10 = param_2[0x11];
            *(undefined8 *)(lVar8 + 0x848) = param_2[0x10];
            *(undefined8 *)(lVar8 + 0x850) = uVar10;
            uVar11 = *(undefined4 *)((longlong)param_2 + 0x94);
            uVar2 = *(undefined4 *)(param_2 + 0x13);
            uVar3 = *(undefined4 *)((longlong)param_2 + 0x9c);
            *(undefined4 *)(lVar8 + 0x858) = *(undefined4 *)(param_2 + 0x12);
            *(undefined4 *)(lVar8 + 0x85c) = uVar11;
            *(undefined4 *)(lVar8 + 0x860) = uVar2;
            *(undefined4 *)(lVar8 + 0x864) = uVar3;
            uVar11 = *(undefined4 *)((longlong)param_2 + 0xa4);
            uVar2 = *(undefined4 *)(param_2 + 0x15);
            uVar3 = *(undefined4 *)((longlong)param_2 + 0xac);
            *(undefined4 *)(lVar8 + 0x868) = *(undefined4 *)(param_2 + 0x14);
            *(undefined4 *)(lVar8 + 0x86c) = uVar11;
            *(undefined4 *)(lVar8 + 0x870) = uVar2;
            *(undefined4 *)(lVar8 + 0x874) = uVar3;
            *(undefined8 *)(lVar8 + 0x878) = param_2[0x16];
            *(undefined8 *)(*param_1 + 0x8a8) = param_3;
            FUN_1452e2ef0(*param_1);
            if (DAT_14c7325e4 != 0) {
              lVar8 = *param_1;
              if ((param_4 != 0) && ((*(byte *)(lVar8 + 0x99c) & 2) == 0)) {
                *(undefined8 *)(lVar8 + 0x260) = 0x18;
                *(undefined4 *)(lVar8 + 0x270) = 0;
                return 0;
              }
              *(undefined4 *)(lVar8 + 0x270) = 1;
              if (param_4 == 0) {
                *(undefined4 *)(*param_1 + 0x188) = 3;
                FUN_145511b50(*param_1 + 0x148,"PRI * HTTP/2.0\r\n\r\nSM\r\n\r\n",0x18);
              }
            }
            return 0;
          }
          FUN_145511360();
        }
        FUN_14550ea70(*param_1 + 0x6d8);
      }
      thunk_FUN_1455102a0(*param_1 + 0x280);
    }
    FUN_1455112a0(lVar8,*param_1);
  }
  return iVar7;
}



// FUNCTION 1452e3650 FUN_1452e3650 body=114 status=ok
// SIG undefined FUN_1452e3650(void)

undefined8 FUN_1452e3650(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x98);
  lVar1 = param_2 + 0x880;
  if (((lVar2 != 0) && (*(char *)(lVar2 + 0x90) == '\0')) &&
     (lVar2 != *(longlong *)(param_2 + 0x140))) {
    FUN_1455134b0(lVar2,lVar1);
    FUN_1455112a0(lVar1,lVar2);
  }
  FUN_145513a10(param_1);
  FUN_1455112a0(lVar1,param_1);
  return 0;
}



// FUNCTION 1452e36d0 FUN_1452e36d0 body=155 status=ok
// SIG undefined FUN_1452e36d0(void)

undefined8 FUN_1452e36d0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (((*(byte *)(param_1 + 0x9ab) & 1) != 0) || ((*(byte *)(param_1 + 0x9ab) & 2) != 0)) {
    return 1;
  }
  lVar2 = FUN_145511730();
  if ((lVar2 - *(longlong *)(param_1 + 0x900) == *(longlong *)(param_1 + 0x8f8)) &&
     ((*(byte *)(param_1 + 0x9ab) & 0xc) != 0)) {
    if ((*(byte *)(param_1 + 0x9ab) & 2) != 0) {
      return 1;
    }
    if ((((*(longlong *)(param_1 + 0x140) == 0) && (*(longlong *)(param_1 + 0xf8) == 0)) &&
        (*(longlong *)(param_1 + 0x110) == 0)) &&
       ((iVar1 = FUN_1455136e0(param_1 + 0x28), iVar1 != 0 || (*(int *)(param_1 + 0x94c) < 1)))) {
      if (*(longlong *)(param_1 + 0x128) == 0) {
        return 1;
      }
      if ((ulonglong)*(uint *)(param_1 + 0x96c) <= *(ulonglong *)(param_1 + 0x8d8)) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1452e3770 FUN_1452e3770 body=192 status=ok
// SIG undefined FUN_1452e3770(void)

undefined8 FUN_1452e3770(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    return 0xfffffe02;
  }
  iVar3 = FUN_1452e36d0();
  if (iVar3 != 0) {
    return 0xfffffdee;
  }
  if ((*(byte *)(param_2 + 0xd5) & 2) != 0) {
    return 0xfffffe00;
  }
  uVar1 = *(uint *)(param_2 + 0xa8);
  if (uVar1 != 0) {
    uVar2 = ~uVar1;
    if (*(char *)(param_1 + 0x9aa) == '\0') {
      uVar2 = uVar1;
    }
    if ((uVar2 & 1) != 0) {
      if (*(int *)(param_2 + 0xcc) == 3) {
        return 0xfffffe01;
      }
      if (*(int *)(param_2 + 0xcc) == 4) {
        return 0xfffffdfe;
      }
      return 0;
    }
  }
  if (*(int *)(param_2 + 0xcc) == 2) {
    return 0;
  }
  if (*(int *)(param_2 + 0xcc) != 3) {
    return 0xfffffdfe;
  }
  return 0xfffffe01;
}



// FUNCTION 1452e3830 FUN_1452e3830 body=86 status=ok
// SIG undefined FUN_1452e3830(void)

ulonglong FUN_1452e3830(longlong param_1,ulonglong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  uVar1 = *param_2;
  if ((uVar1 < param_3) && (*(code **)(param_1 + 0x838) != (code *)0x0)) {
    if (uVar1 + 0x100 < param_3) {
      param_3 = uVar1 + 0x100;
    }
    uVar1 = (**(code **)(param_1 + 0x838))(param_1,param_2,param_3,*(undefined8 *)(param_1 + 0x8a8))
    ;
    if (((int)uVar1 < (int)*param_2) || ((int)param_3 < (int)uVar1)) {
      uVar1 = 0xfffffc7a;
    }
  }
  return uVar1;
}



// FUNCTION 1452e3890 FUN_1452e3890 body=174 status=ok
// SIG undefined FUN_1452e3890(void)

ulonglong FUN_1452e3890(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *param_2;
  uVar3 = uVar1 + 0x100;
  uVar2 = uVar3;
  if (0x4000 < uVar3) {
    uVar2 = 0x4000;
  }
  if ((uVar1 < uVar2) && (*(code **)(param_1 + 0x838) != (code *)0x0)) {
    if (uVar2 <= uVar3) {
      uVar3 = uVar2;
    }
    uVar1 = (**(code **)(param_1 + 0x838))(param_1,param_2,uVar3,*(undefined8 *)(param_1 + 0x8a8));
    if (((int)uVar1 < (int)*param_2) || ((int)uVar3 < (int)uVar1)) {
      return 0xfffffc7a;
    }
  }
  if (-0x385 < (int)uVar1) {
    uVar3 = (longlong)(int)uVar1 - *param_2;
    uVar1 = FUN_145513280(param_1 + 0x148,param_2,uVar3,0);
    if ((int)uVar1 == 0) {
      param_2[2] = uVar3;
    }
  }
  return uVar1;
}



// FUNCTION 1452e3940 FUN_1452e3940 body=2412 status=ok
// SIG undefined FUN_1452e3940(void)

ulonglong FUN_1452e3940(longlong param_1,ulonglong *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  code *pcVar13;
  ulonglong in_stack_ffffffffffffffd8;
  
  cVar1 = *(char *)((longlong)param_2 + 0xc);
  switch(cVar1) {
  case '\0':
    lVar11 = FUN_145511540(param_1,(int)param_2[1]);
    if (((lVar11 == 0) || ((*(byte *)(lVar11 + 0xd4) & 2) != 0)) || (*(int *)(lVar11 + 0xcc) == 5))
    {
      lVar11 = 0;
    }
    else if (*(ulonglong **)(lVar11 + 0x98) != param_2) {
      _wassert(L"stream->item == item",
               L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c",
               0x7d4);
    }
    uVar3 = FUN_1452e3770(param_1,lVar11);
    if (uVar3 != 0) {
      lVar11 = FUN_145511540(param_1,(int)param_2[1]);
      if ((lVar11 != 0) && (uVar10 = FUN_1455140c0(lVar11), (int)uVar10 < -900)) {
        return uVar10;
      }
      return (ulonglong)uVar3;
    }
    if (lVar11 == 0) {
      _wassert(L"stream",
               L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c",
               0x7ea);
    }
    iVar7 = *(int *)(lVar11 + 0xac);
    iVar2 = *(int *)(param_1 + 0x94c);
    iVar4 = iVar7;
    if (0x4000 < iVar7) {
      iVar4 = 0x4000;
    }
    iVar5 = iVar2;
    if ((iVar4 < iVar2) && (iVar5 = iVar7, 0x4000 < iVar7)) {
      iVar5 = 0x4000;
    }
    iVar4 = *(int *)(param_1 + 0x974);
    if (iVar5 < *(int *)(param_1 + 0x974)) {
      iVar5 = iVar7;
      if (0x4000 < iVar7) {
        iVar5 = 0x4000;
      }
      iVar4 = iVar2;
      if ((iVar5 < iVar2) && (iVar4 = iVar7, 0x4000 < iVar7)) {
        iVar4 = 0x4000;
      }
    }
    lVar12 = (longlong)iVar4;
    if (iVar4 < 1) {
      lVar12 = 0;
    }
    if (lVar12 == 0) {
      if (iVar2 < 1) {
        _wassert(L"session->remote_window_size > 0",
                 L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c"
                 ,0x7f1);
      }
      uVar10 = FUN_145513a30(lVar11,4);
      iVar7 = (int)uVar10;
    }
    else {
      uVar10 = FUN_1452e2610(param_1,param_1 + 0x148,lVar12,param_2,param_2 + 0xc,lVar11);
      iVar7 = (int)uVar10;
      if (iVar7 == -0x20e) {
        return uVar10;
      }
      if (iVar7 != -0x1fc) {
        if (iVar7 == -0x209) {
          uVar10 = FUN_1455140c0(lVar11);
          if (-0x385 < (int)uVar10) {
            uVar6 = FUN_1452e0810(param_1,(int)param_2[1],2);
            uVar3 = 0xfffffdf7;
            if ((int)uVar6 < -900) {
              uVar3 = uVar6;
            }
            return (ulonglong)uVar3;
          }
          return uVar10;
        }
        if (iVar7 == 0) {
          return 0;
        }
        uVar3 = FUN_1455140c0(lVar11);
        if ((int)uVar3 < -900) {
          return (ulonglong)uVar3;
        }
        return uVar10 & 0xffffffff;
      }
      uVar10 = FUN_145513a30(lVar11,8);
      iVar7 = (int)uVar10;
    }
    if (-0x385 < iVar7) {
      *(undefined8 *)(param_1 + 0x140) = 0;
      FUN_1452e30e0((undefined8 *)(param_1 + 0x140),param_1 + 0x880);
      return 0xfffffe04;
    }
    return uVar10;
  case '\x01':
    if ((int)param_2[7] == 0) {
      lVar11 = FUN_1452e0d80(param_1,(int)param_2[1],0,param_2 + 3,
                             in_stack_ffffffffffffffd8 & 0xffffffff00000000,param_2[0xe]);
      if (lVar11 == 0) {
        return 0xfffffc7b;
      }
      if (*(char *)((longlong)param_2 + 0x7c) != '\0') {
        return 0xfffffe01;
      }
      if (((*(byte *)(param_1 + 0x9ab) & 8) != 0) || (iVar7 = FUN_1452e36d0(param_1), iVar7 != 0)) {
        return 0xfffffdfc;
      }
      if ((~(*(uint *)(param_1 + 0x99c) >> 2) & 1) != 0) {
        FUN_145514e40(lVar11,param_2);
      }
    }
    else {
      lVar11 = FUN_145511540(param_1,(int)param_2[1]);
      if (((lVar11 == 0) || ((*(byte *)(lVar11 + 0xd4) & 2) != 0)) || (*(int *)(lVar11 + 0xcc) == 5)
         ) {
        lVar11 = 0;
LAB_1452e3d7f:
        *(undefined4 *)(param_2 + 7) = 3;
        if (lVar11 == 0) {
          return 0xfffffe02;
        }
      }
      else {
        if (*(int *)(lVar11 + 0xcc) == 4) {
          iVar7 = FUN_1452e36d0(param_1);
          if (iVar7 != 0) {
            return 0xfffffdee;
          }
          if ((*(byte *)(lVar11 + 0xd5) & 2) != 0) {
            return 0xfffffe00;
          }
          if (*(char *)(param_1 + 0x9aa) == '\0') {
            return 0xfffffe07;
          }
          if (*(int *)(lVar11 + 0xcc) != 4) {
            return 0xfffffe07;
          }
          if ((*(byte *)(param_1 + 0x9ab) & 8) != 0) {
            return 0xfffffdfc;
          }
          *(undefined4 *)(param_2 + 7) = 2;
          if (param_2[0xe] != 0) {
            *(ulonglong *)(lVar11 + 0x90) = param_2[0xe];
          }
          goto LAB_1452e3c0c;
        }
        iVar7 = FUN_1452e36d0(param_1);
        if ((iVar7 != 0) || ((*(byte *)(lVar11 + 0xd5) & 2) != 0)) goto LAB_1452e3d7f;
        if ((*(char *)(param_1 + 0x9aa) != '\0') &&
           (((*(uint *)(lVar11 + 0xa8) == 0 || ((~*(uint *)(lVar11 + 0xa8) & 1) == 0)) &&
            (*(int *)(lVar11 + 0xcc) == 1)))) {
          *(undefined4 *)(param_2 + 7) = 1;
          goto LAB_1452e3c0c;
        }
        *(undefined4 *)(param_2 + 7) = 3;
      }
      iVar7 = FUN_1452e36d0(param_1);
      if (iVar7 != 0) {
        return 0xfffffdee;
      }
      if ((*(byte *)(lVar11 + 0xd5) & 2) != 0) {
        return 0xfffffe00;
      }
      if (*(int *)(lVar11 + 0xcc) != 2) {
        if (*(int *)(lVar11 + 0xcc) == 3) {
          return 0xfffffe01;
        }
        uVar3 = *(uint *)(lVar11 + 0xa8);
        if (uVar3 == 0) {
          return 0xfffffdfe;
        }
        uVar6 = ~uVar3;
        if (*(char *)(param_1 + 0x9aa) == '\0') {
          uVar6 = uVar3;
        }
        if ((uVar6 & 1) == 0) {
          return 0xfffffdfe;
        }
      }
    }
LAB_1452e3c0c:
    lVar11 = FUN_14550e690(param_1 + 0x280,param_2[5],param_2[6]);
    if (*(ulonglong *)(param_1 + 0x920) < lVar11 + 5U) {
      return 0xfffffdf6;
    }
    uVar10 = FUN_145511ff0(param_1 + 0x148,param_2,param_1 + 0x280);
    if ((int)uVar10 != 0) {
      return uVar10;
    }
    uVar10 = FUN_1452e3890(param_1,param_2);
    if ((int)uVar10 != 0) {
      return uVar10;
    }
    if ((int)param_2[7] == 0) {
      iVar7 = (int)param_2[1];
      if (iVar7 <= *(int *)(param_1 + 0x934)) {
        _wassert(L"session->last_sent_stream_id < frame->hd.stream_id",
                 L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c"
                 ,0x882);
        iVar7 = (int)param_2[1];
      }
      *(int *)(param_1 + 0x934) = iVar7;
    }
    break;
  case '\x02':
    iVar7 = FUN_1452e36d0(param_1);
    if (iVar7 != 0) {
      return 0xfffffdee;
    }
    FUN_145512170(param_1 + 0x148,param_2);
    return 0;
  case '\x03':
    iVar7 = FUN_1452e36d0(param_1);
    if (iVar7 != 0) {
      return 0xfffffdee;
    }
    FUN_145512290(param_1 + 0x148,param_2);
    break;
  case '\x04':
    if ((*(byte *)((longlong)param_2 + 0xd) & 1) != 0) {
      lVar11 = *(longlong *)(param_1 + 0x910);
      if (lVar11 == 0) {
        _wassert(L"session->obq_flood_counter_ > 0",
                 L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c"
                 ,0x89e);
        lVar11 = *(longlong *)(param_1 + 0x910);
      }
      *(longlong *)(param_1 + 0x910) = lVar11 + -1;
      iVar7 = FUN_1452e36d0(param_1);
      if (iVar7 != 0) {
        return 0xfffffdee;
      }
    }
    uVar10 = FUN_145512370(param_1 + 0x148,param_2);
    iVar7 = (int)uVar10;
    goto joined_r0x0001452e4230;
  case '\x05':
    lVar11 = FUN_145511540(param_1,(int)param_2[1]);
    if (((lVar11 == 0) || ((*(byte *)(lVar11 + 0xd4) & 2) != 0)) || (*(int *)(lVar11 + 0xcc) == 5))
    {
      lVar11 = 0;
    }
    if (*(char *)(param_1 + 0x9aa) == '\0') {
      return 0xfffffe07;
    }
    if (lVar11 == 0) {
      return 0xfffffe02;
    }
    iVar7 = FUN_1452e36d0(param_1);
    if (iVar7 != 0) {
      return 0xfffffdee;
    }
    if ((*(byte *)(lVar11 + 0xd5) & 2) != 0) {
      return 0xfffffe00;
    }
    if (*(int *)(param_1 + 0x968) == 0) {
      return 0xfffffdf0;
    }
    if (*(int *)(lVar11 + 0xcc) == 3) {
      return 0xfffffe01;
    }
    if ((*(byte *)(param_1 + 0x9ab) & 8) == 0) {
      uVar10 = FUN_14550e690(param_1 + 0x280,param_2[3],param_2[4]);
      if (*(ulonglong *)(param_1 + 0x920) < uVar10) {
        return 0xfffffdf6;
      }
      uVar10 = FUN_145512630(param_1 + 0x148,param_2,param_1 + 0x280);
      if ((int)uVar10 == 0) {
        uVar10 = FUN_1452e3890(param_1,param_2);
        if ((int)uVar10 == 0) {
          iVar7 = (int)param_2[5];
          if (iVar7 < *(int *)(param_1 + 0x934) + 2) {
            _wassert(L"session->last_sent_stream_id + 2 <= frame->push_promise.promised_stream_id",
                     L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c"
                     ,0x8d1);
            iVar7 = (int)param_2[5];
          }
          *(int *)(param_1 + 0x934) = iVar7;
          return 0;
        }
        return uVar10;
      }
      return uVar10;
    }
    return 0xfffffdfc;
  case '\x06':
    if ((*(byte *)((longlong)param_2 + 0xd) & 1) != 0) {
      lVar11 = *(longlong *)(param_1 + 0x910);
      if (lVar11 == 0) {
        _wassert(L"session->obq_flood_counter_ > 0",
                 L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c"
                 ,0x8d8);
        lVar11 = *(longlong *)(param_1 + 0x910);
      }
      *(longlong *)(param_1 + 0x910) = lVar11 + -1;
    }
    if ((*(byte *)(param_1 + 0x9ab) & 1) != 0) {
      return 0xfffffdee;
    }
    FUN_145512730(param_1 + 0x148,param_2);
    break;
  case '\a':
    uVar10 = FUN_145512800(param_1 + 0x148,param_2);
    if ((int)uVar10 != 0) {
      return uVar10;
    }
    *(int *)(param_1 + 0x944) = (int)param_2[2];
    break;
  case '\b':
    uVar10 = param_2[1];
    iVar7 = FUN_1452e36d0(param_1);
    if (iVar7 != 0) {
      return 0xfffffdee;
    }
    if ((int)uVar10 != 0) {
      lVar11 = FUN_145511540(param_1,(int)uVar10);
      if (lVar11 == 0) {
        return 0xfffffe02;
      }
      if ((*(byte *)(lVar11 + 0xd4) & 2) != 0) {
        return 0xfffffe02;
      }
      iVar7 = *(int *)(lVar11 + 0xcc);
      if (iVar7 == 5) {
        return 0xfffffe02;
      }
      if (iVar7 == 3) {
        return 0xfffffe01;
      }
      if ((iVar7 == 4) && (uVar3 = *(uint *)(lVar11 + 0xa8), uVar3 != 0)) {
        uVar6 = ~uVar3;
        if (*(char *)(param_1 + 0x9aa) == '\0') {
          uVar6 = uVar3;
        }
        if ((uVar6 & 1) != 0) {
          return 0xfffffdfe;
        }
      }
    }
    FUN_145512930(param_1 + 0x148,param_2);
    break;
  case '\t':
    _wassert(L"0",
             L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c",
             0x8f4);
    break;
  default:
    if ((char)param_2[0xc] == '\0') {
      iVar7 = FUN_1452e36d0(param_1);
      if (iVar7 != 0) {
        return 0xfffffdee;
      }
      pcVar13 = *(code **)(param_1 + 0x858);
      if (pcVar13 == (code *)0x0) {
        _wassert(L"session->callbacks.pack_extension_callback",
                 L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c"
                 ,0x7a1);
        pcVar13 = *(code **)(param_1 + 0x858);
      }
      lVar11 = *(longlong *)(param_1 + 0x148);
      uVar8 = *(longlong *)(lVar11 + 0x10) - *(longlong *)(lVar11 + 0x20);
      uVar10 = 0x4000;
      if (uVar8 < 0x4000) {
        uVar10 = uVar8;
      }
      iVar7 = (*pcVar13)(param_1,*(longlong *)(lVar11 + 0x20),uVar10,param_2,
                         *(undefined8 *)(param_1 + 0x8a8));
      if (iVar7 != -0x217) {
        if ((-1 < iVar7) && (uVar8 = (ulonglong)iVar7, uVar8 <= uVar10)) {
          *param_2 = uVar8;
          lVar12 = *(longlong *)(lVar11 + 0x18);
          lVar9 = *(longlong *)(lVar11 + 0x20);
          if (lVar12 != lVar9) {
            _wassert(L"buf->pos == buf->last",
                     L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c"
                     ,0x7b4);
            lVar9 = *(longlong *)(lVar11 + 0x20);
            lVar12 = *(longlong *)(lVar11 + 0x18);
          }
          *(ulonglong *)(lVar11 + 0x20) = lVar9 + uVar8;
          *(longlong *)(lVar11 + 0x18) = lVar12 + -9;
          FUN_145511f30(lVar12 + -9,param_2);
          return 0;
        }
        return 0xfffffc7a;
      }
      return 0xfffffde9;
    }
    if (cVar1 == '\n') {
      uVar10 = param_2[1];
      iVar7 = FUN_1452e36d0(param_1);
      if (iVar7 != 0) {
        return 0xfffffdee;
      }
      if ((int)uVar10 != 0) {
        lVar11 = FUN_145511540(param_1,(int)uVar10);
        if (lVar11 == 0) {
          return 0xfffffe02;
        }
        if ((*(byte *)(lVar11 + 0xd4) & 2) != 0) {
          return 0xfffffe02;
        }
        if (*(int *)(lVar11 + 0xcc) == 5) {
          return 0xfffffe02;
        }
        if (*(int *)(lVar11 + 0xcc) == 3) {
          return 0xfffffe01;
        }
      }
      FUN_145512a10(param_1 + 0x148,param_2);
      return 0;
    }
    if (cVar1 != '\f') {
      _wassert(L"0",
               L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c",
               0x91d);
      return 0;
    }
    iVar7 = FUN_1452e36d0(param_1);
    if (iVar7 != 0) {
      return 0xfffffdee;
    }
    uVar10 = FUN_145512b50(param_1 + 0x148,param_2);
    iVar7 = (int)uVar10;
joined_r0x0001452e4230:
    if (iVar7 != 0) {
      return uVar10;
    }
  }
  return 0;
}



// FUNCTION 1452e42e0 FUN_1452e42e0 body=201 status=ok
// SIG undefined FUN_1452e42e0(void)

undefined8 FUN_1452e42e0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0xa8);
  if (uVar1 != 0) {
    uVar2 = ~uVar1;
    if (*(char *)(*param_2 + 0x9aa) == '\0') {
      uVar2 = uVar1;
    }
    if ((uVar2 & 1) != 0) {
      if (*(int *)((longlong)param_2 + 0x14) != 0) {
        return 0;
      }
      goto LAB_1452e4329;
    }
  }
  if (*(int *)((longlong)param_2 + 0x14) == 0) {
    return 0;
  }
LAB_1452e4329:
  if (((*(int *)(param_1 + 0xcc) != 5) && ((*(byte *)(param_1 + 0xd4) & 2) == 0)) &&
     ((int)param_2[2] < (int)uVar1)) {
    if (*(longlong *)(param_1 + 0x88) != 0) {
      _wassert(L"stream->closed_next == NULL",
               L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c",
               0x990);
    }
    if (*(longlong *)(param_1 + 0x80) != 0) {
      _wassert(L"stream->closed_prev == NULL",
               L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c",
               0x991);
    }
    if (param_2[1] != 0) {
      *(longlong *)(param_1 + 0x88) = param_2[1];
    }
    param_2[1] = param_1;
  }
  return 0;
}



// FUNCTION 1452e43b0 FUN_1452e43b0 body=212 status=ok
// SIG undefined FUN_1452e43b0(void)

int FUN_1452e43b0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 local_28;
  longlong local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = 0;
  local_28 = param_1;
  local_18 = param_2;
  local_14 = param_3;
  iVar4 = FUN_145511740(param_1,FUN_1452e42e0,&local_28);
  lVar3 = local_20;
  if (iVar4 != 0) {
    _wassert(L"rv == 0",
             L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c",
             0x9aa);
    lVar3 = local_20;
  }
  do {
    if (lVar3 == 0) {
      return 0;
    }
    lVar2 = *(longlong *)(lVar3 + 0x88);
    *(undefined8 *)(lVar3 + 0x88) = 0;
    iVar4 = FUN_1452e10f0(param_1,*(undefined4 *)(lVar3 + 0xa8),7);
    lVar3 = lVar2;
  } while (-0x385 < iVar4);
  while (lVar2 != 0) {
    plVar1 = (longlong *)(lVar2 + 0x88);
    lVar2 = *plVar1;
    *plVar1 = 0;
  }
  return iVar4;
}



// FUNCTION 1452e4490 FUN_1452e4490 body=69 status=ok
// SIG undefined FUN_1452e4490(void)

void FUN_1452e4490(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  FUN_1452e6070(param_1,param_2 + 0xb4,param_2 + 0xb0,*(undefined1 *)(param_2 + 0xd7),
                *(undefined4 *)(param_2 + 0xa8),param_3,*(undefined4 *)(param_2 + 0xbc));
  return;
}



// FUNCTION 1452e44e0 FUN_1452e44e0 body=62 status=ok
// SIG undefined FUN_1452e44e0(void)

void FUN_1452e44e0(longlong param_1,undefined8 param_2)

{
  FUN_1452e6070(param_1,param_1 + 0x954,param_1 + 0x950,*(undefined1 *)(param_1 + 0x9ac),0,param_2,
                *(undefined4 *)(param_1 + 0x95c));
  return;
}



// FUNCTION 1452e4520 FUN_1452e4520 body=1202 status=ok
// SIG undefined FUN_1452e4520(void)

undefined8 FUN_1452e4520(longlong param_1)

{
  char cVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  
  piVar2 = *(int **)(param_1 + 0x140);
  if ((char)piVar2[3] == '\0') {
    lVar5 = FUN_145511540(param_1,piVar2[2]);
    if (((lVar5 == 0) || ((*(byte *)(lVar5 + 0xd4) & 2) != 0)) || (*(int *)(lVar5 + 0xcc) == 5)) {
      *(int *)(param_1 + 0x94c) = *(int *)(param_1 + 0x94c) - *piVar2;
LAB_1452e4629:
      if (*(code **)(param_1 + 0x7f8) == (code *)0x0) {
        return 0;
      }
      iVar4 = (**(code **)(param_1 + 0x7f8))(param_1,piVar2,*(undefined8 *)(param_1 + 0x8a8));
      if (iVar4 == 0) {
        return 0;
      }
      return 0xfffffc7a;
    }
    *(int *)(param_1 + 0x94c) = *(int *)(param_1 + 0x94c) - *piVar2;
    *(int *)(lVar5 + 0xac) = *(int *)(lVar5 + 0xac) - *piVar2;
    if (*(char *)((longlong)piVar2 + 0x71) == '\0') goto LAB_1452e4629;
    uVar6 = FUN_1455140c0(lVar5);
    if ((int)uVar6 < -900) {
      return uVar6;
    }
    if ((*(code **)(param_1 + 0x7f8) != (code *)0x0) &&
       (iVar4 = (**(code **)(param_1 + 0x7f8))(param_1,piVar2,*(undefined8 *)(param_1 + 0x8a8)),
       iVar4 != 0)) {
      return 0xfffffc7a;
    }
    if ((*(byte *)((longlong)piVar2 + 0xd) & 1) == 0) {
      return 0;
    }
    FUN_145513a20(lVar5,2);
    if ((*(byte *)(lVar5 + 0xd5) & 3) != 3) {
      return 0;
    }
    iVar4 = *(int *)(lVar5 + 0xa8);
    iVar7 = 0;
  }
  else {
    if ((((char)piVar2[3] - 1U & 0xfb) == 0) && (iVar4 = FUN_145511d80(param_1 + 0x148), iVar4 != 0)
       ) {
      return 0;
    }
    if ((*(code **)(param_1 + 0x7f8) != (code *)0x0) &&
       (iVar4 = (**(code **)(param_1 + 0x7f8))(param_1,piVar2,*(undefined8 *)(param_1 + 0x8a8)),
       iVar4 != 0)) {
      return 0xfffffc7a;
    }
    cVar1 = (char)piVar2[3];
    if (cVar1 == '\x01') {
      lVar5 = FUN_145511540(param_1,piVar2[2]);
      if (lVar5 == 0) {
        return 0;
      }
      if ((*(byte *)(lVar5 + 0xd4) & 2) != 0) {
        return 0;
      }
      if (*(int *)(lVar5 + 0xcc) == 5) {
        return 0;
      }
      iVar4 = piVar2[0xe];
      if (iVar4 == 0) {
        *(undefined4 *)(lVar5 + 0xcc) = 1;
        if ((*(byte *)((longlong)piVar2 + 0xd) & 1) != 0) {
          FUN_145513a20(lVar5,2);
        }
        if (((*(byte *)(lVar5 + 0xd5) & 3) == 3) &&
           (uVar6 = FUN_1452e10f0(param_1,*(undefined4 *)(lVar5 + 0xa8),0), (int)uVar6 < -900)) {
          return uVar6;
        }
        if (*(longlong *)(piVar2 + 0x1a) == 0) {
          return 0;
        }
        uVar6 = FUN_1452e6590(param_1,1,piVar2[2],piVar2 + 0x18);
        if (-0x385 < (int)uVar6) {
          return 0;
        }
        return uVar6;
      }
      if (iVar4 != 1) {
        if (iVar4 != 2) {
          if (iVar4 != 3) {
            _wassert(L"0",
                     L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c"
                     ,0xa71);
            return 0;
          }
          goto LAB_1452e48ee;
        }
        *(byte *)(lVar5 + 0xd4) = *(byte *)(lVar5 + 0xd4) & 0xfe;
        *(longlong *)(param_1 + 0x8d8) = *(longlong *)(param_1 + 0x8d8) + 1;
      }
      *(undefined4 *)(lVar5 + 0xcc) = 2;
LAB_1452e48ee:
      if ((*(byte *)((longlong)piVar2 + 0xd) & 1) != 0) {
        FUN_145513a20(lVar5,2);
      }
      if (((*(byte *)(lVar5 + 0xd5) & 3) == 3) &&
         (uVar6 = FUN_1452e10f0(param_1,*(undefined4 *)(lVar5 + 0xa8),0), (int)uVar6 < -900)) {
        return uVar6;
      }
      if ((*(longlong *)(piVar2 + 0x1a) != 0) &&
         (uVar6 = FUN_1452e6590(param_1,1,piVar2[2],piVar2 + 0x18), (int)uVar6 < -900)) {
        return uVar6;
      }
      return 0;
    }
    if (cVar1 == '\x02') {
      if (*(char *)(param_1 + 0x9aa) != '\0') {
        return 0;
      }
      lVar5 = FUN_145511540(param_1,piVar2[2]);
      if (lVar5 == 0) {
        iVar4 = FUN_1452e2be0(param_1,piVar2[2]);
        if (iVar4 == 0) {
          return 0;
        }
        lVar5 = FUN_1452e0d80();
        if (lVar5 == 0) {
          return 0xfffffc7b;
        }
      }
      else {
        uVar6 = FUN_1452e2900(param_1,lVar5,piVar2 + 4);
        if ((int)uVar6 < -900) {
          return uVar6;
        }
      }
      uVar6 = FUN_1452e1310(param_1);
      if (-0x385 < (int)uVar6) {
        return 0;
      }
      return uVar6;
    }
    if (cVar1 != '\x03') {
      if (cVar1 == '\a') {
        if ((*(byte *)(piVar2 + 0x18) & 2) != 0) {
          return 0;
        }
        bVar3 = *(byte *)(param_1 + 0x9ab);
        if ((*(byte *)(piVar2 + 0x18) & 1) != 0) {
          bVar3 = bVar3 | 2;
        }
        *(byte *)(param_1 + 0x9ab) = bVar3 | 4;
        uVar6 = FUN_1452e43b0(param_1,piVar2[4],1);
      }
      else {
        if (cVar1 != '\b') {
          return 0;
        }
        if (piVar2[2] == 0) {
          *(undefined1 *)(param_1 + 0x9ac) = 0;
          if ((*(byte *)(param_1 + 0x99c) & 1) == 0) {
            uVar6 = FUN_1452e2a90(param_1,0);
          }
          else {
            uVar6 = FUN_1452e44e0();
          }
        }
        else {
          lVar5 = FUN_145511540(param_1);
          if (lVar5 == 0) {
            return 0;
          }
          if ((*(byte *)(lVar5 + 0xd4) & 2) != 0) {
            return 0;
          }
          if (*(int *)(lVar5 + 0xcc) == 5) {
            return 0;
          }
          *(undefined1 *)(lVar5 + 0xd7) = 0;
          if ((*(byte *)(lVar5 + 0xd5) & 1) != 0) {
            return 0;
          }
          if ((*(byte *)(param_1 + 0x99c) & 1) == 0) {
            uVar6 = FUN_1452e2b30(param_1,lVar5,0,1);
          }
          else {
            uVar6 = FUN_1452e4490();
          }
        }
      }
      goto LAB_1452e4606;
    }
    iVar7 = piVar2[4];
    iVar4 = piVar2[2];
  }
  uVar6 = FUN_1452e10f0(param_1,iVar4,iVar7);
LAB_1452e4606:
  if (-0x385 < (int)uVar6) {
    return 0;
  }
  return uVar6;
}



// FUNCTION 1452e49e0 FUN_1452e49e0 body=301 status=ok
// SIG undefined FUN_1452e49e0(void)

undefined8 FUN_1452e49e0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  plVar1 = (longlong *)(param_1 + 0x140);
  lVar4 = *plVar1;
  lVar2 = param_1 + 0x880;
  if (*(char *)(lVar4 + 0xc) == '\0') {
    if (*(char *)(lVar4 + 0x71) == '\0') {
      *(undefined1 *)(lVar4 + 0x72) = 0;
      lVar4 = FUN_145511540(param_1,*(undefined4 *)(lVar4 + 8));
      if (((lVar4 == 0) || ((*(byte *)(lVar4 + 0xd4) & 2) != 0)) || (*(int *)(lVar4 + 0xcc) == 5)) {
        lVar4 = 0;
      }
      iVar3 = FUN_1452e3770(param_1,lVar4);
      if (iVar3 == 0) {
        *plVar1 = 0;
        FUN_1455134b0(0,lVar2);
        FUN_1455112a0(lVar2,*plVar1);
        *plVar1 = 0;
        FUN_145511c80(param_1 + 0x148);
        *(undefined4 *)(param_1 + 0x188) = 0;
      }
      else {
        if ((lVar4 != 0) && (uVar5 = FUN_1455140c0(lVar4), (int)uVar5 < -900)) {
          return uVar5;
        }
        FUN_1452e30e0(plVar1,lVar2);
      }
      return 0;
    }
  }
  else {
    if (((*(char *)(lVar4 + 0xc) - 1U & 0xfb) == 0) &&
       (iVar3 = FUN_145511d80(param_1 + 0x148), iVar3 != 0)) {
      *(undefined8 *)(param_1 + 0x150) = **(undefined8 **)(param_1 + 0x150);
      return 0;
    }
    lVar4 = *plVar1;
  }
  FUN_1455134b0(lVar4,lVar2);
  FUN_1455112a0(lVar2,*plVar1);
  *plVar1 = 0;
  FUN_145511c80(param_1 + 0x148);
  *(undefined4 *)(param_1 + 0x188) = 0;
  return 0;
}



// FUNCTION 1452e4b10 FUN_1452e4b10 body=1443 status=ok
// SIG undefined FUN_1452e4b10(void)

ulonglong FUN_1452e4b10(longlong param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  
  lVar1 = param_1 + 0x880;
  puVar2 = (undefined8 *)(param_1 + 0x148);
  uVar7 = FUN_1452e1310();
  if ((int)uVar7 < -900) {
    return uVar7;
  }
LAB_1452e4b62:
  do {
    iVar6 = *(int *)(param_1 + 0x188);
    if (iVar6 == 0) {
      lVar9 = *(longlong *)(param_1 + 0xf8);
      if (lVar9 == 0) {
        lVar9 = *(longlong *)(param_1 + 0x110);
        if (lVar9 == 0) {
          if ((*(ulonglong *)(param_1 + 0x8d8) < (ulonglong)*(uint *)(param_1 + 0x96c)) &&
             (lVar9 = *(longlong *)(param_1 + 0x128), lVar9 != 0)) {
            FUN_1455135a0();
            *(undefined1 *)(lVar9 + 0x90) = 0;
          }
          else {
            if (*(int *)(param_1 + 0x94c) < 1) {
              return 0;
            }
            lVar9 = FUN_1455145c0(param_1 + 0x20);
            if (lVar9 == 0) {
              return 0;
            }
          }
        }
        else {
          FUN_1455135a0();
          *(undefined1 *)(lVar9 + 0x90) = 0;
        }
      }
      else {
        FUN_1455135a0();
        *(undefined1 *)(lVar9 + 0x90) = 0;
      }
      uVar4 = FUN_1452e3940(param_1,lVar9);
      if (uVar4 == 0xfffffdf2) {
        return 0;
      }
      if (uVar4 != 0xfffffe04) {
        if ((int)uVar4 < 0) {
          uVar10 = 2;
          if ((((*(char *)(lVar9 + 0xc) != '\0') && (*(code **)(param_1 + 0x800) != (code *)0x0)) &&
              (-900 < (int)uVar4)) &&
             ((*(char *)(lVar9 + 0xc) != '\b' &&
              (iVar6 = (**(code **)(param_1 + 0x800))
                                 (param_1,lVar9,uVar4,*(undefined8 *)(param_1 + 0x8a8)), iVar6 != 0)
              ))) {
            FUN_1455134b0(lVar9,lVar1);
            FUN_1455112a0(lVar1,lVar9);
            return 0xfffffc7a;
          }
          if (*(char *)(lVar9 + 0xc) == '\x01') {
            if (*(int *)(lVar9 + 0x38) == 0) {
              iVar6 = *(int *)(lVar9 + 8);
              if (*(char *)(lVar9 + 0x7c) == '\0') {
                uVar10 = 7;
              }
              else {
                uVar10 = *(undefined4 *)(lVar9 + 0x78);
              }
              goto LAB_1452e4e45;
            }
          }
          else if (*(char *)(lVar9 + 0xc) == '\x05') {
            iVar6 = *(int *)(lVar9 + 0x28);
LAB_1452e4e45:
            if ((iVar6 != 0) && (uVar7 = FUN_1452e10f0(param_1,iVar6,uVar10), (int)uVar7 < -900)) {
              return uVar7;
            }
          }
          FUN_1455134b0(lVar9,lVar1);
          FUN_1455112a0(lVar1,lVar9);
          FUN_1455134b0(*(undefined8 *)(param_1 + 0x140),lVar1);
          FUN_1455112a0(lVar1,*(undefined8 *)(param_1 + 0x140));
          *(undefined8 *)(param_1 + 0x140) = 0;
          FUN_145511c80(puVar2);
          *(undefined4 *)(param_1 + 0x188) = 0;
          if (uVar4 == 0xfffffdf5) {
            uVar4 = FUN_1452e2d70(param_1,*(undefined4 *)(param_1 + 0x93c),2,0);
          }
          if ((int)uVar4 < -900) {
            return (ulonglong)uVar4;
          }
          goto LAB_1452e4b62;
        }
        *(longlong *)(param_1 + 0x140) = lVar9;
        *(undefined8 *)(param_1 + 0x150) = *puVar2;
        if (*(char *)(lVar9 + 0xc) == '\0') {
          if (*(char *)(lVar9 + 0x72) != '\0') {
            *(undefined4 *)(param_1 + 0x188) = 2;
            goto LAB_1452e4b62;
          }
        }
        else if (*(code **)(param_1 + 0x7f0) != (code *)0x0) {
          iVar6 = (**(code **)(param_1 + 0x7f0))(param_1,lVar9,*(undefined8 *)(param_1 + 0x8a8));
          if (iVar6 == -0x217) {
            uVar10 = 2;
            if ((*(code **)(param_1 + 0x800) != (code *)0x0) &&
               (iVar6 = (**(code **)(param_1 + 0x800))
                                  (param_1,lVar9,0xfffffde9,*(undefined8 *)(param_1 + 0x8a8)),
               iVar6 != 0)) {
              return 0xfffffc7a;
            }
            if (*(char *)(lVar9 + 0xc) == '\x01') {
              if (*(int *)(lVar9 + 0x38) == 0) {
                iVar6 = *(int *)(lVar9 + 8);
                uVar10 = 7;
                goto LAB_1452e4f6d;
              }
            }
            else if (*(char *)(lVar9 + 0xc) == '\x05') {
              iVar6 = *(int *)(lVar9 + 0x28);
LAB_1452e4f6d:
              if (iVar6 != 0) {
                uVar7 = FUN_1452e10f0(param_1,iVar6,uVar10);
                goto LAB_1452e4f7c;
              }
            }
            goto LAB_1452e4f87;
          }
          if (iVar6 != 0) {
            return 0xfffffc7a;
          }
        }
        *(undefined4 *)(param_1 + 0x188) = 1;
      }
      goto LAB_1452e4b62;
    }
    if (iVar6 != 1) {
      if (iVar6 == 2) {
        lVar9 = *(longlong *)(param_1 + 0x140);
        lVar8 = FUN_145511540(param_1,*(undefined4 *)(lVar9 + 8));
        if (((lVar8 == 0) || ((*(byte *)(lVar8 + 0xd4) & 2) != 0)) || (*(int *)(lVar8 + 0xcc) == 5))
        goto LAB_1452e4b95;
        plVar3 = *(longlong **)(param_1 + 0x140);
        uVar4 = (**(code **)(param_1 + 0x850))
                          (param_1,plVar3,*(undefined8 *)(*(longlong *)(param_1 + 0x150) + 0x18),
                           *plVar3 - plVar3[2],plVar3 + 0xc,*(undefined8 *)(param_1 + 0x8a8));
        if (((0x16 < uVar4 + 0x20e) || ((0x400021U >> (uVar4 + 0x20e & 0x1f) & 1) == 0)) &&
           (uVar4 != 0)) {
          return 0xfffffc7a;
        }
        if ((int)uVar4 < -900) {
          return (ulonglong)uVar4;
        }
        if (uVar4 != 0xfffffdf7) {
          if (uVar4 == 0xfffffe08) {
            return 0;
          }
          uVar5 = FUN_1452e4520(param_1);
          if ((int)uVar5 < 0) {
            if (-0x385 < (int)uVar5) {
              _wassert(L"nghttp2_is_fatal(rv)",
                       L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c"
                       ,0xc6a);
              return (ulonglong)uVar5;
            }
            return (ulonglong)uVar5;
          }
          uVar5 = FUN_1452e49e0(param_1);
          if ((int)uVar5 < 0) {
            if (-0x385 < (int)uVar5) {
              _wassert(L"nghttp2_is_fatal(rv)",
                       L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c"
                       ,0xc6f);
              return (ulonglong)uVar5;
            }
            return (ulonglong)uVar5;
          }
          if (uVar4 == 0xfffffdf2) {
            return 0;
          }
          goto LAB_1452e4b62;
        }
        uVar7 = FUN_1455140c0(lVar8);
        if ((int)uVar7 < -900) {
          return uVar7;
        }
        uVar7 = FUN_1452e0810(param_1,*(undefined4 *)(lVar9 + 8),2);
LAB_1452e4f7c:
        if ((int)uVar7 < -900) {
          return uVar7;
        }
LAB_1452e4f87:
        FUN_1455134b0(*(undefined8 *)(param_1 + 0x140),lVar1);
        FUN_1455112a0(lVar1,*(undefined8 *)(param_1 + 0x140));
      }
      else {
        if (iVar6 != 3) goto LAB_1452e4b62;
        lVar9 = *(longlong *)(param_1 + 0x150);
        lVar8 = *(longlong *)(lVar9 + 0x18);
        if (lVar8 != *(longlong *)(lVar9 + 0x20)) goto LAB_1452e5078;
LAB_1452e4b95:
        FUN_1455134b0(*(undefined8 *)(param_1 + 0x140),lVar1);
        FUN_1455112a0(lVar1,*(undefined8 *)(param_1 + 0x140));
      }
      *(undefined8 *)(param_1 + 0x140) = 0;
      FUN_145511c80(puVar2);
      *(undefined4 *)(param_1 + 0x188) = 0;
      goto LAB_1452e4b62;
    }
    lVar9 = *(longlong *)(param_1 + 0x150);
    lVar8 = *(longlong *)(lVar9 + 0x18);
    if (lVar8 != *(longlong *)(lVar9 + 0x20)) {
LAB_1452e5078:
      *param_2 = lVar8;
      uVar7 = *(longlong *)(lVar9 + 0x20) - *(longlong *)(lVar9 + 0x18);
      *(ulonglong *)(lVar9 + 0x18) = *(longlong *)(lVar9 + 0x18) + uVar7;
      return uVar7;
    }
    if (param_3 == 0) {
      uVar4 = FUN_1452e4520(param_1);
      if ((int)uVar4 < 0) {
        if (-0x385 < (int)uVar4) {
          _wassert(L"nghttp2_is_fatal(rv)",
                   L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c"
                   ,0xc22);
          return (ulonglong)uVar4;
        }
        return (ulonglong)uVar4;
      }
    }
    uVar4 = FUN_1452e49e0(param_1);
    if ((int)uVar4 < 0) {
      if (-0x385 < (int)uVar4) {
        _wassert(L"nghttp2_is_fatal(rv)",
                 L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c"
                 ,0xc29);
        return (ulonglong)uVar4;
      }
      return (ulonglong)uVar4;
    }
  } while( true );
}



// FUNCTION 1452e50c0 FUN_1452e50c0 body=58 status=ok
// SIG undefined FUN_1452e50c0(void)

undefined8 FUN_1452e50c0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0x810) != (code *)0x0) {
    uVar1 = (**(code **)(param_1 + 0x810))(param_1,param_2,*(undefined8 *)(param_1 + 0x8a8));
    if ((int)uVar1 == -0x209) {
      return uVar1;
    }
    if ((int)uVar1 != 0) {
      return 0xfffffc7a;
    }
  }
  return 0;
}



// FUNCTION 1452e5100 FUN_1452e5100 body=83 status=ok
// SIG undefined FUN_1452e5100(void)

undefined8 FUN_1452e5100(undefined4 param_1)

{
  switch(param_1) {
  case 0xfffffdeb:
    return 7;
  case 0xfffffdec:
  case 0xfffffded:
  case 0xfffffe07:
    return 1;
  default:
    return 2;
  case 0xfffffdf4:
    return 3;
  case 0xfffffdf5:
    return 9;
  case 0xfffffdf6:
    return 6;
  case 0xfffffe02:
    return 5;
  }
}



// FUNCTION 1452e5190 FUN_1452e5190 body=126 status=ok
// SIG undefined FUN_1452e5190(void)

undefined8 FUN_1452e5190(longlong param_1,ulonglong param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  param_2 = param_2 & 0xffffffff;
  uVar1 = FUN_1452e5100(param_4);
  uVar3 = FUN_1452e0810(param_1,param_2 & 0xffffffff,uVar1);
  if ((int)uVar3 == 0) {
    if (*(code **)(param_1 + 0x7e0) != (code *)0x0) {
      iVar2 = (**(code **)(param_1 + 0x7e0))
                        (param_1,param_3,param_4,*(undefined8 *)(param_1 + 0x8a8));
      if (iVar2 != 0) {
        return 0xfffffc7a;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1452e5210 FUN_1452e5210 body=112 status=ok
// SIG undefined FUN_1452e5210(void)

undefined8 FUN_1452e5210(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (*(code **)(param_1 + 0x7e0) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x7e0))();
    if (iVar1 != 0) {
      return 0xfffffc7a;
    }
  }
  uVar2 = FUN_1452e5100(param_3);
  uVar3 = FUN_1452e2d70(param_1,*(undefined4 *)(param_1 + 0x93c),uVar2,param_4);
  return uVar3;
}



// FUNCTION 1452e5280 FUN_1452e5280 body=1119 status=ok
// SIG undefined FUN_1452e5280(void)

ulonglong FUN_1452e5280(longlong param_1,longlong param_2,longlong *param_3,longlong param_4,
                       longlong param_5,undefined4 param_6,int param_7)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  uint local_res8 [2];
  undefined8 in_stack_ffffffffffffff80;
  undefined4 uVar10;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_stack_ffffffffffffff90;
  undefined4 uVar11;
  longlong local_58;
  longlong local_50;
  undefined1 local_44;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff80 >> 0x20);
  *param_3 = 0;
  bVar6 = false;
  lVar3 = FUN_145511540(param_1,*(undefined4 *)(param_2 + 8));
  if (((lVar3 == 0) || ((*(byte *)(lVar3 + 0xd4) & 2) != 0)) || (*(int *)(lVar3 + 0xcc) == 5)) {
    lVar3 = 0;
  }
  bVar7 = bVar6;
  if (*(char *)(param_2 + 0xc) == '\x05') {
    lVar3 = FUN_145511540(param_1,*(undefined4 *)(param_2 + 0x28));
    if (((lVar3 == 0) || ((*(byte *)(lVar3 + 0xd4) & 2) != 0)) ||
       (bVar7 = false, *(int *)(lVar3 + 0xcc) == 5)) {
      lVar3 = 0;
      bVar7 = bVar6;
    }
  }
  else if ((lVar3 != 0) && (*(char *)(param_2 + 0xc) == '\x01')) {
    if (*(char *)(param_1 + 0x9aa) == '\0') {
      if ((*(int *)(param_2 + 0x38) == 3) && ((*(ushort *)(lVar3 + 0xd2) & 0x4000) == 0)) {
        bVar7 = true;
      }
    }
    else {
      bVar7 = *(int *)(param_2 + 0x38) == 3;
    }
  }
  uVar8 = CONCAT44(uVar10,param_6);
  local_res8[0] = 0;
  uVar4 = FUN_14550ead0(param_1 + 0x6d8,&local_58,local_res8,param_4,param_5,uVar8);
  if (-0x385 < (int)uVar4) {
    while( true ) {
      uVar10 = (undefined4)((ulonglong)uVar8 >> 0x20);
      if ((int)uVar4 < 0) break;
      lVar5 = (longlong)(int)uVar4;
      param_4 = param_4 + lVar5;
      param_5 = param_5 - lVar5;
      *param_3 = *param_3 + lVar5;
      if (((param_7 != 0) && ((local_res8[0] & 2) != 0)) && (lVar3 != 0)) {
        if ((~(*(uint *)(param_1 + 0x99c) >> 2) & 1) == 0) {
LAB_1452e54fb:
          if (*(code **)(param_1 + 0x820) == (code *)0x0) {
            if (*(code **)(param_1 + 0x818) == (code *)0x0) goto LAB_1452e5597;
            in_stack_ffffffffffffff90 = *(undefined8 *)(param_1 + 0x8a8);
            uVar8 = *(undefined8 *)(local_50 + 0x18);
            uVar4 = (**(code **)(param_1 + 0x818))
                              (param_1,param_2,*(undefined8 *)(local_58 + 0x10),
                               *(undefined8 *)(local_58 + 0x18),*(undefined8 *)(local_50 + 0x10),
                               uVar8,local_44,in_stack_ffffffffffffff90);
            uVar10 = (undefined4)((ulonglong)uVar8 >> 0x20);
          }
          else {
            uVar8 = *(undefined8 *)(param_1 + 0x8a8);
            uVar4 = (**(code **)(param_1 + 0x820))(param_1,param_2,local_58,local_50,local_44,uVar8)
            ;
            uVar10 = (undefined4)((ulonglong)uVar8 >> 0x20);
          }
          iVar1 = (int)uVar4;
          if ((iVar1 == -0x20e) || (iVar1 == -0x209)) {
            if (iVar1 != 0) {
              return uVar4;
            }
          }
          else if (iVar1 != 0) {
            return 0xfffffc7a;
          }
        }
        else {
          iVar1 = FUN_145514880(param_1,lVar3,param_2,&local_58,bVar7);
          uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
          if (iVar1 == -0x69) {
            if (*(code **)(param_1 + 0x830) == (code *)0x0) {
              if (*(code **)(param_1 + 0x828) == (code *)0x0) goto LAB_1452e55e9;
              uVar8 = *(undefined8 *)(param_1 + 0x8a8);
              uVar9 = *(undefined8 *)(local_50 + 0x18);
              uVar4 = (**(code **)(param_1 + 0x828))
                                (param_1,param_2,*(undefined8 *)(local_58 + 0x10),
                                 *(undefined8 *)(local_58 + 0x18),*(undefined8 *)(local_50 + 0x10),
                                 uVar9,local_44,uVar8);
              uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
              uVar11 = (undefined4)((ulonglong)uVar8 >> 0x20);
            }
            else {
              uVar8 = *(undefined8 *)(param_1 + 0x8a8);
              uVar4 = (**(code **)(param_1 + 0x830))
                                (param_1,param_2,local_58,local_50,local_44,uVar8);
              uVar10 = (undefined4)((ulonglong)uVar8 >> 0x20);
            }
            iVar1 = (int)uVar4;
            if (iVar1 == -0x20e) {
              return uVar4;
            }
            if (iVar1 == -0x209) {
LAB_1452e55e9:
              uVar4 = FUN_1452e2c30(param_1,0xfffffded,
                                    "Invalid HTTP header field was received: frame type: %u, stream: %d, name: [%.*s], value: [%.*s]"
                                    ,*(undefined1 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 8),
                                    CONCAT44(uVar10,*(undefined4 *)(local_58 + 0x18)),
                                    *(undefined8 *)(local_58 + 0x10),
                                    CONCAT44(uVar11,*(undefined4 *)(local_50 + 0x18)),
                                    *(undefined8 *)(local_50 + 0x10));
              if ((int)uVar4 < -900) {
                return uVar4;
              }
              uVar2 = FUN_1452e5190(param_1,*(undefined4 *)(lVar3 + 0xa8),param_2,0xfffffded);
              if ((int)uVar2 < -900) {
                return (ulonglong)uVar2;
              }
              return 0xfffffdf7;
            }
            if (iVar1 != 0) {
              return 0xfffffc7a;
            }
            in_stack_ffffffffffffff90 = CONCAT44(uVar11,*(undefined4 *)(local_50 + 0x18));
            uVar8 = CONCAT44(uVar10,*(undefined4 *)(local_58 + 0x18));
            uVar4 = FUN_1452e2c30(param_1,0xfffffded,
                                  "Ignoring received invalid HTTP header field: frame type: %u, stream: %d, name: [%.*s], value: [%.*s]"
                                  ,*(undefined1 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 8),uVar8
                                  ,*(undefined8 *)(local_58 + 0x10),in_stack_ffffffffffffff90,
                                  *(undefined8 *)(local_50 + 0x10));
            uVar10 = (undefined4)((ulonglong)uVar8 >> 0x20);
            if ((int)uVar4 < -900) {
              return uVar4;
            }
          }
          else {
            if (iVar1 == -0x213) goto LAB_1452e55e9;
            if (iVar1 == 0) goto LAB_1452e54fb;
          }
        }
      }
LAB_1452e5597:
      if ((local_res8[0] & 1) != 0) {
        FUN_14550e820(param_1 + 0x6d8);
        return 0;
      }
      if (((local_res8[0] & 2) == 0) && (param_5 == 0)) {
        return 0;
      }
      uVar8 = CONCAT44(uVar10,param_6);
      local_res8[0] = 0;
      uVar4 = FUN_14550ead0(param_1 + 0x6d8,&local_58,local_res8,param_4,param_5,uVar8);
      if ((int)uVar4 < -900) {
        return uVar4;
      }
    }
    if (((*(int *)(param_1 + 0x270) != 4) || (lVar3 == 0)) ||
       ((*(int *)(lVar3 + 0xcc) == 3 ||
        (uVar4 = FUN_1452e0810(param_1,*(undefined4 *)(lVar3 + 0xa8),9), -0x385 < (int)uVar4)))) {
      uVar2 = FUN_1452e2d70(param_1,*(undefined4 *)(param_1 + 0x93c),9);
      uVar4 = 0xfffffdf5;
      if ((int)uVar2 < -900) {
        uVar4 = (ulonglong)uVar2;
      }
    }
  }
  return uVar4;
}



// FUNCTION 1452e56e0 FUN_1452e56e0 body=579 status=ok
// SIG undefined FUN_1452e56e0(void)

undefined8 FUN_1452e56e0(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  lVar1 = param_1 + 400;
  lVar4 = FUN_145511540(param_1,*(undefined4 *)(param_1 + 0x198));
  if (lVar4 == 0) {
    return 0;
  }
  if ((*(byte *)(lVar4 + 0xd4) & 2) != 0) {
    return 0;
  }
  if ((*(int *)(lVar4 + 0xcc) - 3U & 0xfffffffd) == 0) {
    return 0;
  }
  if ((~(*(uint *)(param_1 + 0x99c) >> 2) & 1) == 0) {
LAB_1452e589f:
    if ((*(code **)(param_1 + 0x7d8) != (code *)0x0) &&
       (iVar3 = (**(code **)(param_1 + 0x7d8))(param_1,lVar1,*(undefined8 *)(param_1 + 0x8a8)),
       iVar3 != 0)) {
      return 0xfffffc7a;
    }
    if (((*(char *)(param_1 + 0x19c) == '\x01') && ((*(byte *)(param_1 + 0x19d) & 1) != 0)) &&
       ((FUN_145513a20(lVar4,1), (*(byte *)(lVar4 + 0xd5) & 3) == 3 &&
        (uVar6 = FUN_1452e10f0(param_1,*(undefined4 *)(lVar4 + 0xa8),0), (int)uVar6 < -900)))) {
      return uVar6;
    }
  }
  else {
    if (*(char *)(param_1 + 0x19c) == '\x05') {
      lVar5 = FUN_145511540(param_1,*(undefined4 *)(param_1 + 0x1b8));
      if (((lVar5 == 0) || ((*(byte *)(lVar5 + 0xd4) & 2) != 0)) || (*(int *)(lVar5 + 0xcc) == 5))
      goto LAB_1452e589f;
      iVar3 = FUN_145514c70(lVar5,lVar1);
LAB_1452e583e:
      if (iVar3 == 0) goto LAB_1452e589f;
    }
    else {
      if (*(char *)(param_1 + 0x19c) != '\x01') {
        _wassert(L"frame->hd.type == NGHTTP2_HEADERS",
                 L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c"
                 ,0xeb8);
      }
      iVar3 = *(int *)(param_1 + 0x1c8);
      if (iVar3 != 0) {
        if ((iVar3 == 1) || (iVar3 == 2)) {
LAB_1452e580a:
          iVar3 = FUN_145514d20(lVar4);
          goto LAB_1452e582c;
        }
        if (iVar3 == 3) {
          if ((*(ushort *)(lVar4 + 0xd2) & 0x4000) == 0) {
            iVar3 = FUN_145514dc0(lVar4,lVar1);
            goto LAB_1452e582c;
          }
          if (*(char *)(param_1 + 0x9aa) != '\0') {
            _wassert(L"!session->server",
                     L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c"
                     ,0xec3);
          }
          goto LAB_1452e580a;
        }
        _wassert(L"0",
                 L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c"
                 ,0xeca);
LAB_1452e5830:
        if ((*(byte *)(param_1 + 0x19d) & 1) == 0) goto LAB_1452e589f;
        iVar3 = FUN_145514dd0(lVar4);
        goto LAB_1452e583e;
      }
      iVar3 = FUN_145514c70(lVar4,lVar1);
LAB_1452e582c:
      if (iVar3 == 0) goto LAB_1452e5830;
    }
    if (*(char *)(param_1 + 0x19c) == '\x05') {
      uVar2 = *(undefined4 *)(param_1 + 0x1b8);
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x198);
    }
    uVar6 = FUN_1452e5190(param_1,uVar2,lVar1,0xfffffdec);
    if ((int)uVar6 < -900) {
      return uVar6;
    }
    if ((*(char *)(param_1 + 0x19c) == '\x01') && ((*(byte *)(param_1 + 0x19d) & 1) != 0)) {
      FUN_145513a20(lVar4,1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1452e5930 FUN_1452e5930 body=732 status=ok
// SIG undefined FUN_1452e5930(void)

undefined1 * FUN_1452e5930(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  char *pcVar8;
  
  lVar1 = param_1 + 400;
  iVar3 = FUN_1455120f0(lVar1,*(undefined8 *)(param_1 + 0x208));
  if (iVar3 != 0) {
    puVar4 = (undefined1 *)
             FUN_1452e2d70(param_1,*(undefined4 *)(param_1 + 0x93c),1,"HEADERS: could not unpack");
    return puVar4;
  }
  lVar5 = FUN_145511540(param_1,*(undefined4 *)(param_1 + 0x198));
  if (((lVar5 == 0) || ((*(byte *)(lVar5 + 0xd4) & 2) != 0)) ||
     (iVar3 = *(int *)(lVar5 + 0xcc), iVar3 == 5)) {
    *(undefined4 *)(param_1 + 0x1c8) = 0;
    puVar4 = (undefined1 *)FUN_1452e1440(param_1,lVar1);
    return puVar4;
  }
  if (iVar3 == 4) {
    *(undefined4 *)(param_1 + 0x1c8) = 2;
    puVar4 = (undefined1 *)FUN_1452e1810(param_1,lVar1,lVar5);
    return puVar4;
  }
  if ((iVar3 == 1) && (uVar6 = *(uint *)(param_1 + 0x198), uVar6 != 0)) {
    uVar2 = ~uVar6;
    if (*(char *)(param_1 + 0x9aa) == '\0') {
      uVar2 = uVar6;
    }
    if ((uVar2 & 1) == 0) goto LAB_1452e5b45;
    *(undefined4 *)(param_1 + 0x1c8) = 1;
    if (*(int *)(lVar5 + 0xcc) == 1) {
      if (*(char *)(param_1 + 0x9aa) != '\0') {
        uVar6 = ~uVar6;
      }
      if ((uVar6 & 1) == 0) goto LAB_1452e5a25;
LAB_1452e5aa9:
      if ((*(byte *)(lVar5 + 0xd5) & 1) == 0) {
        *(undefined4 *)(lVar5 + 0xcc) = 2;
        if (*(code **)(param_1 + 0x810) == (code *)0x0) {
          return (undefined1 *)0x0;
        }
        iVar3 = (**(code **)(param_1 + 0x810))(param_1,lVar1,*(undefined8 *)(param_1 + 0x8a8));
        if (iVar3 == -0x209) {
          return (undefined1 *)0xfffffdf7;
        }
        if (iVar3 != 0) {
          return (undefined1 *)0xfffffc7a;
        }
        return (undefined1 *)0x0;
      }
      goto LAB_1452e5ab2;
    }
LAB_1452e5a25:
    _wassert(L"stream->state == NGHTTP2_STREAM_OPENING && nghttp2_session_is_my_stream_id(session, frame->hd.stream_id)"
             ,L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_session.c",
             0xf64);
    if (*(int *)(param_1 + 0x198) != 0) goto LAB_1452e5aa9;
    if ((*(code **)(param_1 + 0x7e0) != (code *)0x0) &&
       (iVar3 = (**(code **)(param_1 + 0x7e0))
                          (param_1,lVar1,0xfffffe07,*(undefined8 *)(param_1 + 0x8a8)), iVar3 != 0))
    {
      return (undefined1 *)0xfffffc7a;
    }
    pcVar8 = "response HEADERS: stream_id == 0";
  }
  else {
LAB_1452e5b45:
    uVar6 = *(uint *)(param_1 + 0x198);
    *(undefined4 *)(param_1 + 0x1c8) = 3;
    if (uVar6 != 0) {
      if ((*(byte *)(lVar5 + 0xd5) & 1) == 0) {
        if (*(char *)(param_1 + 0x9aa) != '\0') {
          uVar6 = ~uVar6;
        }
        if ((uVar6 & 1) != 0) {
          if (*(int *)(lVar5 + 0xcc) != 2) {
            return &DAT_ffffff99;
          }
          puVar4 = (undefined1 *)FUN_1452e50c0(param_1,lVar1);
          return puVar4;
        }
        if (*(int *)(lVar5 + 0xcc) == 3) {
          return &DAT_ffffff99;
        }
        puVar4 = (undefined1 *)FUN_1452e50c0(param_1,lVar1);
        return puVar4;
      }
LAB_1452e5ab2:
      if ((*(code **)(param_1 + 0x7e0) != (code *)0x0) &&
         (iVar3 = (**(code **)(param_1 + 0x7e0))
                            (param_1,lVar1,0xfffffe02,*(undefined8 *)(param_1 + 0x8a8)), iVar3 != 0)
         ) {
        return (undefined1 *)0xfffffc7a;
      }
      pcVar8 = "HEADERS: stream closed";
      uVar7 = 5;
      goto LAB_1452e5a7b;
    }
    if ((*(code **)(param_1 + 0x7e0) != (code *)0x0) &&
       (iVar3 = (**(code **)(param_1 + 0x7e0))
                          (param_1,lVar1,0xfffffe07,*(undefined8 *)(param_1 + 0x8a8)), iVar3 != 0))
    {
      return (undefined1 *)0xfffffc7a;
    }
    pcVar8 = "HEADERS: stream_id == 0";
  }
  uVar7 = 1;
LAB_1452e5a7b:
  puVar4 = (undefined1 *)FUN_1452e2d70(param_1,*(undefined4 *)(param_1 + 0x93c),uVar7,pcVar8);
  if (-0x385 < (int)puVar4) {
    return &DAT_ffffff99;
  }
  return puVar4;
}



// FUNCTION 1452e5c10 FUN_1452e5c10 body=113 status=ok
// SIG undefined FUN_1452e5c10(void)

undefined8 FUN_1452e5c10(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_145513b40(param_1,*(undefined4 *)(param_2 + 1),
                        *(undefined4 *)((longlong)param_2 + 0xc));
  if (iVar1 != 0) {
    uVar2 = FUN_1452e0810(*param_2,*(undefined4 *)(param_1 + 0xa8),3);
    return uVar2;
  }
  if (((0 < *(int *)(param_1 + 0xac)) && (iVar1 = FUN_145513b20(param_1), iVar1 != 0)) &&
     (uVar2 = FUN_145513a90(param_1,4), (int)uVar2 < -900)) {
    return uVar2;
  }
  return 0;
}



// FUNCTION 1452e5c90 FUN_1452e5c90 body=151 status=ok
// SIG undefined FUN_1452e5c90(void)

undefined8 FUN_1452e5c90(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_145513b80(param_1,(int)param_2[1],*(undefined4 *)((longlong)param_2 + 0xc));
  if (iVar1 != 0) {
    uVar2 = FUN_1452e0810(*param_2,*(undefined4 *)(param_1 + 0xa8),3);
    return uVar2;
  }
  if ((((*(byte *)(*param_2 + 0x99c) & 1) == 0) && (*(char *)(param_1 + 0xd7) == '\0')) &&
     (iVar1 = FUN_1452e70d0(*(undefined4 *)(param_1 + 0xbc),*(undefined4 *)(param_1 + 0xb0)),
     iVar1 != 0)) {
    uVar2 = FUN_1452e0a40(*param_2,0,*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0)
                         );
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  return 0;
}



// FUNCTION 1452e5d30 FUN_1452e5d30 body=557 status=ok
// SIG undefined FUN_1452e5d30(void)

undefined8 FUN_1452e5d30(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)(param_2 + 8);
  if (uVar1 != 0) {
    uVar3 = uVar1;
    if (*(char *)(param_1 + 0x9aa) != '\0') {
      uVar3 = ~uVar1;
    }
    if ((uVar3 & 1) == 0) {
      uVar3 = uVar1 & 1 ^ 1;
      if (*(char *)(param_1 + 0x9aa) == '\0') {
        uVar3 = uVar1 & 1;
      }
      if (uVar3 != 0) goto LAB_1452e5dde;
      iVar4 = *(int *)(param_1 + 0x938);
      iVar2 = iVar4 - uVar1;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x934);
      iVar2 = iVar4 - uVar1;
    }
    if (SBORROW4(iVar4,uVar1) != iVar2 < 0) {
      if ((*(code **)(param_1 + 0x7e0) != (code *)0x0) &&
         (iVar4 = (**(code **)(param_1 + 0x7e0))
                            (param_1,param_2,0xfffffe07,*(undefined8 *)(param_1 + 0x8a8)),
         iVar4 != 0)) {
        return 0xfffffc7a;
      }
      uVar5 = FUN_1452e2d70(param_1,*(undefined4 *)(param_1 + 0x93c),1,
                            "WINDOW_UPDATE to idle stream");
      return uVar5;
    }
  }
LAB_1452e5dde:
  lVar6 = FUN_145511540(param_1);
  if (((lVar6 != 0) && ((*(byte *)(lVar6 + 0xd4) & 2) == 0)) && (*(int *)(lVar6 + 0xcc) != 5)) {
    if (*(int *)(lVar6 + 0xcc) == 4) {
      uVar1 = *(uint *)(lVar6 + 0xa8);
      if (uVar1 == 0) {
LAB_1452e5e38:
        if ((*(code **)(param_1 + 0x7e0) != (code *)0x0) &&
           (iVar4 = (**(code **)(param_1 + 0x7e0))
                              (param_1,param_2,0xfffffe07,*(undefined8 *)(param_1 + 0x8a8)),
           iVar4 != 0)) {
          return 0xfffffc7a;
        }
        uVar5 = FUN_1452e2d70(param_1,*(undefined4 *)(param_1 + 0x93c),1,
                              "WINDOW_UPADATE to reserved stream");
        return uVar5;
      }
      uVar3 = ~uVar1;
      if (*(char *)(param_1 + 0x9aa) == '\0') {
        uVar3 = uVar1;
      }
      if ((uVar3 & 1) == 0) goto LAB_1452e5e38;
    }
    iVar4 = *(int *)(param_2 + 0x10);
    if (iVar4 == 0) {
      uVar5 = FUN_1452e5210(param_1,param_2,0xfffffe07,"WINDOW_UPDATE: window_size_increment == 0");
      return uVar5;
    }
    if (0x7fffffff - iVar4 < *(int *)(lVar6 + 0xac)) {
      uVar5 = FUN_1452e5190(param_1,*(undefined4 *)(param_2 + 8),param_2,0xfffffdf4);
      return uVar5;
    }
    iVar4 = *(int *)(lVar6 + 0xac) + iVar4;
    *(int *)(lVar6 + 0xac) = iVar4;
    if (((0 < iVar4) && (iVar4 = FUN_145513b20(lVar6), iVar4 != 0)) &&
       (uVar5 = FUN_145513a90(lVar6,4), (int)uVar5 < -900)) {
      return uVar5;
    }
    if ((*(code **)(param_1 + 0x7d8) != (code *)0x0) &&
       (iVar4 = (**(code **)(param_1 + 0x7d8))(param_1,param_2,*(undefined8 *)(param_1 + 0x8a8)),
       iVar4 != 0)) {
      return 0xfffffc7a;
    }
  }
  return 0;
}



// FUNCTION 1452e5f60 FUN_1452e5f60 body=265 status=ok
// SIG undefined FUN_1452e5f60(void)

undefined8 FUN_1452e5f60(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 uVar3;
  int iVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x230);
  lVar1 = param_1 + 400;
  lVar5 = *(longlong *)(param_1 + 0x238);
  uVar3 = FUN_1452e6ef0(*(undefined8 *)(param_1 + 0x208));
  FUN_145512b30(lVar1,uVar3,lVar2,lVar5 - lVar2);
  FUN_1455118f0(param_1 + 0x220,0,0);
  lVar2 = *(longlong *)(param_1 + 0x1a0);
  lVar5 = *(longlong *)(lVar2 + 8);
  if (*(int *)(param_1 + 0x198) == 0) {
    if (lVar5 == 0) goto LAB_1452e5fce;
  }
  else {
    if (lVar5 != 0) goto LAB_1452e5fce;
    lVar5 = FUN_145511540(param_1);
    if (lVar5 == 0) {
      return 0;
    }
    if ((*(byte *)(lVar5 + 0xd4) & 2) != 0) {
      return 0;
    }
    if (*(int *)(lVar5 + 0xcc) == 5) {
      return 0;
    }
    if (*(int *)(lVar5 + 0xcc) == 3) {
      return 0;
    }
  }
  if (*(longlong *)(lVar2 + 0x18) != 0) {
    if (*(code **)(param_1 + 0x7d8) == (code *)0x0) {
      return 0;
    }
    iVar4 = (**(code **)(param_1 + 0x7d8))(param_1,lVar1,*(undefined8 *)(param_1 + 0x8a8));
    if (iVar4 == 0) {
      return 0;
    }
    return 0xfffffc7a;
  }
LAB_1452e5fce:
  if ((*(code **)(param_1 + 0x7e0) != (code *)0x0) &&
     (iVar4 = (**(code **)(param_1 + 0x7e0))
                        (param_1,lVar1,0xfffffe07,*(undefined8 *)(param_1 + 0x8a8)), iVar4 != 0)) {
    return 0xfffffc7a;
  }
  return 0;
}



// FUNCTION 1452e6070 FUN_1452e6070 body=168 status=ok
// SIG undefined FUN_1452e6070(void)

undefined8
FUN_1452e6070(longlong param_1,int *param_2,int *param_3,char param_4,undefined4 param_5,
             longlong param_6,undefined4 param_7)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (0x7fffffffU - param_6 < (ulonglong)(longlong)*param_2) {
    uVar2 = FUN_1452e2d70(param_1,*(undefined4 *)(param_1 + 0x93c),3);
    return uVar2;
  }
  iVar3 = *param_2 + (int)param_6;
  *param_2 = iVar3;
  if (param_4 == '\0') {
    if (*param_3 <= iVar3) {
      iVar3 = *param_3;
    }
    iVar1 = FUN_1452e70d0(param_7,iVar3);
    if (iVar1 != 0) {
      uVar2 = FUN_1452e0a40(param_1,0,param_5,iVar3);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      *param_3 = *param_3 - iVar3;
      *param_2 = *param_2 - iVar3;
    }
  }
  return 0;
}



// FUNCTION 1452e6120 FUN_1452e6120 body=321 status=ok
// SIG undefined FUN_1452e6120(void)

int FUN_1452e6120(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  
  uVar2 = *(uint *)(param_1 + 0x198);
  uVar6 = 1;
  if (uVar2 == 0) {
    pcVar8 = "DATA: stream_id == 0";
    goto LAB_1452e6225;
  }
  uVar1 = uVar2;
  if (*(char *)(param_1 + 0x9aa) != '\0') {
    uVar1 = ~uVar2;
  }
  uVar7 = uVar2 & 1;
  if ((uVar1 & 1) == 0) {
    uVar1 = uVar7 ^ 1;
    if (*(char *)(param_1 + 0x9aa) == '\0') {
      uVar1 = uVar7;
    }
    if (uVar1 == 0) {
      iVar4 = *(int *)(param_1 + 0x938);
      iVar3 = iVar4 - uVar2;
      goto LAB_1452e6184;
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x934);
    iVar3 = iVar4 - uVar2;
LAB_1452e6184:
    if (SBORROW4(iVar4,uVar2) != iVar3 < 0) {
      pcVar8 = "DATA: stream in idle";
      goto LAB_1452e6225;
    }
  }
  lVar5 = FUN_145511540(param_1,uVar2);
  if (((lVar5 == 0) || ((*(byte *)(lVar5 + 0xd4) & 2) != 0)) ||
     (iVar4 = *(int *)(lVar5 + 0xcc), iVar4 == 5)) {
    lVar5 = FUN_145511540(param_1,uVar2);
    if (lVar5 == 0) {
      return -0x68;
    }
    if ((*(byte *)(lVar5 + 0xd5) & 1) == 0) {
      return -0x68;
    }
    pcVar8 = "DATA: stream closed";
  }
  else {
    if ((*(byte *)(lVar5 + 0xd5) & 1) == 0) {
      uVar2 = uVar7 ^ 1;
      if (*(char *)(param_1 + 0x9aa) == '\0') {
        uVar2 = uVar7;
      }
      if (uVar2 == 0) {
        if (iVar4 != 4) {
          if (iVar4 == 3) {
            return -0x68;
          }
          return 0;
        }
        pcVar8 = "DATA: stream in reserved";
      }
      else {
        if (iVar4 == 3) {
          return -0x68;
        }
        if (iVar4 == 2) {
          return 0;
        }
        pcVar8 = "DATA: stream not opened";
      }
      goto LAB_1452e6225;
    }
    pcVar8 = "DATA: stream in half-closed(remote)";
  }
  uVar6 = 5;
LAB_1452e6225:
  iVar3 = FUN_1452e2d70(param_1,*(undefined4 *)(param_1 + 0x93c),uVar6,pcVar8);
  iVar4 = -0x68;
  if (iVar3 < -900) {
    iVar4 = iVar3;
  }
  return iVar4;
}



// FUNCTION 1452e6270 FUN_1452e6270 body=473 status=ok
// SIG undefined FUN_1452e6270(void)

void FUN_1452e6270(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 0x9aa) == '\0') {
    if (*(int *)(param_1 + 0x930) != 1) goto LAB_1452e6439;
  }
  else if (0 < *(int *)(param_1 + 0x938)) goto LAB_1452e6439;
  if (((param_3 == (param_3 / 6) * 6) && (param_3 / 6 <= *(ulonglong *)(param_1 + 0x928))) &&
     (local_a8 = param_1 + 0x880U, iVar1 = FUN_145512550(&local_98,&local_90,param_2,param_3),
     iVar1 == 0)) {
    if (*(char *)(param_1 + 0x9aa) == '\0') {
      iVar1 = FUN_1452e6760(param_1,0,local_98,local_90);
    }
    else {
      local_a8 = local_a8 & 0xffffffff00000000;
      FUN_145511fc0(local_88,param_3,4,0);
      local_70 = local_98;
      local_78 = local_90;
      iVar1 = FUN_1452e1d80(param_1,local_88,1);
    }
    FUN_1455112a0(param_1 + 0x880U,local_98);
    if (iVar1 == 0) {
      FUN_1452e7140(local_48);
      local_a0 = param_4;
      if (*(char *)(param_1 + 0x9aa) != '\0') {
        local_a0 = 0;
      }
      local_a8 = CONCAT44(local_a8._4_4_,1);
      lVar2 = FUN_1452e0d80(param_1,1,0,local_48);
      if (lVar2 != 0) {
        if (*(char *)(param_1 + 0x9aa) == '\0') {
          FUN_145513a20(lVar2,2);
          *(int *)(param_1 + 0x930) = *(int *)(param_1 + 0x930) + 2;
          *(undefined4 *)(param_1 + 0x934) = 1;
        }
        else {
          FUN_145513a20(lVar2,1);
          *(undefined4 *)(param_1 + 0x938) = 1;
          *(undefined4 *)(param_1 + 0x93c) = 1;
        }
      }
    }
  }
LAB_1452e6439:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_c8);
}



// FUNCTION 1452e6460 FUN_1452e6460 body=108 status=ok
// SIG undefined FUN_1452e6460(void)

undefined1 * FUN_1452e6460(undefined8 param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_145513220(param_3,param_4);
  if (iVar1 == 0) {
    puVar2 = &DAT_fffffe0b;
  }
  else if (param_2 < (ulonglong)(param_4 * 6)) {
    puVar2 = &DAT_fffffdf3;
  }
  else {
    puVar2 = (undefined1 *)FUN_145512480(param_1,param_3,param_4);
  }
  return puVar2;
}



// FUNCTION 1452e64d0 FUN_1452e64d0 body=192 status=ok
// SIG undefined FUN_1452e64d0(void)

undefined1 *
FUN_1452e64d0(longlong param_1,int *param_2,undefined8 param_3,undefined8 param_4,longlong param_5,
             undefined8 param_6)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  byte bVar4;
  
  if (*(char *)(param_1 + 0x9aa) != '\0') {
    return (undefined1 *)0xfffffe07;
  }
  if ((param_2 == (int *)0x0) || (iVar2 = FUN_1452e7160(param_2), iVar2 != 0)) {
    param_2 = (int *)0x0;
  }
  else if (*(int *)(param_1 + 0x930) == *param_2) {
    return &DAT_fffffe0b;
  }
  bVar4 = 0;
  if ((param_5 == 0) || (*(longlong *)(param_5 + 8) == 0)) {
    bVar4 = 1;
  }
  bVar1 = bVar4 | 0x20;
  if (param_2 == (int *)0x0) {
    bVar1 = bVar4;
  }
  puVar3 = (undefined1 *)
           FUN_1452e68a0(param_1,bVar1,0xffffffff,param_2,param_3,param_4,param_5,param_6);
  return puVar3;
}



// FUNCTION 1452e6590 FUN_1452e6590 body=196 status=ok
// SIG undefined FUN_1452e6590(void)

int FUN_1452e6590(longlong param_1,byte param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  
  if (param_3 == 0) {
    iVar5 = -0x1f5;
  }
  else {
    lVar6 = FUN_145511290(param_1 + 0x880,0x98);
    if (lVar6 == 0) {
      iVar5 = -0x385;
    }
    else {
      FUN_145513480(lVar6);
      uVar1 = *param_4;
      uVar2 = param_4[1];
      uVar3 = param_4[2];
      uVar4 = param_4[3];
      *(undefined1 *)(lVar6 + 0x71) = 0;
      *(byte *)(lVar6 + 0x70) = param_2 & 1;
      *(undefined4 *)(lVar6 + 0x60) = uVar1;
      *(undefined4 *)(lVar6 + 100) = uVar2;
      *(undefined4 *)(lVar6 + 0x68) = uVar3;
      *(undefined4 *)(lVar6 + 0x6c) = uVar4;
      FUN_145512ff0(lVar6,0,param_3);
      iVar5 = FUN_1452e0670(param_1,lVar6);
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        FUN_145513010(lVar6);
        FUN_1455112a0(param_1 + 0x880,lVar6);
      }
    }
  }
  return iVar5;
}



// FUNCTION 1452e6660 FUN_1452e6660 body=216 status=ok
// SIG undefined FUN_1452e6660(void)

void FUN_1452e6660(longlong param_1,undefined8 param_2,int param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((param_3 != 0) && (param_4 != (int *)0x0)) && (param_3 != *param_4)) {
    local_38 = *(undefined8 *)param_4;
    local_30 = param_4[2];
    FUN_1452e7180(&local_38);
    lVar2 = FUN_145511290(param_1 + 0x880,0x98);
    if (lVar2 != 0) {
      FUN_145513480(lVar2);
      FUN_145512e00(lVar2,param_3,&local_38);
      iVar1 = FUN_1452e0670(param_1,lVar2);
      if (iVar1 != 0) {
        FUN_145512e30(lVar2);
        FUN_1455112a0(param_1 + 0x880,lVar2);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 1452e6740 FUN_1452e6740 body=24 status=ok
// SIG undefined FUN_1452e6740(void)

undefined1 * FUN_1452e6740(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  
  if (param_3 == 0) {
    return &DAT_fffffe0b;
  }
  puVar1 = (undefined1 *)FUN_1452e0810(param_1,param_3,param_4);
  return puVar1;
}



// FUNCTION 1452e6760 FUN_1452e6760 body=7 status=ok
// SIG undefined FUN_1452e6760(void)

void FUN_1452e6760(undefined8 param_1)

{
  FUN_1452e0af0(param_1,0);
  return;
}



// FUNCTION 1452e6770 thunk_FUN_1452e0970 body=8 status=ok
// SIG undefined thunk_FUN_1452e0970(void)

void thunk_FUN_1452e0970(undefined8 param_1,byte param_2)

{
  FUN_1452e0970(param_1,param_2 & 1);
  return;
}



// FUNCTION 1452e6780 FUN_1452e6780 body=284 status=ok
// SIG undefined FUN_1452e6780(void)

undefined1 * FUN_1452e6780(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  int local_res20 [2];
  
  if (param_4 < 0) {
    return &DAT_fffffe0b;
  }
  if (param_3 == 0) {
    piVar3 = (int *)(param_1 + 0x95c);
    local_res20[0] = param_4 - *piVar3;
    if (local_res20[0] != 0) {
      lVar5 = param_1 + 0x958;
      lVar4 = param_1 + 0x950;
      if (-1 < local_res20[0]) {
        puVar1 = (undefined1 *)FUN_1452e7030();
        if ((int)puVar1 != 0) {
          return puVar1;
        }
        if (0 < local_res20[0]) {
          puVar1 = (undefined1 *)FUN_1452e0a40(param_1,0,0);
          return puVar1;
        }
        puVar1 = (undefined1 *)FUN_1452e2a90(param_1,0);
        return puVar1;
      }
LAB_1452e6849:
      puVar1 = (undefined1 *)FUN_1452e6f70(piVar3,lVar4,lVar5,local_res20);
      return puVar1;
    }
  }
  else {
    lVar2 = FUN_1452e25e0(param_1,param_3);
    if (lVar2 != 0) {
      piVar3 = (int *)(lVar2 + 0xbc);
      local_res20[0] = param_4 - *piVar3;
      if (local_res20[0] != 0) {
        lVar5 = lVar2 + 0xb8;
        lVar4 = lVar2 + 0xb0;
        if (-1 < local_res20[0]) {
          puVar1 = (undefined1 *)FUN_1452e7030(piVar3,lVar4,lVar5,local_res20);
          if ((int)puVar1 != 0) {
            return puVar1;
          }
          if (0 < local_res20[0]) {
            puVar1 = (undefined1 *)FUN_1452e0a40(param_1,0,param_3);
            return puVar1;
          }
          puVar1 = (undefined1 *)FUN_1452e2b30(param_1,lVar2,0,1);
          return puVar1;
        }
        goto LAB_1452e6849;
      }
    }
  }
  return (undefined1 *)0x0;
}



// FUNCTION 1452e68a0 FUN_1452e68a0 body=455 status=ok
// SIG undefined FUN_1452e68a0(void)

void FUN_1452e68a0(longlong param_1,byte param_2,uint param_3,undefined8 *param_4,undefined8 param_5
                  ,undefined8 param_6,undefined4 *param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_4 == (undefined8 *)0x0) {
    FUN_1452e7140(&local_60);
  }
  else {
    local_60 = *param_4;
    local_58 = *(undefined4 *)(param_4 + 1);
    FUN_1452e7180();
  }
  iVar3 = FUN_145513090(&local_68,param_5,param_6,param_1 + 0x880);
  if (-1 < iVar3) {
    lVar4 = FUN_145511290(param_1 + 0x880,0x98);
    if (lVar4 == 0) {
      FUN_145513210(local_68,param_1 + 0x880);
      FUN_1455112a0(param_1 + 0x880,0);
    }
    else {
      FUN_145513480(lVar4);
      if ((param_7 != (undefined4 *)0x0) && (*(longlong *)(param_7 + 2) != 0)) {
        uVar5 = param_7[1];
        uVar1 = param_7[2];
        uVar2 = param_7[3];
        *(undefined4 *)(lVar4 + 0x60) = *param_7;
        *(undefined4 *)(lVar4 + 100) = uVar5;
        *(undefined4 *)(lVar4 + 0x68) = uVar1;
        *(undefined4 *)(lVar4 + 0x6c) = uVar2;
      }
      *(undefined8 *)(lVar4 + 0x70) = param_8;
      if (param_3 == 0xffffffff) {
        param_3 = *(uint *)(param_1 + 0x930);
        if (0x7fffffff < param_3) {
          FUN_145513210(local_68,param_1 + 0x880);
          FUN_1455112a0(param_1 + 0x880,lVar4);
          goto LAB_1452e6a5a;
        }
        uVar5 = 0;
        *(uint *)(param_1 + 0x930) = param_3 + 2;
      }
      else {
        uVar5 = 3;
      }
      local_78 = param_6;
      local_88 = &local_60;
      local_80 = local_68;
      FUN_145512da0(lVar4,param_2 & 0x21 | 4,param_3,uVar5);
      iVar3 = FUN_1452e0670(param_1,lVar4);
      if (iVar3 != 0) {
        FUN_145512df0(lVar4,param_1 + 0x880);
        FUN_1455112a0(param_1 + 0x880,lVar4);
      }
    }
  }
LAB_1452e6a5a:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_a8);
}



// FUNCTION 1452e6a80 FUN_1452e6a80 body=433 status=ok
// SIG undefined FUN_1452e6a80(void)

char * FUN_1452e6a80(int param_1)

{
  if (param_1 < -0x218) {
    if (param_1 == -0x219) {
      return "SETTINGS frame contained more than the maximum allowed entries";
    }
    if (param_1 == -0x388) {
      return "Flooding was detected in this HTTP/2 session, and it must be closed";
    }
    if (param_1 == -0x387) {
      return "Received bad client magic byte string";
    }
    if (param_1 == -0x386) {
      return "The user callback function failed";
    }
    if (param_1 == -0x385) {
      return "Out of memory";
    }
  }
  else if (param_1 < 1) {
    if (param_1 == 0) {
      return "Success";
    }
    switch(param_1) {
    case -0x218:
      return 
      "When a local endpoint expects to receive SETTINGS frame, it receives an other type of frame";
    case -0x217:
      return "Cancel";
    case -0x216:
      return "Internal error";
    case -0x215:
      return "Stream was refused";
    case -0x214:
      return "Violation in HTTP messaging rule";
    case -0x213:
      return "Invalid HTTP header field was received";
    case -0x212:
      return "The current session is closing";
    case -0x211:
      return "DATA or HEADERS frame has already been submitted for the stream";
    case -0x210:
      return "Server push is disabled by peer";
    case -0x20f:
      return "Too many inflight SETTINGS";
    case -0x20e:
      return "Callback was paused by the application";
    case -0x20d:
      return "Insufficient buffer size given to function";
    case -0x20c:
      return "Flow control error";
    case -0x20b:
      return "Header compression/decompression error";
    case -0x20a:
      return "The length of the frame is invalid";
    case -0x209:
      return "The user callback function failed due to the temporal error";
    case -0x207:
      return "Invalid state";
    case -0x206:
      return "Invalid header block";
    case -0x205:
      return "GOAWAY has already been sent";
    case -0x204:
      return "request HEADERS is not allowed";
    case -0x203:
      return "Another DATA frame has already been deferred";
    case -0x202:
      return "Invalid stream state";
    case -0x201:
      return "Stream ID is invalid";
    case -0x200:
      return "The transmission is not allowed for this stream";
    case -0x1ff:
      return "Stream is closing";
    case -0x1fe:
      return "Stream was already closed or invalid";
    case -0x1fd:
      return "No more Stream ID available";
    case -0x1fc:
      return "Data transfer deferred";
    case -0x1fb:
      return "EOF";
    case -0x1fa:
      return "Invalid frame octets";
    case -0x1f9:
      return "Protocol error";
    case -0x1f8:
      return "Operation would block";
    case -0x1f7:
      return "Unsupported SPDY version";
    case -0x1f6:
      return "Out of buffer space";
    case -0x1f5:
      return "Invalid argument";
    }
  }
  return "Unknown error code";
}



// FUNCTION 1452e6cd0 FUN_1452e6cd0 body=150 status=ok
// SIG undefined FUN_1452e6cd0(void)

char * FUN_1452e6cd0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return "NO_ERROR";
  case 1:
    return "PROTOCOL_ERROR";
  case 2:
    return "INTERNAL_ERROR";
  case 3:
    return "FLOW_CONTROL_ERROR";
  case 4:
    return "SETTINGS_TIMEOUT";
  case 5:
    return "STREAM_CLOSED";
  case 6:
    return "FRAME_SIZE_ERROR";
  case 7:
    return "REFUSED_STREAM";
  case 8:
    return "CANCEL";
  case 9:
    return "COMPRESSION_ERROR";
  case 10:
    return "CONNECT_ERROR";
  case 0xb:
    return "ENHANCE_YOUR_CALM";
  case 0xc:
    return "INADEQUATE_SECURITY";
  case 0xd:
    return "HTTP_1_1_REQUIRED";
  default:
    return "unknown";
  }
}



// FUNCTION 1452e6da0 FUN_1452e6da0 body=64 status=ok
// SIG undefined FUN_1452e6da0(void)

undefined8 FUN_1452e6da0(byte *param_1,longlong param_2)

{
  byte *pbVar1;
  
  if (param_2 != 0) {
    if (*param_1 == 0x3a) {
      if (param_2 == 1) {
        return 0;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    }
    pbVar1 = param_1 + param_2;
    while( true ) {
      if (param_1 == pbVar1) {
        return 1;
      }
      if (*(int *)(&DAT_149d2d720 + (ulonglong)*param_1 * 4) == 0) break;
      param_1 = param_1 + 1;
    }
  }
  return 0;
}



// FUNCTION 1452e6de0 FUN_1452e6de0 body=42 status=ok
// SIG undefined FUN_1452e6de0(void)

undefined8 FUN_1452e6de0(byte *param_1,longlong param_2)

{
  byte *pbVar1;
  
  pbVar1 = param_1 + param_2;
  while( true ) {
    if (param_1 == pbVar1) {
      return 1;
    }
    if (*(int *)(&DAT_149d2db20 + (ulonglong)*param_1 * 4) == 0) break;
    param_1 = param_1 + 1;
  }
  return 0;
}



// FUNCTION 1452e6e10 FUN_1452e6e10 body=47 status=ok
// SIG undefined FUN_1452e6e10(void)

undefined8 FUN_1452e6e10(byte *param_1,longlong param_2)

{
  byte *pbVar1;
  
  if (param_2 != 0) {
    pbVar1 = param_1 + param_2;
    while( true ) {
      if (param_1 == pbVar1) {
        return 1;
      }
      if ((&DAT_14c7325f0)[*param_1] == '\0') break;
      param_1 = param_1 + 1;
    }
  }
  return 0;
}



// FUNCTION 1452e6e40 FUN_1452e6e40 body=42 status=ok
// SIG undefined FUN_1452e6e40(void)

undefined8 FUN_1452e6e40(byte *param_1,longlong param_2)

{
  byte *pbVar1;
  
  pbVar1 = param_1 + param_2;
  while( true ) {
    if (param_1 == pbVar1) {
      return 1;
    }
    if ((&DAT_14c7326f0)[*param_1] == '\0') break;
    param_1 = param_1 + 1;
  }
  return 0;
}



// FUNCTION 1452e6e70 FUN_1452e6e70 body=42 status=ok
// SIG undefined FUN_1452e6e70(void)

undefined8 FUN_1452e6e70(byte *param_1,longlong param_2)

{
  byte *pbVar1;
  
  pbVar1 = param_1 + param_2;
  while( true ) {
    if (param_1 == pbVar1) {
      return 1;
    }
    if ((&DAT_14c7327f0)[*param_1] == '\0') break;
    param_1 = param_1 + 1;
  }
  return 0;
}



// FUNCTION 1452e6ea0 FUN_1452e6ea0 body=24 status=ok
// SIG undefined FUN_1452e6ea0(void)

void FUN_1452e6ea0(undefined2 *param_1,undefined2 param_2)

{
  *param_1 = CONCAT11((char)param_2,(char)((ushort)param_2 >> 8));
  return;
}



// FUNCTION 1452e6ec0 FUN_1452e6ec0 body=38 status=ok
// SIG undefined FUN_1452e6ec0(void)

void FUN_1452e6ec0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 local_res10;
  
  local_res10._3_1_ = (undefined1)param_2;
  local_res10._0_3_ =
       CONCAT12((char)((uint)param_2 >> 8),
                CONCAT11((char)((uint)param_2 >> 0x10),(char)((uint)param_2 >> 0x18)));
  *param_1 = local_res10;
  return;
}



// FUNCTION 1452e6ef0 FUN_1452e6ef0 body=26 status=ok
// SIG undefined FUN_1452e6ef0(void)

short FUN_1452e6ef0(ushort *param_1)

{
  return *param_1 * 0x100 + (*param_1 >> 8);
}



// FUNCTION 1452e6f10 FUN_1452e6f10 body=46 status=ok
// SIG undefined FUN_1452e6f10(void)

int FUN_1452e6f10(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  return (uVar1 >> 0x10 & 0xff) * 0x100 + (uVar1 >> 8 & 0xff) * 0x10000 + uVar1 * 0x1000000 +
         (uVar1 >> 0x18);
}



// FUNCTION 1452e6f40 FUN_1452e6f40 body=38 status=ok
// SIG undefined FUN_1452e6f40(void)

void FUN_1452e6f40(byte *param_1,longlong param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = (&DAT_149d2d620)[*param_1];
    param_1 = param_1 + 1;
  }
  return;
}



// FUNCTION 1452e6f70 FUN_1452e6f70 body=188 status=ok
// SIG undefined FUN_1452e6f70(void)

undefined8 FUN_1452e6f70(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_4;
  if (iVar1 < 1) {
    if (((-1 < *param_1 + iVar1) && (-0x80000000 - iVar1 <= *param_2)) &&
       (*param_3 <= iVar1 + 0x7fffffff)) {
      *param_1 = *param_1 + iVar1;
      *param_2 = *param_2 + *param_4;
      *param_3 = *param_3 - *param_4;
      *param_4 = 0;
      return 0;
    }
  }
  else {
    iVar3 = 0;
    if (-1 < *param_2) {
      iVar3 = *param_2;
    }
    iVar3 = iVar3 - iVar1;
    if (-1 < iVar3) {
      *param_2 = iVar3;
      return 0;
    }
    if (*param_1 <= iVar3 + 0x7fffffff) {
      *param_1 = *param_1 - iVar3;
      iVar1 = *param_3;
      iVar2 = iVar1;
      if (-iVar3 <= iVar1) {
        iVar2 = -iVar3;
      }
      *param_3 = iVar1 - iVar2;
      if (*param_2 < 0) {
        *param_2 = *param_2 + iVar2;
        *param_4 = *param_4 - iVar2;
        return 0;
      }
      *param_2 = iVar2;
      *param_4 = *param_4 - iVar2;
      return 0;
    }
  }
  return 0xfffffdf4;
}



// FUNCTION 1452e7030 FUN_1452e7030 body=145 status=ok
// SIG undefined FUN_1452e7030(void)

undefined8 FUN_1452e7030(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar1 = *param_4;
  if (iVar1 < 0) {
    _wassert(L"delta >= 0",
             L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_helper.c",0xe1
            );
  }
  if (0x7fffffff - iVar1 < *param_1) {
    uVar3 = 0xfffffdf4;
  }
  else {
    *param_1 = *param_1 + iVar1;
    iVar2 = *param_3;
    iVar4 = iVar2;
    if (iVar1 <= iVar2) {
      iVar4 = iVar1;
    }
    *param_3 = iVar2 - iVar4;
    *param_2 = *param_2 + iVar4;
    *param_4 = *param_4 - iVar4;
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1452e70d0 FUN_1452e70d0 body=28 status=ok
// SIG undefined FUN_1452e70d0(void)

undefined8 FUN_1452e70d0(int param_1,int param_2)

{
  if ((0 < param_2) && (param_1 / 2 <= param_2)) {
    return 1;
  }
  return 0;
}



// FUNCTION 1452e70f0 FUN_1452e70f0 body=55 status=ok
// SIG undefined FUN_1452e70f0(void)

void * FUN_1452e70f0(void *param_1,void *param_2,size_t param_3)

{
  if (param_3 == 0) {
    return param_1;
  }
  memcpy(param_1,param_2,param_3);
  return (void *)((longlong)param_1 + param_3);
}



// FUNCTION 1452e7130 FUN_1452e7130 body=16 status=ok
// SIG undefined FUN_1452e7130(void)

void FUN_1452e7130(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(bool *)(param_1 + 2) = param_4 != 0;
  return;
}



// FUNCTION 1452e7140 FUN_1452e7140 body=18 status=ok
// SIG undefined FUN_1452e7140(void)

void FUN_1452e7140(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0x10;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}



// FUNCTION 1452e7160 FUN_1452e7160 body=26 status=ok
// SIG undefined FUN_1452e7160(void)

undefined8 FUN_1452e7160(int *param_1)

{
  if (((*param_1 == 0) && (param_1[1] == 0x10)) && ((char)param_1[2] == '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 1452e7180 FUN_1452e7180 body=31 status=ok
// SIG undefined FUN_1452e7180(void)

void FUN_1452e7180(longlong param_1)

{
  if (*(int *)(param_1 + 4) < 1) {
    *(undefined4 *)(param_1 + 4) = 1;
    return;
  }
  if (0x100 < *(int *)(param_1 + 4)) {
    *(undefined4 *)(param_1 + 4) = 0x100;
  }
  return;
}



// FUNCTION 1452e71a0 FUN_1452e71a0 body=18 status=ok
// SIG undefined FUN_1452e71a0(void)

void FUN_1452e71a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = param_2;
  param_1[3] = param_3;
  return;
}



// FUNCTION 1452e71c0 FUN_1452e71c0 body=64 status=ok
// SIG undefined FUN_1452e71c0(void)

void FUN_1452e71c0(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    do {
      *param_1 = *plVar1;
      (*(code *)PTR_free_14c6d9f28)(plVar1);
      plVar1 = (longlong *)*param_1;
    } while (plVar1 != (longlong *)0x0);
    param_1[2] = 0;
    return;
  }
  param_1[2] = 0;
  return;
}



// FUNCTION 1452e7200 FUN_1452e7200 body=34 status=ok
// SIG undefined FUN_1452e7200(void)

void FUN_1452e7200(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = param_2;
  param_1[5] = param_3;
  param_1[3] = 0;
  return;
}



// FUNCTION 1452e7230 FUN_1452e7230 body=37 status=ok
// SIG undefined FUN_1452e7230(void)

void FUN_1452e7230(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[6] = param_2;
  param_1[5] = param_3;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 7) = param_4;
  return;
}



// FUNCTION 1452e7260 FUN_1452e7260 body=43 status=ok
// SIG undefined FUN_1452e7260(void)

void FUN_1452e7260(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[6] = uVar1;
  param_1[5] = param_3;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 7) = param_4;
  return;
}



// FUNCTION 1452e7290 FUN_1452e7290 body=50 status=ok
// SIG undefined FUN_1452e7290(void)

void FUN_1452e7290(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  while (puVar1 != (undefined8 *)0x0) {
    *param_1 = *puVar1;
    *puVar1 = param_1[2];
    param_1[2] = puVar1;
    puVar1 = (undefined8 *)*param_1;
  }
  param_1[1] = 0;
  return;
}



// FUNCTION 1452e72d0 FUN_1452e72d0 body=86 status=ok
// SIG undefined FUN_1452e72d0(void)

void FUN_1452e72d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  while (puVar1 != (undefined8 *)0x0) {
    *param_1 = *puVar1;
    (*(code *)PTR_free_14c6d9f28)();
    puVar1 = (undefined8 *)*param_1;
  }
  puVar1 = (undefined8 *)param_1[2];
  while (puVar1 != (undefined8 *)0x0) {
    param_1[2] = *puVar1;
    (*(code *)PTR_free_14c6d9f28)();
    puVar1 = (undefined8 *)param_1[2];
  }
  param_1[4] = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 1452e7330 FUN_1452e7330 body=36 status=ok
// SIG undefined FUN_1452e7330(void)

longlong FUN_1452e7330(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  for (param_1 = (undefined8 *)*param_1; param_1 != (undefined8 *)0x0;
      param_1 = (undefined8 *)*param_1) {
    lVar1 = lVar1 + (param_1[3] - param_1[2]);
  }
  return lVar1;
}



// FUNCTION 1452e7360 FUN_1452e7360 body=24 status=ok
// SIG undefined FUN_1452e7360(void)

undefined8 FUN_1452e7360(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (*(ulonglong *)(lVar1 + 0x10) < *(ulonglong *)(lVar1 + 0x18))) {
    return 0;
  }
  return 1;
}



// FUNCTION 1452e7380 FUN_1452e7380 body=46 status=ok
// SIG undefined FUN_1452e7380(void)

ulonglong FUN_1452e7380(longlong param_1)

{
  longlong lVar1;
  ulonglong in_RAX;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x10) == 0)) {
    in_RAX = *(ulonglong *)(param_1 + 0x20);
    if (*(ulonglong *)(param_1 + 0x28) <= in_RAX) {
      if (*(ulonglong *)(param_1 + 0x28) < in_RAX) {
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
      return CONCAT71((int7)(*(ulonglong *)(lVar1 + 8) >> 8),
                      *(ulonglong *)(lVar1 + 8) <= *(ulonglong *)(lVar1 + 0x18));
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1452e73b0 FUN_1452e73b0 body=226 status=ok
// SIG undefined FUN_1452e73b0(void)

longlong FUN_1452e73b0(longlong param_1,void *param_2,ulonglong param_3,undefined4 *param_4)

{
  longlong lVar1;
  ulonglong _Size;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar3 = 0;
  if (param_3 != 0) {
    do {
      lVar1 = FUN_1452e7bd0(param_1);
      if (lVar1 == 0) {
        if (*(ulonglong *)(param_1 + 0x20) < *(ulonglong *)(param_1 + 0x28)) {
          *param_4 = 0x1b;
          return -1;
        }
        break;
      }
      uVar2 = *(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x18);
      _Size = uVar2;
      if (uVar2 != 0) {
        _Size = param_3;
        if (uVar2 < param_3) {
          _Size = uVar2;
        }
        memcpy((void *)(*(longlong *)(lVar1 + 0x18) + 0x20 + lVar1),param_2,_Size);
        *(longlong *)(lVar1 + 0x18) = *(longlong *)(lVar1 + 0x18) + _Size;
      }
      if (_Size == 0) break;
      lVar3 = lVar3 + _Size;
      param_2 = (void *)((longlong)param_2 + _Size);
      param_3 = param_3 - _Size;
    } while (param_3 != 0);
    if ((lVar3 == 0) && (param_3 != 0)) {
      *param_4 = 0x51;
      return -1;
    }
  }
  *param_4 = 0;
  return lVar3;
}



// FUNCTION 1452e74a0 FUN_1452e74a0 body=229 status=ok
// SIG undefined FUN_1452e74a0(void)

longlong FUN_1452e74a0(longlong *param_1,void *param_2,ulonglong param_3,undefined4 *param_4)

{
  longlong lVar1;
  void *_Src;
  ulonglong _Size;
  longlong lVar2;
  
  lVar2 = 0;
  *param_4 = 0;
  if (param_3 != 0) {
    do {
      lVar1 = *param_1;
      if (lVar1 == 0) break;
      _Src = (void *)(lVar1 + 0x20 + *(longlong *)(lVar1 + 0x10));
      _Size = *(longlong *)(lVar1 + 0x18) - *(longlong *)(lVar1 + 0x10);
      if (_Size != 0) {
        if (param_3 < _Size) {
          memcpy(param_2,_Src,param_3);
          *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + param_3;
          _Size = param_3;
          if (param_3 == 0) goto LAB_1452e7531;
        }
        else {
          memcpy(param_2,_Src,_Size);
          *(undefined8 *)(lVar1 + 0x18) = 0;
          *(undefined8 *)(lVar1 + 0x10) = 0;
        }
        lVar2 = lVar2 + _Size;
        param_2 = (void *)((longlong)param_2 + _Size);
        param_3 = param_3 - _Size;
      }
LAB_1452e7531:
      FUN_1452e7b20(param_1);
    } while (param_3 != 0);
    if (lVar2 != 0) {
      return lVar2;
    }
  }
  *param_4 = 0x51;
  return -1;
}



// FUNCTION 1452e7590 FUN_1452e7590 body=131 status=ok
// SIG undefined FUN_1452e7590(void)

undefined8 FUN_1452e7590(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (*(ulonglong *)(lVar1 + 0x18) <= *(ulonglong *)(lVar1 + 0x10))) {
    FUN_1452e7b20(param_1);
  }
  lVar1 = *param_1;
  if ((lVar1 != 0) && (*(ulonglong *)(lVar1 + 0x10) < *(ulonglong *)(lVar1 + 0x18))) {
    *param_2 = *(ulonglong *)(lVar1 + 0x10) + 0x20 + lVar1;
    lVar1 = *(longlong *)(lVar1 + 0x18) - *(longlong *)(lVar1 + 0x10);
    *param_3 = lVar1;
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  *param_2 = 0;
  *param_3 = 0;
  return 0;
}



// FUNCTION 1452e7620 FUN_1452e7620 body=121 status=ok
// SIG undefined FUN_1452e7620(void)

void FUN_1452e7620(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  while ((param_2 != 0 && (lVar1 = *param_1, lVar1 != 0))) {
    uVar4 = *(longlong *)(lVar1 + 0x18) - *(longlong *)(lVar1 + 0x10);
    uVar2 = uVar4;
    if (uVar4 != 0) {
      uVar2 = param_2;
      if (uVar4 < param_2) {
        uVar2 = uVar4;
      }
      lVar3 = uVar2 + *(longlong *)(lVar1 + 0x10);
      *(longlong *)(lVar1 + 0x10) = lVar3;
      if (lVar3 == *(longlong *)(lVar1 + 0x18)) {
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(undefined8 *)(lVar1 + 0x10) = 0;
      }
    }
    param_2 = param_2 - uVar2;
    FUN_1452e7b20(param_1);
  }
  return;
}



// FUNCTION 1452e76a0 FUN_1452e76a0 body=289 status=ok
// SIG undefined FUN_1452e76a0(void)

longlong FUN_1452e76a0(longlong *param_1,code *param_2,undefined8 param_3,int *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar7 = 0;
  while( true ) {
    lVar1 = *param_1;
    if ((lVar1 != 0) && (*(ulonglong *)(lVar1 + 0x18) <= *(ulonglong *)(lVar1 + 0x10))) {
      FUN_1452e7b20(param_1);
    }
    lVar1 = *param_1;
    if (lVar1 == 0) {
      return lVar7;
    }
    uVar2 = *(ulonglong *)(lVar1 + 0x10);
    if (*(ulonglong *)(lVar1 + 0x18) <= uVar2) {
      return lVar7;
    }
    uVar2 = (*param_2)(param_3,lVar1 + 0x20 + uVar2,*(ulonglong *)(lVar1 + 0x18) - uVar2,param_4);
    if ((longlong)uVar2 < 0) break;
    uVar6 = uVar2;
    if (uVar2 == 0) {
      if (lVar7 == 0) {
        *param_4 = 0x51;
LAB_1452e778d:
        lVar7 = -1;
      }
      return lVar7;
    }
    do {
      lVar1 = *param_1;
      if (lVar1 == 0) break;
      uVar5 = *(longlong *)(lVar1 + 0x18) - *(longlong *)(lVar1 + 0x10);
      uVar3 = uVar5;
      if (uVar5 != 0) {
        uVar3 = uVar6;
        if (uVar5 < uVar6) {
          uVar3 = uVar5;
        }
        lVar4 = uVar3 + *(longlong *)(lVar1 + 0x10);
        *(longlong *)(lVar1 + 0x10) = lVar4;
        if (lVar4 == *(longlong *)(lVar1 + 0x18)) {
          *(undefined8 *)(lVar1 + 0x18) = 0;
          *(undefined8 *)(lVar1 + 0x10) = 0;
        }
      }
      uVar6 = uVar6 - uVar3;
      FUN_1452e7b20(param_1);
    } while (uVar6 != 0);
    lVar7 = lVar7 + uVar2;
  }
  if ((lVar7 != 0) && (*param_4 == 0x51)) {
    return lVar7;
  }
  goto LAB_1452e778d;
}



// FUNCTION 1452e77d0 FUN_1452e77d0 body=244 status=ok
// SIG undefined FUN_1452e77d0(void)

longlong FUN_1452e77d0(longlong param_1,code *param_2,undefined8 param_3,int *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  
  uVar4 = 0;
  lVar3 = 0;
  do {
    iVar6 = 0x51;
    *param_4 = 0x51;
    lVar1 = FUN_1452e7bd0(param_1);
    if (lVar1 == 0) {
      if (*(ulonglong *)(param_1 + 0x20) < *(ulonglong *)(param_1 + 0x28)) {
        iVar6 = 0x1b;
      }
LAB_1452e7886:
      *param_4 = iVar6;
LAB_1452e7889:
      if ((lVar3 == 0) || (*param_4 != 0x51)) {
        return -1;
      }
LAB_1452e7894:
      *param_4 = 0;
      return lVar3;
    }
    uVar5 = *(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x18);
    iVar6 = 0x51;
    if (uVar5 == 0) goto LAB_1452e7886;
    if ((uVar4 != 0) && (uVar4 < uVar5)) {
      uVar5 = uVar4;
    }
    lVar2 = (*param_2)(param_3,*(longlong *)(lVar1 + 0x18) + 0x20 + lVar1,uVar5,param_4);
    if (lVar2 < 1) {
      if (-1 < lVar2) {
        if (lVar2 == 0) goto LAB_1452e7894;
        goto LAB_1452e7850;
      }
      goto LAB_1452e7889;
    }
    *(longlong *)(lVar1 + 0x18) = *(longlong *)(lVar1 + 0x18) + lVar2;
LAB_1452e7850:
    lVar3 = lVar3 + lVar2;
    if ((uVar4 != 0) && (uVar4 = uVar4 - lVar2, uVar4 == 0)) {
      return lVar3;
    }
    lVar1 = *(longlong *)(param_1 + 8);
    if ((lVar1 != 0) && (*(ulonglong *)(lVar1 + 0x18) < *(ulonglong *)(lVar1 + 8))) {
      return lVar3;
    }
  } while( true );
}



// FUNCTION 1452e78d0 FUN_1452e78d0 body=592 status=ok
// SIG undefined FUN_1452e78d0(void)

longlong FUN_1452e78d0(longlong *param_1,void *param_2,ulonglong param_3,code *param_4,
                      undefined8 param_5,int *param_6)

{
  int *piVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  void *_Src;
  
  piVar1 = param_6;
  param_6 = (int *)0x0;
  *piVar1 = 0;
  lVar9 = 0;
  if (param_3 != 0) {
    do {
      lVar9 = 0;
      cVar2 = FUN_1452e7380(param_1);
      if (cVar2 != '\0') {
        while( true ) {
          lVar4 = *param_1;
          if ((lVar4 != 0) && (*(ulonglong *)(lVar4 + 0x18) <= *(ulonglong *)(lVar4 + 0x10))) {
            FUN_1452e7b20(param_1);
          }
          lVar4 = *param_1;
          if (lVar4 == 0) goto LAB_1452e7a06;
          uVar3 = *(ulonglong *)(lVar4 + 0x10);
          if (*(ulonglong *)(lVar4 + 0x18) <= uVar3) goto LAB_1452e7a06;
          uVar3 = (*param_4)(param_5,lVar4 + 0x20 + uVar3,*(ulonglong *)(lVar4 + 0x18) - uVar3,
                             piVar1);
          if ((longlong)uVar3 < 0) {
            if (lVar9 == 0) goto LAB_1452e7ac4;
            if (*piVar1 != 0x51) {
              return -1;
            }
            goto LAB_1452e7a06;
          }
          uVar7 = uVar3;
          if (uVar3 == 0) break;
          do {
            lVar4 = *param_1;
            if (lVar4 == 0) break;
            uVar6 = *(longlong *)(lVar4 + 0x18) - *(longlong *)(lVar4 + 0x10);
            uVar8 = uVar6;
            if (uVar6 != 0) {
              uVar8 = uVar7;
              if (uVar6 < uVar7) {
                uVar8 = uVar6;
              }
              lVar5 = uVar8 + *(longlong *)(lVar4 + 0x10);
              *(longlong *)(lVar4 + 0x10) = lVar5;
              if (lVar5 == *(longlong *)(lVar4 + 0x18)) {
                *(undefined8 *)(lVar4 + 0x18) = 0;
                *(undefined8 *)(lVar4 + 0x10) = 0;
              }
            }
            uVar7 = uVar7 - uVar8;
            FUN_1452e7b20(param_1);
          } while (uVar7 != 0);
          lVar9 = lVar9 + uVar3;
        }
        if (lVar9 == 0) break;
LAB_1452e7a06:
        if (lVar9 < 0) {
LAB_1452e7ac4:
          if (*piVar1 != 0x51) {
            return -1;
          }
          break;
        }
      }
      lVar9 = 0;
      uVar3 = param_3;
      _Src = param_2;
      if (param_3 != 0) {
        do {
          lVar4 = FUN_1452e7bd0(param_1);
          if (lVar4 == 0) {
            if ((ulonglong)param_1[4] < (ulonglong)param_1[5]) {
              *piVar1 = 0x1b;
              return -1;
            }
            break;
          }
          uVar8 = *(longlong *)(lVar4 + 8) - *(longlong *)(lVar4 + 0x18);
          uVar7 = uVar8;
          if (uVar8 != 0) {
            uVar7 = uVar3;
            if (uVar8 < uVar3) {
              uVar7 = uVar8;
            }
            memcpy((void *)(*(longlong *)(lVar4 + 0x18) + 0x20 + lVar4),_Src,uVar7);
            *(longlong *)(lVar4 + 0x18) = *(longlong *)(lVar4 + 0x18) + uVar7;
          }
          if (uVar7 == 0) break;
          lVar9 = lVar9 + uVar7;
          _Src = (void *)((longlong)_Src + uVar7);
          uVar3 = uVar3 - uVar7;
        } while (uVar3 != 0);
        if ((lVar9 == 0) && (uVar3 != 0)) break;
      }
      *piVar1 = 0;
      if (lVar9 < 0) {
        return -1;
      }
      if (lVar9 == 0) break;
      param_2 = (void *)((longlong)param_2 + lVar9);
      param_6 = (int *)((longlong)param_6 + lVar9);
      param_3 = param_3 - lVar9;
    } while (param_3 != 0);
    lVar9 = (longlong)param_6;
    if ((param_6 == (int *)0x0) && (param_3 != 0)) {
      *piVar1 = 0x51;
      return -1;
    }
  }
  *piVar1 = 0;
  return lVar9;
}



// FUNCTION 1452e7b20 FUN_1452e7b20 body=161 status=ok
// SIG undefined FUN_1452e7b20(void)

void FUN_1452e7b20(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)*param_1;
  do {
    if ((puVar1 == (undefined8 *)0x0) || ((ulonglong)puVar1[2] < (ulonglong)puVar1[3])) {
      return;
    }
    uVar2 = *puVar1;
    *param_1 = uVar2;
    if ((undefined8 *)param_1[1] == puVar1) {
      param_1[1] = uVar2;
    }
    puVar3 = (undefined8 *)param_1[3];
    if (puVar3 == (undefined8 *)0x0) {
      if (((ulonglong)param_1[5] < (ulonglong)param_1[4]) || ((*(byte *)(param_1 + 7) & 2) != 0))
      goto LAB_1452e7ba4;
      *puVar1 = param_1[2];
      param_1[2] = puVar1;
    }
    else {
      if ((ulonglong)puVar3[2] < (ulonglong)puVar3[3]) {
        *puVar1 = 0;
        puVar1[3] = 0;
        puVar1[2] = 0;
        *puVar1 = *puVar3;
        puVar3[2] = puVar3[2] + 1;
        *puVar3 = puVar1;
      }
      else {
LAB_1452e7ba4:
        (*(code *)PTR_free_14c6d9f28)();
      }
      param_1[4] = param_1[4] + -1;
    }
    puVar1 = (undefined8 *)*param_1;
  } while( true );
}



// FUNCTION 1452e7bd0 FUN_1452e7bd0 body=262 status=ok
// SIG undefined FUN_1452e7bd0(void)

undefined8 * FUN_1452e7bd0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)param_1[1];
  if ((puVar2 != (undefined8 *)0x0) && ((ulonglong)puVar2[3] < (ulonglong)puVar2[1])) {
    return puVar2;
  }
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != (undefined8 *)0x0) {
    param_1[2] = *puVar2;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    goto LAB_1452e7ca6;
  }
  if (((ulonglong)param_1[5] <= (ulonglong)param_1[4]) && ((*(byte *)(param_1 + 7) & 1) == 0)) {
    return (undefined8 *)0x0;
  }
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)(*(code *)PTR_calloc_14c6d9f40)(1,param_1[6] + 0x28);
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    uVar3 = param_1[6];
LAB_1452e7c9e:
    puVar2[1] = uVar3;
  }
  else {
    puVar2 = (undefined8 *)*puVar1;
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)(*(code *)PTR_calloc_14c6d9f40)(1,puVar1[1] + 0x28);
      if (puVar2 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      uVar3 = puVar1[1];
      goto LAB_1452e7c9e;
    }
    uVar3 = *puVar2;
    puVar1[2] = puVar1[2] + -1;
    *puVar1 = uVar3;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
  }
  param_1[4] = param_1[4] + 1;
LAB_1452e7ca6:
  if ((undefined8 *)param_1[1] == (undefined8 *)0x0) {
    *param_1 = puVar2;
    param_1[1] = puVar2;
    return puVar2;
  }
  *(undefined8 *)param_1[1] = puVar2;
  param_1[1] = puVar2;
  return puVar2;
}



// FUNCTION 1452e7ce0 FUN_1452e7ce0 body=50 status=ok
// SIG undefined FUN_1452e7ce0(void)

void FUN_1452e7ce0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = param_2;
  FUN_144f07cf0(param_1 + 1);
  return;
}



// FUNCTION 1452e7d20 FUN_1452e7d20 body=47 status=ok
// SIG undefined FUN_1452e7d20(void)

void FUN_1452e7d20(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_144f21a30(*param_1);
    FUN_144f07d10(param_1 + 1);
    *param_1 = 0;
    *(undefined1 *)(param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 1452e7d50 FUN_1452e7d50 body=274 status=ok
// SIG undefined FUN_1452e7d50(void)

longlong FUN_1452e7d50(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                      undefined4 param_5,int *param_6)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = 0;
  *param_6 = 0;
  cVar1 = (char)param_1[9];
  do {
    if (cVar1 != '\0') {
      return lVar4;
    }
    lVar3 = FUN_1452e7f20(param_1,param_2,param_3,param_5,param_6);
    if (lVar3 < 0) {
      iVar2 = *param_6;
      *param_6 = 0;
      if (iVar2 == 0x51) {
        return lVar4;
      }
      return -1;
    }
    lVar4 = lVar4 + lVar3;
    param_2 = param_2 + lVar3;
    param_3 = param_3 - lVar3;
    if (param_1[6] == 0) {
      if (param_3 == 0) {
        return lVar4;
      }
    }
    else {
      if (*param_1 == 0) {
        iVar2 = FUN_1452e8070(param_1,param_4,param_5);
      }
      else {
        if (param_1[8] == 0) {
          *(undefined1 *)(param_1 + 9) = 1;
          FUN_144f07dc0(param_1 + 1);
          goto LAB_1452e7e0e;
        }
        iVar2 = FUN_1452db5b0(*param_1 + 0x28);
      }
      *param_6 = iVar2;
      if (iVar2 != 0) {
        return -1;
      }
    }
LAB_1452e7e0e:
    cVar1 = (char)param_1[9];
  } while( true );
}



// FUNCTION 1452e7e70 FUN_1452e7e70 body=173 status=ok
// SIG undefined FUN_1452e7e70(void)

void FUN_1452e7e70(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  puVar2 = &DAT_14996de1b;
  puVar5 = &DAT_14996de1b;
  if (*(undefined1 **)(param_1 + 0x20) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_1 + 0x20);
  }
  puVar4 = &DAT_14996de1b;
  if (*(undefined1 **)(param_1 + 0x18) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_1 + 0x18);
  }
  puVar3 = &DAT_14996de1b;
  if (*(undefined1 **)(param_1 + 0x10) != (undefined1 *)0x0) {
    puVar2 = &DAT_149d2e604;
    puVar3 = *(undefined1 **)(param_1 + 0x10);
  }
  iVar1 = FUN_144f07d70(param_3,"%s %s%s%s%s HTTP/1.%d\r\n",param_1,puVar3,puVar2,puVar4,puVar5,
                        param_2);
  if ((iVar1 == 0) && (iVar1 = FUN_1452db790(param_1 + 0x28,param_3), iVar1 == 0)) {
    thunk_FUN_144f07eb0(param_3,&DAT_149c058e8,2);
  }
  return;
}



// FUNCTION 1452e7f20 FUN_1452e7f20 body=336 status=ok
// SIG undefined FUN_1452e7f20(void)

size_t FUN_1452e7f20(longlong param_1,void *param_2,size_t param_3,uint param_4,int *param_5)

{
  size_t sVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    FUN_144f07dc0(param_1 + 8);
  }
  pvVar3 = memchr(param_2,10,param_3);
  if (pvVar3 == (void *)0x0) {
    *param_5 = 0x51;
    iVar2 = thunk_FUN_144f07eb0(param_1 + 8,param_2,param_3);
    *param_5 = iVar2;
    if (iVar2 != 0) {
      return 0xffffffffffffffff;
    }
    return param_3;
  }
  *(void **)(param_1 + 0x30) = param_2;
  *(longlong *)(param_1 + 0x40) = (longlong)pvVar3 + (1 - (longlong)param_2);
  *param_5 = 0;
  sVar1 = *(size_t *)(param_1 + 0x40);
  if ((longlong)sVar1 < 0) {
    return sVar1;
  }
  lVar4 = FUN_144f07ea0(param_1 + 8);
  if (lVar4 != 0) {
    iVar2 = thunk_FUN_144f07eb0(param_1 + 8,*(undefined8 *)(param_1 + 0x30),
                                *(undefined8 *)(param_1 + 0x40));
    *param_5 = iVar2;
    if (iVar2 != 0) {
      return 0xffffffffffffffff;
    }
    uVar5 = FUN_144f07e80(param_1 + 8);
    *(undefined8 *)(param_1 + 0x30) = uVar5;
    uVar5 = FUN_144f07ea0(param_1 + 8);
    *(undefined8 *)(param_1 + 0x40) = uVar5;
  }
  uVar6 = *(ulonglong *)(param_1 + 0x40);
  uVar7 = uVar6;
  if (uVar6 == 0) {
LAB_1452e803a:
    if ((param_4 & 1) != 0) goto LAB_1452e805e;
  }
  else {
    if (*(char *)((uVar6 - 1) + *(longlong *)(param_1 + 0x30)) == '\n') {
      uVar6 = uVar6 - 1;
      *(ulonglong *)(param_1 + 0x40) = uVar6;
      uVar7 = 0;
      if (uVar6 == 0) goto LAB_1452e803a;
    }
    uVar7 = uVar6;
    if (*(char *)(*(longlong *)(param_1 + 0x30) + -1 + uVar6) != '\r') goto LAB_1452e803a;
    uVar7 = uVar6 - 1;
    *(ulonglong *)(param_1 + 0x40) = uVar7;
  }
  if (uVar7 <= *(ulonglong *)(param_1 + 0x38)) {
    *param_5 = 0;
    return sVar1;
  }
LAB_1452e805e:
  *param_5 = 3;
  return 0xffffffffffffffff;
}



// FUNCTION 1452e8070 FUN_1452e8070 body=573 status=ok
// SIG undefined FUN_1452e8070(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452e8070(longlong param_1,char *param_2,uint param_3)

{
  size_t _MaxCount;
  char *_Str2;
  int iVar1;
  char *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *_Size;
  char *pcVar10;
  ulonglong _MaxCount_00;
  undefined1 auStack_20b8 [32];
  char *local_2098;
  char *local_2090;
  char *local_2088;
  char *local_2080;
  char *local_2078;
  undefined4 local_2068;
  longlong local_2060;
  char local_2048 [8192];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_20b8;
  _MaxCount = *(size_t *)(param_1 + 0x40);
  _Str2 = *(char **)(param_1 + 0x30);
  pcVar9 = (char *)0x0;
  local_2068 = 3;
  local_2060 = param_1;
  pcVar2 = memchr(_Str2,0x20,_MaxCount);
  pcVar5 = pcVar9;
  if ((pcVar2 != (char *)0x0) && (pcVar2 != _Str2)) {
    _MaxCount_00 = (longlong)pcVar2 - (longlong)_Str2;
    pcVar2 = pcVar2 + 1;
    for (uVar3 = _MaxCount; _MaxCount_00 < uVar3; uVar3 = uVar3 - 1) {
      if (_Str2[uVar3] == ' ') {
        _Size = _Str2 + (uVar3 - (longlong)pcVar2);
        if ((_Size == (char *)0x0) || (_MaxCount == uVar3)) break;
        if (((_Size != &DAT_00000001) ||
            (pcVar6 = pcVar2, pcVar7 = _Size, pcVar8 = pcVar9, pcVar10 = pcVar9, *pcVar2 != '*')) &&
           ((iVar1 = strncmp("CONNECT",_Str2,_MaxCount_00), pcVar6 = pcVar9, pcVar7 = pcVar9,
            pcVar8 = pcVar2, pcVar10 = _Size, iVar1 != 0 &&
            (pcVar6 = pcVar2, pcVar7 = _Size, pcVar8 = pcVar9, pcVar10 = pcVar9, *pcVar2 != '/'))))
        {
          if ((char *)0x1fff < _Size) break;
          memcpy(local_2048,pcVar2,(size_t)_Size);
          local_2048[(longlong)_Size] = '\0';
          lVar4 = FUN_1452cc990(local_2048,0,0,0);
          if (lVar4 != 0) {
            pcVar5 = (char *)FUN_1452cb910();
            if (pcVar5 == (char *)0x0) {
              local_2068 = 0x1b;
            }
            else {
              iVar1 = FUN_1452cc2c0(pcVar5,0,local_2048,(~param_3 & 1) * 0x800 + 0x1a);
              if (iVar1 == 0) {
                local_2098 = param_2;
                local_2068 = FUN_144f217a0(local_2060,_Str2,_MaxCount_00,pcVar5);
              }
            }
            break;
          }
          pcVar5 = (char *)0x0;
          if ((param_3 & 1) != 0) break;
        }
        local_2098 = pcVar9;
        pcVar2 = pcVar9;
        if (param_2 != (char *)0x0) {
          local_2098 = (char *)0xffffffffffffffff;
          do {
            local_2098 = local_2098 + 1;
            pcVar2 = param_2;
          } while (local_2098[(longlong)param_2] != '\0');
        }
        local_2090 = pcVar8;
        local_2088 = pcVar10;
        local_2080 = pcVar6;
        local_2078 = pcVar7;
        local_2068 = FUN_144f21650(local_2060,_Str2,_MaxCount_00,pcVar2);
        pcVar5 = pcVar9;
        break;
      }
    }
  }
  FUN_1452cb920(pcVar5);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_20b8);
}



// FUNCTION 1452e82bc FUN_1452e82bc body=836 status=ok
// SIG undefined FUN_1452e82bc(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452e82bc(int *param_1,longlong param_2,float *param_3,longlong param_4,int param_5,
                  uint param_6,int param_7)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  float *pfVar11;
  longlong lVar12;
  float *pfVar13;
  float *pfVar14;
  int iVar15;
  float *pfVar16;
  longlong lVar17;
  float *pfVar18;
  float fVar19;
  longlong lVar20;
  float *pfVar21;
  longlong lVar22;
  float fVar23;
  float *pfVar24;
  ulonglong uVar25;
  undefined8 auStack_90 [5];
  float local_68 [2];
  longlong local_60;
  float *local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  float *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)local_68;
  iVar15 = *param_1;
  pfVar16 = *(float **)(param_1 + 10);
  local_50 = *(longlong *)(param_1 + (longlong)(int)param_6 * 2 + 2);
  fVar2 = *(float *)(local_50 + 4);
  if (0 < (int)param_6) {
    uVar10 = (ulonglong)param_6;
    do {
      iVar15 = iVar15 >> 1;
      pfVar16 = pfVar16 + iVar15;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  fVar23 = (float)(iVar15 >> 1);
  lVar12 = (longlong)(int)fVar23;
  iVar15 = iVar15 >> 2;
  uVar25 = lVar12 * 4;
  uVar10 = uVar25 + 0xf;
  if (uVar10 <= uVar25) {
    uVar10 = 0xffffffffffffff0;
  }
  auStack_90[0] = 0x1452e8362;
  lVar6 = -(uVar10 & 0xfffffffffffffff0);
  lVar17 = (longlong)iVar15;
  local_58 = (float *)((longlong)local_68 + lVar6);
  uVar10 = lVar17 * 8 + 0xf;
  if (uVar10 <= (ulonglong)(lVar17 * 8)) {
    uVar10 = 0xffffffffffffff0;
  }
  local_68[1] = fVar23;
  local_60 = param_4;
  local_38 = param_3;
  *(undefined8 *)((longlong)auStack_90 + lVar6) = 0x1452e8390;
  lVar8 = local_50;
  lVar7 = -(uVar10 & 0xfffffffffffffff0);
  local_40 = (longlong)param_5;
  lVar20 = local_40 >> 1;
  pfVar24 = (float *)((longlong)local_68 + lVar7 + lVar6);
  local_68[0] = (float)(param_5 + 3 >> 2);
  pfVar14 = (float *)(param_2 + lVar20 * 4);
  pfVar18 = (float *)(param_2 + (lVar20 + -1 + lVar12) * 4);
  pfVar13 = local_58;
  fVar19 = 0.0;
  if (0 < (int)local_68[0]) {
    local_48 = (uVar25 - local_60) + param_2;
    pfVar11 = (float *)((longlong)pfVar18 + local_60 + (lVar12 * -4 - param_2));
    pfVar21 = (float *)(local_60 + lVar20 * 4);
    uVar10 = (ulonglong)(uint)local_68[0];
    do {
      fVar23 = *pfVar18;
      pfVar18 = pfVar18 + -2;
      *pfVar13 = *(float *)((longlong)pfVar21 + local_48) * *pfVar11 + fVar23 * *pfVar21;
      fVar23 = *pfVar14;
      pfVar14 = pfVar14 + 2;
      pfVar1 = (float *)((longlong)pfVar11 + (param_2 - local_60));
      fVar19 = *pfVar21;
      pfVar21 = pfVar21 + 2;
      fVar3 = *pfVar11;
      pfVar11 = pfVar11 + -2;
      pfVar13[1] = fVar23 * fVar19 - *pfVar1 * fVar3;
      pfVar13 = pfVar13 + 2;
      uVar10 = uVar10 - 1;
      fVar23 = local_68[1];
      fVar19 = local_68[0];
    } while (uVar10 != 0);
  }
  if ((int)fVar19 < iVar15 - (int)local_68[0]) {
    uVar9 = (iVar15 - (int)local_68[0]) - (int)fVar19;
    uVar10 = (ulonglong)uVar9;
    fVar19 = (float)((int)fVar19 + uVar9);
    do {
      fVar3 = *pfVar18;
      pfVar18 = pfVar18 + -2;
      *pfVar13 = fVar3;
      fVar3 = *pfVar14;
      pfVar14 = pfVar14 + 2;
      pfVar13[1] = fVar3;
      pfVar13 = pfVar13 + 2;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  if ((int)fVar19 < iVar15) {
    lVar20 = local_60 - (longlong)pfVar14;
    lVar22 = local_60 + (local_40 * 4 - (longlong)pfVar18);
    uVar10 = (ulonglong)(uint)(iVar15 - (int)fVar19);
    do {
      *pfVar13 = *pfVar18 * *(float *)(lVar22 + -4 + (longlong)pfVar18) -
                 pfVar14[-lVar12] * *(float *)(lVar20 + (longlong)pfVar14);
      pfVar21 = pfVar18 + lVar12;
      fVar19 = *pfVar14;
      pfVar11 = (float *)(lVar20 + (longlong)pfVar14);
      pfVar14 = pfVar14 + 2;
      pfVar1 = (float *)(lVar22 + -4 + (longlong)pfVar18);
      pfVar18 = pfVar18 + -2;
      pfVar13[1] = *pfVar21 * *pfVar11 + fVar19 * *pfVar1;
      pfVar13 = pfVar13 + 2;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  if (0 < lVar17) {
    lVar12 = 0;
    pfVar14 = pfVar16;
    pfVar18 = local_58;
    do {
      fVar23 = *pfVar18;
      fVar19 = pfVar18[1];
      fVar3 = *pfVar14;
      pfVar18 = pfVar18 + 2;
      fVar4 = pfVar14[lVar17];
      pfVar13 = pfVar14 + lVar17;
      lVar20 = (longlong)*(short *)(*(longlong *)(lVar8 + 0x30) + lVar12 * 2);
      lVar12 = lVar12 + 1;
      fVar5 = *pfVar14;
      pfVar14 = pfVar14 + 1;
      pfVar24[lVar20 * 2] = (fVar23 * fVar3 - fVar19 * *pfVar13) * fVar2;
      *(float *)((longlong)local_68 + lVar20 * 8 + lVar7 + lVar6 + 4) =
           (fVar23 * fVar4 + fVar19 * fVar5) * fVar2;
      fVar23 = local_68[1];
    } while (lVar12 < lVar17);
  }
  *(undefined8 *)((longlong)auStack_90 + lVar7 + lVar6) = 0x1452e857c;
  FUN_1452f3f50(lVar8,pfVar24);
  pfVar14 = local_38 + ((int)fVar23 + -1) * param_7;
  if (0 < lVar17) {
    lVar12 = lVar17;
    pfVar18 = local_38;
    do {
      fVar2 = pfVar24[1];
      fVar23 = *pfVar24;
      fVar19 = *pfVar16;
      fVar3 = pfVar16[lVar17];
      pfVar24 = pfVar24 + 2;
      pfVar16 = pfVar16 + 1;
      *pfVar18 = fVar2 * fVar3 - fVar23 * fVar19;
      pfVar18 = pfVar18 + param_7 * 2;
      *pfVar14 = fVar23 * fVar3 + fVar2 * fVar19;
      pfVar14 = pfVar14 + -(longlong)(param_7 * 2);
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  uVar10 = local_30 ^ (ulonglong)local_68;
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)auStack_90 + lVar7 + lVar6) = &UNK_1452e8600;
  FUN_144d8e3a0(uVar10);
}



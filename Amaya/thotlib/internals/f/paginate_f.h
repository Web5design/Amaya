/*
 *   This file was automatically generated by version 1.7 of cextract.
 *   Manual editing not recommended.
 */

#ifndef __CEXTRACT__
#ifdef __STDC__

extern void InsertPageInTable ( PtrElement pElPage,
                                PtrDocument pDoc,
                                int viewNb,
                                ThotBool * cutDone );
extern void ExcCutPage ( PtrElement *pElFirstSel,
                         PtrElement *pElLastSel,
                         PtrDocument pDoc,
                         ThotBool *toBeSaved,
                         ThotBool *deletePage );
extern PtrElement AddLastPageBreak ( PtrElement pRootEl,
                                     int schView,
                                     PtrDocument pDoc,
                                     ThotBool withAPP );
extern void PaginateView ( PtrDocument pDoc,
                           int view );

#else /* __STDC__ */

extern void InsertPageInTable ( PtrElement pElPage,
                                  PtrDocument pDoc,
                                  int viewNb,
                                  ThotBool * cutDone );
extern void ExcCutPage ( PtrElement *pElFirstSel,
                           PtrElement *pElLastSel,
                           PtrDocument pDoc,
                           ThotBool *toBeSaved,
                           ThotBool *deletePage );
extern PtrElement AddLastPageBreak ( PtrElement pRootEl,
                                       int schView,
                                       PtrDocument pDoc,
                                       ThotBool withAPP );
extern void PaginateView ( PtrDocument pDoc,
                             int view );

#endif /* __STDC__ */
#endif /* __CEXTRACT__ */

/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:18 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSTPasteMap : NSObject {

	set<TSTColumnOrRowMap, TSTColumnOrRowMapTgtLess, std::__1::allocator<TSTColumnOrRowMap> >* mRowTgtToPbMaps;
	set<TSTColumnOrRowMap, TSTColumnOrRowMapTgtLess, std::__1::allocator<TSTColumnOrRowMap> >* mColumnTgtToPbMaps;

}
-(NSRange)p_tgtRangeFromPbRange:(const TSTColumnOrRowMap*)arg1 andMap:(const multiset<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> >*)arg2 ;
-(SCD_Struct_TS491)p_tgtRangeForPbRange:(SCD_Struct_TS491)arg1 givenColumnMaps:(const multiset<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> >*)arg2 rowMaps:(const multiset<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> >*)arg3 ;
-(unsigned short)p_indexForTgtToPbMaps:(set<TSTColumnOrRowMap, TSTColumnOrRowMapTgtLess, std::__1::allocator<TSTColumnOrRowMap> >*)arg1 andMap:(TSTColumnOrRowMap*)arg2 ;
-(SCD_Struct_TS271)p_tgtCellIDForPbCellID:(SCD_Struct_TS271)arg1 givenColumnMaps:(const multiset<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> >*)arg2 rowMaps:(const multiset<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> >*)arg3 ;
-(SCD_Struct_TS491)pbRangeForTgtRange:(SCD_Struct_TS491)arg1 ;
-(SCD_Struct_TS271)pbCellIDForTgtCellID:(SCD_Struct_TS271)arg1 ;
-(vector<TSUColumnRowRect, std::__1::allocator<TSUColumnRowRect> >*)p_tgtRangesForPbRange:(SCD_Struct_TS491)arg1 givenColumnMaps:(const multiset<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> >*)arg2 rowMaps:(const multiset<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> >*)arg3 ;
-(id)initWithPbRange:(SCD_Struct_TS491)arg1 tgtRange:(SCD_Struct_TS491)arg2 ;
-(id)initWithPbTable:(id)arg1 pbRange:(SCD_Struct_TS491)arg2 tgtTable:(id)arg3 tgtRange:(SCD_Struct_TS491)arg4 flag:(int)arg5 ;
-(id)createTgtRegionFromPbRegion:(id)arg1 ;
-(id)createTgtRegionByIntersectingPbRegion:(id)arg1 andTgtRegion:(id)arg2 ;
-(id)createTgtMergeMapFromPbMergeMap:(id)arg1 andTgtRegion:(id*)arg2 andTgtBodyRange:(SCD_Struct_TS491)arg3 ;
@end


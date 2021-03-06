/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:48 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSIndexSet;

@interface SKUISettingsDescriptionUpdate : NSObject {

	NSArray* _indexPaths;
	NSIndexSet* _indexSet;
	long long _updateType;

}

@property (nonatomic,retain) NSArray * indexPaths;                //@synthesize indexPaths=_indexPaths - In the implementation block
@property (nonatomic,retain) NSIndexSet * indexSet;               //@synthesize indexSet=_indexSet - In the implementation block
@property (nonatomic,readonly) long long updateType;              //@synthesize updateType=_updateType - In the implementation block
-(NSIndexSet *)indexSet;
-(long long)updateType;
-(id)initWithUpdateType:(long long)arg1 ;
-(void)setIndexPaths:(NSArray *)arg1 ;
-(NSArray *)indexPaths;
-(void)setIndexSet:(NSIndexSet *)arg1 ;
@end


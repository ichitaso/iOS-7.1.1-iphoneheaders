/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:38:53 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@class SKUIShelfLayoutData;

@interface SKUIShelfCollectionViewLayout : UICollectionViewLayout {

	SKUIShelfLayoutData* _layoutData;

}

@property (nonatomic,retain) SKUIShelfLayoutData * layoutData;              //@synthesize layoutData=_layoutData - In the implementation block
+(Class)layoutAttributesClass;
+(float)snapToBoundariesDecelerationRate;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(void)setLayoutData:(SKUIShelfLayoutData *)arg1 ;
-(SKUIShelfLayoutData *)layoutData;
@end


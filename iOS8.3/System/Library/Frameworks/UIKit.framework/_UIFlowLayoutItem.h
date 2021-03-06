/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:18:04 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class _UIFlowLayoutSection, _UIFlowLayoutRow;

@interface _UIFlowLayoutItem : NSObject {

	_UIFlowLayoutSection* _section;
	_UIFlowLayoutRow* _rowObject;
	CGRect _itemFrame;
	struct {
		unsigned positionEstimated : 1;
	}  _itemFlags;

}

@property (assign,nonatomic) _UIFlowLayoutSection * section;                                 //@synthesize section=_section - In the implementation block
@property (assign,nonatomic) _UIFlowLayoutRow * rowObject;                                   //@synthesize rowObject=_rowObject - In the implementation block
@property (assign,nonatomic) CGRect itemFrame;                                               //@synthesize itemFrame=_itemFrame - In the implementation block
@property (assign,getter=isPositionEstimated,nonatomic) char positionEstimated; 
-(id)copy;
-(_UIFlowLayoutSection *)section;
-(CGRect)itemFrame;
-(void)setItemFrame:(CGRect)arg1 ;
-(_UIFlowLayoutRow *)rowObject;
-(char)isPositionEstimated;
-(void)setPositionEstimated:(char)arg1 ;
-(void)setSection:(_UIFlowLayoutSection *)arg1 ;
-(void)setRowObject:(_UIFlowLayoutRow *)arg1 ;
@end


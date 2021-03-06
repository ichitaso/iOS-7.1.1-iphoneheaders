/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:45 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class EKEvent;

@interface EKEventDetailCell : UITableViewCell {

	EKEvent* _event;
	BOOL _editable;
	double _lastLaidOutWidth;
	int _lastLaidOutPosition;

}

@property (nonatomic,readonly) BOOL isEditable; 
+(double)detailsTopVerticalInset;
+(double)detailsBottomVerticalInset;
+(double)detailsPostLabelSpace;
+(double)detailsCellDefaultHeight;
+(id)_bodyFontAtDefaultSize;
+(double)_scaledDistanceCalculatedFromTopFromBaseline:(double)arg1 ;
+(double)_scaledDistanceCalculatedFromBottomToBaseline:(double)arg1 ;
-(void)layoutForWidth:(double)arg1 position:(int)arg2 ;
-(id)initWithEvent:(id)arg1 editable:(BOOL)arg2 ;
-(id)initWithEvent:(id)arg1 editable:(BOOL)arg2 style:(long long)arg3 ;
-(double)detailsLeftInset;
-(BOOL)needsLayoutForWidth:(double)arg1 position:(int)arg2 ;
-(BOOL)isEditable;
-(void)sizeToFit;
-(BOOL)update;
-(void)setEvent:(id)arg1 ;
@end


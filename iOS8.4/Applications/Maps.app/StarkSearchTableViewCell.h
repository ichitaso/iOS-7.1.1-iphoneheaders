/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:42 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/StarkTableViewCell.h>

@class StarkSearchTableViewCellContentView, StarkSearchTableViewCellLayout;

@interface StarkSearchTableViewCell : StarkTableViewCell {

	StarkSearchTableViewCellContentView* _actualContentView;
	StarkSearchTableViewCellLayout* _layout;

}

@property (nonatomic,readonly) StarkSearchTableViewCellLayout * layout;              //@synthesize layout=_layout - In the implementation block
+(Class)layoutClass;
-(void)setNeedsLayoutForChanges:(/*^block*/id)arg1 ;
-(void)setOrientationIsValid:(char)arg1 ;
-(void)setArrowDirection:(double)arg1 animated:(char)arg2 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(StarkSearchTableViewCellLayout *)layout;
@end


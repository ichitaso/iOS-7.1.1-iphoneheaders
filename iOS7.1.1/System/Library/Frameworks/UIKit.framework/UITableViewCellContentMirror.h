/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@interface UITableViewCellContentMirror : UIView {

	unsigned _selected : 1;

}

@property (assign,getter=isSelected,nonatomic) bool selected; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(bool)isSelected;
-(void)setSelected:(bool)arg1 ;
-(id)cell;
@end


/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol EKCellShortener;
@class UILabel;

@interface CalendarEventEditedByCell : UITableViewCell {

	UILabel* _titleLabel2;
	UILabel* _valueLabel2;
	unsigned _valuePlaceholder : 2;
	<EKCellShortener>* _shortener;

}

@property (nonatomic,readonly) UILabel * textLabel2; 
@property (nonatomic,readonly) UILabel * detailTextLabel2; 
@property (assign,nonatomic,__weak) <EKCellShortener> * shortener;              //@synthesize shortener=_shortener - In the implementation block
-(void)setShortener:(id)arg1 ;
-(id)textLabel2;
-(void)_checkValueWidth;
-(id)shortener;
-(id)detailTextLabel2;
-(void)_copyTextLabelAttributesFrom:(id)arg1 to:(id)arg2 ;
-(bool)detailTextIsPlaceholder;
-(bool)detailText2IsPlaceholder;
-(void)setDetailTextIsPlaceholder:(bool)arg1 ;
-(void)setDetailText2IsPlaceholder:(bool)arg1 ;
-(void)layoutSubviews;
-(void).cxx_destruct;
@end


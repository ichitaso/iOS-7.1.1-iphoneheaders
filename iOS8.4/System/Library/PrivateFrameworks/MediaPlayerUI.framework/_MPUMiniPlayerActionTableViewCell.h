/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImageView, UIImage;

@interface _MPUMiniPlayerActionTableViewCell : UITableViewCell {

	UIImageView* _actionImageView;
	BOOL _showsSeparator;

}

@property (nonatomic,retain) UIImage * actionImage; 
@property (assign,nonatomic) BOOL showsSeparator;                //@synthesize showsSeparator=_showsSeparator - In the implementation block
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setActionImage:(UIImage *)arg1 ;
-(UIImage *)actionImage;
-(BOOL)showsSeparator;
-(void)setShowsSeparator:(BOOL)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MusicUI/MusicUI-Structs.h>
#import <MusicUI/MusicTableViewCellContentView.h>

@class UIImageView, UILabel, NSAttributedString, NSString, UIImage;

@interface _MusicArtistTableViewCellContentView : MusicTableViewCellContentView {

	UIImageView* _artworkImageView;
	UILabel* _detailLabel;
	UILabel* _titleLabel;

}

@property (nonatomic,copy) NSAttributedString * detailAttributedText; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) UIImage * artworkImage; 
-(id)artworkImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(void)setArtworkImage:(id)arg1 ;
-(void)layoutSubviewsPad;
-(void)layoutSubviewsPhone;
-(void)setDetailAttributedText:(id)arg1 ;
-(id)detailAttributedText;
-(void).cxx_destruct;
@end


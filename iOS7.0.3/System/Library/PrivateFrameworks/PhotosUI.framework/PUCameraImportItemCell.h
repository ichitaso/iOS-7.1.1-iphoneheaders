/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class PUPhotoView, UIImageView, UIActivityIndicatorView;

@interface PUCameraImportItemCell : UICollectionViewCell {

	PUPhotoView* _photoView;
	UIImageView* _badgeImageView;
	int _badgeType;
	UIActivityIndicatorView* _spinner;

}

@property (assign,nonatomic) int badgeType;                                  //@synthesize badgeType=_badgeType - In the implementation block
@property (nonatomic,retain) UIImageView * badgeImageView;                   //@synthesize badgeImageView=_badgeImageView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) PUPhotoView * photoView;                        //@synthesize photoView=_photoView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(id)spinner;
-(id)photoView;
-(void)_createSpinnerIfNecessary;
-(void)setBadgeType:(int)arg1 ;
-(void)setPhotoImage:(id)arg1 withSize:(CGSize)arg2 fillMode:(int)arg3 ;
-(void)setPhotoView:(id)arg1 ;
-(id)badgeImageView;
-(void)setBadgeImageView:(id)arg1 ;
-(int)badgeType;
-(void)setSpinner:(id)arg1 ;
-(void).cxx_destruct;
@end


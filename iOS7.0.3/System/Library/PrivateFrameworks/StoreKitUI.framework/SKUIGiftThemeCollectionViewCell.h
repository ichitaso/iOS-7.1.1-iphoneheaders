/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UICollectionViewCell.h>

@class SKUIGiftConfiguration, SKUIGift, UIImageView, SKUIGiftItemView, UILabel, SKUIGiftTheme, UIImage;

@interface SKUIGiftThemeCollectionViewCell : UICollectionViewCell {

	SKUIGiftConfiguration* _giftConfiguration;
	SKUIGift* _gift;
	UIImageView* _headerImageView;
	SKUIGiftItemView* _itemView;
	UILabel* _messageLabel;
	UILabel* _priceLabel;
	UILabel* _senderNameLabel;
	UILabel* _senderNameLabelLabel;
	SKUIGiftTheme* _theme;

}

@property (nonatomic,retain) SKUIGiftConfiguration * giftConfiguration;              //@synthesize giftConfiguration=_giftConfiguration - In the implementation block
@property (nonatomic,retain) SKUIGift * gift;                                        //@synthesize gift=_gift - In the implementation block
@property (nonatomic,retain) SKUIGiftTheme * theme;                                  //@synthesize theme=_theme - In the implementation block
@property (nonatomic,retain) UIImage * itemImage; 
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(id)theme;
-(void)setTheme:(id)arg1 ;
-(id)itemImage;
-(void)setItemImage:(id)arg1 ;
-(id)gift;
-(id)giftConfiguration;
-(id)_itemView;
-(void)setGift:(id)arg1 ;
-(void)reloadThemeHeaderImage;
-(void)setGiftConfiguration:(id)arg1 ;
-(void)_setHeaderImage:(id)arg1 ;
-(void)_setMessage:(id)arg1 ;
-(void)_setSenderName:(id)arg1 ;
-(void)_setPrice:(id)arg1 ;
-(void)_reloadItemView;
-(void).cxx_destruct;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:32 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@protocol MSCLAudioPickerDelegate;
@class SKUIClientContext, NSArray;

@interface MSCLAudioPickerViewController : UINavigationController {

	id<MSCLAudioPickerDelegate> _audioPickerDelegate;
	SKUIClientContext* _clientContext;
	NSArray* _sources;

}

@property (assign,nonatomic,__weak) id<MSCLAudioPickerDelegate> audioPickerDelegate;              //@synthesize audioPickerDelegate=_audioPickerDelegate - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceItems; 
+(id)emptyAudioPickerAlertControllerWithClientContext:(id)arg1 ;
+(id)_songsSourceWithClientContext:(id)arg1 ;
+(id)_voiceMemosSourceWithClientContext:(id)arg1 ;
-(void)_cancelButtonAction:(id)arg1 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithClientContext:(id)arg1 ;
-(void)setAudioPickerDelegate:(id<MSCLAudioPickerDelegate>)arg1 ;
-(BOOL)hasSourceItems;
-(void)_finishWithAttachment:(id)arg1 ;
-(void)_addCancelButtonToViewController:(id)arg1 ;
-(id<MSCLAudioPickerDelegate>)audioPickerDelegate;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:19 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/MusicProductViewController.h>
#import <FuseUI/MusicPlaylistProductMainViewControllerDelegate.h>
#import <FuseUI/MusicPlaylistProductDetailViewControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>

@class MusicPlaylistProductDetailViewController, NSString;

@interface MusicPlaylistProductViewController : MusicProductViewController <MusicPlaylistProductMainViewControllerDelegate, MusicPlaylistProductDetailViewControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate> {

	BOOL _forPlaylistCreation;
	MusicPlaylistProductDetailViewController* _playlistProductDetailViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)storeEntityValueProviderClass;
-(void)dealloc;
-(void)viewDidLoad;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(BOOL)shouldAutomaticallyPopForMissingContainerEntityValueProvider;
-(void)_handleCameraActionFromButton:(id)arg1 ;
-(void)playlistProductMainViewController:(id)arg1 didSelectCameraButton:(id)arg2 ;
-(void)playlistProductMainViewController:(id)arg1 didSelectShareButton:(id)arg2 ;
-(void)playlistProductDetailViewController:(id)arg1 didSelectCameraButton:(id)arg2 ;
-(id)initWithClientContext:(id)arg1 forPlaylistCreation:(BOOL)arg2 ;
-(id)newProductDetailViewController;
-(id)newProductMainViewController;
@end


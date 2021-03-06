/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:15:39 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface ZWAlertManager : NSObject {

	NSString* _currentAlertID;

}

@property (nonatomic,retain) NSString * currentAlertID;              //@synthesize currentAlertID=_currentAlertID - In the implementation block
-(void)setCurrentAlertID:(NSString *)arg1 ;
-(BOOL)_shouldShowZoomAlert;
-(NSString *)currentAlertID;
-(void)showZoomEnabledAlertIfAppropriate;
-(void)showZoomDisabledAlertIfAppropriate;
@end


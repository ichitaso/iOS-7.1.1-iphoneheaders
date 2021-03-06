/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:07 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKeyboardInputMode.h>

@class NSExtension;

@interface UIKeyboardExtensionInputMode : UIKeyboardInputMode {

	NSExtension* _extension;

}

@property (nonatomic,retain) NSExtension * extension;              //@synthesize extension=_extension - In the implementation block
-(void)dealloc;
-(id)hardwareLayout;
-(void)setExtension:(NSExtension *)arg1 ;
-(NSExtension *)extension;
-(id)identifierWithLayouts;
-(char)isExtensionInputMode;
-(char)isDefaultRightToLeft;
-(char)isAllowedForTraits:(id)arg1 ;
-(char)defaultLayoutIsASCIICapable;
-(char)isDesiredForTraits:(id)arg1 forceASCIICapable:(char)arg2 ;
-(id)initWithIdentifier:(id)arg1 ;
-(id)displayName;
-(id)containingBundle;
-(id)normalizedIdentifierLevels;
-(id)extendedDisplayName;
-(id)containingBundleDisplayName;
@end


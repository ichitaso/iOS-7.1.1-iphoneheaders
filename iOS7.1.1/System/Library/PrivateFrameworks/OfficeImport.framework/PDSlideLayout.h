/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/PDSlideChild.h>

@class PDSlideMaster;

@interface PDSlideLayout : PDSlideChild {

	int mSlideLayoutType;
	PDSlideMaster* mSlideMaster;

}
-(void)dealloc;
-(id)background;
-(id)defaultTheme;
-(id)slideMaster;
-(id)parentSlideBase;
-(void)doneWithContent;
-(int)slideLayoutType;
-(void)setSlideMaster:(id)arg1 ;
-(void)setSlideLayoutType:(int)arg1 ;
-(id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(bool)arg3 ;
-(id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(bool)arg4 ;
-(id)parentTextStyleForTables;
-(id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(bool)arg3 ;
-(id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(bool)arg3 ;
-(id)initWithSlideMaster:(id)arg1 ;
-(bool)hasMappableSlideNumberShape;
@end


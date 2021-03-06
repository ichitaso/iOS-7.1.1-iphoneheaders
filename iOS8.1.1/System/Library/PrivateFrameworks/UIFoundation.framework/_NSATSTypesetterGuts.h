/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:20 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSATSLineFragment, NSATSGlyphStorage;

@interface _NSATSTypesetterGuts : NSObject {

	NSATSLineFragment* _lineFragment;
	NSATSGlyphStorage* _glyphStorage;
	unsigned long long _lastGlyphIndex;
	unsigned long long _lastContainerIndex;
	SCD_Struct_NS2* _typesetterAuxiliary;
	/*function pointer*/void** _lineFragmentRectArgs;
	char* _bidiLevels;
	double _defaultTighteningFactor;
	struct {
		unsigned _isiChatTypesetter : 1;
		unsigned _resToWillSetLineFragmentRect : 1;
		unsigned _isBusy : 1;
		unsigned _baselineRendering : 1;
		unsigned _forceWordWrapping : 1;
		unsigned _reserved : 27;
	}  _flags;
	SCD_Struct_NS3 _paragraphState;
	CTTypesetterRef _ctTypesetter;

}
-(void)dealloc;
-(id)initWithTypesetter:(id)arg1 ;
-(void)finalize;
@end


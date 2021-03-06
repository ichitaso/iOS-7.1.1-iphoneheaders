/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSRunStorage, NSTextContainer, NSMutableArray, NSLayoutManagerTextBlockRowArrayCache;

@interface NSExtraLMData : NSObject {

	NSRunStorage* _attachmentSizesRun;
	CGRect _currentAttachmentRect;
	unsigned _currentAttachmentIndex;
	id _fillHoleLock;
	NSRunStorage* _fragmentRunsExtras;
	id _temporaryAttributes;
	NSTextContainer* _firstTextContainer;
	CFDictionaryRef _textContainerIndexes;
	CFDictionaryRef _textContainerGlyphIndexes;
	int _typesetterBehavior;
	CGRect _cachedFontBounds;
	float _cachedUnderlineThickness;
	float _cachedUnderlinePosition;
	float _cachedUnderlineAdjustment;
	NSRange _cachedUnderlineRange;
	NSMutableArray* _blockRunsArray;
	float _hyphenationFactor;
	NSMutableArray* _insertionPointCache;
	NSGlyphTree* _glyphTree;
	NSLayoutTree* _layoutTree;
	NSRange _firstTextViewVisibleCharRange;
	CGSize _firstTextViewVisibleOffset;
	NSRange _lastInvalidatedCharRange;
	float _lastInvalidatedLongitudinalPosition;
	NSTextContainer* _lastInvalidatedTextContainer;
	NSLayoutManagerTextBlockRowArrayCache* _rowArrayCache;
	struct {
		unsigned glyphCause : 6;
		unsigned layoutCause : 6;
		unsigned delegateRespondsToTempAttrs : 1;
		unsigned processingFirstTextViewVisible : 1;
		unsigned temporarySpacingChange : 1;
		unsigned alwaysDrawsActive : 1;
		unsigned usesOldShowPackedGlyphs : 1;
		unsigned drawsUnderlinesLikeWebKit : 1;
		unsigned drawsDebugBaselines : 1;
		unsigned reserved : 13;
	}  _lmFlags2;

}
@end


/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:06 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray;

@interface IMHandleRegistrarInternal : NSObject {

	NSMutableDictionary* _siblingsMap;
	NSMutableDictionary* _accountSiblingsMap;
	NSMutableDictionary* _existingAccountSiblingsMap;
	NSMutableDictionary* _chatSiblingsMap;
	NSMutableDictionary* _existingChatSiblingsMap;
	NSMutableArray* _allIMHandles;
	BOOL _buildingChatSiblings;

}
-(void)dealloc;
@end


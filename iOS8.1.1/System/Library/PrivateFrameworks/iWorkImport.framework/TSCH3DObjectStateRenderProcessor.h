/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:23 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DRetargetRenderProcessor.h>

@interface TSCH3DObjectStateRenderProcessor : TSCH3DRetargetRenderProcessor {

	StateStack<TSCH3D::ObjectState, 6>* mObjectStateStack;

}
-(StateStack<TSCH3D::ObjectState, 6>*)objectStateStack;
-(void)resetBuffers;
-(void)popState;
-(void)pushState;
@end


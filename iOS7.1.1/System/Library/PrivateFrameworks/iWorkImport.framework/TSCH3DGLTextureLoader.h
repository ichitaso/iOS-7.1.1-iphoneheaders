/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:25 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DResourceLoader.h>

@interface TSCH3DGLTextureLoader : TSCH3DResourceLoader
+(id)loader;
+(id)allocWithZone:(NSZone)arg1 ;
+(id)_singletonAlloc;
-(id)generateHandleWithConfig:(void*)arg1 ;
-(unsigned long long)uploadDataBuffer:(id)arg1 handle:(id)arg2 insideSession:(id)arg3 config:(void*)arg4 ;
-(void)bindHandle:(id)arg1 config:(void*)arg2 ;
-(void)deactivateHandle:(id)arg1 insideContext:(id)arg2 ;
-(void)postbindHandle:(id)arg1 config:(void*)arg2 ;
-(bool)activateResource:(id)arg1 insideSession:(id)arg2 unit:(long long)arg3 type:(int)arg4 attributes:(const TextureAttributes*)arg5 ;
-(id)p_convertDataBuffer:(id)arg1 format:(TSCH3DGLTextureFormat)arg2 returningConvertedFormat:(TSCH3DGLTextureFormat*)arg3 ;
-(bool)shouldReuploadHandle:(id)arg1 config:(void*)arg2 ;
-(unsigned long long)uploadResource:(id)arg1 handle:(id)arg2 insideSession:(id)arg3 config:(void*)arg4 ;
-(oneway void)release;
-(id)retain;
-(id)autorelease;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone)arg1 ;
@end


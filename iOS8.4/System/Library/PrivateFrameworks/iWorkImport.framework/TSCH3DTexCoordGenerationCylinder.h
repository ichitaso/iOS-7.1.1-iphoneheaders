/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DTexCoordGeneration.h>

@interface TSCH3DTexCoordGenerationCylinder : TSCH3DTexCoordGeneration {

	box<glm::detail::tvec3<float> > mBbox;

}
+(id)generatorWithBBox:(const box<glm::detail::tvec3<float> >*)arg1 ;
+(id)generatorWithBBox:(const box<glm::detail::tvec3<float> >*)arg1 transform:(const tmat4x4<float>*)arg2 ;
-(id)initWithBBox:(const box<glm::detail::tvec3<float> >*)arg1 ;
-(id)initWithBBox:(const box<glm::detail::tvec3<float> >*)arg1 transform:(const tmat4x4<float>*)arg2 ;
-(void)generateFromVertexArray:(const tvec3<float>*)arg1 normalArray:(const tvec3<float>*)arg2 numVertices:(long long)arg3 destination4D:(tvec4<float>*)arg4 ;
@end


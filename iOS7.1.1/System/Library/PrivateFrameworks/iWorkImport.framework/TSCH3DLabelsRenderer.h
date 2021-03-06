/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:31 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCH3DResource, TSCH3DLabelResource, TSCH3DLabelResources, TSCH3DSceneRenderPipeline, TSCH3DCamera, TSCH3DDataBufferResource, TSCH3DLabelsMeshRenderer, TSCH3DLabelsRendererTransforms;

@interface TSCH3DLabelsRenderer : NSObject {

	TSCH3DResource* mLabelQuad;
	bool mUseLabelBounds;
	TSCH3DLabelResource* mLabel;
	TSCH3DLabelResources* mResources;
	TSCH3DSceneRenderPipeline* mPipeline;
	TSCH3DCamera* mLabelCamera;
	LabelRenderInfo mInfo;
	TSCH3DDataBufferResource* mMesh;
	TSCH3DLabelsMeshRenderer* mMeshRenderer;
	TSCH3DLabelsRendererTransforms* mTransforms;

}

@property (assign,nonatomic) bool useLabelBounds; 
@property (nonatomic,readonly) LabelRenderInfo renderInfo; 
@property (nonatomic,retain) TSCH3DLabelResource * label; 
@property (nonatomic,retain) TSCH3DLabelResources * resources; 
@property (nonatomic,retain) TSCH3DSceneRenderPipeline * pipeline; 
@property (nonatomic,retain) TSCH3DLabelsMeshRenderer * meshRenderer; 
@property (nonatomic,retain) TSCH3DDataBufferResource * mesh; 
@property (nonatomic,readonly) TSCH3DCamera * labelCamera; 
+(id)renderCacheKey;
+(id)renderer;
-(id)pipeline;
-(void)prepareCachedIndex:(const tvec2<int>*)arg1 string:(id)arg2 alignmentPadding:(const tvec2<float>*)arg3 width:(double)arg4 bitmapContextInfo:(id)arg5 ;
-(void)delegateDidSubmitLabel;
-(void)renderAtPosition:(const tvec3<float>*)arg1 offset:(const tvec3<float>*)arg2 alignment:(unsigned)arg3 offset2D:(const tvec2<float>*)arg4 rotation:(float)arg5 externalAttribute:(const ExternalLabelAttribute*)arg6 ;
-(void)postrender:(id)arg1 ;
-(void)prerender:(id)arg1 ;
-(LabelRenderInfo)renderInfo;
-(id)p_renderCacheKey;
-(id)labelCamera;
-(const tmat4x4<float>*)unitToWorld;
-(const tmat4x4<float>*)worldToStage;
-(id)p_renderCacheID;
-(id)p_renderCacheFromScene:(id)arg1 created:(bool*)arg2 createIfAbsent:(bool)arg3 ;
-(bool)cacheEnabled;
-(bool)hasCachedLabels;
-(void)setPipeline:(id)arg1 ;
-(void)setMeshRenderer:(id)arg1 ;
-(id)meshRenderer;
-(bool)isCacheValid;
-(id)labelQuad;
-(bool)beginResources:(id)arg1 expectedSize:(tvec2<int>*)arg2 ;
-(void)endResources;
-(bool)useLabelBounds;
-(void)setUseLabelBounds:(bool)arg1 ;
-(void)dealloc;
-(id)init;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(id).cxx_construct;
-(id)resources;
-(void)setResources:(id)arg1 ;
-(id)effects;
-(id)mesh;
-(void)setMesh:(id)arg1 ;
@end


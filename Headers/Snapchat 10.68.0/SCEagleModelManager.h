//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCEagleModelLabeling-Protocol.h"

@class NSCache, SCEagleModelGCSResourceFetcher;

@interface SCEagleModelManager : NSObject <SCEagleModelLabeling>
{
    SCEagleModelGCSResourceFetcher *_gcsFetcher;
    NSCache *_snapToLabelsCache;
}

+ (void)cleanResources;
- (void).cxx_destruct;
- (void)_saveModelToDisk:(id)arg1 withModelFileName:(id)arg2;
- (_Bool)_verifyModelOnDisk;
- (void)_fetchModelsFromServer;
- (id)_parseResults:(vector_f9ed6fc8)arg1;
- (id)_decryptModel:(id)arg1;
- (id)classifyImage:(id)arg1 withImageId:(id)arg2;
- (void)initializeModel;
- (void)prepare:(id)arg1;
- (_Bool)isReady;
- (id)initWithRequestManager:(id)arg1;

@end


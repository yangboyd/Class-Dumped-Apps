//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, YTUploadGelLogger, YTUploadProgressProvider, YTUploadTaskStore;

@interface YTUploadClient : NSObject
{
    GIMMe *_gimme;
    YTUploadGelLogger *_logger;
    YTUploadTaskStore *_taskStore;
    YTUploadProgressProvider *_progressProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YTUploadProgressProvider *progressProvider; // @synthesize progressProvider=_progressProvider;
@property(retain, nonatomic) YTUploadTaskStore *taskStore; // @synthesize taskStore=_taskStore;
@property(retain, nonatomic) YTUploadGelLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)updateMetadata:(id)arg1 forFrontendID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateUploadType:(int)arg1 forFrontendID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateVideoAssetProperties:(id)arg1 uploadFlowSource:(int)arg2 forFrontendID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)confirmUploadForFrontendID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createUploadTaskWithObserver:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end


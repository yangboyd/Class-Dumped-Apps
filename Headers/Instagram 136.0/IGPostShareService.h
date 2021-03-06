//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGMediaUploadDispatcher, IGPostLoggingContext, IGPostSessionLogger, IGPostShareConfig, IGPostShareLogger, IGUserSession, NSString;

@interface IGPostShareService : NSObject
{
    IGMediaUploadDispatcher *_dispatcher;
    IGPostShareConfig *_config;
    IGUserSession *_userSession;
    IGPostLoggingContext *_loggingContext;
    NSString *_shareId;
    IGPostShareLogger *_logger;
    IGPostSessionLogger *_postSessionLogger;
    NSString *_waterfallId;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)shareWithNetworker:(id)arg1 configureNonce:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithConfig:(id)arg1 userSession:(id)arg2 loggingContext:(id)arg3 shareId:(id)arg4;

@end


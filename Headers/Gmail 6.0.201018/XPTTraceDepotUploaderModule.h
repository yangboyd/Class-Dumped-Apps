//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JXPTLoggingProto_Platform;
@protocol JavaUtilConcurrentScheduledExecutorService, JavaxInjectProvider;

@interface XPTTraceDepotUploaderModule : NSObject
{
    id <JavaxInjectProvider> metadataProvider_;
    id <JavaUtilConcurrentScheduledExecutorService> executor_;
    JXPTLoggingProto_Platform *platform_;
}

- (void)dealloc;
- (id)provideScheduledExecutorService;
- (id)provideMetadata;

@end


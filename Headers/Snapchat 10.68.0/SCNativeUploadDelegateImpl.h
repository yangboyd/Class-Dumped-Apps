//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNMessagingUploadDelegate-Protocol.h"

@class SCQueuePerformer;
@protocol SCMediaOrchestrating;

@interface SCNativeUploadDelegateImpl : NSObject <SCNMessagingUploadDelegate>
{
    id <SCMediaOrchestrating> _mediaOrchestrator;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (void)uploadMedia:(id)arg1 callback:(id)arg2;
- (id)initWithMediaOrchestrator:(id)arg1;

@end


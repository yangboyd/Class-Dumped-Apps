//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSSyncV2GetReactorsSyncLauncher_Request.h"

@class DYNSCommonEmoji, DYNSCommonInternalRequestContext, DYNSCommonMessageId;

@interface DYNSSyncV2AutoValue_GetReactorsSyncLauncher_Request : DYNSSyncV2GetReactorsSyncLauncher_Request
{
    DYNSCommonInternalRequestContext *requestContext_;
    DYNSCommonMessageId *messageId_;
    DYNSCommonEmoji *emoji_;
}

- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)getEmoji;
- (id)getMessageId;
- (id)getRequestContext;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/NSCopying-Protocol.h>

@interface RSBMMediaSyncState : NSObject <NSCopying>
{
    struct __MCFRuntimeBaseData _reserved;
    int action;
    struct __RSActionMetadata *actionMetadata;
    struct __MCFString *contentId;
    int contentSource;
    struct __RSMediaSyncContent *content;
    struct __MCFString *adminMessage;
    long long localClockOffsetMs;
}

+ (id)RSBMMediaSyncStateWithAction:(int)arg1 actionMetadata:(id)arg2 contentId:(id)arg3 contentSource:(int)arg4 content:(id)arg5 adminMessage:(id)arg6 localClockOffsetMs:(long long)arg7;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)description;
- (unsigned long long)_cfTypeID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)localClockOffsetMs;
- (id)adminMessage;
- (id)content;
- (int)contentSource;
- (id)contentId;
- (id)actionMetadata;
- (int)action;

@end


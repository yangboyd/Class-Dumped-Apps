//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WACallCommonInfo.h"

@class WACallLogInfo;

@interface WACallHeldInfo : WACallCommonInfo
{
    WACallLogInfo *_callLogInfo;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WACallLogInfo *callLogInfo; // @synthesize callLogInfo=_callLogInfo;
- (id)initWithHeldCallInfo:(CDStruct_9c8e772c)arg1;

@end


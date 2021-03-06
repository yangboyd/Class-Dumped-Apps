//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class NSError;

@interface IGDirectOutgoingMessageStatus : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSError *_failed_error;
    _Bool _failed_manualRetryPermitted;
}

+ (id)sent;
+ (id)sending;
+ (id)failedWithError:(id)arg1 manualRetryPermitted:(_Bool)arg2;
- (void).cxx_destruct;
- (void)matchSending:(CDUnknownBlockType)arg1 failed:(CDUnknownBlockType)arg2 sent:(CDUnknownBlockType)arg3;
- (_Bool)matchBooleanSending:(CDUnknownBlockType)arg1 failed:(CDUnknownBlockType)arg2 sent:(CDUnknownBlockType)arg3;

@end


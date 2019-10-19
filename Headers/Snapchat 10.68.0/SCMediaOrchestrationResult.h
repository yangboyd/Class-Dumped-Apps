//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCDataUploadSuccessResult;

@interface SCMediaOrchestrationResult : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCDataUploadSuccessResult *_success_uploadSuccessResult;
}

+ (id)successWithUploadSuccessResult:(id)arg1;
+ (id)failureRetriable;
+ (id)failurePermanent;
- (void).cxx_destruct;
- (void)matchSuccess:(CDUnknownBlockType)arg1 failureRetriable:(CDUnknownBlockType)arg2 failurePermanent:(CDUnknownBlockType)arg3;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


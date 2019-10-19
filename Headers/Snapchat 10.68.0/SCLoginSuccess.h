//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCLoginSuccessResult;

@interface SCLoginSuccess : NSObject <NSCopying>
{
    SCLoginSuccessResult *_result;
    id _fullResponse;
    id _fideliusTempIdentity;
}

@property(readonly, copy, nonatomic) id fideliusTempIdentity; // @synthesize fideliusTempIdentity=_fideliusTempIdentity;
@property(readonly, copy, nonatomic) id fullResponse; // @synthesize fullResponse=_fullResponse;
@property(readonly, copy, nonatomic) SCLoginSuccessResult *result; // @synthesize result=_result;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResult:(id)arg1 fullResponse:(id)arg2 fideliusTempIdentity:(id)arg3;

@end


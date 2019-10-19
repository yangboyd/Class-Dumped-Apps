//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class YTIPlayabilityStatus;

@interface YTPlayabilityResolutionUserActionRequest : NSObject
{
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _errorBlock;
    CDUnknownBlockType _cancelBlock;
    _Bool _completed;
    YTIPlayabilityStatus *_playabilityStatus;
}

+ (_Bool)canResolvePlayabilityStatus:(id)arg1;
@property(readonly, nonatomic) YTIPlayabilityStatus *playabilityStatus; // @synthesize playabilityStatus=_playabilityStatus;
- (void).cxx_destruct;
- (void)completePlayabilityResolutionUserActionWithContentCheckOk:(_Bool)arg1 adultContentOk:(_Bool)arg2 koreanAgeVerificationComplete:(_Bool)arg3;
- (void)failPlayabilityResolutionWithError:(id)arg1;
- (void)cancelPlayabilityResolution;
- (id)initWithPlayabilityStatus:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3 cancelBlock:(CDUnknownBlockType)arg4;

@end


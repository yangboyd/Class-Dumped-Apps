//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCSessionRequestManager;

@interface SCMomentsOptInManager : NSObject
{
    NSString *_userId;
    SCSessionRequestManager *_requestManager;
}

- (void).cxx_destruct;
- (void)updateSubscription:(_Bool)arg1 optInEvent:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithUserId:(id)arg1 requestManager:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface SCCognacAppActiveCardEligibility : NSObject
{
    NSMutableSet *_appInstanceIds;
}

- (void).cxx_destruct;
- (void)didOpenAppInstanceWithAppInstanceId:(id)arg1;
- (void)didShowAppActiveCardForAppInstanceId:(id)arg1;
- (_Bool)shouldShowAppActiveCardForAppInstanceId:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNShimsDispatchQueue-Protocol.h"

@protocol SCPerforming;

@interface SCNativeDispatchQueue : NSObject <SCNShimsDispatchQueue>
{
    id <SCPerforming> _performer;
}

- (void).cxx_destruct;
- (void)submitWithDelay:(id)arg1 delayMs:(long long)arg2;
- (void)submit:(id)arg1;
- (id)initWithPerformer:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTEditA11yRunningCounter-Protocol.h"

@class GSZCounter, NSString;
@protocol GSZStreamzService;

@interface YTEditA11yRunningCounter : NSObject <YTEditA11yRunningCounter>
{
    id <GSZStreamzService> _streamzService;
    GSZCounter *_counter;
}

- (void).cxx_destruct;
- (void)incrementBy:(long long)arg1 withIsA11yEnabled:(_Bool)arg2 kazooClient:(id)arg3;
- (void)incrementWithIsA11yEnabled:(_Bool)arg1 kazooClient:(id)arg2;
- (id)initWithStreamzService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSearchV2ChatPresenting-Protocol.h"

@class NSString, SCUserSession;

@interface SCSearchV2ChatPresenter : NSObject <SCSearchV2ChatPresenting>
{
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)presentChatForGroupId:(id)arg1 deeplinkURL:(id)arg2 onViewController:(id)arg3;
- (void)presentChatForUsername:(id)arg1 deeplinkURL:(id)arg2 onViewController:(id)arg3;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


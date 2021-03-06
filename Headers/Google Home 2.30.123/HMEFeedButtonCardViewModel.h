//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEFeedViewModelCell-Protocol.h"

@class GHCAction, NSString;
@protocol HMEFeedAction;

@interface HMEFeedButtonCardViewModel : NSObject <HMEFeedViewModelCell>
{
    NSString *_actionText;
    GHCAction *_action;
    id <HMEFeedAction> _actionHandler;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <HMEFeedAction> actionHandler; // @synthesize actionHandler=_actionHandler;
@property(readonly, copy, nonatomic) GHCAction *action; // @synthesize action=_action;
@property(readonly, copy, nonatomic) NSString *actionText; // @synthesize actionText=_actionText;
- (void)performAction;
@property(readonly, copy, nonatomic) NSString *cellIdentifier;
- (id)initWithFeedItem:(id)arg1 actionFeedItem:(id)arg2 actionHandler:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


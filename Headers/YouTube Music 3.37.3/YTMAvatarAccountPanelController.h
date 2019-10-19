//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTMAccountPanelController-Protocol.h"
#import "YTMAvatarAccountViewControllerDelegate-Protocol.h"
#import "YTResponder-Protocol.h"
#import "YTUserChangedObserver-Protocol.h"

@class GIMMe, NSString, YTMAvatarAccountViewController;
@protocol YTMServices, YTResponder;

@interface YTMAvatarAccountPanelController : NSObject <YTMAvatarAccountViewControllerDelegate, YTUserChangedObserver, YTMAccountPanelController, YTResponder>
{
    id <YTMServices> _services;
    CDUnknownBlockType _completionBlock;
    YTMAvatarAccountViewController *_accountViewController;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)userDidChange;
- (void)avatarAccountViewControllerDidDismiss:(id)arg1;
- (_Bool)isPanelHidden;
- (void)setPanelHidden:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2 animated:(_Bool)arg3;
- (id)initWithServices:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOIModalView.h"

@class NSDictionary, NSString;
@protocol GOIAccountSelectorViewDelegate, SSOIdentity, SSOService;

@interface GOIAccountSelectorView : GOIModalView
{
    id <SSOIdentity> _userIdentity;
    id <SSOService> _ssoService;
    NSString *_serviceName;
    NSDictionary *_UIResources;
    id <GOIAccountSelectorViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)cancelAction;
- (void)useAnotherAccount;
- (void)selectAccountAction;
- (id)accountButtonWithTitle:(id)arg1 subtitle:(id)arg2 accessibilityHint:(id)arg3 action:(SEL)arg4 profileImageView:(id)arg5 height:(double)arg6 canvas:(id)arg7;
- (void)addCancelButtonWithAction:(SEL)arg1 canvas:(id)arg2;
- (void)addLinkAnotherAccountButtonWithAction:(SEL)arg1 canvas:(id)arg2;
- (void)addUseProviderAccountButtonWithAction:(SEL)arg1 canvas:(id)arg2;
- (void)addAccountSelectorButtonWithAction:(SEL)arg1 canvas:(id)arg2;
- (void)setUpDefaultDisplay;
- (void)positionOnScreen;
- (id)initWithIdentity:(id)arg1 serviceName:(id)arg2 ssoService:(id)arg3 UIResources:(id)arg4 delegate:(id)arg5;

@end


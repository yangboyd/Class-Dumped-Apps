//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ASMObservable, UIView;
@protocol OGLAccount;

@protocol ASMIdentityDiscViewModel <NSObject>
@property(nonatomic) _Bool allowAccountSwitching;
@property(readonly, nonatomic) ASMObservable *accessibilityTraits;
@property(readonly, nonatomic) ASMObservable *accessibilityHint;
@property(readonly, nonatomic) ASMObservable *accessibilityLabel;
@property(readonly, nonatomic) ASMObservable *loading;
@property(readonly, nonatomic) ASMObservable *showAccountInfo;
@property(readonly, nonatomic) ASMObservable *showAccountSwitcher;
@property(readonly, nonatomic) ASMObservable *refreshPictureAction;
@property(readonly, nonatomic) ASMObservable *currentAccount;
- (void)updateWithAccount:(id <OGLAccount>)arg1;
- (void)userDidTapOnView:(UIView *)arg1 useUIKit:(_Bool)arg2;
@end


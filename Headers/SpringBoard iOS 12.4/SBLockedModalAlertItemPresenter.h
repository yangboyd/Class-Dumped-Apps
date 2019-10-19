//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBAlertItemPresenter.h"
#import "SBLockScreenActionProvider.h"

@class NSString, SBSharedModalAlertItemPresenter;

@interface SBLockedModalAlertItemPresenter : NSObject <SBAlertItemPresenter, SBLockScreenActionProvider>
{
    SBSharedModalAlertItemPresenter *_modalAlertPresenter;
}

- (void).cxx_destruct;
- (id)lockScreenActionContext;
- (void)dismissAlertItem:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentAlertItem:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)canPresentMultipleAlertItemsSimultaneously;
- (_Bool)presentsAlertItemsModally;
- (id)initWithSharedModalAlertItemPresenter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


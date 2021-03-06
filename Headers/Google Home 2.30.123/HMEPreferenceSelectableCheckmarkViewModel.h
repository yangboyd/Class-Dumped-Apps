//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEPreferenceMutableViewModel-Protocol.h"

@class GHCClientRpcInvocation, GHCConfirmationDialog, GHCPreferenceId, GHCPreferenceNewScreenAction, GHCPreferenceSetting, NSAttributedString, NSString, NSURL;
@protocol HMEPreferenceAnalyticsLogging, HMEPreferenceData, HMEPreferenceMutableViewModelDelegate;

@interface HMEPreferenceSelectableCheckmarkViewModel : NSObject <HMEPreferenceMutableViewModel>
{
    _Bool _disabled;
    _Bool _refreshOnReturn;
    _Bool _selected;
    _Bool _bottomDividerHidden;
    int _updateType;
    NSString *_title;
    NSString *_subtitle;
    NSAttributedString *_attributedSubtitle;
    GHCPreferenceId *_preferenceID;
    CDUnknownBlockType _preferenceUpdateBlock;
    id <HMEPreferenceMutableViewModelDelegate> _delegate;
    id <HMEPreferenceData> _preferenceChildData;
    GHCClientRpcInvocation *_rpcInvocation;
    NSURL *_deeplinkURL;
    GHCConfirmationDialog *_confirmationDialog;
    GHCPreferenceNewScreenAction *_preferenceScreenAction;
    id <HMEPreferenceAnalyticsLogging> _analyticsLogger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool bottomDividerHidden; // @synthesize bottomDividerHidden=_bottomDividerHidden;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(readonly, nonatomic) id <HMEPreferenceAnalyticsLogging> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(readonly, nonatomic, getter=shouldRefreshOnReturn) _Bool refreshOnReturn; // @synthesize refreshOnReturn=_refreshOnReturn;
@property(readonly, nonatomic) GHCPreferenceNewScreenAction *preferenceScreenAction; // @synthesize preferenceScreenAction=_preferenceScreenAction;
@property(readonly, nonatomic) int updateType; // @synthesize updateType=_updateType;
@property(readonly, nonatomic) GHCConfirmationDialog *confirmationDialog; // @synthesize confirmationDialog=_confirmationDialog;
@property(readonly, nonatomic) NSURL *deeplinkURL; // @synthesize deeplinkURL=_deeplinkURL;
@property(readonly, nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(readonly, nonatomic) GHCClientRpcInvocation *rpcInvocation; // @synthesize rpcInvocation=_rpcInvocation;
@property(retain, nonatomic) id <HMEPreferenceData> preferenceChildData; // @synthesize preferenceChildData=_preferenceChildData;
@property(nonatomic) __weak id <HMEPreferenceMutableViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) CDUnknownBlockType preferenceUpdateBlock; // @synthesize preferenceUpdateBlock=_preferenceUpdateBlock;
@property(readonly, nonatomic) GHCPreferenceId *preferenceID; // @synthesize preferenceID=_preferenceID;
@property(readonly, nonatomic) NSAttributedString *attributedSubtitle; // @synthesize attributedSubtitle=_attributedSubtitle;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)logCustomUserActionWithError:(id)arg1;
@property(readonly, copy, nonatomic) NSString *cellIdentifier;
@property(readonly, nonatomic) long long renderType;
@property(readonly, nonatomic) GHCPreferenceSetting *preferenceSetting;
- (id)initWithPreferenceNode:(id)arg1 preferenceUpdateBlock:(CDUnknownBlockType)arg2 analyticsLogger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


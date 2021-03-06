//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTCapabilitiesSection.h"

#import "ASTLinkSelection-Protocol.h"
#import "SFSafariViewControllerDelegate-Protocol.h"

@class ASTThemableAlertView, ASTUIAgent, NSString;

@interface ASTCapabilitiesAgentFooterSection : ASTCapabilitiesSection <ASTLinkSelection, SFSafariViewControllerDelegate>
{
    ASTUIAgent *_agent;
    ASTThemableAlertView *_resetDialog;
}

- (void).cxx_destruct;
- (void)pushSFWebViewControllerWithLink:(id)arg1;
- (void)refetchSettings;
- (void)performResetAgent;
- (void)showResetServiceDialog;
- (id)incognitoStreamItemAttributedString;
- (id)incognitoStoredDataStreamItem;
- (id)incognitoStreamItem;
- (id)claimItemWithTitle:(id)arg1 subtitle:(id)arg2 uuid:(id)arg3;
- (id)footerItemWithTitle:(id)arg1 subtitle:(id)arg2 uuid:(id)arg3;
- (id)footerItemWithTitle:(id)arg1 uuid:(id)arg2;
- (void)didTapViewStoredDataItem;
- (void)didTapIncogonitoModeItem:(id)arg1;
- (void)didTapClaimFooterItem;
- (void)didTapReportServiceFooterItem;
- (void)didTapTermsOfServiceFooterItem;
- (void)didTapPrivacyFooterItem;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)setUpSection;
- (void)linkWasTapped:(id)arg1;
- (_Bool)didSelectStreamItem:(id)arg1;
- (id)initWithInsets:(struct UIEdgeInsets)arg1 agent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


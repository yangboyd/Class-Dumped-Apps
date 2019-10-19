//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GOOResources : NSObject
{
}

+ (id)tintImage:(id)arg1 withColor:(id)arg2;
+ (id)bundlePathWithName:(id)arg1;
+ (id)baseBundle;
+ (id)sharedInstance;
+ (id)ghk_iconWithName:(id)arg1 color:(id)arg2;
- (id)fontWithName:(id)arg1 size:(double)arg2;
- (id)headerFontWithSize:(double)arg1;
- (id)boldTextFontWithSize:(double)arg1;
- (id)mediumTextFontWithSize:(double)arg1;
- (id)lightTextFontWithSize:(double)arg1;
- (id)textFontWithSize:(double)arg1;
- (void)applyTitleColorSelector:(SEL)arg1 toButton:(id)arg2;
- (void)applyBackgroundImageSelector:(SEL)arg1 toButton:(id)arg2;
- (void)applyImageSelector:(SEL)arg1 toButton:(id)arg2;
- (id)gradientColorsForDarkHighlight;
- (id)gradientColorsForHighlight;
- (id)colorForHighlightState;
- (id)stringForKey:(id)arg1 bundleName:(id)arg2;
- (id)imageWithResourceName:(id)arg1 bundleName:(id)arg2 tintColor:(id)arg3;
- (id)imageWithResourceName:(id)arg1 bundleName:(id)arg2;
- (id)imageFromAssetCatalogWithResourceName:(id)arg1 bundleName:(id)arg2;
- (id)bundleWithName:(id)arg1;
- (id)tintImage:(id)arg1 withColor:(id)arg2;
- (id)panelStringForID:(int)arg1;
- (id)panelImageWithResourceName:(id)arg1 tintColor:(id)arg2;
- (id)panelImageWithResourceName:(id)arg1;
- (id)panelMainOverlayAccessibilityTitleString;
- (id)panelProfileCellAccessibilityHintString;
- (id)panelCarouselViewHeaderSelectAccountAccessibilityHintString;
- (id)panelCarouselViewHeaderNotificationBadgeOverflowTemplateString;
- (id)panelCarouselViewHeaderAccessibilityTemplateString;
- (id)panelManageProfilesString;
- (id)panelAccountsToggleOffButtonAccessibilityLabelString;
- (id)panelAccountsToggleOnButtonAccessibilityLabelString;
- (id)panelAccountCellSelectedAccountAccessibilityLabelString;
- (id)panelProductSettingsAccessibilityLabelString;
- (id)panelTermsOfServiceString;
- (id)panelPrivacyPolicyString;
- (id)panelAccountCellSelectedAccountAccessibilityHintString;
- (id)panelChooseAnAccountString;
- (id)panelSignInString;
- (id)panelMainOverlayAccessibilityLabelString;
- (id)panelGLIFOverlayBackgroundColor;
- (id)panelColorForSideViewNotificationLabelBackground;
- (id)panelColorForSideViewNotificationLabelText;
- (id)panelColorForSideViewProfileNameLabel;
- (id)panelColorForSideViewProfileHeaderLabel;
- (id)panelColorForGLIFSideViewSectionDivider;
- (id)panelColorForSideViewItemSectionHeaderView;
- (id)panelColorForSideViewCellSelectedBackground;
- (id)panelColorForGLIFSideViewSectionText;
- (id)panelColorForSideViewSectionText;
- (id)panelColorForSideViewCellTextSubtitle;
- (id)panelColorForSideViewCellText;
- (id)atticPanelColorForSidebarTextHighlight;
- (id)atticPanelColorForSidebarBackground;
- (id)panelColorForDividerBackground;
- (id)panelColorForSidebarItemText;
- (id)panelColorForSidebarBackground;
- (id)accountCircleWithColor:(id)arg1;
- (id)accountCircle;
- (id)manageProfilesGear;
- (id)panelAccountComponentChevron;
- (id)panelCarouselChevronWithColor:(id)arg1;
- (id)panelCarouselChevron;
- (id)panelHighlightedImageForSettings;
- (id)panelImageForSettings;
- (id)panelFontForSideViewNotificationBadgeLabel;
- (id)panelFontForSideViewProfileNameLabel;
- (id)panelFontForSideViewProfileHeaderLabel;
- (id)panelFontForSideViewProfileCellEmail;
- (id)panelFontForSideViewItemCellSubtitle;
- (id)panelFontForSideViewItemCellTitle;
- (id)panelFontForSidebarItem;
- (id)reloadButtonA11yLabelString;
- (id)forwardButtonA11yLabelString;
- (id)closeButtonA11yLabelString;
- (id)backButtonA11yLabelString;
- (id)actionButtonA11yLabelString;
- (id)webLoadingString;
- (id)webStringForId:(int)arg1;
- (id)webLockImageWithTintColor:(id)arg1;
- (id)webActionImage;
- (id)webReloadImage;
- (id)webForwardImageDisabled;
- (id)webForwardImage;
- (id)webBackImageDisabled;
- (id)webBackImage;
- (id)webShadow;
- (id)webClose;
- (id)webImageWithType:(long long)arg1 disabled:(_Bool)arg2;
- (id)imageNamed:(id)arg1;
- (id)helpKitBundle;
- (id)ghk_stringLookUp:(int)arg1 type:(long long)arg2;
- (id)ghk_imageWithResourceName:(id)arg1;
- (id)ghk_chatCSATSurveyJSON;
- (id)ghk_feedbackIconImage:(id)arg1;
- (id)ghk_sendImage:(id)arg1;
- (id)ghk_micImage:(id)arg1;
- (id)ghk_errorIconImage18pt:(id)arg1;
- (id)ghk_clockIconImageGM2:(id)arg1;
- (id)ghk_clockIconImage:(id)arg1;
- (id)ghk_noInternetBackgroundImage:(id)arg1;
- (id)ghk_chatQueueBackgroundImageGM2:(id)arg1;
- (id)ghk_chatQueueBackgroundImage:(id)arg1;
- (id)ghk_chatIconImage:(id)arg1;
- (id)ghk_phoneIconImage:(id)arg1;
- (id)ghk_arrowDropDownImage:(id)arg1;
- (id)ghk_offlineIconImage;
- (id)ghk_supportForumIconImage;
- (id)ghk_helpArticleIconImage;
- (id)ghk_chatSendImage;
- (id)ghk_actionHelpUnitImage;
- (id)ghk_assistantHideContactUs:(long long)arg1;
- (id)ghk_assistantShowContactUs:(long long)arg1;
- (id)ghk_assistantMinimizeTab:(long long)arg1;
- (id)ghk_assistantMaximizeTab:(long long)arg1;
- (id)ghk_legalSystemInfoOthers:(long long)arg1;
- (id)ghk_legalSystemInfoCarrier:(long long)arg1;
- (id)ghk_legalSystemInfoOS:(long long)arg1;
- (id)ghk_legalSystemInfoModel:(long long)arg1;
- (id)ghk_legalSystemInfoLocale:(long long)arg1;
- (id)ghk_legalSystemInfoAppVersion:(long long)arg1;
- (id)ghk_legalSystemInfoAppName:(long long)arg1;
- (id)ghk_legalSystemInfoContext:(long long)arg1;
- (id)ghk_legalSystemInfoSessionID:(long long)arg1;
- (id)ghk_legalSystemInfoTitle:(long long)arg1;
- (id)ghk_legalTextTOS:(long long)arg1;
- (id)ghk_legalTextPP:(long long)arg1;
- (id)ghk_legalTextASI:(long long)arg1;
- (id)ghk_legalTextString:(long long)arg1;
- (id)ghk_contactUsRequestSuccess:(long long)arg1;
- (id)ghk_contactUsRequestFailed:(long long)arg1;
- (id)ghk_requestAs:(long long)arg1;
- (id)ghk_describeOptionalIssueEntry:(long long)arg1;
- (id)ghk_closeDialog:(long long)arg1;
- (id)ghk_dialogButtonCancel:(long long)arg1;
- (id)ghk_dialogButtonOK:(long long)arg1;
- (id)ghk_useVoiceInput:(long long)arg1;
- (id)ghk_clearSearch:(long long)arg1;
- (id)ghk_exitHelp:(long long)arg1;
- (id)ghk_backButton:(long long)arg1;
- (id)ghk_offlineBarMessage:(long long)arg1;
- (id)ghk_offlineMessage:(long long)arg1;
- (id)ghk_offlineTitle:(long long)arg1;
- (id)ghk_exitToApp:(long long)arg1;
- (id)ghk_smartJourneysContactUsButtonSubTitle:(long long)arg1;
- (id)ghk_smartJourneysContactUsButtonTitle:(long long)arg1;
- (id)ghk_smartJourneysHelpCommunityButtonSubTitle:(long long)arg1;
- (id)ghk_smartJourneysHelpCommunityButtonTitle:(long long)arg1;
- (id)ghk_smartJourneysCardSubTitle:(long long)arg1;
- (id)ghk_smartJourneysCardTitle:(long long)arg1;
- (id)ghk_sendFeedbackString:(long long)arg1;
- (id)ghk_hideHoursString:(long long)arg1;
- (id)ghk_showHoursString:(long long)arg1;
- (id)ghk_fallbackFormProblemDescription:(long long)arg1;
- (id)ghk_formSubmitSend:(long long)arg1;
- (id)ghk_formSubmitCancel:(long long)arg1;
- (id)ghk_submitFailDialog:(long long)arg1;
- (id)ghk_emailConfirmation:(long long)arg1;
- (id)ghk_estimatedWait:(long long)arg1;
- (id)ghk_requestEmailTitle:(long long)arg1;
- (id)ghk_emailUsString:(long long)arg1;
- (id)ghk_phoneNumberTitle:(long long)arg1;
- (id)ghk_requestCallbackStringShort:(long long)arg1;
- (id)ghk_requestCallbackString:(long long)arg1;
- (id)ghk_chatString:(long long)arg1;
- (id)ghk_callUsString:(long long)arg1;
- (id)ghk_contactUsString:(long long)arg1;
- (id)ghk_failedToLoadHelpContent:(long long)arg1;
- (id)ghk_externalLinkNotAllowed:(long long)arg1;
- (id)ghk_topLevelTopicTitle:(long long)arg1;
- (id)ghk_topLevelTopic:(long long)arg1;
- (id)ghk_helpError:(long long)arg1;
- (id)ghk_searchSuggestionsOffline:(long long)arg1;
- (id)ghk_searchSuggestionsNotFound:(long long)arg1;
- (id)ghk_searchSuggestionsTitle:(long long)arg1;
- (id)ghk_recommendationsTitle:(long long)arg1;
- (id)ghk_invalidPhoneNumber:(long long)arg1;
- (id)ghk_invalidContactName:(long long)arg1;
- (id)ghk_countryCode:(long long)arg1;
- (id)ghk_countrySelection:(long long)arg1;
- (id)ghk_requestCallbackFailDialogInvalidNumber:(long long)arg1;
- (id)ghk_requestCallbackConfirmation:(long long)arg1;
- (id)ghk_requestCallbackFooter:(long long)arg1;
- (id)ghk_describeIssueEntry:(long long)arg1;
- (id)ghk_phoneNumberEntry:(long long)arg1;
- (id)ghk_contactNameEntry:(long long)arg1;
- (id)ghk_requestCallbackTitle:(long long)arg1;
- (id)ghk_chatPIPButtonTitle:(long long)arg1;
- (id)ghk_chatSurveySubmittedMessage:(long long)arg1;
- (id)ghk_chatSurveyFormTitle:(long long)arg1;
- (id)ghk_chatViewAgentHasEnteredText:(long long)arg1;
- (id)ghk_chatViewAgentTyping:(long long)arg1;
- (id)ghk_chatViewEndedByUser:(long long)arg1;
- (id)ghk_chatViewEndedByAgent:(long long)arg1;
- (id)ghk_chatViewButtonTakeSurvey:(long long)arg1;
- (id)ghk_chatViewElapsedTimeUnderOneMinute:(long long)arg1;
- (id)ghk_chatViewElapsedTimeInMinutesForAccessibility:(long long)arg1;
- (id)ghk_chatViewElapsedTimeInMinutes:(long long)arg1;
- (id)ghk_chatViewMessageStatusFailedWithRetry:(long long)arg1;
- (id)ghk_chatViewMessageStatusFailed:(long long)arg1;
- (id)ghk_chatViewMessageStatusPending:(long long)arg1;
- (id)ghk_chatViewTextEntrySend:(long long)arg1;
- (id)ghk_chatViewTextEntryPlaceholder:(long long)arg1;
- (id)ghk_chatViewTimedOutButtonRequestAgain:(long long)arg1;
- (id)ghk_chatViewTimedOutInformation:(long long)arg1;
- (id)ghk_chatViewTimedOutTitle:(long long)arg1;
- (id)ghk_chatQueueBackToAppInfo:(long long)arg1;
- (id)ghk_chatQueueNotificationInfoNoAPNS:(long long)arg1;
- (id)ghk_chatQueueNotificationInfo:(long long)arg1;
- (id)ghk_chatQueuePositionInfoOrdinal:(long long)arg1;
- (id)ghk_chatQueuePositionInfo:(long long)arg1;
- (id)ghk_requestChatFailDialog:(long long)arg1;
- (id)ghk_requestChatConfirmation:(long long)arg1;
- (id)ghk_requestChatTitle:(long long)arg1;
- (id)ghk_chatNewMessages:(long long)arg1;
- (id)ghk_chatRetrying:(long long)arg1;
- (id)ghk_chatCannotConnect:(long long)arg1;
- (id)ghk_chatRestoreFailedNoConnection:(long long)arg1;
- (id)ghk_chatRestoreFailedDifferentAccount:(long long)arg1;
- (id)ghk_chatRequestFailed:(long long)arg1;
- (id)ghk_chatViewBottomSheetEndChatSession:(long long)arg1;
- (id)ghk_chatViewBottomSheetEndChatRequest:(long long)arg1;
- (id)ghk_chatViewButtonRetry:(long long)arg1;
- (id)ghk_chatViewButtonEndChat:(long long)arg1;
- (id)ghk_chatViewButtonBackToApp:(long long)arg1;
- (id)ghk_smartCufInputHint:(long long)arg1;
- (id)ghk_smartCufInputPlaceholder:(long long)arg1;
- (id)ghk_smartCufHeaderTitle:(long long)arg1;
- (id)ghk_searchResultsSectionTitle:(long long)arg1;
- (id)ghk_issueResolutionSectionTitle:(long long)arg1;
- (id)ghk_searchHelp:(long long)arg1;
- (id)ghk_searchHelpTitle:(long long)arg1;
- (id)ghk_communityTitle:(long long)arg1;
- (id)ghk_articleViewTitle:(long long)arg1;
- (id)ghk_helpKitTitle:(long long)arg1;
- (id)uinavigationBackString;
- (id)uinavigationStringForId:(int)arg1;
- (id)uinavigationColorForNavigationBarButtonTitle;
- (id)uinavigationColorForNavigationBarTitle;
- (id)uinavigationColorForViewBackground;
- (id)uinavigationFontForNavigationBarButtonTitle;
- (id)uinavigationFontForNavigationBarLandscapeTitle;
- (id)uinavigationFontForNavigationBarTitle;
- (id)uinavigationImageForNavigationBarButtonBackgroundWithState:(unsigned long long)arg1;
- (id)uinavigationImageForNavigationBarBackButtonWithState:(unsigned long long)arg1;
- (id)uinavigationImageForNavigationBarBottomShadow;
- (id)uinavigationImageForLargeNavigationBarLandscapeBackground;
- (id)uinavigationImageForLargeNavigationBarBackground;
- (id)uinavigationImageForSmallNavigationBarLandscapeBackground;
- (id)uinavigationImageForSmallNavigationBarBackground;
- (id)uinavigationImageForFloatingHeader;
- (id)uinavigationImageWithResourceName:(id)arg1;
- (id)dialogPopoverArrowImageForEdge:(int)arg1;
- (id)dialogPopoverImageForEdge:(int)arg1;
- (id)dialogErrorImage;
- (id)dialogImageWithResourceName:(id)arg1;
- (id)dialogButtonFont;
- (id)dialogSubtitleFont;
- (id)dialogTitleFont;
- (id)dialogSendFeedbackIconImage;
- (id)dialogReportAProblemIconImage;
- (id)dialogPrintImage;
- (id)dialogOpenWebImage;
- (id)dialogMessageImage;
- (id)dialogLearnMoreImage;
- (id)dialogGPlusImage;
- (id)dialogEmailIconImage;
- (id)dialogEditIconImage;
- (id)dialogDoneIconImage;
- (id)dialogDismissIconImage;
- (id)dialogDeleteIconImage;
- (id)dialogCopyLinkIconImage;
- (id)dialogCancelIconImage;
- (id)dialogAddFromLibraryIconImage;
- (id)dialogAddPhotoIconImage;
- (id)dialogImageWithIconName:(id)arg1;
- (id)dialogDismissAlertVoiceOverHint;
- (id)dialogDismissAlertVoiceOverMessage;
- (id)dialogDismissPopupVoiceOverHint;
- (id)dialogDismissPopupVoiceOverMessage;
- (id)dialogDismissModalViewVoiceOverHint;
- (id)dialogDismissModalViewVoiceOverMessage;
- (id)dialogAccessibilityAlertString;
- (id)dialogTryAgainString;
- (id)dialogCancelString;
- (id)dialogAcknowledgeString;
- (id)dialogStringForId:(int)arg1;
- (id)hudButtonFont;
- (id)hudTextFontBold;
- (id)hudTextFont;
- (id)hudButtonTextColorHighlighted;
- (id)hudButtonTextColor;
- (id)hudSeparatorColor;
- (id)hudDarkTextColor;
- (id)hudTextColor;
- (id)hudBackgroundColor;
- (id)hudShadowColor;
- (id)hudMessageViewTitleA11yHint;
- (id)navigationBarButtonTitle;
- (id)navigationBarTitle;
- (id)navigationDarkContentColor;
- (id)navigationLightContentColor;
- (id)navigationDefaultHeaderBevelColor;
- (id)navigationDefaultHeaderBackgroundColor;
- (id)navigationDefaultStatusBarBackgroundColor;
- (id)quantumCollectionsInfoBarGestureHintString;
- (id)quantumCollectionsDeleteButtonString;
- (id)quantumCollectionViewsStringForId:(int)arg1;
- (id)contentViewsCheckBoxDeselectAccessibilityHint;
- (id)contentViewsCheckBoxSelectAccessibilityHint;
- (id)contentViewsDefaultErrorString;
- (id)contentViewsNoNetworkString;
- (id)contentViewsNoServerButtonString;
- (id)contentViewsTryAgainButtonString;
- (id)contentViewsStringForId:(int)arg1;
- (id)contentViewsErrorImage;
- (id)disabledOverlayBackgroundColor;
- (id)contentViewsImageWithResourceName:(id)arg1;
- (id)accessibilityNavigateBackString;
- (struct UIEdgeInsets)cardContentPadding;
- (id)highlightedTextColor;
- (id)editableTextColor;
- (id)actionColor;
- (id)lightTextColor;
- (id)mediumTextColor;
- (id)darkTextColor;
- (id)backgroundColor;
- (double)minimumCardHeaderFontSize;
- (id)cardHeaderFont;
- (id)cardDetailTextFont;
- (id)cardTextFont;
- (id)actionButtonFont;
- (id)darkButtonBackgroundImageForState:(unsigned long long)arg1;
- (id)lightButtonBackgroundImageForState:(unsigned long long)arg1;
- (id)redButtonBackgroundImageForState:(unsigned long long)arg1;
- (id)blueButtonBackgroundImageForState:(unsigned long long)arg1;
- (id)buttonBackgroundImageNamed:(id)arg1;
- (id)fadedVerticalDividerImage;
- (id)checkmarkImage;
- (id)cellDisclosureAccessoryImage;
- (id)cellDividerImage;
- (id)cellBackgroundSelectedDarkImage;
- (id)checkboxImageForState:(unsigned long long)arg1;
- (id)highlightedBackgroundForHeight:(double)arg1;
- (id)coreStringForID:(int)arg1;
- (id)coreImageWithResourceName:(id)arg1;

@end


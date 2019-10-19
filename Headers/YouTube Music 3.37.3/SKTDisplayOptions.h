//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SKTFullScreenViewControllerOptions.h"

#import "SKTTopSuggestionsViewControllerOptions-Protocol.h"

@class NSArray, NSNumber, NSString, QTMColorGroup, SKTClientConfig, SKTExperimentOptions, SKTLocalizedStringOverrides, SKTUIAlertDialogOptions, SKTUIGridContactDisplayOptions, SKTUIInAppContactDisplayOptions, UIView, UIViewController;
@protocol SKTClientSharingDisplayOptions, SKTContactListColorOverrides, SKTDisplayOptionsDelegate;

@interface SKTDisplayOptions : SKTFullScreenViewControllerOptions <SKTTopSuggestionsViewControllerOptions>
{
    _Bool _showHeaderOnMinimizedView;
    _Bool _showMoreOptionsOnAllOSVersions;
    unsigned long long _initialSuggestionsLayout;
    unsigned long long _initialSuggestionCount;
    unsigned long long _initialSuggestionGridRows;
    SKTUIGridContactDisplayOptions *_gridContactDisplayOptions;
    id <SKTContactListColorOverrides> _topSuggestionsColorOverrides;
    double _minimizedFooterVerticalMargin;
    UIViewController<SKTClientSharingDisplayOptions> *_clientSharingOptionsViewController;
    CDUnknownBlockType _activityViewControllerBlock;
    unsigned long long _fullScreenCancelAction;
    unsigned long long _bottomSheetStyle;
    id <SKTDisplayOptionsDelegate> _delegate;
}

@property(nonatomic) __weak id <SKTDisplayOptionsDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long bottomSheetStyle; // @synthesize bottomSheetStyle=_bottomSheetStyle;
@property(nonatomic) _Bool showMoreOptionsOnAllOSVersions; // @synthesize showMoreOptionsOnAllOSVersions=_showMoreOptionsOnAllOSVersions;
@property(nonatomic) unsigned long long fullScreenCancelAction; // @synthesize fullScreenCancelAction=_fullScreenCancelAction;
@property(copy, nonatomic) CDUnknownBlockType activityViewControllerBlock; // @synthesize activityViewControllerBlock=_activityViewControllerBlock;
@property(retain, nonatomic) UIViewController<SKTClientSharingDisplayOptions> *clientSharingOptionsViewController; // @synthesize clientSharingOptionsViewController=_clientSharingOptionsViewController;
@property(nonatomic) double minimizedFooterVerticalMargin; // @synthesize minimizedFooterVerticalMargin=_minimizedFooterVerticalMargin;
@property(nonatomic) _Bool showHeaderOnMinimizedView; // @synthesize showHeaderOnMinimizedView=_showHeaderOnMinimizedView;
@property(retain, nonatomic) id <SKTContactListColorOverrides> topSuggestionsColorOverrides; // @synthesize topSuggestionsColorOverrides=_topSuggestionsColorOverrides;
@property(retain, nonatomic) SKTUIGridContactDisplayOptions *gridContactDisplayOptions; // @synthesize gridContactDisplayOptions=_gridContactDisplayOptions;
@property(nonatomic) unsigned long long initialSuggestionGridRows; // @synthesize initialSuggestionGridRows=_initialSuggestionGridRows;
@property(nonatomic) unsigned long long initialSuggestionCount; // @synthesize initialSuggestionCount=_initialSuggestionCount;
@property(nonatomic) unsigned long long initialSuggestionsLayout; // @synthesize initialSuggestionsLayout=_initialSuggestionsLayout;
- (void).cxx_destruct;
- (id)initWithThemeColorGroup:(id)arg1 inAppContactDisplayOptions:(id)arg2 clientID:(int)arg3;
- (id)initWithThemeColorGroup:(id)arg1 clientID:(int)arg2;

// Remaining properties
@property(readonly, nonatomic) SKTClientConfig *clientConfig;
@property(readonly, nonatomic) int clientID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) int entryPoint;
@property(retain, nonatomic) SKTExperimentOptions *experimentOptions;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) SKTUIInAppContactDisplayOptions *inAppContactDisplayOptions;
@property(retain, nonatomic) NSArray *initiallySelectedTargets;
@property(nonatomic) __weak UIView *loggingParent;
@property(nonatomic) unsigned long long permissionsBehaviors;
@property(retain, nonatomic) SKTUIAlertDialogOptions *permissionsPreRequestOptions;
@property(nonatomic) unsigned long long selectionMode;
@property(retain, nonatomic) SKTUIAlertDialogOptions *settingsRedirectDialogOptions;
@property(retain, nonatomic) NSArray *sharedWithTargetGroups;
@property(nonatomic) _Bool showGroupResults;
@property(retain, nonatomic) SKTLocalizedStringOverrides *stringOverrides;
@property(retain, nonatomic) NSNumber *submissionID;
@property(readonly) Class superclass;
@property(retain, nonatomic) QTMColorGroup *themeColorGroup;
@property(nonatomic) _Bool validateContacts;

@end


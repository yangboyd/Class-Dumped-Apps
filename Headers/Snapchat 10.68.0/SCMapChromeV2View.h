//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMapBaseChromeView.h"

#import "SCMapChrome-Protocol.h"
#import "SCMapChromeButtonControllerListener-Protocol.h"

@class NSArray, NSString, SCExperimentManager, SCGrowingButton, SCMapCompassButton, SCMapFooterActionButton, SCMapLocalityAndWeatherView, UIButton, UILabel, UIView;
@protocol SCMapChromeButtonControlling, SCMapChromeDelegate, SCMapLocalityLabel, SCMapTimeAndWeatherView;

@interface SCMapChromeV2View : SCMapBaseChromeView <SCMapChromeButtonControllerListener, SCMapChrome>
{
    _Bool _headerContentVisible;
    _Bool _toolbarVisible;
    SCGrowingButton *_locationSharingButton;
    UIView *_compassContainer;
    SCGrowingButton *_backButton;
    SCGrowingButton *_searchButton;
    UIButton *_largeBackButton;
    SCMapFooterActionButton *_exploreActionButton;
    SCMapFooterActionButton *_statusActionButton;
    _Bool _hasUnreadExploreStatuses;
    SCMapLocalityAndWeatherView *_localityAndWeatherView;
    SCExperimentManager *_experimentManager;
    _Bool _showExploreHeader;
    SCGrowingButton *_closeExploreButton;
    CDUnknownBlockType _onCloseExploreButtonTappedBlock;
    UILabel *_exploreHeaderLabel;
    _Bool _backButtonHidden;
    _Bool _locationSettingsButtonBadged;
    _Bool _hideLoginRequiredOptions;
    id <SCMapChromeDelegate> _delegate;
    long long _locationSettingsButtonAppearance;
    SCMapCompassButton *_compassButton;
    NSArray *_extraHeaderItems;
    UIView *_cameraButton;
    id <SCMapChromeButtonControlling> _exploreButtonController;
    id <SCMapChromeButtonControlling> _statusButtonController;
    UIView *_replaceCompassButtonWithView;
}

+ (id)createBackButton;
+ (id)createSearchButton;
+ (id)createLocationSharingButtonForAppearance:(long long)arg1;
+ (id)locationSharingButtonImageForAppearance:(long long)arg1;
@property(nonatomic) _Bool hideLoginRequiredOptions; // @synthesize hideLoginRequiredOptions=_hideLoginRequiredOptions;
@property(retain, nonatomic) UIView *replaceCompassButtonWithView; // @synthesize replaceCompassButtonWithView=_replaceCompassButtonWithView;
@property(retain, nonatomic) id <SCMapChromeButtonControlling> statusButtonController; // @synthesize statusButtonController=_statusButtonController;
@property(retain, nonatomic) id <SCMapChromeButtonControlling> exploreButtonController; // @synthesize exploreButtonController=_exploreButtonController;
@property(retain, nonatomic) UIView *cameraButton; // @synthesize cameraButton=_cameraButton;
@property(copy, nonatomic) NSArray *extraHeaderItems; // @synthesize extraHeaderItems=_extraHeaderItems;
@property(readonly, nonatomic) SCMapCompassButton *compassButton; // @synthesize compassButton=_compassButton;
@property(nonatomic) _Bool locationSettingsButtonBadged; // @synthesize locationSettingsButtonBadged=_locationSettingsButtonBadged;
@property(nonatomic) long long locationSettingsButtonAppearance; // @synthesize locationSettingsButtonAppearance=_locationSettingsButtonAppearance;
@property(nonatomic) __weak id <SCMapChromeDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool backButtonHidden; // @synthesize backButtonHidden=_backButtonHidden;
- (void).cxx_destruct;
- (void)_showTooltipForButton:(id)arg1 animated:(_Bool)arg2 fallbackToBadge:(_Bool)arg3;
- (void)_updateButton:(id)arg1 controller:(id)arg2 animated:(_Bool)arg3;
- (void)mapChromeButtonController:(id)arg1 didUpdateAnimated:(_Bool)arg2;
@property(copy, nonatomic) NSString *exploreHeaderTitle;
- (void)_didTapCloseExploreButton;
- (void)hideExploreHeader;
- (void)showExploreHeaderWithCloseBlock:(CDUnknownBlockType)arg1;
- (void)_didTapOnSearchButton;
- (void)_didTapOnBackButton;
- (void)_didTapOnExplorerButton;
- (void)_didTapOnStatusButton;
- (void)_didTapOnLocationSharingButton;
- (void)addTooltipAndConstraints:(id)arg1;
- (id)locationSettingsButton;
- (id)_headerConfigurationForExplore;
- (id)_defaultHeaderConfiguration;
- (id)_largeBackButton;
- (id)_closeExploreButton;
- (id)_exploreHeaderLabel;
- (double)bottomCenterButtonBottomMargin;
- (void)restoreAfterScreenshotRendered;
- (id)overlayViewsForShareController;
@property(readonly, nonatomic) UIView<SCMapTimeAndWeatherView> *timeAndWeatherView;
@property(readonly, nonatomic) UIView<SCMapLocalityLabel> *localityLabel;
- (void)_updateUIWithAnimationType:(long long)arg1;
- (void)_setupSearchButton;
- (void)_setupBackButton;
- (void)_setupLocationSharingButton;
- (void)_setupTimeAndWeatherView;
- (void)_setupCompass;
- (void)_setupFloatingActionButtons;
- (id)initWithFrame:(struct CGRect)arg1 experimentManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIView *headerView;
@property(readonly) Class superclass;

@end


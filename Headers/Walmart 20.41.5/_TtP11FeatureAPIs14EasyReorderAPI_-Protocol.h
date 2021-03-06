//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, UIAlertAction, UIAlertController, UIImage, UIViewController;
@protocol _TtP11FeatureAPIs22EROItemManagerProtocol_, _TtP11FeatureAPIs32EasyReorderRemoveItemsSubscriber_;

@protocol _TtP11FeatureAPIs14EasyReorderAPI_
- (void)dismissBottomSheetController;
- (void)navigateToMyItemsWithSource:(NSString *)arg1;
- (void)navigateToFindSimilarItemsWithEntryType:(NSString *)arg1;
- (void)navigateToEasyReorderWithEntryType:(NSString *)arg1 entry:(long long)arg2;
@property(nonatomic, readonly) UIViewController *tabBarItemViewController;
@property(nonatomic, readonly) id <_TtP11FeatureAPIs22EROItemManagerProtocol_> eroItemManager;
- (void)itemRemovalUnsubscribe:(id <_TtP11FeatureAPIs32EasyReorderRemoveItemsSubscriber_>)arg1;
- (void)itemRemovalSubscribe:(id <_TtP11FeatureAPIs32EasyReorderRemoveItemsSubscriber_>)arg1;
- (UIAlertController *)alertControllerWithTitle:(NSString *)arg1 line1Text:(NSString *)arg2 primaryAction:(UIAlertAction *)arg3 line2Text:(NSString *)arg4 productText:(NSString *)arg5 productImage:(UIImage *)arg6 secondaryAction:(UIAlertAction *)arg7;
- (void)registerEnabilityWithWillChangeHandler:(void (^)(_Bool, _Bool))arg1 didChangeHandler:(void (^)(_Bool, _Bool))arg2;
@property(nonatomic, readonly) _Bool isSnackbarDisabledInSearch;
@property(nonatomic, readonly) _Bool isSnackbarDisabledInHome;
@property(nonatomic, readonly) _Bool isShowingErrorAlert;
@property(nonatomic, readonly) _Bool isAtcSinglePacksEnabledInSearch;
@property(nonatomic, readonly) _Bool isSearchPPIAddToCartEnabled;
@property(nonatomic, readonly) _Bool easyReorderEnabled;
@property(nonatomic, readonly) _Bool isEasyReorderTabSelected;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCScanCardTableViewCell.h"

#import "SCScanCardAdPreviewProtocol-Protocol.h"

@class NSString, SCAdDataSource, SCScanCardButton, SCUserSession, SOJUScannableActionAdCreativePreview, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView, UIViewController;
@protocol SCScanCardAdPreviewDelegate;

@interface SCScanCardAdCreativePreview : SCScanCardTableViewCell <SCScanCardAdPreviewProtocol>
{
    SOJUScannableActionAdCreativePreview *_actionData;
    UIView *_headerBackgroundView;
    UIImageView *_imageView;
    SCScanCardButton *_openButton;
    UIButton *_cancelButton;
    UIView *_secondaryHeader;
    NSString *_scanData;
    UIActivityIndicatorView *_buttonIndicator;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    double _totalCardHeight;
    NSString *_scannableId;
    long long _version;
    SCUserSession *_userSession;
    UIViewController *_parentViewController;
    SCAdDataSource *_adDataSource;
    id <SCScanCardAdPreviewDelegate> _adPreviewDelegate;
}

@property(nonatomic) __weak id <SCScanCardAdPreviewDelegate> adPreviewDelegate; // @synthesize adPreviewDelegate=_adPreviewDelegate;
- (void).cxx_destruct;
- (void)showButtonOpenState;
- (void)hideButtonLoader;
- (void)_showFailureMessage:(id)arg1;
- (void)_handleSnapcodeFetchFailure:(id)arg1;
- (void)_handleAdDataSourceFetchResult:(_Bool)arg1;
- (void)_handleSnapcodeFetchSuccessRenderDataUsingAdDataSource:(id)arg1;
- (void)_downloadMedia;
- (void)_didTapOpenButton;
- (void)_didTapCancelButton;
- (void)_didTapHeader;
- (void)_updatePreferredSize;
- (void)updateStyle;
- (void)transitionToContentAnimated:(_Bool)arg1;
- (id)initWithActionData:(id)arg1 scanData:(id)arg2 scannableId:(id)arg3 version:(long long)arg4 userSession:(id)arg5 parentViewController:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


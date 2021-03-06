//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Instabug/IBGFeaturesStateTableViewCellDelegate-Protocol.h>

@class IBGFeaturesCustomRefreshControl, IBGPoweredByView, UIActivityIndicatorView, UIRefreshControl, UITableView, UIView;
@protocol IBGFeaturesTableViewStateHandlerDelegate;

@interface IBGFeaturesTableViewStateHandler : NSObject <IBGFeaturesStateTableViewCellDelegate>
{
    unsigned long long _state;
    id <IBGFeaturesTableViewStateHandlerDelegate> _delegate;
    UITableView *_tableView;
    UIRefreshControl *_refreshControl;
    IBGFeaturesCustomRefreshControl *_customRefreshControl;
    UIActivityIndicatorView *_loadMoreActivityIndicator;
    IBGPoweredByView *_poweredByView;
    UIView *_footerView;
    double _footerViewHeight;
}

@property(nonatomic) double footerViewHeight; // @synthesize footerViewHeight=_footerViewHeight;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) IBGPoweredByView *poweredByView; // @synthesize poweredByView=_poweredByView;
@property(retain, nonatomic) UIActivityIndicatorView *loadMoreActivityIndicator; // @synthesize loadMoreActivityIndicator=_loadMoreActivityIndicator;
@property(retain, nonatomic) IBGFeaturesCustomRefreshControl *customRefreshControl; // @synthesize customRefreshControl=_customRefreshControl;
@property(retain, nonatomic) UIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <IBGFeaturesTableViewStateHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)didTapEmptyStateButton;
- (long long)activityIndicatorStyle;
- (_Bool)shouldAddPoweredByView;
- (void)updateLoadMoreActivityInidicatorConstraints;
- (void)stopLoadingMore;
- (void)stopLoading;
- (void)reloadView;
- (double)cellSize;
- (id)currentStateCellAtIndex:(id)arg1;
- (_Bool)shouldDisplayStateCell;
- (void)didFinishLoadingWithNewObjectsCount:(long long)arg1 state:(long long)arg2;
- (void)didFinishLoadingWithError;
- (void)didStartLoadingMore;
- (void)didStartLoading;
- (void)pullDownToRefreshAction;
- (id)initWithTableView:(id)arg1;

@end


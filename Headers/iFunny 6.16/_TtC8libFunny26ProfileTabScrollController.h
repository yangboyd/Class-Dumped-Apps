//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Funny/IFProfileThumbsModelDelegate-Protocol.h>

@class _TtC8libFunny20ProfileTabScrollView;
@protocol IFScrollContainerViewProtocol, IFUserProtocol, _TtP8libFunny23ActiveTabIndexUpdatable_;

@interface _TtC8libFunny26ProfileTabScrollController : UIViewController <IFProfileThumbsModelDelegate>
{
    // Error parsing type: , name: tabViewControllers
    // Error parsing type: , name: router
    // Error parsing type: , name: scrollContainerDelegate
    // Error parsing type: , name: tabBadgeDelegate
    // Error parsing type: , name: refreshControl
    // Error parsing type: , name: isTopController
    // Error parsing type: , name: isSystemScroll
    // Error parsing type: , name: activitiesLoaded
    // Error parsing type: , name: wasSegmentButtonTapped
    // Error parsing type: , name: updatingElements
    // Error parsing type: , name: updatingTime
    // Error parsing type: , name: containerHeightList
    // Error parsing type: , name: tabScrollView
    // Error parsing type: , name: activeTabIndexDelegate
    // Error parsing type: , name: userInfo
    // Error parsing type: , name: tabIndex
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)tabSelectedWithTabIndex:(long long)arg1;
- (_Bool)requestFocusOnContainerWithContainer:(id)arg1;
- (void)makeTransitionWithPreviousTab:(long long)arg1;
- (_Bool)reloadTabData;
- (void)containerViewUpdatedWithContainer:(id)arg1;
- (id)tabContainerFor:(long long)arg1;
- (long long)tabFor:(id)arg1;
- (void)setContentTopPaddingWithContentTopPadding:(double)arg1;
- (id)tabContainerBy:(long long)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithCoder:(id)arg1;
- (id)initWithRouter:(id)arg1 scrollContainerDelegate:(id)arg2 tabBadgeDelegate:(id)arg3 refreshControl:(id)arg4 isTopController:(_Bool)arg5;
@property(nonatomic, readonly) UIViewController<IFScrollContainerViewProtocol> *currentContainer;
@property(nonatomic) long long tabIndex; // @synthesize tabIndex;
@property(nonatomic, retain) id <IFUserProtocol> userInfo; // @synthesize userInfo;
@property(nonatomic) __weak id <_TtP8libFunny23ActiveTabIndexUpdatable_> activeTabIndexDelegate; // @synthesize activeTabIndexDelegate;
@property(nonatomic, readonly) _TtC8libFunny20ProfileTabScrollView *tabScrollView; // @synthesize tabScrollView;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWESlidingViewControllerDelegate-Protocol.h"

@class AWESlidingViewController, AWETikTokWelcomePageControl, AWEUILoadingView, NSArray, NSNumber, NSString, UIButton, UIView;

@interface AWETikTokProWelcomeViewController : UIViewController <AWESlidingViewControllerDelegate>
{
    _Bool _goBackToEntry;
    AWESlidingViewController *_slidingViewController;
    NSArray *_sliderContentPages;
    AWETikTokWelcomePageControl *_pageControl;
    UIButton *_nextButton;
    NSArray *_dataArray;
    NSArray *_dataIdentifierArray;
    long long _pageNumber;
    NSArray *_welcomePageArray;
    AWEUILoadingView *_loadingView;
    UIView *_categoryHeaderView;
    long long _transitionType;
    long long _categoryIndex;
    NSNumber *_proG;
    CDUnknownBlockType _entryCompletion;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool goBackToEntry; // @synthesize goBackToEntry=_goBackToEntry;
@property(copy, nonatomic) CDUnknownBlockType entryCompletion; // @synthesize entryCompletion=_entryCompletion;
@property(retain, nonatomic) NSNumber *proG; // @synthesize proG=_proG;
@property(nonatomic) long long categoryIndex; // @synthesize categoryIndex=_categoryIndex;
@property(nonatomic) long long transitionType; // @synthesize transitionType=_transitionType;
@property(retain, nonatomic) UIView *categoryHeaderView; // @synthesize categoryHeaderView=_categoryHeaderView;
@property(retain, nonatomic) AWEUILoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NSArray *welcomePageArray; // @synthesize welcomePageArray=_welcomePageArray;
@property(nonatomic) long long pageNumber; // @synthesize pageNumber=_pageNumber;
@property(retain, nonatomic) NSArray *dataIdentifierArray; // @synthesize dataIdentifierArray=_dataIdentifierArray;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) AWETikTokWelcomePageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) NSArray *sliderContentPages; // @synthesize sliderContentPages=_sliderContentPages;
@property(retain, nonatomic) AWESlidingViewController *slidingViewController; // @synthesize slidingViewController=_slidingViewController;
- (_Bool)p_hasAppleConnect;
- (void)prepareAndTransferToEntry;
- (void)showChooseProGViewController:(_Bool)arg1 nextActionBlock:(CDUnknownBlockType)arg2;
- (void)nextButtonTapped:(id)arg1;
- (void)transferToTikTokProCategory;
- (void)backBtnClicked;
- (void)slidingViewController:(id)arg1 willTransitionToViewController:(id)arg2 transitionType:(long long)arg3;
- (void)slidingViewController:(id)arg1 didFinishTransitionFromPreviousViewController:(id)arg2 currentViewController:(id)arg3;
- (void)slidingViewControllerDidScroll:(id)arg1;
- (id)slidingViewController:(id)arg1 viewControllerAtIndex:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)numberOfControllers:(id)arg1;
- (id)categoryInformationArray;
- (void)p_setupUI;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;
- (id)initFromEntryWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


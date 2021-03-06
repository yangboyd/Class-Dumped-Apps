//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGKeyboardObserverHideDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGKeyboardObserverShowDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGLeadGenFooterViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGLeadGenQuestionCellDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGLeadGenStageController-Protocol.h>
#import <InstagramAppCoreFramework/IGListAdapterDataSource-Protocol.h>
#import <InstagramAppCoreFramework/UICollectionViewDelegate-Protocol.h>

@class IGKeyboardObserver, IGLeadGenLinkHandler, IGLeadGenLogger, IGLeadGenQuestionStageViewModel, IGListAdapter, NSMutableArray, NSSet, NSString, UICollectionView, UIView;
@protocol IGLeadGenFooterViewDelegate, UIScrollViewDelegate;

@interface IGLeadGenQuestionStageController : NSObject <IGListAdapterDataSource, UICollectionViewDelegate, IGLeadGenFooterViewDelegate, IGLeadGenQuestionCellDelegate, IGKeyboardObserverShowDelegate, IGKeyboardObserverHideDelegate, IGLeadGenStageController>
{
    UIView *_stageView;
    IGLeadGenLinkHandler *_linkHandler;
    IGLeadGenQuestionStageViewModel *_stageViewModel;
    id <IGLeadGenFooterViewDelegate> _footerViewDelegate;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    NSMutableArray *_dataSource;
    id <UIScrollViewDelegate> _scrollViewDelegate;
    IGKeyboardObserver *_keyboardObserver;
    struct CGRect _keyboardFrame;
    IGLeadGenLogger *_logger;
    NSSet *_emojis;
}

+ (id)emojiStoreWithShouldCheckOSVersion:(_Bool)arg1;
+ (id)controllerForStageViewModel:(id)arg1 scrollViewDelegate:(id)arg2 footerViewDelegate:(id)arg3 linkHandler:(id)arg4 logger:(id)arg5;
- (void).cxx_destruct;
- (id)_fetchEmojis;
- (unsigned long long)_getErrorStateFromNewValue:(id)arg1 withFieldType:(id)arg2;
- (void)_pushUpViewIfKeyboardIsBlockingViewport;
- (void)_updateQuestionsErrorViewOnFormSubmission;
- (long long)_firstQuestionHasError;
- (void)footerViewDidTapSecondaryButton:(id)arg1;
- (void)footerViewDidTapPrimaryButton:(id)arg1;
- (void)questionCellDidEndEditingWithQuestionFieldKey:(id)arg1 newValue:(id)arg2;
- (void)questionCellDidBeginEditingWithQuestionFieldKey:(id)arg1 questionCell:(id)arg2;
- (void)keyboardObserverKeyboardDidHide:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserverKeyboardDidShow:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)userInputForReview;
- (id)userInputForFormSubmission;
- (id)stageView;
- (void)didExitStageController;
- (void)didEnterStageController;
- (id)_initWithStageViewModel:(id)arg1 scrollViewDelegate:(id)arg2 footerViewDelegate:(id)arg3 linkHandler:(id)arg4 logger:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


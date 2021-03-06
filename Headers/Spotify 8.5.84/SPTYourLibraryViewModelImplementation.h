//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTYourLibraryModelObserver-Protocol.h"
#import "SPTYourLibraryViewModel-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, NSURL, SPTObserverManager, SPTPageCreationContext, SPTYourLibraryLogger;
@protocol SPTProfileUserData, SPTYourLibraryGroupHeaderActionViewModel, SPTYourLibraryModel, SPTYourLibraryTestManager;

@interface SPTYourLibraryViewModelImplementation : NSObject <SPTYourLibraryModelObserver, SPTYourLibraryViewModel>
{
    _Bool _loaded;
    NSString *_title;
    SPTObserverManager *_observers;
    id <SPTYourLibraryModel> _model;
    SPTPageCreationContext *_pageCreationContext;
    id <SPTProfileUserData> _profileUserData;
    id <SPTYourLibraryTestManager> _testManager;
    SPTYourLibraryLogger *_logger;
    id <SPTYourLibraryGroupHeaderActionViewModel> _groupHeaderActionViewModel;
    NSMutableArray *_sections;
    NSMutableDictionary *_viewControllers;
    NSArray *_groupData;
    NSURL *_pendingStateRestoreURI;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(retain, nonatomic) NSURL *pendingStateRestoreURI; // @synthesize pendingStateRestoreURI=_pendingStateRestoreURI;
@property(copy, nonatomic) NSArray *groupData; // @synthesize groupData=_groupData;
@property(retain, nonatomic) NSMutableDictionary *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) id <SPTYourLibraryGroupHeaderActionViewModel> groupHeaderActionViewModel; // @synthesize groupHeaderActionViewModel=_groupHeaderActionViewModel;
@property(readonly, nonatomic) SPTYourLibraryLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTYourLibraryTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) id <SPTProfileUserData> profileUserData; // @synthesize profileUserData=_profileUserData;
@property(retain, nonatomic) SPTPageCreationContext *pageCreationContext; // @synthesize pageCreationContext=_pageCreationContext;
@property(retain, nonatomic) id <SPTYourLibraryModel> model; // @synthesize model=_model;
@property(readonly, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)notifyObserversNavigateToGroup:(unsigned long long)arg1 index:(unsigned long long)arg2;
- (void)notifyObserversModelUpdateWithActiveGroupIndex:(unsigned long long)arg1 pageIndex:(unsigned long long)arg2;
- (void)notifiyObserversModelUpdated;
- (void)load;
- (void)yourLibraryModel:(id)arg1 didUpdatePageProviders:(id)arg2 groupData:(id)arg3;
- (_Bool)stateRestoreToURI:(id)arg1;
- (id)pageViewControllerAtIndexPath:(id)arg1;
- (id)pageURIAtIndexPath:(id)arg1;
- (id)groupTitleForSection:(unsigned long long)arg1;
- (id)pageTitleAtIndexPath:(id)arg1;
- (unsigned long long)numberPagesForSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)initWithModel:(id)arg1 pageCreationContext:(id)arg2 profileUserData:(id)arg3 testManager:(id)arg4 logger:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


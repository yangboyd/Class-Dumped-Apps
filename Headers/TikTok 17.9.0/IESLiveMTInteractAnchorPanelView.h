//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class IESLiveMTInteractiveAnchorStore, NSString, UILabel, UITableView;
@protocol HTSLiveDetailRouter, IESLiveMTInteractionEntranceActions, IESLiveMTInteractionEntranceProvider, IESLiveMTInteractiveAnchorActions, IESLiveMTPKAnchorRouter, IESLiveToastFactory;

@interface IESLiveMTInteractAnchorPanelView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isOpenInteract;
    CDUnknownBlockType _onUserPicked;
    IESLiveMTInteractiveAnchorStore *_store;
    UIView *_emptyView;
    UIView *_defaultView;
    UITableView *_tableView;
    UILabel *_headerLabel;
    id <IESLiveToastFactory> _toastFactory;
    id <IESLiveMTInteractionEntranceActions> _entranceActionCreator;
    id <IESLiveMTInteractiveAnchorActions> _actionDispatcher;
    id <IESLiveMTInteractionEntranceProvider> _entranceProvider;
    id <HTSLiveDetailRouter> _router;
    id <IESLiveMTPKAnchorRouter> _newPKRouter;
    unsigned long long _maxCount;
    unsigned long long _pendingCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long pendingCount; // @synthesize pendingCount=_pendingCount;
@property(nonatomic) unsigned long long maxCount; // @synthesize maxCount=_maxCount;
@property(retain, nonatomic) id <IESLiveMTPKAnchorRouter> newPKRouter; // @synthesize newPKRouter=_newPKRouter;
@property(retain, nonatomic) id <HTSLiveDetailRouter> router; // @synthesize router=_router;
@property(retain, nonatomic) id <IESLiveMTInteractionEntranceProvider> entranceProvider; // @synthesize entranceProvider=_entranceProvider;
@property(retain, nonatomic) id <IESLiveMTInteractiveAnchorActions> actionDispatcher; // @synthesize actionDispatcher=_actionDispatcher;
@property(retain, nonatomic) id <IESLiveMTInteractionEntranceActions> entranceActionCreator; // @synthesize entranceActionCreator=_entranceActionCreator;
@property(retain, nonatomic) id <IESLiveToastFactory> toastFactory; // @synthesize toastFactory=_toastFactory;
@property(nonatomic) _Bool isOpenInteract; // @synthesize isOpenInteract=_isOpenInteract;
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *defaultView; // @synthesize defaultView=_defaultView;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) IESLiveMTInteractiveAnchorStore *store; // @synthesize store=_store;
@property(copy, nonatomic) CDUnknownBlockType onUserPicked; // @synthesize onUserPicked=_onUserPicked;
- (id)crateListView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)openAuidenceInteract;
- (void)bindWithStore:(id)arg1;
- (void)setupViews;
- (void)updateDefaultStyle;
- (id)initWithFrame:(struct CGRect)arg1 andInteractIsOpen:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

